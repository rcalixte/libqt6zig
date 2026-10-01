#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSPENDINGCALL_HXX
#define POSIX_EXTRAS_DBUS_LIBQDBUSPENDINGCALL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusPendingCallWatcher
class VirtualQDBusPendingCallWatcher final : public QDBusPendingCallWatcher {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDBusPendingCallWatcher_MetaObject_Callback = QMetaObject* (*)(const QDBusPendingCallWatcher*);
    using QDBusPendingCallWatcher_Metacast_Callback = void* (*)(QDBusPendingCallWatcher*, const char*);
    using QDBusPendingCallWatcher_Metacall_Callback = int (*)(QDBusPendingCallWatcher*, int, int, void**);
    using QDBusPendingCallWatcher_Event_Callback = bool (*)(QDBusPendingCallWatcher*, QEvent*);
    using QDBusPendingCallWatcher_EventFilter_Callback = bool (*)(QDBusPendingCallWatcher*, QObject*, QEvent*);
    using QDBusPendingCallWatcher_TimerEvent_Callback = void (*)(QDBusPendingCallWatcher*, QTimerEvent*);
    using QDBusPendingCallWatcher_ChildEvent_Callback = void (*)(QDBusPendingCallWatcher*, QChildEvent*);
    using QDBusPendingCallWatcher_CustomEvent_Callback = void (*)(QDBusPendingCallWatcher*, QEvent*);
    using QDBusPendingCallWatcher_ConnectNotify_Callback = void (*)(QDBusPendingCallWatcher*, QMetaMethod*);
    using QDBusPendingCallWatcher_DisconnectNotify_Callback = void (*)(QDBusPendingCallWatcher*, QMetaMethod*);
    using QDBusPendingCallWatcher::isSignalConnected;
    using QDBusPendingCallWatcher::receivers;
    using QDBusPendingCallWatcher::sender;
    using QDBusPendingCallWatcher::senderSignalIndex;

    // Instance callback storage
    QDBusPendingCallWatcher_MetaObject_Callback qdbuspendingcallwatcher_metaobject_callback = nullptr;
    QDBusPendingCallWatcher_Metacast_Callback qdbuspendingcallwatcher_metacast_callback = nullptr;
    QDBusPendingCallWatcher_Metacall_Callback qdbuspendingcallwatcher_metacall_callback = nullptr;
    QDBusPendingCallWatcher_Event_Callback qdbuspendingcallwatcher_event_callback = nullptr;
    QDBusPendingCallWatcher_EventFilter_Callback qdbuspendingcallwatcher_eventfilter_callback = nullptr;
    QDBusPendingCallWatcher_TimerEvent_Callback qdbuspendingcallwatcher_timerevent_callback = nullptr;
    QDBusPendingCallWatcher_ChildEvent_Callback qdbuspendingcallwatcher_childevent_callback = nullptr;
    QDBusPendingCallWatcher_CustomEvent_Callback qdbuspendingcallwatcher_customevent_callback = nullptr;
    QDBusPendingCallWatcher_ConnectNotify_Callback qdbuspendingcallwatcher_connectnotify_callback = nullptr;
    QDBusPendingCallWatcher_DisconnectNotify_Callback qdbuspendingcallwatcher_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDBusPendingCallWatcher {
        using QDBusPendingCallWatcher::childEvent;
        using QDBusPendingCallWatcher::connectNotify;
        using QDBusPendingCallWatcher::customEvent;
        using QDBusPendingCallWatcher::disconnectNotify;
        using QDBusPendingCallWatcher::timerEvent;
    };

    VirtualQDBusPendingCallWatcher(const QDBusPendingCall& call) : QDBusPendingCallWatcher(call) {};
    VirtualQDBusPendingCallWatcher(const QDBusPendingCall& call, QObject* parent) : QDBusPendingCallWatcher(call, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbuspendingcallwatcher_metaobject_callback) {
            QMetaObject* callback_ret = qdbuspendingcallwatcher_metaobject_callback(this);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbuspendingcallwatcher_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdbuspendingcallwatcher_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbuspendingcallwatcher_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdbuspendingcallwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusPendingCallWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbuspendingcallwatcher_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdbuspendingcallwatcher_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbuspendingcallwatcher_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdbuspendingcallwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbuspendingcallwatcher_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdbuspendingcallwatcher_timerevent_callback(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbuspendingcallwatcher_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdbuspendingcallwatcher_childevent_callback(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbuspendingcallwatcher_customevent_callback) {
            QEvent* cbval1 = event;
            qdbuspendingcallwatcher_customevent_callback(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbuspendingcallwatcher_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbuspendingcallwatcher_connectnotify_callback(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbuspendingcallwatcher_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbuspendingcallwatcher_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDBusPendingCallWatcher_SuperTimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
    friend void QDBusPendingCallWatcher_SuperChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
    friend void QDBusPendingCallWatcher_SuperCustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
    friend void QDBusPendingCallWatcher_SuperConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_SuperDisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
};

#endif
