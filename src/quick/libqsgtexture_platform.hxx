#pragma once
#ifndef QUICK_LIBQSGTEXTURE_PLATFORM_HXX
#define QUICK_LIBQSGTEXTURE_PLATFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNativeInterface::QSGOpenGLTexture
class VirtualQNativeInterfaceQSGOpenGLTexture : public QNativeInterface::QSGOpenGLTexture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNativeInterface__QSGOpenGLTexture_NativeTexture_Callback = uint32_t (*)(const QNativeInterface__QSGOpenGLTexture*);

    // Instance callback storage
    QNativeInterface__QSGOpenGLTexture_NativeTexture_Callback qnativeinterface__qsgopengltexture_nativetexture_callback = nullptr;

    VirtualQNativeInterfaceQSGOpenGLTexture() : QNativeInterface::QSGOpenGLTexture() {};

    // Virtual method for C ABI access and custom callback
    virtual GLuint nativeTexture() const override {
        if (qnativeinterface__qsgopengltexture_nativetexture_callback) {
            uint32_t callback_ret = qnativeinterface__qsgopengltexture_nativetexture_callback(this);
            return static_cast<GLuint>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QSGOpenGLTexture::nativeTexture called without being implemented");
    }
};

#endif
