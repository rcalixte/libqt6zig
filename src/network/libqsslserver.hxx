#pragma once
#ifndef NETWORK_LIBQSSLSERVER_HXX
#define NETWORK_LIBQSSLSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSslServer
class VirtualQSslServer final : public QSslServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSslServer_MetaObject_Callback = QMetaObject* (*)(const QSslServer*);
    using QSslServer_Metacast_Callback = void* (*)(QSslServer*, const char*);
    using QSslServer_Metacall_Callback = int (*)(QSslServer*, int, int, void**);
    using QSslServer_IncomingConnection_Callback = void (*)(QSslServer*, intptr_t);
    using QSslServer_HasPendingConnections_Callback = bool (*)(const QSslServer*);
    using QSslServer_NextPendingConnection_Callback = QTcpSocket* (*)(QSslServer*);
    using QSslServer_Event_Callback = bool (*)(QSslServer*, QEvent*);
    using QSslServer_EventFilter_Callback = bool (*)(QSslServer*, QObject*, QEvent*);
    using QSslServer_TimerEvent_Callback = void (*)(QSslServer*, QTimerEvent*);
    using QSslServer_ChildEvent_Callback = void (*)(QSslServer*, QChildEvent*);
    using QSslServer_CustomEvent_Callback = void (*)(QSslServer*, QEvent*);
    using QSslServer_ConnectNotify_Callback = void (*)(QSslServer*, QMetaMethod*);
    using QSslServer_DisconnectNotify_Callback = void (*)(QSslServer*, QMetaMethod*);
    using QSslServer::addPendingConnection;
    using QSslServer::isSignalConnected;
    using QSslServer::receivers;
    using QSslServer::sender;
    using QSslServer::senderSignalIndex;

    // Instance callback storage
    QSslServer_MetaObject_Callback qsslserver_metaobject_callback = nullptr;
    QSslServer_Metacast_Callback qsslserver_metacast_callback = nullptr;
    QSslServer_Metacall_Callback qsslserver_metacall_callback = nullptr;
    QSslServer_IncomingConnection_Callback qsslserver_incomingconnection_callback = nullptr;
    QSslServer_HasPendingConnections_Callback qsslserver_haspendingconnections_callback = nullptr;
    QSslServer_NextPendingConnection_Callback qsslserver_nextpendingconnection_callback = nullptr;
    QSslServer_Event_Callback qsslserver_event_callback = nullptr;
    QSslServer_EventFilter_Callback qsslserver_eventfilter_callback = nullptr;
    QSslServer_TimerEvent_Callback qsslserver_timerevent_callback = nullptr;
    QSslServer_ChildEvent_Callback qsslserver_childevent_callback = nullptr;
    QSslServer_CustomEvent_Callback qsslserver_customevent_callback = nullptr;
    QSslServer_ConnectNotify_Callback qsslserver_connectnotify_callback = nullptr;
    QSslServer_DisconnectNotify_Callback qsslserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSslServer {
        using QSslServer::childEvent;
        using QSslServer::connectNotify;
        using QSslServer::customEvent;
        using QSslServer::disconnectNotify;
        using QSslServer::incomingConnection;
        using QSslServer::timerEvent;
    };

    VirtualQSslServer() : QSslServer() {};
    VirtualQSslServer(QObject* parent) : QSslServer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsslserver_metaobject_callback) {
            QMetaObject* callback_ret = qsslserver_metaobject_callback(this);
            return callback_ret;
        }
        return QSslServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsslserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsslserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSslServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsslserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsslserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSslServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr socket) override {
        if (qsslserver_incomingconnection_callback) {
            qintptr socket_ret = socket;
            intptr_t cbval1 = (intptr_t)(socket_ret);
            qsslserver_incomingconnection_callback(this, cbval1);
            return;
        }
        QSslServer::incomingConnection(socket);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qsslserver_haspendingconnections_callback) {
            bool callback_ret = qsslserver_haspendingconnections_callback(this);
            return callback_ret;
        }
        return QSslServer::hasPendingConnections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qsslserver_nextpendingconnection_callback) {
            QTcpSocket* callback_ret = qsslserver_nextpendingconnection_callback(this);
            return callback_ret;
        }
        return QSslServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsslserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsslserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSslServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsslserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsslserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSslServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsslserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsslserver_timerevent_callback(this, cbval1);
            return;
        }
        QSslServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsslserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsslserver_childevent_callback(this, cbval1);
            return;
        }
        QSslServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsslserver_customevent_callback) {
            QEvent* cbval1 = event;
            qsslserver_customevent_callback(this, cbval1);
            return;
        }
        QSslServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsslserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsslserver_connectnotify_callback(this, cbval1);
            return;
        }
        QSslServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsslserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsslserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSslServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSslServer_SuperIncomingConnection(QSslServer* self, intptr_t socket);
    friend void QSslServer_SuperTimerEvent(QSslServer* self, QTimerEvent* event);
    friend void QSslServer_SuperChildEvent(QSslServer* self, QChildEvent* event);
    friend void QSslServer_SuperCustomEvent(QSslServer* self, QEvent* event);
    friend void QSslServer_SuperConnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_SuperDisconnectNotify(QSslServer* self, const QMetaMethod* signal);
};

#endif
