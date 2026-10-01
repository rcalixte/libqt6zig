#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_1_2_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_1_2_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_1_2
class VirtualQOpenGLFunctions_1_2 final : public QOpenGLFunctions_1_2 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_1_2_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_1_2*);
    using QOpenGLFunctions_1_2::isInitialized;
    using QOpenGLFunctions_1_2::owningContext;
    using QOpenGLFunctions_1_2::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_1_2_InitializeOpenGLFunctions_Callback qopenglfunctions_1_2_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_1_2() : QOpenGLFunctions_1_2() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_1_2_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_1_2_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_1_2::initializeOpenGLFunctions();
    }
};

#endif
