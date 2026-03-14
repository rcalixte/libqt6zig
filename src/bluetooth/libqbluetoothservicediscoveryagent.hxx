#pragma once
#ifndef SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHSERVICEDISCOVERYAGENT_H
#define SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHSERVICEDISCOVERYAGENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothServiceDiscoveryAgent so that we can call protected methods
class VirtualQBluetoothServiceDiscoveryAgent final : public QBluetoothServiceDiscoveryAgent {

  public:
    // Virtual class boolean flag
    bool isVirtualQBluetoothServiceDiscoveryAgent = true;

    // Virtual class public types (including callbacks)
    using QBluetoothServiceDiscoveryAgent_MetaObject_Callback = QMetaObject* (*)();
    using QBluetoothServiceDiscoveryAgent_Metacast_Callback = void* (*)(QBluetoothServiceDiscoveryAgent*, const char*);
    using QBluetoothServiceDiscoveryAgent_Metacall_Callback = int (*)(QBluetoothServiceDiscoveryAgent*, int, int, void**);
    using QBluetoothServiceDiscoveryAgent_Event_Callback = bool (*)(QBluetoothServiceDiscoveryAgent*, QEvent*);
    using QBluetoothServiceDiscoveryAgent_EventFilter_Callback = bool (*)(QBluetoothServiceDiscoveryAgent*, QObject*, QEvent*);
    using QBluetoothServiceDiscoveryAgent_TimerEvent_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QTimerEvent*);
    using QBluetoothServiceDiscoveryAgent_ChildEvent_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QChildEvent*);
    using QBluetoothServiceDiscoveryAgent_CustomEvent_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QEvent*);
    using QBluetoothServiceDiscoveryAgent_ConnectNotify_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothServiceDiscoveryAgent_Sender_Callback = QObject* (*)();
    using QBluetoothServiceDiscoveryAgent_SenderSignalIndex_Callback = int (*)();
    using QBluetoothServiceDiscoveryAgent_Receivers_Callback = int (*)(const QBluetoothServiceDiscoveryAgent*, const char*);
    using QBluetoothServiceDiscoveryAgent_IsSignalConnected_Callback = bool (*)(const QBluetoothServiceDiscoveryAgent*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBluetoothServiceDiscoveryAgent_MetaObject_Callback qbluetoothservicediscoveryagent_metaobject_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_Metacast_Callback qbluetoothservicediscoveryagent_metacast_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_Metacall_Callback qbluetoothservicediscoveryagent_metacall_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_Event_Callback qbluetoothservicediscoveryagent_event_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_EventFilter_Callback qbluetoothservicediscoveryagent_eventfilter_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_TimerEvent_Callback qbluetoothservicediscoveryagent_timerevent_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_ChildEvent_Callback qbluetoothservicediscoveryagent_childevent_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_CustomEvent_Callback qbluetoothservicediscoveryagent_customevent_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_ConnectNotify_Callback qbluetoothservicediscoveryagent_connectnotify_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback qbluetoothservicediscoveryagent_disconnectnotify_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_Sender_Callback qbluetoothservicediscoveryagent_sender_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_SenderSignalIndex_Callback qbluetoothservicediscoveryagent_sendersignalindex_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_Receivers_Callback qbluetoothservicediscoveryagent_receivers_callback = nullptr;
    QBluetoothServiceDiscoveryAgent_IsSignalConnected_Callback qbluetoothservicediscoveryagent_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbluetoothservicediscoveryagent_metaobject_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_metacast_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_metacall_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_event_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_eventfilter_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_timerevent_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_childevent_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_customevent_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_connectnotify_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_disconnectnotify_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_sender_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_sendersignalindex_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_receivers_isbase = false;
    mutable bool qbluetoothservicediscoveryagent_issignalconnected_isbase = false;

  public:
    VirtualQBluetoothServiceDiscoveryAgent() : QBluetoothServiceDiscoveryAgent() {};
    VirtualQBluetoothServiceDiscoveryAgent(const QBluetoothAddress& deviceAdapter) : QBluetoothServiceDiscoveryAgent(deviceAdapter) {};
    VirtualQBluetoothServiceDiscoveryAgent(QObject* parent) : QBluetoothServiceDiscoveryAgent(parent) {};
    VirtualQBluetoothServiceDiscoveryAgent(const QBluetoothAddress& deviceAdapter, QObject* parent) : QBluetoothServiceDiscoveryAgent(deviceAdapter, parent) {};

    // Callback setters
    inline void setQBluetoothServiceDiscoveryAgent_MetaObject_Callback(QBluetoothServiceDiscoveryAgent_MetaObject_Callback cb) { qbluetoothservicediscoveryagent_metaobject_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_Metacast_Callback(QBluetoothServiceDiscoveryAgent_Metacast_Callback cb) { qbluetoothservicediscoveryagent_metacast_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_Metacall_Callback(QBluetoothServiceDiscoveryAgent_Metacall_Callback cb) { qbluetoothservicediscoveryagent_metacall_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_Event_Callback(QBluetoothServiceDiscoveryAgent_Event_Callback cb) { qbluetoothservicediscoveryagent_event_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_EventFilter_Callback(QBluetoothServiceDiscoveryAgent_EventFilter_Callback cb) { qbluetoothservicediscoveryagent_eventfilter_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_TimerEvent_Callback(QBluetoothServiceDiscoveryAgent_TimerEvent_Callback cb) { qbluetoothservicediscoveryagent_timerevent_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_ChildEvent_Callback(QBluetoothServiceDiscoveryAgent_ChildEvent_Callback cb) { qbluetoothservicediscoveryagent_childevent_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_CustomEvent_Callback(QBluetoothServiceDiscoveryAgent_CustomEvent_Callback cb) { qbluetoothservicediscoveryagent_customevent_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_ConnectNotify_Callback(QBluetoothServiceDiscoveryAgent_ConnectNotify_Callback cb) { qbluetoothservicediscoveryagent_connectnotify_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback(QBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback cb) { qbluetoothservicediscoveryagent_disconnectnotify_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_Sender_Callback(QBluetoothServiceDiscoveryAgent_Sender_Callback cb) { qbluetoothservicediscoveryagent_sender_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_SenderSignalIndex_Callback(QBluetoothServiceDiscoveryAgent_SenderSignalIndex_Callback cb) { qbluetoothservicediscoveryagent_sendersignalindex_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_Receivers_Callback(QBluetoothServiceDiscoveryAgent_Receivers_Callback cb) { qbluetoothservicediscoveryagent_receivers_callback = cb; }
    inline void setQBluetoothServiceDiscoveryAgent_IsSignalConnected_Callback(QBluetoothServiceDiscoveryAgent_IsSignalConnected_Callback cb) { qbluetoothservicediscoveryagent_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBluetoothServiceDiscoveryAgent_MetaObject_IsBase(bool value) const { qbluetoothservicediscoveryagent_metaobject_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_Metacast_IsBase(bool value) const { qbluetoothservicediscoveryagent_metacast_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_Metacall_IsBase(bool value) const { qbluetoothservicediscoveryagent_metacall_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_Event_IsBase(bool value) const { qbluetoothservicediscoveryagent_event_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_EventFilter_IsBase(bool value) const { qbluetoothservicediscoveryagent_eventfilter_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_TimerEvent_IsBase(bool value) const { qbluetoothservicediscoveryagent_timerevent_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_ChildEvent_IsBase(bool value) const { qbluetoothservicediscoveryagent_childevent_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_CustomEvent_IsBase(bool value) const { qbluetoothservicediscoveryagent_customevent_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_ConnectNotify_IsBase(bool value) const { qbluetoothservicediscoveryagent_connectnotify_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_DisconnectNotify_IsBase(bool value) const { qbluetoothservicediscoveryagent_disconnectnotify_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_Sender_IsBase(bool value) const { qbluetoothservicediscoveryagent_sender_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_SenderSignalIndex_IsBase(bool value) const { qbluetoothservicediscoveryagent_sendersignalindex_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_Receivers_IsBase(bool value) const { qbluetoothservicediscoveryagent_receivers_isbase = value; }
    inline void setQBluetoothServiceDiscoveryAgent_IsSignalConnected_IsBase(bool value) const { qbluetoothservicediscoveryagent_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothservicediscoveryagent_metaobject_isbase) {
            qbluetoothservicediscoveryagent_metaobject_isbase = false;
            return QBluetoothServiceDiscoveryAgent::metaObject();
        }
        auto metaobject_cb = qbluetoothservicediscoveryagent_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothservicediscoveryagent_metacast_isbase) {
            qbluetoothservicediscoveryagent_metacast_isbase = false;
            return QBluetoothServiceDiscoveryAgent::qt_metacast(param1);
        }
        auto metacast_cb = qbluetoothservicediscoveryagent_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothservicediscoveryagent_metacall_isbase) {
            qbluetoothservicediscoveryagent_metacall_isbase = false;
            return QBluetoothServiceDiscoveryAgent::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbluetoothservicediscoveryagent_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServiceDiscoveryAgent::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothservicediscoveryagent_event_isbase) {
            qbluetoothservicediscoveryagent_event_isbase = false;
            return QBluetoothServiceDiscoveryAgent::event(event);
        }
        auto event_cb = qbluetoothservicediscoveryagent_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothservicediscoveryagent_eventfilter_isbase) {
            qbluetoothservicediscoveryagent_eventfilter_isbase = false;
            return QBluetoothServiceDiscoveryAgent::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbluetoothservicediscoveryagent_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothservicediscoveryagent_timerevent_isbase) {
            qbluetoothservicediscoveryagent_timerevent_isbase = false;
            QBluetoothServiceDiscoveryAgent::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbluetoothservicediscoveryagent_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothservicediscoveryagent_childevent_isbase) {
            qbluetoothservicediscoveryagent_childevent_isbase = false;
            QBluetoothServiceDiscoveryAgent::childEvent(event);
            return;
        }
        auto childevent_cb = qbluetoothservicediscoveryagent_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothservicediscoveryagent_customevent_isbase) {
            qbluetoothservicediscoveryagent_customevent_isbase = false;
            QBluetoothServiceDiscoveryAgent::customEvent(event);
            return;
        }
        auto customevent_cb = qbluetoothservicediscoveryagent_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothservicediscoveryagent_connectnotify_isbase) {
            qbluetoothservicediscoveryagent_connectnotify_isbase = false;
            QBluetoothServiceDiscoveryAgent::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbluetoothservicediscoveryagent_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothservicediscoveryagent_disconnectnotify_isbase) {
            qbluetoothservicediscoveryagent_disconnectnotify_isbase = false;
            QBluetoothServiceDiscoveryAgent::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbluetoothservicediscoveryagent_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbluetoothservicediscoveryagent_sender_isbase) {
            qbluetoothservicediscoveryagent_sender_isbase = false;
            return QBluetoothServiceDiscoveryAgent::sender();
        }
        auto sender_cb = qbluetoothservicediscoveryagent_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbluetoothservicediscoveryagent_sendersignalindex_isbase) {
            qbluetoothservicediscoveryagent_sendersignalindex_isbase = false;
            return QBluetoothServiceDiscoveryAgent::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbluetoothservicediscoveryagent_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServiceDiscoveryAgent::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbluetoothservicediscoveryagent_receivers_isbase) {
            qbluetoothservicediscoveryagent_receivers_isbase = false;
            return QBluetoothServiceDiscoveryAgent::receivers(signal);
        }
        auto receivers_cb = qbluetoothservicediscoveryagent_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServiceDiscoveryAgent::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbluetoothservicediscoveryagent_issignalconnected_isbase) {
            qbluetoothservicediscoveryagent_issignalconnected_isbase = false;
            return QBluetoothServiceDiscoveryAgent::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbluetoothservicediscoveryagent_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBluetoothServiceDiscoveryAgent_TimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_SuperTimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_ChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_SuperChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_CustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_SuperCustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_ConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothServiceDiscoveryAgent_SuperConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothServiceDiscoveryAgent_DisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
    friend QObject* QBluetoothServiceDiscoveryAgent_Sender(const QBluetoothServiceDiscoveryAgent* self);
    friend QObject* QBluetoothServiceDiscoveryAgent_SuperSender(const QBluetoothServiceDiscoveryAgent* self);
    friend int QBluetoothServiceDiscoveryAgent_SenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self);
    friend int QBluetoothServiceDiscoveryAgent_SuperSenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self);
    friend int QBluetoothServiceDiscoveryAgent_Receivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal);
    friend int QBluetoothServiceDiscoveryAgent_SuperReceivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal);
    friend bool QBluetoothServiceDiscoveryAgent_IsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
    friend bool QBluetoothServiceDiscoveryAgent_SuperIsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
};

#endif
