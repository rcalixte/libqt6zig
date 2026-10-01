#pragma once
#ifndef EXTRAS_KI18N_LIBKLOCALIZEDQMLCONTEXT_HXX
#define EXTRAS_KI18N_LIBKLOCALIZEDQMLCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedQmlContext
class VirtualKLocalizedQmlContext final : public KLocalizedQmlContext {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLocalizedQmlContext_MetaObject_Callback = QMetaObject* (*)(const KLocalizedQmlContext*);
    using KLocalizedQmlContext_Metacast_Callback = void* (*)(KLocalizedQmlContext*, const char*);
    using KLocalizedQmlContext_Metacall_Callback = int (*)(KLocalizedQmlContext*, int, int, void**);
    using KLocalizedQmlContext_Event_Callback = bool (*)(KLocalizedQmlContext*, QEvent*);
    using KLocalizedQmlContext_TimerEvent_Callback = void (*)(KLocalizedQmlContext*, QTimerEvent*);
    using KLocalizedQmlContext_ChildEvent_Callback = void (*)(KLocalizedQmlContext*, QChildEvent*);
    using KLocalizedQmlContext_CustomEvent_Callback = void (*)(KLocalizedQmlContext*, QEvent*);
    using KLocalizedQmlContext_ConnectNotify_Callback = void (*)(KLocalizedQmlContext*, QMetaMethod*);
    using KLocalizedQmlContext_DisconnectNotify_Callback = void (*)(KLocalizedQmlContext*, QMetaMethod*);
    using KLocalizedQmlContext::isSignalConnected;
    using KLocalizedQmlContext::receivers;
    using KLocalizedQmlContext::sender;
    using KLocalizedQmlContext::senderSignalIndex;

    // Instance callback storage
    KLocalizedQmlContext_MetaObject_Callback klocalizedqmlcontext_metaobject_callback = nullptr;
    KLocalizedQmlContext_Metacast_Callback klocalizedqmlcontext_metacast_callback = nullptr;
    KLocalizedQmlContext_Metacall_Callback klocalizedqmlcontext_metacall_callback = nullptr;
    KLocalizedQmlContext_Event_Callback klocalizedqmlcontext_event_callback = nullptr;
    KLocalizedQmlContext_TimerEvent_Callback klocalizedqmlcontext_timerevent_callback = nullptr;
    KLocalizedQmlContext_ChildEvent_Callback klocalizedqmlcontext_childevent_callback = nullptr;
    KLocalizedQmlContext_CustomEvent_Callback klocalizedqmlcontext_customevent_callback = nullptr;
    KLocalizedQmlContext_ConnectNotify_Callback klocalizedqmlcontext_connectnotify_callback = nullptr;
    KLocalizedQmlContext_DisconnectNotify_Callback klocalizedqmlcontext_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLocalizedQmlContext {
        using KLocalizedQmlContext::childEvent;
        using KLocalizedQmlContext::connectNotify;
        using KLocalizedQmlContext::customEvent;
        using KLocalizedQmlContext::disconnectNotify;
        using KLocalizedQmlContext::timerEvent;
    };

    VirtualKLocalizedQmlContext() : KLocalizedQmlContext() {};
    VirtualKLocalizedQmlContext(QObject* parent) : KLocalizedQmlContext(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klocalizedqmlcontext_metaobject_callback) {
            QMetaObject* callback_ret = klocalizedqmlcontext_metaobject_callback(this);
            return callback_ret;
        }
        return KLocalizedQmlContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klocalizedqmlcontext_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klocalizedqmlcontext_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLocalizedQmlContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedqmlcontext_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klocalizedqmlcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLocalizedQmlContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedqmlcontext_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klocalizedqmlcontext_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLocalizedQmlContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedqmlcontext_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klocalizedqmlcontext_timerevent_callback(this, cbval1);
            return;
        }
        KLocalizedQmlContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedqmlcontext_childevent_callback) {
            QChildEvent* cbval1 = event;
            klocalizedqmlcontext_childevent_callback(this, cbval1);
            return;
        }
        KLocalizedQmlContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedqmlcontext_customevent_callback) {
            QEvent* cbval1 = event;
            klocalizedqmlcontext_customevent_callback(this, cbval1);
            return;
        }
        KLocalizedQmlContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedqmlcontext_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klocalizedqmlcontext_connectnotify_callback(this, cbval1);
            return;
        }
        KLocalizedQmlContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedqmlcontext_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klocalizedqmlcontext_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLocalizedQmlContext::disconnectNotify(signal);
    }

    // Friend functions
    friend void KLocalizedQmlContext_SuperTimerEvent(KLocalizedQmlContext* self, QTimerEvent* event);
    friend void KLocalizedQmlContext_SuperChildEvent(KLocalizedQmlContext* self, QChildEvent* event);
    friend void KLocalizedQmlContext_SuperCustomEvent(KLocalizedQmlContext* self, QEvent* event);
    friend void KLocalizedQmlContext_SuperConnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal);
    friend void KLocalizedQmlContext_SuperDisconnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal);
};

#endif
