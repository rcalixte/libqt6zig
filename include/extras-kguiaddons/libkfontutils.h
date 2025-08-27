#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKFONTUTILS_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKFONTUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFontUtils KFontUtils;
typedef struct QPainter QPainter;
typedef struct QSizeF QSizeF;
#endif

double KFontUtils_AdaptFontSize(QPainter* param1, const libqt_string param2, double param3, double param4, double param5, double param6, int param7);
double KFontUtils_AdaptFontSize2(QPainter* param1, const libqt_string param2, const QSizeF* param3, double param4, double param5, int param6);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
