#pragma once
#ifndef NETWORK_LIBQLOCALSERVER_HXX
#define NETWORK_LIBQLOCALSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLocalServer
class VirtualQLocalServer final : public QLocalServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLocalServer_MetaObject_Callback = QMetaObject* (*)(const QLocalServer*);
    using QLocalServer_Metacast_Callback = void* (*)(QLocalServer*, const char*);
    using QLocalServer_Metacall_Callback = int (*)(QLocalServer*, int, int, void**);
    using QLocalServer_HasPendingConnections_Callback = bool (*)(const QLocalServer*);
    using QLocalServer_NextPendingConnection_Callback = QLocalSocket* (*)(QLocalServer*);
    using QLocalServer_IncomingConnection_Callback = void (*)(QLocalServer*, uintptr_t);
    using QLocalServer_Event_Callback = bool (*)(QLocalServer*, QEvent*);
    using QLocalServer_EventFilter_Callback = bool (*)(QLocalServer*, QObject*, QEvent*);
    using QLocalServer_TimerEvent_Callback = void (*)(QLocalServer*, QTimerEvent*);
    using QLocalServer_ChildEvent_Callback = void (*)(QLocalServer*, QChildEvent*);
    using QLocalServer_CustomEvent_Callback = void (*)(QLocalServer*, QEvent*);
    using QLocalServer_ConnectNotify_Callback = void (*)(QLocalServer*, QMetaMethod*);
    using QLocalServer_DisconnectNotify_Callback = void (*)(QLocalServer*, QMetaMethod*);
    using QLocalServer::addPendingConnection;
    using QLocalServer::isSignalConnected;
    using QLocalServer::receivers;
    using QLocalServer::sender;
    using QLocalServer::senderSignalIndex;

    // Instance callback storage
    QLocalServer_MetaObject_Callback qlocalserver_metaobject_callback = nullptr;
    QLocalServer_Metacast_Callback qlocalserver_metacast_callback = nullptr;
    QLocalServer_Metacall_Callback qlocalserver_metacall_callback = nullptr;
    QLocalServer_HasPendingConnections_Callback qlocalserver_haspendingconnections_callback = nullptr;
    QLocalServer_NextPendingConnection_Callback qlocalserver_nextpendingconnection_callback = nullptr;
    QLocalServer_IncomingConnection_Callback qlocalserver_incomingconnection_callback = nullptr;
    QLocalServer_Event_Callback qlocalserver_event_callback = nullptr;
    QLocalServer_EventFilter_Callback qlocalserver_eventfilter_callback = nullptr;
    QLocalServer_TimerEvent_Callback qlocalserver_timerevent_callback = nullptr;
    QLocalServer_ChildEvent_Callback qlocalserver_childevent_callback = nullptr;
    QLocalServer_CustomEvent_Callback qlocalserver_customevent_callback = nullptr;
    QLocalServer_ConnectNotify_Callback qlocalserver_connectnotify_callback = nullptr;
    QLocalServer_DisconnectNotify_Callback qlocalserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLocalServer {
        using QLocalServer::childEvent;
        using QLocalServer::connectNotify;
        using QLocalServer::customEvent;
        using QLocalServer::disconnectNotify;
        using QLocalServer::incomingConnection;
        using QLocalServer::timerEvent;
    };

    VirtualQLocalServer() : QLocalServer() {};
    VirtualQLocalServer(QObject* parent) : QLocalServer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlocalserver_metaobject_callback) {
            QMetaObject* callback_ret = qlocalserver_metaobject_callback(this);
            return callback_ret;
        }
        return QLocalServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlocalserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlocalserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlocalserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlocalserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLocalServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qlocalserver_haspendingconnections_callback) {
            bool callback_ret = qlocalserver_haspendingconnections_callback(this);
            return callback_ret;
        }
        return QLocalServer::hasPendingConnections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLocalSocket* nextPendingConnection() override {
        if (qlocalserver_nextpendingconnection_callback) {
            QLocalSocket* callback_ret = qlocalserver_nextpendingconnection_callback(this);
            return callback_ret;
        }
        return QLocalServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(quintptr socketDescriptor) override {
        if (qlocalserver_incomingconnection_callback) {
            uintptr_t cbval1 = static_cast<uintptr_t>(socketDescriptor);
            qlocalserver_incomingconnection_callback(this, cbval1);
            return;
        }
        QLocalServer::incomingConnection(socketDescriptor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlocalserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlocalserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlocalserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlocalserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLocalServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlocalserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlocalserver_timerevent_callback(this, cbval1);
            return;
        }
        QLocalServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlocalserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlocalserver_childevent_callback(this, cbval1);
            return;
        }
        QLocalServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlocalserver_customevent_callback) {
            QEvent* cbval1 = event;
            qlocalserver_customevent_callback(this, cbval1);
            return;
        }
        QLocalServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlocalserver_connectnotify_callback(this, cbval1);
            return;
        }
        QLocalServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlocalserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLocalServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QLocalServer_SuperIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
    friend void QLocalServer_SuperTimerEvent(QLocalServer* self, QTimerEvent* event);
    friend void QLocalServer_SuperChildEvent(QLocalServer* self, QChildEvent* event);
    friend void QLocalServer_SuperCustomEvent(QLocalServer* self, QEvent* event);
    friend void QLocalServer_SuperConnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_SuperDisconnectNotify(QLocalServer* self, const QMetaMethod* signal);
};

#endif
