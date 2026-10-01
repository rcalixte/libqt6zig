#pragma once
#ifndef OPENGL_LIBQOPENGLFUNCTIONS_4_3_COMPATIBILITY_HXX
#define OPENGL_LIBQOPENGLFUNCTIONS_4_3_COMPATIBILITY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_4_3_Compatibility
class VirtualQOpenGLFunctions_4_3_Compatibility final : public QOpenGLFunctions_4_3_Compatibility {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLFunctions_4_3_Compatibility_InitializeOpenGLFunctions_Callback = bool (*)(QOpenGLFunctions_4_3_Compatibility*);
    using QOpenGLFunctions_4_3_Compatibility::isInitialized;
    using QOpenGLFunctions_4_3_Compatibility::owningContext;
    using QOpenGLFunctions_4_3_Compatibility::setOwningContext;

    // Instance callback storage
    QOpenGLFunctions_4_3_Compatibility_InitializeOpenGLFunctions_Callback qopenglfunctions_4_3_compatibility_initializeopenglfunctions_callback = nullptr;

    VirtualQOpenGLFunctions_4_3_Compatibility() : QOpenGLFunctions_4_3_Compatibility() {};

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_4_3_compatibility_initializeopenglfunctions_callback) {
            bool callback_ret = qopenglfunctions_4_3_compatibility_initializeopenglfunctions_callback(this);
            return callback_ret;
        }
        return QOpenGLFunctions_4_3_Compatibility::initializeOpenGLFunctions();
    }
};

#endif
