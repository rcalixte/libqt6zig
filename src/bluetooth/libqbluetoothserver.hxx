#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHSERVER_HXX
#define BLUETOOTH_LIBQBLUETOOTHSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothServer
class VirtualQBluetoothServer final : public QBluetoothServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBluetoothServer_MetaObject_Callback = QMetaObject* (*)(const QBluetoothServer*);
    using QBluetoothServer_Metacast_Callback = void* (*)(QBluetoothServer*, const char*);
    using QBluetoothServer_Metacall_Callback = int (*)(QBluetoothServer*, int, int, void**);
    using QBluetoothServer_Event_Callback = bool (*)(QBluetoothServer*, QEvent*);
    using QBluetoothServer_EventFilter_Callback = bool (*)(QBluetoothServer*, QObject*, QEvent*);
    using QBluetoothServer_TimerEvent_Callback = void (*)(QBluetoothServer*, QTimerEvent*);
    using QBluetoothServer_ChildEvent_Callback = void (*)(QBluetoothServer*, QChildEvent*);
    using QBluetoothServer_CustomEvent_Callback = void (*)(QBluetoothServer*, QEvent*);
    using QBluetoothServer_ConnectNotify_Callback = void (*)(QBluetoothServer*, QMetaMethod*);
    using QBluetoothServer_DisconnectNotify_Callback = void (*)(QBluetoothServer*, QMetaMethod*);
    using QBluetoothServer::isSignalConnected;
    using QBluetoothServer::receivers;
    using QBluetoothServer::sender;
    using QBluetoothServer::senderSignalIndex;

    // Instance callback storage
    QBluetoothServer_MetaObject_Callback qbluetoothserver_metaobject_callback = nullptr;
    QBluetoothServer_Metacast_Callback qbluetoothserver_metacast_callback = nullptr;
    QBluetoothServer_Metacall_Callback qbluetoothserver_metacall_callback = nullptr;
    QBluetoothServer_Event_Callback qbluetoothserver_event_callback = nullptr;
    QBluetoothServer_EventFilter_Callback qbluetoothserver_eventfilter_callback = nullptr;
    QBluetoothServer_TimerEvent_Callback qbluetoothserver_timerevent_callback = nullptr;
    QBluetoothServer_ChildEvent_Callback qbluetoothserver_childevent_callback = nullptr;
    QBluetoothServer_CustomEvent_Callback qbluetoothserver_customevent_callback = nullptr;
    QBluetoothServer_ConnectNotify_Callback qbluetoothserver_connectnotify_callback = nullptr;
    QBluetoothServer_DisconnectNotify_Callback qbluetoothserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBluetoothServer {
        using QBluetoothServer::childEvent;
        using QBluetoothServer::connectNotify;
        using QBluetoothServer::customEvent;
        using QBluetoothServer::disconnectNotify;
        using QBluetoothServer::timerEvent;
    };

    VirtualQBluetoothServer(QBluetoothServiceInfo::Protocol serverType) : QBluetoothServer(serverType) {};
    VirtualQBluetoothServer(QBluetoothServiceInfo::Protocol serverType, QObject* parent) : QBluetoothServer(serverType, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothserver_metaobject_callback) {
            QMetaObject* callback_ret = qbluetoothserver_metaobject_callback(this);
            return callback_ret;
        }
        return QBluetoothServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbluetoothserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbluetoothserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbluetoothserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbluetoothserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbluetoothserver_timerevent_callback(this, cbval1);
            return;
        }
        QBluetoothServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbluetoothserver_childevent_callback(this, cbval1);
            return;
        }
        QBluetoothServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothserver_customevent_callback) {
            QEvent* cbval1 = event;
            qbluetoothserver_customevent_callback(this, cbval1);
            return;
        }
        QBluetoothServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothserver_connectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBluetoothServer_SuperTimerEvent(QBluetoothServer* self, QTimerEvent* event);
    friend void QBluetoothServer_SuperChildEvent(QBluetoothServer* self, QChildEvent* event);
    friend void QBluetoothServer_SuperCustomEvent(QBluetoothServer* self, QEvent* event);
    friend void QBluetoothServer_SuperConnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
    friend void QBluetoothServer_SuperDisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
};

#endif
