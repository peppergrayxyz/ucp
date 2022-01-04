#pragma once

#ifndef _UC_CODEPOINT_H_
#define _UC_CODEPOINT_H_

#include "../ucp.h"

#define UCCPHEX_NUM_BYTES 9

typedef ucp8chr_t ucCodepoint;

typedef struct ucCodepointHex {
    unsigned char cp[UCCPHEX_NUM_BYTES];
} ucCodepointHex;

static const ucCodepoint utf8Null = { 0 };
static const ucCodepoint utf8NullChar = { {{ 0xC0, 0x80 }} };
static const ucCodepoint utf8ReplacementChar = { {{ 0xEF, 0xBF, 0xBD }} };

unsigned int ucCodepoint_len(ucCodepoint chr);

         int ucCodepoint_cmp(ucCodepoint chr1, ucCodepoint chr2);
unsigned int ucCodepoint_gt(ucCodepoint chr1, ucCodepoint chr2);
unsigned int ucCodepoint_ge(ucCodepoint chr1, ucCodepoint chr2);
unsigned int ucCodepoint_lt(ucCodepoint chr1, ucCodepoint chr2);
unsigned int ucCodepoint_le(ucCodepoint chr1, ucCodepoint chr2);
unsigned int ucCodepoint_eq(ucCodepoint chr1, ucCodepoint chr2);
unsigned int ucCodepoint_ne(ucCodepoint chr1, ucCodepoint chr2);

char* ucCodepointHex_toString(ucCodepointHex str);
ucCodepointHex ucCodepointHex_fromHexString(unsigned char* str);

ucCodepoint ucCodepoint_fromHex(ucCodepointHex str);
ucCodepoint ucCodepoint_fromHexString(unsigned char* str);

#endif
