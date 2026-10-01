#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBACTION_HXX
#define EXTRAS_KNEWSTUFF_LIBACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Action
class VirtualKNSWidgetsAction final : public KNSWidgets::Action {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSWidgets__Action_MetaObject_Callback = QMetaObject* (*)(const KNSWidgets__Action*);
    using KNSWidgets__Action_Metacast_Callback = void* (*)(KNSWidgets__Action*, const char*);
    using KNSWidgets__Action_Metacall_Callback = int (*)(KNSWidgets__Action*, int, int, void**);
    using KNSWidgets__Action_Event_Callback = bool (*)(KNSWidgets__Action*, QEvent*);
    using KNSWidgets__Action_EventFilter_Callback = bool (*)(KNSWidgets__Action*, QObject*, QEvent*);
    using KNSWidgets__Action_TimerEvent_Callback = void (*)(KNSWidgets__Action*, QTimerEvent*);
    using KNSWidgets__Action_ChildEvent_Callback = void (*)(KNSWidgets__Action*, QChildEvent*);
    using KNSWidgets__Action_CustomEvent_Callback = void (*)(KNSWidgets__Action*, QEvent*);
    using KNSWidgets__Action_ConnectNotify_Callback = void (*)(KNSWidgets__Action*, QMetaMethod*);
    using KNSWidgets__Action_DisconnectNotify_Callback = void (*)(KNSWidgets__Action*, QMetaMethod*);
    using KNSWidgets::Action::isSignalConnected;
    using KNSWidgets::Action::receivers;
    using KNSWidgets::Action::sender;
    using KNSWidgets::Action::senderSignalIndex;

    // Instance callback storage
    KNSWidgets__Action_MetaObject_Callback knswidgets__action_metaobject_callback = nullptr;
    KNSWidgets__Action_Metacast_Callback knswidgets__action_metacast_callback = nullptr;
    KNSWidgets__Action_Metacall_Callback knswidgets__action_metacall_callback = nullptr;
    KNSWidgets__Action_Event_Callback knswidgets__action_event_callback = nullptr;
    KNSWidgets__Action_EventFilter_Callback knswidgets__action_eventfilter_callback = nullptr;
    KNSWidgets__Action_TimerEvent_Callback knswidgets__action_timerevent_callback = nullptr;
    KNSWidgets__Action_ChildEvent_Callback knswidgets__action_childevent_callback = nullptr;
    KNSWidgets__Action_CustomEvent_Callback knswidgets__action_customevent_callback = nullptr;
    KNSWidgets__Action_ConnectNotify_Callback knswidgets__action_connectnotify_callback = nullptr;
    KNSWidgets__Action_DisconnectNotify_Callback knswidgets__action_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSWidgets::Action {
        using KNSWidgets::Action::childEvent;
        using KNSWidgets::Action::connectNotify;
        using KNSWidgets::Action::customEvent;
        using KNSWidgets::Action::disconnectNotify;
        using KNSWidgets::Action::event;
        using KNSWidgets::Action::timerEvent;
    };

    VirtualKNSWidgetsAction(const QString& text, const QString& configFile, QObject* parent) : KNSWidgets::Action(text, configFile, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knswidgets__action_metaobject_callback) {
            QMetaObject* callback_ret = knswidgets__action_metaobject_callback(this);
            return callback_ret;
        }
        return KNSWidgets__Action::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knswidgets__action_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knswidgets__action_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Action::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__action_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knswidgets__action_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Action::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (knswidgets__action_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = knswidgets__action_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Action::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knswidgets__action_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knswidgets__action_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSWidgets__Action::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knswidgets__action_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knswidgets__action_timerevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Action::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__action_childevent_callback) {
            QChildEvent* cbval1 = event;
            knswidgets__action_childevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Action::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__action_customevent_callback) {
            QEvent* cbval1 = event;
            knswidgets__action_customevent_callback(this, cbval1);
            return;
        }
        KNSWidgets__Action::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__action_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knswidgets__action_connectnotify_callback(this, cbval1);
            return;
        }
        KNSWidgets__Action::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__action_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knswidgets__action_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSWidgets__Action::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KNSWidgets__Action_SuperEvent(KNSWidgets::Action* self, QEvent* param1);
    friend void KNSWidgets__Action_SuperTimerEvent(KNSWidgets::Action* self, QTimerEvent* event);
    friend void KNSWidgets__Action_SuperChildEvent(KNSWidgets::Action* self, QChildEvent* event);
    friend void KNSWidgets__Action_SuperCustomEvent(KNSWidgets::Action* self, QEvent* event);
    friend void KNSWidgets__Action_SuperConnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_SuperDisconnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
};

#endif
