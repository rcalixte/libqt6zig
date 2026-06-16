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

double KFontUtils_AdaptFontSize(QPainter* painter, const libqt_string text, double width, double height, double maxFontSize, double minFontSize, int flags);
double KFontUtils_AdaptFontSize2(QPainter* painter, const libqt_string text, const QSizeF* availableSize, double maxFontSize, double minFontSize, int flags);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
