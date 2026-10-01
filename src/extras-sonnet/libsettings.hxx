#pragma once
#ifndef EXTRAS_SONNET_LIBSETTINGS_HXX
#define EXTRAS_SONNET_LIBSETTINGS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::Settings
class VirtualSonnetSettings final : public Sonnet::Settings {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__Settings_MetaObject_Callback = QMetaObject* (*)(const Sonnet__Settings*);
    using Sonnet__Settings_Metacast_Callback = void* (*)(Sonnet__Settings*, const char*);
    using Sonnet__Settings_Metacall_Callback = int (*)(Sonnet__Settings*, int, int, void**);
    using Sonnet__Settings_Event_Callback = bool (*)(Sonnet__Settings*, QEvent*);
    using Sonnet__Settings_EventFilter_Callback = bool (*)(Sonnet__Settings*, QObject*, QEvent*);
    using Sonnet__Settings_TimerEvent_Callback = void (*)(Sonnet__Settings*, QTimerEvent*);
    using Sonnet__Settings_ChildEvent_Callback = void (*)(Sonnet__Settings*, QChildEvent*);
    using Sonnet__Settings_CustomEvent_Callback = void (*)(Sonnet__Settings*, QEvent*);
    using Sonnet__Settings_ConnectNotify_Callback = void (*)(Sonnet__Settings*, QMetaMethod*);
    using Sonnet__Settings_DisconnectNotify_Callback = void (*)(Sonnet__Settings*, QMetaMethod*);
    using Sonnet::Settings::isSignalConnected;
    using Sonnet::Settings::receivers;
    using Sonnet::Settings::sender;
    using Sonnet::Settings::senderSignalIndex;

    // Instance callback storage
    Sonnet__Settings_MetaObject_Callback sonnet__settings_metaobject_callback = nullptr;
    Sonnet__Settings_Metacast_Callback sonnet__settings_metacast_callback = nullptr;
    Sonnet__Settings_Metacall_Callback sonnet__settings_metacall_callback = nullptr;
    Sonnet__Settings_Event_Callback sonnet__settings_event_callback = nullptr;
    Sonnet__Settings_EventFilter_Callback sonnet__settings_eventfilter_callback = nullptr;
    Sonnet__Settings_TimerEvent_Callback sonnet__settings_timerevent_callback = nullptr;
    Sonnet__Settings_ChildEvent_Callback sonnet__settings_childevent_callback = nullptr;
    Sonnet__Settings_CustomEvent_Callback sonnet__settings_customevent_callback = nullptr;
    Sonnet__Settings_ConnectNotify_Callback sonnet__settings_connectnotify_callback = nullptr;
    Sonnet__Settings_DisconnectNotify_Callback sonnet__settings_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::Settings {
        using Sonnet::Settings::childEvent;
        using Sonnet::Settings::connectNotify;
        using Sonnet::Settings::customEvent;
        using Sonnet::Settings::disconnectNotify;
        using Sonnet::Settings::timerEvent;
    };

    VirtualSonnetSettings() : Sonnet::Settings() {};
    VirtualSonnetSettings(QObject* parent) : Sonnet::Settings(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__settings_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__settings_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__Settings::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__settings_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__settings_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Settings::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__settings_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__settings_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Settings::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__settings_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__settings_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Settings::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__settings_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = sonnet__settings_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__Settings::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__settings_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__settings_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__Settings::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__settings_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__settings_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__Settings::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__settings_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__settings_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__Settings::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__settings_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__settings_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__Settings::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__settings_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__settings_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__Settings::disconnectNotify(signal);
    }

    // Friend functions
    friend void Sonnet__Settings_SuperTimerEvent(Sonnet::Settings* self, QTimerEvent* event);
    friend void Sonnet__Settings_SuperChildEvent(Sonnet::Settings* self, QChildEvent* event);
    friend void Sonnet__Settings_SuperCustomEvent(Sonnet::Settings* self, QEvent* event);
    friend void Sonnet__Settings_SuperConnectNotify(Sonnet::Settings* self, const QMetaMethod* signal);
    friend void Sonnet__Settings_SuperDisconnectNotify(Sonnet::Settings* self, const QMetaMethod* signal);
};

#endif
