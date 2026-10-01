#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBVIRTUALKEYBOARDWATCHER_HXX
#define EXTRAS_KIRIGAMI_LIBVIRTUALKEYBOARDWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::VirtualKeyboardWatcher
class VirtualKirigamiPlatformVirtualKeyboardWatcher final : public Kirigami::Platform::VirtualKeyboardWatcher {
  public:
    // Virtual class public types (including callbacks and access types)
    using Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback = QMetaObject* (*)(const Kirigami__Platform__VirtualKeyboardWatcher*);
    using Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback = void* (*)(Kirigami__Platform__VirtualKeyboardWatcher*, const char*);
    using Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback = int (*)(Kirigami__Platform__VirtualKeyboardWatcher*, int, int, void**);
    using Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback = bool (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback = bool (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QObject*, QEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QTimerEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QChildEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QMetaMethod*);
    using Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QMetaMethod*);
    using Kirigami::Platform::VirtualKeyboardWatcher::isSignalConnected;
    using Kirigami::Platform::VirtualKeyboardWatcher::receivers;
    using Kirigami::Platform::VirtualKeyboardWatcher::sender;
    using Kirigami::Platform::VirtualKeyboardWatcher::senderSignalIndex;

    // Instance callback storage
    Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback kirigami__platform__virtualkeyboardwatcher_metaobject_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback kirigami__platform__virtualkeyboardwatcher_metacast_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback kirigami__platform__virtualkeyboardwatcher_metacall_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback kirigami__platform__virtualkeyboardwatcher_event_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback kirigami__platform__virtualkeyboardwatcher_eventfilter_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback kirigami__platform__virtualkeyboardwatcher_timerevent_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback kirigami__platform__virtualkeyboardwatcher_childevent_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback kirigami__platform__virtualkeyboardwatcher_customevent_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback kirigami__platform__virtualkeyboardwatcher_connectnotify_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Kirigami::Platform::VirtualKeyboardWatcher {
        using Kirigami::Platform::VirtualKeyboardWatcher::childEvent;
        using Kirigami::Platform::VirtualKeyboardWatcher::connectNotify;
        using Kirigami::Platform::VirtualKeyboardWatcher::customEvent;
        using Kirigami::Platform::VirtualKeyboardWatcher::disconnectNotify;
        using Kirigami::Platform::VirtualKeyboardWatcher::timerEvent;
    };

    VirtualKirigamiPlatformVirtualKeyboardWatcher() : Kirigami::Platform::VirtualKeyboardWatcher() {};
    VirtualKirigamiPlatformVirtualKeyboardWatcher(QObject* parent) : Kirigami::Platform::VirtualKeyboardWatcher(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__virtualkeyboardwatcher_metaobject_callback) {
            QMetaObject* callback_ret = kirigami__platform__virtualkeyboardwatcher_metaobject_callback(this);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__virtualkeyboardwatcher_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kirigami__platform__virtualkeyboardwatcher_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__virtualkeyboardwatcher_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kirigami__platform__virtualkeyboardwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kirigami__platform__virtualkeyboardwatcher_event_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kirigami__platform__virtualkeyboardwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kirigami__platform__virtualkeyboardwatcher_timerevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_childevent_callback) {
            QChildEvent* cbval1 = event;
            kirigami__platform__virtualkeyboardwatcher_childevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_customevent_callback) {
            QEvent* cbval1 = event;
            kirigami__platform__virtualkeyboardwatcher_customevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__virtualkeyboardwatcher_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__virtualkeyboardwatcher_connectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::disconnectNotify(signal);
    }

    // Friend functions
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperTimerEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QTimerEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperChildEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QChildEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperCustomEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperConnectNotify(Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperDisconnectNotify(Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
};

#endif
