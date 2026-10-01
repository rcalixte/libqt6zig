#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBUNITS_HXX
#define EXTRAS_KIRIGAMI_LIBUNITS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::IconSizes
class VirtualKirigamiPlatformIconSizes final : public Kirigami::Platform::IconSizes {
  public:
    // Virtual class public types (including callbacks and access types)
    using Kirigami__Platform__IconSizes_MetaObject_Callback = QMetaObject* (*)(const Kirigami__Platform__IconSizes*);
    using Kirigami__Platform__IconSizes_Metacast_Callback = void* (*)(Kirigami__Platform__IconSizes*, const char*);
    using Kirigami__Platform__IconSizes_Metacall_Callback = int (*)(Kirigami__Platform__IconSizes*, int, int, void**);
    using Kirigami__Platform__IconSizes_Event_Callback = bool (*)(Kirigami__Platform__IconSizes*, QEvent*);
    using Kirigami__Platform__IconSizes_EventFilter_Callback = bool (*)(Kirigami__Platform__IconSizes*, QObject*, QEvent*);
    using Kirigami__Platform__IconSizes_TimerEvent_Callback = void (*)(Kirigami__Platform__IconSizes*, QTimerEvent*);
    using Kirigami__Platform__IconSizes_ChildEvent_Callback = void (*)(Kirigami__Platform__IconSizes*, QChildEvent*);
    using Kirigami__Platform__IconSizes_CustomEvent_Callback = void (*)(Kirigami__Platform__IconSizes*, QEvent*);
    using Kirigami__Platform__IconSizes_ConnectNotify_Callback = void (*)(Kirigami__Platform__IconSizes*, QMetaMethod*);
    using Kirigami__Platform__IconSizes_DisconnectNotify_Callback = void (*)(Kirigami__Platform__IconSizes*, QMetaMethod*);
    using Kirigami::Platform::IconSizes::isSignalConnected;
    using Kirigami::Platform::IconSizes::receivers;
    using Kirigami::Platform::IconSizes::sender;
    using Kirigami::Platform::IconSizes::senderSignalIndex;

    // Instance callback storage
    Kirigami__Platform__IconSizes_MetaObject_Callback kirigami__platform__iconsizes_metaobject_callback = nullptr;
    Kirigami__Platform__IconSizes_Metacast_Callback kirigami__platform__iconsizes_metacast_callback = nullptr;
    Kirigami__Platform__IconSizes_Metacall_Callback kirigami__platform__iconsizes_metacall_callback = nullptr;
    Kirigami__Platform__IconSizes_Event_Callback kirigami__platform__iconsizes_event_callback = nullptr;
    Kirigami__Platform__IconSizes_EventFilter_Callback kirigami__platform__iconsizes_eventfilter_callback = nullptr;
    Kirigami__Platform__IconSizes_TimerEvent_Callback kirigami__platform__iconsizes_timerevent_callback = nullptr;
    Kirigami__Platform__IconSizes_ChildEvent_Callback kirigami__platform__iconsizes_childevent_callback = nullptr;
    Kirigami__Platform__IconSizes_CustomEvent_Callback kirigami__platform__iconsizes_customevent_callback = nullptr;
    Kirigami__Platform__IconSizes_ConnectNotify_Callback kirigami__platform__iconsizes_connectnotify_callback = nullptr;
    Kirigami__Platform__IconSizes_DisconnectNotify_Callback kirigami__platform__iconsizes_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Kirigami::Platform::IconSizes {
        using Kirigami::Platform::IconSizes::childEvent;
        using Kirigami::Platform::IconSizes::connectNotify;
        using Kirigami::Platform::IconSizes::customEvent;
        using Kirigami::Platform::IconSizes::disconnectNotify;
        using Kirigami::Platform::IconSizes::timerEvent;
    };

    VirtualKirigamiPlatformIconSizes(Kirigami::Platform::Units* units) : Kirigami::Platform::IconSizes(units) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__iconsizes_metaobject_callback) {
            QMetaObject* callback_ret = kirigami__platform__iconsizes_metaobject_callback(this);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__iconsizes_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kirigami__platform__iconsizes_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__iconsizes_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kirigami__platform__iconsizes_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__IconSizes::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__iconsizes_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kirigami__platform__iconsizes_event_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__iconsizes_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kirigami__platform__iconsizes_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__iconsizes_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kirigami__platform__iconsizes_timerevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__iconsizes_childevent_callback) {
            QChildEvent* cbval1 = event;
            kirigami__platform__iconsizes_childevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__iconsizes_customevent_callback) {
            QEvent* cbval1 = event;
            kirigami__platform__iconsizes_customevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__iconsizes_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__iconsizes_connectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__iconsizes_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__iconsizes_disconnectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::disconnectNotify(signal);
    }

    // Friend functions
    friend void Kirigami__Platform__IconSizes_SuperTimerEvent(Kirigami::Platform::IconSizes* self, QTimerEvent* event);
    friend void Kirigami__Platform__IconSizes_SuperChildEvent(Kirigami::Platform::IconSizes* self, QChildEvent* event);
    friend void Kirigami__Platform__IconSizes_SuperCustomEvent(Kirigami::Platform::IconSizes* self, QEvent* event);
    friend void Kirigami__Platform__IconSizes_SuperConnectNotify(Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__IconSizes_SuperDisconnectNotify(Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
};

#endif
