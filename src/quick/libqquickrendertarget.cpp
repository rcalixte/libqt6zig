#include <QPaintDevice>
#include <QQuickRenderTarget>
#include <QSize>
#include <qquickrendertarget.h>
#include "libqquickrendertarget.h"
#include "libqquickrendertarget.hxx"

QQuickRenderTarget* QQuickRenderTarget_new() {
    return new QQuickRenderTarget();
}

QQuickRenderTarget* QQuickRenderTarget_new2(const QQuickRenderTarget* other) {
    return new QQuickRenderTarget(*other);
}

void QQuickRenderTarget_OperatorAssign(QQuickRenderTarget* self, const QQuickRenderTarget* other) {
    self->operator=(*other);
}

bool QQuickRenderTarget_IsNull(const QQuickRenderTarget* self) {
    return self->isNull();
}

double QQuickRenderTarget_DevicePixelRatio(const QQuickRenderTarget* self) {
    return static_cast<double>(self->devicePixelRatio());
}

void QQuickRenderTarget_SetDevicePixelRatio(QQuickRenderTarget* self, double ratio) {
    self->setDevicePixelRatio(static_cast<qreal>(ratio));
}

bool QQuickRenderTarget_MirrorVertically(const QQuickRenderTarget* self) {
    return self->mirrorVertically();
}

void QQuickRenderTarget_SetMirrorVertically(QQuickRenderTarget* self, bool enable) {
    self->setMirrorVertically(enable);
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture(unsigned int textureId, const QSize* pixelSize) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLTexture(static_cast<uint>(textureId), *pixelSize));
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture2(unsigned int textureId, unsigned int format, const QSize* pixelSize) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLTexture(static_cast<uint>(textureId), static_cast<uint>(format), *pixelSize));
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture3(unsigned int textureId, unsigned int format, QSize* pixelSize, int sampleCount, int arraySize, int flags) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLTexture(static_cast<uint>(textureId), static_cast<uint>(format), *pixelSize, static_cast<int>(sampleCount), static_cast<int>(arraySize), static_cast<QQuickRenderTarget::Flags>(flags)));
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLRenderBuffer(unsigned int renderbufferId, const QSize* pixelSize) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLRenderBuffer(static_cast<uint>(renderbufferId), *pixelSize));
}

QQuickRenderTarget* QQuickRenderTarget_FromPaintDevice(QPaintDevice* device) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromPaintDevice(device));
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture32(unsigned int textureId, const QSize* pixelSize, int sampleCount) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLTexture(static_cast<uint>(textureId), *pixelSize, static_cast<int>(sampleCount)));
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLTexture4(unsigned int textureId, unsigned int format, const QSize* pixelSize, int sampleCount) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLTexture(static_cast<uint>(textureId), static_cast<uint>(format), *pixelSize, static_cast<int>(sampleCount)));
}

QQuickRenderTarget* QQuickRenderTarget_FromOpenGLRenderBuffer3(unsigned int renderbufferId, const QSize* pixelSize, int sampleCount) {
    return new QQuickRenderTarget(QQuickRenderTarget::fromOpenGLRenderBuffer(static_cast<uint>(renderbufferId), *pixelSize, static_cast<int>(sampleCount)));
}

void QQuickRenderTarget_Delete(QQuickRenderTarget* self) {
    delete self;
}
