#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOFRAME_H
#define SRC_MULTIMEDIAC_LIBQVIDEOFRAME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QVideoFrame__PaintOptions)
typedef QVideoFrame::PaintOptions QVideoFrame__PaintOptions;
#endif
#else
typedef struct QColor QColor;
typedef struct QImage QImage;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrameFormat QVideoFrameFormat;
typedef struct QVideoFrame__PaintOptions QVideoFrame__PaintOptions;
#endif

QVideoFrame* QVideoFrame_new();
QVideoFrame* QVideoFrame_new2(const QVideoFrameFormat* format);
QVideoFrame* QVideoFrame_new3(const QImage* image);
QVideoFrame* QVideoFrame_new4(const QVideoFrame* other);
void QVideoFrame_Swap(QVideoFrame* self, QVideoFrame* other);
void QVideoFrame_OperatorAssign(QVideoFrame* self, const QVideoFrame* other);
bool QVideoFrame_OperatorEqual(const QVideoFrame* self, const QVideoFrame* other);
bool QVideoFrame_OperatorNotEqual(const QVideoFrame* self, const QVideoFrame* other);
bool QVideoFrame_IsValid(const QVideoFrame* self);
int QVideoFrame_PixelFormat(const QVideoFrame* self);
QVideoFrameFormat* QVideoFrame_SurfaceFormat(const QVideoFrame* self);
int QVideoFrame_HandleType(const QVideoFrame* self);
QSize* QVideoFrame_Size(const QVideoFrame* self);
int QVideoFrame_Width(const QVideoFrame* self);
int QVideoFrame_Height(const QVideoFrame* self);
bool QVideoFrame_IsMapped(const QVideoFrame* self);
bool QVideoFrame_IsReadable(const QVideoFrame* self);
bool QVideoFrame_IsWritable(const QVideoFrame* self);
int QVideoFrame_MapMode(const QVideoFrame* self);
bool QVideoFrame_Map(QVideoFrame* self, int mode);
void QVideoFrame_Unmap(QVideoFrame* self);
int QVideoFrame_BytesPerLine(const QVideoFrame* self, int plane);
unsigned char* QVideoFrame_Bits(QVideoFrame* self, int plane);
const unsigned char* QVideoFrame_Bits2(const QVideoFrame* self, int plane);
int QVideoFrame_MappedBytes(const QVideoFrame* self, int plane);
int QVideoFrame_PlaneCount(const QVideoFrame* self);
long long QVideoFrame_StartTime(const QVideoFrame* self);
void QVideoFrame_SetStartTime(QVideoFrame* self, long long time);
long long QVideoFrame_EndTime(const QVideoFrame* self);
void QVideoFrame_SetEndTime(QVideoFrame* self, long long time);
void QVideoFrame_SetRotationAngle(QVideoFrame* self, int angle);
int QVideoFrame_RotationAngle(const QVideoFrame* self);
void QVideoFrame_SetRotation(QVideoFrame* self, int angle);
int QVideoFrame_Rotation(const QVideoFrame* self);
void QVideoFrame_SetMirrored(QVideoFrame* self, bool mirrored);
bool QVideoFrame_Mirrored(const QVideoFrame* self);
void QVideoFrame_SetStreamFrameRate(QVideoFrame* self, double rate);
double QVideoFrame_StreamFrameRate(const QVideoFrame* self);
QImage* QVideoFrame_ToImage(const QVideoFrame* self);
libqt_string QVideoFrame_SubtitleText(const QVideoFrame* self);
void QVideoFrame_SetSubtitleText(QVideoFrame* self, const libqt_string text);
void QVideoFrame_Paint(QVideoFrame* self, QPainter* painter, const QRectF* rect, const QVideoFrame__PaintOptions* options);
void QVideoFrame_Delete(QVideoFrame* self);

QVideoFrame__PaintOptions* QVideoFrame__PaintOptions_new(const QVideoFrame__PaintOptions* other);
QVideoFrame__PaintOptions* QVideoFrame__PaintOptions_new2(QVideoFrame__PaintOptions* other);
void QVideoFrame__PaintOptions_CopyAssign(QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other);
void QVideoFrame__PaintOptions_MoveAssign(QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other);
QColor* QVideoFrame__PaintOptions_BackgroundColor(const QVideoFrame__PaintOptions* self);
void QVideoFrame__PaintOptions_SetBackgroundColor(QVideoFrame__PaintOptions* self, QColor* backgroundColor);
int QVideoFrame__PaintOptions_AspectRatioMode(const QVideoFrame__PaintOptions* self);
void QVideoFrame__PaintOptions_SetAspectRatioMode(QVideoFrame__PaintOptions* self, int aspectRatioMode);
int QVideoFrame__PaintOptions_PaintFlags(const QVideoFrame__PaintOptions* self);
void QVideoFrame__PaintOptions_SetPaintFlags(QVideoFrame__PaintOptions* self, int paintFlags);
void QVideoFrame__PaintOptions_Delete(QVideoFrame__PaintOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
