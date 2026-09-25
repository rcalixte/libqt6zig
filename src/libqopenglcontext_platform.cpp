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

// Base class handler implementation
void* QNativeInterface__QEGLContext_SuperNativeContext(const QNativeInterface__QEGLContext* self) {
    auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self));
    if (vqnativeinterfaceqeglcontext && vqnativeinterfaceqeglcontext->isVirtualQNativeInterfaceQEGLContext) {
        vqnativeinterfaceqeglcontext->setQNativeInterface__QEGLContext_NativeContext_IsBase(true);
        return static_cast<void*>(vqnativeinterfaceqeglcontext->nativeContext());
    } else {
        return static_cast<void*>(((VirtualQNativeInterfaceQEGLContext*)self)->nativeContext());
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QEGLContext_OnNativeContext(const QNativeInterface__QEGLContext* self, intptr_t slot) {
    auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self));
    if (vqnativeinterfaceqeglcontext && vqnativeinterfaceqeglcontext->isVirtualQNativeInterfaceQEGLContext)
        vqnativeinterfaceqeglcontext->setQNativeInterface__QEGLContext_NativeContext_Callback(reinterpret_cast<VirtualQNativeInterfaceQEGLContext::QNativeInterface__QEGLContext_NativeContext_Callback>(slot));
}

// Base class handler implementation
void* QNativeInterface__QEGLContext_SuperConfig(const QNativeInterface__QEGLContext* self) {
    auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self));
    if (vqnativeinterfaceqeglcontext && vqnativeinterfaceqeglcontext->isVirtualQNativeInterfaceQEGLContext) {
        vqnativeinterfaceqeglcontext->setQNativeInterface__QEGLContext_Config_IsBase(true);
        return static_cast<void*>(vqnativeinterfaceqeglcontext->config());
    } else {
        return static_cast<void*>(((VirtualQNativeInterfaceQEGLContext*)self)->config());
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QEGLContext_OnConfig(const QNativeInterface__QEGLContext* self, intptr_t slot) {
    auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self));
    if (vqnativeinterfaceqeglcontext && vqnativeinterfaceqeglcontext->isVirtualQNativeInterfaceQEGLContext)
        vqnativeinterfaceqeglcontext->setQNativeInterface__QEGLContext_Config_Callback(reinterpret_cast<VirtualQNativeInterfaceQEGLContext::QNativeInterface__QEGLContext_Config_Callback>(slot));
}

// Base class handler implementation
void* QNativeInterface__QEGLContext_SuperDisplay(const QNativeInterface__QEGLContext* self) {
    auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self));
    if (vqnativeinterfaceqeglcontext && vqnativeinterfaceqeglcontext->isVirtualQNativeInterfaceQEGLContext) {
        vqnativeinterfaceqeglcontext->setQNativeInterface__QEGLContext_Display_IsBase(true);
        return static_cast<void*>(vqnativeinterfaceqeglcontext->display());
    } else {
        return static_cast<void*>(((VirtualQNativeInterfaceQEGLContext*)self)->display());
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QEGLContext_OnDisplay(const QNativeInterface__QEGLContext* self, intptr_t slot) {
    auto* vqnativeinterfaceqeglcontext = const_cast<VirtualQNativeInterfaceQEGLContext*>(dynamic_cast<const VirtualQNativeInterfaceQEGLContext*>(self));
    if (vqnativeinterfaceqeglcontext && vqnativeinterfaceqeglcontext->isVirtualQNativeInterfaceQEGLContext)
        vqnativeinterfaceqeglcontext->setQNativeInterface__QEGLContext_Display_Callback(reinterpret_cast<VirtualQNativeInterfaceQEGLContext::QNativeInterface__QEGLContext_Display_Callback>(slot));
}
