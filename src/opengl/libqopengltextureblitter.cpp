#include <QMatrix4x4>
#include <QOpenGLTextureBlitter>
#include <QRect>
#include <QRectF>
#include <qopengltextureblitter.h>
#include "libqopengltextureblitter.h"
#include "libqopengltextureblitter.hxx"

QOpenGLTextureBlitter* QOpenGLTextureBlitter_new() {
    return new QOpenGLTextureBlitter();
}

bool QOpenGLTextureBlitter_Create(QOpenGLTextureBlitter* self) {
    return self->create();
}

bool QOpenGLTextureBlitter_IsCreated(const QOpenGLTextureBlitter* self) {
    return self->isCreated();
}

void QOpenGLTextureBlitter_Destroy(QOpenGLTextureBlitter* self) {
    self->destroy();
}

bool QOpenGLTextureBlitter_SupportsExternalOESTarget(const QOpenGLTextureBlitter* self) {
    return self->supportsExternalOESTarget();
}

bool QOpenGLTextureBlitter_SupportsRectangleTarget(const QOpenGLTextureBlitter* self) {
    return self->supportsRectangleTarget();
}

void QOpenGLTextureBlitter_Bind(QOpenGLTextureBlitter* self) {
    self->bind();
}

void QOpenGLTextureBlitter_Release(QOpenGLTextureBlitter* self) {
    self->release();
}

void QOpenGLTextureBlitter_SetRedBlueSwizzle(QOpenGLTextureBlitter* self, bool swizzle) {
    self->setRedBlueSwizzle(swizzle);
}

void QOpenGLTextureBlitter_SetOpacity(QOpenGLTextureBlitter* self, float opacity) {
    self->setOpacity(static_cast<float>(opacity));
}

void QOpenGLTextureBlitter_Blit(QOpenGLTextureBlitter* self, uint32_t texture, const QMatrix4x4* targetTransform, int sourceOrigin) {
    self->blit(static_cast<GLuint>(texture), *targetTransform, static_cast<QOpenGLTextureBlitter::Origin>(sourceOrigin));
}

QMatrix4x4* QOpenGLTextureBlitter_TargetTransform(const QRectF* target, const QRect* viewport) {
    return new QMatrix4x4(QOpenGLTextureBlitter::targetTransform(*target, *viewport));
}

void QOpenGLTextureBlitter_Bind1(QOpenGLTextureBlitter* self, uint32_t target) {
    self->bind(static_cast<GLenum>(target));
}

void QOpenGLTextureBlitter_Delete(QOpenGLTextureBlitter* self) {
    delete self;
}
