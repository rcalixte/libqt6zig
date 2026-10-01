#pragma once
#ifndef LIBQTIMER_HXX
#define LIBQTIMER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTimer
class VirtualQTimer final : public QTimer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTimer_MetaObject_Callback = QMetaObject* (*)(const QTimer*);
    using QTimer_Metacast_Callback = void* (*)(QTimer*, const char*);
    using QTimer_Metacall_Callback = int (*)(QTimer*, int, int, void**);
    using QTimer_TimerEvent_Callback = void (*)(QTimer*, QTimerEvent*);
    using QTimer_Event_Callback = bool (*)(QTimer*, QEvent*);
    using QTimer_EventFilter_Callback = bool (*)(QTimer*, QObject*, QEvent*);
    using QTimer_ChildEvent_Callback = void (*)(QTimer*, QChildEvent*);
    using QTimer_CustomEvent_Callback = void (*)(QTimer*, QEvent*);
    using QTimer_ConnectNotify_Callback = void (*)(QTimer*, QMetaMethod*);
    using QTimer_DisconnectNotify_Callback = void (*)(QTimer*, QMetaMethod*);
    using QTimer::isSignalConnected;
    using QTimer::receivers;
    using QTimer::sender;
    using QTimer::senderSignalIndex;

    // Instance callback storage
    QTimer_MetaObject_Callback qtimer_metaobject_callback = nullptr;
    QTimer_Metacast_Callback qtimer_metacast_callback = nullptr;
    QTimer_Metacall_Callback qtimer_metacall_callback = nullptr;
    QTimer_TimerEvent_Callback qtimer_timerevent_callback = nullptr;
    QTimer_Event_Callback qtimer_event_callback = nullptr;
    QTimer_EventFilter_Callback qtimer_eventfilter_callback = nullptr;
    QTimer_ChildEvent_Callback qtimer_childevent_callback = nullptr;
    QTimer_CustomEvent_Callback qtimer_customevent_callback = nullptr;
    QTimer_ConnectNotify_Callback qtimer_connectnotify_callback = nullptr;
    QTimer_DisconnectNotify_Callback qtimer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTimer {
        using QTimer::childEvent;
        using QTimer::connectNotify;
        using QTimer::customEvent;
        using QTimer::disconnectNotify;
        using QTimer::timerEvent;
    };

    VirtualQTimer() : QTimer() {};
    VirtualQTimer(QObject* parent) : QTimer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtimer_metaobject_callback) {
            QMetaObject* callback_ret = qtimer_metaobject_callback(this);
            return callback_ret;
        }
        return QTimer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtimer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtimer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTimer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtimer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTimer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qtimer_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qtimer_timerevent_callback(this, cbval1);
            return;
        }
        QTimer::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtimer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTimer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtimer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTimer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtimer_childevent_callback(this, cbval1);
            return;
        }
        QTimer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimer_customevent_callback) {
            QEvent* cbval1 = event;
            qtimer_customevent_callback(this, cbval1);
            return;
        }
        QTimer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtimer_connectnotify_callback(this, cbval1);
            return;
        }
        QTimer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtimer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTimer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTimer_SuperTimerEvent(QTimer* self, QTimerEvent* param1);
    friend void QTimer_SuperChildEvent(QTimer* self, QChildEvent* event);
    friend void QTimer_SuperCustomEvent(QTimer* self, QEvent* event);
    friend void QTimer_SuperConnectNotify(QTimer* self, const QMetaMethod* signal);
    friend void QTimer_SuperDisconnectNotify(QTimer* self, const QMetaMethod* signal);
};

#endif
