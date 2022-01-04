
#include "ucCodepoint.h"

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

typedef struct ucCodepoint_len_TestCase {
    ucCodepoint cp;
    unsigned int len;
} ucCodepoint_len_TestCase;

ucCodepoint_len_TestCase ucCodepoint_len_TestCases[] =
{
    { {{{0x00}}},                   1 },
    { {{{0x01}}},                   1 },
    { {{{0x01, 0x01}}},             2 },
    { {{{0x01, 0x01, 0x01}}},       3 },
    { {{{0x01, 0x01, 0x01, 0x01}}}, 4 },
};

size_t num_ucCodepoint_len_TestCases = (sizeof(ucCodepoint_len_TestCases) / sizeof(ucCodepoint_len_TestCase));


#include <stdint.h>

char* test_ucCodepoint_title()
{
    return "Unicode Codepoint";
}

size_t test_ucCodepoint_num()
{
    return
        num_ucCodepoint_len_TestCases;
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

size_t test_ucCodepoint_run(FILE* info, FILE* error, size_t numTest, size_t i)
{
    if (i == 0) printf("#\n# - len\n");

    ucCodepoint cp = ucCodepoint_len_TestCases[i].cp;

    unsigned int lenRef = ucCodepoint_len_TestCases[i].len;
    unsigned int lenCal = ucCodepoint_len(cp);

    if (lenCal != lenRef)
    {
        fprintf(error, "not ok %zu - # Expected result %d but saw %d\n", numTest, lenRef, lenCal);
        return 1;
    }

    fprintf(info, "ok %3zu - # %d\n", numTest, lenRef);
    return 0;
}
