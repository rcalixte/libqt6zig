#pragma once
#ifndef SRC_WEBSOCKETSC_LIBVIRTUALQWEBSOCKETSERVER_H
#define SRC_WEBSOCKETSC_LIBVIRTUALQWEBSOCKETSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebSocketServer so that we can call protected methods
class VirtualQWebSocketServer final : public QWebSocketServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebSocketServer = true;

    // Virtual class public types (including callbacks)
    using QWebSocketServer_MetaObject_Callback = QMetaObject* (*)();
    using QWebSocketServer_Metacast_Callback = void* (*)(QWebSocketServer*, const char*);
    using QWebSocketServer_Metacall_Callback = int (*)(QWebSocketServer*, int, int, void**);
    using QWebSocketServer_NextPendingConnection_Callback = QWebSocket* (*)();
    using QWebSocketServer_Event_Callback = bool (*)(QWebSocketServer*, QEvent*);
    using QWebSocketServer_EventFilter_Callback = bool (*)(QWebSocketServer*, QObject*, QEvent*);
    using QWebSocketServer_TimerEvent_Callback = void (*)(QWebSocketServer*, QTimerEvent*);
    using QWebSocketServer_ChildEvent_Callback = void (*)(QWebSocketServer*, QChildEvent*);
    using QWebSocketServer_CustomEvent_Callback = void (*)(QWebSocketServer*, QEvent*);
    using QWebSocketServer_ConnectNotify_Callback = void (*)(QWebSocketServer*, QMetaMethod*);
    using QWebSocketServer_DisconnectNotify_Callback = void (*)(QWebSocketServer*, QMetaMethod*);
    using QWebSocketServer_Sender_Callback = QObject* (*)();
    using QWebSocketServer_SenderSignalIndex_Callback = int (*)();
    using QWebSocketServer_Receivers_Callback = int (*)(const QWebSocketServer*, const char*);
    using QWebSocketServer_IsSignalConnected_Callback = bool (*)(const QWebSocketServer*, QMetaMethod*);

  protected:
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
    QWebSocketServer_Sender_Callback qwebsocketserver_sender_callback = nullptr;
    QWebSocketServer_SenderSignalIndex_Callback qwebsocketserver_sendersignalindex_callback = nullptr;
    QWebSocketServer_Receivers_Callback qwebsocketserver_receivers_callback = nullptr;
    QWebSocketServer_IsSignalConnected_Callback qwebsocketserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebsocketserver_metaobject_isbase = false;
    mutable bool qwebsocketserver_metacast_isbase = false;
    mutable bool qwebsocketserver_metacall_isbase = false;
    mutable bool qwebsocketserver_nextpendingconnection_isbase = false;
    mutable bool qwebsocketserver_event_isbase = false;
    mutable bool qwebsocketserver_eventfilter_isbase = false;
    mutable bool qwebsocketserver_timerevent_isbase = false;
    mutable bool qwebsocketserver_childevent_isbase = false;
    mutable bool qwebsocketserver_customevent_isbase = false;
    mutable bool qwebsocketserver_connectnotify_isbase = false;
    mutable bool qwebsocketserver_disconnectnotify_isbase = false;
    mutable bool qwebsocketserver_sender_isbase = false;
    mutable bool qwebsocketserver_sendersignalindex_isbase = false;
    mutable bool qwebsocketserver_receivers_isbase = false;
    mutable bool qwebsocketserver_issignalconnected_isbase = false;

  public:
    VirtualQWebSocketServer(const QString& serverName, QWebSocketServer::SslMode secureMode) : QWebSocketServer(serverName, secureMode) {};
    VirtualQWebSocketServer(const QString& serverName, QWebSocketServer::SslMode secureMode, QObject* parent) : QWebSocketServer(serverName, secureMode, parent) {};

    // Callback setters
    inline void setQWebSocketServer_MetaObject_Callback(QWebSocketServer_MetaObject_Callback cb) { qwebsocketserver_metaobject_callback = cb; }
    inline void setQWebSocketServer_Metacast_Callback(QWebSocketServer_Metacast_Callback cb) { qwebsocketserver_metacast_callback = cb; }
    inline void setQWebSocketServer_Metacall_Callback(QWebSocketServer_Metacall_Callback cb) { qwebsocketserver_metacall_callback = cb; }
    inline void setQWebSocketServer_NextPendingConnection_Callback(QWebSocketServer_NextPendingConnection_Callback cb) { qwebsocketserver_nextpendingconnection_callback = cb; }
    inline void setQWebSocketServer_Event_Callback(QWebSocketServer_Event_Callback cb) { qwebsocketserver_event_callback = cb; }
    inline void setQWebSocketServer_EventFilter_Callback(QWebSocketServer_EventFilter_Callback cb) { qwebsocketserver_eventfilter_callback = cb; }
    inline void setQWebSocketServer_TimerEvent_Callback(QWebSocketServer_TimerEvent_Callback cb) { qwebsocketserver_timerevent_callback = cb; }
    inline void setQWebSocketServer_ChildEvent_Callback(QWebSocketServer_ChildEvent_Callback cb) { qwebsocketserver_childevent_callback = cb; }
    inline void setQWebSocketServer_CustomEvent_Callback(QWebSocketServer_CustomEvent_Callback cb) { qwebsocketserver_customevent_callback = cb; }
    inline void setQWebSocketServer_ConnectNotify_Callback(QWebSocketServer_ConnectNotify_Callback cb) { qwebsocketserver_connectnotify_callback = cb; }
    inline void setQWebSocketServer_DisconnectNotify_Callback(QWebSocketServer_DisconnectNotify_Callback cb) { qwebsocketserver_disconnectnotify_callback = cb; }
    inline void setQWebSocketServer_Sender_Callback(QWebSocketServer_Sender_Callback cb) { qwebsocketserver_sender_callback = cb; }
    inline void setQWebSocketServer_SenderSignalIndex_Callback(QWebSocketServer_SenderSignalIndex_Callback cb) { qwebsocketserver_sendersignalindex_callback = cb; }
    inline void setQWebSocketServer_Receivers_Callback(QWebSocketServer_Receivers_Callback cb) { qwebsocketserver_receivers_callback = cb; }
    inline void setQWebSocketServer_IsSignalConnected_Callback(QWebSocketServer_IsSignalConnected_Callback cb) { qwebsocketserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebSocketServer_MetaObject_IsBase(bool value) const { qwebsocketserver_metaobject_isbase = value; }
    inline void setQWebSocketServer_Metacast_IsBase(bool value) const { qwebsocketserver_metacast_isbase = value; }
    inline void setQWebSocketServer_Metacall_IsBase(bool value) const { qwebsocketserver_metacall_isbase = value; }
    inline void setQWebSocketServer_NextPendingConnection_IsBase(bool value) const { qwebsocketserver_nextpendingconnection_isbase = value; }
    inline void setQWebSocketServer_Event_IsBase(bool value) const { qwebsocketserver_event_isbase = value; }
    inline void setQWebSocketServer_EventFilter_IsBase(bool value) const { qwebsocketserver_eventfilter_isbase = value; }
    inline void setQWebSocketServer_TimerEvent_IsBase(bool value) const { qwebsocketserver_timerevent_isbase = value; }
    inline void setQWebSocketServer_ChildEvent_IsBase(bool value) const { qwebsocketserver_childevent_isbase = value; }
    inline void setQWebSocketServer_CustomEvent_IsBase(bool value) const { qwebsocketserver_customevent_isbase = value; }
    inline void setQWebSocketServer_ConnectNotify_IsBase(bool value) const { qwebsocketserver_connectnotify_isbase = value; }
    inline void setQWebSocketServer_DisconnectNotify_IsBase(bool value) const { qwebsocketserver_disconnectnotify_isbase = value; }
    inline void setQWebSocketServer_Sender_IsBase(bool value) const { qwebsocketserver_sender_isbase = value; }
    inline void setQWebSocketServer_SenderSignalIndex_IsBase(bool value) const { qwebsocketserver_sendersignalindex_isbase = value; }
    inline void setQWebSocketServer_Receivers_IsBase(bool value) const { qwebsocketserver_receivers_isbase = value; }
    inline void setQWebSocketServer_IsSignalConnected_IsBase(bool value) const { qwebsocketserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebsocketserver_metaobject_isbase) {
            qwebsocketserver_metaobject_isbase = false;
            return QWebSocketServer::metaObject();
        }
        auto metaobject_cb = qwebsocketserver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWebSocketServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebsocketserver_metacast_isbase) {
            qwebsocketserver_metacast_isbase = false;
            return QWebSocketServer::qt_metacast(param1);
        }
        auto metacast_cb = qwebsocketserver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWebSocketServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebsocketserver_metacall_isbase) {
            qwebsocketserver_metacall_isbase = false;
            return QWebSocketServer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwebsocketserver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebSocketServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebSocket* nextPendingConnection() override {
        if (qwebsocketserver_nextpendingconnection_isbase) {
            qwebsocketserver_nextpendingconnection_isbase = false;
            return QWebSocketServer::nextPendingConnection();
        }
        auto nextpendingconnection_cb = qwebsocketserver_nextpendingconnection_callback;
        if (nextpendingconnection_cb) {
            QWebSocket* callback_ret = nextpendingconnection_cb();
            return callback_ret;
        }
        return QWebSocketServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebsocketserver_event_isbase) {
            qwebsocketserver_event_isbase = false;
            return QWebSocketServer::event(event);
        }
        auto event_cb = qwebsocketserver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWebSocketServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebsocketserver_eventfilter_isbase) {
            qwebsocketserver_eventfilter_isbase = false;
            return QWebSocketServer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwebsocketserver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebSocketServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebsocketserver_timerevent_isbase) {
            qwebsocketserver_timerevent_isbase = false;
            QWebSocketServer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwebsocketserver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWebSocketServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebsocketserver_childevent_isbase) {
            qwebsocketserver_childevent_isbase = false;
            QWebSocketServer::childEvent(event);
            return;
        }
        auto childevent_cb = qwebsocketserver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWebSocketServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebsocketserver_customevent_isbase) {
            qwebsocketserver_customevent_isbase = false;
            QWebSocketServer::customEvent(event);
            return;
        }
        auto customevent_cb = qwebsocketserver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWebSocketServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebsocketserver_connectnotify_isbase) {
            qwebsocketserver_connectnotify_isbase = false;
            QWebSocketServer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwebsocketserver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWebSocketServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebsocketserver_disconnectnotify_isbase) {
            qwebsocketserver_disconnectnotify_isbase = false;
            QWebSocketServer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwebsocketserver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWebSocketServer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebsocketserver_sender_isbase) {
            qwebsocketserver_sender_isbase = false;
            return QWebSocketServer::sender();
        }
        auto sender_cb = qwebsocketserver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWebSocketServer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebsocketserver_sendersignalindex_isbase) {
            qwebsocketserver_sendersignalindex_isbase = false;
            return QWebSocketServer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwebsocketserver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWebSocketServer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebsocketserver_receivers_isbase) {
            qwebsocketserver_receivers_isbase = false;
            return QWebSocketServer::receivers(signal);
        }
        auto receivers_cb = qwebsocketserver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebSocketServer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebsocketserver_issignalconnected_isbase) {
            qwebsocketserver_issignalconnected_isbase = false;
            return QWebSocketServer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwebsocketserver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWebSocketServer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWebSocketServer_TimerEvent(QWebSocketServer* self, QTimerEvent* event);
    friend void QWebSocketServer_SuperTimerEvent(QWebSocketServer* self, QTimerEvent* event);
    friend void QWebSocketServer_ChildEvent(QWebSocketServer* self, QChildEvent* event);
    friend void QWebSocketServer_SuperChildEvent(QWebSocketServer* self, QChildEvent* event);
    friend void QWebSocketServer_CustomEvent(QWebSocketServer* self, QEvent* event);
    friend void QWebSocketServer_SuperCustomEvent(QWebSocketServer* self, QEvent* event);
    friend void QWebSocketServer_ConnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
    friend void QWebSocketServer_SuperConnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
    friend void QWebSocketServer_DisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
    friend void QWebSocketServer_SuperDisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
    friend QObject* QWebSocketServer_Sender(const QWebSocketServer* self);
    friend QObject* QWebSocketServer_SuperSender(const QWebSocketServer* self);
    friend int QWebSocketServer_SenderSignalIndex(const QWebSocketServer* self);
    friend int QWebSocketServer_SuperSenderSignalIndex(const QWebSocketServer* self);
    friend int QWebSocketServer_Receivers(const QWebSocketServer* self, const char* signal);
    friend int QWebSocketServer_SuperReceivers(const QWebSocketServer* self, const char* signal);
    friend bool QWebSocketServer_IsSignalConnected(const QWebSocketServer* self, const QMetaMethod* signal);
    friend bool QWebSocketServer_SuperIsSignalConnected(const QWebSocketServer* self, const QMetaMethod* signal);
};

#endif
