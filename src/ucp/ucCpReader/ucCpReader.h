
#ifndef __UTF8_CPREADER_H_
#define __UTF8_CPREADER_H_

#include "../ucReaderStatus/ucReaderStatus.h"
#include "../ucCodepoint/ucCodepoint.h"

#include <stddef.h> // size_t

/*
    Read char by char from source and process as utf8
*/

typedef struct ucCpReaderResult {
    ucCodepoint chr;
    ucReaderStatus status;
    unsigned int rerun;
    size_t len;
} ucCpReaderResult;

    static inline unsigned char* ucCpReaderResult_toString(ucCpReaderResult *res) {
        /*
            printf("%s", ucCpReaderResult->chr.c) will always work
            (either status == 0 or chr == utf8ReplacementChar --> c[3] == 0)
        */
        return res->chr.cp;
    }

typedef struct ucCpReader {
    ucCodepoint chr;
    unsigned int pos;
    unsigned int len;
    ucReaderStatus result;
} ucCpReader;

    void ucCpReader_init(ucCpReader* reader);

    /*
        Usage:

        unsigned char c = ...

        do
        {
            res  = ucCpReader_process(&reader, eof, c);

            if (res.status > UCREADERSTATUS_CONTINUE)
            {
                // Process result
                ucCodepoint myUcCp = res.chr;
            }

        } while (res.rerun);

        Result:

        if rerun == 1, there was an error with the last sequence, rerun to correctly parse the current char again

        e.g. "\C2\7F"
        i   input[j]    chr     UCREADERSTATUS                      rerun
        1   0: c2       0       CONTINUE                            0
        2   1: 7f       efbfbd  ERROR_INVALID_UTF8_SEQUENCEBYTE     1       <-- this error is for c2, rerun to parse 7f
        3   1: 7f       7f      OK                                  0
        4   2: 0        0       OK                                  0


     */
    ucCpReaderResult ucCpReader_process(ucCpReader* reader, int eof, unsigned char c);

#endif
