
#include "ucGraphemecluster.h"
/*
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

typedef struct utf8Char_len_TestCase {
    utf8Char chr;
    unsigned int len;
} utf8Char_len_TestCase;

utf8Char_len_TestCase utf8Char_len_TestCases[] =
{
    { {{0x00}},                   1 },
    { {{0x01}},                   1 },
    { {{0x01, 0x01}},             2 },
    { {{0x01, 0x01, 0x01}},       3 },
    { {{0x01, 0x01, 0x01, 0x01}}, 4 },
};

typedef struct utf8Char_toHex_TestCase {
    utf8Char chr;
    char strU[9];
    char strL[9];
} utf8Char_toHex_TestCase;

size_t num_utf8Char_len_TestCases = (sizeof(utf8Char_len_TestCases) / sizeof(utf8Char_len_TestCase));

utf8Char_toHex_TestCase utf8Char_toHex_TestCases[] =
{
    { {{0x00}},                   "0",        "0" },
    { {{0x01}},                   "1",        "1" },
    { {{0x0A}},                   "A",        "a" },
    { {{0x0F}},                   "F",        "f" },
    { {{0x20}},                   "20",       "20" },
    { {{0x3B}},                   "3B",       "3b" },
    { {{0xC4}},                   "C4",       "c4" },
    { {{0x6C, 0x7F}},             "6C7F",     "6c7f" },
    { {{0xD9, 0xE0}},             "D9E0",     "d9e0" },
    { {{0x0E, 0x0F}},             "E0F",      "e0f" },
    { {{0x9D, 0x0E, 0x1A}},       "9D0E1A",   "9d0e1a" },
    { {{0xB2, 0xF4, 0xB2}},       "B2F4B2",   "b2f4b2" },
    { {{0x0B, 0xF4, 0xB2}},       "BF4B2",    "bf4b2" },
    { {{0xA2, 0xF3, 0xB4, 0xC6}}, "A2F3B4C6", "a2f3b4c6" },
    { {{0x1B, 0x2C, 0x3D, 0x5E}}, "1B2C3D5E", "1b2c3d5e" },
    { {{0x0B, 0x2C, 0x3D, 0x5E}}, "B2C3D5E",  "b2c3d5e" },
};

size_t num_utf8Char_toHex_TestCases = (sizeof(utf8Char_toHex_TestCases) / sizeof(utf8Char_toHex_TestCase));

int consitencyTest(utf8Char chr)
{
    unsigned int len = utf8Char_len(chr);

    // consitency test
    switch (len)
    {
    case 1: if (chr.c[1] == 0) return 0;
    case 2: if (chr.c[2] == 0) return 0;
    case 3: if (chr.c[3] == 0) return 0;
    }

    switch (len)
    {
    case 4: if (chr.c[3] != 0) return 0;
    case 3: if (chr.c[2] != 0) return 0;
    case 2: if (chr.c[1] != 0) return 0;
    }

    return 1;
}



char* test_utf8Char_title()
{
    return "UTF8 Grapheme";
}

size_t test_utf8Char_num()
{
    return
        num_utf8Char_len_TestCases +
        num_utf8Char_toHex_TestCases
        ;
}

#define U8CHR_2H_NOK(desc, max, cmp, cmpRef)                                                                  \
    if (strncmp(cmp, cmpRef, max) != 0)                                                                       \
    {                                                                                                         \
        fprintf(error, "not ok %d - # " #desc ": Expected result %s but saw %s\n", numTest, cmpRef, cmp);     \
        return 1;                                                                                             \
    }

#define U8CHR_NE0_NOK(desc, output)                                                                  \
    if (output != 0)                                                                       \
    {                                                                                                         \
        fprintf(error, "not ok %d - # " #desc "\n", numTest);     \
        return 1;                                                                                             \
    }

size_t test_utf8Char_run(FILE* info, FILE* error, size_t numTest, size_t i)
{
    size_t j = i;

    if (j < num_utf8Char_len_TestCases)
    {
        if (j == 0) printf("#\n# - len\n");

        utf8Char chr = utf8Char_len_TestCases[i].chr;

        unsigned int lenRef = utf8Char_len_TestCases[i].len;
        unsigned int lenCal = utf8Char_len(chr);

        if (lenCal != lenRef)
        {
            fprintf(error, "not ok %d - # Expected result %d but saw %d\n", numTest, lenRef, lenCal);
            return 1;
        }

        fprintf(info, "ok %3d - # %d\n", numTest, lenRef);
        return 0;
    }
    j -= num_utf8Char_len_TestCases;

    if (j < num_utf8Char_toHex_TestCases)
    {
        if (j == 0) printf("#\n# - from/to Hex\n");

        utf8CharHex strU = utf8Char_toHex(utf8Char_toHex_TestCases[j].chr, 1);
        utf8CharHex strL = utf8Char_toHex(utf8Char_toHex_TestCases[j].chr, 0);

        utf8Char chr1 = utf8Char_fromHex(strU);
        utf8Char chr2 = utf8Char_fromHex(strL);

        U8CHR_NE0_NOK("length inconsistant", consitencyTest(chr1));
        U8CHR_NE0_NOK("length inconsistant", consitencyTest(chr2));

        utf8CharHex str1 = utf8Char_toHex(chr1, 1);
        utf8CharHex str2 = utf8Char_toHex(chr2, 1);
    
        U8CHR_2H_NOK("toHex", UTF8_CHAR_HEX_NUM_BYTES, utf8CharHex_toString(strU), utf8Char_toHex_TestCases[j].strU)
        U8CHR_2H_NOK("toHex", UTF8_CHAR_HEX_NUM_BYTES, utf8CharHex_toString(strL), utf8Char_toHex_TestCases[j].strL)

        U8CHR_2H_NOK("fromHex", UCP_CP_NUM_BYTES, utf8CharHex_toString(str1), utf8Char_toHex_TestCases[j].strU)
        U8CHR_2H_NOK("fromHex", UCP_CP_NUM_BYTES, utf8CharHex_toString(str2), utf8Char_toHex_TestCases[j].strU)

        U8CHR_2H_NOK("to/fromHexString", UTF8_CHAR_HEX_NUM_BYTES, utf8Char_toHexString(utf8Char_fromHexString(utf8Char_toHex_TestCases[j].strU), 1), utf8Char_toHex_TestCases[j].strU)
        U8CHR_2H_NOK("to/fromHexString", UTF8_CHAR_HEX_NUM_BYTES, utf8Char_toHexString(utf8Char_fromHexString(utf8Char_toHex_TestCases[j].strL), 0), utf8Char_toHex_TestCases[j].strL)

        fprintf(info, "ok %3d - # %8s\n", numTest, utf8Char_toHex_TestCases[j].strU);

        return 0;
    }
    j -= num_utf8Char_toHex_TestCases;



    return 0;
}
*/