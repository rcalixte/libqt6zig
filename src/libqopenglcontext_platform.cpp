#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QEGLContext
#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QGLXContext
#include <QOpenGLContext>
#include <qopenglcontext_platform.h>
#include "libqopenglcontext_platform.h"
#include "libqopenglcontext_platform.hxx"

QOpenGLContext* QNativeInterface__QEGLContext_FromNative(void* context, void* display) {
    return QNativeInterface::QEGLContext::fromNative(context, display);
}

void* QNativeInterface__QEGLContext_NativeContext(const QNativeInterface__QEGLContext* self) {
    return static_cast<void*>(self->nativeContext());
}

void* QNativeInterface__QEGLContext_Config(const QNativeInterface__QEGLContext* self) {
    return static_cast<void*>(self->config());
}

void* QNativeInterface__QEGLContext_Display(const QNativeInterface__QEGLContext* self) {
    return static_cast<void*>(self->display());
}

void QNativeInterface__QEGLContext_InvalidateContext(QNativeInterface__QEGLContext* self) {
    self->invalidateContext();
}

QOpenGLContext* QNativeInterface__QEGLContext_FromNative3(void* context, void* display, QOpenGLContext* shareContext) {
    return QNativeInterface::QEGLContext::fromNative(context, display, shareContext);
}
