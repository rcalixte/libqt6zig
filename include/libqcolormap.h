#pragma once
#ifndef SRCC_LIBQCOLORMAP_H
#define SRCC_LIBQCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QColormap QColormap;
#endif

QColormap* QColormap_new(const QColormap* colormap);
void QColormap_Initialize();
void QColormap_Cleanup();
QColormap* QColormap_Instance();
void QColormap_OperatorAssign(QColormap* self, const QColormap* colormap);
int QColormap_Mode(const QColormap* self);
int QColormap_Depth(const QColormap* self);
int QColormap_Size(const QColormap* self);
unsigned int QColormap_Pixel(const QColormap* self, const QColor* color);
QColor* QColormap_ColorAt(const QColormap* self, unsigned int pixel);
libqt_list /* of QColor* */ QColormap_Colormap(const QColormap* self);
QColormap* QColormap_Instance1(int screen);
void QColormap_Delete(QColormap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
