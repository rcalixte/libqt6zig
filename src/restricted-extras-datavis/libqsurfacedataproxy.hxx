#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSurfaceDataProxy
class VirtualQSurfaceDataProxy final : public QSurfaceDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSurfaceDataProxy_MetaObject_Callback = QMetaObject* (*)(const QSurfaceDataProxy*);
    using QSurfaceDataProxy_Metacast_Callback = void* (*)(QSurfaceDataProxy*, const char*);
    using QSurfaceDataProxy_Metacall_Callback = int (*)(QSurfaceDataProxy*, int, int, void**);
    using QSurfaceDataProxy_Event_Callback = bool (*)(QSurfaceDataProxy*, QEvent*);
    using QSurfaceDataProxy_EventFilter_Callback = bool (*)(QSurfaceDataProxy*, QObject*, QEvent*);
    using QSurfaceDataProxy_TimerEvent_Callback = void (*)(QSurfaceDataProxy*, QTimerEvent*);
    using QSurfaceDataProxy_ChildEvent_Callback = void (*)(QSurfaceDataProxy*, QChildEvent*);
    using QSurfaceDataProxy_CustomEvent_Callback = void (*)(QSurfaceDataProxy*, QEvent*);
    using QSurfaceDataProxy_ConnectNotify_Callback = void (*)(QSurfaceDataProxy*, QMetaMethod*);
    using QSurfaceDataProxy_DisconnectNotify_Callback = void (*)(QSurfaceDataProxy*, QMetaMethod*);
    using QSurfaceDataProxy::isSignalConnected;
    using QSurfaceDataProxy::receivers;
    using QSurfaceDataProxy::sender;
    using QSurfaceDataProxy::senderSignalIndex;

    // Instance callback storage
    QSurfaceDataProxy_MetaObject_Callback qsurfacedataproxy_metaobject_callback = nullptr;
    QSurfaceDataProxy_Metacast_Callback qsurfacedataproxy_metacast_callback = nullptr;
    QSurfaceDataProxy_Metacall_Callback qsurfacedataproxy_metacall_callback = nullptr;
    QSurfaceDataProxy_Event_Callback qsurfacedataproxy_event_callback = nullptr;
    QSurfaceDataProxy_EventFilter_Callback qsurfacedataproxy_eventfilter_callback = nullptr;
    QSurfaceDataProxy_TimerEvent_Callback qsurfacedataproxy_timerevent_callback = nullptr;
    QSurfaceDataProxy_ChildEvent_Callback qsurfacedataproxy_childevent_callback = nullptr;
    QSurfaceDataProxy_CustomEvent_Callback qsurfacedataproxy_customevent_callback = nullptr;
    QSurfaceDataProxy_ConnectNotify_Callback qsurfacedataproxy_connectnotify_callback = nullptr;
    QSurfaceDataProxy_DisconnectNotify_Callback qsurfacedataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSurfaceDataProxy {
        using QSurfaceDataProxy::childEvent;
        using QSurfaceDataProxy::connectNotify;
        using QSurfaceDataProxy::customEvent;
        using QSurfaceDataProxy::disconnectNotify;
        using QSurfaceDataProxy::timerEvent;
    };

    VirtualQSurfaceDataProxy() : QSurfaceDataProxy() {};
    VirtualQSurfaceDataProxy(QObject* parent) : QSurfaceDataProxy(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsurfacedataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qsurfacedataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QSurfaceDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsurfacedataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsurfacedataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSurfaceDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsurfacedataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsurfacedataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSurfaceDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsurfacedataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsurfacedataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSurfaceDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsurfacedataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsurfacedataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSurfaceDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsurfacedataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsurfacedataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QSurfaceDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsurfacedataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsurfacedataproxy_childevent_callback(this, cbval1);
            return;
        }
        QSurfaceDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsurfacedataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qsurfacedataproxy_customevent_callback(this, cbval1);
            return;
        }
        QSurfaceDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsurfacedataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsurfacedataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QSurfaceDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsurfacedataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsurfacedataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSurfaceDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSurfaceDataProxy_SuperTimerEvent(QSurfaceDataProxy* self, QTimerEvent* event);
    friend void QSurfaceDataProxy_SuperChildEvent(QSurfaceDataProxy* self, QChildEvent* event);
    friend void QSurfaceDataProxy_SuperCustomEvent(QSurfaceDataProxy* self, QEvent* event);
    friend void QSurfaceDataProxy_SuperConnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal);
    friend void QSurfaceDataProxy_SuperDisconnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal);
};

#endif
