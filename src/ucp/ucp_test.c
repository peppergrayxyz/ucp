
#include "ucp.h"

#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

#include "ucp.h"


typedef struct ucpTestCase {
    const unsigned char* title;
    const unsigned char* input;
    const unsigned char* output;
    bool useLen;
    ucpProcRes_t r;
} ucpTestCase;

ucpTestCase ucpTestCases[] =
{
    {
        "Test string w/o errors",
        "Hello",
        "Hello",
        false,
        { { 5, 0, 5 }, { 5, 0, 5 } }
    },
    {
        "Test string with errors",
        "He\xF0\xF0o",
        "He��o",
        false,
        { { 5, 0, 5 }, { 9, 0, 9 } }
    },
    {
        "Test string w/o errors + len ",
        "H€llo® wörld!",
        "H€llo® wörld!",
        true,
        { { 17, 17, 0 }, { 17, 17, 0 } }
    },
    {
        "Test string with errors + len (fits)",
        "He\xF0\x80\x80\xF0\x80\x80o",
        "He��o",
        true,
        { { 9, 9, 0 }, { 9, 9, 0 } }
    },
    {
        "Test string with errors + len (does not fit)",
        "He\xF0\xF0o",
        "He��o",
        true,
        { { 5, 3, 2 }, { 9, 5, 4 } }
    }
};

size_t test_ucp_process(FILE* info, FILE* error, size_t numTest, size_t i)
{
    ucpTestCase tc = ucpTestCases[i];
    ucp8str_t str = NULL;
    ucpByte_t x, y;
    size_t j = 0;
    ucpProcRes_t r;
    size_t len = 0;
    size_t bufSize = 0;
    bool fail = 0;


    /* parseNoAlloc */

    if (tc.useLen)
    {
        len = strlen(tc.input);
        bufSize = len + 1;
        if (len == 0) abort();
        str = malloc(bufSize);
        if (!str) abort();
    }

    r = UCP.parseNoAlloc(NULL, tc.input, len, str, bufSize);

    if( (r.i.len          != tc.r.i.len)          ||
        (r.i.numBytesProc != tc.r.i.numBytesProc) ||
        (r.i.numBytesLeft != tc.r.i.numBytesLeft) ||
        (r.o.len          != tc.r.o.len)          ||
        (r.o.numBytesProc != tc.r.o.numBytesProc) ||
        (r.o.numBytesLeft != tc.r.o.numBytesLeft) )
    {
        fprintf(error, "not ok %zu - # %s: Expected { { %zu, %zu, %zu }, { %zu, %zu, %zu } } but saw "
                                                   "{ { %zu, %zu, %zu }, { %zu, %zu, %zu } }\n", 
            numTest, tc.title, 
            tc.r.i.len, tc.r.i.numBytesProc, tc.r.i.numBytesLeft, tc.r.o.len, tc.r.o.numBytesProc, tc.r.o.numBytesLeft,
               r.i.len,    r.i.numBytesProc,    r.i.numBytesLeft,    r.o.len,    r.o.numBytesProc,    r.o.numBytesLeft);
        
        fail = 1;
    }

    if (!fail && tc.useLen && (str[r.o.numBytesProc] != '\0'))
    {
        fprintf(error, "not ok %zu - # %s: Expected string to be zero terminated, but saw %2x\n", numTest, tc.title, str[r.o.numBytesProc]);
        fail = 1;
    }

    free(str);
    if (fail) return 1;


    /* parse */

    str = UCP.parse(NULL, tc.input, len);

    do
    {
        x = tc.output[j];
        y = str[j];

        if (x != y)
        {
            fprintf(error, "not ok %zu - # %s: Expected %2x on pos %zu but saw %2x\n", numTest, tc.title, x, j, y);
            free(str);
            return 1;
        }

        j += 1;

    } while (x != '\0' && y != '\0');

    fprintf(info, "ok %3zu - # %s\n", numTest, tc.title);
    free(str);

    return 0;
}

char* test_ucp_title()
{
    return "Unicode Processor";
}

size_t test_ucp_num()
{
    return sizeof(ucpTestCases) / sizeof(ucpTestCase);
}

size_t test_ucp_run(FILE* info, FILE* error, size_t numTest, size_t i)
{
    return test_ucp_process(info, error, numTest, i);
}
