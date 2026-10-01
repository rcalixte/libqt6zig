#pragma once
#ifndef FOSS_EXTRAS_KGLOBALACCEL_LIBKGLOBALSHORTCUTINFO_HXX
#define FOSS_EXTRAS_KGLOBALACCEL_LIBKGLOBALSHORTCUTINFO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KGlobalShortcutInfo
class VirtualKGlobalShortcutInfo final : public KGlobalShortcutInfo {
  public:
    // Virtual class public types (including callbacks and access types)
    using KGlobalShortcutInfo_MetaObject_Callback = QMetaObject* (*)(const KGlobalShortcutInfo*);
    using KGlobalShortcutInfo_Metacast_Callback = void* (*)(KGlobalShortcutInfo*, const char*);
    using KGlobalShortcutInfo_Metacall_Callback = int (*)(KGlobalShortcutInfo*, int, int, void**);
    using KGlobalShortcutInfo_Event_Callback = bool (*)(KGlobalShortcutInfo*, QEvent*);
    using KGlobalShortcutInfo_EventFilter_Callback = bool (*)(KGlobalShortcutInfo*, QObject*, QEvent*);
    using KGlobalShortcutInfo_TimerEvent_Callback = void (*)(KGlobalShortcutInfo*, QTimerEvent*);
    using KGlobalShortcutInfo_ChildEvent_Callback = void (*)(KGlobalShortcutInfo*, QChildEvent*);
    using KGlobalShortcutInfo_CustomEvent_Callback = void (*)(KGlobalShortcutInfo*, QEvent*);
    using KGlobalShortcutInfo_ConnectNotify_Callback = void (*)(KGlobalShortcutInfo*, QMetaMethod*);
    using KGlobalShortcutInfo_DisconnectNotify_Callback = void (*)(KGlobalShortcutInfo*, QMetaMethod*);
    using KGlobalShortcutInfo::isSignalConnected;
    using KGlobalShortcutInfo::receivers;
    using KGlobalShortcutInfo::sender;
    using KGlobalShortcutInfo::senderSignalIndex;

    // Instance callback storage
    KGlobalShortcutInfo_MetaObject_Callback kglobalshortcutinfo_metaobject_callback = nullptr;
    KGlobalShortcutInfo_Metacast_Callback kglobalshortcutinfo_metacast_callback = nullptr;
    KGlobalShortcutInfo_Metacall_Callback kglobalshortcutinfo_metacall_callback = nullptr;
    KGlobalShortcutInfo_Event_Callback kglobalshortcutinfo_event_callback = nullptr;
    KGlobalShortcutInfo_EventFilter_Callback kglobalshortcutinfo_eventfilter_callback = nullptr;
    KGlobalShortcutInfo_TimerEvent_Callback kglobalshortcutinfo_timerevent_callback = nullptr;
    KGlobalShortcutInfo_ChildEvent_Callback kglobalshortcutinfo_childevent_callback = nullptr;
    KGlobalShortcutInfo_CustomEvent_Callback kglobalshortcutinfo_customevent_callback = nullptr;
    KGlobalShortcutInfo_ConnectNotify_Callback kglobalshortcutinfo_connectnotify_callback = nullptr;
    KGlobalShortcutInfo_DisconnectNotify_Callback kglobalshortcutinfo_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KGlobalShortcutInfo {
        using KGlobalShortcutInfo::childEvent;
        using KGlobalShortcutInfo::connectNotify;
        using KGlobalShortcutInfo::customEvent;
        using KGlobalShortcutInfo::disconnectNotify;
        using KGlobalShortcutInfo::timerEvent;
    };

    VirtualKGlobalShortcutInfo() : KGlobalShortcutInfo() {};
    VirtualKGlobalShortcutInfo(const KGlobalShortcutInfo& rhs) : KGlobalShortcutInfo(rhs) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kglobalshortcutinfo_metaobject_callback) {
            QMetaObject* callback_ret = kglobalshortcutinfo_metaobject_callback(this);
            return callback_ret;
        }
        return KGlobalShortcutInfo::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kglobalshortcutinfo_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kglobalshortcutinfo_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KGlobalShortcutInfo::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kglobalshortcutinfo_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kglobalshortcutinfo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KGlobalShortcutInfo::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kglobalshortcutinfo_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kglobalshortcutinfo_event_callback(this, cbval1);
            return callback_ret;
        }
        return KGlobalShortcutInfo::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kglobalshortcutinfo_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kglobalshortcutinfo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KGlobalShortcutInfo::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kglobalshortcutinfo_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kglobalshortcutinfo_timerevent_callback(this, cbval1);
            return;
        }
        KGlobalShortcutInfo::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kglobalshortcutinfo_childevent_callback) {
            QChildEvent* cbval1 = event;
            kglobalshortcutinfo_childevent_callback(this, cbval1);
            return;
        }
        KGlobalShortcutInfo::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kglobalshortcutinfo_customevent_callback) {
            QEvent* cbval1 = event;
            kglobalshortcutinfo_customevent_callback(this, cbval1);
            return;
        }
        KGlobalShortcutInfo::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kglobalshortcutinfo_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kglobalshortcutinfo_connectnotify_callback(this, cbval1);
            return;
        }
        KGlobalShortcutInfo::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kglobalshortcutinfo_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kglobalshortcutinfo_disconnectnotify_callback(this, cbval1);
            return;
        }
        KGlobalShortcutInfo::disconnectNotify(signal);
    }

    // Friend functions
    friend void KGlobalShortcutInfo_SuperTimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event);
    friend void KGlobalShortcutInfo_SuperChildEvent(KGlobalShortcutInfo* self, QChildEvent* event);
    friend void KGlobalShortcutInfo_SuperCustomEvent(KGlobalShortcutInfo* self, QEvent* event);
    friend void KGlobalShortcutInfo_SuperConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
    friend void KGlobalShortcutInfo_SuperDisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
};

#endif
