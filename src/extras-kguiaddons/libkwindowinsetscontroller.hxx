#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKWINDOWINSETSCONTROLLER_HXX
#define EXTRAS_KGUIADDONS_LIBKWINDOWINSETSCONTROLLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowInsetsController
class VirtualKWindowInsetsController final : public KWindowInsetsController {
  public:
    // Virtual class public types (including callbacks and access types)
    using KWindowInsetsController_MetaObject_Callback = QMetaObject* (*)(const KWindowInsetsController*);
    using KWindowInsetsController_Metacast_Callback = void* (*)(KWindowInsetsController*, const char*);
    using KWindowInsetsController_Metacall_Callback = int (*)(KWindowInsetsController*, int, int, void**);
    using KWindowInsetsController_Event_Callback = bool (*)(KWindowInsetsController*, QEvent*);
    using KWindowInsetsController_EventFilter_Callback = bool (*)(KWindowInsetsController*, QObject*, QEvent*);
    using KWindowInsetsController_TimerEvent_Callback = void (*)(KWindowInsetsController*, QTimerEvent*);
    using KWindowInsetsController_ChildEvent_Callback = void (*)(KWindowInsetsController*, QChildEvent*);
    using KWindowInsetsController_CustomEvent_Callback = void (*)(KWindowInsetsController*, QEvent*);
    using KWindowInsetsController_ConnectNotify_Callback = void (*)(KWindowInsetsController*, QMetaMethod*);
    using KWindowInsetsController_DisconnectNotify_Callback = void (*)(KWindowInsetsController*, QMetaMethod*);
    using KWindowInsetsController::isSignalConnected;
    using KWindowInsetsController::receivers;
    using KWindowInsetsController::sender;
    using KWindowInsetsController::senderSignalIndex;

    // Instance callback storage
    KWindowInsetsController_MetaObject_Callback kwindowinsetscontroller_metaobject_callback = nullptr;
    KWindowInsetsController_Metacast_Callback kwindowinsetscontroller_metacast_callback = nullptr;
    KWindowInsetsController_Metacall_Callback kwindowinsetscontroller_metacall_callback = nullptr;
    KWindowInsetsController_Event_Callback kwindowinsetscontroller_event_callback = nullptr;
    KWindowInsetsController_EventFilter_Callback kwindowinsetscontroller_eventfilter_callback = nullptr;
    KWindowInsetsController_TimerEvent_Callback kwindowinsetscontroller_timerevent_callback = nullptr;
    KWindowInsetsController_ChildEvent_Callback kwindowinsetscontroller_childevent_callback = nullptr;
    KWindowInsetsController_CustomEvent_Callback kwindowinsetscontroller_customevent_callback = nullptr;
    KWindowInsetsController_ConnectNotify_Callback kwindowinsetscontroller_connectnotify_callback = nullptr;
    KWindowInsetsController_DisconnectNotify_Callback kwindowinsetscontroller_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KWindowInsetsController {
        using KWindowInsetsController::childEvent;
        using KWindowInsetsController::connectNotify;
        using KWindowInsetsController::customEvent;
        using KWindowInsetsController::disconnectNotify;
        using KWindowInsetsController::timerEvent;
    };

    VirtualKWindowInsetsController() : KWindowInsetsController() {};
    VirtualKWindowInsetsController(QObject* parent) : KWindowInsetsController(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwindowinsetscontroller_metaobject_callback) {
            QMetaObject* callback_ret = kwindowinsetscontroller_metaobject_callback(this);
            return callback_ret;
        }
        return KWindowInsetsController::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwindowinsetscontroller_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kwindowinsetscontroller_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KWindowInsetsController::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowinsetscontroller_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kwindowinsetscontroller_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWindowInsetsController::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowinsetscontroller_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kwindowinsetscontroller_event_callback(this, cbval1);
            return callback_ret;
        }
        return KWindowInsetsController::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwindowinsetscontroller_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kwindowinsetscontroller_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KWindowInsetsController::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwindowinsetscontroller_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kwindowinsetscontroller_timerevent_callback(this, cbval1);
            return;
        }
        KWindowInsetsController::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowinsetscontroller_childevent_callback) {
            QChildEvent* cbval1 = event;
            kwindowinsetscontroller_childevent_callback(this, cbval1);
            return;
        }
        KWindowInsetsController::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowinsetscontroller_customevent_callback) {
            QEvent* cbval1 = event;
            kwindowinsetscontroller_customevent_callback(this, cbval1);
            return;
        }
        KWindowInsetsController::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowinsetscontroller_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwindowinsetscontroller_connectnotify_callback(this, cbval1);
            return;
        }
        KWindowInsetsController::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowinsetscontroller_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwindowinsetscontroller_disconnectnotify_callback(this, cbval1);
            return;
        }
        KWindowInsetsController::disconnectNotify(signal);
    }

    // Friend functions
    friend void KWindowInsetsController_SuperTimerEvent(KWindowInsetsController* self, QTimerEvent* event);
    friend void KWindowInsetsController_SuperChildEvent(KWindowInsetsController* self, QChildEvent* event);
    friend void KWindowInsetsController_SuperCustomEvent(KWindowInsetsController* self, QEvent* event);
    friend void KWindowInsetsController_SuperConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_SuperDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
};

#endif
