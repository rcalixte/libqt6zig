#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSSERVER_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusServer so that we can call protected methods
class VirtualQDBusServer final : public QDBusServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQDBusServer = true;

    // Virtual class public types (including callbacks)
    using QDBusServer_MetaObject_Callback = QMetaObject* (*)();
    using QDBusServer_Metacast_Callback = void* (*)(QDBusServer*, const char*);
    using QDBusServer_Metacall_Callback = int (*)(QDBusServer*, int, int, void**);
    using QDBusServer_Event_Callback = bool (*)(QDBusServer*, QEvent*);
    using QDBusServer_EventFilter_Callback = bool (*)(QDBusServer*, QObject*, QEvent*);
    using QDBusServer_TimerEvent_Callback = void (*)(QDBusServer*, QTimerEvent*);
    using QDBusServer_ChildEvent_Callback = void (*)(QDBusServer*, QChildEvent*);
    using QDBusServer_CustomEvent_Callback = void (*)(QDBusServer*, QEvent*);
    using QDBusServer_ConnectNotify_Callback = void (*)(QDBusServer*, QMetaMethod*);
    using QDBusServer_DisconnectNotify_Callback = void (*)(QDBusServer*, QMetaMethod*);
    using QDBusServer_Sender_Callback = QObject* (*)();
    using QDBusServer_SenderSignalIndex_Callback = int (*)();
    using QDBusServer_Receivers_Callback = int (*)(const QDBusServer*, const char*);
    using QDBusServer_IsSignalConnected_Callback = bool (*)(const QDBusServer*, QMetaMethod*);

  protected:
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
    QDBusServer_Sender_Callback qdbusserver_sender_callback = nullptr;
    QDBusServer_SenderSignalIndex_Callback qdbusserver_sendersignalindex_callback = nullptr;
    QDBusServer_Receivers_Callback qdbusserver_receivers_callback = nullptr;
    QDBusServer_IsSignalConnected_Callback qdbusserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdbusserver_metaobject_isbase = false;
    mutable bool qdbusserver_metacast_isbase = false;
    mutable bool qdbusserver_metacall_isbase = false;
    mutable bool qdbusserver_event_isbase = false;
    mutable bool qdbusserver_eventfilter_isbase = false;
    mutable bool qdbusserver_timerevent_isbase = false;
    mutable bool qdbusserver_childevent_isbase = false;
    mutable bool qdbusserver_customevent_isbase = false;
    mutable bool qdbusserver_connectnotify_isbase = false;
    mutable bool qdbusserver_disconnectnotify_isbase = false;
    mutable bool qdbusserver_sender_isbase = false;
    mutable bool qdbusserver_sendersignalindex_isbase = false;
    mutable bool qdbusserver_receivers_isbase = false;
    mutable bool qdbusserver_issignalconnected_isbase = false;

  public:
    VirtualQDBusServer(const QString& address) : QDBusServer(address) {};
    VirtualQDBusServer() : QDBusServer() {};
    VirtualQDBusServer(const QString& address, QObject* parent) : QDBusServer(address, parent) {};
    VirtualQDBusServer(QObject* parent) : QDBusServer(parent) {};

    // Callback setters
    inline void setQDBusServer_MetaObject_Callback(QDBusServer_MetaObject_Callback cb) { qdbusserver_metaobject_callback = cb; }
    inline void setQDBusServer_Metacast_Callback(QDBusServer_Metacast_Callback cb) { qdbusserver_metacast_callback = cb; }
    inline void setQDBusServer_Metacall_Callback(QDBusServer_Metacall_Callback cb) { qdbusserver_metacall_callback = cb; }
    inline void setQDBusServer_Event_Callback(QDBusServer_Event_Callback cb) { qdbusserver_event_callback = cb; }
    inline void setQDBusServer_EventFilter_Callback(QDBusServer_EventFilter_Callback cb) { qdbusserver_eventfilter_callback = cb; }
    inline void setQDBusServer_TimerEvent_Callback(QDBusServer_TimerEvent_Callback cb) { qdbusserver_timerevent_callback = cb; }
    inline void setQDBusServer_ChildEvent_Callback(QDBusServer_ChildEvent_Callback cb) { qdbusserver_childevent_callback = cb; }
    inline void setQDBusServer_CustomEvent_Callback(QDBusServer_CustomEvent_Callback cb) { qdbusserver_customevent_callback = cb; }
    inline void setQDBusServer_ConnectNotify_Callback(QDBusServer_ConnectNotify_Callback cb) { qdbusserver_connectnotify_callback = cb; }
    inline void setQDBusServer_DisconnectNotify_Callback(QDBusServer_DisconnectNotify_Callback cb) { qdbusserver_disconnectnotify_callback = cb; }
    inline void setQDBusServer_Sender_Callback(QDBusServer_Sender_Callback cb) { qdbusserver_sender_callback = cb; }
    inline void setQDBusServer_SenderSignalIndex_Callback(QDBusServer_SenderSignalIndex_Callback cb) { qdbusserver_sendersignalindex_callback = cb; }
    inline void setQDBusServer_Receivers_Callback(QDBusServer_Receivers_Callback cb) { qdbusserver_receivers_callback = cb; }
    inline void setQDBusServer_IsSignalConnected_Callback(QDBusServer_IsSignalConnected_Callback cb) { qdbusserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDBusServer_MetaObject_IsBase(bool value) const { qdbusserver_metaobject_isbase = value; }
    inline void setQDBusServer_Metacast_IsBase(bool value) const { qdbusserver_metacast_isbase = value; }
    inline void setQDBusServer_Metacall_IsBase(bool value) const { qdbusserver_metacall_isbase = value; }
    inline void setQDBusServer_Event_IsBase(bool value) const { qdbusserver_event_isbase = value; }
    inline void setQDBusServer_EventFilter_IsBase(bool value) const { qdbusserver_eventfilter_isbase = value; }
    inline void setQDBusServer_TimerEvent_IsBase(bool value) const { qdbusserver_timerevent_isbase = value; }
    inline void setQDBusServer_ChildEvent_IsBase(bool value) const { qdbusserver_childevent_isbase = value; }
    inline void setQDBusServer_CustomEvent_IsBase(bool value) const { qdbusserver_customevent_isbase = value; }
    inline void setQDBusServer_ConnectNotify_IsBase(bool value) const { qdbusserver_connectnotify_isbase = value; }
    inline void setQDBusServer_DisconnectNotify_IsBase(bool value) const { qdbusserver_disconnectnotify_isbase = value; }
    inline void setQDBusServer_Sender_IsBase(bool value) const { qdbusserver_sender_isbase = value; }
    inline void setQDBusServer_SenderSignalIndex_IsBase(bool value) const { qdbusserver_sendersignalindex_isbase = value; }
    inline void setQDBusServer_Receivers_IsBase(bool value) const { qdbusserver_receivers_isbase = value; }
    inline void setQDBusServer_IsSignalConnected_IsBase(bool value) const { qdbusserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbusserver_metaobject_isbase) {
            qdbusserver_metaobject_isbase = false;
            return QDBusServer::metaObject();
        }
        auto metaobject_cb = qdbusserver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDBusServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbusserver_metacast_isbase) {
            qdbusserver_metacast_isbase = false;
            return QDBusServer::qt_metacast(param1);
        }
        auto metacast_cb = qdbusserver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusserver_metacall_isbase) {
            qdbusserver_metacall_isbase = false;
            return QDBusServer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdbusserver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusserver_event_isbase) {
            qdbusserver_event_isbase = false;
            return QDBusServer::event(event);
        }
        auto event_cb = qdbusserver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusserver_eventfilter_isbase) {
            qdbusserver_eventfilter_isbase = false;
            return QDBusServer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdbusserver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusserver_timerevent_isbase) {
            qdbusserver_timerevent_isbase = false;
            QDBusServer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdbusserver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDBusServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusserver_childevent_isbase) {
            qdbusserver_childevent_isbase = false;
            QDBusServer::childEvent(event);
            return;
        }
        auto childevent_cb = qdbusserver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDBusServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusserver_customevent_isbase) {
            qdbusserver_customevent_isbase = false;
            QDBusServer::customEvent(event);
            return;
        }
        auto customevent_cb = qdbusserver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDBusServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusserver_connectnotify_isbase) {
            qdbusserver_connectnotify_isbase = false;
            QDBusServer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdbusserver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDBusServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusserver_disconnectnotify_isbase) {
            qdbusserver_disconnectnotify_isbase = false;
            QDBusServer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdbusserver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDBusServer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbusserver_sender_isbase) {
            qdbusserver_sender_isbase = false;
            return QDBusServer::sender();
        }
        auto sender_cb = qdbusserver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDBusServer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbusserver_sendersignalindex_isbase) {
            qdbusserver_sendersignalindex_isbase = false;
            return QDBusServer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdbusserver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDBusServer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbusserver_receivers_isbase) {
            qdbusserver_receivers_isbase = false;
            return QDBusServer::receivers(signal);
        }
        auto receivers_cb = qdbusserver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDBusServer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbusserver_issignalconnected_isbase) {
            qdbusserver_issignalconnected_isbase = false;
            return QDBusServer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdbusserver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusServer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDBusServer_TimerEvent(QDBusServer* self, QTimerEvent* event);
    friend void QDBusServer_SuperTimerEvent(QDBusServer* self, QTimerEvent* event);
    friend void QDBusServer_ChildEvent(QDBusServer* self, QChildEvent* event);
    friend void QDBusServer_SuperChildEvent(QDBusServer* self, QChildEvent* event);
    friend void QDBusServer_CustomEvent(QDBusServer* self, QEvent* event);
    friend void QDBusServer_SuperCustomEvent(QDBusServer* self, QEvent* event);
    friend void QDBusServer_ConnectNotify(QDBusServer* self, const QMetaMethod* signal);
    friend void QDBusServer_SuperConnectNotify(QDBusServer* self, const QMetaMethod* signal);
    friend void QDBusServer_DisconnectNotify(QDBusServer* self, const QMetaMethod* signal);
    friend void QDBusServer_SuperDisconnectNotify(QDBusServer* self, const QMetaMethod* signal);
    friend QObject* QDBusServer_Sender(const QDBusServer* self);
    friend QObject* QDBusServer_SuperSender(const QDBusServer* self);
    friend int QDBusServer_SenderSignalIndex(const QDBusServer* self);
    friend int QDBusServer_SuperSenderSignalIndex(const QDBusServer* self);
    friend int QDBusServer_Receivers(const QDBusServer* self, const char* signal);
    friend int QDBusServer_SuperReceivers(const QDBusServer* self, const char* signal);
    friend bool QDBusServer_IsSignalConnected(const QDBusServer* self, const QMetaMethod* signal);
    friend bool QDBusServer_SuperIsSignalConnected(const QDBusServer* self, const QMetaMethod* signal);
};

#endif
