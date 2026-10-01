#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_4_5_CORE_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_4_5_CORE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_4_5_Core
class VirtualQOpenGLFunctions_4_5_Core final : public QOpenGLFunctions_4_5_Core {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_4_5_Core*);
    using QOpenGLFunctions_4_5_Core::isInitialized;
    using QOpenGLFunctions_4_5_Core::owningContext;
    using QOpenGLFunctions_4_5_Core::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_Callback qopenglfunctions_4_5_core_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_4_5_Core() : QOpenGLFunctions_4_5_Core() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_4_5_core_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_4_5_core_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_4_5_Core::initializeOpenGLFunctions();
    }
};

#endif
