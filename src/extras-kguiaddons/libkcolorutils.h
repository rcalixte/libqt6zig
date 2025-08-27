#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKCOLORUTILS_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKCOLORUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorUtils KColorUtils;
typedef struct QColor QColor;
#endif

double KColorUtils_Hue(const QColor* param1);
double KColorUtils_Chroma(const QColor* param1);
double KColorUtils_Luma(const QColor* param1);
void KColorUtils_GetHcy(const QColor* param1, double* param2, double* param3, double* param4, double* param5);
QColor* KColorUtils_HcyColor(double param1, double param2, double param3, double param4);
double KColorUtils_ContrastRatio(const QColor* param1, const QColor* param2);
QColor* KColorUtils_Lighten(const QColor* param1, double param2, double param3);
QColor* KColorUtils_Darken(const QColor* param1, double param2, double param3);
QColor* KColorUtils_Shade(const QColor* param1, double param2, double param3);
QColor* KColorUtils_Tint(const QColor* param1, const QColor* param2, double param3);
QColor* KColorUtils_Mix(const QColor* param1, const QColor* param2, double param3);
QColor* KColorUtils_OverlayColors(const QColor* param1, const QColor* param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
