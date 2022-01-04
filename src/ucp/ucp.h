#pragma once

#ifndef UCP_H
#define UCP_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#define UCP_CP_NUM_BYTES 4

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t    ucpByte_t;
typedef ucpByte_t* ucp8str_t;
typedef uint32_t   ucp32cp_t;

typedef struct ucp8chr_t {
    union
    {
        ucpByte_t cp[UCP_CP_NUM_BYTES];
        ucp32cp_t cp32;
    };
} ucp8chr_t;

typedef struct ucpProcRes_t {
    struct {
        size_t len;
        size_t numBytesProc;
        size_t numBytesLeft;
    } i;
    struct {
        size_t len;
        size_t numBytesProc;
        size_t numBytesLeft;
    } o;
} ucpProcRes_t;

typedef struct ucpNext_t {
    size_t pos;
    size_t len;
} ucpNext_t;

typedef struct ucpConf_t {

    /* General Configuration */

    /*
        If your strings are Null terminated

        Note: if this is set to false, len must be provided
    */
    bool stringsAreNullTerminated;

} ucpConf_t;

static const ucpConf_t UC8defaultConf = {
    .stringsAreNullTerminated = true,
};

struct UCP_s {
    ucpProcRes_t (*parseNoAlloc)(const ucpConf_t* conf, const unsigned char* str, size_t len, ucp8str_t buf, size_t bufSize);
    ucp8str_t    (*parse)(const ucpConf_t* conf, const unsigned char* str, size_t len);
    void         (*free)(ucp8str_t str);
    ucpNext_t    (*nextCp)(const ucpConf_t* conf, const unsigned char* str, size_t pos, size_t len);
    ucpNext_t    (*nextGc)(const ucpConf_t* conf, const unsigned char* str, size_t pos, size_t len);
};

extern const struct UCP_s UCP;




#ifdef __cplusplus
}
#endif

#endif
