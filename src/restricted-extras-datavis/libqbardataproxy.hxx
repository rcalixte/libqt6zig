#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarDataProxy
class VirtualQBarDataProxy final : public QBarDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBarDataProxy_MetaObject_Callback = QMetaObject* (*)(const QBarDataProxy*);
    using QBarDataProxy_Metacast_Callback = void* (*)(QBarDataProxy*, const char*);
    using QBarDataProxy_Metacall_Callback = int (*)(QBarDataProxy*, int, int, void**);
    using QBarDataProxy_Event_Callback = bool (*)(QBarDataProxy*, QEvent*);
    using QBarDataProxy_EventFilter_Callback = bool (*)(QBarDataProxy*, QObject*, QEvent*);
    using QBarDataProxy_TimerEvent_Callback = void (*)(QBarDataProxy*, QTimerEvent*);
    using QBarDataProxy_ChildEvent_Callback = void (*)(QBarDataProxy*, QChildEvent*);
    using QBarDataProxy_CustomEvent_Callback = void (*)(QBarDataProxy*, QEvent*);
    using QBarDataProxy_ConnectNotify_Callback = void (*)(QBarDataProxy*, QMetaMethod*);
    using QBarDataProxy_DisconnectNotify_Callback = void (*)(QBarDataProxy*, QMetaMethod*);
    using QBarDataProxy::isSignalConnected;
    using QBarDataProxy::receivers;
    using QBarDataProxy::sender;
    using QBarDataProxy::senderSignalIndex;

    // Instance callback storage
    QBarDataProxy_MetaObject_Callback qbardataproxy_metaobject_callback = nullptr;
    QBarDataProxy_Metacast_Callback qbardataproxy_metacast_callback = nullptr;
    QBarDataProxy_Metacall_Callback qbardataproxy_metacall_callback = nullptr;
    QBarDataProxy_Event_Callback qbardataproxy_event_callback = nullptr;
    QBarDataProxy_EventFilter_Callback qbardataproxy_eventfilter_callback = nullptr;
    QBarDataProxy_TimerEvent_Callback qbardataproxy_timerevent_callback = nullptr;
    QBarDataProxy_ChildEvent_Callback qbardataproxy_childevent_callback = nullptr;
    QBarDataProxy_CustomEvent_Callback qbardataproxy_customevent_callback = nullptr;
    QBarDataProxy_ConnectNotify_Callback qbardataproxy_connectnotify_callback = nullptr;
    QBarDataProxy_DisconnectNotify_Callback qbardataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBarDataProxy {
        using QBarDataProxy::childEvent;
        using QBarDataProxy::connectNotify;
        using QBarDataProxy::customEvent;
        using QBarDataProxy::disconnectNotify;
        using QBarDataProxy::timerEvent;
    };

    VirtualQBarDataProxy() : QBarDataProxy() {};
    VirtualQBarDataProxy(QObject* parent) : QBarDataProxy(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbardataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qbardataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QBarDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbardataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbardataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBarDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbardataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbardataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbardataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbardataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBarDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbardataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbardataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbardataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbardataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QBarDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbardataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbardataproxy_childevent_callback(this, cbval1);
            return;
        }
        QBarDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbardataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qbardataproxy_customevent_callback(this, cbval1);
            return;
        }
        QBarDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbardataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbardataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QBarDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbardataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbardataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBarDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBarDataProxy_SuperTimerEvent(QBarDataProxy* self, QTimerEvent* event);
    friend void QBarDataProxy_SuperChildEvent(QBarDataProxy* self, QChildEvent* event);
    friend void QBarDataProxy_SuperCustomEvent(QBarDataProxy* self, QEvent* event);
    friend void QBarDataProxy_SuperConnectNotify(QBarDataProxy* self, const QMetaMethod* signal);
    friend void QBarDataProxy_SuperDisconnectNotify(QBarDataProxy* self, const QMetaMethod* signal);
};

#endif
