#pragma once
#ifndef EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMANAGER_HXX
#define EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorSchemeManager
class VirtualKColorSchemeManager final : public KColorSchemeManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColorSchemeManager_MetaObject_Callback = QMetaObject* (*)(const KColorSchemeManager*);
    using KColorSchemeManager_Metacast_Callback = void* (*)(KColorSchemeManager*, const char*);
    using KColorSchemeManager_Metacall_Callback = int (*)(KColorSchemeManager*, int, int, void**);
    using KColorSchemeManager_Event_Callback = bool (*)(KColorSchemeManager*, QEvent*);
    using KColorSchemeManager_EventFilter_Callback = bool (*)(KColorSchemeManager*, QObject*, QEvent*);
    using KColorSchemeManager_TimerEvent_Callback = void (*)(KColorSchemeManager*, QTimerEvent*);
    using KColorSchemeManager_ChildEvent_Callback = void (*)(KColorSchemeManager*, QChildEvent*);
    using KColorSchemeManager_CustomEvent_Callback = void (*)(KColorSchemeManager*, QEvent*);
    using KColorSchemeManager_ConnectNotify_Callback = void (*)(KColorSchemeManager*, QMetaMethod*);
    using KColorSchemeManager_DisconnectNotify_Callback = void (*)(KColorSchemeManager*, QMetaMethod*);
    using KColorSchemeManager::isSignalConnected;
    using KColorSchemeManager::receivers;
    using KColorSchemeManager::sender;
    using KColorSchemeManager::senderSignalIndex;

    // Instance callback storage
    KColorSchemeManager_MetaObject_Callback kcolorschememanager_metaobject_callback = nullptr;
    KColorSchemeManager_Metacast_Callback kcolorschememanager_metacast_callback = nullptr;
    KColorSchemeManager_Metacall_Callback kcolorschememanager_metacall_callback = nullptr;
    KColorSchemeManager_Event_Callback kcolorschememanager_event_callback = nullptr;
    KColorSchemeManager_EventFilter_Callback kcolorschememanager_eventfilter_callback = nullptr;
    KColorSchemeManager_TimerEvent_Callback kcolorschememanager_timerevent_callback = nullptr;
    KColorSchemeManager_ChildEvent_Callback kcolorschememanager_childevent_callback = nullptr;
    KColorSchemeManager_CustomEvent_Callback kcolorschememanager_customevent_callback = nullptr;
    KColorSchemeManager_ConnectNotify_Callback kcolorschememanager_connectnotify_callback = nullptr;
    KColorSchemeManager_DisconnectNotify_Callback kcolorschememanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColorSchemeManager {
        using KColorSchemeManager::childEvent;
        using KColorSchemeManager::connectNotify;
        using KColorSchemeManager::customEvent;
        using KColorSchemeManager::disconnectNotify;
        using KColorSchemeManager::timerEvent;
    };

    VirtualKColorSchemeManager() : KColorSchemeManager() {};
    VirtualKColorSchemeManager(QObject* parent) : KColorSchemeManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorschememanager_metaobject_callback) {
            QMetaObject* callback_ret = kcolorschememanager_metaobject_callback(this);
            return callback_ret;
        }
        return KColorSchemeManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorschememanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolorschememanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorschememanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolorschememanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorschememanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcolorschememanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorschememanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolorschememanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorSchemeManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorschememanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcolorschememanager_timerevent_callback(this, cbval1);
            return;
        }
        KColorSchemeManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorschememanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolorschememanager_childevent_callback(this, cbval1);
            return;
        }
        KColorSchemeManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorschememanager_customevent_callback) {
            QEvent* cbval1 = event;
            kcolorschememanager_customevent_callback(this, cbval1);
            return;
        }
        KColorSchemeManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorschememanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorschememanager_connectnotify_callback(this, cbval1);
            return;
        }
        KColorSchemeManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorschememanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorschememanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColorSchemeManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void KColorSchemeManager_SuperTimerEvent(KColorSchemeManager* self, QTimerEvent* event);
    friend void KColorSchemeManager_SuperChildEvent(KColorSchemeManager* self, QChildEvent* event);
    friend void KColorSchemeManager_SuperCustomEvent(KColorSchemeManager* self, QEvent* event);
    friend void KColorSchemeManager_SuperConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
    friend void KColorSchemeManager_SuperDisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
};

#endif
