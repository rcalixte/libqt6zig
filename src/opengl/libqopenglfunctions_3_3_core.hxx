#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_3_3_CORE_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_3_3_CORE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_3_3_Core so that we can call protected methods
class VirtualQOpenGLFunctions_3_3_Core final : public QOpenGLFunctions_3_3_Core {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLFunctions_3_3_Core = true;

    // Virtual class public types (including callbacks)
    using QOpenGLFunctions_3_3_Core_InitializeOpenGLFunctions_Callback = bool (*)();
    using QOpenGLFunctions_3_3_Core_IsInitialized_Callback = bool (*)();
    using QOpenGLFunctions_3_3_Core_SetOwningContext_Callback = void (*)(QOpenGLFunctions_3_3_Core*, QOpenGLContext*);
    using QOpenGLFunctions_3_3_Core_OwningContext_Callback = QOpenGLContext* (*)();

  protected:
    // Instance callback storage
    QOpenGLFunctions_3_3_Core_InitializeOpenGLFunctions_Callback qopenglfunctions_3_3_core_initializeopenglfunctions_callback = nullptr;
    QOpenGLFunctions_3_3_Core_IsInitialized_Callback qopenglfunctions_3_3_core_isinitialized_callback = nullptr;
    QOpenGLFunctions_3_3_Core_SetOwningContext_Callback qopenglfunctions_3_3_core_setowningcontext_callback = nullptr;
    QOpenGLFunctions_3_3_Core_OwningContext_Callback qopenglfunctions_3_3_core_owningcontext_callback = nullptr;

    // Instance base flags
    mutable bool qopenglfunctions_3_3_core_initializeopenglfunctions_isbase = false;
    mutable bool qopenglfunctions_3_3_core_isinitialized_isbase = false;
    mutable bool qopenglfunctions_3_3_core_setowningcontext_isbase = false;
    mutable bool qopenglfunctions_3_3_core_owningcontext_isbase = false;

  public:
    VirtualQOpenGLFunctions_3_3_Core() : QOpenGLFunctions_3_3_Core() {};

    ~VirtualQOpenGLFunctions_3_3_Core() {
        qopenglfunctions_3_3_core_initializeopenglfunctions_callback = nullptr;
        qopenglfunctions_3_3_core_isinitialized_callback = nullptr;
        qopenglfunctions_3_3_core_setowningcontext_callback = nullptr;
        qopenglfunctions_3_3_core_owningcontext_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLFunctions_3_3_Core_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_3_3_Core_InitializeOpenGLFunctions_Callback cb) { qopenglfunctions_3_3_core_initializeopenglfunctions_callback = cb; }
    inline void setQOpenGLFunctions_3_3_Core_IsInitialized_Callback(QOpenGLFunctions_3_3_Core_IsInitialized_Callback cb) { qopenglfunctions_3_3_core_isinitialized_callback = cb; }
    inline void setQOpenGLFunctions_3_3_Core_SetOwningContext_Callback(QOpenGLFunctions_3_3_Core_SetOwningContext_Callback cb) { qopenglfunctions_3_3_core_setowningcontext_callback = cb; }
    inline void setQOpenGLFunctions_3_3_Core_OwningContext_Callback(QOpenGLFunctions_3_3_Core_OwningContext_Callback cb) { qopenglfunctions_3_3_core_owningcontext_callback = cb; }

    // Base flag setters
    inline void setQOpenGLFunctions_3_3_Core_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_3_3_core_initializeopenglfunctions_isbase = value; }
    inline void setQOpenGLFunctions_3_3_Core_IsInitialized_IsBase(bool value) const { qopenglfunctions_3_3_core_isinitialized_isbase = value; }
    inline void setQOpenGLFunctions_3_3_Core_SetOwningContext_IsBase(bool value) const { qopenglfunctions_3_3_core_setowningcontext_isbase = value; }
    inline void setQOpenGLFunctions_3_3_Core_OwningContext_IsBase(bool value) const { qopenglfunctions_3_3_core_owningcontext_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_3_3_core_initializeopenglfunctions_isbase) {
            qopenglfunctions_3_3_core_initializeopenglfunctions_isbase = false;
            return QOpenGLFunctions_3_3_Core::initializeOpenGLFunctions();
        } else if (qopenglfunctions_3_3_core_initializeopenglfunctions_callback != nullptr) {
            bool callback_ret = qopenglfunctions_3_3_core_initializeopenglfunctions_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_3_3_Core::initializeOpenGLFunctions();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isInitialized() const {
        if (qopenglfunctions_3_3_core_isinitialized_isbase) {
            qopenglfunctions_3_3_core_isinitialized_isbase = false;
            return QOpenGLFunctions_3_3_Core::isInitialized();
        } else if (qopenglfunctions_3_3_core_isinitialized_callback != nullptr) {
            bool callback_ret = qopenglfunctions_3_3_core_isinitialized_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_3_3_Core::isInitialized();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwningContext(const QOpenGLContext* context) {
        if (qopenglfunctions_3_3_core_setowningcontext_isbase) {
            qopenglfunctions_3_3_core_setowningcontext_isbase = false;
            QOpenGLFunctions_3_3_Core::setOwningContext(context);
        } else if (qopenglfunctions_3_3_core_setowningcontext_callback != nullptr) {
            QOpenGLContext* cbval1 = (QOpenGLContext*)context;

            qopenglfunctions_3_3_core_setowningcontext_callback(this, cbval1);
        } else {
            QOpenGLFunctions_3_3_Core::setOwningContext(context);
        }
    }

    // Virtual method for C ABI access and custom callback
    QOpenGLContext* owningContext() const {
        if (qopenglfunctions_3_3_core_owningcontext_isbase) {
            qopenglfunctions_3_3_core_owningcontext_isbase = false;
            return QOpenGLFunctions_3_3_Core::owningContext();
        } else if (qopenglfunctions_3_3_core_owningcontext_callback != nullptr) {
            QOpenGLContext* callback_ret = qopenglfunctions_3_3_core_owningcontext_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_3_3_Core::owningContext();
        }
    }

    // Friend functions
    friend bool QOpenGLFunctions_3_3_Core_IsInitialized(const QOpenGLFunctions_3_3_Core* self);
    friend bool QOpenGLFunctions_3_3_Core_QBaseIsInitialized(const QOpenGLFunctions_3_3_Core* self);
    friend void QOpenGLFunctions_3_3_Core_SetOwningContext(QOpenGLFunctions_3_3_Core* self, const QOpenGLContext* context);
    friend void QOpenGLFunctions_3_3_Core_QBaseSetOwningContext(QOpenGLFunctions_3_3_Core* self, const QOpenGLContext* context);
    friend QOpenGLContext* QOpenGLFunctions_3_3_Core_OwningContext(const QOpenGLFunctions_3_3_Core* self);
    friend QOpenGLContext* QOpenGLFunctions_3_3_Core_QBaseOwningContext(const QOpenGLFunctions_3_3_Core* self);
};

#endif
