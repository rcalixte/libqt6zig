#pragma once
#ifndef EXTRAS_SOLID_LIBDEVICENOTIFIER_HXX
#define EXTRAS_SOLID_LIBDEVICENOTIFIER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Solid::DeviceNotifier
class VirtualSolidDeviceNotifier final : public Solid::DeviceNotifier {
  public:
    // Virtual class public types (including callbacks and access types)
    using Solid__DeviceNotifier_MetaObject_Callback = QMetaObject* (*)(const Solid__DeviceNotifier*);
    using Solid__DeviceNotifier_Metacast_Callback = void* (*)(Solid__DeviceNotifier*, const char*);
    using Solid__DeviceNotifier_Metacall_Callback = int (*)(Solid__DeviceNotifier*, int, int, void**);
    using Solid__DeviceNotifier_Event_Callback = bool (*)(Solid__DeviceNotifier*, QEvent*);
    using Solid__DeviceNotifier_EventFilter_Callback = bool (*)(Solid__DeviceNotifier*, QObject*, QEvent*);
    using Solid__DeviceNotifier_TimerEvent_Callback = void (*)(Solid__DeviceNotifier*, QTimerEvent*);
    using Solid__DeviceNotifier_ChildEvent_Callback = void (*)(Solid__DeviceNotifier*, QChildEvent*);
    using Solid__DeviceNotifier_CustomEvent_Callback = void (*)(Solid__DeviceNotifier*, QEvent*);
    using Solid__DeviceNotifier_ConnectNotify_Callback = void (*)(Solid__DeviceNotifier*, QMetaMethod*);
    using Solid__DeviceNotifier_DisconnectNotify_Callback = void (*)(Solid__DeviceNotifier*, QMetaMethod*);
    using Solid::DeviceNotifier::isSignalConnected;
    using Solid::DeviceNotifier::receivers;
    using Solid::DeviceNotifier::sender;
    using Solid::DeviceNotifier::senderSignalIndex;

    // Instance callback storage
    Solid__DeviceNotifier_MetaObject_Callback solid__devicenotifier_metaobject_callback = nullptr;
    Solid__DeviceNotifier_Metacast_Callback solid__devicenotifier_metacast_callback = nullptr;
    Solid__DeviceNotifier_Metacall_Callback solid__devicenotifier_metacall_callback = nullptr;
    Solid__DeviceNotifier_Event_Callback solid__devicenotifier_event_callback = nullptr;
    Solid__DeviceNotifier_EventFilter_Callback solid__devicenotifier_eventfilter_callback = nullptr;
    Solid__DeviceNotifier_TimerEvent_Callback solid__devicenotifier_timerevent_callback = nullptr;
    Solid__DeviceNotifier_ChildEvent_Callback solid__devicenotifier_childevent_callback = nullptr;
    Solid__DeviceNotifier_CustomEvent_Callback solid__devicenotifier_customevent_callback = nullptr;
    Solid__DeviceNotifier_ConnectNotify_Callback solid__devicenotifier_connectnotify_callback = nullptr;
    Solid__DeviceNotifier_DisconnectNotify_Callback solid__devicenotifier_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Solid::DeviceNotifier {
        using Solid::DeviceNotifier::childEvent;
        using Solid::DeviceNotifier::connectNotify;
        using Solid::DeviceNotifier::customEvent;
        using Solid::DeviceNotifier::disconnectNotify;
        using Solid::DeviceNotifier::timerEvent;
    };

    VirtualSolidDeviceNotifier() : Solid::DeviceNotifier() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (solid__devicenotifier_metaobject_callback) {
            QMetaObject* callback_ret = solid__devicenotifier_metaobject_callback(this);
            return callback_ret;
        }
        return Solid__DeviceNotifier::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (solid__devicenotifier_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = solid__devicenotifier_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Solid__DeviceNotifier::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (solid__devicenotifier_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = solid__devicenotifier_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Solid__DeviceNotifier::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (solid__devicenotifier_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = solid__devicenotifier_event_callback(this, cbval1);
            return callback_ret;
        }
        return Solid__DeviceNotifier::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (solid__devicenotifier_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = solid__devicenotifier_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Solid__DeviceNotifier::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (solid__devicenotifier_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            solid__devicenotifier_timerevent_callback(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (solid__devicenotifier_childevent_callback) {
            QChildEvent* cbval1 = event;
            solid__devicenotifier_childevent_callback(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (solid__devicenotifier_customevent_callback) {
            QEvent* cbval1 = event;
            solid__devicenotifier_customevent_callback(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (solid__devicenotifier_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            solid__devicenotifier_connectnotify_callback(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (solid__devicenotifier_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            solid__devicenotifier_disconnectnotify_callback(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::disconnectNotify(signal);
    }

    // Friend functions
    friend void Solid__DeviceNotifier_SuperTimerEvent(Solid::DeviceNotifier* self, QTimerEvent* event);
    friend void Solid__DeviceNotifier_SuperChildEvent(Solid::DeviceNotifier* self, QChildEvent* event);
    friend void Solid__DeviceNotifier_SuperCustomEvent(Solid::DeviceNotifier* self, QEvent* event);
    friend void Solid__DeviceNotifier_SuperConnectNotify(Solid::DeviceNotifier* self, const QMetaMethod* signal);
    friend void Solid__DeviceNotifier_SuperDisconnectNotify(Solid::DeviceNotifier* self, const QMetaMethod* signal);
};

#endif
