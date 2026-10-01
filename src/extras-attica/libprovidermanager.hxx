#pragma once
#ifndef EXTRAS_ATTICA_LIBPROVIDERMANAGER_HXX
#define EXTRAS_ATTICA_LIBPROVIDERMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Attica::ProviderManager
class VirtualAtticaProviderManager final : public Attica::ProviderManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using Attica__ProviderManager_MetaObject_Callback = QMetaObject* (*)(const Attica__ProviderManager*);
    using Attica__ProviderManager_Metacast_Callback = void* (*)(Attica__ProviderManager*, const char*);
    using Attica__ProviderManager_Metacall_Callback = int (*)(Attica__ProviderManager*, int, int, void**);
    using Attica__ProviderManager_Event_Callback = bool (*)(Attica__ProviderManager*, QEvent*);
    using Attica__ProviderManager_EventFilter_Callback = bool (*)(Attica__ProviderManager*, QObject*, QEvent*);
    using Attica__ProviderManager_TimerEvent_Callback = void (*)(Attica__ProviderManager*, QTimerEvent*);
    using Attica__ProviderManager_ChildEvent_Callback = void (*)(Attica__ProviderManager*, QChildEvent*);
    using Attica__ProviderManager_CustomEvent_Callback = void (*)(Attica__ProviderManager*, QEvent*);
    using Attica__ProviderManager_ConnectNotify_Callback = void (*)(Attica__ProviderManager*, QMetaMethod*);
    using Attica__ProviderManager_DisconnectNotify_Callback = void (*)(Attica__ProviderManager*, QMetaMethod*);
    using Attica::ProviderManager::isSignalConnected;
    using Attica::ProviderManager::receivers;
    using Attica::ProviderManager::sender;
    using Attica::ProviderManager::senderSignalIndex;

    // Instance callback storage
    Attica__ProviderManager_MetaObject_Callback attica__providermanager_metaobject_callback = nullptr;
    Attica__ProviderManager_Metacast_Callback attica__providermanager_metacast_callback = nullptr;
    Attica__ProviderManager_Metacall_Callback attica__providermanager_metacall_callback = nullptr;
    Attica__ProviderManager_Event_Callback attica__providermanager_event_callback = nullptr;
    Attica__ProviderManager_EventFilter_Callback attica__providermanager_eventfilter_callback = nullptr;
    Attica__ProviderManager_TimerEvent_Callback attica__providermanager_timerevent_callback = nullptr;
    Attica__ProviderManager_ChildEvent_Callback attica__providermanager_childevent_callback = nullptr;
    Attica__ProviderManager_CustomEvent_Callback attica__providermanager_customevent_callback = nullptr;
    Attica__ProviderManager_ConnectNotify_Callback attica__providermanager_connectnotify_callback = nullptr;
    Attica__ProviderManager_DisconnectNotify_Callback attica__providermanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Attica::ProviderManager {
        using Attica::ProviderManager::childEvent;
        using Attica::ProviderManager::connectNotify;
        using Attica::ProviderManager::customEvent;
        using Attica::ProviderManager::disconnectNotify;
        using Attica::ProviderManager::timerEvent;
    };

    VirtualAtticaProviderManager() : Attica::ProviderManager() {};
    VirtualAtticaProviderManager(const Attica::ProviderManager::ProviderFlags& flags) : Attica::ProviderManager(flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (attica__providermanager_metaobject_callback) {
            QMetaObject* callback_ret = attica__providermanager_metaobject_callback(this);
            return callback_ret;
        }
        return Attica__ProviderManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (attica__providermanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = attica__providermanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Attica__ProviderManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (attica__providermanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = attica__providermanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Attica__ProviderManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (attica__providermanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = attica__providermanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return Attica__ProviderManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (attica__providermanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = attica__providermanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Attica__ProviderManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (attica__providermanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            attica__providermanager_timerevent_callback(this, cbval1);
            return;
        }
        Attica__ProviderManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (attica__providermanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            attica__providermanager_childevent_callback(this, cbval1);
            return;
        }
        Attica__ProviderManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (attica__providermanager_customevent_callback) {
            QEvent* cbval1 = event;
            attica__providermanager_customevent_callback(this, cbval1);
            return;
        }
        Attica__ProviderManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (attica__providermanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            attica__providermanager_connectnotify_callback(this, cbval1);
            return;
        }
        Attica__ProviderManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (attica__providermanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            attica__providermanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        Attica__ProviderManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void Attica__ProviderManager_SuperTimerEvent(Attica::ProviderManager* self, QTimerEvent* event);
    friend void Attica__ProviderManager_SuperChildEvent(Attica::ProviderManager* self, QChildEvent* event);
    friend void Attica__ProviderManager_SuperCustomEvent(Attica::ProviderManager* self, QEvent* event);
    friend void Attica__ProviderManager_SuperConnectNotify(Attica::ProviderManager* self, const QMetaMethod* signal);
    friend void Attica__ProviderManager_SuperDisconnectNotify(Attica::ProviderManager* self, const QMetaMethod* signal);
};

#endif
