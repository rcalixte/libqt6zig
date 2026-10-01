#pragma once
#ifndef WEBSOCKETS_LIBQWEBSOCKET_HXX
#define WEBSOCKETS_LIBQWEBSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebSocket
class VirtualQWebSocket final : public QWebSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebSocket_MetaObject_Callback = QMetaObject* (*)(const QWebSocket*);
    using QWebSocket_Metacast_Callback = void* (*)(QWebSocket*, const char*);
    using QWebSocket_Metacall_Callback = int (*)(QWebSocket*, int, int, void**);
    using QWebSocket_Event_Callback = bool (*)(QWebSocket*, QEvent*);
    using QWebSocket_EventFilter_Callback = bool (*)(QWebSocket*, QObject*, QEvent*);
    using QWebSocket_TimerEvent_Callback = void (*)(QWebSocket*, QTimerEvent*);
    using QWebSocket_ChildEvent_Callback = void (*)(QWebSocket*, QChildEvent*);
    using QWebSocket_CustomEvent_Callback = void (*)(QWebSocket*, QEvent*);
    using QWebSocket_ConnectNotify_Callback = void (*)(QWebSocket*, QMetaMethod*);
    using QWebSocket_DisconnectNotify_Callback = void (*)(QWebSocket*, QMetaMethod*);
    using QWebSocket::isSignalConnected;
    using QWebSocket::receivers;
    using QWebSocket::sender;
    using QWebSocket::senderSignalIndex;

    // Instance callback storage
    QWebSocket_MetaObject_Callback qwebsocket_metaobject_callback = nullptr;
    QWebSocket_Metacast_Callback qwebsocket_metacast_callback = nullptr;
    QWebSocket_Metacall_Callback qwebsocket_metacall_callback = nullptr;
    QWebSocket_Event_Callback qwebsocket_event_callback = nullptr;
    QWebSocket_EventFilter_Callback qwebsocket_eventfilter_callback = nullptr;
    QWebSocket_TimerEvent_Callback qwebsocket_timerevent_callback = nullptr;
    QWebSocket_ChildEvent_Callback qwebsocket_childevent_callback = nullptr;
    QWebSocket_CustomEvent_Callback qwebsocket_customevent_callback = nullptr;
    QWebSocket_ConnectNotify_Callback qwebsocket_connectnotify_callback = nullptr;
    QWebSocket_DisconnectNotify_Callback qwebsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebSocket {
        using QWebSocket::childEvent;
        using QWebSocket::connectNotify;
        using QWebSocket::customEvent;
        using QWebSocket::disconnectNotify;
        using QWebSocket::timerEvent;
    };

    VirtualQWebSocket() : QWebSocket() {};
    VirtualQWebSocket(const QString& origin) : QWebSocket(origin) {};
    VirtualQWebSocket(const QString& origin, QWebSocketProtocol::Version version) : QWebSocket(origin, version) {};
    VirtualQWebSocket(const QString& origin, QWebSocketProtocol::Version version, QObject* parent) : QWebSocket(origin, version, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebsocket_metaobject_callback) {
            QMetaObject* callback_ret = qwebsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QWebSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebsocket_timerevent_callback(this, cbval1);
            return;
        }
        QWebSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebsocket_childevent_callback(this, cbval1);
            return;
        }
        QWebSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qwebsocket_customevent_callback(this, cbval1);
            return;
        }
        QWebSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QWebSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebSocket_SuperTimerEvent(QWebSocket* self, QTimerEvent* event);
    friend void QWebSocket_SuperChildEvent(QWebSocket* self, QChildEvent* event);
    friend void QWebSocket_SuperCustomEvent(QWebSocket* self, QEvent* event);
    friend void QWebSocket_SuperConnectNotify(QWebSocket* self, const QMetaMethod* signal);
    friend void QWebSocket_SuperDisconnectNotify(QWebSocket* self, const QMetaMethod* signal);
};

#endif
