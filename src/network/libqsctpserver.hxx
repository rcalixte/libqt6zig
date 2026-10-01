#pragma once
#ifndef NETWORK_LIBQSCTPSERVER_HXX
#define NETWORK_LIBQSCTPSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSctpServer
class VirtualQSctpServer final : public QSctpServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSctpServer_MetaObject_Callback = QMetaObject* (*)(const QSctpServer*);
    using QSctpServer_Metacast_Callback = void* (*)(QSctpServer*, const char*);
    using QSctpServer_Metacall_Callback = int (*)(QSctpServer*, int, int, void**);
    using QSctpServer_IncomingConnection_Callback = void (*)(QSctpServer*, intptr_t);
    using QSctpServer_HasPendingConnections_Callback = bool (*)(const QSctpServer*);
    using QSctpServer_NextPendingConnection_Callback = QTcpSocket* (*)(QSctpServer*);
    using QSctpServer_Event_Callback = bool (*)(QSctpServer*, QEvent*);
    using QSctpServer_EventFilter_Callback = bool (*)(QSctpServer*, QObject*, QEvent*);
    using QSctpServer_TimerEvent_Callback = void (*)(QSctpServer*, QTimerEvent*);
    using QSctpServer_ChildEvent_Callback = void (*)(QSctpServer*, QChildEvent*);
    using QSctpServer_CustomEvent_Callback = void (*)(QSctpServer*, QEvent*);
    using QSctpServer_ConnectNotify_Callback = void (*)(QSctpServer*, QMetaMethod*);
    using QSctpServer_DisconnectNotify_Callback = void (*)(QSctpServer*, QMetaMethod*);
    using QSctpServer::addPendingConnection;
    using QSctpServer::isSignalConnected;
    using QSctpServer::receivers;
    using QSctpServer::sender;
    using QSctpServer::senderSignalIndex;

    // Instance callback storage
    QSctpServer_MetaObject_Callback qsctpserver_metaobject_callback = nullptr;
    QSctpServer_Metacast_Callback qsctpserver_metacast_callback = nullptr;
    QSctpServer_Metacall_Callback qsctpserver_metacall_callback = nullptr;
    QSctpServer_IncomingConnection_Callback qsctpserver_incomingconnection_callback = nullptr;
    QSctpServer_HasPendingConnections_Callback qsctpserver_haspendingconnections_callback = nullptr;
    QSctpServer_NextPendingConnection_Callback qsctpserver_nextpendingconnection_callback = nullptr;
    QSctpServer_Event_Callback qsctpserver_event_callback = nullptr;
    QSctpServer_EventFilter_Callback qsctpserver_eventfilter_callback = nullptr;
    QSctpServer_TimerEvent_Callback qsctpserver_timerevent_callback = nullptr;
    QSctpServer_ChildEvent_Callback qsctpserver_childevent_callback = nullptr;
    QSctpServer_CustomEvent_Callback qsctpserver_customevent_callback = nullptr;
    QSctpServer_ConnectNotify_Callback qsctpserver_connectnotify_callback = nullptr;
    QSctpServer_DisconnectNotify_Callback qsctpserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSctpServer {
        using QSctpServer::childEvent;
        using QSctpServer::connectNotify;
        using QSctpServer::customEvent;
        using QSctpServer::disconnectNotify;
        using QSctpServer::incomingConnection;
        using QSctpServer::timerEvent;
    };

    VirtualQSctpServer() : QSctpServer() {};
    VirtualQSctpServer(QObject* parent) : QSctpServer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsctpserver_metaobject_callback) {
            QMetaObject* callback_ret = qsctpserver_metaobject_callback(this);
            return callback_ret;
        }
        return QSctpServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsctpserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsctpserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsctpserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsctpserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSctpServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr handle) override {
        if (qsctpserver_incomingconnection_callback) {
            qintptr handle_ret = handle;
            intptr_t cbval1 = (intptr_t)(handle_ret);
            qsctpserver_incomingconnection_callback(this, cbval1);
            return;
        }
        QSctpServer::incomingConnection(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qsctpserver_haspendingconnections_callback) {
            bool callback_ret = qsctpserver_haspendingconnections_callback(this);
            return callback_ret;
        }
        return QSctpServer::hasPendingConnections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qsctpserver_nextpendingconnection_callback) {
            QTcpSocket* callback_ret = qsctpserver_nextpendingconnection_callback(this);
            return callback_ret;
        }
        return QSctpServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsctpserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsctpserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsctpserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsctpserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSctpServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsctpserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsctpserver_timerevent_callback(this, cbval1);
            return;
        }
        QSctpServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsctpserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsctpserver_childevent_callback(this, cbval1);
            return;
        }
        QSctpServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsctpserver_customevent_callback) {
            QEvent* cbval1 = event;
            qsctpserver_customevent_callback(this, cbval1);
            return;
        }
        QSctpServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsctpserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsctpserver_connectnotify_callback(this, cbval1);
            return;
        }
        QSctpServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsctpserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsctpserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSctpServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSctpServer_SuperIncomingConnection(QSctpServer* self, intptr_t handle);
    friend void QSctpServer_SuperTimerEvent(QSctpServer* self, QTimerEvent* event);
    friend void QSctpServer_SuperChildEvent(QSctpServer* self, QChildEvent* event);
    friend void QSctpServer_SuperCustomEvent(QSctpServer* self, QEvent* event);
    friend void QSctpServer_SuperConnectNotify(QSctpServer* self, const QMetaMethod* signal);
    friend void QSctpServer_SuperDisconnectNotify(QSctpServer* self, const QMetaMethod* signal);
};

#endif
