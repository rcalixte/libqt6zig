#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_2_1_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_2_1_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_2_1
class VirtualQOpenGLFunctions_2_1 final : public QOpenGLFunctions_2_1 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_2_1_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_2_1*);
    using QOpenGLFunctions_2_1::isInitialized;
    using QOpenGLFunctions_2_1::owningContext;
    using QOpenGLFunctions_2_1::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_2_1_InitializeOpenGLFunctions_Callback qopenglfunctions_2_1_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_2_1() : QOpenGLFunctions_2_1() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_2_1_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_2_1_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_2_1::initializeOpenGLFunctions();
    }
};

#endif
