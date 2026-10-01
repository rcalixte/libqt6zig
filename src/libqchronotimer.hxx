#pragma once
#ifndef LIBQCHRONOTIMER_HXX
#define LIBQCHRONOTIMER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QChronoTimer
class VirtualQChronoTimer final : public QChronoTimer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QChronoTimer_MetaObject_Callback = QMetaObject* (*)(const QChronoTimer*);
    using QChronoTimer_Metacast_Callback = void* (*)(QChronoTimer*, const char*);
    using QChronoTimer_Metacall_Callback = int (*)(QChronoTimer*, int, int, void**);
    using QChronoTimer_TimerEvent_Callback = void (*)(QChronoTimer*, QTimerEvent*);
    using QChronoTimer_Event_Callback = bool (*)(QChronoTimer*, QEvent*);
    using QChronoTimer_EventFilter_Callback = bool (*)(QChronoTimer*, QObject*, QEvent*);
    using QChronoTimer_ChildEvent_Callback = void (*)(QChronoTimer*, QChildEvent*);
    using QChronoTimer_CustomEvent_Callback = void (*)(QChronoTimer*, QEvent*);
    using QChronoTimer_ConnectNotify_Callback = void (*)(QChronoTimer*, QMetaMethod*);
    using QChronoTimer_DisconnectNotify_Callback = void (*)(QChronoTimer*, QMetaMethod*);
    using QChronoTimer::isSignalConnected;
    using QChronoTimer::receivers;
    using QChronoTimer::sender;
    using QChronoTimer::senderSignalIndex;

    // Instance callback storage
    QChronoTimer_MetaObject_Callback qchronotimer_metaobject_callback = nullptr;
    QChronoTimer_Metacast_Callback qchronotimer_metacast_callback = nullptr;
    QChronoTimer_Metacall_Callback qchronotimer_metacall_callback = nullptr;
    QChronoTimer_TimerEvent_Callback qchronotimer_timerevent_callback = nullptr;
    QChronoTimer_Event_Callback qchronotimer_event_callback = nullptr;
    QChronoTimer_EventFilter_Callback qchronotimer_eventfilter_callback = nullptr;
    QChronoTimer_ChildEvent_Callback qchronotimer_childevent_callback = nullptr;
    QChronoTimer_CustomEvent_Callback qchronotimer_customevent_callback = nullptr;
    QChronoTimer_ConnectNotify_Callback qchronotimer_connectnotify_callback = nullptr;
    QChronoTimer_DisconnectNotify_Callback qchronotimer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QChronoTimer {
        using QChronoTimer::childEvent;
        using QChronoTimer::connectNotify;
        using QChronoTimer::customEvent;
        using QChronoTimer::disconnectNotify;
        using QChronoTimer::timerEvent;
    };

    VirtualQChronoTimer(std::chrono::nanoseconds nsec) : QChronoTimer(nsec) {};
    VirtualQChronoTimer() : QChronoTimer() {};
    VirtualQChronoTimer(std::chrono::nanoseconds nsec, QObject* parent) : QChronoTimer(nsec, parent) {};
    VirtualQChronoTimer(QObject* parent) : QChronoTimer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qchronotimer_metaobject_callback) {
            QMetaObject* callback_ret = qchronotimer_metaobject_callback(this);
            return callback_ret;
        }
        return QChronoTimer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qchronotimer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qchronotimer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QChronoTimer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchronotimer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qchronotimer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QChronoTimer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qchronotimer_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qchronotimer_timerevent_callback(this, cbval1);
            return;
        }
        QChronoTimer::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchronotimer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qchronotimer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QChronoTimer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qchronotimer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qchronotimer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChronoTimer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchronotimer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qchronotimer_childevent_callback(this, cbval1);
            return;
        }
        QChronoTimer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchronotimer_customevent_callback) {
            QEvent* cbval1 = event;
            qchronotimer_customevent_callback(this, cbval1);
            return;
        }
        QChronoTimer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchronotimer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qchronotimer_connectnotify_callback(this, cbval1);
            return;
        }
        QChronoTimer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchronotimer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qchronotimer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QChronoTimer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QChronoTimer_SuperTimerEvent(QChronoTimer* self, QTimerEvent* param1);
    friend void QChronoTimer_SuperChildEvent(QChronoTimer* self, QChildEvent* event);
    friend void QChronoTimer_SuperCustomEvent(QChronoTimer* self, QEvent* event);
    friend void QChronoTimer_SuperConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_SuperDisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
};

#endif
