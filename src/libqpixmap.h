#pragma once
#ifndef SRCC_LIBQPIXMAP_H
#define SRCC_LIBQPIXMAP_H

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
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageReader QImageReader;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QPixmap* QPixmap_new();
QPixmap* QPixmap_new2(int w, int h);
QPixmap* QPixmap_new3(const QSize* param1);
QPixmap* QPixmap_new4(const libqt_string fileName);
QPixmap* QPixmap_new5(const QPixmap* param1);
QPixmap* QPixmap_new6(const libqt_string fileName, const char* format);
QPixmap* QPixmap_new7(const libqt_string fileName, const char* format, int flags);
void QPixmap_OperatorAssign(QPixmap* self, const QPixmap* param1);
void QPixmap_Swap(QPixmap* self, QPixmap* other);
QVariant* QPixmap_ToQVariant(const QPixmap* self);
bool QPixmap_IsNull(const QPixmap* self);
int QPixmap_DevType(const QPixmap* self);
void QPixmap_OnDevType(const QPixmap* self, intptr_t slot);
int QPixmap_QBaseDevType(const QPixmap* self);
int QPixmap_Width(const QPixmap* self);
int QPixmap_Height(const QPixmap* self);
QSize* QPixmap_Size(const QPixmap* self);
QRect* QPixmap_Rect(const QPixmap* self);
int QPixmap_Depth(const QPixmap* self);
int QPixmap_DefaultDepth();
void QPixmap_Fill(QPixmap* self);
QBitmap* QPixmap_Mask(const QPixmap* self);
void QPixmap_SetMask(QPixmap* self, const QBitmap* mask);
double QPixmap_DevicePixelRatio(const QPixmap* self);
void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor);
QSizeF* QPixmap_DeviceIndependentSize(const QPixmap* self);
bool QPixmap_HasAlpha(const QPixmap* self);
bool QPixmap_HasAlphaChannel(const QPixmap* self);
QBitmap* QPixmap_CreateHeuristicMask(const QPixmap* self);
QBitmap* QPixmap_CreateMaskFromColor(const QPixmap* self, const QColor* maskColor);
QPixmap* QPixmap_Scaled(const QPixmap* self, int w, int h);
QPixmap* QPixmap_Scaled2(const QPixmap* self, const QSize* s);
QPixmap* QPixmap_ScaledToWidth(const QPixmap* self, int w);
QPixmap* QPixmap_ScaledToHeight(const QPixmap* self, int h);
QPixmap* QPixmap_Transformed(const QPixmap* self, const QTransform* param1);
QTransform* QPixmap_TrueMatrix(const QTransform* m, int w, int h);
QImage* QPixmap_ToImage(const QPixmap* self);
QPixmap* QPixmap_FromImage(const QImage* image);
QPixmap* QPixmap_FromImageReader(QImageReader* imageReader);
bool QPixmap_Load(QPixmap* self, const libqt_string fileName);
bool QPixmap_LoadFromData(QPixmap* self, const unsigned char* buf, unsigned int lenVal);
bool QPixmap_LoadFromData2(QPixmap* self, const libqt_string data);
bool QPixmap_Save(const QPixmap* self, const libqt_string fileName);
bool QPixmap_Save2(const QPixmap* self, QIODevice* device);
bool QPixmap_ConvertFromImage(QPixmap* self, const QImage* img);
QPixmap* QPixmap_Copy(const QPixmap* self, int x, int y, int width, int height);
QPixmap* QPixmap_Copy2(const QPixmap* self);
void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height);
void QPixmap_Scroll2(QPixmap* self, int dx, int dy, const QRect* rect);
long long QPixmap_CacheKey(const QPixmap* self);
bool QPixmap_IsDetached(const QPixmap* self);
void QPixmap_Detach(QPixmap* self);
bool QPixmap_IsQBitmap(const QPixmap* self);
QPaintEngine* QPixmap_PaintEngine(const QPixmap* self);
void QPixmap_OnPaintEngine(const QPixmap* self, intptr_t slot);
QPaintEngine* QPixmap_QBasePaintEngine(const QPixmap* self);
bool QPixmap_OperatorNot(const QPixmap* self);
int QPixmap_Metric(const QPixmap* self, int param1);
void QPixmap_OnMetric(const QPixmap* self, intptr_t slot);
int QPixmap_QBaseMetric(const QPixmap* self, int param1);
void QPixmap_Fill1(QPixmap* self, const QColor* fillColor);
QBitmap* QPixmap_CreateHeuristicMask1(const QPixmap* self, bool clipTight);
QBitmap* QPixmap_CreateMaskFromColor2(const QPixmap* self, const QColor* maskColor, int mode);
QPixmap* QPixmap_Scaled3(const QPixmap* self, int w, int h, int aspectMode);
QPixmap* QPixmap_Scaled4(const QPixmap* self, int w, int h, int aspectMode, int mode);
QPixmap* QPixmap_Scaled22(const QPixmap* self, const QSize* s, int aspectMode);
QPixmap* QPixmap_Scaled32(const QPixmap* self, const QSize* s, int aspectMode, int mode);
QPixmap* QPixmap_ScaledToWidth2(const QPixmap* self, int w, int mode);
QPixmap* QPixmap_ScaledToHeight2(const QPixmap* self, int h, int mode);
QPixmap* QPixmap_Transformed2(const QPixmap* self, const QTransform* param1, int mode);
QPixmap* QPixmap_FromImage2(const QImage* image, int flags);
QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags);
bool QPixmap_Load2(QPixmap* self, const libqt_string fileName, const char* format);
bool QPixmap_Load3(QPixmap* self, const libqt_string fileName, const char* format, int flags);
bool QPixmap_LoadFromData3(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format);
bool QPixmap_LoadFromData4(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format, int flags);
bool QPixmap_LoadFromData22(QPixmap* self, const libqt_string data, const char* format);
bool QPixmap_LoadFromData32(QPixmap* self, const libqt_string data, const char* format, int flags);
bool QPixmap_Save22(const QPixmap* self, const libqt_string fileName, const char* format);
bool QPixmap_Save3(const QPixmap* self, const libqt_string fileName, const char* format, int quality);
bool QPixmap_Save23(const QPixmap* self, QIODevice* device, const char* format);
bool QPixmap_Save32(const QPixmap* self, QIODevice* device, const char* format, int quality);
bool QPixmap_ConvertFromImage2(QPixmap* self, const QImage* img, int flags);
QPixmap* QPixmap_Copy1(const QPixmap* self, const QRect* rect);
void QPixmap_Scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed);
void QPixmap_Scroll4(QPixmap* self, int dx, int dy, const QRect* rect, QRegion* exposed);
void QPixmap_InitPainter(const QPixmap* self, QPainter* painter);
void QPixmap_OnInitPainter(const QPixmap* self, intptr_t slot);
void QPixmap_QBaseInitPainter(const QPixmap* self, QPainter* painter);
QPaintDevice* QPixmap_Redirected(const QPixmap* self, QPoint* offset);
void QPixmap_OnRedirected(const QPixmap* self, intptr_t slot);
QPaintDevice* QPixmap_QBaseRedirected(const QPixmap* self, QPoint* offset);
QPainter* QPixmap_SharedPainter(const QPixmap* self);
void QPixmap_OnSharedPainter(const QPixmap* self, intptr_t slot);
QPainter* QPixmap_QBaseSharedPainter(const QPixmap* self);
double QPixmap_GetDecodedMetricF(const QPixmap* self, int metricA, int metricB);
void QPixmap_OnGetDecodedMetricF(const QPixmap* self, intptr_t slot);
double QPixmap_QBaseGetDecodedMetricF(const QPixmap* self, int metricA, int metricB);
void QPixmap_Delete(QPixmap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
