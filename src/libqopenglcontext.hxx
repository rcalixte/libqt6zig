#pragma once
#ifndef LIBQOPENGLCONTEXT_HXX
#define LIBQOPENGLCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QOpenGLContext
class VirtualQOpenGLContext final : public QOpenGLContext {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLContext_MetaObject_Callback = QMetaObject* (*)(const QOpenGLContext*);
    using QOpenGLContext_Metacast_Callback = void* (*)(QOpenGLContext*, const char*);
    using QOpenGLContext_Metacall_Callback = int (*)(QOpenGLContext*, int, int, void**);
    using QOpenGLContext_Event_Callback = bool (*)(QOpenGLContext*, QEvent*);
    using QOpenGLContext_EventFilter_Callback = bool (*)(QOpenGLContext*, QObject*, QEvent*);
    using QOpenGLContext_TimerEvent_Callback = void (*)(QOpenGLContext*, QTimerEvent*);
    using QOpenGLContext_ChildEvent_Callback = void (*)(QOpenGLContext*, QChildEvent*);
    using QOpenGLContext_CustomEvent_Callback = void (*)(QOpenGLContext*, QEvent*);
    using QOpenGLContext_ConnectNotify_Callback = void (*)(QOpenGLContext*, QMetaMethod*);
    using QOpenGLContext_DisconnectNotify_Callback = void (*)(QOpenGLContext*, QMetaMethod*);
    using QOpenGLContext::isSignalConnected;
    using QOpenGLContext::receivers;
    using QOpenGLContext::resolveInterface;
    using QOpenGLContext::sender;
    using QOpenGLContext::senderSignalIndex;

    // Instance callback storage
    QOpenGLContext_MetaObject_Callback qopenglcontext_metaobject_callback = nullptr;
    QOpenGLContext_Metacast_Callback qopenglcontext_metacast_callback = nullptr;
    QOpenGLContext_Metacall_Callback qopenglcontext_metacall_callback = nullptr;
    QOpenGLContext_Event_Callback qopenglcontext_event_callback = nullptr;
    QOpenGLContext_EventFilter_Callback qopenglcontext_eventfilter_callback = nullptr;
    QOpenGLContext_TimerEvent_Callback qopenglcontext_timerevent_callback = nullptr;
    QOpenGLContext_ChildEvent_Callback qopenglcontext_childevent_callback = nullptr;
    QOpenGLContext_CustomEvent_Callback qopenglcontext_customevent_callback = nullptr;
    QOpenGLContext_ConnectNotify_Callback qopenglcontext_connectnotify_callback = nullptr;
    QOpenGLContext_DisconnectNotify_Callback qopenglcontext_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLContext {
        using QOpenGLContext::childEvent;
        using QOpenGLContext::connectNotify;
        using QOpenGLContext::customEvent;
        using QOpenGLContext::disconnectNotify;
        using QOpenGLContext::timerEvent;
    };

    VirtualQOpenGLContext() : QOpenGLContext() {};
    VirtualQOpenGLContext(QObject* parent) : QOpenGLContext(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglcontext_metaobject_callback) {
            QMetaObject* callback_ret = qopenglcontext_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglcontext_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopenglcontext_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglcontext_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopenglcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglcontext_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopenglcontext_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglcontext_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopenglcontext_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglcontext_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopenglcontext_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglcontext_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopenglcontext_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglcontext_customevent_callback) {
            QEvent* cbval1 = event;
            qopenglcontext_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglcontext_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglcontext_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglcontext_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglcontext_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLContext::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLContext_SuperTimerEvent(QOpenGLContext* self, QTimerEvent* event);
    friend void QOpenGLContext_SuperChildEvent(QOpenGLContext* self, QChildEvent* event);
    friend void QOpenGLContext_SuperCustomEvent(QOpenGLContext* self, QEvent* event);
    friend void QOpenGLContext_SuperConnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
    friend void QOpenGLContext_SuperDisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
};

#endif
