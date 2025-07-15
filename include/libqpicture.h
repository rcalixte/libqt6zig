#pragma once
#ifndef SRCC_LIBQPICTURE_H
#define SRCC_LIBQPICTURE_H

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
typedef struct QIODevice QIODevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPicture QPicture;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
#endif

QPicture* QPicture_new();
QPicture* QPicture_new2(const QPicture* param1);
QPicture* QPicture_new3(int formatVersion);
bool QPicture_IsNull(const QPicture* self);
int QPicture_DevType(const QPicture* self);
void QPicture_OnDevType(const QPicture* self, intptr_t slot);
int QPicture_QBaseDevType(const QPicture* self);
unsigned int QPicture_Size(const QPicture* self);
const char* QPicture_Data(const QPicture* self);
void QPicture_SetData(QPicture* self, const char* data, unsigned int size);
void QPicture_OnSetData(QPicture* self, intptr_t slot);
void QPicture_QBaseSetData(QPicture* self, const char* data, unsigned int size);
bool QPicture_Play(QPicture* self, QPainter* p);
bool QPicture_Load(QPicture* self, QIODevice* dev);
bool QPicture_Load2(QPicture* self, const libqt_string fileName);
bool QPicture_Save(QPicture* self, QIODevice* dev);
bool QPicture_Save2(QPicture* self, const libqt_string fileName);
QRect* QPicture_BoundingRect(const QPicture* self);
void QPicture_SetBoundingRect(QPicture* self, const QRect* r);
void QPicture_OperatorAssign(QPicture* self, const QPicture* p);
void QPicture_Swap(QPicture* self, QPicture* other);
void QPicture_Detach(QPicture* self);
bool QPicture_IsDetached(const QPicture* self);
QPaintEngine* QPicture_PaintEngine(const QPicture* self);
void QPicture_OnPaintEngine(const QPicture* self, intptr_t slot);
QPaintEngine* QPicture_QBasePaintEngine(const QPicture* self);
int QPicture_Metric(const QPicture* self, int m);
void QPicture_OnMetric(const QPicture* self, intptr_t slot);
int QPicture_QBaseMetric(const QPicture* self, int m);
void QPicture_InitPainter(const QPicture* self, QPainter* painter);
void QPicture_OnInitPainter(const QPicture* self, intptr_t slot);
void QPicture_QBaseInitPainter(const QPicture* self, QPainter* painter);
QPaintDevice* QPicture_Redirected(const QPicture* self, QPoint* offset);
void QPicture_OnRedirected(const QPicture* self, intptr_t slot);
QPaintDevice* QPicture_QBaseRedirected(const QPicture* self, QPoint* offset);
QPainter* QPicture_SharedPainter(const QPicture* self);
void QPicture_OnSharedPainter(const QPicture* self, intptr_t slot);
QPainter* QPicture_QBaseSharedPainter(const QPicture* self);
double QPicture_GetDecodedMetricF(const QPicture* self, int metricA, int metricB);
void QPicture_OnGetDecodedMetricF(const QPicture* self, intptr_t slot);
double QPicture_QBaseGetDecodedMetricF(const QPicture* self, int metricA, int metricB);
void QPicture_Delete(QPicture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
