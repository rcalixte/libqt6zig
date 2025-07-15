#pragma once
#ifndef SRCC_LIBQFONTMETRICS_H
#define SRCC_LIBQFONTMETRICS_H

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
typedef struct QChar QChar;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QFontMetricsF QFontMetricsF;
typedef struct QPaintDevice QPaintDevice;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTextOption QTextOption;
#endif

QFontMetrics* QFontMetrics_new(const QFont* param1);
QFontMetrics* QFontMetrics_new2(const QFont* font, const QPaintDevice* pd);
QFontMetrics* QFontMetrics_new3(const QFontMetrics* param1);
void QFontMetrics_OperatorAssign(QFontMetrics* self, const QFontMetrics* param1);
void QFontMetrics_Swap(QFontMetrics* self, QFontMetrics* other);
int QFontMetrics_Ascent(const QFontMetrics* self);
int QFontMetrics_CapHeight(const QFontMetrics* self);
int QFontMetrics_Descent(const QFontMetrics* self);
int QFontMetrics_Height(const QFontMetrics* self);
int QFontMetrics_Leading(const QFontMetrics* self);
int QFontMetrics_LineSpacing(const QFontMetrics* self);
int QFontMetrics_MinLeftBearing(const QFontMetrics* self);
int QFontMetrics_MinRightBearing(const QFontMetrics* self);
int QFontMetrics_MaxWidth(const QFontMetrics* self);
int QFontMetrics_XHeight(const QFontMetrics* self);
int QFontMetrics_AverageCharWidth(const QFontMetrics* self);
bool QFontMetrics_InFont(const QFontMetrics* self, QChar* param1);
bool QFontMetrics_InFontUcs4(const QFontMetrics* self, unsigned int ucs4);
int QFontMetrics_LeftBearing(const QFontMetrics* self, QChar* param1);
int QFontMetrics_RightBearing(const QFontMetrics* self, QChar* param1);
int QFontMetrics_HorizontalAdvance(const QFontMetrics* self, const libqt_string param1);
int QFontMetrics_HorizontalAdvance2(const QFontMetrics* self, const libqt_string param1, const QTextOption* textOption);
int QFontMetrics_HorizontalAdvance3(const QFontMetrics* self, QChar* param1);
QRect* QFontMetrics_BoundingRect(const QFontMetrics* self, QChar* param1);
QRect* QFontMetrics_BoundingRect2(const QFontMetrics* self, const libqt_string text);
QRect* QFontMetrics_BoundingRect3(const QFontMetrics* self, const libqt_string text, const QTextOption* textOption);
QRect* QFontMetrics_BoundingRect4(const QFontMetrics* self, const QRect* r, int flags, const libqt_string text);
QRect* QFontMetrics_BoundingRect5(const QFontMetrics* self, int x, int y, int w, int h, int flags, const libqt_string text);
QSize* QFontMetrics_Size(const QFontMetrics* self, int flags, const libqt_string str);
QRect* QFontMetrics_TightBoundingRect(const QFontMetrics* self, const libqt_string text);
QRect* QFontMetrics_TightBoundingRect2(const QFontMetrics* self, const libqt_string text, const QTextOption* textOption);
libqt_string QFontMetrics_ElidedText(const QFontMetrics* self, const libqt_string text, int mode, int width);
int QFontMetrics_UnderlinePos(const QFontMetrics* self);
int QFontMetrics_OverlinePos(const QFontMetrics* self);
int QFontMetrics_StrikeOutPos(const QFontMetrics* self);
int QFontMetrics_LineWidth(const QFontMetrics* self);
double QFontMetrics_FontDpi(const QFontMetrics* self);
bool QFontMetrics_OperatorEqual(const QFontMetrics* self, const QFontMetrics* other);
bool QFontMetrics_OperatorNotEqual(const QFontMetrics* self, const QFontMetrics* other);
int QFontMetrics_HorizontalAdvance22(const QFontMetrics* self, const libqt_string param1, int lenVal);
QRect* QFontMetrics_BoundingRect42(const QFontMetrics* self, const QRect* r, int flags, const libqt_string text, int tabstops);
QRect* QFontMetrics_BoundingRect52(const QFontMetrics* self, const QRect* r, int flags, const libqt_string text, int tabstops, int* tabarray);
QRect* QFontMetrics_BoundingRect7(const QFontMetrics* self, int x, int y, int w, int h, int flags, const libqt_string text, int tabstops);
QRect* QFontMetrics_BoundingRect8(const QFontMetrics* self, int x, int y, int w, int h, int flags, const libqt_string text, int tabstops, int* tabarray);
QSize* QFontMetrics_Size3(const QFontMetrics* self, int flags, const libqt_string str, int tabstops);
QSize* QFontMetrics_Size4(const QFontMetrics* self, int flags, const libqt_string str, int tabstops, int* tabarray);
libqt_string QFontMetrics_ElidedText4(const QFontMetrics* self, const libqt_string text, int mode, int width, int flags);
void QFontMetrics_Delete(QFontMetrics* self);

QFontMetricsF* QFontMetricsF_new(const QFont* font);
QFontMetricsF* QFontMetricsF_new2(const QFont* font, const QPaintDevice* pd);
QFontMetricsF* QFontMetricsF_new3(const QFontMetrics* param1);
QFontMetricsF* QFontMetricsF_new4(const QFontMetricsF* param1);
void QFontMetricsF_OperatorAssign(QFontMetricsF* self, const QFontMetricsF* param1);
void QFontMetricsF_OperatorAssign2(QFontMetricsF* self, const QFontMetrics* param1);
void QFontMetricsF_Swap(QFontMetricsF* self, QFontMetricsF* other);
double QFontMetricsF_Ascent(const QFontMetricsF* self);
double QFontMetricsF_CapHeight(const QFontMetricsF* self);
double QFontMetricsF_Descent(const QFontMetricsF* self);
double QFontMetricsF_Height(const QFontMetricsF* self);
double QFontMetricsF_Leading(const QFontMetricsF* self);
double QFontMetricsF_LineSpacing(const QFontMetricsF* self);
double QFontMetricsF_MinLeftBearing(const QFontMetricsF* self);
double QFontMetricsF_MinRightBearing(const QFontMetricsF* self);
double QFontMetricsF_MaxWidth(const QFontMetricsF* self);
double QFontMetricsF_XHeight(const QFontMetricsF* self);
double QFontMetricsF_AverageCharWidth(const QFontMetricsF* self);
bool QFontMetricsF_InFont(const QFontMetricsF* self, QChar* param1);
bool QFontMetricsF_InFontUcs4(const QFontMetricsF* self, unsigned int ucs4);
double QFontMetricsF_LeftBearing(const QFontMetricsF* self, QChar* param1);
double QFontMetricsF_RightBearing(const QFontMetricsF* self, QChar* param1);
double QFontMetricsF_HorizontalAdvance(const QFontMetricsF* self, const libqt_string stringVal);
double QFontMetricsF_HorizontalAdvance2(const QFontMetricsF* self, QChar* param1);
double QFontMetricsF_HorizontalAdvance3(const QFontMetricsF* self, const libqt_string stringVal, const QTextOption* textOption);
QRectF* QFontMetricsF_BoundingRect(const QFontMetricsF* self, const libqt_string stringVal);
QRectF* QFontMetricsF_BoundingRect2(const QFontMetricsF* self, const libqt_string text, const QTextOption* textOption);
QRectF* QFontMetricsF_BoundingRect3(const QFontMetricsF* self, QChar* param1);
QRectF* QFontMetricsF_BoundingRect4(const QFontMetricsF* self, const QRectF* r, int flags, const libqt_string stringVal);
QSizeF* QFontMetricsF_Size(const QFontMetricsF* self, int flags, const libqt_string str);
QRectF* QFontMetricsF_TightBoundingRect(const QFontMetricsF* self, const libqt_string text);
QRectF* QFontMetricsF_TightBoundingRect2(const QFontMetricsF* self, const libqt_string text, const QTextOption* textOption);
libqt_string QFontMetricsF_ElidedText(const QFontMetricsF* self, const libqt_string text, int mode, double width);
double QFontMetricsF_UnderlinePos(const QFontMetricsF* self);
double QFontMetricsF_OverlinePos(const QFontMetricsF* self);
double QFontMetricsF_StrikeOutPos(const QFontMetricsF* self);
double QFontMetricsF_LineWidth(const QFontMetricsF* self);
double QFontMetricsF_FontDpi(const QFontMetricsF* self);
bool QFontMetricsF_OperatorEqual(const QFontMetricsF* self, const QFontMetricsF* other);
bool QFontMetricsF_OperatorNotEqual(const QFontMetricsF* self, const QFontMetricsF* other);
double QFontMetricsF_HorizontalAdvance22(const QFontMetricsF* self, const libqt_string stringVal, int length);
QRectF* QFontMetricsF_BoundingRect42(const QFontMetricsF* self, const QRectF* r, int flags, const libqt_string stringVal, int tabstops);
QRectF* QFontMetricsF_BoundingRect5(const QFontMetricsF* self, const QRectF* r, int flags, const libqt_string stringVal, int tabstops, int* tabarray);
QSizeF* QFontMetricsF_Size3(const QFontMetricsF* self, int flags, const libqt_string str, int tabstops);
QSizeF* QFontMetricsF_Size4(const QFontMetricsF* self, int flags, const libqt_string str, int tabstops, int* tabarray);
libqt_string QFontMetricsF_ElidedText4(const QFontMetricsF* self, const libqt_string text, int mode, double width, int flags);
void QFontMetricsF_Delete(QFontMetricsF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
