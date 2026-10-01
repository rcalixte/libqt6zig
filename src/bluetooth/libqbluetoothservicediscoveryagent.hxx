#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHSERVICEDISCOVERYAGENT_HXX
#define BLUETOOTH_LIBQBLUETOOTHSERVICEDISCOVERYAGENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothServiceDiscoveryAgent
class VirtualQBluetoothServiceDiscoveryAgent final : public QBluetoothServiceDiscoveryAgent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBluetoothServiceDiscoveryAgent_MetaObject_Callback = QMetaObject* (*)(const QBluetoothServiceDiscoveryAgent*);
    using QBluetoothServiceDiscoveryAgent_Metacast_Callback = void* (*)(QBluetoothServiceDiscoveryAgent*, const char*);
    using QBluetoothServiceDiscoveryAgent_Metacall_Callback = int (*)(QBluetoothServiceDiscoveryAgent*, int, int, void**);
    using QBluetoothServiceDiscoveryAgent_Event_Callback = bool (*)(QBluetoothServiceDiscoveryAgent*, QEvent*);
    using QBluetoothServiceDiscoveryAgent_EventFilter_Callback = bool (*)(QBluetoothServiceDiscoveryAgent*, QObject*, QEvent*);
    using QBluetoothServiceDiscoveryAgent_TimerEvent_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QTimerEvent*);
    using QBluetoothServiceDiscoveryAgent_ChildEvent_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QChildEvent*);
    using QBluetoothServiceDiscoveryAgent_CustomEvent_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QEvent*);
    using QBluetoothServiceDiscoveryAgent_ConnectNotify_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback = void (*)(QBluetoothServiceDiscoveryAgent*, QMetaMethod*);
    using QBluetoothServiceDiscoveryAgent::isSignalConnected;
    using QBluetoothServiceDiscoveryAgent::receivers;
    using QBluetoothServiceDiscoveryAgent::sender;
    using QBluetoothServiceDiscoveryAgent::senderSignalIndex;

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

    // Access struct
    struct Base : QBluetoothServiceDiscoveryAgent {
        using QBluetoothServiceDiscoveryAgent::childEvent;
        using QBluetoothServiceDiscoveryAgent::connectNotify;
        using QBluetoothServiceDiscoveryAgent::customEvent;
        using QBluetoothServiceDiscoveryAgent::disconnectNotify;
        using QBluetoothServiceDiscoveryAgent::timerEvent;
    };

    VirtualQBluetoothServiceDiscoveryAgent() : QBluetoothServiceDiscoveryAgent() {};
    VirtualQBluetoothServiceDiscoveryAgent(const QBluetoothAddress& deviceAdapter) : QBluetoothServiceDiscoveryAgent(deviceAdapter) {};
    VirtualQBluetoothServiceDiscoveryAgent(QObject* parent) : QBluetoothServiceDiscoveryAgent(parent) {};
    VirtualQBluetoothServiceDiscoveryAgent(const QBluetoothAddress& deviceAdapter, QObject* parent) : QBluetoothServiceDiscoveryAgent(deviceAdapter, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothservicediscoveryagent_metaobject_callback) {
            QMetaObject* callback_ret = qbluetoothservicediscoveryagent_metaobject_callback(this);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothservicediscoveryagent_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbluetoothservicediscoveryagent_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothservicediscoveryagent_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbluetoothservicediscoveryagent_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothServiceDiscoveryAgent::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothservicediscoveryagent_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbluetoothservicediscoveryagent_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothservicediscoveryagent_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbluetoothservicediscoveryagent_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothServiceDiscoveryAgent::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothservicediscoveryagent_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbluetoothservicediscoveryagent_timerevent_callback(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothservicediscoveryagent_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbluetoothservicediscoveryagent_childevent_callback(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothservicediscoveryagent_customevent_callback) {
            QEvent* cbval1 = event;
            qbluetoothservicediscoveryagent_customevent_callback(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothservicediscoveryagent_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothservicediscoveryagent_connectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothservicediscoveryagent_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothservicediscoveryagent_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothServiceDiscoveryAgent::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBluetoothServiceDiscoveryAgent_SuperTimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_SuperChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_SuperCustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
    friend void QBluetoothServiceDiscoveryAgent_SuperConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
    friend void QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
};

#endif
