#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKTEXTTOHTML_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKTEXTTOHTML_H

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
