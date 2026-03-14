#pragma once
#ifndef SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHSERVER_H
#define SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothServer so that we can call protected methods
class VirtualQBluetoothServer final : public QBluetoothServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQBluetoothServer = true;

    // Virtual class public types (including callbacks)
    using QBluetoothServer_MetaObject_Callback = QMetaObject* (*)();
    using QBluetoothServer_Metacast_Callback = void* (*)(QBluetoothServer*, const char*);
    using QBluetoothServer_Metacall_Callback = int (*)(QBluetoothServer*, int, int, void**);
    using QBluetoothServer_Event_Callback = bool (*)(QBluetoothServer*, QEvent*);
    using QBluetoothServer_EventFilter_Callback = bool (*)(QBluetoothServer*, QObject*, QEvent*);
    using QBluetoothServer_TimerEvent_Callback = void (*)(QBluetoothServer*, QTimerEvent*);
    using QBluetoothServer_ChildEvent_Callback = void (*)(QBluetoothServer*, QChildEvent*);
    using QBluetoothServer_CustomEvent_Callback = void (*)(QBluetoothServer*, QEvent*);
    using QBluetoothServer_ConnectNotify_Callback = void (*)(QBluetoothServer*, QMetaMethod*);
    using QBluetoothServer_DisconnectNotify_Callback = void (*)(QBluetoothServer*, QMetaMethod*);
    using QBluetoothServer_Sender_Callback = QObject* (*)();
    using QBluetoothServer_SenderSignalIndex_Callback = int (*)();
    using QBluetoothServer_Receivers_Callback = int (*)(const QBluetoothServer*, const char*);
    using QBluetoothServer_IsSignalConnected_Callback = bool (*)(const QBluetoothServer*, QMetaMethod*);

  protected:
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
    QBluetoothServer_Sender_Callback qbluetoothserver_sender_callback = nullptr;
    QBluetoothServer_SenderSignalIndex_Callback qbluetoothserver_sendersignalindex_callback = nullptr;
    QBluetoothServer_Receivers_Callback qbluetoothserver_receivers_callback = nullptr;
    QBluetoothServer_IsSignalConnected_Callback qbluetoothserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbluetoothserver_metaobject_isbase = false;
    mutable bool qbluetoothserver_metacast_isbase = false;
    mutable bool qbluetoothserver_metacall_isbase = false;
    mutable bool qbluetoothserver_event_isbase = false;
    mutable bool qbluetoothserver_eventfilter_isbase = false;
    mutable bool qbluetoothserver_timerevent_isbase = false;
    mutable bool qbluetoothserver_childevent_isbase = false;
    mutable bool qbluetoothserver_customevent_isbase = false;
    mutable bool qbluetoothserver_connectnotify_isbase = false;
    mutable bool qbluetoothserver_disconnectnotify_isbase = false;
    mutable bool qbluetoothserver_sender_isbase = false;
    mutable bool qbluetoothserver_sendersignalindex_isbase = false;
    mutable bool qbluetoothserver_receivers_isbase = false;
    mutable bool qbluetoothserver_issignalconnected_isbase = false;

  public:
    VirtualQBluetoothServer(QBluetoothServiceInfo::Protocol serverType) : QBluetoothServer(serverType) {};
    VirtualQBluetoothServer(QBluetoothServiceInfo::Protocol serverType, QObject* parent) : QBluetoothServer(serverType, parent) {};

    // Callback setters
    inline void setQBluetoothServer_MetaObject_Callback(QBluetoothServer_MetaObject_Callback cb) { qbluetoothserver_metaobject_callback = cb; }
    inline void setQBluetoothServer_Metacast_Callback(QBluetoothServer_Metacast_Callback cb) { qbluetoothserver_metacast_callback = cb; }
    inline void setQBluetoothServer_Metacall_Callback(QBluetoothServer_Metacall_Callback cb) { qbluetoothserver_metacall_callback = cb; }
    inline void setQBluetoothServer_Event_Callback(QBluetoothServer_Event_Callback cb) { qbluetoothserver_event_callback = cb; }
    inline void setQBluetoothServer_EventFilter_Callback(QBluetoothServer_EventFilter_Callback cb) { qbluetoothserver_eventfilter_callback = cb; }
    inline void setQBluetoothServer_TimerEvent_Callback(QBluetoothServer_TimerEvent_Callback cb) { qbluetoothserver_timerevent_callback = cb; }
    inline void setQBluetoothServer_ChildEvent_Callback(QBluetoothServer_ChildEvent_Callback cb) { qbluetoothserver_childevent_callback = cb; }
    inline void setQBluetoothServer_CustomEvent_Callback(QBluetoothServer_CustomEvent_Callback cb) { qbluetoothserver_customevent_callback = cb; }
    inline void setQBluetoothServer_ConnectNotify_Callback(QBluetoothServer_ConnectNotify_Callback cb) { qbluetoothserver_connectnotify_callback = cb; }
    inline void setQBluetoothServer_DisconnectNotify_Callback(QBluetoothServer_DisconnectNotify_Callback cb) { qbluetoothserver_disconnectnotify_callback = cb; }
    inline void setQBluetoothServer_Sender_Callback(QBluetoothServer_Sender_Callback cb) { qbluetoothserver_sender_callback = cb; }
    inline void setQBluetoothServer_SenderSignalIndex_Callback(QBluetoothServer_SenderSignalIndex_Callback cb) { qbluetoothserver_sendersignalindex_callback = cb; }
    inline void setQBluetoothServer_Receivers_Callback(QBluetoothServer_Receivers_Callback cb) { qbluetoothserver_receivers_callback = cb; }
    inline void setQBluetoothServer_IsSignalConnected_Callback(QBluetoothServer_IsSignalConnected_Callback cb) { qbluetoothserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBluetoothServer_MetaObject_IsBase(bool value) const { qbluetoothserver_metaobject_isbase = value; }
    inline void setQBluetoothServer_Metacast_IsBase(bool value) const { qbluetoothserver_metacast_isbase = value; }
    inline void setQBluetoothServer_Metacall_IsBase(bool value) const { qbluetoothserver_metacall_isbase = value; }
    inline void setQBluetoothServer_Event_IsBase(bool value) const { qbluetoothserver_event_isbase = value; }
    inline void setQBluetoothServer_EventFilter_IsBase(bool value) const { qbluetoothserver_eventfilter_isbase = value; }
    inline void setQBluetoothServer_TimerEvent_IsBase(bool value) const { qbluetoothserver_timerevent_isbase = value; }
    inline void setQBluetoothServer_ChildEvent_IsBase(bool value) const { qbluetoothserver_childevent_isbase = value; }
    inline void setQBluetoothServer_CustomEvent_IsBase(bool value) const { qbluetoothserver_customevent_isbase = value; }
    inline void setQBluetoothServer_ConnectNotify_IsBase(bool value) const { qbluetoothserver_connectnotify_isbase = value; }
    inline void setQBluetoothServer_DisconnectNotify_IsBase(bool value) const { qbluetoothserver_disconnectnotify_isbase = value; }
    inline void setQBluetoothServer_Sender_IsBase(bool value) const { qbluetoothserver_sender_isbase = value; }
    inline void setQBluetoothServer_SenderSignalIndex_IsBase(bool value) const { qbluetoothserver_sendersignalindex_isbase = value; }
    inline void setQBluetoothServer_Receivers_IsBase(bool value) const { qbluetoothserver_receivers_isbase = value; }
    inline void setQBluetoothServer_IsSignalConnected_IsBase(bool value) const { qbluetoothserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothserver_metaobject_isbase) {
            qbluetoothserver_metaobject_isbase = false;
            return QBluetoothServer::metaObject();
        }
        auto metaobject_cb = qbluetoothserver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBluetoothServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothserver_metacast_isbase) {
            qbluetoothserver_metacast_isbase = false;
            return QBluetoothServer::qt_metacast(param1);
        }
        auto metacast_cb = qbluetoothserver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothserver_metacall_isbase) {
            qbluetoothserver_metacall_isbase = false;
            return QBluetoothServer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbluetoothserver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothserver_event_isbase) {
            qbluetoothserver_event_isbase = false;
            return QBluetoothServer::event(event);
        }
        auto event_cb = qbluetoothserver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothserver_eventfilter_isbase) {
            qbluetoothserver_eventfilter_isbase = false;
            return QBluetoothServer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbluetoothserver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothserver_timerevent_isbase) {
            qbluetoothserver_timerevent_isbase = false;
            QBluetoothServer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbluetoothserver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBluetoothServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothserver_childevent_isbase) {
            qbluetoothserver_childevent_isbase = false;
            QBluetoothServer::childEvent(event);
            return;
        }
        auto childevent_cb = qbluetoothserver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBluetoothServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothserver_customevent_isbase) {
            qbluetoothserver_customevent_isbase = false;
            QBluetoothServer::customEvent(event);
            return;
        }
        auto customevent_cb = qbluetoothserver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBluetoothServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothserver_connectnotify_isbase) {
            qbluetoothserver_connectnotify_isbase = false;
            QBluetoothServer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbluetoothserver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothserver_disconnectnotify_isbase) {
            qbluetoothserver_disconnectnotify_isbase = false;
            QBluetoothServer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbluetoothserver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothServer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbluetoothserver_sender_isbase) {
            qbluetoothserver_sender_isbase = false;
            return QBluetoothServer::sender();
        }
        auto sender_cb = qbluetoothserver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBluetoothServer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbluetoothserver_sendersignalindex_isbase) {
            qbluetoothserver_sendersignalindex_isbase = false;
            return QBluetoothServer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbluetoothserver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbluetoothserver_receivers_isbase) {
            qbluetoothserver_receivers_isbase = false;
            return QBluetoothServer::receivers(signal);
        }
        auto receivers_cb = qbluetoothserver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbluetoothserver_issignalconnected_isbase) {
            qbluetoothserver_issignalconnected_isbase = false;
            return QBluetoothServer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbluetoothserver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBluetoothServer_TimerEvent(QBluetoothServer* self, QTimerEvent* event);
    friend void QBluetoothServer_SuperTimerEvent(QBluetoothServer* self, QTimerEvent* event);
    friend void QBluetoothServer_ChildEvent(QBluetoothServer* self, QChildEvent* event);
    friend void QBluetoothServer_SuperChildEvent(QBluetoothServer* self, QChildEvent* event);
    friend void QBluetoothServer_CustomEvent(QBluetoothServer* self, QEvent* event);
    friend void QBluetoothServer_SuperCustomEvent(QBluetoothServer* self, QEvent* event);
    friend void QBluetoothServer_ConnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
    friend void QBluetoothServer_SuperConnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
    friend void QBluetoothServer_DisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
    friend void QBluetoothServer_SuperDisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
    friend QObject* QBluetoothServer_Sender(const QBluetoothServer* self);
    friend QObject* QBluetoothServer_SuperSender(const QBluetoothServer* self);
    friend int QBluetoothServer_SenderSignalIndex(const QBluetoothServer* self);
    friend int QBluetoothServer_SuperSenderSignalIndex(const QBluetoothServer* self);
    friend int QBluetoothServer_Receivers(const QBluetoothServer* self, const char* signal);
    friend int QBluetoothServer_SuperReceivers(const QBluetoothServer* self, const char* signal);
    friend bool QBluetoothServer_IsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal);
    friend bool QBluetoothServer_SuperIsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal);
};

#endif
