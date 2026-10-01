#pragma once
#ifndef LIBQOPENGLCONTEXT_PLATFORM_HXX
#define LIBQOPENGLCONTEXT_PLATFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QNativeInterface::QEGLContext
class VirtualQNativeInterfaceQEGLContext : public QNativeInterface::QEGLContext {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNativeInterface__QEGLContext_NativeContext_Callback = void* (*)(const QNativeInterface__QEGLContext*);
    using QNativeInterface__QEGLContext_Config_Callback = void* (*)(const QNativeInterface__QEGLContext*);
    using QNativeInterface__QEGLContext_Display_Callback = void* (*)(const QNativeInterface__QEGLContext*);

    // Instance callback storage
    QNativeInterface__QEGLContext_NativeContext_Callback qnativeinterface__qeglcontext_nativecontext_callback = nullptr;
    QNativeInterface__QEGLContext_Config_Callback qnativeinterface__qeglcontext_config_callback = nullptr;
    QNativeInterface__QEGLContext_Display_Callback qnativeinterface__qeglcontext_display_callback = nullptr;

    VirtualQNativeInterfaceQEGLContext() : QNativeInterface::QEGLContext() {};

    // Virtual method for C ABI access and custom callback
    virtual EGLContext nativeContext() const override {
        if (qnativeinterface__qeglcontext_nativecontext_callback) {
            void* callback_ret = qnativeinterface__qeglcontext_nativecontext_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QEGLContext::nativeContext called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual EGLConfig config() const override {
        if (qnativeinterface__qeglcontext_config_callback) {
            void* callback_ret = qnativeinterface__qeglcontext_config_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QEGLContext::config called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual EGLDisplay display() const override {
        if (qnativeinterface__qeglcontext_display_callback) {
            void* callback_ret = qnativeinterface__qeglcontext_display_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QEGLContext::display called without being implemented");
    }

    // unimplemented pure virtual method
    virtual void invalidateContext() override {}
};

#endif
