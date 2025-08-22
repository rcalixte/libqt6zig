#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKTIMEZONE_H
#define SRC_EXTRAS_KI18NC_LIBKTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCountry KCountry;
typedef struct KTimeZone KTimeZone;
#endif

const char* KTimeZone_FromLocation(float param1, float param2);
KCountry* KTimeZone_Country(const char* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
