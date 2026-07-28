#pragma once
#ifndef EXTRAS_KSERVICE_LIBKAPPLICATIONTRADER_H
#define EXTRAS_KSERVICE_LIBKAPPLICATIONTRADER_H

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

bool KApplicationTrader_IsSubsequence(const libqt_string pattern, const libqt_string text, int cs);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
