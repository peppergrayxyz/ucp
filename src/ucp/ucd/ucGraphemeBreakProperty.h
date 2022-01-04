#pragma once

/* THIS FILE IS GENERATED */

#ifndef UCP_UCGRAPHEMEBREAKPROPERTY
#define UCP_UCGRAPHEMEBREAKPROPERTY

#include "../ucCodepoint/ucCodepoint.h"

/* <ucd> */

typedef enum ucGraphemeBreakPropertyType
{
    UCGBP_XX , /* Other */
    UCGBP_CTR, /* Control */
    UCGBP_CR , /* CR */
    UCGBP_LF , /* LF */
    UCGBP_PP , /* Prepend */
    UCGBP_EX , /* Extend */
    UCGBP_RI , /* Regional_Indicator */
    UCGBP_SM , /* SpacingMark */
    UCGBP_L  , /* L */
    UCGBP_V  , /* V */
    UCGBP_T  , /* T */
    UCGBP_LV , /* LV */
    UCGBP_LVT, /* LVT */
    UCGBP_ZWJ, /* ZWJ */
} ucGraphemeBreakPropertyType_t;

ucGraphemeBreakPropertyType_t ucGraphemeBreakProperty_get(ucp8chr_t chr);

/* </ucd> */

#endif	
