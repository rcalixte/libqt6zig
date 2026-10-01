#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHDEVICEDISCOVERYAGENT_HXX
#define BLUETOOTH_LIBQBLUETOOTHDEVICEDISCOVERYAGENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothDeviceDiscoveryAgent
class VirtualQBluetoothDeviceDiscoveryAgent final : public QBluetoothDeviceDiscoveryAgent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBluetoothDeviceDiscoveryAgent_MetaObject_Callback = QMetaObject* (*)(const QBluetoothDeviceDiscoveryAgent*);
    using QBluetoothDeviceDiscoveryAgent_Metacast_Callback = void* (*)(QBluetoothDeviceDiscoveryAgent*, const char*);
    using QBluetoothDeviceDiscoveryAgent_Metacall_Callback = int (*)(QBluetoothDeviceDiscoveryAgent*, int, int, void**);
    using QBluetoothDeviceDiscoveryAgent_Event_Callback = bool (*)(QBluetoothDeviceDiscoveryAgent*, QEvent*);
    using QBluetoothDeviceDiscoveryAgent_EventFilter_Callback = bool (*)(QBluetoothDeviceDiscoveryAgent*, QObject*, QEvent*);
    using QBluetoothDeviceDiscoveryAgent_TimerEvent_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QTimerEvent*);
    using QBluetoothDeviceDiscoveryAgent_ChildEvent_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QChildEvent*);
    using QBluetoothDeviceDiscoveryAgent_CustomEvent_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QEvent*);
    using QBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback = void (*)(QBluetoothDeviceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothDeviceDiscoveryAgent::isSignalConnected;
    using QBluetoothDeviceDiscoveryAgent::receivers;
    using QBluetoothDeviceDiscoveryAgent::sender;
    using QBluetoothDeviceDiscoveryAgent::senderSignalIndex;

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

    // Access struct
    struct Base : QBluetoothDeviceDiscoveryAgent {
        using QBluetoothDeviceDiscoveryAgent::childEvent;
        using QBluetoothDeviceDiscoveryAgent::connectNotify;
        using QBluetoothDeviceDiscoveryAgent::customEvent;
        using QBluetoothDeviceDiscoveryAgent::disconnectNotify;
        using QBluetoothDeviceDiscoveryAgent::timerEvent;
    };

    VirtualQBluetoothDeviceDiscoveryAgent() : QBluetoothDeviceDiscoveryAgent() {};
    VirtualQBluetoothDeviceDiscoveryAgent(const QBluetoothAddress& deviceAdapter) : QBluetoothDeviceDiscoveryAgent(deviceAdapter) {};
    VirtualQBluetoothDeviceDiscoveryAgent(QObject* parent) : QBluetoothDeviceDiscoveryAgent(parent) {};
    VirtualQBluetoothDeviceDiscoveryAgent(const QBluetoothAddress& deviceAdapter, QObject* parent) : QBluetoothDeviceDiscoveryAgent(deviceAdapter, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothdevicediscoveryagent_metaobject_callback) {
            QMetaObject* callback_ret = qbluetoothdevicediscoveryagent_metaobject_callback(this);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothdevicediscoveryagent_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbluetoothdevicediscoveryagent_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothdevicediscoveryagent_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbluetoothdevicediscoveryagent_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothDeviceDiscoveryAgent::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothdevicediscoveryagent_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbluetoothdevicediscoveryagent_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothdevicediscoveryagent_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbluetoothdevicediscoveryagent_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothDeviceDiscoveryAgent::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothdevicediscoveryagent_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbluetoothdevicediscoveryagent_timerevent_callback(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothdevicediscoveryagent_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbluetoothdevicediscoveryagent_childevent_callback(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothdevicediscoveryagent_customevent_callback) {
            QEvent* cbval1 = event;
            qbluetoothdevicediscoveryagent_customevent_callback(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothdevicediscoveryagent_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothdevicediscoveryagent_connectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothdevicediscoveryagent_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothdevicediscoveryagent_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothDeviceDiscoveryAgent::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBluetoothDeviceDiscoveryAgent_SuperTimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_SuperChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_SuperCustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
    friend void QBluetoothDeviceDiscoveryAgent_SuperConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
};

#endif
