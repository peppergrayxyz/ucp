
#include "ucCodepoint.h"
#include "byteorder.h"

#include <limits.h>
#include <stdint.h>
#include <assert.h>

#if defined(BO_HOST_ORDER) && ((BO_HOST_ORDER == BO_LITTLE_ENDIAN) || (BO_HOST_ORDER == BO_BIG_ENDIAN))
#define UCP_BO_LITTLE (BO_HOST_ORDER == BO_LITTLE_ENDIAN ? 1 : -1)
#endif


unsigned int ucCodepoint_len(ucCodepoint chr)
{
    return (chr.cp[1] == '\0') ? 1 : (chr.cp[2] == '\0') ? 2 : (chr.cp[3] == '\0') ? 3 : 4;
}

int ucCodepoint_cmp_char(ucCodepoint cp1, ucCodepoint cp2)
{
    unsigned int len1 = ucCodepoint_len(cp1);
    unsigned int len2 = ucCodepoint_len(cp2);

    if (len1 != len2)           return len1      > len2      ? 1 : -1;
    else if (cp1.cp[0] != cp2.cp[0]) return cp1.cp[0] > cp2.cp[0] ? 1 : -1; else if (len1 == 1) return 0;
    else if (cp1.cp[1] != cp2.cp[1]) return cp1.cp[1] > cp2.cp[1] ? 1 : -1; else if (len1 == 2) return 0;
    else if (cp1.cp[2] != cp2.cp[2]) return cp1.cp[2] > cp2.cp[2] ? 1 : -1; else if (len1 == 3) return 0;
    else if (cp1.cp[3] != cp2.cp[3]) return cp1.cp[3] > cp2.cp[3] ? 1 : -1; else                return 0;
}

int ucCodepoint_cmp(ucCodepoint cp1, ucCodepoint cp2)
{
    if (cp1.cp32 == cp2.cp32) return 0;
#ifdef UCP_BO_LITTLE
    return cp1.cp32 > cp2.cp32 ? UCP_BO_LITTLE * 1 : UCP_BO_LITTLE * -1;
#else
    return ucCodepoint_cmp_char(cp1, cp2);
#endif

}

unsigned int ucCodepoint_gt(ucCodepoint cp1, ucCodepoint cp2)
{
    return ucCodepoint_cmp(cp1, cp2) == 1 ? 1 : 0;
}

unsigned int ucCodepoint_ge(ucCodepoint cp1, ucCodepoint cp2)
{
    return ucCodepoint_cmp(cp1, cp2) == -1 ? 0 : 1;
}

unsigned int ucCodepoint_lt(ucCodepoint cp1, ucCodepoint cp2)
{
    return ucCodepoint_cmp(cp1, cp2) == -1 ? 1 : 0;
}

unsigned int ucCodepoint_le(ucCodepoint cp1, ucCodepoint cp2)
{
    return ucCodepoint_cmp(cp1, cp2) == 1 ? 0 : 1;
}

unsigned int ucCodepoint_eq(ucCodepoint cp1, ucCodepoint cp2)
{
    return ucCodepoint_cmp(cp1, cp2) == 0 ? 1 : 0;
}

unsigned int ucCodepoint_ne(ucCodepoint cp1, ucCodepoint cp2)
{
    return ucCodepoint_cmp(cp1, cp2) == 0 ? 0 : 1;
}

char* ucCodepointHex_toString(ucCodepointHex str)
{
    return str.cp[0] == '0' ? &(str.cp[1]) : &(str.cp[0]);
}

ucCodepointHex ucCodepointHex_fromHexString(unsigned char* str)
{
    int len;
    ucCodepointHex chr;

    for (len = 0; str[len] != '\0' && len < UCCPHEX_NUM_BYTES; len++) chr.cp[len] = str[len];
    chr.cp[len] = '\0';

    if (len % 2 != 0)
    {
        chr.cp[0] = '0';
        for (len = 0; str[len] != '\0' && len < UCCPHEX_NUM_BYTES; len++) chr.cp[len + 1] = str[len];
        chr.cp[len + 1] = '\0';
    }

    return chr;
}

ucCodepoint ucCodepoint_fromHex(ucCodepointHex str)
{
    ucCodepoint chr = { 0 };

    for (unsigned int i = 0; str.cp[i] != '\0'; i++)
    {
        int byte = ((str.cp[i] >= '0' && str.cp[i] <= '9') ? (str.cp[i] - '0')       : (
                    (str.cp[i] >= 'A' && str.cp[i] <= 'F') ? (str.cp[i] - 'A' + 0xA) : (
                    (str.cp[i] >= 'a' && str.cp[i] <= 'f') ? (str.cp[i] - 'a' + 0xA) : -1 )));

        assert(byte >= 0 && byte <= 0xF);

        chr.cp[i / 2] = (unsigned char)(chr.cp[i / 2] << 4);
        chr.cp[i / 2] = (unsigned char)(chr.cp[i / 2] + byte);
    }

    return chr;
}

ucCodepoint ucCodepoint_fromHexString(unsigned char* str)
{
    return ucCodepoint_fromHex(ucCodepointHex_fromHexString(str));
}
