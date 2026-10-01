#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_1_4_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_1_4_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_1_4
class VirtualQOpenGLFunctions_1_4 final : public QOpenGLFunctions_1_4 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_1_4*);
    using QOpenGLFunctions_1_4::isInitialized;
    using QOpenGLFunctions_1_4::owningContext;
    using QOpenGLFunctions_1_4::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback qopenglfunctions_1_4_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_1_4() : QOpenGLFunctions_1_4() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_1_4_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_1_4_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_1_4::initializeOpenGLFunctions();
    }
};

#endif
