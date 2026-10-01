#pragma once
#ifndef EXTRAS_KCONFIG_LIBKWINDOWSTATESAVER_HXX
#define EXTRAS_KCONFIG_LIBKWINDOWSTATESAVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowStateSaver
class VirtualKWindowStateSaver final : public KWindowStateSaver {
  public:
    // Virtual class public types (including callbacks and access types)
    using KWindowStateSaver_MetaObject_Callback = QMetaObject* (*)(const KWindowStateSaver*);
    using KWindowStateSaver_Metacast_Callback = void* (*)(KWindowStateSaver*, const char*);
    using KWindowStateSaver_Metacall_Callback = int (*)(KWindowStateSaver*, int, int, void**);
    using KWindowStateSaver_Event_Callback = bool (*)(KWindowStateSaver*, QEvent*);
    using KWindowStateSaver_ChildEvent_Callback = void (*)(KWindowStateSaver*, QChildEvent*);
    using KWindowStateSaver_CustomEvent_Callback = void (*)(KWindowStateSaver*, QEvent*);
    using KWindowStateSaver_ConnectNotify_Callback = void (*)(KWindowStateSaver*, QMetaMethod*);
    using KWindowStateSaver_DisconnectNotify_Callback = void (*)(KWindowStateSaver*, QMetaMethod*);
    using KWindowStateSaver::isSignalConnected;
    using KWindowStateSaver::receivers;
    using KWindowStateSaver::sender;
    using KWindowStateSaver::senderSignalIndex;

    // Instance callback storage
    KWindowStateSaver_MetaObject_Callback kwindowstatesaver_metaobject_callback = nullptr;
    KWindowStateSaver_Metacast_Callback kwindowstatesaver_metacast_callback = nullptr;
    KWindowStateSaver_Metacall_Callback kwindowstatesaver_metacall_callback = nullptr;
    KWindowStateSaver_Event_Callback kwindowstatesaver_event_callback = nullptr;
    KWindowStateSaver_ChildEvent_Callback kwindowstatesaver_childevent_callback = nullptr;
    KWindowStateSaver_CustomEvent_Callback kwindowstatesaver_customevent_callback = nullptr;
    KWindowStateSaver_ConnectNotify_Callback kwindowstatesaver_connectnotify_callback = nullptr;
    KWindowStateSaver_DisconnectNotify_Callback kwindowstatesaver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KWindowStateSaver {
        using KWindowStateSaver::childEvent;
        using KWindowStateSaver::connectNotify;
        using KWindowStateSaver::customEvent;
        using KWindowStateSaver::disconnectNotify;
    };

    VirtualKWindowStateSaver(QWindow* window, const KConfigGroup& configGroup) : KWindowStateSaver(window, configGroup) {};
    VirtualKWindowStateSaver(QWindow* window, const QString& configGroupName) : KWindowStateSaver(window, configGroupName) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwindowstatesaver_metaobject_callback) {
            QMetaObject* callback_ret = kwindowstatesaver_metaobject_callback(this);
            return callback_ret;
        }
        return KWindowStateSaver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwindowstatesaver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kwindowstatesaver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KWindowStateSaver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowstatesaver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kwindowstatesaver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWindowStateSaver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowstatesaver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kwindowstatesaver_event_callback(this, cbval1);
            return callback_ret;
        }
        return KWindowStateSaver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowstatesaver_childevent_callback) {
            QChildEvent* cbval1 = event;
            kwindowstatesaver_childevent_callback(this, cbval1);
            return;
        }
        KWindowStateSaver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowstatesaver_customevent_callback) {
            QEvent* cbval1 = event;
            kwindowstatesaver_customevent_callback(this, cbval1);
            return;
        }
        KWindowStateSaver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowstatesaver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwindowstatesaver_connectnotify_callback(this, cbval1);
            return;
        }
        KWindowStateSaver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowstatesaver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kwindowstatesaver_disconnectnotify_callback(this, cbval1);
            return;
        }
        KWindowStateSaver::disconnectNotify(signal);
    }

    // Friend functions
    friend void KWindowStateSaver_SuperChildEvent(KWindowStateSaver* self, QChildEvent* event);
    friend void KWindowStateSaver_SuperCustomEvent(KWindowStateSaver* self, QEvent* event);
    friend void KWindowStateSaver_SuperConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_SuperDisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
};

#endif
