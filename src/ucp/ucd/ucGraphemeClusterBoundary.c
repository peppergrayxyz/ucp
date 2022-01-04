/*
    Unicode® Standard Annex #29 - UNICODE TEXT SEGMENTATION
    https://unicode.org/reports/tr29/#Grapheme_Cluster_Boundary_Rules
    see also GraphemeClusterBoundary.impl.txt
*/

#include "ucGraphemeClusterBoundary.h"
#include "ucGraphemeBreakProperty.h"
#include "ucEmojiData.h"

unsigned int ucGraphemeClusterBoundary_get(ucp8chr_t chr1, ucp8chr_t chr2, ucGraphemeClusterBoundaryState_t *state)
{
    ucGraphemeClusterBoundaryState_t lastState = *state;
    *state = UCGRAPHEMESTATE_UNKNOWN;

    ucGraphemeBreakPropertyType_t gb1 = ucGraphemeBreakProperty_get(chr1);
    ucGraphemeBreakPropertyType_t gb2 = ucGraphemeBreakProperty_get(chr2);

    // printf(">> %8x:%d, %8x:%d\n", chr1.zucp, gb1, chr2.zucp, gb2);

    /* GB1&2 - Break at the start and end of text, unless the text is empty. */
    if (chr1.cp[0] == '\0' || chr2.cp[0] == '\0') return 1;

    /* GB3 - Do not break between a CR and LF. */
    if (gb1 == UCGBP_CR && gb2 == UCGBP_LF) return 0;

    /* GB4&5 - Otherwise, break before and after controls. */
    if ((gb1 == UCGBP_CR || gb1 == UCGBP_LF || gb1 == UCGBP_CTR) ||
        (gb2 == UCGBP_CR || gb2 == UCGBP_LF || gb2 == UCGBP_CTR)) return 1;

    /* GB6-8 Do not break Hangul syllable sequences */
    if (((gb1 == UCGBP_L)                     && (gb2 == UCGBP_L || gb2 == UCGBP_V || gb2 == UCGBP_LV || gb2 == UCGBP_LVT)) ||
        ((gb1 == UCGBP_LV  || gb1 == UCGBP_V) && (gb2 == UCGBP_V || gb2 == UCGBP_T ))                                       ||
        ((gb1 == UCGBP_LVT || gb1 == UCGBP_T) && (gb2 == UCGBP_T))) return 0;

    /* GB9 - Do not break before extending characters or ZWJ. */
    if (gb2 == UCGBP_EX || gb2 == UCGBP_ZWJ)
    {
        if(ucEmojiData_isExtendedPictographic(chr1) || lastState == UCGRAPHEMESTATE_EMOJI) *state = UCGRAPHEMESTATE_EMOJI;
        return 0;
    }

    /* GB9a - Do not break before SpacingMarks, */
    if (gb2 == UCGBP_SM) return 0;

    /* GB9b - or after Prepend characters. */
    if (gb1 == UCGBP_PP) return 0;

    /* GB11 - Do not break within emoji modifier sequences or emoji zwj sequences. */
    if ((lastState == UCGRAPHEMESTATE_EMOJI) && (gb1 == UCGBP_ZWJ) && ucEmojiData_isExtendedPictographic(chr2)) return 0;

    /* GB12&13 - Do not break within emoji flag sequences:
       That is, do not break between regional indicator (RI) symbols,
       if there is an odd number of RI characters before the break point. */
    if (gb1 == UCGBP_RI && gb2 == UCGBP_RI) 
    {
        if (lastState != UCGRAPHEMESTATE_REGIONAL)
        {
            *state = UCGRAPHEMESTATE_REGIONAL;
            return 0;
        }

        *state = UCGRAPHEMESTATE_UNKNOWN;
        return 1;
    }     
    
    /* GB999 - Otherwise, break everywhere. */
    return 1;
}
