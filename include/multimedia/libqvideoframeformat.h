#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOFRAMEFORMAT_H
#define SRC_MULTIMEDIAC_LIBQVIDEOFRAMEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVideoFrameFormat QVideoFrameFormat;
#endif

#ifdef __cplusplus
typedef QVideoFrameFormat::ColorRange ColorRange;           // C++ enum
typedef QVideoFrameFormat::ColorSpace ColorSpace;           // C++ enum
typedef QVideoFrameFormat::ColorTransfer ColorTransfer;     // C++ enum
typedef QVideoFrameFormat::Direction Direction;             // C++ enum
typedef QVideoFrameFormat::PixelFormat PixelFormat;         // C++ enum
typedef QVideoFrameFormat::YCbCrColorSpace YCbCrColorSpace; // C++ enum
#else
typedef int ColorRange;      // C ABI enum
typedef int ColorSpace;      // C ABI enum
typedef int ColorTransfer;   // C ABI enum
typedef int Direction;       // C ABI enum
typedef int PixelFormat;     // C ABI enum
typedef int YCbCrColorSpace; // C ABI enum
#endif

QVideoFrameFormat* QVideoFrameFormat_new();
QVideoFrameFormat* QVideoFrameFormat_new2(QSize* size, int pixelFormat);
QVideoFrameFormat* QVideoFrameFormat_new3(QVideoFrameFormat* format);
void QVideoFrameFormat_Swap(QVideoFrameFormat* self, QVideoFrameFormat* other);
void QVideoFrameFormat_Detach(QVideoFrameFormat* self);
void QVideoFrameFormat_OperatorAssign(QVideoFrameFormat* self, QVideoFrameFormat* format);
bool QVideoFrameFormat_OperatorEqual(const QVideoFrameFormat* self, QVideoFrameFormat* format);
bool QVideoFrameFormat_OperatorNotEqual(const QVideoFrameFormat* self, QVideoFrameFormat* format);
bool QVideoFrameFormat_IsValid(const QVideoFrameFormat* self);
int QVideoFrameFormat_PixelFormat(const QVideoFrameFormat* self);
QSize* QVideoFrameFormat_FrameSize(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetFrameSize(QVideoFrameFormat* self, QSize* size);
void QVideoFrameFormat_SetFrameSize2(QVideoFrameFormat* self, int width, int height);
int QVideoFrameFormat_FrameWidth(const QVideoFrameFormat* self);
int QVideoFrameFormat_FrameHeight(const QVideoFrameFormat* self);
int QVideoFrameFormat_PlaneCount(const QVideoFrameFormat* self);
QRect* QVideoFrameFormat_Viewport(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetViewport(QVideoFrameFormat* self, QRect* viewport);
int QVideoFrameFormat_ScanLineDirection(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetScanLineDirection(QVideoFrameFormat* self, int direction);
double QVideoFrameFormat_FrameRate(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetFrameRate(QVideoFrameFormat* self, double rate);
int QVideoFrameFormat_YCbCrColorSpace(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetYCbCrColorSpace(QVideoFrameFormat* self, int colorSpace);
int QVideoFrameFormat_ColorSpace(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetColorSpace(QVideoFrameFormat* self, int colorSpace);
int QVideoFrameFormat_ColorTransfer(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetColorTransfer(QVideoFrameFormat* self, int colorTransfer);
int QVideoFrameFormat_ColorRange(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetColorRange(QVideoFrameFormat* self, int range);
bool QVideoFrameFormat_IsMirrored(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetMirrored(QVideoFrameFormat* self, bool mirrored);
libqt_string QVideoFrameFormat_VertexShaderFileName(const QVideoFrameFormat* self);
libqt_string QVideoFrameFormat_FragmentShaderFileName(const QVideoFrameFormat* self);
float QVideoFrameFormat_MaxLuminance(const QVideoFrameFormat* self);
void QVideoFrameFormat_SetMaxLuminance(QVideoFrameFormat* self, float lum);
int QVideoFrameFormat_PixelFormatFromImageFormat(int format);
int QVideoFrameFormat_ImageFormatFromPixelFormat(int format);
libqt_string QVideoFrameFormat_PixelFormatToString(int pixelFormat);
void QVideoFrameFormat_Delete(QVideoFrameFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
