#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKTEXTTOHTML_H
#define EXTRAS_KCOREADDONS_LIBKTEXTTOHTML_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KTextToHTML KTextToHTML;
#endif

libqt_string KTextToHTML_ConvertToHtml(const libqt_string plainText, const int* options, int maxUrlLen, int maxAddressLen);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
