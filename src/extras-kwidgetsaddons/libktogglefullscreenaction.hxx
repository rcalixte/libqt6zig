#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOGGLEFULLSCREENACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTOGGLEFULLSCREENACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToggleFullScreenAction
class VirtualKToggleFullScreenAction final : public KToggleFullScreenAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToggleFullScreenAction_MetaObject_Callback = QMetaObject* (*)(const KToggleFullScreenAction*);
    using KToggleFullScreenAction_Metacast_Callback = void* (*)(KToggleFullScreenAction*, const char*);
    using KToggleFullScreenAction_Metacall_Callback = int (*)(KToggleFullScreenAction*, int, int, void**);
    using KToggleFullScreenAction_EventFilter_Callback = bool (*)(KToggleFullScreenAction*, QObject*, QEvent*);
    using KToggleFullScreenAction_SlotToggled_Callback = void (*)(KToggleFullScreenAction*, bool);
    using KToggleFullScreenAction_Event_Callback = bool (*)(KToggleFullScreenAction*, QEvent*);
    using KToggleFullScreenAction_TimerEvent_Callback = void (*)(KToggleFullScreenAction*, QTimerEvent*);
    using KToggleFullScreenAction_ChildEvent_Callback = void (*)(KToggleFullScreenAction*, QChildEvent*);
    using KToggleFullScreenAction_CustomEvent_Callback = void (*)(KToggleFullScreenAction*, QEvent*);
    using KToggleFullScreenAction_ConnectNotify_Callback = void (*)(KToggleFullScreenAction*, QMetaMethod*);
    using KToggleFullScreenAction_DisconnectNotify_Callback = void (*)(KToggleFullScreenAction*, QMetaMethod*);
    using KToggleFullScreenAction::isSignalConnected;
    using KToggleFullScreenAction::receivers;
    using KToggleFullScreenAction::sender;
    using KToggleFullScreenAction::senderSignalIndex;

    // Instance callback storage
    KToggleFullScreenAction_MetaObject_Callback ktogglefullscreenaction_metaobject_callback = nullptr;
    KToggleFullScreenAction_Metacast_Callback ktogglefullscreenaction_metacast_callback = nullptr;
    KToggleFullScreenAction_Metacall_Callback ktogglefullscreenaction_metacall_callback = nullptr;
    KToggleFullScreenAction_EventFilter_Callback ktogglefullscreenaction_eventfilter_callback = nullptr;
    KToggleFullScreenAction_SlotToggled_Callback ktogglefullscreenaction_slottoggled_callback = nullptr;
    KToggleFullScreenAction_Event_Callback ktogglefullscreenaction_event_callback = nullptr;
    KToggleFullScreenAction_TimerEvent_Callback ktogglefullscreenaction_timerevent_callback = nullptr;
    KToggleFullScreenAction_ChildEvent_Callback ktogglefullscreenaction_childevent_callback = nullptr;
    KToggleFullScreenAction_CustomEvent_Callback ktogglefullscreenaction_customevent_callback = nullptr;
    KToggleFullScreenAction_ConnectNotify_Callback ktogglefullscreenaction_connectnotify_callback = nullptr;
    KToggleFullScreenAction_DisconnectNotify_Callback ktogglefullscreenaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToggleFullScreenAction {
        using KToggleFullScreenAction::childEvent;
        using KToggleFullScreenAction::connectNotify;
        using KToggleFullScreenAction::customEvent;
        using KToggleFullScreenAction::disconnectNotify;
        using KToggleFullScreenAction::event;
        using KToggleFullScreenAction::eventFilter;
        using KToggleFullScreenAction::slotToggled;
        using KToggleFullScreenAction::timerEvent;
    };

    VirtualKToggleFullScreenAction(QObject* parent) : KToggleFullScreenAction(parent) {};
    VirtualKToggleFullScreenAction(QWidget* window, QObject* parent) : KToggleFullScreenAction(window, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktogglefullscreenaction_metaobject_callback) {
            QMetaObject* callback_ret = ktogglefullscreenaction_metaobject_callback(this);
            return callback_ret;
        }
        return KToggleFullScreenAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktogglefullscreenaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktogglefullscreenaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToggleFullScreenAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktogglefullscreenaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktogglefullscreenaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToggleFullScreenAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (ktogglefullscreenaction_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = ktogglefullscreenaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToggleFullScreenAction::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotToggled(bool checked) override {
        if (ktogglefullscreenaction_slottoggled_callback) {
            bool cbval1 = checked;
            ktogglefullscreenaction_slottoggled_callback(this, cbval1);
            return;
        }
        KToggleFullScreenAction::slotToggled(checked);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktogglefullscreenaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktogglefullscreenaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToggleFullScreenAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktogglefullscreenaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktogglefullscreenaction_timerevent_callback(this, cbval1);
            return;
        }
        KToggleFullScreenAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktogglefullscreenaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktogglefullscreenaction_childevent_callback(this, cbval1);
            return;
        }
        KToggleFullScreenAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktogglefullscreenaction_customevent_callback) {
            QEvent* cbval1 = event;
            ktogglefullscreenaction_customevent_callback(this, cbval1);
            return;
        }
        KToggleFullScreenAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktogglefullscreenaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktogglefullscreenaction_connectnotify_callback(this, cbval1);
            return;
        }
        KToggleFullScreenAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktogglefullscreenaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktogglefullscreenaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToggleFullScreenAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KToggleFullScreenAction_SuperEventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event);
    friend void KToggleFullScreenAction_SuperSlotToggled(KToggleFullScreenAction* self, bool checked);
    friend bool KToggleFullScreenAction_SuperEvent(KToggleFullScreenAction* self, QEvent* param1);
    friend void KToggleFullScreenAction_SuperTimerEvent(KToggleFullScreenAction* self, QTimerEvent* event);
    friend void KToggleFullScreenAction_SuperChildEvent(KToggleFullScreenAction* self, QChildEvent* event);
    friend void KToggleFullScreenAction_SuperCustomEvent(KToggleFullScreenAction* self, QEvent* event);
    friend void KToggleFullScreenAction_SuperConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
    friend void KToggleFullScreenAction_SuperDisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
};

#endif
