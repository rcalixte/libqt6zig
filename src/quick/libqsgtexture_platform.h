#pragma once
#ifndef QUICK_LIBQSGTEXTURE_PLATFORM_H
#define QUICK_LIBQSGTEXTURE_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QSGOpenGLTexture)
typedef QNativeInterface::QSGOpenGLTexture QNativeInterface__QSGOpenGLTexture;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QSGVulkanTexture)
typedef QNativeInterface::QSGVulkanTexture QNativeInterface__QSGVulkanTexture;
#endif
#else
typedef struct QNativeInterface__QSGOpenGLTexture QNativeInterface__QSGOpenGLTexture;
typedef struct QNativeInterface__QSGVulkanTexture QNativeInterface__QSGVulkanTexture;
typedef struct QQuickWindow QQuickWindow;
typedef struct QSGTexture QSGTexture;
typedef struct QSize QSize;
#endif

QNativeInterface__QSGOpenGLTexture* QNativeInterface__QSGOpenGLTexture_new();
uint32_t QNativeInterface__QSGOpenGLTexture_NativeTexture(const QNativeInterface__QSGOpenGLTexture* self);
QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNative(uint32_t textureId, QQuickWindow* window, const QSize* size);
QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES(uint32_t textureId, QQuickWindow* window, const QSize* size);
QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNative4(uint32_t textureId, QQuickWindow* window, const QSize* size, int options);
QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES4(uint32_t textureId, QQuickWindow* window, const QSize* size, int options);
void QNativeInterface__QSGOpenGLTexture_OnNativeTexture(const QNativeInterface__QSGOpenGLTexture* self, intptr_t slot);
uint32_t QNativeInterface__QSGOpenGLTexture_SuperNativeTexture(const QNativeInterface__QSGOpenGLTexture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
