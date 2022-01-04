
#include "ucCpReader.h"

#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

typedef struct ucCpReaderTestCase {
    const unsigned char* title;
    const unsigned char* input;
    const unsigned char* output;
    const ucReaderStatus status;
    int breakOnFirstError;
    size_t len_input;
    size_t len_output;
} ucCpReaderTestCase;

#define SP2 "  "

#define ESCAPE_SEQUENCE_1B(B1)              ((char []){ (char) 0x ## B1, '\0' })
#define ESCAPE_SEQUENCE_2B(B1, B2)          ((char []){ (char) 0x ## B1, (char) 0x ## B2, '\0' })
#define ESCAPE_SEQUENCE_3B(B1, B2, B3)      ((char []){ (char) 0x ## B1, (char) 0x ## B2, (char) 0x ## B3, '\0' })
#define ESCAPE_SEQUENCE_4B(B1, B2, B3, B4)  ((char []){ (char) 0x ## B1, (char) 0x ## B2, (char) 0x ## B3, (char) 0x ## B4, '\0' })

#define UTF8_TEST_CASE(TITLE, INPUT, RESULT, STATUS, BREAKONFIRSTERROR) { TITLE " - " #STATUS, INPUT, RESULT, STATUS, BREAKONFIRSTERROR, sizeof(INPUT), sizeof(RESULT) }
#define UTF8_TEST_CASE__OK(TITLE, INPUT, RESULT, STATUS) UTF8_TEST_CASE( " ok: " TITLE, INPUT, RESULT, STATUS, 0)
#define UTF8_TEST_CASE_NOK(TITLE, INPUT, RESULT, STATUS) UTF8_TEST_CASE( "nok: " TITLE, INPUT, RESULT, STATUS, 1)

#define UTF8_TEST_CASE_NOK_1B_S(B1,             RESULT, ERROR) UTF8_TEST_CASE_NOK( SP2 SP2 SP2 #B1, ESCAPE_SEQUENCE_1B(B1),             RESULT, ERROR )
#define UTF8_TEST_CASE_NOK_2B_S(B1, B2,         RESULT, ERROR) UTF8_TEST_CASE_NOK( SP2 SP2 #B1 #B2, ESCAPE_SEQUENCE_2B(B1, B2),         RESULT, ERROR )
#define UTF8_TEST_CASE_NOK_3B_S(B1, B2, B3,     RESULT, ERROR) UTF8_TEST_CASE_NOK( SP2 #B1 #B2 #B3, ESCAPE_SEQUENCE_3B(B1, B2, B3),     RESULT, ERROR )
#define UTF8_TEST_CASE_NOK_4B_S(B1, B2, B3, B4, RESULT, ERROR) UTF8_TEST_CASE_NOK( #B1 #B2 #B3 #B4, ESCAPE_SEQUENCE_4B(B1, B2, B3, B4), RESULT, ERROR )

#define UTF8_TEST_CASE__OK_1B_S(B1,             RESULT, ERROR) UTF8_TEST_CASE__OK( SP2 SP2 SP2 #B1, ESCAPE_SEQUENCE_1B(B1),             RESULT, ERROR )
#define UTF8_TEST_CASE__OK_2B_S(B1, B2,         RESULT, ERROR) UTF8_TEST_CASE__OK( SP2 SP2 #B1 #B2, ESCAPE_SEQUENCE_2B(B1, B2),         RESULT, ERROR )
#define UTF8_TEST_CASE__OK_3B_S(B1, B2, B3,     RESULT, ERROR) UTF8_TEST_CASE__OK( SP2 #B1 #B2 #B3, ESCAPE_SEQUENCE_3B(B1, B2, B3),     RESULT, ERROR )
#define UTF8_TEST_CASE__OK_4B_S(B1, B2, B3, B4, RESULT, ERROR) UTF8_TEST_CASE__OK( #B1 #B2 #B3 #B4, ESCAPE_SEQUENCE_4B(B1, B2, B3, B4), RESULT, ERROR )

#define UTF8_TEST_CASE__OK_1B(B1)             UTF8_TEST_CASE__OK_1B_S(B1,             ESCAPE_SEQUENCE_1B(B1),             UCREADERSTATUS_OK )
#define UTF8_TEST_CASE__OK_2B(B1, B2)         UTF8_TEST_CASE__OK_2B_S(B1, B2,         ESCAPE_SEQUENCE_2B(B1, B2),         UCREADERSTATUS_OK )
#define UTF8_TEST_CASE__OK_3B(B1, B2, B3)     UTF8_TEST_CASE__OK_3B_S(B1, B2, B3,     ESCAPE_SEQUENCE_3B(B1, B2, B3),     UCREADERSTATUS_OK )
#define UTF8_TEST_CASE__OK_4B(B1, B2, B3, B4) UTF8_TEST_CASE__OK_4B_S(B1, B2, B3, B4, ESCAPE_SEQUENCE_4B(B1, B2, B3, B4), UCREADERSTATUS_OK )

#define UTF8_TEST_CASE_NOK_1B(B1,             ERROR) UTF8_TEST_CASE_NOK_1B_S( B1,             utf8ReplacementChar.cp, ERROR )
#define UTF8_TEST_CASE_NOK_2B(B1, B2,         ERROR) UTF8_TEST_CASE_NOK_2B_S( B1, B2,         utf8ReplacementChar.cp, ERROR )
#define UTF8_TEST_CASE_NOK_3B(B1, B2, B3,     ERROR) UTF8_TEST_CASE_NOK_3B_S( B1, B2, B3,     utf8ReplacementChar.cp, ERROR )
#define UTF8_TEST_CASE_NOK_4B(B1, B2, B3, B4, ERROR) UTF8_TEST_CASE_NOK_4B_S( B1, B2, B3, B4, utf8ReplacementChar.cp, ERROR )

ucCpReaderTestCase ucCpReaderTestCases[] =
{
    // Random real world examples
    UTF8_TEST_CASE__OK_1B(61),               // a
    UTF8_TEST_CASE__OK_2B(C2, AE),           // ®
    UTF8_TEST_CASE__OK_3B(E2, 82, AC),       // €
    UTF8_TEST_CASE__OK_4B(F0, 9D, 84, 9E),   // 𝄞

    /*
        https://de.wikipedia.org/wiki/UTF-8

        00000000–01111111 	00–7F 	0–127 	    Ein-Byte lange Zeichen, deckungsgleich mit US-ASCII.
        10000000–10111111 	80–BF 	128–191 	Zweites, drittes oder viertes Byte einer Bytesequenz.
        11000000–11000001 	C0–C1 	192–193 	Start einer 2 Byte langen Sequenz, welche den Codebereich aus 0 bis 127 abbildet, unzulässig
        11000010–11011111 	C2–DF 	194–223 	Start einer 2 Byte langen Sequenz (U+0080 … U+07FF)
        11100000–11101111 	E0–EF 	224–239 	Start einer 3 Byte langen Sequenz (U+0800 … U+FFFF)
        11110000–11110100 	F0–F4 	240–244 	Start einer 4 Byte langen Sequenz (Inklusive der ungültigen Codebereiche von 110000 bis 13FFFF)
        11110101–11110111 	F5–F7 	245–247 	Ungültig nach RFC 3629: Start einer 4 Byte langen Sequenz für Codebereich über 140000
        11111000–11111011 	F8–FB 	248–251 	Ungültig nach RFC 3629: Start einer 5 Byte langen Sequenz
        11111100–11111101 	FC–FD 	252–253 	Ungültig nach RFC 3629: Start einer 6 Byte langen Sequenz
        11111110–11111111 	FE–FF 	254–255 	Ungültig. In der ursprünglichen UTF-8-Spezifikation nicht definiert.
    */

    // Start Byte
    UTF8_TEST_CASE__OK_1B(00),
    UTF8_TEST_CASE__OK_1B(7F),
    UTF8_TEST_CASE_NOK_1B(80, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_1B(BF, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_1B(C0, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OVERLONG_ENCODING),
    UTF8_TEST_CASE_NOK_1B(C1, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OVERLONG_ENCODING),
    UTF8_TEST_CASE__OK_2B(C2, 80),
    UTF8_TEST_CASE__OK_2B(DF, BF),
    UTF8_TEST_CASE__OK_3B(E0, 80, 80),
    UTF8_TEST_CASE__OK_3B(EF, BF, BF),
    UTF8_TEST_CASE__OK_4B(F0, 80, 80, 80),
    UTF8_TEST_CASE__OK_4B(F4, BF, BF, BF),
    UTF8_TEST_CASE_NOK_1B(F5, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(F7, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(F8, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(FB, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(FC, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(FD, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(FE, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),
    UTF8_TEST_CASE_NOK_1B(FF, UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE),

    // Sequence Bytes
    UTF8_TEST_CASE_NOK_2B_S(C2, C2,         "�",        UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_2B_S(C2, C0,         "�",        UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_2B_S(DF, C0,         "��",       UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE__OK_2B_S(C2, 7F,         "�\x7F",    UCREADERSTATUS_OK),

    UTF8_TEST_CASE_NOK_3B_S(E0, E0, E0,     "���",      UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_3B_S(E0, 7F, 80,     "�\x7F�",   UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_3B_S(EF, C0, BF,     "���",      UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_3B_S(EF, BF, C0,     "��",       UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE__OK_3B_S(E0, 80, 7F,     "�\x7F",    UCREADERSTATUS_OK),

    UTF8_TEST_CASE_NOK_4B_S(F0, F0, F0, F0, "����",     UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_4B_S(F0, 7F, 80, 80, "�\x7F��",  UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_4B_S(F0, 80, 7F, 80, "�\x7F�",   UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_4B_S(F4, C0, BF, BF, "����",     UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_4B_S(F4, BF, C0, BF, "���",      UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE_NOK_4B_S(F4, BF, BF, C0, "���",      UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE),
    UTF8_TEST_CASE__OK_4B_S(F0, 80, 80, 7F, "�\x7F",    UCREADERSTATUS_OK),

    // Random real world examples (cont.)
    UTF8_TEST_CASE
    (
        "Test string w/o errors ", 
        "H€llo® wörld!",
        "H€llo® wörld!",
        UCREADERSTATUS_OK, 0
    ),
    UTF8_TEST_CASE
    (
        "Test string with errors",
        "H€ll\xF4\xBF\xBF\xC0® wörld!",
        "H€ll��® wörld!",
        UCREADERSTATUS_OK, 0
    ),
    UTF8_TEST_CASE
    (
        "Incomplete sequences   ",
        "\xF4x \xF4\xBFy \xBFz",
        "�x �y �z",
        UCREADERSTATUS_OK, 0
    )
};

size_t test_ucCpReader_process(FILE* info, FILE* error, size_t numTest, size_t i)
{
    ucCpReader reader;

    unsigned char x, y;
    ucCpReaderResult res = {0};
    size_t m = 0;
    size_t fail = 0;
    size_t len = ucCpReaderTestCases[i].len_input;
    int breakOnFirstError = ucCpReaderTestCases[i].breakOnFirstError;

    ucCpReader_init(&reader);

    for (size_t n = 0; (n < len) && !fail; n++)
    {
        int eof = (n == (len - 1)) ? 1 : 0;
        unsigned char c = ucCpReaderTestCases[i].input[n];

        do
        {
            res = ucCpReader_process(&reader, eof, c);

            if (breakOnFirstError && res.status > UCREADERSTATUS_OK)
            {
                fail = 1;
            }
            else if (res.status > UCREADERSTATUS_CONTINUE)
            {
                size_t lenChr = strlen(ucCpReaderResult_toString(&res));
                assert(res.len == ucCodepoint_len(res.chr));
                assert(lenChr == res.len || (lenChr == 0 && res.len == 1));

                for (unsigned short p = 0; (p < res.len) && !fail; p++, m++)
                {
                    assert(m <= ucCpReaderTestCases[i].len_output);
                    x = ucCpReaderTestCases[i].output[m];
                    y = res.chr.cp[p];

                    if (x != y) fail = 1;
                }
            }

        } while (res.rerun && !fail);
    }

    if (res.status != ucCpReaderTestCases[i].status)
    {
        fprintf(error, "not ok %zu - # %s: Expected result status %d but saw %d\n",
            numTest, ucCpReaderTestCases[i].title, ucCpReaderTestCases[i].status, res.status);
        fail = 1;
    }
    else
    {
        if (breakOnFirstError) fail = 0;

        if (!fail)
        {
            fprintf(info, "ok %3zu - # %s\n", numTest, ucCpReaderTestCases[i].title);
        }
        else
        {
            fprintf(error, "not ok %zu - # %s: Expected %02x on pos %zu but saw %02x\n",
                numTest, ucCpReaderTestCases[i].title, x, m, y);
        }
    }

    return fail;
}

char* test_ucCpReader_title()
{
    return "Unicode Codepoint Reader";
}

size_t test_ucCpReader_num()
{
    return sizeof(ucCpReaderTestCases) / sizeof(ucCpReaderTestCase);
}

size_t test_ucCpReader_run(FILE* info, FILE* error, size_t numTest, size_t i)
{
    return test_ucCpReader_process(info, error, numTest, i);
}
