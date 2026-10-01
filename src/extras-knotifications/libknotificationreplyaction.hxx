#pragma once
#ifndef EXTRAS_KNOTIFICATIONS_LIBKNOTIFICATIONREPLYACTION_HXX
#define EXTRAS_KNOTIFICATIONS_LIBKNOTIFICATIONREPLYACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNotificationReplyAction
class VirtualKNotificationReplyAction final : public KNotificationReplyAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNotificationReplyAction_MetaObject_Callback = QMetaObject* (*)(const KNotificationReplyAction*);
    using KNotificationReplyAction_Metacast_Callback = void* (*)(KNotificationReplyAction*, const char*);
    using KNotificationReplyAction_Metacall_Callback = int (*)(KNotificationReplyAction*, int, int, void**);
    using KNotificationReplyAction_Event_Callback = bool (*)(KNotificationReplyAction*, QEvent*);
    using KNotificationReplyAction_EventFilter_Callback = bool (*)(KNotificationReplyAction*, QObject*, QEvent*);
    using KNotificationReplyAction_TimerEvent_Callback = void (*)(KNotificationReplyAction*, QTimerEvent*);
    using KNotificationReplyAction_ChildEvent_Callback = void (*)(KNotificationReplyAction*, QChildEvent*);
    using KNotificationReplyAction_CustomEvent_Callback = void (*)(KNotificationReplyAction*, QEvent*);
    using KNotificationReplyAction_ConnectNotify_Callback = void (*)(KNotificationReplyAction*, QMetaMethod*);
    using KNotificationReplyAction_DisconnectNotify_Callback = void (*)(KNotificationReplyAction*, QMetaMethod*);
    using KNotificationReplyAction::isSignalConnected;
    using KNotificationReplyAction::receivers;
    using KNotificationReplyAction::sender;
    using KNotificationReplyAction::senderSignalIndex;

    // Instance callback storage
    KNotificationReplyAction_MetaObject_Callback knotificationreplyaction_metaobject_callback = nullptr;
    KNotificationReplyAction_Metacast_Callback knotificationreplyaction_metacast_callback = nullptr;
    KNotificationReplyAction_Metacall_Callback knotificationreplyaction_metacall_callback = nullptr;
    KNotificationReplyAction_Event_Callback knotificationreplyaction_event_callback = nullptr;
    KNotificationReplyAction_EventFilter_Callback knotificationreplyaction_eventfilter_callback = nullptr;
    KNotificationReplyAction_TimerEvent_Callback knotificationreplyaction_timerevent_callback = nullptr;
    KNotificationReplyAction_ChildEvent_Callback knotificationreplyaction_childevent_callback = nullptr;
    KNotificationReplyAction_CustomEvent_Callback knotificationreplyaction_customevent_callback = nullptr;
    KNotificationReplyAction_ConnectNotify_Callback knotificationreplyaction_connectnotify_callback = nullptr;
    KNotificationReplyAction_DisconnectNotify_Callback knotificationreplyaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNotificationReplyAction {
        using KNotificationReplyAction::childEvent;
        using KNotificationReplyAction::connectNotify;
        using KNotificationReplyAction::customEvent;
        using KNotificationReplyAction::disconnectNotify;
        using KNotificationReplyAction::timerEvent;
    };

    VirtualKNotificationReplyAction(const QString& label) : KNotificationReplyAction(label) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knotificationreplyaction_metaobject_callback) {
            QMetaObject* callback_ret = knotificationreplyaction_metaobject_callback(this);
            return callback_ret;
        }
        return KNotificationReplyAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knotificationreplyaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knotificationreplyaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNotificationReplyAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotificationreplyaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knotificationreplyaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNotificationReplyAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotificationreplyaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knotificationreplyaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNotificationReplyAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotificationreplyaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knotificationreplyaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNotificationReplyAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotificationreplyaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knotificationreplyaction_timerevent_callback(this, cbval1);
            return;
        }
        KNotificationReplyAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotificationreplyaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            knotificationreplyaction_childevent_callback(this, cbval1);
            return;
        }
        KNotificationReplyAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotificationreplyaction_customevent_callback) {
            QEvent* cbval1 = event;
            knotificationreplyaction_customevent_callback(this, cbval1);
            return;
        }
        KNotificationReplyAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotificationreplyaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knotificationreplyaction_connectnotify_callback(this, cbval1);
            return;
        }
        KNotificationReplyAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotificationreplyaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knotificationreplyaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNotificationReplyAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNotificationReplyAction_SuperTimerEvent(KNotificationReplyAction* self, QTimerEvent* event);
    friend void KNotificationReplyAction_SuperChildEvent(KNotificationReplyAction* self, QChildEvent* event);
    friend void KNotificationReplyAction_SuperCustomEvent(KNotificationReplyAction* self, QEvent* event);
    friend void KNotificationReplyAction_SuperConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
    friend void KNotificationReplyAction_SuperDisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
};

#endif
