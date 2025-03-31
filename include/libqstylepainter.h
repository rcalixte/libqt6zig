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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPainter__PixmapFragment)
typedef QPainter::PixmapFragment QPainter__PixmapFragment;
#endif
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGlyphRun QGlyphRun;
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPainter__PixmapFragment QPainter__PixmapFragment;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QStaticText QStaticText;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QStylePainter QStylePainter;
typedef struct QTextItem QTextItem;
typedef struct QTextOption QTextOption;
typedef struct QTransform QTransform;
typedef struct QWidget QWidget;
#endif

QStylePainter* QStylePainter_new(QWidget* w);
QStylePainter* QStylePainter_new2();
QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w);
bool QStylePainter_Begin(QStylePainter* self, QWidget* w);
bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w);
void QStylePainter_DrawPrimitive(QStylePainter* self, int pe, QStyleOption* opt);
void QStylePainter_DrawControl(QStylePainter* self, int ce, QStyleOption* opt);
void QStylePainter_DrawComplexControl(QStylePainter* self, int cc, QStyleOptionComplex* opt);
void QStylePainter_DrawItemText(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, libqt_string text);
void QStylePainter_DrawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap);
QStyle* QStylePainter_Style(const QStylePainter* self);
void QStylePainter_DrawItemText6(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole);
void QStylePainter_Delete(QStylePainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
