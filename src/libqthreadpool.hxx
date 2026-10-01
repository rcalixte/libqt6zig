#pragma once
#ifndef LIBQTHREADPOOL_HXX
#define LIBQTHREADPOOL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QThreadPool
class VirtualQThreadPool final : public QThreadPool {
  public:
    // Virtual class public types (including callbacks and access types)
    using QThreadPool_MetaObject_Callback = QMetaObject* (*)(const QThreadPool*);
    using QThreadPool_Metacast_Callback = void* (*)(QThreadPool*, const char*);
    using QThreadPool_Metacall_Callback = int (*)(QThreadPool*, int, int, void**);
    using QThreadPool_Event_Callback = bool (*)(QThreadPool*, QEvent*);
    using QThreadPool_EventFilter_Callback = bool (*)(QThreadPool*, QObject*, QEvent*);
    using QThreadPool_TimerEvent_Callback = void (*)(QThreadPool*, QTimerEvent*);
    using QThreadPool_ChildEvent_Callback = void (*)(QThreadPool*, QChildEvent*);
    using QThreadPool_CustomEvent_Callback = void (*)(QThreadPool*, QEvent*);
    using QThreadPool_ConnectNotify_Callback = void (*)(QThreadPool*, QMetaMethod*);
    using QThreadPool_DisconnectNotify_Callback = void (*)(QThreadPool*, QMetaMethod*);
    using QThreadPool::isSignalConnected;
    using QThreadPool::receivers;
    using QThreadPool::sender;
    using QThreadPool::senderSignalIndex;

    // Instance callback storage
    QThreadPool_MetaObject_Callback qthreadpool_metaobject_callback = nullptr;
    QThreadPool_Metacast_Callback qthreadpool_metacast_callback = nullptr;
    QThreadPool_Metacall_Callback qthreadpool_metacall_callback = nullptr;
    QThreadPool_Event_Callback qthreadpool_event_callback = nullptr;
    QThreadPool_EventFilter_Callback qthreadpool_eventfilter_callback = nullptr;
    QThreadPool_TimerEvent_Callback qthreadpool_timerevent_callback = nullptr;
    QThreadPool_ChildEvent_Callback qthreadpool_childevent_callback = nullptr;
    QThreadPool_CustomEvent_Callback qthreadpool_customevent_callback = nullptr;
    QThreadPool_ConnectNotify_Callback qthreadpool_connectnotify_callback = nullptr;
    QThreadPool_DisconnectNotify_Callback qthreadpool_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QThreadPool {
        using QThreadPool::childEvent;
        using QThreadPool::connectNotify;
        using QThreadPool::customEvent;
        using QThreadPool::disconnectNotify;
        using QThreadPool::timerEvent;
    };

    VirtualQThreadPool() : QThreadPool() {};
    VirtualQThreadPool(QObject* parent) : QThreadPool(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qthreadpool_metaobject_callback) {
            QMetaObject* callback_ret = qthreadpool_metaobject_callback(this);
            return callback_ret;
        }
        return QThreadPool::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qthreadpool_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qthreadpool_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QThreadPool::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qthreadpool_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qthreadpool_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QThreadPool::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qthreadpool_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qthreadpool_event_callback(this, cbval1);
            return callback_ret;
        }
        return QThreadPool::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qthreadpool_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qthreadpool_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QThreadPool::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qthreadpool_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qthreadpool_timerevent_callback(this, cbval1);
            return;
        }
        QThreadPool::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qthreadpool_childevent_callback) {
            QChildEvent* cbval1 = event;
            qthreadpool_childevent_callback(this, cbval1);
            return;
        }
        QThreadPool::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qthreadpool_customevent_callback) {
            QEvent* cbval1 = event;
            qthreadpool_customevent_callback(this, cbval1);
            return;
        }
        QThreadPool::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qthreadpool_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qthreadpool_connectnotify_callback(this, cbval1);
            return;
        }
        QThreadPool::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qthreadpool_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qthreadpool_disconnectnotify_callback(this, cbval1);
            return;
        }
        QThreadPool::disconnectNotify(signal);
    }

    // Friend functions
    friend void QThreadPool_SuperTimerEvent(QThreadPool* self, QTimerEvent* event);
    friend void QThreadPool_SuperChildEvent(QThreadPool* self, QChildEvent* event);
    friend void QThreadPool_SuperCustomEvent(QThreadPool* self, QEvent* event);
    friend void QThreadPool_SuperConnectNotify(QThreadPool* self, const QMetaMethod* signal);
    friend void QThreadPool_SuperDisconnectNotify(QThreadPool* self, const QMetaMethod* signal);
};

#endif
