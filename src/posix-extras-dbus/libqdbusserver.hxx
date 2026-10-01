#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSSERVER_HXX
#define POSIX_EXTRAS_DBUS_LIBQDBUSSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusServer
class VirtualQDBusServer final : public QDBusServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDBusServer_MetaObject_Callback = QMetaObject* (*)(const QDBusServer*);
    using QDBusServer_Metacast_Callback = void* (*)(QDBusServer*, const char*);
    using QDBusServer_Metacall_Callback = int (*)(QDBusServer*, int, int, void**);
    using QDBusServer_Event_Callback = bool (*)(QDBusServer*, QEvent*);
    using QDBusServer_EventFilter_Callback = bool (*)(QDBusServer*, QObject*, QEvent*);
    using QDBusServer_TimerEvent_Callback = void (*)(QDBusServer*, QTimerEvent*);
    using QDBusServer_ChildEvent_Callback = void (*)(QDBusServer*, QChildEvent*);
    using QDBusServer_CustomEvent_Callback = void (*)(QDBusServer*, QEvent*);
    using QDBusServer_ConnectNotify_Callback = void (*)(QDBusServer*, QMetaMethod*);
    using QDBusServer_DisconnectNotify_Callback = void (*)(QDBusServer*, QMetaMethod*);
    using QDBusServer::isSignalConnected;
    using QDBusServer::receivers;
    using QDBusServer::sender;
    using QDBusServer::senderSignalIndex;

    // Instance callback storage
    QDBusServer_MetaObject_Callback qdbusserver_metaobject_callback = nullptr;
    QDBusServer_Metacast_Callback qdbusserver_metacast_callback = nullptr;
    QDBusServer_Metacall_Callback qdbusserver_metacall_callback = nullptr;
    QDBusServer_Event_Callback qdbusserver_event_callback = nullptr;
    QDBusServer_EventFilter_Callback qdbusserver_eventfilter_callback = nullptr;
    QDBusServer_TimerEvent_Callback qdbusserver_timerevent_callback = nullptr;
    QDBusServer_ChildEvent_Callback qdbusserver_childevent_callback = nullptr;
    QDBusServer_CustomEvent_Callback qdbusserver_customevent_callback = nullptr;
    QDBusServer_ConnectNotify_Callback qdbusserver_connectnotify_callback = nullptr;
    QDBusServer_DisconnectNotify_Callback qdbusserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDBusServer {
        using QDBusServer::childEvent;
        using QDBusServer::connectNotify;
        using QDBusServer::customEvent;
        using QDBusServer::disconnectNotify;
        using QDBusServer::timerEvent;
    };

    VirtualQDBusServer(const QString& address) : QDBusServer(address) {};
    VirtualQDBusServer() : QDBusServer() {};
    VirtualQDBusServer(const QString& address, QObject* parent) : QDBusServer(address, parent) {};
    VirtualQDBusServer(QObject* parent) : QDBusServer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbusserver_metaobject_callback) {
            QMetaObject* callback_ret = qdbusserver_metaobject_callback(this);
            return callback_ret;
        }
        return QDBusServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbusserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdbusserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdbusserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdbusserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdbusserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdbusserver_timerevent_callback(this, cbval1);
            return;
        }
        QDBusServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdbusserver_childevent_callback(this, cbval1);
            return;
        }
        QDBusServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusserver_customevent_callback) {
            QEvent* cbval1 = event;
            qdbusserver_customevent_callback(this, cbval1);
            return;
        }
        QDBusServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusserver_connectnotify_callback(this, cbval1);
            return;
        }
        QDBusServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDBusServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDBusServer_SuperTimerEvent(QDBusServer* self, QTimerEvent* event);
    friend void QDBusServer_SuperChildEvent(QDBusServer* self, QChildEvent* event);
    friend void QDBusServer_SuperCustomEvent(QDBusServer* self, QEvent* event);
    friend void QDBusServer_SuperConnectNotify(QDBusServer* self, const QMetaMethod* signal);
    friend void QDBusServer_SuperDisconnectNotify(QDBusServer* self, const QMetaMethod* signal);
};

#endif
