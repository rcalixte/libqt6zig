#pragma once
#ifndef SRCC_LIBQBITMAP_H
#define SRCC_LIBQBITMAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBitmap QBitmap;
typedef struct QImage QImage;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QBitmap* QBitmap_new();
QBitmap* QBitmap_new2(const QPixmap* param1);
QBitmap* QBitmap_new3(int w, int h);
QBitmap* QBitmap_new4(const QSize* param1);
QBitmap* QBitmap_new5(const libqt_string fileName);
QBitmap* QBitmap_new6(const libqt_string fileName, const char* format);
void QBitmap_OperatorAssign(QBitmap* self, const QPixmap* param1);
void QBitmap_Swap(QBitmap* self, QBitmap* other);
QVariant* QBitmap_ToQVariant(const QBitmap* self);
void QBitmap_Clear(QBitmap* self);
QBitmap* QBitmap_FromImage(const QImage* image);
QBitmap* QBitmap_FromData(const QSize* size, const unsigned char* bits);
QBitmap* QBitmap_FromPixmap(const QPixmap* pixmap);
QBitmap* QBitmap_Transformed(const QBitmap* self, const QTransform* matrix);
void QBitmap_OperatorAssign2(QBitmap* self, const QBitmap* param1);
QBitmap* QBitmap_FromImage2(const QImage* image, int flags);
QBitmap* QBitmap_FromData3(const QSize* size, const unsigned char* bits, int monoFormat);
int QBitmap_DevType(const QBitmap* self);
void QBitmap_OnDevType(const QBitmap* self, intptr_t slot);
int QBitmap_QBaseDevType(const QBitmap* self);
QPaintEngine* QBitmap_PaintEngine(const QBitmap* self);
void QBitmap_OnPaintEngine(const QBitmap* self, intptr_t slot);
QPaintEngine* QBitmap_QBasePaintEngine(const QBitmap* self);
int QBitmap_Metric(const QBitmap* self, int param1);
void QBitmap_OnMetric(const QBitmap* self, intptr_t slot);
int QBitmap_QBaseMetric(const QBitmap* self, int param1);
void QBitmap_InitPainter(const QBitmap* self, QPainter* painter);
void QBitmap_OnInitPainter(const QBitmap* self, intptr_t slot);
void QBitmap_QBaseInitPainter(const QBitmap* self, QPainter* painter);
QPaintDevice* QBitmap_Redirected(const QBitmap* self, QPoint* offset);
void QBitmap_OnRedirected(const QBitmap* self, intptr_t slot);
QPaintDevice* QBitmap_QBaseRedirected(const QBitmap* self, QPoint* offset);
QPainter* QBitmap_SharedPainter(const QBitmap* self);
void QBitmap_OnSharedPainter(const QBitmap* self, intptr_t slot);
QPainter* QBitmap_QBaseSharedPainter(const QBitmap* self);
double QBitmap_GetDecodedMetricF(const QBitmap* self, int metricA, int metricB);
void QBitmap_OnGetDecodedMetricF(const QBitmap* self, intptr_t slot);
double QBitmap_QBaseGetDecodedMetricF(const QBitmap* self, int metricA, int metricB);
void QBitmap_Delete(QBitmap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
