#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKMODIFIERKEYINFO_HXX
#define EXTRAS_KGUIADDONS_LIBKMODIFIERKEYINFO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KModifierKeyInfo
class VirtualKModifierKeyInfo final : public KModifierKeyInfo {
  public:
    // Virtual class public types (including callbacks and access types)
    using KModifierKeyInfo_MetaObject_Callback = QMetaObject* (*)(const KModifierKeyInfo*);
    using KModifierKeyInfo_Metacast_Callback = void* (*)(KModifierKeyInfo*, const char*);
    using KModifierKeyInfo_Metacall_Callback = int (*)(KModifierKeyInfo*, int, int, void**);
    using KModifierKeyInfo_Event_Callback = bool (*)(KModifierKeyInfo*, QEvent*);
    using KModifierKeyInfo_EventFilter_Callback = bool (*)(KModifierKeyInfo*, QObject*, QEvent*);
    using KModifierKeyInfo_TimerEvent_Callback = void (*)(KModifierKeyInfo*, QTimerEvent*);
    using KModifierKeyInfo_ChildEvent_Callback = void (*)(KModifierKeyInfo*, QChildEvent*);
    using KModifierKeyInfo_CustomEvent_Callback = void (*)(KModifierKeyInfo*, QEvent*);
    using KModifierKeyInfo_ConnectNotify_Callback = void (*)(KModifierKeyInfo*, QMetaMethod*);
    using KModifierKeyInfo_DisconnectNotify_Callback = void (*)(KModifierKeyInfo*, QMetaMethod*);
    using KModifierKeyInfo::isSignalConnected;
    using KModifierKeyInfo::receivers;
    using KModifierKeyInfo::sender;
    using KModifierKeyInfo::senderSignalIndex;

    // Instance callback storage
    KModifierKeyInfo_MetaObject_Callback kmodifierkeyinfo_metaobject_callback = nullptr;
    KModifierKeyInfo_Metacast_Callback kmodifierkeyinfo_metacast_callback = nullptr;
    KModifierKeyInfo_Metacall_Callback kmodifierkeyinfo_metacall_callback = nullptr;
    KModifierKeyInfo_Event_Callback kmodifierkeyinfo_event_callback = nullptr;
    KModifierKeyInfo_EventFilter_Callback kmodifierkeyinfo_eventfilter_callback = nullptr;
    KModifierKeyInfo_TimerEvent_Callback kmodifierkeyinfo_timerevent_callback = nullptr;
    KModifierKeyInfo_ChildEvent_Callback kmodifierkeyinfo_childevent_callback = nullptr;
    KModifierKeyInfo_CustomEvent_Callback kmodifierkeyinfo_customevent_callback = nullptr;
    KModifierKeyInfo_ConnectNotify_Callback kmodifierkeyinfo_connectnotify_callback = nullptr;
    KModifierKeyInfo_DisconnectNotify_Callback kmodifierkeyinfo_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KModifierKeyInfo {
        using KModifierKeyInfo::childEvent;
        using KModifierKeyInfo::connectNotify;
        using KModifierKeyInfo::customEvent;
        using KModifierKeyInfo::disconnectNotify;
        using KModifierKeyInfo::timerEvent;
    };

    VirtualKModifierKeyInfo() : KModifierKeyInfo() {};
    VirtualKModifierKeyInfo(QObject* parent) : KModifierKeyInfo(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmodifierkeyinfo_metaobject_callback) {
            QMetaObject* callback_ret = kmodifierkeyinfo_metaobject_callback(this);
            return callback_ret;
        }
        return KModifierKeyInfo::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmodifierkeyinfo_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmodifierkeyinfo_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfo::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodifierkeyinfo_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmodifierkeyinfo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KModifierKeyInfo::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodifierkeyinfo_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmodifierkeyinfo_event_callback(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfo::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodifierkeyinfo_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmodifierkeyinfo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfo::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodifierkeyinfo_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmodifierkeyinfo_timerevent_callback(this, cbval1);
            return;
        }
        KModifierKeyInfo::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodifierkeyinfo_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmodifierkeyinfo_childevent_callback(this, cbval1);
            return;
        }
        KModifierKeyInfo::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodifierkeyinfo_customevent_callback) {
            QEvent* cbval1 = event;
            kmodifierkeyinfo_customevent_callback(this, cbval1);
            return;
        }
        KModifierKeyInfo::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfo_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmodifierkeyinfo_connectnotify_callback(this, cbval1);
            return;
        }
        KModifierKeyInfo::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfo_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmodifierkeyinfo_disconnectnotify_callback(this, cbval1);
            return;
        }
        KModifierKeyInfo::disconnectNotify(signal);
    }

    // Friend functions
    friend void KModifierKeyInfo_SuperTimerEvent(KModifierKeyInfo* self, QTimerEvent* event);
    friend void KModifierKeyInfo_SuperChildEvent(KModifierKeyInfo* self, QChildEvent* event);
    friend void KModifierKeyInfo_SuperCustomEvent(KModifierKeyInfo* self, QEvent* event);
    friend void KModifierKeyInfo_SuperConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
    friend void KModifierKeyInfo_SuperDisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
};

#endif
