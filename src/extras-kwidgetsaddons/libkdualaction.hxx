#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKDUALACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKDUALACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDualAction
class VirtualKDualAction final : public KDualAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDualAction_MetaObject_Callback = QMetaObject* (*)(const KDualAction*);
    using KDualAction_Metacast_Callback = void* (*)(KDualAction*, const char*);
    using KDualAction_Metacall_Callback = int (*)(KDualAction*, int, int, void**);
    using KDualAction_Event_Callback = bool (*)(KDualAction*, QEvent*);
    using KDualAction_EventFilter_Callback = bool (*)(KDualAction*, QObject*, QEvent*);
    using KDualAction_TimerEvent_Callback = void (*)(KDualAction*, QTimerEvent*);
    using KDualAction_ChildEvent_Callback = void (*)(KDualAction*, QChildEvent*);
    using KDualAction_CustomEvent_Callback = void (*)(KDualAction*, QEvent*);
    using KDualAction_ConnectNotify_Callback = void (*)(KDualAction*, QMetaMethod*);
    using KDualAction_DisconnectNotify_Callback = void (*)(KDualAction*, QMetaMethod*);
    using KDualAction::isSignalConnected;
    using KDualAction::receivers;
    using KDualAction::sender;
    using KDualAction::senderSignalIndex;

    // Instance callback storage
    KDualAction_MetaObject_Callback kdualaction_metaobject_callback = nullptr;
    KDualAction_Metacast_Callback kdualaction_metacast_callback = nullptr;
    KDualAction_Metacall_Callback kdualaction_metacall_callback = nullptr;
    KDualAction_Event_Callback kdualaction_event_callback = nullptr;
    KDualAction_EventFilter_Callback kdualaction_eventfilter_callback = nullptr;
    KDualAction_TimerEvent_Callback kdualaction_timerevent_callback = nullptr;
    KDualAction_ChildEvent_Callback kdualaction_childevent_callback = nullptr;
    KDualAction_CustomEvent_Callback kdualaction_customevent_callback = nullptr;
    KDualAction_ConnectNotify_Callback kdualaction_connectnotify_callback = nullptr;
    KDualAction_DisconnectNotify_Callback kdualaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDualAction {
        using KDualAction::childEvent;
        using KDualAction::connectNotify;
        using KDualAction::customEvent;
        using KDualAction::disconnectNotify;
        using KDualAction::event;
        using KDualAction::timerEvent;
    };

    VirtualKDualAction(QObject* parent) : KDualAction(parent) {};
    VirtualKDualAction(const QString& inactiveText, const QString& activeText, QObject* parent) : KDualAction(inactiveText, activeText, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdualaction_metaobject_callback) {
            QMetaObject* callback_ret = kdualaction_metaobject_callback(this);
            return callback_ret;
        }
        return KDualAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdualaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdualaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDualAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdualaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdualaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDualAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kdualaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kdualaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDualAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdualaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdualaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDualAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdualaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdualaction_timerevent_callback(this, cbval1);
            return;
        }
        KDualAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdualaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdualaction_childevent_callback(this, cbval1);
            return;
        }
        KDualAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdualaction_customevent_callback) {
            QEvent* cbval1 = event;
            kdualaction_customevent_callback(this, cbval1);
            return;
        }
        KDualAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdualaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdualaction_connectnotify_callback(this, cbval1);
            return;
        }
        KDualAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdualaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdualaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDualAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KDualAction_SuperEvent(KDualAction* self, QEvent* param1);
    friend void KDualAction_SuperTimerEvent(KDualAction* self, QTimerEvent* event);
    friend void KDualAction_SuperChildEvent(KDualAction* self, QChildEvent* event);
    friend void KDualAction_SuperCustomEvent(KDualAction* self, QEvent* event);
    friend void KDualAction_SuperConnectNotify(KDualAction* self, const QMetaMethod* signal);
    friend void KDualAction_SuperDisconnectNotify(KDualAction* self, const QMetaMethod* signal);
};

#endif
