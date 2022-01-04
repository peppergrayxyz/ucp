
#include "ucGcReader.h"

#include <assert.h>

#include "../ucd/ucGraphemeClusterBoundary.h"

void ucGcReader_init(ucGcReader* reader)
{
    ucCpReader_init(&(reader->cpReader));
    reader->gcState = UCGRAPHEMESTATE_UNKNOWN;
    reader->lastChr = utf8Null;
    reader->len = 0;
    reader->numBytes = 0;
}

ucGcReaderResult ucGcReader_process(ucGcReader* reader, int eof, unsigned char c)
{
    ucGcReaderResult res;

    res.isBoundary = 0;
    res.cp = ucCpReader_process(&(reader->cpReader), eof, c);

    if (res.cp.status > UCREADERSTATUS_CONTINUE)
    {
        res.isBoundary = (reader->len > 0) && ucGraphemeClusterBoundary_get(reader->lastChr, res.cp.chr, &(reader->gcState));

        // printf("%8x - %d\n", res.cp.chr.cp32, res.isBoundary);

        if (res.isBoundary)
        {
            reader->len = 1;
            reader->numBytes = res.cp.len;
        }
        else
        {
            reader->len += 1;
            reader->numBytes += res.cp.len;
        }

        reader->lastChr = res.cp.chr;
    }

    res.len = reader->len;
    res.numBytes = reader->numBytes;

    return res;
}
