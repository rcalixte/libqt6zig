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
void KColorUtils_GetHcy(const QColor* param1, double* hue, double* chroma, double* luma, double* alpha);
QColor* KColorUtils_HcyColor(double hue, double chroma, double luma, double alpha);
double KColorUtils_ContrastRatio(const QColor* param1, const QColor* param2);
QColor* KColorUtils_Lighten(const QColor* param1, double amount, double chromaInverseGain);
QColor* KColorUtils_Darken(const QColor* param1, double amount, double chromaGain);
QColor* KColorUtils_Shade(const QColor* param1, double lumaAmount, double chromaAmount);
QColor* KColorUtils_Tint(const QColor* base, const QColor* color, double amount);
QColor* KColorUtils_Mix(const QColor* c1, const QColor* c2, double bias);
QColor* KColorUtils_OverlayColors(const QColor* base, const QColor* paint, int comp);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
