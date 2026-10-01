#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHLOCALDEVICE_HXX
#define BLUETOOTH_LIBQBLUETOOTHLOCALDEVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothLocalDevice
class VirtualQBluetoothLocalDevice final : public QBluetoothLocalDevice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBluetoothLocalDevice_MetaObject_Callback = QMetaObject* (*)(const QBluetoothLocalDevice*);
    using QBluetoothLocalDevice_Metacast_Callback = void* (*)(QBluetoothLocalDevice*, const char*);
    using QBluetoothLocalDevice_Metacall_Callback = int (*)(QBluetoothLocalDevice*, int, int, void**);
    using QBluetoothLocalDevice_Event_Callback = bool (*)(QBluetoothLocalDevice*, QEvent*);
    using QBluetoothLocalDevice_EventFilter_Callback = bool (*)(QBluetoothLocalDevice*, QObject*, QEvent*);
    using QBluetoothLocalDevice_TimerEvent_Callback = void (*)(QBluetoothLocalDevice*, QTimerEvent*);
    using QBluetoothLocalDevice_ChildEvent_Callback = void (*)(QBluetoothLocalDevice*, QChildEvent*);
    using QBluetoothLocalDevice_CustomEvent_Callback = void (*)(QBluetoothLocalDevice*, QEvent*);
    using QBluetoothLocalDevice_ConnectNotify_Callback = void (*)(QBluetoothLocalDevice*, QMetaMethod*);
    using QBluetoothLocalDevice_DisconnectNotify_Callback = void (*)(QBluetoothLocalDevice*, QMetaMethod*);
    using QBluetoothLocalDevice::isSignalConnected;
    using QBluetoothLocalDevice::receivers;
    using QBluetoothLocalDevice::sender;
    using QBluetoothLocalDevice::senderSignalIndex;

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

    // Access struct
    struct Base : QBluetoothLocalDevice {
        using QBluetoothLocalDevice::childEvent;
        using QBluetoothLocalDevice::connectNotify;
        using QBluetoothLocalDevice::customEvent;
        using QBluetoothLocalDevice::disconnectNotify;
        using QBluetoothLocalDevice::timerEvent;
    };

    VirtualQBluetoothLocalDevice() : QBluetoothLocalDevice() {};
    VirtualQBluetoothLocalDevice(const QBluetoothAddress& address) : QBluetoothLocalDevice(address) {};
    VirtualQBluetoothLocalDevice(QObject* parent) : QBluetoothLocalDevice(parent) {};
    VirtualQBluetoothLocalDevice(const QBluetoothAddress& address, QObject* parent) : QBluetoothLocalDevice(address, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothlocaldevice_metaobject_callback) {
            QMetaObject* callback_ret = qbluetoothlocaldevice_metaobject_callback(this);
            return callback_ret;
        }
        return QBluetoothLocalDevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothlocaldevice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbluetoothlocaldevice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothLocalDevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothlocaldevice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbluetoothlocaldevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothLocalDevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothlocaldevice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbluetoothlocaldevice_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothLocalDevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothlocaldevice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbluetoothlocaldevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothLocalDevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothlocaldevice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbluetoothlocaldevice_timerevent_callback(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothlocaldevice_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbluetoothlocaldevice_childevent_callback(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothlocaldevice_customevent_callback) {
            QEvent* cbval1 = event;
            qbluetoothlocaldevice_customevent_callback(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothlocaldevice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothlocaldevice_connectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothlocaldevice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothlocaldevice_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothLocalDevice::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBluetoothLocalDevice_SuperTimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event);
    friend void QBluetoothLocalDevice_SuperChildEvent(QBluetoothLocalDevice* self, QChildEvent* event);
    friend void QBluetoothLocalDevice_SuperCustomEvent(QBluetoothLocalDevice* self, QEvent* event);
    friend void QBluetoothLocalDevice_SuperConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
    friend void QBluetoothLocalDevice_SuperDisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
};

#endif
