
#ifndef __UTF8_GCREADER_H_
#define __UTF8_GCREADER_H_

#include "../ucReaderStatus/ucReaderStatus.h"
#include "../ucGraphemecluster/ucGraphemecluster.h"
#include "../ucCpReader/ucCpReader.h"
#include "../ucd/ucGraphemeClusterBoundary.h"

#include <stddef.h> // size_t

/*
    Read char by char from source and process as utf8
*/

typedef struct ucGcReaderResult {
    ucCpReaderResult cp;
    unsigned int isBoundary;
    size_t len;
    size_t numBytes;
} ucGcReaderResult;

typedef struct ucGcReader {
    ucCpReader cpReader;
    ucGraphemeClusterBoundaryState_t gcState;
    ucCodepoint lastChr;
    size_t len;
    size_t numBytes;
} ucGcReader;

    void ucGcReader_init(ucGcReader* reader);

    ucGcReaderResult ucGcReader_process(ucGcReader* reader, int eof, unsigned char c);

#endif
