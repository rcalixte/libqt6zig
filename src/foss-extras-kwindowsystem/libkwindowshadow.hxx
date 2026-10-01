#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKWINDOWSHADOW_HXX
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKWINDOWSHADOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowShadow
class VirtualKWindowShadow final : public KWindowShadow {
  public:
    // Virtual class public types (including callbacks and access types)
    using KWindowShadow_MetaObject_Callback = QMetaObject* (*)(const KWindowShadow*);
    using KWindowShadow_Metacast_Callback = void* (*)(KWindowShadow*, const char*);
    using KWindowShadow_Metacall_Callback = int (*)(KWindowShadow*, int, int, void**);
    using KWindowShadow_Event_Callback = bool (*)(KWindowShadow*, QEvent*);
    using KWindowShadow_EventFilter_Callback = bool (*)(KWindowShadow*, QObject*, QEvent*);
    using KWindowShadow_TimerEvent_Callback = void (*)(KWindowShadow*, QTimerEvent*);
    using KWindowShadow_ChildEvent_Callback = void (*)(KWindowShadow*, QChildEvent*);
    using KWindowShadow_CustomEvent_Callback = void (*)(KWindowShadow*, QEvent*);
    using KWindowShadow_ConnectNotify_Callback = void (*)(KWindowShadow*, QMetaMethod*);
    using KWindowShadow_DisconnectNotify_Callback = void (*)(KWindowShadow*, QMetaMethod*);
    using KWindowShadow::isSignalConnected;
    using KWindowShadow::receivers;
    using KWindowShadow::sender;
    using KWindowShadow::senderSignalIndex;

    // Instance callback storage
    KWindowShadow_MetaObject_Callback kwindowshadow_metaobject_callback = nullptr;
    KWindowShadow_Metacast_Callback kwindowshadow_metacast_callback = nullptr;
    KWindowShadow_Metacall_Callback kwindowshadow_metacall_callback = nullptr;
    KWindowShadow_Event_Callback kwindowshadow_event_callback = nullptr;
    KWindowShadow_EventFilter_Callback kwindowshadow_eventfilter_callback = nullptr;
    KWindowShadow_TimerEvent_Callback kwindowshadow_timerevent_callback = nullptr;
    KWindowShadow_ChildEvent_Callback kwindowshadow_childevent_callback = nullptr;
    KWindowShadow_CustomEvent_Callback kwindowshadow_customevent_callback = nullptr;
    KWindowShadow_ConnectNotify_Callback kwindowshadow_connectnotify_callback = nullptr;
    KWindowShadow_DisconnectNotify_Callback kwindowshadow_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KWindowShadow {
        using KWindowShadow::childEvent;
        using KWindowShadow::connectNotify;
        using KWindowShadow::customEvent;
        using KWindowShadow::disconnectNotify;
        using KWindowShadow::timerEvent;
    };

    VirtualKWindowShadow() : KWindowShadow() {};
    VirtualKWindowShadow(QObject* parent) : KWindowShadow(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwindowshadow_metaobject_callback) {
            QMetaObject* callback_ret = kwindowshadow_metaobject_callback(this);
            return callback_ret;
        }
        return KWindowShadow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwindowshadow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kwindowshadow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KWindowShadow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowshadow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kwindowshadow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWindowShadow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowshadow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kwindowshadow_event_callback(this, cbval1);
            return callback_ret;
        }
        return KWindowShadow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwindowshadow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kwindowshadow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KWindowShadow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwindowshadow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kwindowshadow_timerevent_callback(this, cbval1);
            return;
        }
        KWindowShadow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowshadow_childevent_callback) {
            QChildEvent* cbval1 = event;
            kwindowshadow_childevent_callback(this, cbval1);
            return;
        }
        KWindowShadow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowshadow_customevent_callback) {
            QEvent* cbval1 = event;
            kwindowshadow_customevent_callback(this, cbval1);
            return;
        }
        KWindowShadow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowshadow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwindowshadow_connectnotify_callback(this, cbval1);
            return;
        }
        KWindowShadow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowshadow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwindowshadow_disconnectnotify_callback(this, cbval1);
            return;
        }
        KWindowShadow::disconnectNotify(signal);
    }

    // Friend functions
    friend void KWindowShadow_SuperTimerEvent(KWindowShadow* self, QTimerEvent* event);
    friend void KWindowShadow_SuperChildEvent(KWindowShadow* self, QChildEvent* event);
    friend void KWindowShadow_SuperCustomEvent(KWindowShadow* self, QEvent* event);
    friend void KWindowShadow_SuperConnectNotify(KWindowShadow* self, const QMetaMethod* signal);
    friend void KWindowShadow_SuperDisconnectNotify(KWindowShadow* self, const QMetaMethod* signal);
};

#endif
