#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLPAINTDEVICE_H
#define SRC_OPENGLC_LIBQOPENGLPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLPaintDevice QOpenGLPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
#endif

QOpenGLPaintDevice* QOpenGLPaintDevice_new();
QOpenGLPaintDevice* QOpenGLPaintDevice_new2(const QSize* size);
QOpenGLPaintDevice* QOpenGLPaintDevice_new3(int width, int height);
int QOpenGLPaintDevice_DevType(const QOpenGLPaintDevice* self);
QPaintEngine* QOpenGLPaintDevice_PaintEngine(const QOpenGLPaintDevice* self);
QOpenGLContext* QOpenGLPaintDevice_Context(const QOpenGLPaintDevice* self);
QSize* QOpenGLPaintDevice_Size(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_SetSize(QOpenGLPaintDevice* self, const QSize* size);
void QOpenGLPaintDevice_SetDevicePixelRatio(QOpenGLPaintDevice* self, double devicePixelRatio);
double QOpenGLPaintDevice_DotsPerMeterX(const QOpenGLPaintDevice* self);
double QOpenGLPaintDevice_DotsPerMeterY(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_SetDotsPerMeterX(QOpenGLPaintDevice* self, double dotsPerMeterX);
void QOpenGLPaintDevice_SetDotsPerMeterY(QOpenGLPaintDevice* self, double dotsPerMeterY);
void QOpenGLPaintDevice_SetPaintFlipped(QOpenGLPaintDevice* self, bool flipped);
bool QOpenGLPaintDevice_PaintFlipped(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_EnsureActiveTarget(QOpenGLPaintDevice* self);
int QOpenGLPaintDevice_Metric(const QOpenGLPaintDevice* self, int metric);
void QOpenGLPaintDevice_OnDevType(const QOpenGLPaintDevice* self, intptr_t slot);
int QOpenGLPaintDevice_QBaseDevType(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnPaintEngine(const QOpenGLPaintDevice* self, intptr_t slot);
QPaintEngine* QOpenGLPaintDevice_QBasePaintEngine(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnEnsureActiveTarget(QOpenGLPaintDevice* self, intptr_t slot);
void QOpenGLPaintDevice_QBaseEnsureActiveTarget(QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnMetric(const QOpenGLPaintDevice* self, intptr_t slot);
int QOpenGLPaintDevice_QBaseMetric(const QOpenGLPaintDevice* self, int metric);
void QOpenGLPaintDevice_InitPainter(const QOpenGLPaintDevice* self, QPainter* painter);
void QOpenGLPaintDevice_OnInitPainter(const QOpenGLPaintDevice* self, intptr_t slot);
void QOpenGLPaintDevice_QBaseInitPainter(const QOpenGLPaintDevice* self, QPainter* painter);
QPaintDevice* QOpenGLPaintDevice_Redirected(const QOpenGLPaintDevice* self, QPoint* offset);
void QOpenGLPaintDevice_OnRedirected(const QOpenGLPaintDevice* self, intptr_t slot);
QPaintDevice* QOpenGLPaintDevice_QBaseRedirected(const QOpenGLPaintDevice* self, QPoint* offset);
QPainter* QOpenGLPaintDevice_SharedPainter(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnSharedPainter(const QOpenGLPaintDevice* self, intptr_t slot);
QPainter* QOpenGLPaintDevice_QBaseSharedPainter(const QOpenGLPaintDevice* self);
double QOpenGLPaintDevice_GetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB);
void QOpenGLPaintDevice_OnGetDecodedMetricF(const QOpenGLPaintDevice* self, intptr_t slot);
double QOpenGLPaintDevice_QBaseGetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB);
void QOpenGLPaintDevice_Delete(QOpenGLPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
