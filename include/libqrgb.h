#pragma once
#ifndef LIBQRGB_H
#define LIBQRGB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

int qrgb_h_QRed(unsigned int rgb);
int qrgb_h_QGreen(unsigned int rgb);
int qrgb_h_QBlue(unsigned int rgb);
int qrgb_h_QAlpha(unsigned int rgb);
unsigned int qrgb_h_QRgb(int r, int g, int b);
unsigned int qrgb_h_QRgba(int r, int g, int b, int a);
int qrgb_h_QGray(int r, int g, int b);
int qrgb_h_QGray2(unsigned int rgb);
bool qrgb_h_QIsGray(unsigned int rgb);
unsigned int qrgb_h_QPremultiply(unsigned int x);
unsigned int qrgb_h_QUnpremultiply(unsigned int p);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
