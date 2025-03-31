#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOFRAME_H
#define SRC_MULTIMEDIAC_LIBQVIDEOFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
typedef struct QImage QImage;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrameFormat QVideoFrameFormat;
typedef struct QVideoFrame__PaintOptions QVideoFrame__PaintOptions;
#endif

#ifdef __cplusplus
typedef QVideoFrame::HandleType HandleType;                           // C++ enum
typedef QVideoFrame::MapMode MapMode;                                 // C++ enum
typedef QVideoFrame::PaintOptions::PaintFlag PaintOptionsPaintFlag;   // C++ enum
typedef QVideoFrame::PaintOptions::PaintFlags PaintOptionsPaintFlags; // C++ QFlags
typedef QVideoFrame::RotationAngle RotationAngle;                     // C++ enum
#else
typedef int HandleType;             // C ABI enum
typedef int MapMode;                // C ABI enum
typedef int PaintOptionsPaintFlag;  // C ABI enum
typedef int PaintOptionsPaintFlags; // C ABI QFlags
typedef int RotationAngle;          // C ABI enum
#endif

QVideoFrame* QVideoFrame_new();
QVideoFrame* QVideoFrame_new2(QVideoFrameFormat* format);
QVideoFrame* QVideoFrame_new3(QVideoFrame* other);
void QVideoFrame_Swap(QVideoFrame* self, QVideoFrame* other);
void QVideoFrame_OperatorAssign(QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_OperatorEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_OperatorNotEqual(const QVideoFrame* self, QVideoFrame* other);
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
const unsigned char* QVideoFrame_BitsWithPlane(const QVideoFrame* self, int plane);
int QVideoFrame_MappedBytes(const QVideoFrame* self, int plane);
int QVideoFrame_PlaneCount(const QVideoFrame* self);
long long QVideoFrame_StartTime(const QVideoFrame* self);
void QVideoFrame_SetStartTime(QVideoFrame* self, long long time);
long long QVideoFrame_EndTime(const QVideoFrame* self);
void QVideoFrame_SetEndTime(QVideoFrame* self, long long time);
void QVideoFrame_SetRotationAngle(QVideoFrame* self, int rotationAngle);
int QVideoFrame_RotationAngle(const QVideoFrame* self);
void QVideoFrame_SetMirrored(QVideoFrame* self, bool mirrored);
bool QVideoFrame_Mirrored(const QVideoFrame* self);
QImage* QVideoFrame_ToImage(const QVideoFrame* self);
libqt_string QVideoFrame_SubtitleText(const QVideoFrame* self);
void QVideoFrame_SetSubtitleText(QVideoFrame* self, libqt_string text);
void QVideoFrame_Paint(QVideoFrame* self, QPainter* painter, QRectF* rect, QVideoFrame__PaintOptions* options);
void QVideoFrame_Delete(QVideoFrame* self);

QVideoFrame__PaintOptions* QVideoFrame__PaintOptions_new(QVideoFrame__PaintOptions* other);
QVideoFrame__PaintOptions* QVideoFrame__PaintOptions_new2(QVideoFrame__PaintOptions* other);
void QVideoFrame__PaintOptions_CopyAssign(QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other);
void QVideoFrame__PaintOptions_MoveAssign(QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other);
void QVideoFrame__PaintOptions_Delete(QVideoFrame__PaintOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
