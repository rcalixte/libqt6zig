#pragma once
#ifndef EXTRAS_KI18N_LIBKLOCALIZEDCONTEXT_HXX
#define EXTRAS_KI18N_LIBKLOCALIZEDCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedContext
class VirtualKLocalizedContext final : public KLocalizedContext {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLocalizedContext_MetaObject_Callback = QMetaObject* (*)(const KLocalizedContext*);
    using KLocalizedContext_Metacast_Callback = void* (*)(KLocalizedContext*, const char*);
    using KLocalizedContext_Metacall_Callback = int (*)(KLocalizedContext*, int, int, void**);
    using KLocalizedContext_Event_Callback = bool (*)(KLocalizedContext*, QEvent*);
    using KLocalizedContext_EventFilter_Callback = bool (*)(KLocalizedContext*, QObject*, QEvent*);
    using KLocalizedContext_TimerEvent_Callback = void (*)(KLocalizedContext*, QTimerEvent*);
    using KLocalizedContext_ChildEvent_Callback = void (*)(KLocalizedContext*, QChildEvent*);
    using KLocalizedContext_CustomEvent_Callback = void (*)(KLocalizedContext*, QEvent*);
    using KLocalizedContext_ConnectNotify_Callback = void (*)(KLocalizedContext*, QMetaMethod*);
    using KLocalizedContext_DisconnectNotify_Callback = void (*)(KLocalizedContext*, QMetaMethod*);
    using KLocalizedContext::isSignalConnected;
    using KLocalizedContext::receivers;
    using KLocalizedContext::sender;
    using KLocalizedContext::senderSignalIndex;

    // Instance callback storage
    KLocalizedContext_MetaObject_Callback klocalizedcontext_metaobject_callback = nullptr;
    KLocalizedContext_Metacast_Callback klocalizedcontext_metacast_callback = nullptr;
    KLocalizedContext_Metacall_Callback klocalizedcontext_metacall_callback = nullptr;
    KLocalizedContext_Event_Callback klocalizedcontext_event_callback = nullptr;
    KLocalizedContext_EventFilter_Callback klocalizedcontext_eventfilter_callback = nullptr;
    KLocalizedContext_TimerEvent_Callback klocalizedcontext_timerevent_callback = nullptr;
    KLocalizedContext_ChildEvent_Callback klocalizedcontext_childevent_callback = nullptr;
    KLocalizedContext_CustomEvent_Callback klocalizedcontext_customevent_callback = nullptr;
    KLocalizedContext_ConnectNotify_Callback klocalizedcontext_connectnotify_callback = nullptr;
    KLocalizedContext_DisconnectNotify_Callback klocalizedcontext_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLocalizedContext {
        using KLocalizedContext::childEvent;
        using KLocalizedContext::connectNotify;
        using KLocalizedContext::customEvent;
        using KLocalizedContext::disconnectNotify;
        using KLocalizedContext::timerEvent;
    };

    VirtualKLocalizedContext() : KLocalizedContext() {};
    VirtualKLocalizedContext(QObject* parent) : KLocalizedContext(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klocalizedcontext_metaobject_callback) {
            QMetaObject* callback_ret = klocalizedcontext_metaobject_callback(this);
            return callback_ret;
        }
        return KLocalizedContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klocalizedcontext_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klocalizedcontext_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLocalizedContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedcontext_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klocalizedcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLocalizedContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedcontext_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klocalizedcontext_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLocalizedContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klocalizedcontext_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klocalizedcontext_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLocalizedContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedcontext_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klocalizedcontext_timerevent_callback(this, cbval1);
            return;
        }
        KLocalizedContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedcontext_childevent_callback) {
            QChildEvent* cbval1 = event;
            klocalizedcontext_childevent_callback(this, cbval1);
            return;
        }
        KLocalizedContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedcontext_customevent_callback) {
            QEvent* cbval1 = event;
            klocalizedcontext_customevent_callback(this, cbval1);
            return;
        }
        KLocalizedContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedcontext_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klocalizedcontext_connectnotify_callback(this, cbval1);
            return;
        }
        KLocalizedContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedcontext_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klocalizedcontext_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLocalizedContext::disconnectNotify(signal);
    }

    // Friend functions
    friend void KLocalizedContext_SuperTimerEvent(KLocalizedContext* self, QTimerEvent* event);
    friend void KLocalizedContext_SuperChildEvent(KLocalizedContext* self, QChildEvent* event);
    friend void KLocalizedContext_SuperCustomEvent(KLocalizedContext* self, QEvent* event);
    friend void KLocalizedContext_SuperConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_SuperDisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
};

#endif
