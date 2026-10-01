#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_1_5_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_1_5_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_1_5
class VirtualQOpenGLFunctions_1_5 final : public QOpenGLFunctions_1_5 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_1_5_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_1_5*);
    using QOpenGLFunctions_1_5::isInitialized;
    using QOpenGLFunctions_1_5::owningContext;
    using QOpenGLFunctions_1_5::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_1_5_InitializeOpenGLFunctions_Callback qopenglfunctions_1_5_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_1_5() : QOpenGLFunctions_1_5() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_1_5_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_1_5_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_1_5::initializeOpenGLFunctions();
    }
};

#endif
