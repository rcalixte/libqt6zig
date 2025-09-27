#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLTEXTUREBLITTER_H
#define SRC_OPENGLC_LIBQOPENGLTEXTUREBLITTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QOpenGLTextureBlitter QOpenGLTextureBlitter;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
#endif

QOpenGLTextureBlitter* QOpenGLTextureBlitter_new();
bool QOpenGLTextureBlitter_Create(QOpenGLTextureBlitter* self);
bool QOpenGLTextureBlitter_IsCreated(const QOpenGLTextureBlitter* self);
void QOpenGLTextureBlitter_Destroy(QOpenGLTextureBlitter* self);
bool QOpenGLTextureBlitter_SupportsExternalOESTarget(const QOpenGLTextureBlitter* self);
bool QOpenGLTextureBlitter_SupportsRectangleTarget(const QOpenGLTextureBlitter* self);
void QOpenGLTextureBlitter_Bind(QOpenGLTextureBlitter* self);
void QOpenGLTextureBlitter_Release(QOpenGLTextureBlitter* self);
void QOpenGLTextureBlitter_SetRedBlueSwizzle(QOpenGLTextureBlitter* self, bool swizzle);
void QOpenGLTextureBlitter_SetOpacity(QOpenGLTextureBlitter* self, float opacity);
void QOpenGLTextureBlitter_Blit(QOpenGLTextureBlitter* self, uint32_t texture, const QMatrix4x4* targetTransform, int sourceOrigin);
QMatrix4x4* QOpenGLTextureBlitter_TargetTransform(const QRectF* target, const QRect* viewport);
void QOpenGLTextureBlitter_Bind1(QOpenGLTextureBlitter* self, uint32_t target);
void QOpenGLTextureBlitter_Delete(QOpenGLTextureBlitter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
