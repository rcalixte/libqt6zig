#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_3_0_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_3_0_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_3_0
class VirtualQOpenGLFunctions_3_0 final : public QOpenGLFunctions_3_0 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_3_0_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_3_0*);
    using QOpenGLFunctions_3_0::isInitialized;
    using QOpenGLFunctions_3_0::owningContext;
    using QOpenGLFunctions_3_0::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_3_0_InitializeOpenGLFunctions_Callback qopenglfunctions_3_0_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_3_0() : QOpenGLFunctions_3_0() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_3_0_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_3_0_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_3_0::initializeOpenGLFunctions();
    }
};

#endif
