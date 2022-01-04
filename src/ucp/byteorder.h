
#pragma once

#ifndef BYTEORDER_H
#define BYTEORDER_H

#define BO32_HOST_ORDER_MULTICHAR ('LGBT')
#define BO16_HOST_ORDER_MULTICHAR ('Q+')

#define BO_LITTLE_ENDIAN    0x4C474254ul
#define BO_BIG_ENDIAN       0x5442474Cul
#define BO_PDP_ENDIAN       0x42544C47ul     /* DEC PDP-11 (aka ENDIAN_LITTLE_Word) */
#define BO_HONEYWELL_ENDIAN 0x474C5442ul     /* Honeywell 316 (aka ENDIAN_BIG_Word) */

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmultichar"
#pragma clang diagnostic ignored "-Wfour-char-constants"
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmultichar"
#endif

/* Redefine to prevent multi-character warning spreading all over the place */
#if BO32_HOST_ORDER_MULTICHAR == 0x4C474254ul
#define BO_HOST_ORDER 0x4C474254ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x474C4254ul
#define BO_HOST_ORDER 0x474C4254ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x424C4754ul 
#define BO_HOST_ORDER 0x424C4754ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4C424754ul
#define BO_HOST_ORDER 0x4C424754ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x47424C54ul
#define BO_HOST_ORDER 0x47424C54ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x42474C54ul
#define BO_HOST_ORDER 0x42474C54ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4247544Cul
#define BO_HOST_ORDER 0x4247544Cul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4742544Cul
#define BO_HOST_ORDER 0x4742544Cul
#elif BO32_HOST_ORDER_MULTICHAR == 0x5442474Cul
#define BO_HOST_ORDER 0x5442474Cul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4254474Cul
#define BO_HOST_ORDER 0x4254474Cul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4754424Cul
#define BO_HOST_ORDER 0x4754424Cul
#elif BO32_HOST_ORDER_MULTICHAR == 0x5447424Cul
#define BO_HOST_ORDER 0x5447424Cul
#elif BO32_HOST_ORDER_MULTICHAR == 0x544C4247ul
#define BO_HOST_ORDER 0x544C4247ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4C544247ul
#define BO_HOST_ORDER 0x4C544247ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x42544C47ul
#define BO_HOST_ORDER 0x42544C47ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x54424C47ul
#define BO_HOST_ORDER 0x54424C47ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4C425447ul
#define BO_HOST_ORDER 0x4C425447ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x424C5447ul
#define BO_HOST_ORDER 0x424C5447ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x474C5442ul
#define BO_HOST_ORDER 0x474C5442ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4C475442ul
#define BO_HOST_ORDER 0x4C475442ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x54474C42ul
#define BO_HOST_ORDER 0x54474C42ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x47544C42ul
#define BO_HOST_ORDER 0x47544C42ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x4C544742ul
#define BO_HOST_ORDER 0x4C544742ul
#elif BO32_HOST_ORDER_MULTICHAR == 0x544C4742ul
#define BO_HOST_ORDER 0x544C4742ul
#endif

#if BO16_HOST_ORDER_MULTICHAR == 0x512Bu
#define BO16_HOST_ORDER 0x512Bu
#elif BO16_HOST_ORDER_MULTICHAR == 0x2B51u
#define BO16_HOST_ORDER 0x2B51u
#endif

#undef BO32_HOST_ORDER_MULTICHAR
#undef BO16_HOST_ORDER_MULTICHAR

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#elif defined(_MSC_VER)
#endif

#if !defined(BO_HOST_ORDER) || !defined(BO16_HOST_ORDER)
#error Unsupported Platform
#endif

#define BO_HOST_BYTE3 ((( BO_HOST_ORDER        & 0xFF) == 'L') ? 0 : \
                      ((((BO_HOST_ORDER >> 8)  & 0xFF) == 'L') ? 1 : \
                      ((((BO_HOST_ORDER >> 16) & 0xFF) == 'L') ? 2 : \
                      ((((BO_HOST_ORDER >> 24) & 0xFF) == 'L') ? 3 : 4))))

#define BO_HOST_BYTE2 ((( BO_HOST_ORDER        & 0xFF) == 'G') ? 0 : \
                      ((((BO_HOST_ORDER >> 8)  & 0xFF) == 'G') ? 1 : \
                      ((((BO_HOST_ORDER >> 16) & 0xFF) == 'G') ? 2 : \
                      ((((BO_HOST_ORDER >> 24) & 0xFF) == 'G') ? 3 : 4))))

#define BO_HOST_BYTE1 ((( BO_HOST_ORDER        & 0xFF) == 'B') ? 0 : \
                      ((((BO_HOST_ORDER >> 8)  & 0xFF) == 'B') ? 1 : \
                      ((((BO_HOST_ORDER >> 16) & 0xFF) == 'B') ? 2 : \
                      ((((BO_HOST_ORDER >> 24) & 0xFF) == 'B') ? 3 : 4))))

#define BO_HOST_BYTE0 ((( BO_HOST_ORDER        & 0xFF) == 'T') ? 0 : \
                      ((((BO_HOST_ORDER >> 8)  & 0xFF) == 'T') ? 1 : \
                      ((((BO_HOST_ORDER >> 16) & 0xFF) == 'T') ? 2 : \
                      ((((BO_HOST_ORDER >> 24) & 0xFF) == 'T') ? 3 : 4))))

#define BO16_HOST_BYTE1 ((( BO16_HOST_ORDER        & 0xFF) == 'Q') ? 0 : \
                        ((((BO16_HOST_ORDER >> 8)  & 0xFF) == 'Q') ? 1 : \
                        ((((BO16_HOST_ORDER >> 16) & 0xFF) == 'Q') ? 2 : \
                        ((((BO16_HOST_ORDER >> 24) & 0xFF) == 'Q') ? 3 : 4))))

#define BO16_HOST_BYTE0 ((( BO16_HOST_ORDER        & 0xFF) == '+') ? 0 : \
                        ((((BO16_HOST_ORDER >> 8)  & 0xFF) == '+') ? 1 : \
                        ((((BO16_HOST_ORDER >> 16) & 0xFF) == '+') ? 2 : \
                        ((((BO16_HOST_ORDER >> 24) & 0xFF) == '+') ? 3 : 4))))

#if (BO16_HOST_BYTE1 != BO_HOST_BYTE1) || \
    (BO16_HOST_BYTE0 != BO_HOST_BYTE0) || \
    (BO_HOST_BYTE3 > 3) || \
    (BO_HOST_BYTE2 > 3) || \
    (BO_HOST_BYTE1 > 3) || \
    (BO_HOST_BYTE0 > 3)
#error Unsupported Platform
#endif

#define BO_NTOH4(B0, B1, B2, B3)    (((B0) << (BO_HOST_BYTE0 * 8)) | \
                                     ((B1) << (BO_HOST_BYTE1 * 8)) | \
                                     ((B2) << (BO_HOST_BYTE2 * 8)) | \
                                     ((B3) << (BO_HOST_BYTE3 * 8)))
#define BO_NTOH3(B0, B1, B2)         BO_NTOH4((B0), (B1), (B2), 0x00)
#define BO_NTOH2(B0, B1)             BO_NTOH3((B0), (B1), 0x00)
#define BO_NTOH1(B0)                 BO_NTOH2((B0), 0x00)

#define BO_CTUTF8(CP) ((unsigned)                                                                                                                                       \
     (((CP) <    0x80) ? BO_NTOH1(                                                                                                        (CP)         ) :   \
     (((CP) <   0x800) ? BO_NTOH2(                                                                (0xC0 | (((CP) >> 6) & 0x1F)), (0x80 | ((CP) & 0x3F))) :   \
     (((CP) < 0x10000) ? BO_NTOH3(                                (0xE0 | (((CP) >> 12) & 0x0F)), (0x80 | (((CP) >> 6) & 0x3F)), (0x80 | ((CP) & 0x3F))) :   \
     (                   BO_NTOH4((0xF0 | (((CP) >> 18) & 0x07)), (0x80 | (((CP) >> 12) & 0x3F)), (0x80 | (((CP) >> 6) & 0x3F)), (0x80 | ((CP) & 0x3F))) )))))

#endif
