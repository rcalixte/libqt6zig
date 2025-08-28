#pragma once
#ifndef SRC_SVGC_LIBQSVGGENERATOR_H
#define SRC_SVGC_LIBQSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSvgGenerator QSvgGenerator;
#endif

QSvgGenerator* QSvgGenerator_new();
QSvgGenerator* QSvgGenerator_new2(int version);
libqt_string QSvgGenerator_Title(const QSvgGenerator* self);
void QSvgGenerator_SetTitle(QSvgGenerator* self, const libqt_string title);
libqt_string QSvgGenerator_Description(const QSvgGenerator* self);
void QSvgGenerator_SetDescription(QSvgGenerator* self, const libqt_string description);
QSize* QSvgGenerator_Size(const QSvgGenerator* self);
void QSvgGenerator_SetSize(QSvgGenerator* self, const QSize* size);
QRect* QSvgGenerator_ViewBox(const QSvgGenerator* self);
QRectF* QSvgGenerator_ViewBoxF(const QSvgGenerator* self);
void QSvgGenerator_SetViewBox(QSvgGenerator* self, const QRect* viewBox);
void QSvgGenerator_SetViewBox2(QSvgGenerator* self, const QRectF* viewBox);
libqt_string QSvgGenerator_FileName(const QSvgGenerator* self);
void QSvgGenerator_SetFileName(QSvgGenerator* self, const libqt_string fileName);
QIODevice* QSvgGenerator_OutputDevice(const QSvgGenerator* self);
void QSvgGenerator_SetOutputDevice(QSvgGenerator* self, QIODevice* outputDevice);
void QSvgGenerator_SetResolution(QSvgGenerator* self, int dpi);
int QSvgGenerator_Resolution(const QSvgGenerator* self);
int QSvgGenerator_SvgVersion(const QSvgGenerator* self);
QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self);
int QSvgGenerator_Metric(const QSvgGenerator* self, int metric);
void QSvgGenerator_OnPaintEngine(const QSvgGenerator* self, intptr_t slot);
QPaintEngine* QSvgGenerator_QBasePaintEngine(const QSvgGenerator* self);
void QSvgGenerator_OnMetric(const QSvgGenerator* self, intptr_t slot);
int QSvgGenerator_QBaseMetric(const QSvgGenerator* self, int metric);
int QSvgGenerator_DevType(const QSvgGenerator* self);
void QSvgGenerator_OnDevType(const QSvgGenerator* self, intptr_t slot);
int QSvgGenerator_QBaseDevType(const QSvgGenerator* self);
void QSvgGenerator_InitPainter(const QSvgGenerator* self, QPainter* painter);
void QSvgGenerator_OnInitPainter(const QSvgGenerator* self, intptr_t slot);
void QSvgGenerator_QBaseInitPainter(const QSvgGenerator* self, QPainter* painter);
QPaintDevice* QSvgGenerator_Redirected(const QSvgGenerator* self, QPoint* offset);
void QSvgGenerator_OnRedirected(const QSvgGenerator* self, intptr_t slot);
QPaintDevice* QSvgGenerator_QBaseRedirected(const QSvgGenerator* self, QPoint* offset);
QPainter* QSvgGenerator_SharedPainter(const QSvgGenerator* self);
void QSvgGenerator_OnSharedPainter(const QSvgGenerator* self, intptr_t slot);
QPainter* QSvgGenerator_QBaseSharedPainter(const QSvgGenerator* self);
double QSvgGenerator_GetDecodedMetricF(const QSvgGenerator* self, int metricA, int metricB);
void QSvgGenerator_OnGetDecodedMetricF(const QSvgGenerator* self, intptr_t slot);
double QSvgGenerator_QBaseGetDecodedMetricF(const QSvgGenerator* self, int metricA, int metricB);
void QSvgGenerator_Delete(QSvgGenerator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
