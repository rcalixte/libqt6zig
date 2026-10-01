#pragma once
#ifndef LIBQPOINTINGDEVICE_HXX
#define LIBQPOINTINGDEVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPointingDevice
class VirtualQPointingDevice final : public QPointingDevice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPointingDevice_MetaObject_Callback = QMetaObject* (*)(const QPointingDevice*);
    using QPointingDevice_Metacast_Callback = void* (*)(QPointingDevice*, const char*);
    using QPointingDevice_Metacall_Callback = int (*)(QPointingDevice*, int, int, void**);
    using QPointingDevice_Event_Callback = bool (*)(QPointingDevice*, QEvent*);
    using QPointingDevice_EventFilter_Callback = bool (*)(QPointingDevice*, QObject*, QEvent*);
    using QPointingDevice_TimerEvent_Callback = void (*)(QPointingDevice*, QTimerEvent*);
    using QPointingDevice_ChildEvent_Callback = void (*)(QPointingDevice*, QChildEvent*);
    using QPointingDevice_CustomEvent_Callback = void (*)(QPointingDevice*, QEvent*);
    using QPointingDevice_ConnectNotify_Callback = void (*)(QPointingDevice*, QMetaMethod*);
    using QPointingDevice_DisconnectNotify_Callback = void (*)(QPointingDevice*, QMetaMethod*);
    using QPointingDevice::isSignalConnected;
    using QPointingDevice::receivers;
    using QPointingDevice::sender;
    using QPointingDevice::senderSignalIndex;

    // Instance callback storage
    QPointingDevice_MetaObject_Callback qpointingdevice_metaobject_callback = nullptr;
    QPointingDevice_Metacast_Callback qpointingdevice_metacast_callback = nullptr;
    QPointingDevice_Metacall_Callback qpointingdevice_metacall_callback = nullptr;
    QPointingDevice_Event_Callback qpointingdevice_event_callback = nullptr;
    QPointingDevice_EventFilter_Callback qpointingdevice_eventfilter_callback = nullptr;
    QPointingDevice_TimerEvent_Callback qpointingdevice_timerevent_callback = nullptr;
    QPointingDevice_ChildEvent_Callback qpointingdevice_childevent_callback = nullptr;
    QPointingDevice_CustomEvent_Callback qpointingdevice_customevent_callback = nullptr;
    QPointingDevice_ConnectNotify_Callback qpointingdevice_connectnotify_callback = nullptr;
    QPointingDevice_DisconnectNotify_Callback qpointingdevice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPointingDevice {
        using QPointingDevice::childEvent;
        using QPointingDevice::connectNotify;
        using QPointingDevice::customEvent;
        using QPointingDevice::disconnectNotify;
        using QPointingDevice::timerEvent;
    };

    VirtualQPointingDevice() : QPointingDevice() {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount) {};
    VirtualQPointingDevice(QObject* parent) : QPointingDevice(parent) {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString& seatName) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName) {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString& seatName, QPointingDeviceUniqueId uniqueId) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId) {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString& seatName, QPointingDeviceUniqueId uniqueId, QObject* parent) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpointingdevice_metaobject_callback) {
            QMetaObject* callback_ret = qpointingdevice_metaobject_callback(this);
            return callback_ret;
        }
        return QPointingDevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpointingdevice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpointingdevice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPointingDevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpointingdevice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpointingdevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPointingDevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpointingdevice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpointingdevice_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPointingDevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpointingdevice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpointingdevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPointingDevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpointingdevice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpointingdevice_timerevent_callback(this, cbval1);
            return;
        }
        QPointingDevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpointingdevice_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpointingdevice_childevent_callback(this, cbval1);
            return;
        }
        QPointingDevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpointingdevice_customevent_callback) {
            QEvent* cbval1 = event;
            qpointingdevice_customevent_callback(this, cbval1);
            return;
        }
        QPointingDevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpointingdevice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpointingdevice_connectnotify_callback(this, cbval1);
            return;
        }
        QPointingDevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpointingdevice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpointingdevice_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPointingDevice::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPointingDevice_SuperTimerEvent(QPointingDevice* self, QTimerEvent* event);
    friend void QPointingDevice_SuperChildEvent(QPointingDevice* self, QChildEvent* event);
    friend void QPointingDevice_SuperCustomEvent(QPointingDevice* self, QEvent* event);
    friend void QPointingDevice_SuperConnectNotify(QPointingDevice* self, const QMetaMethod* signal);
    friend void QPointingDevice_SuperDisconnectNotify(QPointingDevice* self, const QMetaMethod* signal);
};

#endif
