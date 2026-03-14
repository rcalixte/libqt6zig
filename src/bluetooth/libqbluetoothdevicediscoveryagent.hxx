#pragma once
#ifndef SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHDEVICEDISCOVERYAGENT_H
#define SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHDEVICEDISCOVERYAGENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothDeviceDiscoveryAgent so that we can call protected methods
class VirtualQBluetoothDeviceDiscoveryAgent final : public QBluetoothDeviceDiscoveryAgent {

  public:
    // Virtual class boolean flag
    bool isVirtualQBluetoothDeviceDiscoveryAgent = true;

    // Virtual class public types (including callbacks)
    using QBluetoothDeviceDiscoveryAgent_MetaObject_Callback = QMetaObject* (*)();
    using QBluetoothDeviceDiscoveryAgent_Metacast_Callback = void* (*)(QBluetoothDeviceDiscoveryAgent*, const char*);
    using QBluetoothDeviceDiscoveryAgent_Metacall_Callback = int (*)(QBluetoothDeviceDiscoveryAgent*, int, int, void**);
    using QBluetoothDeviceDiscoveryAgent_Event_Callback = bool (*)(QBluetoothDeviceDiscoveryAgent*, QEvent*);
    using QBluetoothDeviceDiscoveryAgent_EventFilter_Callback = bool (*)(QBluetoothDeviceDiscoveryAgent*, QObject*, QEvent*);
    using QBluetoothDeviceDiscoveryAgent_TimerEvent_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QTimerEvent*);
    using QBluetoothDeviceDiscoveryAgent_ChildEvent_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QChildEvent*);
    using QBluetoothDeviceDiscoveryAgent_CustomEvent_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QEvent*);
    using QBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothDeviceDiscoveryAgent_Sender_Callback = QObject* (*)();
    using QBluetoothDeviceDiscoveryAgent_SenderSignalIndex_Callback = int (*)();
    using QBluetoothDeviceDiscoveryAgent_Receivers_Callback = int (*)(const QBluetoothDeviceDiscoveryAgent*, const char*);
    using QBluetoothDeviceDiscoveryAgent_IsSignalConnected_Callback = bool (*)(const QBluetoothDeviceDiscoveryAgent*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBluetoothDeviceDiscoveryAgent_MetaObject_Callback qbluetoothdevicediscoveryagent_metaobject_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_Metacast_Callback qbluetoothdevicediscoveryagent_metacast_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_Metacall_Callback qbluetoothdevicediscoveryagent_metacall_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_Event_Callback qbluetoothdevicediscoveryagent_event_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_EventFilter_Callback qbluetoothdevicediscoveryagent_eventfilter_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_TimerEvent_Callback qbluetoothdevicediscoveryagent_timerevent_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_ChildEvent_Callback qbluetoothdevicediscoveryagent_childevent_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_CustomEvent_Callback qbluetoothdevicediscoveryagent_customevent_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback qbluetoothdevicediscoveryagent_connectnotify_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback qbluetoothdevicediscoveryagent_disconnectnotify_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_Sender_Callback qbluetoothdevicediscoveryagent_sender_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_SenderSignalIndex_Callback qbluetoothdevicediscoveryagent_sendersignalindex_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_Receivers_Callback qbluetoothdevicediscoveryagent_receivers_callback = nullptr;
    QBluetoothDeviceDiscoveryAgent_IsSignalConnected_Callback qbluetoothdevicediscoveryagent_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbluetoothdevicediscoveryagent_metaobject_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_metacast_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_metacall_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_event_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_eventfilter_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_timerevent_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_childevent_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_customevent_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_connectnotify_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_disconnectnotify_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_sender_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_sendersignalindex_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_receivers_isbase = false;
    mutable bool qbluetoothdevicediscoveryagent_issignalconnected_isbase = false;

  public:
    VirtualQBluetoothDeviceDiscoveryAgent() : QBluetoothDeviceDiscoveryAgent() {};
    VirtualQBluetoothDeviceDiscoveryAgent(const QBluetoothAddress& deviceAdapter) : QBluetoothDeviceDiscoveryAgent(deviceAdapter) {};
    VirtualQBluetoothDeviceDiscoveryAgent(QObject* parent) : QBluetoothDeviceDiscoveryAgent(parent) {};
    VirtualQBluetoothDeviceDiscoveryAgent(const QBluetoothAddress& deviceAdapter, QObject* parent) : QBluetoothDeviceDiscoveryAgent(deviceAdapter, parent) {};

    // Callback setters
    inline void setQBluetoothDeviceDiscoveryAgent_MetaObject_Callback(QBluetoothDeviceDiscoveryAgent_MetaObject_Callback cb) { qbluetoothdevicediscoveryagent_metaobject_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_Metacast_Callback(QBluetoothDeviceDiscoveryAgent_Metacast_Callback cb) { qbluetoothdevicediscoveryagent_metacast_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_Metacall_Callback(QBluetoothDeviceDiscoveryAgent_Metacall_Callback cb) { qbluetoothdevicediscoveryagent_metacall_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_Event_Callback(QBluetoothDeviceDiscoveryAgent_Event_Callback cb) { qbluetoothdevicediscoveryagent_event_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_EventFilter_Callback(QBluetoothDeviceDiscoveryAgent_EventFilter_Callback cb) { qbluetoothdevicediscoveryagent_eventfilter_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_TimerEvent_Callback(QBluetoothDeviceDiscoveryAgent_TimerEvent_Callback cb) { qbluetoothdevicediscoveryagent_timerevent_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_ChildEvent_Callback(QBluetoothDeviceDiscoveryAgent_ChildEvent_Callback cb) { qbluetoothdevicediscoveryagent_childevent_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_CustomEvent_Callback(QBluetoothDeviceDiscoveryAgent_CustomEvent_Callback cb) { qbluetoothdevicediscoveryagent_customevent_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback(QBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback cb) { qbluetoothdevicediscoveryagent_connectnotify_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback(QBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback cb) { qbluetoothdevicediscoveryagent_disconnectnotify_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_Sender_Callback(QBluetoothDeviceDiscoveryAgent_Sender_Callback cb) { qbluetoothdevicediscoveryagent_sender_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_SenderSignalIndex_Callback(QBluetoothDeviceDiscoveryAgent_SenderSignalIndex_Callback cb) { qbluetoothdevicediscoveryagent_sendersignalindex_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_Receivers_Callback(QBluetoothDeviceDiscoveryAgent_Receivers_Callback cb) { qbluetoothdevicediscoveryagent_receivers_callback = cb; }
    inline void setQBluetoothDeviceDiscoveryAgent_IsSignalConnected_Callback(QBluetoothDeviceDiscoveryAgent_IsSignalConnected_Callback cb) { qbluetoothdevicediscoveryagent_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBluetoothDeviceDiscoveryAgent_MetaObject_IsBase(bool value) const { qbluetoothdevicediscoveryagent_metaobject_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_Metacast_IsBase(bool value) const { qbluetoothdevicediscoveryagent_metacast_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_Metacall_IsBase(bool value) const { qbluetoothdevicediscoveryagent_metacall_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_Event_IsBase(bool value) const { qbluetoothdevicediscoveryagent_event_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_EventFilter_IsBase(bool value) const { qbluetoothdevicediscoveryagent_eventfilter_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_TimerEvent_IsBase(bool value) const { qbluetoothdevicediscoveryagent_timerevent_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_ChildEvent_IsBase(bool value) const { qbluetoothdevicediscoveryagent_childevent_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_CustomEvent_IsBase(bool value) const { qbluetoothdevicediscoveryagent_customevent_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_ConnectNotify_IsBase(bool value) const { qbluetoothdevicediscoveryagent_connectnotify_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_DisconnectNotify_IsBase(bool value) const { qbluetoothdevicediscoveryagent_disconnectnotify_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_Sender_IsBase(bool value) const { qbluetoothdevicediscoveryagent_sender_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_SenderSignalIndex_IsBase(bool value) const { qbluetoothdevicediscoveryagent_sendersignalindex_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_Receivers_IsBase(bool value) const { qbluetoothdevicediscoveryagent_receivers_isbase = value; }
    inline void setQBluetoothDeviceDiscoveryAgent_IsSignalConnected_IsBase(bool value) const { qbluetoothdevicediscoveryagent_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothdevicediscoveryagent_metaobject_isbase) {
            qbluetoothdevicediscoveryagent_metaobject_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::metaObject();
        }
        auto metaobject_cb = qbluetoothdevicediscoveryagent_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothdevicediscoveryagent_metacast_isbase) {
            qbluetoothdevicediscoveryagent_metacast_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::qt_metacast(param1);
        }
        auto metacast_cb = qbluetoothdevicediscoveryagent_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothdevicediscoveryagent_metacall_isbase) {
            qbluetoothdevicediscoveryagent_metacall_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbluetoothdevicediscoveryagent_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothDeviceDiscoveryAgent::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothdevicediscoveryagent_event_isbase) {
            qbluetoothdevicediscoveryagent_event_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::event(event);
        }
        auto event_cb = qbluetoothdevicediscoveryagent_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothdevicediscoveryagent_eventfilter_isbase) {
            qbluetoothdevicediscoveryagent_eventfilter_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbluetoothdevicediscoveryagent_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothdevicediscoveryagent_timerevent_isbase) {
            qbluetoothdevicediscoveryagent_timerevent_isbase = false;
            QBluetoothDeviceDiscoveryAgent::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbluetoothdevicediscoveryagent_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothdevicediscoveryagent_childevent_isbase) {
            qbluetoothdevicediscoveryagent_childevent_isbase = false;
            QBluetoothDeviceDiscoveryAgent::childEvent(event);
            return;
        }
        auto childevent_cb = qbluetoothdevicediscoveryagent_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothdevicediscoveryagent_customevent_isbase) {
            qbluetoothdevicediscoveryagent_customevent_isbase = false;
            QBluetoothDeviceDiscoveryAgent::customEvent(event);
            return;
        }
        auto customevent_cb = qbluetoothdevicediscoveryagent_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothdevicediscoveryagent_connectnotify_isbase) {
            qbluetoothdevicediscoveryagent_connectnotify_isbase = false;
            QBluetoothDeviceDiscoveryAgent::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbluetoothdevicediscoveryagent_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothdevicediscoveryagent_disconnectnotify_isbase) {
            qbluetoothdevicediscoveryagent_disconnectnotify_isbase = false;
            QBluetoothDeviceDiscoveryAgent::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbluetoothdevicediscoveryagent_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbluetoothdevicediscoveryagent_sender_isbase) {
            qbluetoothdevicediscoveryagent_sender_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::sender();
        }
        auto sender_cb = qbluetoothdevicediscoveryagent_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbluetoothdevicediscoveryagent_sendersignalindex_isbase) {
            qbluetoothdevicediscoveryagent_sendersignalindex_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbluetoothdevicediscoveryagent_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBluetoothDeviceDiscoveryAgent::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbluetoothdevicediscoveryagent_receivers_isbase) {
            qbluetoothdevicediscoveryagent_receivers_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::receivers(signal);
        }
        auto receivers_cb = qbluetoothdevicediscoveryagent_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothDeviceDiscoveryAgent::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbluetoothdevicediscoveryagent_issignalconnected_isbase) {
            qbluetoothdevicediscoveryagent_issignalconnected_isbase = false;
            return QBluetoothDeviceDiscoveryAgent::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbluetoothdevicediscoveryagent_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBluetoothDeviceDiscoveryAgent_TimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_SuperTimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_ChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_SuperChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_CustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_SuperCustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_ConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothDeviceDiscoveryAgent_SuperConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothDeviceDiscoveryAgent_DisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
    friend QObject* QBluetoothDeviceDiscoveryAgent_Sender(const QBluetoothDeviceDiscoveryAgent* self);
    friend QObject* QBluetoothDeviceDiscoveryAgent_SuperSender(const QBluetoothDeviceDiscoveryAgent* self);
    friend int QBluetoothDeviceDiscoveryAgent_SenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self);
    friend int QBluetoothDeviceDiscoveryAgent_SuperSenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self);
    friend int QBluetoothDeviceDiscoveryAgent_Receivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal);
    friend int QBluetoothDeviceDiscoveryAgent_SuperReceivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal);
    friend bool QBluetoothDeviceDiscoveryAgent_IsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
    friend bool QBluetoothDeviceDiscoveryAgent_SuperIsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
};

#endif
