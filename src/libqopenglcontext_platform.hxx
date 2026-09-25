#pragma once
#ifndef LIBQOPENGLCONTEXT_PLATFORM_HXX
#define LIBQOPENGLCONTEXT_PLATFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QNativeInterface::QEGLContext so that we can call protected methods
class VirtualQNativeInterfaceQEGLContext : public QNativeInterface::QEGLContext {

  public:
    // Virtual class boolean flag
    bool isVirtualQNativeInterfaceQEGLContext = true;

    // Virtual class public types (including callbacks)
    using QNativeInterface__QEGLContext_NativeContext_Callback = void* (*)();
    using QNativeInterface__QEGLContext_Config_Callback = void* (*)();
    using QNativeInterface__QEGLContext_Display_Callback = void* (*)();

  protected:
    // Instance callback storage
    QNativeInterface__QEGLContext_NativeContext_Callback qnativeinterface__qeglcontext_nativecontext_callback = nullptr;
    QNativeInterface__QEGLContext_Config_Callback qnativeinterface__qeglcontext_config_callback = nullptr;
    QNativeInterface__QEGLContext_Display_Callback qnativeinterface__qeglcontext_display_callback = nullptr;

    // Instance base flags
    mutable bool qnativeinterface__qeglcontext_nativecontext_isbase = false;
    mutable bool qnativeinterface__qeglcontext_config_isbase = false;
    mutable bool qnativeinterface__qeglcontext_display_isbase = false;

  public:
    VirtualQNativeInterfaceQEGLContext() : QNativeInterface::QEGLContext() {};

    // Callback setters
    inline void setQNativeInterface__QEGLContext_NativeContext_Callback(QNativeInterface__QEGLContext_NativeContext_Callback cb) { qnativeinterface__qeglcontext_nativecontext_callback = cb; }
    inline void setQNativeInterface__QEGLContext_Config_Callback(QNativeInterface__QEGLContext_Config_Callback cb) { qnativeinterface__qeglcontext_config_callback = cb; }
    inline void setQNativeInterface__QEGLContext_Display_Callback(QNativeInterface__QEGLContext_Display_Callback cb) { qnativeinterface__qeglcontext_display_callback = cb; }

    // Base flag setters
    inline void setQNativeInterface__QEGLContext_NativeContext_IsBase(bool value) const { qnativeinterface__qeglcontext_nativecontext_isbase = value; }
    inline void setQNativeInterface__QEGLContext_Config_IsBase(bool value) const { qnativeinterface__qeglcontext_config_isbase = value; }
    inline void setQNativeInterface__QEGLContext_Display_IsBase(bool value) const { qnativeinterface__qeglcontext_display_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual EGLContext nativeContext() const override {
        auto nativecontext_cb = qnativeinterface__qeglcontext_nativecontext_callback;
        if (nativecontext_cb) {
            void* callback_ret = nativecontext_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual EGLConfig config() const override {
        auto config_cb = qnativeinterface__qeglcontext_config_callback;
        if (config_cb) {
            void* callback_ret = config_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual EGLDisplay display() const override {
        auto display_cb = qnativeinterface__qeglcontext_display_callback;
        if (display_cb) {
            void* callback_ret = display_cb();
            return callback_ret;
        }
        return {};
    }

    // unimplemented pure virtual method
    virtual void invalidateContext() override {}
};

#endif
