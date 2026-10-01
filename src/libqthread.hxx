#pragma once
#ifndef LIBQTHREAD_HXX
#define LIBQTHREAD_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QThread
class VirtualQThread final : public QThread {
  public:
    // Virtual class public types (including callbacks and access types)
    using QThread_MetaObject_Callback = QMetaObject* (*)(const QThread*);
    using QThread_Metacast_Callback = void* (*)(QThread*, const char*);
    using QThread_Metacall_Callback = int (*)(QThread*, int, int, void**);
    using QThread_Event_Callback = bool (*)(QThread*, QEvent*);
    using QThread_Run_Callback = void (*)(QThread*);
    using QThread_EventFilter_Callback = bool (*)(QThread*, QObject*, QEvent*);
    using QThread_TimerEvent_Callback = void (*)(QThread*, QTimerEvent*);
    using QThread_ChildEvent_Callback = void (*)(QThread*, QChildEvent*);
    using QThread_CustomEvent_Callback = void (*)(QThread*, QEvent*);
    using QThread_ConnectNotify_Callback = void (*)(QThread*, QMetaMethod*);
    using QThread_DisconnectNotify_Callback = void (*)(QThread*, QMetaMethod*);
    using QThread::exec;
    using QThread::isSignalConnected;
    using QThread::receivers;
    using QThread::sender;
    using QThread::senderSignalIndex;
    using QThread::setTerminationEnabled;

    // Instance callback storage
    QThread_MetaObject_Callback qthread_metaobject_callback = nullptr;
    QThread_Metacast_Callback qthread_metacast_callback = nullptr;
    QThread_Metacall_Callback qthread_metacall_callback = nullptr;
    QThread_Event_Callback qthread_event_callback = nullptr;
    QThread_Run_Callback qthread_run_callback = nullptr;
    QThread_EventFilter_Callback qthread_eventfilter_callback = nullptr;
    QThread_TimerEvent_Callback qthread_timerevent_callback = nullptr;
    QThread_ChildEvent_Callback qthread_childevent_callback = nullptr;
    QThread_CustomEvent_Callback qthread_customevent_callback = nullptr;
    QThread_ConnectNotify_Callback qthread_connectnotify_callback = nullptr;
    QThread_DisconnectNotify_Callback qthread_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QThread {
        using QThread::childEvent;
        using QThread::connectNotify;
        using QThread::customEvent;
        using QThread::disconnectNotify;
        using QThread::run;
        using QThread::timerEvent;
    };

    VirtualQThread() : QThread() {};
    VirtualQThread(QObject* parent) : QThread(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qthread_metaobject_callback) {
            QMetaObject* callback_ret = qthread_metaobject_callback(this);
            return callback_ret;
        }
        return QThread::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qthread_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qthread_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QThread::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qthread_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qthread_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QThread::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qthread_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qthread_event_callback(this, cbval1);
            return callback_ret;
        }
        return QThread::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void run() override {
        if (qthread_run_callback) {
            qthread_run_callback(this);
            return;
        }
        QThread::run();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qthread_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qthread_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QThread::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qthread_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qthread_timerevent_callback(this, cbval1);
            return;
        }
        QThread::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qthread_childevent_callback) {
            QChildEvent* cbval1 = event;
            qthread_childevent_callback(this, cbval1);
            return;
        }
        QThread::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qthread_customevent_callback) {
            QEvent* cbval1 = event;
            qthread_customevent_callback(this, cbval1);
            return;
        }
        QThread::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qthread_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qthread_connectnotify_callback(this, cbval1);
            return;
        }
        QThread::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qthread_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qthread_disconnectnotify_callback(this, cbval1);
            return;
        }
        QThread::disconnectNotify(signal);
    }

    // Friend functions
    friend void QThread_SuperRun(QThread* self);
    friend void QThread_SuperTimerEvent(QThread* self, QTimerEvent* event);
    friend void QThread_SuperChildEvent(QThread* self, QChildEvent* event);
    friend void QThread_SuperCustomEvent(QThread* self, QEvent* event);
    friend void QThread_SuperConnectNotify(QThread* self, const QMetaMethod* signal);
    friend void QThread_SuperDisconnectNotify(QThread* self, const QMetaMethod* signal);
};

#endif
