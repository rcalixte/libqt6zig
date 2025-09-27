#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLPIXELTRANSFEROPTIONS_H
#define SRC_OPENGLC_LIBQOPENGLPIXELTRANSFEROPTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLPixelTransferOptions QOpenGLPixelTransferOptions;
#endif

QOpenGLPixelTransferOptions* QOpenGLPixelTransferOptions_new();
QOpenGLPixelTransferOptions* QOpenGLPixelTransferOptions_new2(const QOpenGLPixelTransferOptions* param1);
void QOpenGLPixelTransferOptions_OperatorAssign(QOpenGLPixelTransferOptions* self, const QOpenGLPixelTransferOptions* param1);
void QOpenGLPixelTransferOptions_Swap(QOpenGLPixelTransferOptions* self, QOpenGLPixelTransferOptions* other);
void QOpenGLPixelTransferOptions_SetAlignment(QOpenGLPixelTransferOptions* self, int alignment);
int QOpenGLPixelTransferOptions_Alignment(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetSkipImages(QOpenGLPixelTransferOptions* self, int skipImages);
int QOpenGLPixelTransferOptions_SkipImages(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetSkipRows(QOpenGLPixelTransferOptions* self, int skipRows);
int QOpenGLPixelTransferOptions_SkipRows(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetSkipPixels(QOpenGLPixelTransferOptions* self, int skipPixels);
int QOpenGLPixelTransferOptions_SkipPixels(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetImageHeight(QOpenGLPixelTransferOptions* self, int imageHeight);
int QOpenGLPixelTransferOptions_ImageHeight(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetRowLength(QOpenGLPixelTransferOptions* self, int rowLength);
int QOpenGLPixelTransferOptions_RowLength(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(QOpenGLPixelTransferOptions* self, bool lsbFirst);
bool QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_SetSwapBytesEnabled(QOpenGLPixelTransferOptions* self, bool swapBytes);
bool QOpenGLPixelTransferOptions_IsSwapBytesEnabled(const QOpenGLPixelTransferOptions* self);
void QOpenGLPixelTransferOptions_Delete(QOpenGLPixelTransferOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
