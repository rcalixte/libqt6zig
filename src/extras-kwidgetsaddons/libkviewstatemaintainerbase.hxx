#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKVIEWSTATEMAINTAINERBASE_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKVIEWSTATEMAINTAINERBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KViewStateMaintainerBase
class VirtualKViewStateMaintainerBase : public KViewStateMaintainerBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KViewStateMaintainerBase_MetaObject_Callback = QMetaObject* (*)(const KViewStateMaintainerBase*);
    using KViewStateMaintainerBase_Metacast_Callback = void* (*)(KViewStateMaintainerBase*, const char*);
    using KViewStateMaintainerBase_Metacall_Callback = int (*)(KViewStateMaintainerBase*, int, int, void**);
    using KViewStateMaintainerBase_SaveState_Callback = void (*)(KViewStateMaintainerBase*);
    using KViewStateMaintainerBase_RestoreState_Callback = void (*)(KViewStateMaintainerBase*);
    using KViewStateMaintainerBase_Event_Callback = bool (*)(KViewStateMaintainerBase*, QEvent*);
    using KViewStateMaintainerBase_EventFilter_Callback = bool (*)(KViewStateMaintainerBase*, QObject*, QEvent*);
    using KViewStateMaintainerBase_TimerEvent_Callback = void (*)(KViewStateMaintainerBase*, QTimerEvent*);
    using KViewStateMaintainerBase_ChildEvent_Callback = void (*)(KViewStateMaintainerBase*, QChildEvent*);
    using KViewStateMaintainerBase_CustomEvent_Callback = void (*)(KViewStateMaintainerBase*, QEvent*);
    using KViewStateMaintainerBase_ConnectNotify_Callback = void (*)(KViewStateMaintainerBase*, QMetaMethod*);
    using KViewStateMaintainerBase_DisconnectNotify_Callback = void (*)(KViewStateMaintainerBase*, QMetaMethod*);
    using KViewStateMaintainerBase::isSignalConnected;
    using KViewStateMaintainerBase::receivers;
    using KViewStateMaintainerBase::sender;
    using KViewStateMaintainerBase::senderSignalIndex;

    // Instance callback storage
    KViewStateMaintainerBase_MetaObject_Callback kviewstatemaintainerbase_metaobject_callback = nullptr;
    KViewStateMaintainerBase_Metacast_Callback kviewstatemaintainerbase_metacast_callback = nullptr;
    KViewStateMaintainerBase_Metacall_Callback kviewstatemaintainerbase_metacall_callback = nullptr;
    KViewStateMaintainerBase_SaveState_Callback kviewstatemaintainerbase_savestate_callback = nullptr;
    KViewStateMaintainerBase_RestoreState_Callback kviewstatemaintainerbase_restorestate_callback = nullptr;
    KViewStateMaintainerBase_Event_Callback kviewstatemaintainerbase_event_callback = nullptr;
    KViewStateMaintainerBase_EventFilter_Callback kviewstatemaintainerbase_eventfilter_callback = nullptr;
    KViewStateMaintainerBase_TimerEvent_Callback kviewstatemaintainerbase_timerevent_callback = nullptr;
    KViewStateMaintainerBase_ChildEvent_Callback kviewstatemaintainerbase_childevent_callback = nullptr;
    KViewStateMaintainerBase_CustomEvent_Callback kviewstatemaintainerbase_customevent_callback = nullptr;
    KViewStateMaintainerBase_ConnectNotify_Callback kviewstatemaintainerbase_connectnotify_callback = nullptr;
    KViewStateMaintainerBase_DisconnectNotify_Callback kviewstatemaintainerbase_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KViewStateMaintainerBase {
        using KViewStateMaintainerBase::childEvent;
        using KViewStateMaintainerBase::connectNotify;
        using KViewStateMaintainerBase::customEvent;
        using KViewStateMaintainerBase::disconnectNotify;
        using KViewStateMaintainerBase::timerEvent;
    };

    VirtualKViewStateMaintainerBase() : KViewStateMaintainerBase() {};
    VirtualKViewStateMaintainerBase(QObject* parent) : KViewStateMaintainerBase(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kviewstatemaintainerbase_metaobject_callback) {
            QMetaObject* callback_ret = kviewstatemaintainerbase_metaobject_callback(this);
            return callback_ret;
        }
        return KViewStateMaintainerBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kviewstatemaintainerbase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kviewstatemaintainerbase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KViewStateMaintainerBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kviewstatemaintainerbase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kviewstatemaintainerbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KViewStateMaintainerBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveState() override {
        if (kviewstatemaintainerbase_savestate_callback) {
            kviewstatemaintainerbase_savestate_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KViewStateMaintainerBase::saveState called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void restoreState() override {
        if (kviewstatemaintainerbase_restorestate_callback) {
            kviewstatemaintainerbase_restorestate_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KViewStateMaintainerBase::restoreState called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kviewstatemaintainerbase_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kviewstatemaintainerbase_event_callback(this, cbval1);
            return callback_ret;
        }
        return KViewStateMaintainerBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kviewstatemaintainerbase_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kviewstatemaintainerbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KViewStateMaintainerBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kviewstatemaintainerbase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kviewstatemaintainerbase_timerevent_callback(this, cbval1);
            return;
        }
        KViewStateMaintainerBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kviewstatemaintainerbase_childevent_callback) {
            QChildEvent* cbval1 = event;
            kviewstatemaintainerbase_childevent_callback(this, cbval1);
            return;
        }
        KViewStateMaintainerBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kviewstatemaintainerbase_customevent_callback) {
            QEvent* cbval1 = event;
            kviewstatemaintainerbase_customevent_callback(this, cbval1);
            return;
        }
        KViewStateMaintainerBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kviewstatemaintainerbase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kviewstatemaintainerbase_connectnotify_callback(this, cbval1);
            return;
        }
        KViewStateMaintainerBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kviewstatemaintainerbase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kviewstatemaintainerbase_disconnectnotify_callback(this, cbval1);
            return;
        }
        KViewStateMaintainerBase::disconnectNotify(signal);
    }

    // Friend functions
    friend void KViewStateMaintainerBase_SuperTimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
    friend void KViewStateMaintainerBase_SuperChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
    friend void KViewStateMaintainerBase_SuperCustomEvent(KViewStateMaintainerBase* self, QEvent* event);
    friend void KViewStateMaintainerBase_SuperConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
    friend void KViewStateMaintainerBase_SuperDisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
};

#endif
