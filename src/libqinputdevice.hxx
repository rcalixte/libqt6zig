#pragma once
#ifndef LIBQINPUTDEVICE_HXX
#define LIBQINPUTDEVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputDevice
class VirtualQInputDevice final : public QInputDevice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QInputDevice_MetaObject_Callback = QMetaObject* (*)(const QInputDevice*);
    using QInputDevice_Metacast_Callback = void* (*)(QInputDevice*, const char*);
    using QInputDevice_Metacall_Callback = int (*)(QInputDevice*, int, int, void**);
    using QInputDevice_Event_Callback = bool (*)(QInputDevice*, QEvent*);
    using QInputDevice_EventFilter_Callback = bool (*)(QInputDevice*, QObject*, QEvent*);
    using QInputDevice_TimerEvent_Callback = void (*)(QInputDevice*, QTimerEvent*);
    using QInputDevice_ChildEvent_Callback = void (*)(QInputDevice*, QChildEvent*);
    using QInputDevice_CustomEvent_Callback = void (*)(QInputDevice*, QEvent*);
    using QInputDevice_ConnectNotify_Callback = void (*)(QInputDevice*, QMetaMethod*);
    using QInputDevice_DisconnectNotify_Callback = void (*)(QInputDevice*, QMetaMethod*);
    using QInputDevice::isSignalConnected;
    using QInputDevice::receivers;
    using QInputDevice::sender;
    using QInputDevice::senderSignalIndex;

    // Instance callback storage
    QInputDevice_MetaObject_Callback qinputdevice_metaobject_callback = nullptr;
    QInputDevice_Metacast_Callback qinputdevice_metacast_callback = nullptr;
    QInputDevice_Metacall_Callback qinputdevice_metacall_callback = nullptr;
    QInputDevice_Event_Callback qinputdevice_event_callback = nullptr;
    QInputDevice_EventFilter_Callback qinputdevice_eventfilter_callback = nullptr;
    QInputDevice_TimerEvent_Callback qinputdevice_timerevent_callback = nullptr;
    QInputDevice_ChildEvent_Callback qinputdevice_childevent_callback = nullptr;
    QInputDevice_CustomEvent_Callback qinputdevice_customevent_callback = nullptr;
    QInputDevice_ConnectNotify_Callback qinputdevice_connectnotify_callback = nullptr;
    QInputDevice_DisconnectNotify_Callback qinputdevice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QInputDevice {
        using QInputDevice::childEvent;
        using QInputDevice::connectNotify;
        using QInputDevice::customEvent;
        using QInputDevice::disconnectNotify;
        using QInputDevice::timerEvent;
    };

    VirtualQInputDevice() : QInputDevice() {};
    VirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType typeVal) : QInputDevice(name, systemId, typeVal) {};
    VirtualQInputDevice(QObject* parent) : QInputDevice(parent) {};
    VirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType typeVal, const QString& seatName) : QInputDevice(name, systemId, typeVal, seatName) {};
    VirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType typeVal, const QString& seatName, QObject* parent) : QInputDevice(name, systemId, typeVal, seatName, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qinputdevice_metaobject_callback) {
            QMetaObject* callback_ret = qinputdevice_metaobject_callback(this);
            return callback_ret;
        }
        return QInputDevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qinputdevice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qinputdevice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QInputDevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qinputdevice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qinputdevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QInputDevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qinputdevice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qinputdevice_event_callback(this, cbval1);
            return callback_ret;
        }
        return QInputDevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qinputdevice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qinputdevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QInputDevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qinputdevice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qinputdevice_timerevent_callback(this, cbval1);
            return;
        }
        QInputDevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qinputdevice_childevent_callback) {
            QChildEvent* cbval1 = event;
            qinputdevice_childevent_callback(this, cbval1);
            return;
        }
        QInputDevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qinputdevice_customevent_callback) {
            QEvent* cbval1 = event;
            qinputdevice_customevent_callback(this, cbval1);
            return;
        }
        QInputDevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qinputdevice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qinputdevice_connectnotify_callback(this, cbval1);
            return;
        }
        QInputDevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qinputdevice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qinputdevice_disconnectnotify_callback(this, cbval1);
            return;
        }
        QInputDevice::disconnectNotify(signal);
    }

    // Friend functions
    friend void QInputDevice_SuperTimerEvent(QInputDevice* self, QTimerEvent* event);
    friend void QInputDevice_SuperChildEvent(QInputDevice* self, QChildEvent* event);
    friend void QInputDevice_SuperCustomEvent(QInputDevice* self, QEvent* event);
    friend void QInputDevice_SuperConnectNotify(QInputDevice* self, const QMetaMethod* signal);
    friend void QInputDevice_SuperDisconnectNotify(QInputDevice* self, const QMetaMethod* signal);
};

#endif
