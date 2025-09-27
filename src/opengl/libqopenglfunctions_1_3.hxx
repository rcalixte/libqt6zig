#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_1_3_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_1_3_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_1_3 so that we can call protected methods
class VirtualQOpenGLFunctions_1_3 final : public QOpenGLFunctions_1_3 {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLFunctions_1_3 = true;

    // Virtual class public types (including callbacks)
    using QOpenGLFunctions_1_3_InitializeOpenGLFunctions_Callback = bool (*)();
    using QOpenGLFunctions_1_3_IsInitialized_Callback = bool (*)();
    using QOpenGLFunctions_1_3_SetOwningContext_Callback = void (*)(QOpenGLFunctions_1_3*, QOpenGLContext*);
    using QOpenGLFunctions_1_3_OwningContext_Callback = QOpenGLContext* (*)();

  protected:
    // Instance callback storage
    QOpenGLFunctions_1_3_InitializeOpenGLFunctions_Callback qopenglfunctions_1_3_initializeopenglfunctions_callback = nullptr;
    QOpenGLFunctions_1_3_IsInitialized_Callback qopenglfunctions_1_3_isinitialized_callback = nullptr;
    QOpenGLFunctions_1_3_SetOwningContext_Callback qopenglfunctions_1_3_setowningcontext_callback = nullptr;
    QOpenGLFunctions_1_3_OwningContext_Callback qopenglfunctions_1_3_owningcontext_callback = nullptr;

    // Instance base flags
    mutable bool qopenglfunctions_1_3_initializeopenglfunctions_isbase = false;
    mutable bool qopenglfunctions_1_3_isinitialized_isbase = false;
    mutable bool qopenglfunctions_1_3_setowningcontext_isbase = false;
    mutable bool qopenglfunctions_1_3_owningcontext_isbase = false;

  public:
    VirtualQOpenGLFunctions_1_3() : QOpenGLFunctions_1_3() {};

    ~VirtualQOpenGLFunctions_1_3() {
        qopenglfunctions_1_3_initializeopenglfunctions_callback = nullptr;
        qopenglfunctions_1_3_isinitialized_callback = nullptr;
        qopenglfunctions_1_3_setowningcontext_callback = nullptr;
        qopenglfunctions_1_3_owningcontext_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLFunctions_1_3_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_1_3_InitializeOpenGLFunctions_Callback cb) { qopenglfunctions_1_3_initializeopenglfunctions_callback = cb; }
    inline void setQOpenGLFunctions_1_3_IsInitialized_Callback(QOpenGLFunctions_1_3_IsInitialized_Callback cb) { qopenglfunctions_1_3_isinitialized_callback = cb; }
    inline void setQOpenGLFunctions_1_3_SetOwningContext_Callback(QOpenGLFunctions_1_3_SetOwningContext_Callback cb) { qopenglfunctions_1_3_setowningcontext_callback = cb; }
    inline void setQOpenGLFunctions_1_3_OwningContext_Callback(QOpenGLFunctions_1_3_OwningContext_Callback cb) { qopenglfunctions_1_3_owningcontext_callback = cb; }

    // Base flag setters
    inline void setQOpenGLFunctions_1_3_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_1_3_initializeopenglfunctions_isbase = value; }
    inline void setQOpenGLFunctions_1_3_IsInitialized_IsBase(bool value) const { qopenglfunctions_1_3_isinitialized_isbase = value; }
    inline void setQOpenGLFunctions_1_3_SetOwningContext_IsBase(bool value) const { qopenglfunctions_1_3_setowningcontext_isbase = value; }
    inline void setQOpenGLFunctions_1_3_OwningContext_IsBase(bool value) const { qopenglfunctions_1_3_owningcontext_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_1_3_initializeopenglfunctions_isbase) {
            qopenglfunctions_1_3_initializeopenglfunctions_isbase = false;
            return QOpenGLFunctions_1_3::initializeOpenGLFunctions();
        } else if (qopenglfunctions_1_3_initializeopenglfunctions_callback != nullptr) {
            bool callback_ret = qopenglfunctions_1_3_initializeopenglfunctions_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_1_3::initializeOpenGLFunctions();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isInitialized() const {
        if (qopenglfunctions_1_3_isinitialized_isbase) {
            qopenglfunctions_1_3_isinitialized_isbase = false;
            return QOpenGLFunctions_1_3::isInitialized();
        } else if (qopenglfunctions_1_3_isinitialized_callback != nullptr) {
            bool callback_ret = qopenglfunctions_1_3_isinitialized_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_1_3::isInitialized();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwningContext(const QOpenGLContext* context) {
        if (qopenglfunctions_1_3_setowningcontext_isbase) {
            qopenglfunctions_1_3_setowningcontext_isbase = false;
            QOpenGLFunctions_1_3::setOwningContext(context);
        } else if (qopenglfunctions_1_3_setowningcontext_callback != nullptr) {
            QOpenGLContext* cbval1 = (QOpenGLContext*)context;

            qopenglfunctions_1_3_setowningcontext_callback(this, cbval1);
        } else {
            QOpenGLFunctions_1_3::setOwningContext(context);
        }
    }

    // Virtual method for C ABI access and custom callback
    QOpenGLContext* owningContext() const {
        if (qopenglfunctions_1_3_owningcontext_isbase) {
            qopenglfunctions_1_3_owningcontext_isbase = false;
            return QOpenGLFunctions_1_3::owningContext();
        } else if (qopenglfunctions_1_3_owningcontext_callback != nullptr) {
            QOpenGLContext* callback_ret = qopenglfunctions_1_3_owningcontext_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_1_3::owningContext();
        }
    }

    // Friend functions
    friend bool QOpenGLFunctions_1_3_IsInitialized(const QOpenGLFunctions_1_3* self);
    friend bool QOpenGLFunctions_1_3_QBaseIsInitialized(const QOpenGLFunctions_1_3* self);
    friend void QOpenGLFunctions_1_3_SetOwningContext(QOpenGLFunctions_1_3* self, const QOpenGLContext* context);
    friend void QOpenGLFunctions_1_3_QBaseSetOwningContext(QOpenGLFunctions_1_3* self, const QOpenGLContext* context);
    friend QOpenGLContext* QOpenGLFunctions_1_3_OwningContext(const QOpenGLFunctions_1_3* self);
    friend QOpenGLContext* QOpenGLFunctions_1_3_QBaseOwningContext(const QOpenGLFunctions_1_3* self);
};

#endif
