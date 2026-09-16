#pragma once
#ifndef QUICK_LIBQQUICKRENDERTARGET_H
#define QUICK_LIBQQUICKRENDERTARGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QQuickRenderTarget QQuickRenderTarget;
typedef struct QSize QSize;
#endif

QQuickRenderTarget* QQuickRenderTarget_new();
QQuickRenderTarget* QQuickRenderTarget_new2(const QQuickRenderTarget* other);
void QQuickRenderTarget_OperatorAssign(QQuickRenderTarget* self, const QQuickRenderTarget* other);
bool QQuickRenderTarget_IsNull(const QQuickRenderTarget* self);
double QQuickRenderTarget_DevicePixelRatio(const QQuickRenderTarget* self);
void QQuickRenderTarget_SetDevicePixelRatio(QQuickRenderTarget* self, double ratio);
bool QQuickRenderTarget_MirrorVertically(const QQuickRenderTarget* self);
void QQuickRenderTarget_SetMirrorVertically(QQuickRenderTarget* self, bool enable);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture(unsigned int textureId, const QSize* pixelSize);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture2(unsigned int textureId, unsigned int format, const QSize* pixelSize);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture3(unsigned int textureId, unsigned int format, QSize* pixelSize, int sampleCount, int arraySize, int flags);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLRenderBuffer(unsigned int renderbufferId, const QSize* pixelSize);
QQuickRenderTarget* QQuickRenderTarget_FromPaintDevice(QPaintDevice* device);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture32(unsigned int textureId, const QSize* pixelSize, int sampleCount);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture4(unsigned int textureId, unsigned int format, const QSize* pixelSize, int sampleCount);
QQuickRenderTarget* QQuickRenderTarget_FromOpenGLRenderBuffer3(unsigned int renderbufferId, const QSize* pixelSize, int sampleCount);
void QQuickRenderTarget_Delete(QQuickRenderTarget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
