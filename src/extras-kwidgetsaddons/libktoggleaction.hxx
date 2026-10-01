#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOGGLEACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTOGGLEACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToggleAction
class VirtualKToggleAction final : public KToggleAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToggleAction_MetaObject_Callback = QMetaObject* (*)(const KToggleAction*);
    using KToggleAction_Metacast_Callback = void* (*)(KToggleAction*, const char*);
    using KToggleAction_Metacall_Callback = int (*)(KToggleAction*, int, int, void**);
    using KToggleAction_SlotToggled_Callback = void (*)(KToggleAction*, bool);
    using KToggleAction_Event_Callback = bool (*)(KToggleAction*, QEvent*);
    using KToggleAction_EventFilter_Callback = bool (*)(KToggleAction*, QObject*, QEvent*);
    using KToggleAction_TimerEvent_Callback = void (*)(KToggleAction*, QTimerEvent*);
    using KToggleAction_ChildEvent_Callback = void (*)(KToggleAction*, QChildEvent*);
    using KToggleAction_CustomEvent_Callback = void (*)(KToggleAction*, QEvent*);
    using KToggleAction_ConnectNotify_Callback = void (*)(KToggleAction*, QMetaMethod*);
    using KToggleAction_DisconnectNotify_Callback = void (*)(KToggleAction*, QMetaMethod*);
    using KToggleAction::isSignalConnected;
    using KToggleAction::receivers;
    using KToggleAction::sender;
    using KToggleAction::senderSignalIndex;

    // Instance callback storage
    KToggleAction_MetaObject_Callback ktoggleaction_metaobject_callback = nullptr;
    KToggleAction_Metacast_Callback ktoggleaction_metacast_callback = nullptr;
    KToggleAction_Metacall_Callback ktoggleaction_metacall_callback = nullptr;
    KToggleAction_SlotToggled_Callback ktoggleaction_slottoggled_callback = nullptr;
    KToggleAction_Event_Callback ktoggleaction_event_callback = nullptr;
    KToggleAction_EventFilter_Callback ktoggleaction_eventfilter_callback = nullptr;
    KToggleAction_TimerEvent_Callback ktoggleaction_timerevent_callback = nullptr;
    KToggleAction_ChildEvent_Callback ktoggleaction_childevent_callback = nullptr;
    KToggleAction_CustomEvent_Callback ktoggleaction_customevent_callback = nullptr;
    KToggleAction_ConnectNotify_Callback ktoggleaction_connectnotify_callback = nullptr;
    KToggleAction_DisconnectNotify_Callback ktoggleaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToggleAction {
        using KToggleAction::childEvent;
        using KToggleAction::connectNotify;
        using KToggleAction::customEvent;
        using KToggleAction::disconnectNotify;
        using KToggleAction::event;
        using KToggleAction::slotToggled;
        using KToggleAction::timerEvent;
    };

    VirtualKToggleAction(QObject* parent) : KToggleAction(parent) {};
    VirtualKToggleAction(const QString& text, QObject* parent) : KToggleAction(text, parent) {};
    VirtualKToggleAction(const QIcon& icon, const QString& text, QObject* parent) : KToggleAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoggleaction_metaobject_callback) {
            QMetaObject* callback_ret = ktoggleaction_metaobject_callback(this);
            return callback_ret;
        }
        return KToggleAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoggleaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktoggleaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToggleAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoggleaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktoggleaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToggleAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotToggled(bool checked) override {
        if (ktoggleaction_slottoggled_callback) {
            bool cbval1 = checked;
            ktoggleaction_slottoggled_callback(this, cbval1);
            return;
        }
        KToggleAction::slotToggled(checked);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoggleaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktoggleaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToggleAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoggleaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktoggleaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToggleAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoggleaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktoggleaction_timerevent_callback(this, cbval1);
            return;
        }
        KToggleAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoggleaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktoggleaction_childevent_callback(this, cbval1);
            return;
        }
        KToggleAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoggleaction_customevent_callback) {
            QEvent* cbval1 = event;
            ktoggleaction_customevent_callback(this, cbval1);
            return;
        }
        KToggleAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoggleaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoggleaction_connectnotify_callback(this, cbval1);
            return;
        }
        KToggleAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoggleaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoggleaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToggleAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KToggleAction_SuperSlotToggled(KToggleAction* self, bool checked);
    friend bool KToggleAction_SuperEvent(KToggleAction* self, QEvent* param1);
    friend void KToggleAction_SuperTimerEvent(KToggleAction* self, QTimerEvent* event);
    friend void KToggleAction_SuperChildEvent(KToggleAction* self, QChildEvent* event);
    friend void KToggleAction_SuperCustomEvent(KToggleAction* self, QEvent* event);
    friend void KToggleAction_SuperConnectNotify(KToggleAction* self, const QMetaMethod* signal);
    friend void KToggleAction_SuperDisconnectNotify(KToggleAction* self, const QMetaMethod* signal);
};

#endif
