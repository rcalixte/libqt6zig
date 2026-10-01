#pragma once
#ifndef EXTRAS_KPARTS_LIBSTATUSBAREXTENSION_HXX
#define EXTRAS_KPARTS_LIBSTATUSBAREXTENSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::StatusBarExtension
class VirtualKPartsStatusBarExtension final : public KParts::StatusBarExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__StatusBarExtension_MetaObject_Callback = QMetaObject* (*)(const KParts__StatusBarExtension*);
    using KParts__StatusBarExtension_Metacast_Callback = void* (*)(KParts__StatusBarExtension*, const char*);
    using KParts__StatusBarExtension_Metacall_Callback = int (*)(KParts__StatusBarExtension*, int, int, void**);
    using KParts__StatusBarExtension_EventFilter_Callback = bool (*)(KParts__StatusBarExtension*, QObject*, QEvent*);
    using KParts__StatusBarExtension_Event_Callback = bool (*)(KParts__StatusBarExtension*, QEvent*);
    using KParts__StatusBarExtension_TimerEvent_Callback = void (*)(KParts__StatusBarExtension*, QTimerEvent*);
    using KParts__StatusBarExtension_ChildEvent_Callback = void (*)(KParts__StatusBarExtension*, QChildEvent*);
    using KParts__StatusBarExtension_CustomEvent_Callback = void (*)(KParts__StatusBarExtension*, QEvent*);
    using KParts__StatusBarExtension_ConnectNotify_Callback = void (*)(KParts__StatusBarExtension*, QMetaMethod*);
    using KParts__StatusBarExtension_DisconnectNotify_Callback = void (*)(KParts__StatusBarExtension*, QMetaMethod*);
    using KParts::StatusBarExtension::isSignalConnected;
    using KParts::StatusBarExtension::receivers;
    using KParts::StatusBarExtension::sender;
    using KParts::StatusBarExtension::senderSignalIndex;

    // Instance callback storage
    KParts__StatusBarExtension_MetaObject_Callback kparts__statusbarextension_metaobject_callback = nullptr;
    KParts__StatusBarExtension_Metacast_Callback kparts__statusbarextension_metacast_callback = nullptr;
    KParts__StatusBarExtension_Metacall_Callback kparts__statusbarextension_metacall_callback = nullptr;
    KParts__StatusBarExtension_EventFilter_Callback kparts__statusbarextension_eventfilter_callback = nullptr;
    KParts__StatusBarExtension_Event_Callback kparts__statusbarextension_event_callback = nullptr;
    KParts__StatusBarExtension_TimerEvent_Callback kparts__statusbarextension_timerevent_callback = nullptr;
    KParts__StatusBarExtension_ChildEvent_Callback kparts__statusbarextension_childevent_callback = nullptr;
    KParts__StatusBarExtension_CustomEvent_Callback kparts__statusbarextension_customevent_callback = nullptr;
    KParts__StatusBarExtension_ConnectNotify_Callback kparts__statusbarextension_connectnotify_callback = nullptr;
    KParts__StatusBarExtension_DisconnectNotify_Callback kparts__statusbarextension_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KParts::StatusBarExtension {
        using KParts::StatusBarExtension::childEvent;
        using KParts::StatusBarExtension::connectNotify;
        using KParts::StatusBarExtension::customEvent;
        using KParts::StatusBarExtension::disconnectNotify;
        using KParts::StatusBarExtension::timerEvent;
    };

    VirtualKPartsStatusBarExtension(KParts::Part* parent) : KParts::StatusBarExtension(parent) {};
    VirtualKPartsStatusBarExtension(KParts::ReadOnlyPart* parent) : KParts::StatusBarExtension(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__statusbarextension_metaobject_callback) {
            QMetaObject* callback_ret = kparts__statusbarextension_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__StatusBarExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__statusbarextension_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__statusbarextension_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__StatusBarExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__statusbarextension_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__statusbarextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__StatusBarExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* ev) override {
        if (kparts__statusbarextension_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = ev;
            bool callback_ret = kparts__statusbarextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__StatusBarExtension::eventFilter(watched, ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__statusbarextension_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__statusbarextension_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__StatusBarExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__statusbarextension_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__statusbarextension_timerevent_callback(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__statusbarextension_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__statusbarextension_childevent_callback(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__statusbarextension_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__statusbarextension_customevent_callback(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__statusbarextension_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__statusbarextension_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__statusbarextension_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__statusbarextension_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::disconnectNotify(signal);
    }

    // Friend functions
    friend void KParts__StatusBarExtension_SuperTimerEvent(KParts::StatusBarExtension* self, QTimerEvent* event);
    friend void KParts__StatusBarExtension_SuperChildEvent(KParts::StatusBarExtension* self, QChildEvent* event);
    friend void KParts__StatusBarExtension_SuperCustomEvent(KParts::StatusBarExtension* self, QEvent* event);
    friend void KParts__StatusBarExtension_SuperConnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_SuperDisconnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
};

#endif
