#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKDIRWATCH_HXX
#define EXTRAS_KCOREADDONS_LIBKDIRWATCH_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirWatch
class VirtualKDirWatch final : public KDirWatch {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDirWatch_MetaObject_Callback = QMetaObject* (*)(const KDirWatch*);
    using KDirWatch_Metacast_Callback = void* (*)(KDirWatch*, const char*);
    using KDirWatch_Metacall_Callback = int (*)(KDirWatch*, int, int, void**);
    using KDirWatch_Event_Callback = bool (*)(KDirWatch*, QEvent*);
    using KDirWatch_EventFilter_Callback = bool (*)(KDirWatch*, QObject*, QEvent*);
    using KDirWatch_TimerEvent_Callback = void (*)(KDirWatch*, QTimerEvent*);
    using KDirWatch_ChildEvent_Callback = void (*)(KDirWatch*, QChildEvent*);
    using KDirWatch_CustomEvent_Callback = void (*)(KDirWatch*, QEvent*);
    using KDirWatch_ConnectNotify_Callback = void (*)(KDirWatch*, QMetaMethod*);
    using KDirWatch_DisconnectNotify_Callback = void (*)(KDirWatch*, QMetaMethod*);
    using KDirWatch::isSignalConnected;
    using KDirWatch::receivers;
    using KDirWatch::sender;
    using KDirWatch::senderSignalIndex;

    // Instance callback storage
    KDirWatch_MetaObject_Callback kdirwatch_metaobject_callback = nullptr;
    KDirWatch_Metacast_Callback kdirwatch_metacast_callback = nullptr;
    KDirWatch_Metacall_Callback kdirwatch_metacall_callback = nullptr;
    KDirWatch_Event_Callback kdirwatch_event_callback = nullptr;
    KDirWatch_EventFilter_Callback kdirwatch_eventfilter_callback = nullptr;
    KDirWatch_TimerEvent_Callback kdirwatch_timerevent_callback = nullptr;
    KDirWatch_ChildEvent_Callback kdirwatch_childevent_callback = nullptr;
    KDirWatch_CustomEvent_Callback kdirwatch_customevent_callback = nullptr;
    KDirWatch_ConnectNotify_Callback kdirwatch_connectnotify_callback = nullptr;
    KDirWatch_DisconnectNotify_Callback kdirwatch_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDirWatch {
        using KDirWatch::childEvent;
        using KDirWatch::connectNotify;
        using KDirWatch::customEvent;
        using KDirWatch::disconnectNotify;
        using KDirWatch::timerEvent;
    };

    VirtualKDirWatch() : KDirWatch() {};
    VirtualKDirWatch(QObject* parent) : KDirWatch(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdirwatch_metaobject_callback) {
            QMetaObject* callback_ret = kdirwatch_metaobject_callback(this);
            return callback_ret;
        }
        return KDirWatch::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdirwatch_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdirwatch_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDirWatch::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirwatch_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdirwatch_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDirWatch::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirwatch_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdirwatch_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDirWatch::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirwatch_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdirwatch_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirWatch::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirwatch_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdirwatch_timerevent_callback(this, cbval1);
            return;
        }
        KDirWatch::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirwatch_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdirwatch_childevent_callback(this, cbval1);
            return;
        }
        KDirWatch::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirwatch_customevent_callback) {
            QEvent* cbval1 = event;
            kdirwatch_customevent_callback(this, cbval1);
            return;
        }
        KDirWatch::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirwatch_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirwatch_connectnotify_callback(this, cbval1);
            return;
        }
        KDirWatch::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirwatch_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirwatch_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDirWatch::disconnectNotify(signal);
    }

    // Friend functions
    friend void KDirWatch_SuperTimerEvent(KDirWatch* self, QTimerEvent* event);
    friend void KDirWatch_SuperChildEvent(KDirWatch* self, QChildEvent* event);
    friend void KDirWatch_SuperCustomEvent(KDirWatch* self, QEvent* event);
    friend void KDirWatch_SuperConnectNotify(KDirWatch* self, const QMetaMethod* signal);
    friend void KDirWatch_SuperDisconnectNotify(KDirWatch* self, const QMetaMethod* signal);
};

#endif
