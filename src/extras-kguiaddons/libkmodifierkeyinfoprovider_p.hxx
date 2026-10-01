#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKMODIFIERKEYINFOPROVIDER_P_HXX
#define EXTRAS_KGUIADDONS_LIBKMODIFIERKEYINFOPROVIDER_P_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KModifierKeyInfoProvider
class VirtualKModifierKeyInfoProvider final : public KModifierKeyInfoProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using KModifierKeyInfoProvider_MetaObject_Callback = QMetaObject* (*)(const KModifierKeyInfoProvider*);
    using KModifierKeyInfoProvider_Metacast_Callback = void* (*)(KModifierKeyInfoProvider*, const char*);
    using KModifierKeyInfoProvider_Metacall_Callback = int (*)(KModifierKeyInfoProvider*, int, int, void**);
    using KModifierKeyInfoProvider_SetKeyLatched_Callback = bool (*)(KModifierKeyInfoProvider*, int, bool);
    using KModifierKeyInfoProvider_SetKeyLocked_Callback = bool (*)(KModifierKeyInfoProvider*, int, bool);
    using KModifierKeyInfoProvider_Event_Callback = bool (*)(KModifierKeyInfoProvider*, QEvent*);
    using KModifierKeyInfoProvider_EventFilter_Callback = bool (*)(KModifierKeyInfoProvider*, QObject*, QEvent*);
    using KModifierKeyInfoProvider_TimerEvent_Callback = void (*)(KModifierKeyInfoProvider*, QTimerEvent*);
    using KModifierKeyInfoProvider_ChildEvent_Callback = void (*)(KModifierKeyInfoProvider*, QChildEvent*);
    using KModifierKeyInfoProvider_CustomEvent_Callback = void (*)(KModifierKeyInfoProvider*, QEvent*);
    using KModifierKeyInfoProvider_ConnectNotify_Callback = void (*)(KModifierKeyInfoProvider*, QMetaMethod*);
    using KModifierKeyInfoProvider_DisconnectNotify_Callback = void (*)(KModifierKeyInfoProvider*, QMetaMethod*);
    using KModifierKeyInfoProvider::isSignalConnected;
    using KModifierKeyInfoProvider::receivers;
    using KModifierKeyInfoProvider::sender;
    using KModifierKeyInfoProvider::senderSignalIndex;
    using KModifierKeyInfoProvider::stateUpdated;

    // Instance callback storage
    KModifierKeyInfoProvider_MetaObject_Callback kmodifierkeyinfoprovider_metaobject_callback = nullptr;
    KModifierKeyInfoProvider_Metacast_Callback kmodifierkeyinfoprovider_metacast_callback = nullptr;
    KModifierKeyInfoProvider_Metacall_Callback kmodifierkeyinfoprovider_metacall_callback = nullptr;
    KModifierKeyInfoProvider_SetKeyLatched_Callback kmodifierkeyinfoprovider_setkeylatched_callback = nullptr;
    KModifierKeyInfoProvider_SetKeyLocked_Callback kmodifierkeyinfoprovider_setkeylocked_callback = nullptr;
    KModifierKeyInfoProvider_Event_Callback kmodifierkeyinfoprovider_event_callback = nullptr;
    KModifierKeyInfoProvider_EventFilter_Callback kmodifierkeyinfoprovider_eventfilter_callback = nullptr;
    KModifierKeyInfoProvider_TimerEvent_Callback kmodifierkeyinfoprovider_timerevent_callback = nullptr;
    KModifierKeyInfoProvider_ChildEvent_Callback kmodifierkeyinfoprovider_childevent_callback = nullptr;
    KModifierKeyInfoProvider_CustomEvent_Callback kmodifierkeyinfoprovider_customevent_callback = nullptr;
    KModifierKeyInfoProvider_ConnectNotify_Callback kmodifierkeyinfoprovider_connectnotify_callback = nullptr;
    KModifierKeyInfoProvider_DisconnectNotify_Callback kmodifierkeyinfoprovider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KModifierKeyInfoProvider {
        using KModifierKeyInfoProvider::childEvent;
        using KModifierKeyInfoProvider::connectNotify;
        using KModifierKeyInfoProvider::customEvent;
        using KModifierKeyInfoProvider::disconnectNotify;
        using KModifierKeyInfoProvider::timerEvent;
    };

    VirtualKModifierKeyInfoProvider() : KModifierKeyInfoProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmodifierkeyinfoprovider_metaobject_callback) {
            QMetaObject* callback_ret = kmodifierkeyinfoprovider_metaobject_callback(this);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmodifierkeyinfoprovider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmodifierkeyinfoprovider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodifierkeyinfoprovider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmodifierkeyinfoprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KModifierKeyInfoProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setKeyLatched(Qt::Key key, bool latched) override {
        if (kmodifierkeyinfoprovider_setkeylatched_callback) {
            int cbval1 = static_cast<int>(key);
            bool cbval2 = latched;
            bool callback_ret = kmodifierkeyinfoprovider_setkeylatched_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::setKeyLatched(key, latched);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setKeyLocked(Qt::Key key, bool locked) override {
        if (kmodifierkeyinfoprovider_setkeylocked_callback) {
            int cbval1 = static_cast<int>(key);
            bool cbval2 = locked;
            bool callback_ret = kmodifierkeyinfoprovider_setkeylocked_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::setKeyLocked(key, locked);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodifierkeyinfoprovider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmodifierkeyinfoprovider_event_callback(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodifierkeyinfoprovider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmodifierkeyinfoprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodifierkeyinfoprovider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmodifierkeyinfoprovider_timerevent_callback(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodifierkeyinfoprovider_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmodifierkeyinfoprovider_childevent_callback(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodifierkeyinfoprovider_customevent_callback) {
            QEvent* cbval1 = event;
            kmodifierkeyinfoprovider_customevent_callback(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfoprovider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmodifierkeyinfoprovider_connectnotify_callback(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfoprovider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmodifierkeyinfoprovider_disconnectnotify_callback(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::disconnectNotify(signal);
    }

    // Friend functions
    friend void KModifierKeyInfoProvider_SuperTimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event);
    friend void KModifierKeyInfoProvider_SuperChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event);
    friend void KModifierKeyInfoProvider_SuperCustomEvent(KModifierKeyInfoProvider* self, QEvent* event);
    friend void KModifierKeyInfoProvider_SuperConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
    friend void KModifierKeyInfoProvider_SuperDisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
};

#endif
