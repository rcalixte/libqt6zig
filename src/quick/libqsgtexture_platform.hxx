#pragma once
#ifndef QUICK_LIBQSGTEXTURE_PLATFORM_HXX
#define QUICK_LIBQSGTEXTURE_PLATFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNativeInterface::QSGOpenGLTexture so that we can call protected methods
class VirtualQNativeInterfaceQSGOpenGLTexture : public QNativeInterface::QSGOpenGLTexture {

  public:
    // Virtual class boolean flag
    bool isVirtualQNativeInterfaceQSGOpenGLTexture = true;

    // Virtual class public types (including callbacks)
    using QNativeInterface__QSGOpenGLTexture_NativeTexture_Callback = uint32_t (*)();

  protected:
    // Instance callback storage
    QNativeInterface__QSGOpenGLTexture_NativeTexture_Callback qnativeinterface__qsgopengltexture_nativetexture_callback = nullptr;

    // Instance base flags
    mutable bool qnativeinterface__qsgopengltexture_nativetexture_isbase = false;

  public:
    VirtualQNativeInterfaceQSGOpenGLTexture() : QNativeInterface::QSGOpenGLTexture() {};

    // Callback setters
    inline void setQNativeInterface__QSGOpenGLTexture_NativeTexture_Callback(QNativeInterface__QSGOpenGLTexture_NativeTexture_Callback cb) { qnativeinterface__qsgopengltexture_nativetexture_callback = cb; }

    // Base flag setters
    inline void setQNativeInterface__QSGOpenGLTexture_NativeTexture_IsBase(bool value) const { qnativeinterface__qsgopengltexture_nativetexture_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual GLuint nativeTexture() const override {
        auto nativetexture_cb = qnativeinterface__qsgopengltexture_nativetexture_callback;
        if (nativetexture_cb) {
            uint32_t callback_ret = nativetexture_cb();
            return static_cast<GLuint>(callback_ret);
        }
        return {};
    }
};

#endif
