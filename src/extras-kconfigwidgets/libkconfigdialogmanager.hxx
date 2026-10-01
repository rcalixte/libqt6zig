#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCONFIGDIALOGMANAGER_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKCONFIGDIALOGMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigDialogManager
class VirtualKConfigDialogManager final : public KConfigDialogManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigDialogManager_MetaObject_Callback = QMetaObject* (*)(const KConfigDialogManager*);
    using KConfigDialogManager_Metacast_Callback = void* (*)(KConfigDialogManager*, const char*);
    using KConfigDialogManager_Metacall_Callback = int (*)(KConfigDialogManager*, int, int, void**);
    using KConfigDialogManager_Event_Callback = bool (*)(KConfigDialogManager*, QEvent*);
    using KConfigDialogManager_EventFilter_Callback = bool (*)(KConfigDialogManager*, QObject*, QEvent*);
    using KConfigDialogManager_TimerEvent_Callback = void (*)(KConfigDialogManager*, QTimerEvent*);
    using KConfigDialogManager_ChildEvent_Callback = void (*)(KConfigDialogManager*, QChildEvent*);
    using KConfigDialogManager_CustomEvent_Callback = void (*)(KConfigDialogManager*, QEvent*);
    using KConfigDialogManager_ConnectNotify_Callback = void (*)(KConfigDialogManager*, QMetaMethod*);
    using KConfigDialogManager_DisconnectNotify_Callback = void (*)(KConfigDialogManager*, QMetaMethod*);
    using KConfigDialogManager::getCustomProperty;
    using KConfigDialogManager::getCustomPropertyChangedSignal;
    using KConfigDialogManager::getUserProperty;
    using KConfigDialogManager::getUserPropertyChangedSignal;
    using KConfigDialogManager::init;
    using KConfigDialogManager::initMaps;
    using KConfigDialogManager::isSignalConnected;
    using KConfigDialogManager::parseChildren;
    using KConfigDialogManager::property;
    using KConfigDialogManager::receivers;
    using KConfigDialogManager::sender;
    using KConfigDialogManager::senderSignalIndex;
    using KConfigDialogManager::setProperty;
    using KConfigDialogManager::setupWidget;

    // Instance callback storage
    KConfigDialogManager_MetaObject_Callback kconfigdialogmanager_metaobject_callback = nullptr;
    KConfigDialogManager_Metacast_Callback kconfigdialogmanager_metacast_callback = nullptr;
    KConfigDialogManager_Metacall_Callback kconfigdialogmanager_metacall_callback = nullptr;
    KConfigDialogManager_Event_Callback kconfigdialogmanager_event_callback = nullptr;
    KConfigDialogManager_EventFilter_Callback kconfigdialogmanager_eventfilter_callback = nullptr;
    KConfigDialogManager_TimerEvent_Callback kconfigdialogmanager_timerevent_callback = nullptr;
    KConfigDialogManager_ChildEvent_Callback kconfigdialogmanager_childevent_callback = nullptr;
    KConfigDialogManager_CustomEvent_Callback kconfigdialogmanager_customevent_callback = nullptr;
    KConfigDialogManager_ConnectNotify_Callback kconfigdialogmanager_connectnotify_callback = nullptr;
    KConfigDialogManager_DisconnectNotify_Callback kconfigdialogmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KConfigDialogManager {
        using KConfigDialogManager::childEvent;
        using KConfigDialogManager::connectNotify;
        using KConfigDialogManager::customEvent;
        using KConfigDialogManager::disconnectNotify;
        using KConfigDialogManager::timerEvent;
    };

    VirtualKConfigDialogManager(QWidget* parent, KCoreConfigSkeleton* conf) : KConfigDialogManager(parent, conf) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigdialogmanager_metaobject_callback) {
            QMetaObject* callback_ret = kconfigdialogmanager_metaobject_callback(this);
            return callback_ret;
        }
        return KConfigDialogManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigdialogmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kconfigdialogmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigDialogManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigdialogmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kconfigdialogmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialogManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigdialogmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kconfigdialogmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigDialogManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigdialogmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kconfigdialogmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigDialogManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigdialogmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kconfigdialogmanager_timerevent_callback(this, cbval1);
            return;
        }
        KConfigDialogManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigdialogmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            kconfigdialogmanager_childevent_callback(this, cbval1);
            return;
        }
        KConfigDialogManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigdialogmanager_customevent_callback) {
            QEvent* cbval1 = event;
            kconfigdialogmanager_customevent_callback(this, cbval1);
            return;
        }
        KConfigDialogManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigdialogmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigdialogmanager_connectnotify_callback(this, cbval1);
            return;
        }
        KConfigDialogManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigdialogmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigdialogmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        KConfigDialogManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void KConfigDialogManager_SuperTimerEvent(KConfigDialogManager* self, QTimerEvent* event);
    friend void KConfigDialogManager_SuperChildEvent(KConfigDialogManager* self, QChildEvent* event);
    friend void KConfigDialogManager_SuperCustomEvent(KConfigDialogManager* self, QEvent* event);
    friend void KConfigDialogManager_SuperConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_SuperDisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
};

#endif
