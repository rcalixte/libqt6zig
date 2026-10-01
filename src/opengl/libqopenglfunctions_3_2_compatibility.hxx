#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_3_2_COMPATIBILITY_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_3_2_COMPATIBILITY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_3_2_Compatibility
class VirtualQOpenGLFunctions_3_2_Compatibility final : public QOpenGLFunctions_3_2_Compatibility {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_3_2_Compatibility*);
    using QOpenGLFunctions_3_2_Compatibility::isInitialized;
    using QOpenGLFunctions_3_2_Compatibility::owningContext;
    using QOpenGLFunctions_3_2_Compatibility::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_3_2_Compatibility() : QOpenGLFunctions_3_2_Compatibility() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_3_2_Compatibility::initializeOpenGLFunctions();
    }
};

#endif
