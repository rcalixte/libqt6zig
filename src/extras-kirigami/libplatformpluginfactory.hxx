#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBPLATFORMPLUGINFACTORY_HXX
#define EXTRAS_KIRIGAMI_LIBPLATFORMPLUGINFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::PlatformPluginFactory
class VirtualKirigamiPlatformPlatformPluginFactory : public Kirigami::Platform::PlatformPluginFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using Kirigami__Platform__PlatformPluginFactory_MetaObject_Callback = QMetaObject* (*)(const Kirigami__Platform__PlatformPluginFactory*);
    using Kirigami__Platform__PlatformPluginFactory_Metacast_Callback = void* (*)(Kirigami__Platform__PlatformPluginFactory*, const char*);
    using Kirigami__Platform__PlatformPluginFactory_Metacall_Callback = int (*)(Kirigami__Platform__PlatformPluginFactory*, int, int, void**);
    using Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme_Callback = Kirigami__Platform__PlatformTheme* (*)(Kirigami__Platform__PlatformPluginFactory*, QObject*);
    using Kirigami__Platform__PlatformPluginFactory_CreateUnits_Callback = Kirigami__Platform__Units* (*)(Kirigami__Platform__PlatformPluginFactory*, QObject*);
    using Kirigami__Platform__PlatformPluginFactory_Event_Callback = bool (*)(Kirigami__Platform__PlatformPluginFactory*, QEvent*);
    using Kirigami__Platform__PlatformPluginFactory_EventFilter_Callback = bool (*)(Kirigami__Platform__PlatformPluginFactory*, QObject*, QEvent*);
    using Kirigami__Platform__PlatformPluginFactory_TimerEvent_Callback = void (*)(Kirigami__Platform__PlatformPluginFactory*, QTimerEvent*);
    using Kirigami__Platform__PlatformPluginFactory_ChildEvent_Callback = void (*)(Kirigami__Platform__PlatformPluginFactory*, QChildEvent*);
    using Kirigami__Platform__PlatformPluginFactory_CustomEvent_Callback = void (*)(Kirigami__Platform__PlatformPluginFactory*, QEvent*);
    using Kirigami__Platform__PlatformPluginFactory_ConnectNotify_Callback = void (*)(Kirigami__Platform__PlatformPluginFactory*, QMetaMethod*);
    using Kirigami__Platform__PlatformPluginFactory_DisconnectNotify_Callback = void (*)(Kirigami__Platform__PlatformPluginFactory*, QMetaMethod*);
    using Kirigami::Platform::PlatformPluginFactory::isSignalConnected;
    using Kirigami::Platform::PlatformPluginFactory::receivers;
    using Kirigami::Platform::PlatformPluginFactory::sender;
    using Kirigami::Platform::PlatformPluginFactory::senderSignalIndex;

    // Instance callback storage
    Kirigami__Platform__PlatformPluginFactory_MetaObject_Callback kirigami__platform__platformpluginfactory_metaobject_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_Metacast_Callback kirigami__platform__platformpluginfactory_metacast_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_Metacall_Callback kirigami__platform__platformpluginfactory_metacall_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme_Callback kirigami__platform__platformpluginfactory_createplatformtheme_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_CreateUnits_Callback kirigami__platform__platformpluginfactory_createunits_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_Event_Callback kirigami__platform__platformpluginfactory_event_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_EventFilter_Callback kirigami__platform__platformpluginfactory_eventfilter_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_TimerEvent_Callback kirigami__platform__platformpluginfactory_timerevent_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_ChildEvent_Callback kirigami__platform__platformpluginfactory_childevent_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_CustomEvent_Callback kirigami__platform__platformpluginfactory_customevent_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_ConnectNotify_Callback kirigami__platform__platformpluginfactory_connectnotify_callback = nullptr;
    Kirigami__Platform__PlatformPluginFactory_DisconnectNotify_Callback kirigami__platform__platformpluginfactory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Kirigami::Platform::PlatformPluginFactory {
        using Kirigami::Platform::PlatformPluginFactory::childEvent;
        using Kirigami::Platform::PlatformPluginFactory::connectNotify;
        using Kirigami::Platform::PlatformPluginFactory::customEvent;
        using Kirigami::Platform::PlatformPluginFactory::disconnectNotify;
        using Kirigami::Platform::PlatformPluginFactory::timerEvent;
    };

    VirtualKirigamiPlatformPlatformPluginFactory() : Kirigami::Platform::PlatformPluginFactory() {};
    VirtualKirigamiPlatformPlatformPluginFactory(QObject* parent) : Kirigami::Platform::PlatformPluginFactory(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__platformpluginfactory_metaobject_callback) {
            QMetaObject* callback_ret = kirigami__platform__platformpluginfactory_metaobject_callback(this);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformPluginFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__platformpluginfactory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kirigami__platform__platformpluginfactory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformPluginFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__platformpluginfactory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kirigami__platform__platformpluginfactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__PlatformPluginFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Kirigami::Platform::PlatformTheme* createPlatformTheme(QObject* parent) override {
        if (kirigami__platform__platformpluginfactory_createplatformtheme_callback) {
            QObject* cbval1 = parent;
            Kirigami__Platform__PlatformTheme* callback_ret = kirigami__platform__platformpluginfactory_createplatformtheme_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Kirigami::Platform::PlatformPluginFactory::createPlatformTheme called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual Kirigami::Platform::Units* createUnits(QObject* parent) override {
        if (kirigami__platform__platformpluginfactory_createunits_callback) {
            QObject* cbval1 = parent;
            Kirigami__Platform__Units* callback_ret = kirigami__platform__platformpluginfactory_createunits_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Kirigami::Platform::PlatformPluginFactory::createUnits called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__platformpluginfactory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kirigami__platform__platformpluginfactory_event_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformPluginFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__platformpluginfactory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kirigami__platform__platformpluginfactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformPluginFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__platformpluginfactory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kirigami__platform__platformpluginfactory_timerevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformPluginFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__platformpluginfactory_childevent_callback) {
            QChildEvent* cbval1 = event;
            kirigami__platform__platformpluginfactory_childevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformPluginFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__platformpluginfactory_customevent_callback) {
            QEvent* cbval1 = event;
            kirigami__platform__platformpluginfactory_customevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformPluginFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__platformpluginfactory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__platformpluginfactory_connectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformPluginFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__platformpluginfactory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__platformpluginfactory_disconnectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformPluginFactory::disconnectNotify(signal);
    }

    // Friend functions
    friend void Kirigami__Platform__PlatformPluginFactory_SuperTimerEvent(Kirigami::Platform::PlatformPluginFactory* self, QTimerEvent* event);
    friend void Kirigami__Platform__PlatformPluginFactory_SuperChildEvent(Kirigami::Platform::PlatformPluginFactory* self, QChildEvent* event);
    friend void Kirigami__Platform__PlatformPluginFactory_SuperCustomEvent(Kirigami::Platform::PlatformPluginFactory* self, QEvent* event);
    friend void Kirigami__Platform__PlatformPluginFactory_SuperConnectNotify(Kirigami::Platform::PlatformPluginFactory* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__PlatformPluginFactory_SuperDisconnectNotify(Kirigami::Platform::PlatformPluginFactory* self, const QMetaMethod* signal);
};

#endif
