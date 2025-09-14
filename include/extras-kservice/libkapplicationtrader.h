#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBKAPPLICATIONTRADER_H
#define SRC_EXTRAS_KSERVICEC_LIBKAPPLICATIONTRADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KApplicationTrader KApplicationTrader;
#endif

bool KApplicationTrader_IsSubsequence(const libqt_string param1, const libqt_string param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
