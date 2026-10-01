#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSTARTUPINFO_HXX
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSTARTUPINFO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KStartupInfo
class VirtualKStartupInfo final : public KStartupInfo {
  public:
    // Virtual class public types (including callbacks and access types)
    using KStartupInfo_MetaObject_Callback = QMetaObject* (*)(const KStartupInfo*);
    using KStartupInfo_Metacast_Callback = void* (*)(KStartupInfo*, const char*);
    using KStartupInfo_Metacall_Callback = int (*)(KStartupInfo*, int, int, void**);
    using KStartupInfo_CustomEvent_Callback = void (*)(KStartupInfo*, QEvent*);
    using KStartupInfo_Event_Callback = bool (*)(KStartupInfo*, QEvent*);
    using KStartupInfo_EventFilter_Callback = bool (*)(KStartupInfo*, QObject*, QEvent*);
    using KStartupInfo_TimerEvent_Callback = void (*)(KStartupInfo*, QTimerEvent*);
    using KStartupInfo_ChildEvent_Callback = void (*)(KStartupInfo*, QChildEvent*);
    using KStartupInfo_ConnectNotify_Callback = void (*)(KStartupInfo*, QMetaMethod*);
    using KStartupInfo_DisconnectNotify_Callback = void (*)(KStartupInfo*, QMetaMethod*);
    using KStartupInfo::isSignalConnected;
    using KStartupInfo::receivers;
    using KStartupInfo::sender;
    using KStartupInfo::senderSignalIndex;

    // Instance callback storage
    KStartupInfo_MetaObject_Callback kstartupinfo_metaobject_callback = nullptr;
    KStartupInfo_Metacast_Callback kstartupinfo_metacast_callback = nullptr;
    KStartupInfo_Metacall_Callback kstartupinfo_metacall_callback = nullptr;
    KStartupInfo_CustomEvent_Callback kstartupinfo_customevent_callback = nullptr;
    KStartupInfo_Event_Callback kstartupinfo_event_callback = nullptr;
    KStartupInfo_EventFilter_Callback kstartupinfo_eventfilter_callback = nullptr;
    KStartupInfo_TimerEvent_Callback kstartupinfo_timerevent_callback = nullptr;
    KStartupInfo_ChildEvent_Callback kstartupinfo_childevent_callback = nullptr;
    KStartupInfo_ConnectNotify_Callback kstartupinfo_connectnotify_callback = nullptr;
    KStartupInfo_DisconnectNotify_Callback kstartupinfo_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KStartupInfo {
        using KStartupInfo::childEvent;
        using KStartupInfo::connectNotify;
        using KStartupInfo::customEvent;
        using KStartupInfo::disconnectNotify;
        using KStartupInfo::timerEvent;
    };

    VirtualKStartupInfo(int flags) : KStartupInfo(flags) {};
    VirtualKStartupInfo(int flags, QObject* parent) : KStartupInfo(flags, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kstartupinfo_metaobject_callback) {
            QMetaObject* callback_ret = kstartupinfo_metaobject_callback(this);
            return callback_ret;
        }
        return KStartupInfo::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kstartupinfo_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kstartupinfo_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KStartupInfo::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kstartupinfo_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kstartupinfo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KStartupInfo::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* e_P) override {
        if (kstartupinfo_customevent_callback) {
            QEvent* cbval1 = e_P;
            kstartupinfo_customevent_callback(this, cbval1);
            return;
        }
        KStartupInfo::customEvent(e_P);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kstartupinfo_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kstartupinfo_event_callback(this, cbval1);
            return callback_ret;
        }
        return KStartupInfo::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kstartupinfo_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kstartupinfo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KStartupInfo::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kstartupinfo_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kstartupinfo_timerevent_callback(this, cbval1);
            return;
        }
        KStartupInfo::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kstartupinfo_childevent_callback) {
            QChildEvent* cbval1 = event;
            kstartupinfo_childevent_callback(this, cbval1);
            return;
        }
        KStartupInfo::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kstartupinfo_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kstartupinfo_connectnotify_callback(this, cbval1);
            return;
        }
        KStartupInfo::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kstartupinfo_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kstartupinfo_disconnectnotify_callback(this, cbval1);
            return;
        }
        KStartupInfo::disconnectNotify(signal);
    }

    // Friend functions
    friend void KStartupInfo_SuperCustomEvent(KStartupInfo* self, QEvent* e_P);
    friend void KStartupInfo_SuperTimerEvent(KStartupInfo* self, QTimerEvent* event);
    friend void KStartupInfo_SuperChildEvent(KStartupInfo* self, QChildEvent* event);
    friend void KStartupInfo_SuperConnectNotify(KStartupInfo* self, const QMetaMethod* signal);
    friend void KStartupInfo_SuperDisconnectNotify(KStartupInfo* self, const QMetaMethod* signal);
};

#endif
