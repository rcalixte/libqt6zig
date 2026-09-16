#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QSGOpenGLTexture
#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QSGVulkanTexture
#include <QQuickWindow>
#include <QSGTexture>
#include <QSize>
#include <qsgtexture_platform.h>
#include "libqsgtexture_platform.h"
#include "libqsgtexture_platform.hxx"

QNativeInterface__QSGOpenGLTexture* QNativeInterface__QSGOpenGLTexture_new() {
    return new VirtualQNativeInterfaceQSGOpenGLTexture();
}

uint32_t QNativeInterface__QSGOpenGLTexture_NativeTexture(const QNativeInterface__QSGOpenGLTexture* self) {
    return self->nativeTexture();
}

QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNative(uint32_t textureId, QQuickWindow* window, const QSize* size) {
    return QNativeInterface::QSGOpenGLTexture::fromNative(static_cast<GLuint>(textureId), window, *size);
}

QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES(uint32_t textureId, QQuickWindow* window, const QSize* size) {
    return QNativeInterface::QSGOpenGLTexture::fromNativeExternalOES(static_cast<GLuint>(textureId), window, *size);
}

QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNative4(uint32_t textureId, QQuickWindow* window, const QSize* size, int options) {
    return QNativeInterface::QSGOpenGLTexture::fromNative(static_cast<GLuint>(textureId), window, *size, static_cast<QQuickWindow::CreateTextureOptions>(options));
}

QSGTexture* QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES4(uint32_t textureId, QQuickWindow* window, const QSize* size, int options) {
    return QNativeInterface::QSGOpenGLTexture::fromNativeExternalOES(static_cast<GLuint>(textureId), window, *size, static_cast<QQuickWindow::CreateTextureOptions>(options));
}

// Base class handler implementation
uint32_t QNativeInterface__QSGOpenGLTexture_SuperNativeTexture(const QNativeInterface__QSGOpenGLTexture* self) {
    auto* vqnativeinterfaceqsgopengltexture = const_cast<VirtualQNativeInterfaceQSGOpenGLTexture*>(dynamic_cast<const VirtualQNativeInterfaceQSGOpenGLTexture*>(self));
    if (vqnativeinterfaceqsgopengltexture && vqnativeinterfaceqsgopengltexture->isVirtualQNativeInterfaceQSGOpenGLTexture) {
        vqnativeinterfaceqsgopengltexture->setQNativeInterface__QSGOpenGLTexture_NativeTexture_IsBase(true);
        return vqnativeinterfaceqsgopengltexture->nativeTexture();
    } else {
        return ((VirtualQNativeInterfaceQSGOpenGLTexture*)self)->nativeTexture();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QSGOpenGLTexture_OnNativeTexture(const QNativeInterface__QSGOpenGLTexture* self, intptr_t slot) {
    auto* vqnativeinterfaceqsgopengltexture = const_cast<VirtualQNativeInterfaceQSGOpenGLTexture*>(dynamic_cast<const VirtualQNativeInterfaceQSGOpenGLTexture*>(self));
    if (vqnativeinterfaceqsgopengltexture && vqnativeinterfaceqsgopengltexture->isVirtualQNativeInterfaceQSGOpenGLTexture)
        vqnativeinterfaceqsgopengltexture->setQNativeInterface__QSGOpenGLTexture_NativeTexture_Callback(reinterpret_cast<VirtualQNativeInterfaceQSGOpenGLTexture::QNativeInterface__QSGOpenGLTexture_NativeTexture_Callback>(slot));
}
