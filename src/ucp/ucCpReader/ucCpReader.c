
#include "ucCpReader.h"

#include <assert.h>

void ucCpReader_init(ucCpReader* reader)
{
    assert(reader != NULL);
    if(!reader) return;

    reader->pos = 0;
}

typedef enum ucCpReaderAction
{
    UCREADERSTATUS_ACTION_CONTINUE,
    UCREADERSTATUS_ACTION_DONE,
    UCREADERSTATUS_ACTION_DONE_RERUN
} ucCpReaderAction;

ucCpReaderResult ucCpReader_process(ucCpReader* reader, int eof, unsigned char c)
{
    {
        ucCpReaderResult error = { utf8ReplacementChar, UCREADERSTATUS_ERROR, 0, 0 };
        assert(reader != NULL);
        if (!reader) return error;
    }
    
    ucCpReaderAction action = UCREADERSTATUS_ACTION_CONTINUE;

    if (reader->pos == 0)
    {
        reader->chr       = utf8Null;
        reader->chr.cp[0] = c;
        reader->len       = 0;
        reader->result    = UCREADERSTATUS_OK;

        if (c <= 127)                  reader->len = 1;
        else if (c >= 194 && c <= 223) reader->len = 2;
        else if (c >= 224 && c <= 239) reader->len = 3;
        else if (c >= 240 && c <= 244) reader->len = 4;
        else
        {
            action = UCREADERSTATUS_ACTION_DONE;

            if (c >= 128 && c <= 191)      reader->result = UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_SEQUENCEBYTE;
            else if (c >= 192 && c <= 193) reader->result = UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OVERLONG_ENCODING;
            else if (c >= 245)             reader->result = UCREADERSTATUS_ERROR_INVALID_UTF8_STARTBYTE_OUT_OF_RANGE;
            else assert(0);
        }
    }
    else
    {
        if (eof != 0)
        {
            reader->result = UCREADERSTATUS_ERROR_UNEXPECTED_EOF;
        }
        else if (c < 128 || c > 191)
        {
            if (reader->result == UCREADERSTATUS_OK)
            {
                reader->result = UCREADERSTATUS_ERROR_INVALID_UTF8_SEQUENCEBYTE;
                action         = UCREADERSTATUS_ACTION_DONE_RERUN;
            }
            // else - another error already occured
        }
        // else - this is a valid sequence byte

        reader->chr.cp[reader->pos] = c;
    }

    if (action <= UCREADERSTATUS_ACTION_CONTINUE)
    {
        if (reader->pos >= (reader->len - 1)) action = UCREADERSTATUS_ACTION_DONE;
        else reader->pos++;
    }

    if (action > UCREADERSTATUS_ACTION_CONTINUE)
    {
        assert(reader->result > UCREADERSTATUS_CONTINUE);

        reader->pos = 0;

        if (reader->result != UCREADERSTATUS_OK) 
        {
            reader->chr = utf8ReplacementChar;
            reader->len = ucCodepoint_len(utf8ReplacementChar);
        }

        return (ucCpReaderResult) { reader->chr, reader->result, (action == UCREADERSTATUS_ACTION_DONE_RERUN), reader->len };
    }

    assert(reader->result == UCREADERSTATUS_OK);

    return (ucCpReaderResult) { utf8Null, UCREADERSTATUS_CONTINUE, 0, 0 };
}
