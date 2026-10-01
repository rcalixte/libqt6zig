#pragma once
#ifndef QML_LIBQQMLCONTEXT_HXX
#define QML_LIBQQMLCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlContext
class VirtualQQmlContext final : public QQmlContext {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlContext_MetaObject_Callback = QMetaObject* (*)(const QQmlContext*);
    using QQmlContext_Metacast_Callback = void* (*)(QQmlContext*, const char*);
    using QQmlContext_Metacall_Callback = int (*)(QQmlContext*, int, int, void**);
    using QQmlContext_Event_Callback = bool (*)(QQmlContext*, QEvent*);
    using QQmlContext_EventFilter_Callback = bool (*)(QQmlContext*, QObject*, QEvent*);
    using QQmlContext_TimerEvent_Callback = void (*)(QQmlContext*, QTimerEvent*);
    using QQmlContext_ChildEvent_Callback = void (*)(QQmlContext*, QChildEvent*);
    using QQmlContext_CustomEvent_Callback = void (*)(QQmlContext*, QEvent*);
    using QQmlContext_ConnectNotify_Callback = void (*)(QQmlContext*, QMetaMethod*);
    using QQmlContext_DisconnectNotify_Callback = void (*)(QQmlContext*, QMetaMethod*);
    using QQmlContext::isSignalConnected;
    using QQmlContext::receivers;
    using QQmlContext::sender;
    using QQmlContext::senderSignalIndex;

    // Instance callback storage
    QQmlContext_MetaObject_Callback qqmlcontext_metaobject_callback = nullptr;
    QQmlContext_Metacast_Callback qqmlcontext_metacast_callback = nullptr;
    QQmlContext_Metacall_Callback qqmlcontext_metacall_callback = nullptr;
    QQmlContext_Event_Callback qqmlcontext_event_callback = nullptr;
    QQmlContext_EventFilter_Callback qqmlcontext_eventfilter_callback = nullptr;
    QQmlContext_TimerEvent_Callback qqmlcontext_timerevent_callback = nullptr;
    QQmlContext_ChildEvent_Callback qqmlcontext_childevent_callback = nullptr;
    QQmlContext_CustomEvent_Callback qqmlcontext_customevent_callback = nullptr;
    QQmlContext_ConnectNotify_Callback qqmlcontext_connectnotify_callback = nullptr;
    QQmlContext_DisconnectNotify_Callback qqmlcontext_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlContext {
        using QQmlContext::childEvent;
        using QQmlContext::connectNotify;
        using QQmlContext::customEvent;
        using QQmlContext::disconnectNotify;
        using QQmlContext::timerEvent;
    };

    VirtualQQmlContext(QQmlEngine* parent) : QQmlContext(parent) {};
    VirtualQQmlContext(QQmlContext* parent) : QQmlContext(parent) {};
    VirtualQQmlContext(QQmlEngine* parent, QObject* objParent) : QQmlContext(parent, objParent) {};
    VirtualQQmlContext(QQmlContext* parent, QObject* objParent) : QQmlContext(parent, objParent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlcontext_metaobject_callback) {
            QMetaObject* callback_ret = qqmlcontext_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlcontext_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlcontext_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlcontext_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlcontext_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlcontext_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlcontext_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlcontext_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlcontext_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlcontext_timerevent_callback(this, cbval1);
            return;
        }
        QQmlContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlcontext_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlcontext_childevent_callback(this, cbval1);
            return;
        }
        QQmlContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlcontext_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlcontext_customevent_callback(this, cbval1);
            return;
        }
        QQmlContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlcontext_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlcontext_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlcontext_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlcontext_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlContext::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlContext_SuperTimerEvent(QQmlContext* self, QTimerEvent* event);
    friend void QQmlContext_SuperChildEvent(QQmlContext* self, QChildEvent* event);
    friend void QQmlContext_SuperCustomEvent(QQmlContext* self, QEvent* event);
    friend void QQmlContext_SuperConnectNotify(QQmlContext* self, const QMetaMethod* signal);
    friend void QQmlContext_SuperDisconnectNotify(QQmlContext* self, const QMetaMethod* signal);
};

#endif
