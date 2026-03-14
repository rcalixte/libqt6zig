#pragma once
#ifndef SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHLOCALDEVICE_H
#define SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHLOCALDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothLocalDevice so that we can call protected methods
class VirtualQBluetoothLocalDevice final : public QBluetoothLocalDevice {

  public:
    // Virtual class boolean flag
    bool isVirtualQBluetoothLocalDevice = true;

    // Virtual class public types (including callbacks)
    using QBluetoothLocalDevice_MetaObject_Callback = QMetaObject* (*)();
    using QBluetoothLocalDevice_Metacast_Callback = void* (*)(QBluetoothLocalDevice*, const char*);
    using QBluetoothLocalDevice_Metacall_Callback = int (*)(QBluetoothLocalDevice*, int, int, void**);
    using QBluetoothLocalDevice_Event_Callback = bool (*)(QBluetoothLocalDevice*, QEvent*);
    using QBluetoothLocalDevice_EventFilter_Callback = bool (*)(QBluetoothLocalDevice*, QObject*, QEvent*);
    using QBluetoothLocalDevice_TimerEvent_Callback = void (*)(QBluetoothLocalDevice*, QTimerEvent*);
    using QBluetoothLocalDevice_ChildEvent_Callback = void (*)(QBluetoothLocalDevice*, QChildEvent*);
    using QBluetoothLocalDevice_CustomEvent_Callback = void (*)(QBluetoothLocalDevice*, QEvent*);
    using QBluetoothLocalDevice_ConnectNotify_Callback = void (*)(QBluetoothLocalDevice*, QMetaMethod*);
    using QBluetoothLocalDevice_DisconnectNotify_Callback = void (*)(QBluetoothLocalDevice*, QMetaMethod*);
    using QBluetoothLocalDevice_Sender_Callback = QObject* (*)();
    using QBluetoothLocalDevice_SenderSignalIndex_Callback = int (*)();
    using QBluetoothLocalDevice_Receivers_Callback = int (*)(const QBluetoothLocalDevice*, const char*);
    using QBluetoothLocalDevice_IsSignalConnected_Callback = bool (*)(const QBluetoothLocalDevice*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBluetoothLocalDevice_MetaObject_Callback qbluetoothlocaldevice_metaobject_callback = nullptr;
    QBluetoothLocalDevice_Metacast_Callback qbluetoothlocaldevice_metacast_callback = nullptr;
    QBluetoothLocalDevice_Metacall_Callback qbluetoothlocaldevice_metacall_callback = nullptr;
    QBluetoothLocalDevice_Event_Callback qbluetoothlocaldevice_event_callback = nullptr;
    QBluetoothLocalDevice_EventFilter_Callback qbluetoothlocaldevice_eventfilter_callback = nullptr;
    QBluetoothLocalDevice_TimerEvent_Callback qbluetoothlocaldevice_timerevent_callback = nullptr;
    QBluetoothLocalDevice_ChildEvent_Callback qbluetoothlocaldevice_childevent_callback = nullptr;
    QBluetoothLocalDevice_CustomEvent_Callback qbluetoothlocaldevice_customevent_callback = nullptr;
    QBluetoothLocalDevice_ConnectNotify_Callback qbluetoothlocaldevice_connectnotify_callback = nullptr;
    QBluetoothLocalDevice_DisconnectNotify_Callback qbluetoothlocaldevice_disconnectnotify_callback = nullptr;
    QBluetoothLocalDevice_Sender_Callback qbluetoothlocaldevice_sender_callback = nullptr;
    QBluetoothLocalDevice_SenderSignalIndex_Callback qbluetoothlocaldevice_sendersignalindex_callback = nullptr;
    QBluetoothLocalDevice_Receivers_Callback qbluetoothlocaldevice_receivers_callback = nullptr;
    QBluetoothLocalDevice_IsSignalConnected_Callback qbluetoothlocaldevice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbluetoothlocaldevice_metaobject_isbase = false;
    mutable bool qbluetoothlocaldevice_metacast_isbase = false;
    mutable bool qbluetoothlocaldevice_metacall_isbase = false;
    mutable bool qbluetoothlocaldevice_event_isbase = false;
    mutable bool qbluetoothlocaldevice_eventfilter_isbase = false;
    mutable bool qbluetoothlocaldevice_timerevent_isbase = false;
    mutable bool qbluetoothlocaldevice_childevent_isbase = false;
    mutable bool qbluetoothlocaldevice_customevent_isbase = false;
    mutable bool qbluetoothlocaldevice_connectnotify_isbase = false;
    mutable bool qbluetoothlocaldevice_disconnectnotify_isbase = false;
    mutable bool qbluetoothlocaldevice_sender_isbase = false;
    mutable bool qbluetoothlocaldevice_sendersignalindex_isbase = false;
    mutable bool qbluetoothlocaldevice_receivers_isbase = false;
    mutable bool qbluetoothlocaldevice_issignalconnected_isbase = false;

  public:
    VirtualQBluetoothLocalDevice() : QBluetoothLocalDevice() {};
    VirtualQBluetoothLocalDevice(const QBluetoothAddress& address) : QBluetoothLocalDevice(address) {};
    VirtualQBluetoothLocalDevice(QObject* parent) : QBluetoothLocalDevice(parent) {};
    VirtualQBluetoothLocalDevice(const QBluetoothAddress& address, QObject* parent) : QBluetoothLocalDevice(address, parent) {};

    // Callback setters
    inline void setQBluetoothLocalDevice_MetaObject_Callback(QBluetoothLocalDevice_MetaObject_Callback cb) { qbluetoothlocaldevice_metaobject_callback = cb; }
    inline void setQBluetoothLocalDevice_Metacast_Callback(QBluetoothLocalDevice_Metacast_Callback cb) { qbluetoothlocaldevice_metacast_callback = cb; }
    inline void setQBluetoothLocalDevice_Metacall_Callback(QBluetoothLocalDevice_Metacall_Callback cb) { qbluetoothlocaldevice_metacall_callback = cb; }
    inline void setQBluetoothLocalDevice_Event_Callback(QBluetoothLocalDevice_Event_Callback cb) { qbluetoothlocaldevice_event_callback = cb; }
    inline void setQBluetoothLocalDevice_EventFilter_Callback(QBluetoothLocalDevice_EventFilter_Callback cb) { qbluetoothlocaldevice_eventfilter_callback = cb; }
    inline void setQBluetoothLocalDevice_TimerEvent_Callback(QBluetoothLocalDevice_TimerEvent_Callback cb) { qbluetoothlocaldevice_timerevent_callback = cb; }
    inline void setQBluetoothLocalDevice_ChildEvent_Callback(QBluetoothLocalDevice_ChildEvent_Callback cb) { qbluetoothlocaldevice_childevent_callback = cb; }
    inline void setQBluetoothLocalDevice_CustomEvent_Callback(QBluetoothLocalDevice_CustomEvent_Callback cb) { qbluetoothlocaldevice_customevent_callback = cb; }
    inline void setQBluetoothLocalDevice_ConnectNotify_Callback(QBluetoothLocalDevice_ConnectNotify_Callback cb) { qbluetoothlocaldevice_connectnotify_callback = cb; }
    inline void setQBluetoothLocalDevice_DisconnectNotify_Callback(QBluetoothLocalDevice_DisconnectNotify_Callback cb) { qbluetoothlocaldevice_disconnectnotify_callback = cb; }
    inline void setQBluetoothLocalDevice_Sender_Callback(QBluetoothLocalDevice_Sender_Callback cb) { qbluetoothlocaldevice_sender_callback = cb; }
    inline void setQBluetoothLocalDevice_SenderSignalIndex_Callback(QBluetoothLocalDevice_SenderSignalIndex_Callback cb) { qbluetoothlocaldevice_sendersignalindex_callback = cb; }
    inline void setQBluetoothLocalDevice_Receivers_Callback(QBluetoothLocalDevice_Receivers_Callback cb) { qbluetoothlocaldevice_receivers_callback = cb; }
    inline void setQBluetoothLocalDevice_IsSignalConnected_Callback(QBluetoothLocalDevice_IsSignalConnected_Callback cb) { qbluetoothlocaldevice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBluetoothLocalDevice_MetaObject_IsBase(bool value) const { qbluetoothlocaldevice_metaobject_isbase = value; }
    inline void setQBluetoothLocalDevice_Metacast_IsBase(bool value) const { qbluetoothlocaldevice_metacast_isbase = value; }
    inline void setQBluetoothLocalDevice_Metacall_IsBase(bool value) const { qbluetoothlocaldevice_metacall_isbase = value; }
    inline void setQBluetoothLocalDevice_Event_IsBase(bool value) const { qbluetoothlocaldevice_event_isbase = value; }
    inline void setQBluetoothLocalDevice_EventFilter_IsBase(bool value) const { qbluetoothlocaldevice_eventfilter_isbase = value; }
    inline void setQBluetoothLocalDevice_TimerEvent_IsBase(bool value) const { qbluetoothlocaldevice_timerevent_isbase = value; }
    inline void setQBluetoothLocalDevice_ChildEvent_IsBase(bool value) const { qbluetoothlocaldevice_childevent_isbase = value; }
    inline void setQBluetoothLocalDevice_CustomEvent_IsBase(bool value) const { qbluetoothlocaldevice_customevent_isbase = value; }
    inline void setQBluetoothLocalDevice_ConnectNotify_IsBase(bool value) const { qbluetoothlocaldevice_connectnotify_isbase = value; }
    inline void setQBluetoothLocalDevice_DisconnectNotify_IsBase(bool value) const { qbluetoothlocaldevice_disconnectnotify_isbase = value; }
    inline void setQBluetoothLocalDevice_Sender_IsBase(bool value) const { qbluetoothlocaldevice_sender_isbase = value; }
    inline void setQBluetoothLocalDevice_SenderSignalIndex_IsBase(bool value) const { qbluetoothlocaldevice_sendersignalindex_isbase = value; }
    inline void setQBluetoothLocalDevice_Receivers_IsBase(bool value) const { qbluetoothlocaldevice_receivers_isbase = value; }
    inline void setQBluetoothLocalDevice_IsSignalConnected_IsBase(bool value) const { qbluetoothlocaldevice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothlocaldevice_metaobject_isbase) {
            qbluetoothlocaldevice_metaobject_isbase = false;
            return QBluetoothLocalDevice::metaObject();
        }
        auto metaobject_cb = qbluetoothlocaldevice_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBluetoothLocalDevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothlocaldevice_metacast_isbase) {
            qbluetoothlocaldevice_metacast_isbase = false;
            return QBluetoothLocalDevice::qt_metacast(param1);
        }
        auto metacast_cb = qbluetoothlocaldevice_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothLocalDevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothlocaldevice_metacall_isbase) {
            qbluetoothlocaldevice_metacall_isbase = false;
            return QBluetoothLocalDevice::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbluetoothlocaldevice_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothLocalDevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothlocaldevice_event_isbase) {
            qbluetoothlocaldevice_event_isbase = false;
            return QBluetoothLocalDevice::event(event);
        }
        auto event_cb = qbluetoothlocaldevice_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothLocalDevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothlocaldevice_eventfilter_isbase) {
            qbluetoothlocaldevice_eventfilter_isbase = false;
            return QBluetoothLocalDevice::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbluetoothlocaldevice_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothLocalDevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothlocaldevice_timerevent_isbase) {
            qbluetoothlocaldevice_timerevent_isbase = false;
            QBluetoothLocalDevice::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbluetoothlocaldevice_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothlocaldevice_childevent_isbase) {
            qbluetoothlocaldevice_childevent_isbase = false;
            QBluetoothLocalDevice::childEvent(event);
            return;
        }
        auto childevent_cb = qbluetoothlocaldevice_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothlocaldevice_customevent_isbase) {
            qbluetoothlocaldevice_customevent_isbase = false;
            QBluetoothLocalDevice::customEvent(event);
            return;
        }
        auto customevent_cb = qbluetoothlocaldevice_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothlocaldevice_connectnotify_isbase) {
            qbluetoothlocaldevice_connectnotify_isbase = false;
            QBluetoothLocalDevice::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbluetoothlocaldevice_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothlocaldevice_disconnectnotify_isbase) {
            qbluetoothlocaldevice_disconnectnotify_isbase = false;
            QBluetoothLocalDevice::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbluetoothlocaldevice_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbluetoothlocaldevice_sender_isbase) {
            qbluetoothlocaldevice_sender_isbase = false;
            return QBluetoothLocalDevice::sender();
        }
        auto sender_cb = qbluetoothlocaldevice_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBluetoothLocalDevice::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbluetoothlocaldevice_sendersignalindex_isbase) {
            qbluetoothlocaldevice_sendersignalindex_isbase = false;
            return QBluetoothLocalDevice::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbluetoothlocaldevice_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBluetoothLocalDevice::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbluetoothlocaldevice_receivers_isbase) {
            qbluetoothlocaldevice_receivers_isbase = false;
            return QBluetoothLocalDevice::receivers(signal);
        }
        auto receivers_cb = qbluetoothlocaldevice_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothLocalDevice::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbluetoothlocaldevice_issignalconnected_isbase) {
            qbluetoothlocaldevice_issignalconnected_isbase = false;
            return QBluetoothLocalDevice::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbluetoothlocaldevice_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothLocalDevice::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBluetoothLocalDevice_TimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event);
    friend void QBluetoothLocalDevice_SuperTimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event);
    friend void QBluetoothLocalDevice_ChildEvent(QBluetoothLocalDevice* self, QChildEvent* event);
    friend void QBluetoothLocalDevice_SuperChildEvent(QBluetoothLocalDevice* self, QChildEvent* event);
    friend void QBluetoothLocalDevice_CustomEvent(QBluetoothLocalDevice* self, QEvent* event);
    friend void QBluetoothLocalDevice_SuperCustomEvent(QBluetoothLocalDevice* self, QEvent* event);
    friend void QBluetoothLocalDevice_ConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
    friend void QBluetoothLocalDevice_SuperConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
    friend void QBluetoothLocalDevice_DisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
    friend void QBluetoothLocalDevice_SuperDisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
    friend QObject* QBluetoothLocalDevice_Sender(const QBluetoothLocalDevice* self);
    friend QObject* QBluetoothLocalDevice_SuperSender(const QBluetoothLocalDevice* self);
    friend int QBluetoothLocalDevice_SenderSignalIndex(const QBluetoothLocalDevice* self);
    friend int QBluetoothLocalDevice_SuperSenderSignalIndex(const QBluetoothLocalDevice* self);
    friend int QBluetoothLocalDevice_Receivers(const QBluetoothLocalDevice* self, const char* signal);
    friend int QBluetoothLocalDevice_SuperReceivers(const QBluetoothLocalDevice* self, const char* signal);
    friend bool QBluetoothLocalDevice_IsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal);
    friend bool QBluetoothLocalDevice_SuperIsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal);
};

#endif
