#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QEGLContext
#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QGLXContext
#include <QOpenGLContext>
#include <qopenglcontext_platform.h>
#include "libqopenglcontext_platform.h"
#include "libqopenglcontext_platform.hxx"

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
QNativeInterface__QEGLContext* QNativeInterface__QEGLContext_new() {
    return new VirtualQNativeInterfaceQEGLContext();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
QOpenGLContext* QNativeInterface__QEGLContext_FromNative(void* context, void* display) {
    return QNativeInterface::QEGLContext::fromNative(context, display);
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
void* QNativeInterface__QEGLContext_NativeContext(const QNativeInterface__QEGLContext* self) {
    return static_cast<void*>(self->nativeContext());
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
void* QNativeInterface__QEGLContext_Config(const QNativeInterface__QEGLContext* self) {
    return static_cast<void*>(self->config());
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
void* QNativeInterface__QEGLContext_Display(const QNativeInterface__QEGLContext* self) {
    return static_cast<void*>(self->display());
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
void QNativeInterface__QEGLContext_InvalidateContext(QNativeInterface__QEGLContext* self) {
    self->invalidateContext();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
QOpenGLContext* QNativeInterface__QEGLContext_FromNative3(void* context, void* display, QOpenGLContext* shareContext) {
    return QNativeInterface::QEGLContext::fromNative(context, display, shareContext);
}
#endif

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QEGLContext_OnNativeContext(QNativeInterface__QEGLContext* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self)))
        vqnativeinterfaceqeglcontext->qnativeinterface__qeglcontext_nativecontext_callback = reinterpret_cast<VirtualQNativeInterfaceQEGLContext::QNativeInterface__QEGLContext_NativeContext_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QEGLContext_OnConfig(QNativeInterface__QEGLContext* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self)))
        vqnativeinterfaceqeglcontext->qnativeinterface__qeglcontext_config_callback = reinterpret_cast<VirtualQNativeInterfaceQEGLContext::QNativeInterface__QEGLContext_Config_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QEGLContext_OnDisplay(QNativeInterface__QEGLContext* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self)))
        vqnativeinterfaceqeglcontext->qnativeinterface__qeglcontext_display_callback = reinterpret_cast<VirtualQNativeInterfaceQEGLContext::QNativeInterface__QEGLContext_Display_Callback>(slot);
}
