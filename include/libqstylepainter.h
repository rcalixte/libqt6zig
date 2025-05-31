#pragma once
#ifndef SRCC_LIBQSTYLEPAINTER_H
#define SRCC_LIBQSTYLEPAINTER_H

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
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QStylePainter QStylePainter;
typedef struct QWidget QWidget;
#endif

QStylePainter* QStylePainter_new(QWidget* w);
QStylePainter* QStylePainter_new2();
QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w);
bool QStylePainter_Begin(QStylePainter* self, QWidget* w);
bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w);
void QStylePainter_DrawPrimitive(QStylePainter* self, int pe, const QStyleOption* opt);
void QStylePainter_DrawControl(QStylePainter* self, int ce, const QStyleOption* opt);
void QStylePainter_DrawComplexControl(QStylePainter* self, int cc, const QStyleOptionComplex* opt);
void QStylePainter_DrawItemText(QStylePainter* self, const QRect* r, int flags, const QPalette* pal, bool enabled, const libqt_string text);
void QStylePainter_DrawItemPixmap(QStylePainter* self, const QRect* r, int flags, const QPixmap* pixmap);
QStyle* QStylePainter_Style(const QStylePainter* self);
void QStylePainter_DrawItemText6(QStylePainter* self, const QRect* r, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QStylePainter_Delete(QStylePainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
