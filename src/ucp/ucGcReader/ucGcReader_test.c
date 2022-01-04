
#include "ucGcReader.h"

#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

#include "../ucd/ucGraphemeBreakTest.h"

ucGraphemeBreakTestCase ucGcReaderTestCases[] =
{
    {
        "Test string w/o errors",
        "H€llo® wörld!",
        { "H", "€", "l", "l", "o", "®", " ", "w", "ö", "r", "l", "d", "!" }
    },
    {
        "Test string with errors",
        "H€ll\xF4\xBF\xBF\xC0® wörld!",
        { "H", "€", "l", "l", "�", "�", "®", " ", "w", "ö", "r", "l", "d", "!" }
    },
    {
        "Incomplete sequences",
        "\xF4x \xF4\xBFy \xBFz",
        { "�", "x", " ", "�", "y", " ", "�", "z" }
    },
    {
        "Example String",
        "a̐éö̲\r\n", // 61 cc 90 65 cc 81 6f cc 88 cc b2 0d 0a
        { "a̐", "é", "ö̲", "\r\n" }
    },
    {
        "Flags",
        "🇦🇨🇦🇩🇦🇪",
        { "🇦🇨", "🇦🇩", "🇦🇪" }
    }
};

size_t test_ucGcReader_process(FILE* info, FILE* error, size_t numTest, size_t i)
{
    ucGcReader reader;

    ucGcReaderResult res;
    size_t m = 0;
    size_t n = 0;
    size_t fail = 0;
    unsigned char buf[64];
    unsigned char c = '\0';
    unsigned char* p = buf;    

    // if (i != 35) return 0;
    
    ucGraphemeBreakTestCase *tcs = ((i * sizeof(ucGraphemeBreakTestCase)) < sizeof(ucGcReaderTestCases)) ? ucGcReaderTestCases : ucGraphemeBreakTestCases;
    size_t t_i = ((i * sizeof(ucGraphemeBreakTestCase)) < sizeof(ucGcReaderTestCases)) ? i : i - (sizeof(ucGcReaderTestCases)/ sizeof(ucGraphemeBreakTestCase));
    ucGraphemeBreakTestCase tc = tcs[t_i];

    ucGcReader_init(&reader);

    do
    {
        c = tc.input[n++];

        do
        {
            res = ucGcReader_process(&reader, c == '\0', c);

            if (res.cp.status > UCREADERSTATUS_CONTINUE)
            {
                if (res.isBoundary)
                {
                    *p = '\0';

                    fail = (strcmp(buf, tc.output[m]) != 0);
                    p = buf;
                    if(!fail) m++;
                }

                if (!fail)
                {
                    for (size_t i = 0; i < res.cp.len; i++, p++) *p = res.cp.chr.cp[i];
                }
            }

            assert(p < (buf + sizeof(buf) - 1));

        } while (res.cp.rerun && !fail);

    } while (c != '\0' && !fail);

    if (res.cp.status != UCREADERSTATUS_OK)
    {
        fprintf(error, "not ok %zu - # %s: Expected result status %d but saw %d\n",
                numTest, tc.title, UCREADERSTATUS_OK, res.cp.status);
        fail = 1;
    }
    else
    {
        if (!fail)
        {
            fprintf(info, "ok %3zu - # %s\n", numTest, tc.title);
        }
        else
        {
            fprintf(error, "not ok %zu - # %s: Expected ", numTest, tc.title);
            for (size_t j = 0; tc.output[m][j] != '\0'; j++ ) fprintf(error, "%02x", tc.output[m][j]);
            fprintf(error, " but saw ");
            for (unsigned char* x = buf; *x != '\0'; x++) fprintf(error, "%02x", *x);
            fprintf(error, "\n");
        }
    }

    return fail;
}

char* test_ucGcReader_title()
{
    return "Unicode Graphemecluster Reader";
}

size_t test_ucGcReader_num()
{
    return (sizeof(ucGcReaderTestCases) + sizeof(ucGraphemeBreakTestCases)) / sizeof(ucGraphemeBreakTestCase);
}

size_t test_ucGcReader_run(FILE* info, FILE* error, size_t numTest, size_t i)
{
    return test_ucGcReader_process(info, error, numTest, i);
}