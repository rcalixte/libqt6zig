#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_3_3_COMPATIBILITY_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLFUNCTIONS_3_3_COMPATIBILITY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLFunctions_3_3_Compatibility so that we can call protected methods
class VirtualQOpenGLFunctions_3_3_Compatibility final : public QOpenGLFunctions_3_3_Compatibility {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLFunctions_3_3_Compatibility = true;

    // Virtual class public types (including callbacks)
    using QOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_Callback = bool (*)();
    using QOpenGLFunctions_3_3_Compatibility_IsInitialized_Callback = bool (*)();
    using QOpenGLFunctions_3_3_Compatibility_SetOwningContext_Callback = void (*)(QOpenGLFunctions_3_3_Compatibility*, QOpenGLContext*);
    using QOpenGLFunctions_3_3_Compatibility_OwningContext_Callback = QOpenGLContext* (*)();

  protected:
    // Instance callback storage
    QOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_Callback qopenglfunctions_3_3_compatibility_initializeopenglfunctions_callback = nullptr;
    QOpenGLFunctions_3_3_Compatibility_IsInitialized_Callback qopenglfunctions_3_3_compatibility_isinitialized_callback = nullptr;
    QOpenGLFunctions_3_3_Compatibility_SetOwningContext_Callback qopenglfunctions_3_3_compatibility_setowningcontext_callback = nullptr;
    QOpenGLFunctions_3_3_Compatibility_OwningContext_Callback qopenglfunctions_3_3_compatibility_owningcontext_callback = nullptr;

    // Instance base flags
    mutable bool qopenglfunctions_3_3_compatibility_initializeopenglfunctions_isbase = false;
    mutable bool qopenglfunctions_3_3_compatibility_isinitialized_isbase = false;
    mutable bool qopenglfunctions_3_3_compatibility_setowningcontext_isbase = false;
    mutable bool qopenglfunctions_3_3_compatibility_owningcontext_isbase = false;

  public:
    VirtualQOpenGLFunctions_3_3_Compatibility() : QOpenGLFunctions_3_3_Compatibility() {};

    ~VirtualQOpenGLFunctions_3_3_Compatibility() {
        qopenglfunctions_3_3_compatibility_initializeopenglfunctions_callback = nullptr;
        qopenglfunctions_3_3_compatibility_isinitialized_callback = nullptr;
        qopenglfunctions_3_3_compatibility_setowningcontext_callback = nullptr;
        qopenglfunctions_3_3_compatibility_owningcontext_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_Callback cb) { qopenglfunctions_3_3_compatibility_initializeopenglfunctions_callback = cb; }
    inline void setQOpenGLFunctions_3_3_Compatibility_IsInitialized_Callback(QOpenGLFunctions_3_3_Compatibility_IsInitialized_Callback cb) { qopenglfunctions_3_3_compatibility_isinitialized_callback = cb; }
    inline void setQOpenGLFunctions_3_3_Compatibility_SetOwningContext_Callback(QOpenGLFunctions_3_3_Compatibility_SetOwningContext_Callback cb) { qopenglfunctions_3_3_compatibility_setowningcontext_callback = cb; }
    inline void setQOpenGLFunctions_3_3_Compatibility_OwningContext_Callback(QOpenGLFunctions_3_3_Compatibility_OwningContext_Callback cb) { qopenglfunctions_3_3_compatibility_owningcontext_callback = cb; }

    // Base flag setters
    inline void setQOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_3_3_compatibility_initializeopenglfunctions_isbase = value; }
    inline void setQOpenGLFunctions_3_3_Compatibility_IsInitialized_IsBase(bool value) const { qopenglfunctions_3_3_compatibility_isinitialized_isbase = value; }
    inline void setQOpenGLFunctions_3_3_Compatibility_SetOwningContext_IsBase(bool value) const { qopenglfunctions_3_3_compatibility_setowningcontext_isbase = value; }
    inline void setQOpenGLFunctions_3_3_Compatibility_OwningContext_IsBase(bool value) const { qopenglfunctions_3_3_compatibility_owningcontext_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool initializeOpenGLFunctions() override {
        if (qopenglfunctions_3_3_compatibility_initializeopenglfunctions_isbase) {
            qopenglfunctions_3_3_compatibility_initializeopenglfunctions_isbase = false;
            return QOpenGLFunctions_3_3_Compatibility::initializeOpenGLFunctions();
        } else if (qopenglfunctions_3_3_compatibility_initializeopenglfunctions_callback != nullptr) {
            bool callback_ret = qopenglfunctions_3_3_compatibility_initializeopenglfunctions_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_3_3_Compatibility::initializeOpenGLFunctions();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isInitialized() const {
        if (qopenglfunctions_3_3_compatibility_isinitialized_isbase) {
            qopenglfunctions_3_3_compatibility_isinitialized_isbase = false;
            return QOpenGLFunctions_3_3_Compatibility::isInitialized();
        } else if (qopenglfunctions_3_3_compatibility_isinitialized_callback != nullptr) {
            bool callback_ret = qopenglfunctions_3_3_compatibility_isinitialized_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_3_3_Compatibility::isInitialized();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwningContext(const QOpenGLContext* context) {
        if (qopenglfunctions_3_3_compatibility_setowningcontext_isbase) {
            qopenglfunctions_3_3_compatibility_setowningcontext_isbase = false;
            QOpenGLFunctions_3_3_Compatibility::setOwningContext(context);
        } else if (qopenglfunctions_3_3_compatibility_setowningcontext_callback != nullptr) {
            QOpenGLContext* cbval1 = (QOpenGLContext*)context;

            qopenglfunctions_3_3_compatibility_setowningcontext_callback(this, cbval1);
        } else {
            QOpenGLFunctions_3_3_Compatibility::setOwningContext(context);
        }
    }

    // Virtual method for C ABI access and custom callback
    QOpenGLContext* owningContext() const {
        if (qopenglfunctions_3_3_compatibility_owningcontext_isbase) {
            qopenglfunctions_3_3_compatibility_owningcontext_isbase = false;
            return QOpenGLFunctions_3_3_Compatibility::owningContext();
        } else if (qopenglfunctions_3_3_compatibility_owningcontext_callback != nullptr) {
            QOpenGLContext* callback_ret = qopenglfunctions_3_3_compatibility_owningcontext_callback();
            return callback_ret;
        } else {
            return QOpenGLFunctions_3_3_Compatibility::owningContext();
        }
    }

    // Friend functions
    friend bool QOpenGLFunctions_3_3_Compatibility_IsInitialized(const QOpenGLFunctions_3_3_Compatibility* self);
    friend bool QOpenGLFunctions_3_3_Compatibility_QBaseIsInitialized(const QOpenGLFunctions_3_3_Compatibility* self);
    friend void QOpenGLFunctions_3_3_Compatibility_SetOwningContext(QOpenGLFunctions_3_3_Compatibility* self, const QOpenGLContext* context);
    friend void QOpenGLFunctions_3_3_Compatibility_QBaseSetOwningContext(QOpenGLFunctions_3_3_Compatibility* self, const QOpenGLContext* context);
    friend QOpenGLContext* QOpenGLFunctions_3_3_Compatibility_OwningContext(const QOpenGLFunctions_3_3_Compatibility* self);
    friend QOpenGLContext* QOpenGLFunctions_3_3_Compatibility_QBaseOwningContext(const QOpenGLFunctions_3_3_Compatibility* self);
};

#endif
