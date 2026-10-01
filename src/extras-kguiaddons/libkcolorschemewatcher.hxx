#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKCOLORSCHEMEWATCHER_HXX
#define EXTRAS_KGUIADDONS_LIBKCOLORSCHEMEWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorSchemeWatcher
class VirtualKColorSchemeWatcher final : public KColorSchemeWatcher {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColorSchemeWatcher_MetaObject_Callback = QMetaObject* (*)(const KColorSchemeWatcher*);
    using KColorSchemeWatcher_Metacast_Callback = void* (*)(KColorSchemeWatcher*, const char*);
    using KColorSchemeWatcher_Metacall_Callback = int (*)(KColorSchemeWatcher*, int, int, void**);
    using KColorSchemeWatcher_Event_Callback = bool (*)(KColorSchemeWatcher*, QEvent*);
    using KColorSchemeWatcher_EventFilter_Callback = bool (*)(KColorSchemeWatcher*, QObject*, QEvent*);
    using KColorSchemeWatcher_TimerEvent_Callback = void (*)(KColorSchemeWatcher*, QTimerEvent*);
    using KColorSchemeWatcher_ChildEvent_Callback = void (*)(KColorSchemeWatcher*, QChildEvent*);
    using KColorSchemeWatcher_CustomEvent_Callback = void (*)(KColorSchemeWatcher*, QEvent*);
    using KColorSchemeWatcher_ConnectNotify_Callback = void (*)(KColorSchemeWatcher*, QMetaMethod*);
    using KColorSchemeWatcher_DisconnectNotify_Callback = void (*)(KColorSchemeWatcher*, QMetaMethod*);
    using KColorSchemeWatcher::isSignalConnected;
    using KColorSchemeWatcher::receivers;
    using KColorSchemeWatcher::sender;
    using KColorSchemeWatcher::senderSignalIndex;

    // Instance callback storage
    KColorSchemeWatcher_MetaObject_Callback kcolorschemewatcher_metaobject_callback = nullptr;
    KColorSchemeWatcher_Metacast_Callback kcolorschemewatcher_metacast_callback = nullptr;
    KColorSchemeWatcher_Metacall_Callback kcolorschemewatcher_metacall_callback = nullptr;
    KColorSchemeWatcher_Event_Callback kcolorschemewatcher_event_callback = nullptr;
    KColorSchemeWatcher_EventFilter_Callback kcolorschemewatcher_eventfilter_callback = nullptr;
    KColorSchemeWatcher_TimerEvent_Callback kcolorschemewatcher_timerevent_callback = nullptr;
    KColorSchemeWatcher_ChildEvent_Callback kcolorschemewatcher_childevent_callback = nullptr;
    KColorSchemeWatcher_CustomEvent_Callback kcolorschemewatcher_customevent_callback = nullptr;
    KColorSchemeWatcher_ConnectNotify_Callback kcolorschemewatcher_connectnotify_callback = nullptr;
    KColorSchemeWatcher_DisconnectNotify_Callback kcolorschemewatcher_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColorSchemeWatcher {
        using KColorSchemeWatcher::childEvent;
        using KColorSchemeWatcher::connectNotify;
        using KColorSchemeWatcher::customEvent;
        using KColorSchemeWatcher::disconnectNotify;
        using KColorSchemeWatcher::timerEvent;
    };

    VirtualKColorSchemeWatcher() : KColorSchemeWatcher() {};
    VirtualKColorSchemeWatcher(QObject* parent) : KColorSchemeWatcher(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorschemewatcher_metaobject_callback) {
            QMetaObject* callback_ret = kcolorschemewatcher_metaobject_callback(this);
            return callback_ret;
        }
        return KColorSchemeWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorschemewatcher_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolorschemewatcher_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorschemewatcher_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolorschemewatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorschemewatcher_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcolorschemewatcher_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorschemewatcher_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolorschemewatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorSchemeWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorschemewatcher_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcolorschemewatcher_timerevent_callback(this, cbval1);
            return;
        }
        KColorSchemeWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorschemewatcher_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolorschemewatcher_childevent_callback(this, cbval1);
            return;
        }
        KColorSchemeWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorschemewatcher_customevent_callback) {
            QEvent* cbval1 = event;
            kcolorschemewatcher_customevent_callback(this, cbval1);
            return;
        }
        KColorSchemeWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorschemewatcher_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorschemewatcher_connectnotify_callback(this, cbval1);
            return;
        }
        KColorSchemeWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorschemewatcher_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorschemewatcher_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColorSchemeWatcher::disconnectNotify(signal);
    }

    // Friend functions
    friend void KColorSchemeWatcher_SuperTimerEvent(KColorSchemeWatcher* self, QTimerEvent* event);
    friend void KColorSchemeWatcher_SuperChildEvent(KColorSchemeWatcher* self, QChildEvent* event);
    friend void KColorSchemeWatcher_SuperCustomEvent(KColorSchemeWatcher* self, QEvent* event);
    friend void KColorSchemeWatcher_SuperConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
    friend void KColorSchemeWatcher_SuperDisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
};

#endif
