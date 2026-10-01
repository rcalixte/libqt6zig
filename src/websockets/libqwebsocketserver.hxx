#pragma once
#ifndef WEBSOCKETS_LIBQWEBSOCKETSERVER_HXX
#define WEBSOCKETS_LIBQWEBSOCKETSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebSocketServer
class VirtualQWebSocketServer final : public QWebSocketServer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebSocketServer_MetaObject_Callback = QMetaObject* (*)(const QWebSocketServer*);
    using QWebSocketServer_Metacast_Callback = void* (*)(QWebSocketServer*, const char*);
    using QWebSocketServer_Metacall_Callback = int (*)(QWebSocketServer*, int, int, void**);
    using QWebSocketServer_NextPendingConnection_Callback = QWebSocket* (*)(QWebSocketServer*);
    using QWebSocketServer_Event_Callback = bool (*)(QWebSocketServer*, QEvent*);
    using QWebSocketServer_EventFilter_Callback = bool (*)(QWebSocketServer*, QObject*, QEvent*);
    using QWebSocketServer_TimerEvent_Callback = void (*)(QWebSocketServer*, QTimerEvent*);
    using QWebSocketServer_ChildEvent_Callback = void (*)(QWebSocketServer*, QChildEvent*);
    using QWebSocketServer_CustomEvent_Callback = void (*)(QWebSocketServer*, QEvent*);
    using QWebSocketServer_ConnectNotify_Callback = void (*)(QWebSocketServer*, QMetaMethod*);
    using QWebSocketServer_DisconnectNotify_Callback = void (*)(QWebSocketServer*, QMetaMethod*);
    using QWebSocketServer::isSignalConnected;
    using QWebSocketServer::receivers;
    using QWebSocketServer::sender;
    using QWebSocketServer::senderSignalIndex;

    // Instance callback storage
    QWebSocketServer_MetaObject_Callback qwebsocketserver_metaobject_callback = nullptr;
    QWebSocketServer_Metacast_Callback qwebsocketserver_metacast_callback = nullptr;
    QWebSocketServer_Metacall_Callback qwebsocketserver_metacall_callback = nullptr;
    QWebSocketServer_NextPendingConnection_Callback qwebsocketserver_nextpendingconnection_callback = nullptr;
    QWebSocketServer_Event_Callback qwebsocketserver_event_callback = nullptr;
    QWebSocketServer_EventFilter_Callback qwebsocketserver_eventfilter_callback = nullptr;
    QWebSocketServer_TimerEvent_Callback qwebsocketserver_timerevent_callback = nullptr;
    QWebSocketServer_ChildEvent_Callback qwebsocketserver_childevent_callback = nullptr;
    QWebSocketServer_CustomEvent_Callback qwebsocketserver_customevent_callback = nullptr;
    QWebSocketServer_ConnectNotify_Callback qwebsocketserver_connectnotify_callback = nullptr;
    QWebSocketServer_DisconnectNotify_Callback qwebsocketserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebSocketServer {
        using QWebSocketServer::childEvent;
        using QWebSocketServer::connectNotify;
        using QWebSocketServer::customEvent;
        using QWebSocketServer::disconnectNotify;
        using QWebSocketServer::timerEvent;
    };

    VirtualQWebSocketServer(const QString& serverName, QWebSocketServer::SslMode secureMode) : QWebSocketServer(serverName, secureMode) {};
    VirtualQWebSocketServer(const QString& serverName, QWebSocketServer::SslMode secureMode, QObject* parent) : QWebSocketServer(serverName, secureMode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebsocketserver_metaobject_callback) {
            QMetaObject* callback_ret = qwebsocketserver_metaobject_callback(this);
            return callback_ret;
        }
        return QWebSocketServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebsocketserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebsocketserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebSocketServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebsocketserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebsocketserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebSocketServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebSocket* nextPendingConnection() override {
        if (qwebsocketserver_nextpendingconnection_callback) {
            QWebSocket* callback_ret = qwebsocketserver_nextpendingconnection_callback(this);
            return callback_ret;
        }
        return QWebSocketServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebsocketserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebsocketserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebSocketServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebsocketserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebsocketserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebSocketServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebsocketserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebsocketserver_timerevent_callback(this, cbval1);
            return;
        }
        QWebSocketServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebsocketserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebsocketserver_childevent_callback(this, cbval1);
            return;
        }
        QWebSocketServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebsocketserver_customevent_callback) {
            QEvent* cbval1 = event;
            qwebsocketserver_customevent_callback(this, cbval1);
            return;
        }
        QWebSocketServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebsocketserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebsocketserver_connectnotify_callback(this, cbval1);
            return;
        }
        QWebSocketServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebsocketserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebsocketserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebSocketServer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebSocketServer_SuperTimerEvent(QWebSocketServer* self, QTimerEvent* event);
    friend void QWebSocketServer_SuperChildEvent(QWebSocketServer* self, QChildEvent* event);
    friend void QWebSocketServer_SuperCustomEvent(QWebSocketServer* self, QEvent* event);
    friend void QWebSocketServer_SuperConnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
    friend void QWebSocketServer_SuperDisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
};

#endif
