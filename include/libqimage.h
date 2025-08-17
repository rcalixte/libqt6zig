#pragma once
#ifndef SRCC_LIBQIMAGE_H
#define SRCC_LIBQIMAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QColor QColor;
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixelFormat QPixelFormat;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QImage* QImage_new();
QImage* QImage_new2(const QSize* size, int format);
QImage* QImage_new3(int width, int height, int format);
QImage* QImage_new4(unsigned char* data, int width, int height, int format);
QImage* QImage_new5(const unsigned char* data, int width, int height, int format);
QImage* QImage_new6(unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format);
QImage* QImage_new7(const unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format);
QImage* QImage_new8(const libqt_string fileName);
QImage* QImage_new9(const QImage* param1);
QImage* QImage_new10(const libqt_string fileName, const char* format);
void QImage_OperatorAssign(QImage* self, const QImage* param1);
void QImage_Swap(QImage* self, QImage* other);
bool QImage_IsNull(const QImage* self);
int QImage_DevType(const QImage* self);
void QImage_OnDevType(const QImage* self, intptr_t slot);
int QImage_QBaseDevType(const QImage* self);
bool QImage_OperatorEqual(const QImage* self, const QImage* param1);
bool QImage_OperatorNotEqual(const QImage* self, const QImage* param1);
QVariant* QImage_ToQVariant(const QImage* self);
void QImage_Detach(QImage* self);
bool QImage_IsDetached(const QImage* self);
QImage* QImage_Copy(const QImage* self);
QImage* QImage_Copy2(const QImage* self, int x, int y, int w, int h);
int QImage_Format(const QImage* self);
QImage* QImage_ConvertToFormat(const QImage* self, int f);
QImage* QImage_ConvertToFormat2(const QImage* self, int f, const libqt_list /* of unsigned int */ colorTable);
bool QImage_ReinterpretAsFormat(QImage* self, int f);
QImage* QImage_ConvertedTo(const QImage* self, int f);
void QImage_ConvertTo(QImage* self, int f);
int QImage_Width(const QImage* self);
int QImage_Height(const QImage* self);
QSize* QImage_Size(const QImage* self);
QRect* QImage_Rect(const QImage* self);
int QImage_Depth(const QImage* self);
int QImage_ColorCount(const QImage* self);
int QImage_BitPlaneCount(const QImage* self);
unsigned int QImage_Color(const QImage* self, int i);
void QImage_SetColor(QImage* self, int i, unsigned int c);
void QImage_SetColorCount(QImage* self, int colorCount);
bool QImage_AllGray(const QImage* self);
bool QImage_IsGrayscale(const QImage* self);
unsigned char* QImage_Bits(QImage* self);
const unsigned char* QImage_Bits2(const QImage* self);
const unsigned char* QImage_ConstBits(const QImage* self);
ptrdiff_t QImage_SizeInBytes(const QImage* self);
unsigned char* QImage_ScanLine(QImage* self, int param1);
const unsigned char* QImage_ScanLine2(const QImage* self, int param1);
const unsigned char* QImage_ConstScanLine(const QImage* self, int param1);
ptrdiff_t QImage_BytesPerLine(const QImage* self);
bool QImage_Valid(const QImage* self, int x, int y);
bool QImage_Valid2(const QImage* self, const QPoint* pt);
int QImage_PixelIndex(const QImage* self, int x, int y);
int QImage_PixelIndex2(const QImage* self, const QPoint* pt);
unsigned int QImage_Pixel(const QImage* self, int x, int y);
unsigned int QImage_Pixel2(const QImage* self, const QPoint* pt);
void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb);
void QImage_SetPixel2(QImage* self, const QPoint* pt, unsigned int index_or_rgb);
QColor* QImage_PixelColor(const QImage* self, int x, int y);
QColor* QImage_PixelColor2(const QImage* self, const QPoint* pt);
void QImage_SetPixelColor(QImage* self, int x, int y, const QColor* c);
void QImage_SetPixelColor2(QImage* self, const QPoint* pt, const QColor* c);
libqt_list /* of unsigned int */ QImage_ColorTable(const QImage* self);
void QImage_SetColorTable(QImage* self, const libqt_list /* of unsigned int */ colors);
double QImage_DevicePixelRatio(const QImage* self);
void QImage_SetDevicePixelRatio(QImage* self, double scaleFactor);
QSizeF* QImage_DeviceIndependentSize(const QImage* self);
void QImage_Fill(QImage* self, unsigned int pixel);
void QImage_Fill2(QImage* self, const QColor* color);
void QImage_Fill3(QImage* self, int color);
bool QImage_HasAlphaChannel(const QImage* self);
void QImage_SetAlphaChannel(QImage* self, const QImage* alphaChannel);
QImage* QImage_CreateAlphaMask(const QImage* self);
QImage* QImage_CreateHeuristicMask(const QImage* self);
QImage* QImage_CreateMaskFromColor(const QImage* self, unsigned int color);
QImage* QImage_Scaled(const QImage* self, int w, int h);
QImage* QImage_Scaled2(const QImage* self, const QSize* s);
QImage* QImage_ScaledToWidth(const QImage* self, int w);
QImage* QImage_ScaledToHeight(const QImage* self, int h);
QImage* QImage_Transformed(const QImage* self, const QTransform* matrix);
QTransform* QImage_TrueMatrix(const QTransform* param1, int w, int h);
QImage* QImage_Mirrored(const QImage* self);
QImage* QImage_RgbSwapped(const QImage* self);
void QImage_Mirror(QImage* self);
void QImage_RgbSwap(QImage* self);
void QImage_InvertPixels(QImage* self);
QColorSpace* QImage_ColorSpace(const QImage* self);
QImage* QImage_ConvertedToColorSpace(const QImage* self, const QColorSpace* colorSpace);
QImage* QImage_ConvertedToColorSpace2(const QImage* self, const QColorSpace* colorSpace, int format);
void QImage_ConvertToColorSpace(QImage* self, const QColorSpace* colorSpace);
void QImage_ConvertToColorSpace2(QImage* self, const QColorSpace* colorSpace, int format);
void QImage_SetColorSpace(QImage* self, const QColorSpace* colorSpace);
QImage* QImage_ColorTransformed(const QImage* self, const QColorTransform* transform);
QImage* QImage_ColorTransformed2(const QImage* self, const QColorTransform* transform, int format);
void QImage_ApplyColorTransform(QImage* self, const QColorTransform* transform);
void QImage_ApplyColorTransform2(QImage* self, const QColorTransform* transform, int format);
bool QImage_Load(QImage* self, QIODevice* device, const char* format);
bool QImage_Load2(QImage* self, const libqt_string fileName);
bool QImage_LoadFromData(QImage* self, QByteArrayView* data);
bool QImage_LoadFromData2(QImage* self, const unsigned char* buf, int lenVal);
bool QImage_LoadFromData3(QImage* self, const libqt_string data);
bool QImage_Save(const QImage* self, const libqt_string fileName);
bool QImage_Save2(const QImage* self, QIODevice* device);
QImage* QImage_FromData(QByteArrayView* data);
QImage* QImage_FromData2(const unsigned char* data, int size);
QImage* QImage_FromData3(const libqt_string data);
long long QImage_CacheKey(const QImage* self);
QPaintEngine* QImage_PaintEngine(const QImage* self);
void QImage_OnPaintEngine(const QImage* self, intptr_t slot);
QPaintEngine* QImage_QBasePaintEngine(const QImage* self);
int QImage_DotsPerMeterX(const QImage* self);
int QImage_DotsPerMeterY(const QImage* self);
void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX);
void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY);
QPoint* QImage_Offset(const QImage* self);
void QImage_SetOffset(QImage* self, const QPoint* offset);
libqt_list /* of libqt_string */ QImage_TextKeys(const QImage* self);
libqt_string QImage_Text(const QImage* self);
void QImage_SetText(QImage* self, const libqt_string key, const libqt_string value);
QPixelFormat* QImage_PixelFormat(const QImage* self);
QPixelFormat* QImage_ToPixelFormat(int format);
int QImage_ToImageFormat(QPixelFormat* format);
int QImage_Metric(const QImage* self, int metric);
void QImage_OnMetric(const QImage* self, intptr_t slot);
int QImage_QBaseMetric(const QImage* self, int metric);
QImage* QImage_Copy1(const QImage* self, const QRect* rect);
QImage* QImage_ConvertToFormat22(const QImage* self, int f, int flags);
QImage* QImage_ConvertToFormat3(const QImage* self, int f, const libqt_list /* of unsigned int */ colorTable, int flags);
QImage* QImage_ConvertedTo2(const QImage* self, int f, int flags);
void QImage_ConvertTo2(QImage* self, int f, int flags);
QImage* QImage_CreateAlphaMask1(const QImage* self, int flags);
QImage* QImage_CreateHeuristicMask1(const QImage* self, bool clipTight);
QImage* QImage_CreateMaskFromColor2(const QImage* self, unsigned int color, int mode);
QImage* QImage_Scaled3(const QImage* self, int w, int h, int aspectMode);
QImage* QImage_Scaled4(const QImage* self, int w, int h, int aspectMode, int mode);
QImage* QImage_Scaled22(const QImage* self, const QSize* s, int aspectMode);
QImage* QImage_Scaled32(const QImage* self, const QSize* s, int aspectMode, int mode);
QImage* QImage_ScaledToWidth2(const QImage* self, int w, int mode);
QImage* QImage_ScaledToHeight2(const QImage* self, int h, int mode);
QImage* QImage_Transformed2(const QImage* self, const QTransform* matrix, int mode);
QImage* QImage_Mirrored1(const QImage* self, bool horizontally);
QImage* QImage_Mirrored2(const QImage* self, bool horizontally, bool vertically);
void QImage_Mirror1(QImage* self, bool horizontally);
void QImage_Mirror2(QImage* self, bool horizontally, bool vertically);
void QImage_InvertPixels1(QImage* self, int param1);
QImage* QImage_ConvertedToColorSpace3(const QImage* self, const QColorSpace* colorSpace, int format, int flags);
void QImage_ConvertToColorSpace3(QImage* self, const QColorSpace* colorSpace, int format, int flags);
QImage* QImage_ColorTransformed3(const QImage* self, const QColorTransform* transform, int format, int flags);
void QImage_ApplyColorTransform3(QImage* self, const QColorTransform* transform, int format, int flags);
bool QImage_Load22(QImage* self, const libqt_string fileName, const char* format);
bool QImage_LoadFromData22(QImage* self, QByteArrayView* data, const char* format);
bool QImage_LoadFromData32(QImage* self, const unsigned char* buf, int lenVal, const char* format);
bool QImage_LoadFromData23(QImage* self, const libqt_string data, const char* format);
bool QImage_Save22(const QImage* self, const libqt_string fileName, const char* format);
bool QImage_Save3(const QImage* self, const libqt_string fileName, const char* format, int quality);
bool QImage_Save23(const QImage* self, QIODevice* device, const char* format);
bool QImage_Save32(const QImage* self, QIODevice* device, const char* format, int quality);
QImage* QImage_FromData22(QByteArrayView* data, const char* format);
QImage* QImage_FromData32(const unsigned char* data, int size, const char* format);
QImage* QImage_FromData23(const libqt_string data, const char* format);
libqt_string QImage_Text1(const QImage* self, const libqt_string key);
void QImage_InitPainter(const QImage* self, QPainter* painter);
void QImage_OnInitPainter(const QImage* self, intptr_t slot);
void QImage_QBaseInitPainter(const QImage* self, QPainter* painter);
QPaintDevice* QImage_Redirected(const QImage* self, QPoint* offset);
void QImage_OnRedirected(const QImage* self, intptr_t slot);
QPaintDevice* QImage_QBaseRedirected(const QImage* self, QPoint* offset);
QPainter* QImage_SharedPainter(const QImage* self);
void QImage_OnSharedPainter(const QImage* self, intptr_t slot);
QPainter* QImage_QBaseSharedPainter(const QImage* self);
QImage* QImage_MirroredHelper(const QImage* self, bool horizontal, bool vertical);
void QImage_OnMirroredHelper(const QImage* self, intptr_t slot);
QImage* QImage_QBaseMirroredHelper(const QImage* self, bool horizontal, bool vertical);
QImage* QImage_RgbSwappedHelper(const QImage* self);
void QImage_OnRgbSwappedHelper(const QImage* self, intptr_t slot);
QImage* QImage_QBaseRgbSwappedHelper(const QImage* self);
void QImage_MirroredInplace(QImage* self, bool horizontal, bool vertical);
void QImage_OnMirroredInplace(QImage* self, intptr_t slot);
void QImage_QBaseMirroredInplace(QImage* self, bool horizontal, bool vertical);
void QImage_RgbSwappedInplace(QImage* self);
void QImage_OnRgbSwappedInplace(QImage* self, intptr_t slot);
void QImage_QBaseRgbSwappedInplace(QImage* self);
QImage* QImage_ConvertToFormatHelper(const QImage* self, int format, int flags);
void QImage_OnConvertToFormatHelper(const QImage* self, intptr_t slot);
QImage* QImage_QBaseConvertToFormatHelper(const QImage* self, int format, int flags);
bool QImage_ConvertToFormatInplace(QImage* self, int format, int flags);
void QImage_OnConvertToFormatInplace(QImage* self, intptr_t slot);
bool QImage_QBaseConvertToFormatInplace(QImage* self, int format, int flags);
QImage* QImage_SmoothScaled(const QImage* self, int w, int h);
void QImage_OnSmoothScaled(const QImage* self, intptr_t slot);
QImage* QImage_QBaseSmoothScaled(const QImage* self, int w, int h);
void QImage_DetachMetadata(QImage* self);
void QImage_OnDetachMetadata(QImage* self, intptr_t slot);
void QImage_QBaseDetachMetadata(QImage* self);
void QImage_DetachMetadata1(QImage* self, bool invalidateCache);
void QImage_OnDetachMetadata1(QImage* self, intptr_t slot);
void QImage_QBaseDetachMetadata1(QImage* self, bool invalidateCache);
double QImage_GetDecodedMetricF(const QImage* self, int metricA, int metricB);
void QImage_OnGetDecodedMetricF(const QImage* self, intptr_t slot);
double QImage_QBaseGetDecodedMetricF(const QImage* self, int metricA, int metricB);
void QImage_Delete(QImage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
