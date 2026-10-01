#pragma once
#ifndef EXTRAS_KNOTIFICATIONS_LIBKNOTIFICATION_HXX
#define EXTRAS_KNOTIFICATIONS_LIBKNOTIFICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNotificationAction
class VirtualKNotificationAction final : public KNotificationAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNotificationAction_MetaObject_Callback = QMetaObject* (*)(const KNotificationAction*);
    using KNotificationAction_Metacast_Callback = void* (*)(KNotificationAction*, const char*);
    using KNotificationAction_Metacall_Callback = int (*)(KNotificationAction*, int, int, void**);
    using KNotificationAction_Event_Callback = bool (*)(KNotificationAction*, QEvent*);
    using KNotificationAction_EventFilter_Callback = bool (*)(KNotificationAction*, QObject*, QEvent*);
    using KNotificationAction_TimerEvent_Callback = void (*)(KNotificationAction*, QTimerEvent*);
    using KNotificationAction_ChildEvent_Callback = void (*)(KNotificationAction*, QChildEvent*);
    using KNotificationAction_CustomEvent_Callback = void (*)(KNotificationAction*, QEvent*);
    using KNotificationAction_ConnectNotify_Callback = void (*)(KNotificationAction*, QMetaMethod*);
    using KNotificationAction_DisconnectNotify_Callback = void (*)(KNotificationAction*, QMetaMethod*);
    using KNotificationAction::isSignalConnected;
    using KNotificationAction::receivers;
    using KNotificationAction::sender;
    using KNotificationAction::senderSignalIndex;

    // Instance callback storage
    KNotificationAction_MetaObject_Callback knotificationaction_metaobject_callback = nullptr;
    KNotificationAction_Metacast_Callback knotificationaction_metacast_callback = nullptr;
    KNotificationAction_Metacall_Callback knotificationaction_metacall_callback = nullptr;
    KNotificationAction_Event_Callback knotificationaction_event_callback = nullptr;
    KNotificationAction_EventFilter_Callback knotificationaction_eventfilter_callback = nullptr;
    KNotificationAction_TimerEvent_Callback knotificationaction_timerevent_callback = nullptr;
    KNotificationAction_ChildEvent_Callback knotificationaction_childevent_callback = nullptr;
    KNotificationAction_CustomEvent_Callback knotificationaction_customevent_callback = nullptr;
    KNotificationAction_ConnectNotify_Callback knotificationaction_connectnotify_callback = nullptr;
    KNotificationAction_DisconnectNotify_Callback knotificationaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNotificationAction {
        using KNotificationAction::childEvent;
        using KNotificationAction::connectNotify;
        using KNotificationAction::customEvent;
        using KNotificationAction::disconnectNotify;
        using KNotificationAction::timerEvent;
    };

    VirtualKNotificationAction() : KNotificationAction() {};
    VirtualKNotificationAction(const QString& label) : KNotificationAction(label) {};
    VirtualKNotificationAction(QObject* parent) : KNotificationAction(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knotificationaction_metaobject_callback) {
            QMetaObject* callback_ret = knotificationaction_metaobject_callback(this);
            return callback_ret;
        }
        return KNotificationAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knotificationaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knotificationaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNotificationAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotificationaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knotificationaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNotificationAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotificationaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knotificationaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNotificationAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotificationaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knotificationaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNotificationAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotificationaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knotificationaction_timerevent_callback(this, cbval1);
            return;
        }
        KNotificationAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotificationaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            knotificationaction_childevent_callback(this, cbval1);
            return;
        }
        KNotificationAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotificationaction_customevent_callback) {
            QEvent* cbval1 = event;
            knotificationaction_customevent_callback(this, cbval1);
            return;
        }
        KNotificationAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotificationaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knotificationaction_connectnotify_callback(this, cbval1);
            return;
        }
        KNotificationAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotificationaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knotificationaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNotificationAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNotificationAction_SuperTimerEvent(KNotificationAction* self, QTimerEvent* event);
    friend void KNotificationAction_SuperChildEvent(KNotificationAction* self, QChildEvent* event);
    friend void KNotificationAction_SuperCustomEvent(KNotificationAction* self, QEvent* event);
    friend void KNotificationAction_SuperConnectNotify(KNotificationAction* self, const QMetaMethod* signal);
    friend void KNotificationAction_SuperDisconnectNotify(KNotificationAction* self, const QMetaMethod* signal);
};

// This class is a subclass of KNotification
class VirtualKNotification final : public KNotification {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNotification_MetaObject_Callback = QMetaObject* (*)(const KNotification*);
    using KNotification_Metacast_Callback = void* (*)(KNotification*, const char*);
    using KNotification_Metacall_Callback = int (*)(KNotification*, int, int, void**);
    using KNotification_Event_Callback = bool (*)(KNotification*, QEvent*);
    using KNotification_EventFilter_Callback = bool (*)(KNotification*, QObject*, QEvent*);
    using KNotification_TimerEvent_Callback = void (*)(KNotification*, QTimerEvent*);
    using KNotification_ChildEvent_Callback = void (*)(KNotification*, QChildEvent*);
    using KNotification_CustomEvent_Callback = void (*)(KNotification*, QEvent*);
    using KNotification_ConnectNotify_Callback = void (*)(KNotification*, QMetaMethod*);
    using KNotification_DisconnectNotify_Callback = void (*)(KNotification*, QMetaMethod*);
    using KNotification::isSignalConnected;
    using KNotification::receivers;
    using KNotification::sender;
    using KNotification::senderSignalIndex;

    // Instance callback storage
    KNotification_MetaObject_Callback knotification_metaobject_callback = nullptr;
    KNotification_Metacast_Callback knotification_metacast_callback = nullptr;
    KNotification_Metacall_Callback knotification_metacall_callback = nullptr;
    KNotification_Event_Callback knotification_event_callback = nullptr;
    KNotification_EventFilter_Callback knotification_eventfilter_callback = nullptr;
    KNotification_TimerEvent_Callback knotification_timerevent_callback = nullptr;
    KNotification_ChildEvent_Callback knotification_childevent_callback = nullptr;
    KNotification_CustomEvent_Callback knotification_customevent_callback = nullptr;
    KNotification_ConnectNotify_Callback knotification_connectnotify_callback = nullptr;
    KNotification_DisconnectNotify_Callback knotification_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNotification {
        using KNotification::childEvent;
        using KNotification::connectNotify;
        using KNotification::customEvent;
        using KNotification::disconnectNotify;
        using KNotification::timerEvent;
    };

    VirtualKNotification(const QString& eventId) : KNotification(eventId) {};
    VirtualKNotification(const QString& eventId, KNotification::NotificationFlags flags) : KNotification(eventId, flags) {};
    VirtualKNotification(const QString& eventId, KNotification::NotificationFlags flags, QObject* parent) : KNotification(eventId, flags, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knotification_metaobject_callback) {
            QMetaObject* callback_ret = knotification_metaobject_callback(this);
            return callback_ret;
        }
        return KNotification::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knotification_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knotification_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNotification::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotification_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knotification_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNotification::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotification_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knotification_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNotification::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotification_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knotification_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNotification::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotification_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knotification_timerevent_callback(this, cbval1);
            return;
        }
        KNotification::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotification_childevent_callback) {
            QChildEvent* cbval1 = event;
            knotification_childevent_callback(this, cbval1);
            return;
        }
        KNotification::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotification_customevent_callback) {
            QEvent* cbval1 = event;
            knotification_customevent_callback(this, cbval1);
            return;
        }
        KNotification::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotification_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knotification_connectnotify_callback(this, cbval1);
            return;
        }
        KNotification::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotification_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knotification_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNotification::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNotification_SuperTimerEvent(KNotification* self, QTimerEvent* event);
    friend void KNotification_SuperChildEvent(KNotification* self, QChildEvent* event);
    friend void KNotification_SuperCustomEvent(KNotification* self, QEvent* event);
    friend void KNotification_SuperConnectNotify(KNotification* self, const QMetaMethod* signal);
    friend void KNotification_SuperDisconnectNotify(KNotification* self, const QMetaMethod* signal);
};

#endif
