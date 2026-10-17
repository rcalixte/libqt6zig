#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQHEIGHTMAPSURFACEDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQHEIGHTMAPSURFACEDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHeightMapSurfaceDataProxy
class VirtualQHeightMapSurfaceDataProxy final : public QHeightMapSurfaceDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHeightMapSurfaceDataProxy_MetaObject_Callback = QMetaObject* (*)(const QHeightMapSurfaceDataProxy*);
    using QHeightMapSurfaceDataProxy_Metacast_Callback = void* (*)(QHeightMapSurfaceDataProxy*, const char*);
    using QHeightMapSurfaceDataProxy_Metacall_Callback = int (*)(QHeightMapSurfaceDataProxy*, int, int, void**);
    using QHeightMapSurfaceDataProxy_Event_Callback = bool (*)(QHeightMapSurfaceDataProxy*, QEvent*);
    using QHeightMapSurfaceDataProxy_EventFilter_Callback = bool (*)(QHeightMapSurfaceDataProxy*, QObject*, QEvent*);
    using QHeightMapSurfaceDataProxy_TimerEvent_Callback = void (*)(QHeightMapSurfaceDataProxy*, QTimerEvent*);
    using QHeightMapSurfaceDataProxy_ChildEvent_Callback = void (*)(QHeightMapSurfaceDataProxy*, QChildEvent*);
    using QHeightMapSurfaceDataProxy_CustomEvent_Callback = void (*)(QHeightMapSurfaceDataProxy*, QEvent*);
    using QHeightMapSurfaceDataProxy_ConnectNotify_Callback = void (*)(QHeightMapSurfaceDataProxy*, QMetaMethod*);
    using QHeightMapSurfaceDataProxy_DisconnectNotify_Callback = void (*)(QHeightMapSurfaceDataProxy*, QMetaMethod*);
    using QHeightMapSurfaceDataProxy::isSignalConnected;
    using QHeightMapSurfaceDataProxy::receivers;
    using QHeightMapSurfaceDataProxy::sender;
    using QHeightMapSurfaceDataProxy::senderSignalIndex;

    // Instance callback storage
    QHeightMapSurfaceDataProxy_MetaObject_Callback qheightmapsurfacedataproxy_metaobject_callback = nullptr;
    QHeightMapSurfaceDataProxy_Metacast_Callback qheightmapsurfacedataproxy_metacast_callback = nullptr;
    QHeightMapSurfaceDataProxy_Metacall_Callback qheightmapsurfacedataproxy_metacall_callback = nullptr;
    QHeightMapSurfaceDataProxy_Event_Callback qheightmapsurfacedataproxy_event_callback = nullptr;
    QHeightMapSurfaceDataProxy_EventFilter_Callback qheightmapsurfacedataproxy_eventfilter_callback = nullptr;
    QHeightMapSurfaceDataProxy_TimerEvent_Callback qheightmapsurfacedataproxy_timerevent_callback = nullptr;
    QHeightMapSurfaceDataProxy_ChildEvent_Callback qheightmapsurfacedataproxy_childevent_callback = nullptr;
    QHeightMapSurfaceDataProxy_CustomEvent_Callback qheightmapsurfacedataproxy_customevent_callback = nullptr;
    QHeightMapSurfaceDataProxy_ConnectNotify_Callback qheightmapsurfacedataproxy_connectnotify_callback = nullptr;
    QHeightMapSurfaceDataProxy_DisconnectNotify_Callback qheightmapsurfacedataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHeightMapSurfaceDataProxy {
        using QHeightMapSurfaceDataProxy::childEvent;
        using QHeightMapSurfaceDataProxy::connectNotify;
        using QHeightMapSurfaceDataProxy::customEvent;
        using QHeightMapSurfaceDataProxy::disconnectNotify;
        using QHeightMapSurfaceDataProxy::timerEvent;
    };

    VirtualQHeightMapSurfaceDataProxy() : QHeightMapSurfaceDataProxy() {};
    VirtualQHeightMapSurfaceDataProxy(const QImage& image) : QHeightMapSurfaceDataProxy(image) {};
    VirtualQHeightMapSurfaceDataProxy(const QString& filename) : QHeightMapSurfaceDataProxy(filename) {};
    VirtualQHeightMapSurfaceDataProxy(QObject* parent) : QHeightMapSurfaceDataProxy(parent) {};
    VirtualQHeightMapSurfaceDataProxy(const QImage& image, QObject* parent) : QHeightMapSurfaceDataProxy(image, parent) {};
    VirtualQHeightMapSurfaceDataProxy(const QString& filename, QObject* parent) : QHeightMapSurfaceDataProxy(filename, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qheightmapsurfacedataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qheightmapsurfacedataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QHeightMapSurfaceDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qheightmapsurfacedataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qheightmapsurfacedataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHeightMapSurfaceDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qheightmapsurfacedataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qheightmapsurfacedataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHeightMapSurfaceDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qheightmapsurfacedataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qheightmapsurfacedataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHeightMapSurfaceDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qheightmapsurfacedataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qheightmapsurfacedataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHeightMapSurfaceDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qheightmapsurfacedataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qheightmapsurfacedataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QHeightMapSurfaceDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qheightmapsurfacedataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qheightmapsurfacedataproxy_childevent_callback(this, cbval1);
            return;
        }
        QHeightMapSurfaceDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qheightmapsurfacedataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qheightmapsurfacedataproxy_customevent_callback(this, cbval1);
            return;
        }
        QHeightMapSurfaceDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qheightmapsurfacedataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qheightmapsurfacedataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QHeightMapSurfaceDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qheightmapsurfacedataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qheightmapsurfacedataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHeightMapSurfaceDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHeightMapSurfaceDataProxy_SuperTimerEvent(QHeightMapSurfaceDataProxy* self, QTimerEvent* event);
    friend void QHeightMapSurfaceDataProxy_SuperChildEvent(QHeightMapSurfaceDataProxy* self, QChildEvent* event);
    friend void QHeightMapSurfaceDataProxy_SuperCustomEvent(QHeightMapSurfaceDataProxy* self, QEvent* event);
    friend void QHeightMapSurfaceDataProxy_SuperConnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
    friend void QHeightMapSurfaceDataProxy_SuperDisconnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
};

#endif
