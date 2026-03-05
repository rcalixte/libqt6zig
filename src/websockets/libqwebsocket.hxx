#pragma once
#ifndef SRC_WEBSOCKETSC_LIBVIRTUALQWEBSOCKET_H
#define SRC_WEBSOCKETSC_LIBVIRTUALQWEBSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebSocket so that we can call protected methods
class VirtualQWebSocket final : public QWebSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebSocket = true;

    // Virtual class public types (including callbacks)
    using QWebSocket_MetaObject_Callback = QMetaObject* (*)();
    using QWebSocket_Metacast_Callback = void* (*)(QWebSocket*, const char*);
    using QWebSocket_Metacall_Callback = int (*)(QWebSocket*, int, int, void**);
    using QWebSocket_Event_Callback = bool (*)(QWebSocket*, QEvent*);
    using QWebSocket_EventFilter_Callback = bool (*)(QWebSocket*, QObject*, QEvent*);
    using QWebSocket_TimerEvent_Callback = void (*)(QWebSocket*, QTimerEvent*);
    using QWebSocket_ChildEvent_Callback = void (*)(QWebSocket*, QChildEvent*);
    using QWebSocket_CustomEvent_Callback = void (*)(QWebSocket*, QEvent*);
    using QWebSocket_ConnectNotify_Callback = void (*)(QWebSocket*, QMetaMethod*);
    using QWebSocket_DisconnectNotify_Callback = void (*)(QWebSocket*, QMetaMethod*);
    using QWebSocket_Sender_Callback = QObject* (*)();
    using QWebSocket_SenderSignalIndex_Callback = int (*)();
    using QWebSocket_Receivers_Callback = int (*)(const QWebSocket*, const char*);
    using QWebSocket_IsSignalConnected_Callback = bool (*)(const QWebSocket*, QMetaMethod*);

  protected:
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
    QWebSocket_Sender_Callback qwebsocket_sender_callback = nullptr;
    QWebSocket_SenderSignalIndex_Callback qwebsocket_sendersignalindex_callback = nullptr;
    QWebSocket_Receivers_Callback qwebsocket_receivers_callback = nullptr;
    QWebSocket_IsSignalConnected_Callback qwebsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebsocket_metaobject_isbase = false;
    mutable bool qwebsocket_metacast_isbase = false;
    mutable bool qwebsocket_metacall_isbase = false;
    mutable bool qwebsocket_event_isbase = false;
    mutable bool qwebsocket_eventfilter_isbase = false;
    mutable bool qwebsocket_timerevent_isbase = false;
    mutable bool qwebsocket_childevent_isbase = false;
    mutable bool qwebsocket_customevent_isbase = false;
    mutable bool qwebsocket_connectnotify_isbase = false;
    mutable bool qwebsocket_disconnectnotify_isbase = false;
    mutable bool qwebsocket_sender_isbase = false;
    mutable bool qwebsocket_sendersignalindex_isbase = false;
    mutable bool qwebsocket_receivers_isbase = false;
    mutable bool qwebsocket_issignalconnected_isbase = false;

  public:
    VirtualQWebSocket() : QWebSocket() {};
    VirtualQWebSocket(const QString& origin) : QWebSocket(origin) {};
    VirtualQWebSocket(const QString& origin, QWebSocketProtocol::Version version) : QWebSocket(origin, version) {};
    VirtualQWebSocket(const QString& origin, QWebSocketProtocol::Version version, QObject* parent) : QWebSocket(origin, version, parent) {};

    // Callback setters
    inline void setQWebSocket_MetaObject_Callback(QWebSocket_MetaObject_Callback cb) { qwebsocket_metaobject_callback = cb; }
    inline void setQWebSocket_Metacast_Callback(QWebSocket_Metacast_Callback cb) { qwebsocket_metacast_callback = cb; }
    inline void setQWebSocket_Metacall_Callback(QWebSocket_Metacall_Callback cb) { qwebsocket_metacall_callback = cb; }
    inline void setQWebSocket_Event_Callback(QWebSocket_Event_Callback cb) { qwebsocket_event_callback = cb; }
    inline void setQWebSocket_EventFilter_Callback(QWebSocket_EventFilter_Callback cb) { qwebsocket_eventfilter_callback = cb; }
    inline void setQWebSocket_TimerEvent_Callback(QWebSocket_TimerEvent_Callback cb) { qwebsocket_timerevent_callback = cb; }
    inline void setQWebSocket_ChildEvent_Callback(QWebSocket_ChildEvent_Callback cb) { qwebsocket_childevent_callback = cb; }
    inline void setQWebSocket_CustomEvent_Callback(QWebSocket_CustomEvent_Callback cb) { qwebsocket_customevent_callback = cb; }
    inline void setQWebSocket_ConnectNotify_Callback(QWebSocket_ConnectNotify_Callback cb) { qwebsocket_connectnotify_callback = cb; }
    inline void setQWebSocket_DisconnectNotify_Callback(QWebSocket_DisconnectNotify_Callback cb) { qwebsocket_disconnectnotify_callback = cb; }
    inline void setQWebSocket_Sender_Callback(QWebSocket_Sender_Callback cb) { qwebsocket_sender_callback = cb; }
    inline void setQWebSocket_SenderSignalIndex_Callback(QWebSocket_SenderSignalIndex_Callback cb) { qwebsocket_sendersignalindex_callback = cb; }
    inline void setQWebSocket_Receivers_Callback(QWebSocket_Receivers_Callback cb) { qwebsocket_receivers_callback = cb; }
    inline void setQWebSocket_IsSignalConnected_Callback(QWebSocket_IsSignalConnected_Callback cb) { qwebsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebSocket_MetaObject_IsBase(bool value) const { qwebsocket_metaobject_isbase = value; }
    inline void setQWebSocket_Metacast_IsBase(bool value) const { qwebsocket_metacast_isbase = value; }
    inline void setQWebSocket_Metacall_IsBase(bool value) const { qwebsocket_metacall_isbase = value; }
    inline void setQWebSocket_Event_IsBase(bool value) const { qwebsocket_event_isbase = value; }
    inline void setQWebSocket_EventFilter_IsBase(bool value) const { qwebsocket_eventfilter_isbase = value; }
    inline void setQWebSocket_TimerEvent_IsBase(bool value) const { qwebsocket_timerevent_isbase = value; }
    inline void setQWebSocket_ChildEvent_IsBase(bool value) const { qwebsocket_childevent_isbase = value; }
    inline void setQWebSocket_CustomEvent_IsBase(bool value) const { qwebsocket_customevent_isbase = value; }
    inline void setQWebSocket_ConnectNotify_IsBase(bool value) const { qwebsocket_connectnotify_isbase = value; }
    inline void setQWebSocket_DisconnectNotify_IsBase(bool value) const { qwebsocket_disconnectnotify_isbase = value; }
    inline void setQWebSocket_Sender_IsBase(bool value) const { qwebsocket_sender_isbase = value; }
    inline void setQWebSocket_SenderSignalIndex_IsBase(bool value) const { qwebsocket_sendersignalindex_isbase = value; }
    inline void setQWebSocket_Receivers_IsBase(bool value) const { qwebsocket_receivers_isbase = value; }
    inline void setQWebSocket_IsSignalConnected_IsBase(bool value) const { qwebsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebsocket_metaobject_isbase) {
            qwebsocket_metaobject_isbase = false;
            return QWebSocket::metaObject();
        }
        auto metaobject_cb = qwebsocket_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWebSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebsocket_metacast_isbase) {
            qwebsocket_metacast_isbase = false;
            return QWebSocket::qt_metacast(param1);
        }
        auto metacast_cb = qwebsocket_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWebSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebsocket_metacall_isbase) {
            qwebsocket_metacall_isbase = false;
            return QWebSocket::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwebsocket_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebsocket_event_isbase) {
            qwebsocket_event_isbase = false;
            return QWebSocket::event(event);
        }
        auto event_cb = qwebsocket_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWebSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebsocket_eventfilter_isbase) {
            qwebsocket_eventfilter_isbase = false;
            return QWebSocket::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwebsocket_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebsocket_timerevent_isbase) {
            qwebsocket_timerevent_isbase = false;
            QWebSocket::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwebsocket_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWebSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebsocket_childevent_isbase) {
            qwebsocket_childevent_isbase = false;
            QWebSocket::childEvent(event);
            return;
        }
        auto childevent_cb = qwebsocket_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWebSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebsocket_customevent_isbase) {
            qwebsocket_customevent_isbase = false;
            QWebSocket::customEvent(event);
            return;
        }
        auto customevent_cb = qwebsocket_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWebSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebsocket_connectnotify_isbase) {
            qwebsocket_connectnotify_isbase = false;
            QWebSocket::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwebsocket_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWebSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebsocket_disconnectnotify_isbase) {
            qwebsocket_disconnectnotify_isbase = false;
            QWebSocket::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwebsocket_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWebSocket::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebsocket_sender_isbase) {
            qwebsocket_sender_isbase = false;
            return QWebSocket::sender();
        }
        auto sender_cb = qwebsocket_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWebSocket::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebsocket_sendersignalindex_isbase) {
            qwebsocket_sendersignalindex_isbase = false;
            return QWebSocket::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwebsocket_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWebSocket::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebsocket_receivers_isbase) {
            qwebsocket_receivers_isbase = false;
            return QWebSocket::receivers(signal);
        }
        auto receivers_cb = qwebsocket_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebSocket::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebsocket_issignalconnected_isbase) {
            qwebsocket_issignalconnected_isbase = false;
            return QWebSocket::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwebsocket_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWebSocket::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWebSocket_TimerEvent(QWebSocket* self, QTimerEvent* event);
    friend void QWebSocket_SuperTimerEvent(QWebSocket* self, QTimerEvent* event);
    friend void QWebSocket_ChildEvent(QWebSocket* self, QChildEvent* event);
    friend void QWebSocket_SuperChildEvent(QWebSocket* self, QChildEvent* event);
    friend void QWebSocket_CustomEvent(QWebSocket* self, QEvent* event);
    friend void QWebSocket_SuperCustomEvent(QWebSocket* self, QEvent* event);
    friend void QWebSocket_ConnectNotify(QWebSocket* self, const QMetaMethod* signal);
    friend void QWebSocket_SuperConnectNotify(QWebSocket* self, const QMetaMethod* signal);
    friend void QWebSocket_DisconnectNotify(QWebSocket* self, const QMetaMethod* signal);
    friend void QWebSocket_SuperDisconnectNotify(QWebSocket* self, const QMetaMethod* signal);
    friend QObject* QWebSocket_Sender(const QWebSocket* self);
    friend QObject* QWebSocket_SuperSender(const QWebSocket* self);
    friend int QWebSocket_SenderSignalIndex(const QWebSocket* self);
    friend int QWebSocket_SuperSenderSignalIndex(const QWebSocket* self);
    friend int QWebSocket_Receivers(const QWebSocket* self, const char* signal);
    friend int QWebSocket_SuperReceivers(const QWebSocket* self, const char* signal);
    friend bool QWebSocket_IsSignalConnected(const QWebSocket* self, const QMetaMethod* signal);
    friend bool QWebSocket_SuperIsSignalConnected(const QWebSocket* self, const QMetaMethod* signal);
};

#endif
