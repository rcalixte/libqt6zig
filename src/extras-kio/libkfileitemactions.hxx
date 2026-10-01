#pragma once
#ifndef EXTRAS_KIO_LIBKFILEITEMACTIONS_HXX
#define EXTRAS_KIO_LIBKFILEITEMACTIONS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileItemActions
class VirtualKFileItemActions final : public KFileItemActions {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileItemActions_MetaObject_Callback = QMetaObject* (*)(const KFileItemActions*);
    using KFileItemActions_Metacast_Callback = void* (*)(KFileItemActions*, const char*);
    using KFileItemActions_Metacall_Callback = int (*)(KFileItemActions*, int, int, void**);
    using KFileItemActions_Event_Callback = bool (*)(KFileItemActions*, QEvent*);
    using KFileItemActions_EventFilter_Callback = bool (*)(KFileItemActions*, QObject*, QEvent*);
    using KFileItemActions_TimerEvent_Callback = void (*)(KFileItemActions*, QTimerEvent*);
    using KFileItemActions_ChildEvent_Callback = void (*)(KFileItemActions*, QChildEvent*);
    using KFileItemActions_CustomEvent_Callback = void (*)(KFileItemActions*, QEvent*);
    using KFileItemActions_ConnectNotify_Callback = void (*)(KFileItemActions*, QMetaMethod*);
    using KFileItemActions_DisconnectNotify_Callback = void (*)(KFileItemActions*, QMetaMethod*);
    using KFileItemActions::isSignalConnected;
    using KFileItemActions::receivers;
    using KFileItemActions::sender;
    using KFileItemActions::senderSignalIndex;

    // Instance callback storage
    KFileItemActions_MetaObject_Callback kfileitemactions_metaobject_callback = nullptr;
    KFileItemActions_Metacast_Callback kfileitemactions_metacast_callback = nullptr;
    KFileItemActions_Metacall_Callback kfileitemactions_metacall_callback = nullptr;
    KFileItemActions_Event_Callback kfileitemactions_event_callback = nullptr;
    KFileItemActions_EventFilter_Callback kfileitemactions_eventfilter_callback = nullptr;
    KFileItemActions_TimerEvent_Callback kfileitemactions_timerevent_callback = nullptr;
    KFileItemActions_ChildEvent_Callback kfileitemactions_childevent_callback = nullptr;
    KFileItemActions_CustomEvent_Callback kfileitemactions_customevent_callback = nullptr;
    KFileItemActions_ConnectNotify_Callback kfileitemactions_connectnotify_callback = nullptr;
    KFileItemActions_DisconnectNotify_Callback kfileitemactions_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileItemActions {
        using KFileItemActions::childEvent;
        using KFileItemActions::connectNotify;
        using KFileItemActions::customEvent;
        using KFileItemActions::disconnectNotify;
        using KFileItemActions::timerEvent;
    };

    VirtualKFileItemActions() : KFileItemActions() {};
    VirtualKFileItemActions(QObject* parent) : KFileItemActions(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileitemactions_metaobject_callback) {
            QMetaObject* callback_ret = kfileitemactions_metaobject_callback(this);
            return callback_ret;
        }
        return KFileItemActions::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileitemactions_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfileitemactions_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileItemActions::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileitemactions_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfileitemactions_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileItemActions::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileitemactions_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfileitemactions_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileItemActions::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfileitemactions_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfileitemactions_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileItemActions::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileitemactions_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfileitemactions_timerevent_callback(this, cbval1);
            return;
        }
        KFileItemActions::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileitemactions_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfileitemactions_childevent_callback(this, cbval1);
            return;
        }
        KFileItemActions::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileitemactions_customevent_callback) {
            QEvent* cbval1 = event;
            kfileitemactions_customevent_callback(this, cbval1);
            return;
        }
        KFileItemActions::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileitemactions_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileitemactions_connectnotify_callback(this, cbval1);
            return;
        }
        KFileItemActions::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileitemactions_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileitemactions_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileItemActions::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileItemActions_SuperTimerEvent(KFileItemActions* self, QTimerEvent* event);
    friend void KFileItemActions_SuperChildEvent(KFileItemActions* self, QChildEvent* event);
    friend void KFileItemActions_SuperCustomEvent(KFileItemActions* self, QEvent* event);
    friend void KFileItemActions_SuperConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_SuperDisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
};

#endif
