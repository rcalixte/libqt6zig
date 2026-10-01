#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_2_0_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_2_0_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_2_0
class VirtualQOpenGLFunctions_2_0 final : public QOpenGLFunctions_2_0 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_2_0*);
    using QOpenGLFunctions_2_0::isInitialized;
    using QOpenGLFunctions_2_0::owningContext;
    using QOpenGLFunctions_2_0::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback qopenglfunctions_2_0_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_2_0() : QOpenGLFunctions_2_0() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_2_0_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_2_0_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_2_0::initializeOpenGLFunctions();
    }
};

#endif
