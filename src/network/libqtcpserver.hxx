#pragma once
#ifndef NETWORK_LIBQTCPSERVER_HXX
#define NETWORK_LIBQTCPSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTcpServer
class VirtualQTcpServer final : public QTcpServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTcpServer_MetaObject_Callback = QMetaObject* (*)(const QTcpServer*);
    using QTcpServer_Metacast_Callback = void* (*)(QTcpServer*, const char*);
    using QTcpServer_Metacall_Callback = int (*)(QTcpServer*, int, int, void**);
    using QTcpServer_HasPendingConnections_Callback = bool (*)(const QTcpServer*);
    using QTcpServer_NextPendingConnection_Callback = QTcpSocket* (*)(QTcpServer*);
    using QTcpServer_IncomingConnection_Callback = void (*)(QTcpServer*, intptr_t);
    using QTcpServer_Event_Callback = bool (*)(QTcpServer*, QEvent*);
    using QTcpServer_EventFilter_Callback = bool (*)(QTcpServer*, QObject*, QEvent*);
    using QTcpServer_TimerEvent_Callback = void (*)(QTcpServer*, QTimerEvent*);
    using QTcpServer_ChildEvent_Callback = void (*)(QTcpServer*, QChildEvent*);
    using QTcpServer_CustomEvent_Callback = void (*)(QTcpServer*, QEvent*);
    using QTcpServer_ConnectNotify_Callback = void (*)(QTcpServer*, QMetaMethod*);
    using QTcpServer_DisconnectNotify_Callback = void (*)(QTcpServer*, QMetaMethod*);
    using QTcpServer::addPendingConnection;
    using QTcpServer::isSignalConnected;
    using QTcpServer::receivers;
    using QTcpServer::sender;
    using QTcpServer::senderSignalIndex;

    // Instance callback storage
    QTcpServer_MetaObject_Callback qtcpserver_metaobject_callback = nullptr;
    QTcpServer_Metacast_Callback qtcpserver_metacast_callback = nullptr;
    QTcpServer_Metacall_Callback qtcpserver_metacall_callback = nullptr;
    QTcpServer_HasPendingConnections_Callback qtcpserver_haspendingconnections_callback = nullptr;
    QTcpServer_NextPendingConnection_Callback qtcpserver_nextpendingconnection_callback = nullptr;
    QTcpServer_IncomingConnection_Callback qtcpserver_incomingconnection_callback = nullptr;
    QTcpServer_Event_Callback qtcpserver_event_callback = nullptr;
    QTcpServer_EventFilter_Callback qtcpserver_eventfilter_callback = nullptr;
    QTcpServer_TimerEvent_Callback qtcpserver_timerevent_callback = nullptr;
    QTcpServer_ChildEvent_Callback qtcpserver_childevent_callback = nullptr;
    QTcpServer_CustomEvent_Callback qtcpserver_customevent_callback = nullptr;
    QTcpServer_ConnectNotify_Callback qtcpserver_connectnotify_callback = nullptr;
    QTcpServer_DisconnectNotify_Callback qtcpserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTcpServer {
        using QTcpServer::childEvent;
        using QTcpServer::connectNotify;
        using QTcpServer::customEvent;
        using QTcpServer::disconnectNotify;
        using QTcpServer::incomingConnection;
        using QTcpServer::timerEvent;
    };

    VirtualQTcpServer() : QTcpServer() {};
    VirtualQTcpServer(QObject* parent) : QTcpServer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtcpserver_metaobject_callback) {
            QMetaObject* callback_ret = qtcpserver_metaobject_callback(this);
            return callback_ret;
        }
        return QTcpServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtcpserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtcpserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtcpserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtcpserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTcpServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qtcpserver_haspendingconnections_callback) {
            bool callback_ret = qtcpserver_haspendingconnections_callback(this);
            return callback_ret;
        }
        return QTcpServer::hasPendingConnections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qtcpserver_nextpendingconnection_callback) {
            QTcpSocket* callback_ret = qtcpserver_nextpendingconnection_callback(this);
            return callback_ret;
        }
        return QTcpServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr handle) override {
        if (qtcpserver_incomingconnection_callback) {
            qintptr handle_ret = handle;
            intptr_t cbval1 = (intptr_t)(handle_ret);
            qtcpserver_incomingconnection_callback(this, cbval1);
            return;
        }
        QTcpServer::incomingConnection(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtcpserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtcpserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtcpserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtcpserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTcpServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtcpserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtcpserver_timerevent_callback(this, cbval1);
            return;
        }
        QTcpServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtcpserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtcpserver_childevent_callback(this, cbval1);
            return;
        }
        QTcpServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtcpserver_customevent_callback) {
            QEvent* cbval1 = event;
            qtcpserver_customevent_callback(this, cbval1);
            return;
        }
        QTcpServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtcpserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtcpserver_connectnotify_callback(this, cbval1);
            return;
        }
        QTcpServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtcpserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtcpserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTcpServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTcpServer_SuperIncomingConnection(QTcpServer* self, intptr_t handle);
    friend void QTcpServer_SuperTimerEvent(QTcpServer* self, QTimerEvent* event);
    friend void QTcpServer_SuperChildEvent(QTcpServer* self, QChildEvent* event);
    friend void QTcpServer_SuperCustomEvent(QTcpServer* self, QEvent* event);
    friend void QTcpServer_SuperConnectNotify(QTcpServer* self, const QMetaMethod* signal);
    friend void QTcpServer_SuperDisconnectNotify(QTcpServer* self, const QMetaMethod* signal);
};

#endif
