#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScatterDataProxy
class VirtualQScatterDataProxy final : public QScatterDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScatterDataProxy_MetaObject_Callback = QMetaObject* (*)(const QScatterDataProxy*);
    using QScatterDataProxy_Metacast_Callback = void* (*)(QScatterDataProxy*, const char*);
    using QScatterDataProxy_Metacall_Callback = int (*)(QScatterDataProxy*, int, int, void**);
    using QScatterDataProxy_Event_Callback = bool (*)(QScatterDataProxy*, QEvent*);
    using QScatterDataProxy_EventFilter_Callback = bool (*)(QScatterDataProxy*, QObject*, QEvent*);
    using QScatterDataProxy_TimerEvent_Callback = void (*)(QScatterDataProxy*, QTimerEvent*);
    using QScatterDataProxy_ChildEvent_Callback = void (*)(QScatterDataProxy*, QChildEvent*);
    using QScatterDataProxy_CustomEvent_Callback = void (*)(QScatterDataProxy*, QEvent*);
    using QScatterDataProxy_ConnectNotify_Callback = void (*)(QScatterDataProxy*, QMetaMethod*);
    using QScatterDataProxy_DisconnectNotify_Callback = void (*)(QScatterDataProxy*, QMetaMethod*);
    using QScatterDataProxy::isSignalConnected;
    using QScatterDataProxy::receivers;
    using QScatterDataProxy::sender;
    using QScatterDataProxy::senderSignalIndex;

    // Instance callback storage
    QScatterDataProxy_MetaObject_Callback qscatterdataproxy_metaobject_callback = nullptr;
    QScatterDataProxy_Metacast_Callback qscatterdataproxy_metacast_callback = nullptr;
    QScatterDataProxy_Metacall_Callback qscatterdataproxy_metacall_callback = nullptr;
    QScatterDataProxy_Event_Callback qscatterdataproxy_event_callback = nullptr;
    QScatterDataProxy_EventFilter_Callback qscatterdataproxy_eventfilter_callback = nullptr;
    QScatterDataProxy_TimerEvent_Callback qscatterdataproxy_timerevent_callback = nullptr;
    QScatterDataProxy_ChildEvent_Callback qscatterdataproxy_childevent_callback = nullptr;
    QScatterDataProxy_CustomEvent_Callback qscatterdataproxy_customevent_callback = nullptr;
    QScatterDataProxy_ConnectNotify_Callback qscatterdataproxy_connectnotify_callback = nullptr;
    QScatterDataProxy_DisconnectNotify_Callback qscatterdataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QScatterDataProxy {
        using QScatterDataProxy::childEvent;
        using QScatterDataProxy::connectNotify;
        using QScatterDataProxy::customEvent;
        using QScatterDataProxy::disconnectNotify;
        using QScatterDataProxy::timerEvent;
    };

    VirtualQScatterDataProxy() : QScatterDataProxy() {};
    VirtualQScatterDataProxy(QObject* parent) : QScatterDataProxy(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscatterdataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qscatterdataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QScatterDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscatterdataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscatterdataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QScatterDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscatterdataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscatterdataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScatterDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscatterdataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscatterdataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QScatterDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscatterdataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscatterdataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScatterDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscatterdataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscatterdataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QScatterDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscatterdataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscatterdataproxy_childevent_callback(this, cbval1);
            return;
        }
        QScatterDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscatterdataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qscatterdataproxy_customevent_callback(this, cbval1);
            return;
        }
        QScatterDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscatterdataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscatterdataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QScatterDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscatterdataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscatterdataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QScatterDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QScatterDataProxy_SuperTimerEvent(QScatterDataProxy* self, QTimerEvent* event);
    friend void QScatterDataProxy_SuperChildEvent(QScatterDataProxy* self, QChildEvent* event);
    friend void QScatterDataProxy_SuperCustomEvent(QScatterDataProxy* self, QEvent* event);
    friend void QScatterDataProxy_SuperConnectNotify(QScatterDataProxy* self, const QMetaMethod* signal);
    friend void QScatterDataProxy_SuperDisconnectNotify(QScatterDataProxy* self, const QMetaMethod* signal);
};

#endif
