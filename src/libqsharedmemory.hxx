#pragma once
#ifndef LIBQSHAREDMEMORY_HXX
#define LIBQSHAREDMEMORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSharedMemory
class VirtualQSharedMemory final : public QSharedMemory {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSharedMemory_MetaObject_Callback = QMetaObject* (*)(const QSharedMemory*);
    using QSharedMemory_Metacast_Callback = void* (*)(QSharedMemory*, const char*);
    using QSharedMemory_Metacall_Callback = int (*)(QSharedMemory*, int, int, void**);
    using QSharedMemory_Event_Callback = bool (*)(QSharedMemory*, QEvent*);
    using QSharedMemory_EventFilter_Callback = bool (*)(QSharedMemory*, QObject*, QEvent*);
    using QSharedMemory_TimerEvent_Callback = void (*)(QSharedMemory*, QTimerEvent*);
    using QSharedMemory_ChildEvent_Callback = void (*)(QSharedMemory*, QChildEvent*);
    using QSharedMemory_CustomEvent_Callback = void (*)(QSharedMemory*, QEvent*);
    using QSharedMemory_ConnectNotify_Callback = void (*)(QSharedMemory*, QMetaMethod*);
    using QSharedMemory_DisconnectNotify_Callback = void (*)(QSharedMemory*, QMetaMethod*);
    using QSharedMemory::isSignalConnected;
    using QSharedMemory::receivers;
    using QSharedMemory::sender;
    using QSharedMemory::senderSignalIndex;

    // Instance callback storage
    QSharedMemory_MetaObject_Callback qsharedmemory_metaobject_callback = nullptr;
    QSharedMemory_Metacast_Callback qsharedmemory_metacast_callback = nullptr;
    QSharedMemory_Metacall_Callback qsharedmemory_metacall_callback = nullptr;
    QSharedMemory_Event_Callback qsharedmemory_event_callback = nullptr;
    QSharedMemory_EventFilter_Callback qsharedmemory_eventfilter_callback = nullptr;
    QSharedMemory_TimerEvent_Callback qsharedmemory_timerevent_callback = nullptr;
    QSharedMemory_ChildEvent_Callback qsharedmemory_childevent_callback = nullptr;
    QSharedMemory_CustomEvent_Callback qsharedmemory_customevent_callback = nullptr;
    QSharedMemory_ConnectNotify_Callback qsharedmemory_connectnotify_callback = nullptr;
    QSharedMemory_DisconnectNotify_Callback qsharedmemory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSharedMemory {
        using QSharedMemory::childEvent;
        using QSharedMemory::connectNotify;
        using QSharedMemory::customEvent;
        using QSharedMemory::disconnectNotify;
        using QSharedMemory::timerEvent;
    };

    VirtualQSharedMemory() : QSharedMemory() {};
    VirtualQSharedMemory(const QNativeIpcKey& key) : QSharedMemory(key) {};
    VirtualQSharedMemory(const QString& key) : QSharedMemory(key) {};
    VirtualQSharedMemory(QObject* parent) : QSharedMemory(parent) {};
    VirtualQSharedMemory(const QNativeIpcKey& key, QObject* parent) : QSharedMemory(key, parent) {};
    VirtualQSharedMemory(const QString& key, QObject* parent) : QSharedMemory(key, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsharedmemory_metaobject_callback) {
            QMetaObject* callback_ret = qsharedmemory_metaobject_callback(this);
            return callback_ret;
        }
        return QSharedMemory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsharedmemory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsharedmemory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSharedMemory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsharedmemory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsharedmemory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSharedMemory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsharedmemory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsharedmemory_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSharedMemory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsharedmemory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsharedmemory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSharedMemory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsharedmemory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsharedmemory_timerevent_callback(this, cbval1);
            return;
        }
        QSharedMemory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsharedmemory_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsharedmemory_childevent_callback(this, cbval1);
            return;
        }
        QSharedMemory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsharedmemory_customevent_callback) {
            QEvent* cbval1 = event;
            qsharedmemory_customevent_callback(this, cbval1);
            return;
        }
        QSharedMemory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsharedmemory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsharedmemory_connectnotify_callback(this, cbval1);
            return;
        }
        QSharedMemory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsharedmemory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsharedmemory_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSharedMemory::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSharedMemory_SuperTimerEvent(QSharedMemory* self, QTimerEvent* event);
    friend void QSharedMemory_SuperChildEvent(QSharedMemory* self, QChildEvent* event);
    friend void QSharedMemory_SuperCustomEvent(QSharedMemory* self, QEvent* event);
    friend void QSharedMemory_SuperConnectNotify(QSharedMemory* self, const QMetaMethod* signal);
    friend void QSharedMemory_SuperDisconnectNotify(QSharedMemory* self, const QMetaMethod* signal);
};

#endif
