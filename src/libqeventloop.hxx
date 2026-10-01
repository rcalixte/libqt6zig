#pragma once
#ifndef LIBQEVENTLOOP_HXX
#define LIBQEVENTLOOP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QEventLoop
class VirtualQEventLoop final : public QEventLoop {
  public:
    // Virtual class public types (including callbacks and access types)
    using QEventLoop_MetaObject_Callback = QMetaObject* (*)(const QEventLoop*);
    using QEventLoop_Metacast_Callback = void* (*)(QEventLoop*, const char*);
    using QEventLoop_Metacall_Callback = int (*)(QEventLoop*, int, int, void**);
    using QEventLoop_Event_Callback = bool (*)(QEventLoop*, QEvent*);
    using QEventLoop_EventFilter_Callback = bool (*)(QEventLoop*, QObject*, QEvent*);
    using QEventLoop_TimerEvent_Callback = void (*)(QEventLoop*, QTimerEvent*);
    using QEventLoop_ChildEvent_Callback = void (*)(QEventLoop*, QChildEvent*);
    using QEventLoop_CustomEvent_Callback = void (*)(QEventLoop*, QEvent*);
    using QEventLoop_ConnectNotify_Callback = void (*)(QEventLoop*, QMetaMethod*);
    using QEventLoop_DisconnectNotify_Callback = void (*)(QEventLoop*, QMetaMethod*);
    using QEventLoop::isSignalConnected;
    using QEventLoop::receivers;
    using QEventLoop::sender;
    using QEventLoop::senderSignalIndex;

    // Instance callback storage
    QEventLoop_MetaObject_Callback qeventloop_metaobject_callback = nullptr;
    QEventLoop_Metacast_Callback qeventloop_metacast_callback = nullptr;
    QEventLoop_Metacall_Callback qeventloop_metacall_callback = nullptr;
    QEventLoop_Event_Callback qeventloop_event_callback = nullptr;
    QEventLoop_EventFilter_Callback qeventloop_eventfilter_callback = nullptr;
    QEventLoop_TimerEvent_Callback qeventloop_timerevent_callback = nullptr;
    QEventLoop_ChildEvent_Callback qeventloop_childevent_callback = nullptr;
    QEventLoop_CustomEvent_Callback qeventloop_customevent_callback = nullptr;
    QEventLoop_ConnectNotify_Callback qeventloop_connectnotify_callback = nullptr;
    QEventLoop_DisconnectNotify_Callback qeventloop_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QEventLoop {
        using QEventLoop::childEvent;
        using QEventLoop::connectNotify;
        using QEventLoop::customEvent;
        using QEventLoop::disconnectNotify;
        using QEventLoop::timerEvent;
    };

    VirtualQEventLoop() : QEventLoop() {};
    VirtualQEventLoop(QObject* parent) : QEventLoop(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qeventloop_metaobject_callback) {
            QMetaObject* callback_ret = qeventloop_metaobject_callback(this);
            return callback_ret;
        }
        return QEventLoop::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qeventloop_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qeventloop_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QEventLoop::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qeventloop_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qeventloop_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QEventLoop::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qeventloop_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qeventloop_event_callback(this, cbval1);
            return callback_ret;
        }
        return QEventLoop::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qeventloop_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qeventloop_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QEventLoop::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qeventloop_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qeventloop_timerevent_callback(this, cbval1);
            return;
        }
        QEventLoop::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qeventloop_childevent_callback) {
            QChildEvent* cbval1 = event;
            qeventloop_childevent_callback(this, cbval1);
            return;
        }
        QEventLoop::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qeventloop_customevent_callback) {
            QEvent* cbval1 = event;
            qeventloop_customevent_callback(this, cbval1);
            return;
        }
        QEventLoop::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qeventloop_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qeventloop_connectnotify_callback(this, cbval1);
            return;
        }
        QEventLoop::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qeventloop_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qeventloop_disconnectnotify_callback(this, cbval1);
            return;
        }
        QEventLoop::disconnectNotify(signal);
    }

    // Friend functions
    friend void QEventLoop_SuperTimerEvent(QEventLoop* self, QTimerEvent* event);
    friend void QEventLoop_SuperChildEvent(QEventLoop* self, QChildEvent* event);
    friend void QEventLoop_SuperCustomEvent(QEventLoop* self, QEvent* event);
    friend void QEventLoop_SuperConnectNotify(QEventLoop* self, const QMetaMethod* signal);
    friend void QEventLoop_SuperDisconnectNotify(QEventLoop* self, const QMetaMethod* signal);
};

#endif
