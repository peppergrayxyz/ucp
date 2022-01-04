#pragma once

/* THIS FILE IS GENERATED */

#include "../ucCodepoint/ucCodepoint.h"

#ifndef UCP_UCGRAPHEMECLUSTERBOUNDARY
#define UCP_UCGRAPHEMECLUSTERBOUNDARY

/* <ucd> */

/* ucGraphemeClusterBoundary
    0.2: sot  ÷ 
    0.3:  ÷  eot
    3.0: CR  ×  LF
    4.0: ( Control | CR | LF )  ÷ 
    5.0:  ÷  ( Control | CR | LF )
    6.0: L  ×  ( L | V | LV | LVT )
    7.0: ( LV | V )  ×  ( V | T )
    8.0: ( LVT | T)  ×  T
    9.0:  ×  (Extend | ZWJ)
    9.1:  ×  SpacingMark
    9.2: Prepend  × 
    11.0: ExtPict Extend* ZWJ  ×  ExtPict
    12.0: ^ (RI RI)* RI  ×  RI
    13.0: [^RI] (RI RI)* RI  ×  RI
    999.0:  ÷  Any
*/typedef enum ucGraphemeClusterBoundaryState {
    UCGRAPHEMESTATE_UNKNOWN,
    UCGRAPHEMESTATE_REGIONAL,
    UCGRAPHEMESTATE_EMOJI,
} ucGraphemeClusterBoundaryState_t;

unsigned int ucGraphemeClusterBoundary_get(ucp8chr_t chr1, ucp8chr_t chr2, ucGraphemeClusterBoundaryState_t *state);

/* </ucd> */

#endif	
