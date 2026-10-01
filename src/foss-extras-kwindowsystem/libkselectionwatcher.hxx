#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONWATCHER_HXX
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectionWatcher
class VirtualKSelectionWatcher final : public KSelectionWatcher {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSelectionWatcher_MetaObject_Callback = QMetaObject* (*)(const KSelectionWatcher*);
    using KSelectionWatcher_Metacast_Callback = void* (*)(KSelectionWatcher*, const char*);
    using KSelectionWatcher_Metacall_Callback = int (*)(KSelectionWatcher*, int, int, void**);
    using KSelectionWatcher_Event_Callback = bool (*)(KSelectionWatcher*, QEvent*);
    using KSelectionWatcher_EventFilter_Callback = bool (*)(KSelectionWatcher*, QObject*, QEvent*);
    using KSelectionWatcher_TimerEvent_Callback = void (*)(KSelectionWatcher*, QTimerEvent*);
    using KSelectionWatcher_ChildEvent_Callback = void (*)(KSelectionWatcher*, QChildEvent*);
    using KSelectionWatcher_CustomEvent_Callback = void (*)(KSelectionWatcher*, QEvent*);
    using KSelectionWatcher_ConnectNotify_Callback = void (*)(KSelectionWatcher*, QMetaMethod*);
    using KSelectionWatcher_DisconnectNotify_Callback = void (*)(KSelectionWatcher*, QMetaMethod*);
    using KSelectionWatcher::isSignalConnected;
    using KSelectionWatcher::receivers;
    using KSelectionWatcher::sender;
    using KSelectionWatcher::senderSignalIndex;

    // Instance callback storage
    KSelectionWatcher_MetaObject_Callback kselectionwatcher_metaobject_callback = nullptr;
    KSelectionWatcher_Metacast_Callback kselectionwatcher_metacast_callback = nullptr;
    KSelectionWatcher_Metacall_Callback kselectionwatcher_metacall_callback = nullptr;
    KSelectionWatcher_Event_Callback kselectionwatcher_event_callback = nullptr;
    KSelectionWatcher_EventFilter_Callback kselectionwatcher_eventfilter_callback = nullptr;
    KSelectionWatcher_TimerEvent_Callback kselectionwatcher_timerevent_callback = nullptr;
    KSelectionWatcher_ChildEvent_Callback kselectionwatcher_childevent_callback = nullptr;
    KSelectionWatcher_CustomEvent_Callback kselectionwatcher_customevent_callback = nullptr;
    KSelectionWatcher_ConnectNotify_Callback kselectionwatcher_connectnotify_callback = nullptr;
    KSelectionWatcher_DisconnectNotify_Callback kselectionwatcher_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSelectionWatcher {
        using KSelectionWatcher::childEvent;
        using KSelectionWatcher::connectNotify;
        using KSelectionWatcher::customEvent;
        using KSelectionWatcher::disconnectNotify;
        using KSelectionWatcher::timerEvent;
    };

    VirtualKSelectionWatcher(xcb_atom_t selection) : KSelectionWatcher(selection) {};
    VirtualKSelectionWatcher(const char* selection) : KSelectionWatcher(selection) {};
    VirtualKSelectionWatcher(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root) : KSelectionWatcher(selection, c, root) {};
    VirtualKSelectionWatcher(const char* selection, xcb_connection_t* c, xcb_window_t root) : KSelectionWatcher(selection, c, root) {};
    VirtualKSelectionWatcher(xcb_atom_t selection, int screen) : KSelectionWatcher(selection, screen) {};
    VirtualKSelectionWatcher(xcb_atom_t selection, int screen, QObject* parent) : KSelectionWatcher(selection, screen, parent) {};
    VirtualKSelectionWatcher(const char* selection, int screen) : KSelectionWatcher(selection, screen) {};
    VirtualKSelectionWatcher(const char* selection, int screen, QObject* parent) : KSelectionWatcher(selection, screen, parent) {};
    VirtualKSelectionWatcher(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root, QObject* parent) : KSelectionWatcher(selection, c, root, parent) {};
    VirtualKSelectionWatcher(const char* selection, xcb_connection_t* c, xcb_window_t root, QObject* parent) : KSelectionWatcher(selection, c, root, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselectionwatcher_metaobject_callback) {
            QMetaObject* callback_ret = kselectionwatcher_metaobject_callback(this);
            return callback_ret;
        }
        return KSelectionWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselectionwatcher_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kselectionwatcher_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectionwatcher_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kselectionwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelectionWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectionwatcher_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kselectionwatcher_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectionwatcher_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kselectionwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelectionWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectionwatcher_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kselectionwatcher_timerevent_callback(this, cbval1);
            return;
        }
        KSelectionWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectionwatcher_childevent_callback) {
            QChildEvent* cbval1 = event;
            kselectionwatcher_childevent_callback(this, cbval1);
            return;
        }
        KSelectionWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectionwatcher_customevent_callback) {
            QEvent* cbval1 = event;
            kselectionwatcher_customevent_callback(this, cbval1);
            return;
        }
        KSelectionWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectionwatcher_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectionwatcher_connectnotify_callback(this, cbval1);
            return;
        }
        KSelectionWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectionwatcher_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectionwatcher_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSelectionWatcher::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSelectionWatcher_SuperTimerEvent(KSelectionWatcher* self, QTimerEvent* event);
    friend void KSelectionWatcher_SuperChildEvent(KSelectionWatcher* self, QChildEvent* event);
    friend void KSelectionWatcher_SuperCustomEvent(KSelectionWatcher* self, QEvent* event);
    friend void KSelectionWatcher_SuperConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
    friend void KSelectionWatcher_SuperDisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
};

#endif
