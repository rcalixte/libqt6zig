#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKXMESSAGES_HXX
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKXMESSAGES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMessages
class VirtualKXMessages final : public KXMessages {
  public:
    // Virtual class public types (including callbacks and access types)
    using KXMessages_MetaObject_Callback = QMetaObject* (*)(const KXMessages*);
    using KXMessages_Metacast_Callback = void* (*)(KXMessages*, const char*);
    using KXMessages_Metacall_Callback = int (*)(KXMessages*, int, int, void**);
    using KXMessages_Event_Callback = bool (*)(KXMessages*, QEvent*);
    using KXMessages_EventFilter_Callback = bool (*)(KXMessages*, QObject*, QEvent*);
    using KXMessages_TimerEvent_Callback = void (*)(KXMessages*, QTimerEvent*);
    using KXMessages_ChildEvent_Callback = void (*)(KXMessages*, QChildEvent*);
    using KXMessages_CustomEvent_Callback = void (*)(KXMessages*, QEvent*);
    using KXMessages_ConnectNotify_Callback = void (*)(KXMessages*, QMetaMethod*);
    using KXMessages_DisconnectNotify_Callback = void (*)(KXMessages*, QMetaMethod*);
    using KXMessages::isSignalConnected;
    using KXMessages::receivers;
    using KXMessages::sender;
    using KXMessages::senderSignalIndex;

    // Instance callback storage
    KXMessages_MetaObject_Callback kxmessages_metaobject_callback = nullptr;
    KXMessages_Metacast_Callback kxmessages_metacast_callback = nullptr;
    KXMessages_Metacall_Callback kxmessages_metacall_callback = nullptr;
    KXMessages_Event_Callback kxmessages_event_callback = nullptr;
    KXMessages_EventFilter_Callback kxmessages_eventfilter_callback = nullptr;
    KXMessages_TimerEvent_Callback kxmessages_timerevent_callback = nullptr;
    KXMessages_ChildEvent_Callback kxmessages_childevent_callback = nullptr;
    KXMessages_CustomEvent_Callback kxmessages_customevent_callback = nullptr;
    KXMessages_ConnectNotify_Callback kxmessages_connectnotify_callback = nullptr;
    KXMessages_DisconnectNotify_Callback kxmessages_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KXMessages {
        using KXMessages::childEvent;
        using KXMessages::connectNotify;
        using KXMessages::customEvent;
        using KXMessages::disconnectNotify;
        using KXMessages::timerEvent;
    };

    VirtualKXMessages() : KXMessages() {};
    VirtualKXMessages(xcb_connection_t* connection, xcb_window_t rootWindow) : KXMessages(connection, rootWindow) {};
    VirtualKXMessages(const char* accept_broadcast) : KXMessages(accept_broadcast) {};
    VirtualKXMessages(const char* accept_broadcast, QObject* parent) : KXMessages(accept_broadcast, parent) {};
    VirtualKXMessages(xcb_connection_t* connection, xcb_window_t rootWindow, const char* accept_broadcast) : KXMessages(connection, rootWindow, accept_broadcast) {};
    VirtualKXMessages(xcb_connection_t* connection, xcb_window_t rootWindow, const char* accept_broadcast, QObject* parent) : KXMessages(connection, rootWindow, accept_broadcast, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kxmessages_metaobject_callback) {
            QMetaObject* callback_ret = kxmessages_metaobject_callback(this);
            return callback_ret;
        }
        return KXMessages::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kxmessages_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kxmessages_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KXMessages::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmessages_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kxmessages_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KXMessages::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmessages_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kxmessages_event_callback(this, cbval1);
            return callback_ret;
        }
        return KXMessages::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmessages_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kxmessages_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KXMessages::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmessages_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kxmessages_timerevent_callback(this, cbval1);
            return;
        }
        KXMessages::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmessages_childevent_callback) {
            QChildEvent* cbval1 = event;
            kxmessages_childevent_callback(this, cbval1);
            return;
        }
        KXMessages::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmessages_customevent_callback) {
            QEvent* cbval1 = event;
            kxmessages_customevent_callback(this, cbval1);
            return;
        }
        KXMessages::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmessages_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxmessages_connectnotify_callback(this, cbval1);
            return;
        }
        KXMessages::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmessages_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxmessages_disconnectnotify_callback(this, cbval1);
            return;
        }
        KXMessages::disconnectNotify(signal);
    }

    // Friend functions
    friend void KXMessages_SuperTimerEvent(KXMessages* self, QTimerEvent* event);
    friend void KXMessages_SuperChildEvent(KXMessages* self, QChildEvent* event);
    friend void KXMessages_SuperCustomEvent(KXMessages* self, QEvent* event);
    friend void KXMessages_SuperConnectNotify(KXMessages* self, const QMetaMethod* signal);
    friend void KXMessages_SuperDisconnectNotify(KXMessages* self, const QMetaMethod* signal);
};

#endif
