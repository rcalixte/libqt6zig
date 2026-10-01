#pragma once
#ifndef EXTRAS_KSERVICE_LIBKSYCOCA_HXX
#define EXTRAS_KSERVICE_LIBKSYCOCA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSycoca
class VirtualKSycoca final : public KSycoca {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSycoca_MetaObject_Callback = QMetaObject* (*)(const KSycoca*);
    using KSycoca_Metacast_Callback = void* (*)(KSycoca*, const char*);
    using KSycoca_Metacall_Callback = int (*)(KSycoca*, int, int, void**);
    using KSycoca_IsBuilding_Callback = bool (*)(KSycoca*);
    using KSycoca_ConnectNotify_Callback = void (*)(KSycoca*, QMetaMethod*);
    using KSycoca_Event_Callback = bool (*)(KSycoca*, QEvent*);
    using KSycoca_EventFilter_Callback = bool (*)(KSycoca*, QObject*, QEvent*);
    using KSycoca_TimerEvent_Callback = void (*)(KSycoca*, QTimerEvent*);
    using KSycoca_ChildEvent_Callback = void (*)(KSycoca*, QChildEvent*);
    using KSycoca_CustomEvent_Callback = void (*)(KSycoca*, QEvent*);
    using KSycoca_DisconnectNotify_Callback = void (*)(KSycoca*, QMetaMethod*);
    using KSycoca::isSignalConnected;
    using KSycoca::receivers;
    using KSycoca::sender;
    using KSycoca::senderSignalIndex;

    // Instance callback storage
    KSycoca_MetaObject_Callback ksycoca_metaobject_callback = nullptr;
    KSycoca_Metacast_Callback ksycoca_metacast_callback = nullptr;
    KSycoca_Metacall_Callback ksycoca_metacall_callback = nullptr;
    KSycoca_IsBuilding_Callback ksycoca_isbuilding_callback = nullptr;
    KSycoca_ConnectNotify_Callback ksycoca_connectnotify_callback = nullptr;
    KSycoca_Event_Callback ksycoca_event_callback = nullptr;
    KSycoca_EventFilter_Callback ksycoca_eventfilter_callback = nullptr;
    KSycoca_TimerEvent_Callback ksycoca_timerevent_callback = nullptr;
    KSycoca_ChildEvent_Callback ksycoca_childevent_callback = nullptr;
    KSycoca_CustomEvent_Callback ksycoca_customevent_callback = nullptr;
    KSycoca_DisconnectNotify_Callback ksycoca_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSycoca {
        using KSycoca::childEvent;
        using KSycoca::connectNotify;
        using KSycoca::customEvent;
        using KSycoca::disconnectNotify;
        using KSycoca::timerEvent;
    };

    VirtualKSycoca() : KSycoca() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksycoca_metaobject_callback) {
            QMetaObject* callback_ret = ksycoca_metaobject_callback(this);
            return callback_ret;
        }
        return KSycoca::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksycoca_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksycoca_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSycoca::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksycoca_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksycoca_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSycoca::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBuilding() override {
        if (ksycoca_isbuilding_callback) {
            bool callback_ret = ksycoca_isbuilding_callback(this);
            return callback_ret;
        }
        return KSycoca::isBuilding();
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksycoca_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksycoca_connectnotify_callback(this, cbval1);
            return;
        }
        KSycoca::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksycoca_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksycoca_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSycoca::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksycoca_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksycoca_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSycoca::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksycoca_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksycoca_timerevent_callback(this, cbval1);
            return;
        }
        KSycoca::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksycoca_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksycoca_childevent_callback(this, cbval1);
            return;
        }
        KSycoca::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksycoca_customevent_callback) {
            QEvent* cbval1 = event;
            ksycoca_customevent_callback(this, cbval1);
            return;
        }
        KSycoca::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksycoca_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksycoca_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSycoca::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSycoca_SuperConnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_SuperTimerEvent(KSycoca* self, QTimerEvent* event);
    friend void KSycoca_SuperChildEvent(KSycoca* self, QChildEvent* event);
    friend void KSycoca_SuperCustomEvent(KSycoca* self, QEvent* event);
    friend void KSycoca_SuperDisconnectNotify(KSycoca* self, const QMetaMethod* signal);
};

#endif
