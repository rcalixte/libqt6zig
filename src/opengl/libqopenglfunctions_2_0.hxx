#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_2_0_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_2_0_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_2_0 so that we can call protected methods
class VirtualQOpenGLFunctions_2_0 final : public QOpenGLFunctions_2_0 {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLFunctions_2_0 = true;

    // Virtual class public types (including callbacks)
    using QOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback = bool (*)();
    using QOpenGLFunctions_2_0_IsInitialized_Callback = bool (*)();
    using QOpenGLFunctions_2_0_SetOwningContext_Callback = void (*)(QOpenGLFunctions_2_0*, QOpenGLContext*);
    using QOpenGLFunctions_2_0_OwningContext_Callback = QOpenGLContext* (*)();

  protected:
    // Instance callback storage
    QOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback qopenglfunctions_2_0_initializeopenglfunctions_callback = nullptr;
    QOpenGLFunctions_2_0_IsInitialized_Callback qopenglfunctions_2_0_isinitialized_callback = nullptr;
    QOpenGLFunctions_2_0_SetOwningContext_Callback qopenglfunctions_2_0_setowningcontext_callback = nullptr;
    QOpenGLFunctions_2_0_OwningContext_Callback qopenglfunctions_2_0_owningcontext_callback = nullptr;

    // Instance base flags
    mutable bool qopenglfunctions_2_0_initializeopenglfunctions_isbase = false;
    mutable bool qopenglfunctions_2_0_isinitialized_isbase = false;
    mutable bool qopenglfunctions_2_0_setowningcontext_isbase = false;
    mutable bool qopenglfunctions_2_0_owningcontext_isbase = false;

  public:
    VirtualQOpenGLFunctions_2_0() : QOpenGLFunctions_2_0() {};

    // Callback setters
    inline void setQOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_2_0_InitializeOpenGLFunctions_Callback cb) { qopenglfunctions_2_0_initializeopenglfunctions_callback = cb; }
    inline void setQOpenGLFunctions_2_0_IsInitialized_Callback(QOpenGLFunctions_2_0_IsInitialized_Callback cb) { qopenglfunctions_2_0_isinitialized_callback = cb; }
    inline void setQOpenGLFunctions_2_0_SetOwningContext_Callback(QOpenGLFunctions_2_0_SetOwningContext_Callback cb) { qopenglfunctions_2_0_setowningcontext_callback = cb; }
    inline void setQOpenGLFunctions_2_0_OwningContext_Callback(QOpenGLFunctions_2_0_OwningContext_Callback cb) { qopenglfunctions_2_0_owningcontext_callback = cb; }

    // Base flag setters
    inline void setQOpenGLFunctions_2_0_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_2_0_initializeopenglfunctions_isbase = value; }
    inline void setQOpenGLFunctions_2_0_IsInitialized_IsBase(bool value) const { qopenglfunctions_2_0_isinitialized_isbase = value; }
    inline void setQOpenGLFunctions_2_0_SetOwningContext_IsBase(bool value) const { qopenglfunctions_2_0_setowningcontext_isbase = value; }
    inline void setQOpenGLFunctions_2_0_OwningContext_IsBase(bool value) const { qopenglfunctions_2_0_owningcontext_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_2_0_initializeopenglfunctions_isbase) {
            qopenglfunctions_2_0_initializeopenglfunctions_isbase = false;
            return QOpenGLFunctions_2_0::initializeOpenGLFunctions();
        }
        auto initializeopenglfunctions_cb = qopenglfunctions_2_0_initializeopenglfunctions_callback;
        if (initializeopenglfunctions_cb) {
            bool callback_ret = initializeopenglfunctions_cb();
            return callback_ret;
        }
        return QOpenGLFunctions_2_0::initializeOpenGLFunctions();
    }

    // Virtual method for C ABI access and custom callback
    bool isInitialized() const {
        if (qopenglfunctions_2_0_isinitialized_isbase) {
            qopenglfunctions_2_0_isinitialized_isbase = false;
            return QOpenGLFunctions_2_0::isInitialized();
        }
        auto isinitialized_cb = qopenglfunctions_2_0_isinitialized_callback;
        if (isinitialized_cb) {
            bool callback_ret = isinitialized_cb();
            return callback_ret;
        }
        return QOpenGLFunctions_2_0::isInitialized();
    }

    // Virtual method for C ABI access and custom callback
    void setOwningContext(const QOpenGLContext* context) {
        if (qopenglfunctions_2_0_setowningcontext_isbase) {
            qopenglfunctions_2_0_setowningcontext_isbase = false;
            QOpenGLFunctions_2_0::setOwningContext(context);
            return;
        }
        auto setowningcontext_cb = qopenglfunctions_2_0_setowningcontext_callback;
        if (setowningcontext_cb) {
            QOpenGLContext* cbval1 = (QOpenGLContext*)context;

            setowningcontext_cb(this, cbval1);
            return;
        }
        QOpenGLFunctions_2_0::setOwningContext(context);
    }

    // Virtual method for C ABI access and custom callback
    QOpenGLContext* owningContext() const {
        if (qopenglfunctions_2_0_owningcontext_isbase) {
            qopenglfunctions_2_0_owningcontext_isbase = false;
            return QOpenGLFunctions_2_0::owningContext();
        }
        auto owningcontext_cb = qopenglfunctions_2_0_owningcontext_callback;
        if (owningcontext_cb) {
            QOpenGLContext* callback_ret = owningcontext_cb();
            return callback_ret;
        }
        return QOpenGLFunctions_2_0::owningContext();
    }

    // Friend functions
    friend bool QOpenGLFunctions_2_0_IsInitialized(const QOpenGLFunctions_2_0* self);
    friend bool QOpenGLFunctions_2_0_SuperIsInitialized(const QOpenGLFunctions_2_0* self);
    friend void QOpenGLFunctions_2_0_SetOwningContext(QOpenGLFunctions_2_0* self, const QOpenGLContext* context);
    friend void QOpenGLFunctions_2_0_SuperSetOwningContext(QOpenGLFunctions_2_0* self, const QOpenGLContext* context);
    friend QOpenGLContext* QOpenGLFunctions_2_0_OwningContext(const QOpenGLFunctions_2_0* self);
    friend QOpenGLContext* QOpenGLFunctions_2_0_SuperOwningContext(const QOpenGLFunctions_2_0* self);
};

#endif
