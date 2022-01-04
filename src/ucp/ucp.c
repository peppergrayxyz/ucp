
#include "ucp.h"

#include <malloc.h>
#include <assert.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

ucpProcRes_t ucpParseNoAlloc(const ucpConf_t* conf, const unsigned char* str, size_t len, ucp8str_t buf, size_t bufSize);
ucp8str_t    ucpParse(const ucpConf_t* conf, const unsigned char* str, size_t len);
void         ucpFree(ucp8str_t str);
// ucpNext_t ucpNextCp(const ucpConf_t* conf, const unsigned char* str, size_t pos, size_t len);
// ucpNext_t ucpNextGc(const ucpConf_t* conf, const unsigned char* str, size_t pos, size_t len);

const struct UCP_s UCP = {
    .parseNoAlloc = ucpParseNoAlloc,
	.parse        = ucpParse,
    .free         = ucpFree,
	// .nextCp = ucpNextCp,
	// .nextGc = ucpNextGc,
};

#include "ucCpReader/ucCpReader.h"


ucpProcRes_t ucpParseNoAlloc(const ucpConf_t* config, const unsigned char* str, size_t len, ucp8str_t buf, size_t bufSize)
{
    int eof  = 0;
    ucpConf_t conf;
    size_t lenBuffer = bufSize;
    ucCpReader reader;
    ucCpReaderResult res;
    ucpProcRes_t r = { {0, 0, 0}, {0, 0, 0} };

    if (config == NULL) conf = UC8defaultConf;
    else conf = *config;

    ucCpReader_init(&reader);

    if (buf == NULL || bufSize == 0)
    {
        assert(buf == NULL && bufSize == 0);
        lenBuffer = 0;
    }

    do
    {
        eof = (len > 0 && r.i.len == len) || str[r.i.len] == '\0';
        ucpByte_t c = eof ? '\0' : str[r.i.len];

        do
        {
            res = ucCpReader_process(&reader, eof, c);

            if (res.status >= UCREADERSTATUS_OK)
            {
                size_t next_o = r.o.len + res.len;
                size_t next_i = r.i.len + (res.rerun ? 0 : 1);

                if (next_o < lenBuffer)
                {
                    r.o.numBytesProc = next_o;
                    r.i.numBytesProc = next_i;

                    memcpy(&(buf[r.o.len]), res.chr.cp, res.len);
                }
                else
                {
                    if ((eof || next_o == lenBuffer) && lenBuffer > 0)
                    {
                        buf[r.o.numBytesProc] = '\0';
                    }

                    if(!eof) r.o.numBytesLeft += res.len;
                }

                if (!eof) r.o.len = next_o;
            }

        } while (res.rerun);

        if (!eof) r.i.len += 1;

    } while (!eof);

    r.i.numBytesLeft = r.i.len - r.i.numBytesProc;

    return r;
}

ucp8str_t ucpParse(const ucpConf_t* config, const unsigned char* str, size_t len)
{
    ucpProcRes_t r;
    ucp8str_t u8str = NULL;
    size_t bufSize = 0;

    if (len > 0)
    {
        bufSize = sizeof(ucpByte_t) * (len + 1);
        u8str = malloc(bufSize);
        if (!u8str) return NULL;
    }

    r = ucpParseNoAlloc(config, str, len, u8str, bufSize);

    if (r.o.numBytesLeft > 0)
    {
        bufSize = sizeof(ucpByte_t) * (r.o.len + 1);
        ucp8str_t u8strNew = realloc(u8str, bufSize);

        if (!u8strNew)
        {
            free(u8str);
            return NULL;
        }
        u8str = u8strNew;

        r = ucpParseNoAlloc(config, &(str[r.i.numBytesProc]),   r.i.numBytesLeft,
                                    &(u8str[r.o.numBytesProc]), r.o.numBytesLeft + 1);
    }

    return u8str;
}

void ucpFree(ucp8str_t str)
{
    free(str);
}


#ifdef __cplusplus
}
#endif
