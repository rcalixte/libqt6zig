#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKTOGGLETOOLBARACTION_HXX
#define EXTRAS_KXMLGUI_LIBKTOGGLETOOLBARACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToggleToolBarAction
class VirtualKToggleToolBarAction final : public KToggleToolBarAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToggleToolBarAction_MetaObject_Callback = QMetaObject* (*)(const KToggleToolBarAction*);
    using KToggleToolBarAction_Metacast_Callback = void* (*)(KToggleToolBarAction*, const char*);
    using KToggleToolBarAction_Metacall_Callback = int (*)(KToggleToolBarAction*, int, int, void**);
    using KToggleToolBarAction_EventFilter_Callback = bool (*)(KToggleToolBarAction*, QObject*, QEvent*);
    using KToggleToolBarAction_Event_Callback = bool (*)(KToggleToolBarAction*, QEvent*);
    using KToggleToolBarAction_TimerEvent_Callback = void (*)(KToggleToolBarAction*, QTimerEvent*);
    using KToggleToolBarAction_ChildEvent_Callback = void (*)(KToggleToolBarAction*, QChildEvent*);
    using KToggleToolBarAction_CustomEvent_Callback = void (*)(KToggleToolBarAction*, QEvent*);
    using KToggleToolBarAction_ConnectNotify_Callback = void (*)(KToggleToolBarAction*, QMetaMethod*);
    using KToggleToolBarAction_DisconnectNotify_Callback = void (*)(KToggleToolBarAction*, QMetaMethod*);
    using KToggleToolBarAction::isSignalConnected;
    using KToggleToolBarAction::receivers;
    using KToggleToolBarAction::sender;
    using KToggleToolBarAction::senderSignalIndex;

    // Instance callback storage
    KToggleToolBarAction_MetaObject_Callback ktoggletoolbaraction_metaobject_callback = nullptr;
    KToggleToolBarAction_Metacast_Callback ktoggletoolbaraction_metacast_callback = nullptr;
    KToggleToolBarAction_Metacall_Callback ktoggletoolbaraction_metacall_callback = nullptr;
    KToggleToolBarAction_EventFilter_Callback ktoggletoolbaraction_eventfilter_callback = nullptr;
    KToggleToolBarAction_Event_Callback ktoggletoolbaraction_event_callback = nullptr;
    KToggleToolBarAction_TimerEvent_Callback ktoggletoolbaraction_timerevent_callback = nullptr;
    KToggleToolBarAction_ChildEvent_Callback ktoggletoolbaraction_childevent_callback = nullptr;
    KToggleToolBarAction_CustomEvent_Callback ktoggletoolbaraction_customevent_callback = nullptr;
    KToggleToolBarAction_ConnectNotify_Callback ktoggletoolbaraction_connectnotify_callback = nullptr;
    KToggleToolBarAction_DisconnectNotify_Callback ktoggletoolbaraction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToggleToolBarAction {
        using KToggleToolBarAction::childEvent;
        using KToggleToolBarAction::connectNotify;
        using KToggleToolBarAction::customEvent;
        using KToggleToolBarAction::disconnectNotify;
        using KToggleToolBarAction::event;
        using KToggleToolBarAction::timerEvent;
    };

    VirtualKToggleToolBarAction(KToolBar* toolBar, const QString& text, QObject* parent) : KToggleToolBarAction(toolBar, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoggletoolbaraction_metaobject_callback) {
            QMetaObject* callback_ret = ktoggletoolbaraction_metaobject_callback(this);
            return callback_ret;
        }
        return KToggleToolBarAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoggletoolbaraction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktoggletoolbaraction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToggleToolBarAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoggletoolbaraction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktoggletoolbaraction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToggleToolBarAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoggletoolbaraction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktoggletoolbaraction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToggleToolBarAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoggletoolbaraction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktoggletoolbaraction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToggleToolBarAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoggletoolbaraction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktoggletoolbaraction_timerevent_callback(this, cbval1);
            return;
        }
        KToggleToolBarAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoggletoolbaraction_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktoggletoolbaraction_childevent_callback(this, cbval1);
            return;
        }
        KToggleToolBarAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoggletoolbaraction_customevent_callback) {
            QEvent* cbval1 = event;
            ktoggletoolbaraction_customevent_callback(this, cbval1);
            return;
        }
        KToggleToolBarAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoggletoolbaraction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoggletoolbaraction_connectnotify_callback(this, cbval1);
            return;
        }
        KToggleToolBarAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoggletoolbaraction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoggletoolbaraction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToggleToolBarAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KToggleToolBarAction_SuperEvent(KToggleToolBarAction* self, QEvent* param1);
    friend void KToggleToolBarAction_SuperTimerEvent(KToggleToolBarAction* self, QTimerEvent* event);
    friend void KToggleToolBarAction_SuperChildEvent(KToggleToolBarAction* self, QChildEvent* event);
    friend void KToggleToolBarAction_SuperCustomEvent(KToggleToolBarAction* self, QEvent* event);
    friend void KToggleToolBarAction_SuperConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
    friend void KToggleToolBarAction_SuperDisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
};

#endif
