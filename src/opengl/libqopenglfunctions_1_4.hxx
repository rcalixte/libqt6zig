#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_1_4_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_1_4_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_1_4 so that we can call protected methods
class VirtualQOpenGLFunctions_1_4 final : public QOpenGLFunctions_1_4 {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLFunctions_1_4 = true;

    // Virtual class public types (including callbacks)
    using QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback = bool (*)();
    using QOpenGLFunctions_1_4_IsInitialized_Callback = bool (*)();
    using QOpenGLFunctions_1_4_SetOwningContext_Callback = void (*)(QOpenGLFunctions_1_4*, QOpenGLContext*);
    using QOpenGLFunctions_1_4_OwningContext_Callback = QOpenGLContext* (*)();

  protected:
    // Instance callback storage
    QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback qopenglfunctions_1_4_initializeopenglfunctions_callback = nullptr;
    QOpenGLFunctions_1_4_IsInitialized_Callback qopenglfunctions_1_4_isinitialized_callback = nullptr;
    QOpenGLFunctions_1_4_SetOwningContext_Callback qopenglfunctions_1_4_setowningcontext_callback = nullptr;
    QOpenGLFunctions_1_4_OwningContext_Callback qopenglfunctions_1_4_owningcontext_callback = nullptr;

    // Instance base flags
    mutable bool qopenglfunctions_1_4_initializeopenglfunctions_isbase = false;
    mutable bool qopenglfunctions_1_4_isinitialized_isbase = false;
    mutable bool qopenglfunctions_1_4_setowningcontext_isbase = false;
    mutable bool qopenglfunctions_1_4_owningcontext_isbase = false;

  public:
    VirtualQOpenGLFunctions_1_4() : QOpenGLFunctions_1_4() {};

    // Callback setters
    inline void setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback cb) { qopenglfunctions_1_4_initializeopenglfunctions_callback = cb; }
    inline void setQOpenGLFunctions_1_4_IsInitialized_Callback(QOpenGLFunctions_1_4_IsInitialized_Callback cb) { qopenglfunctions_1_4_isinitialized_callback = cb; }
    inline void setQOpenGLFunctions_1_4_SetOwningContext_Callback(QOpenGLFunctions_1_4_SetOwningContext_Callback cb) { qopenglfunctions_1_4_setowningcontext_callback = cb; }
    inline void setQOpenGLFunctions_1_4_OwningContext_Callback(QOpenGLFunctions_1_4_OwningContext_Callback cb) { qopenglfunctions_1_4_owningcontext_callback = cb; }

    // Base flag setters
    inline void setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_1_4_initializeopenglfunctions_isbase = value; }
    inline void setQOpenGLFunctions_1_4_IsInitialized_IsBase(bool value) const { qopenglfunctions_1_4_isinitialized_isbase = value; }
    inline void setQOpenGLFunctions_1_4_SetOwningContext_IsBase(bool value) const { qopenglfunctions_1_4_setowningcontext_isbase = value; }
    inline void setQOpenGLFunctions_1_4_OwningContext_IsBase(bool value) const { qopenglfunctions_1_4_owningcontext_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_1_4_initializeopenglfunctions_isbase) {
            qopenglfunctions_1_4_initializeopenglfunctions_isbase = false;
            return QOpenGLFunctions_1_4::initializeOpenGLFunctions();
        }
        auto initializeopenglfunctions_cb = qopenglfunctions_1_4_initializeopenglfunctions_callback;
        if (initializeopenglfunctions_cb) {
            bool callback_ret = initializeopenglfunctions_cb();
            return callback_ret;
        }
        return QOpenGLFunctions_1_4::initializeOpenGLFunctions();
    }

    // Virtual method for C ABI access and custom callback
    bool isInitialized() const {
        if (qopenglfunctions_1_4_isinitialized_isbase) {
            qopenglfunctions_1_4_isinitialized_isbase = false;
            return QOpenGLFunctions_1_4::isInitialized();
        }
        auto isinitialized_cb = qopenglfunctions_1_4_isinitialized_callback;
        if (isinitialized_cb) {
            bool callback_ret = isinitialized_cb();
            return callback_ret;
        }
        return QOpenGLFunctions_1_4::isInitialized();
    }

    // Virtual method for C ABI access and custom callback
    void setOwningContext(const QOpenGLContext* context) {
        if (qopenglfunctions_1_4_setowningcontext_isbase) {
            qopenglfunctions_1_4_setowningcontext_isbase = false;
            QOpenGLFunctions_1_4::setOwningContext(context);
            return;
        }
        auto setowningcontext_cb = qopenglfunctions_1_4_setowningcontext_callback;
        if (setowningcontext_cb) {
            QOpenGLContext* cbval1 = (QOpenGLContext*)context;

            setowningcontext_cb(this, cbval1);
            return;
        }
        QOpenGLFunctions_1_4::setOwningContext(context);
    }

    // Virtual method for C ABI access and custom callback
    QOpenGLContext* owningContext() const {
        if (qopenglfunctions_1_4_owningcontext_isbase) {
            qopenglfunctions_1_4_owningcontext_isbase = false;
            return QOpenGLFunctions_1_4::owningContext();
        }
        auto owningcontext_cb = qopenglfunctions_1_4_owningcontext_callback;
        if (owningcontext_cb) {
            QOpenGLContext* callback_ret = owningcontext_cb();
            return callback_ret;
        }
        return QOpenGLFunctions_1_4::owningContext();
    }

    // Friend functions
    friend bool QOpenGLFunctions_1_4_IsInitialized(const QOpenGLFunctions_1_4* self);
    friend bool QOpenGLFunctions_1_4_SuperIsInitialized(const QOpenGLFunctions_1_4* self);
    friend void QOpenGLFunctions_1_4_SetOwningContext(QOpenGLFunctions_1_4* self, const QOpenGLContext* context);
    friend void QOpenGLFunctions_1_4_SuperSetOwningContext(QOpenGLFunctions_1_4* self, const QOpenGLContext* context);
    friend QOpenGLContext* QOpenGLFunctions_1_4_OwningContext(const QOpenGLFunctions_1_4* self);
    friend QOpenGLContext* QOpenGLFunctions_1_4_SuperOwningContext(const QOpenGLFunctions_1_4* self);
};

#endif
