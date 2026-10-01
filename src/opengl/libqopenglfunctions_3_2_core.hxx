#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_3_2_CORE_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_3_2_CORE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_3_2_Core
class VirtualQOpenGLFunctions_3_2_Core final : public QOpenGLFunctions_3_2_Core {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_3_2_Core_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_3_2_Core*);
    using QOpenGLFunctions_3_2_Core::isInitialized;
    using QOpenGLFunctions_3_2_Core::owningContext;
    using QOpenGLFunctions_3_2_Core::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_3_2_Core_InitializeOpenGLFunctions_Callback qopenglfunctions_3_2_core_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_3_2_Core() : QOpenGLFunctions_3_2_Core() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_3_2_core_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_3_2_core_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_3_2_Core::initializeOpenGLFunctions();
    }
};

#endif
