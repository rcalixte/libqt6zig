#pragma once
#ifndef EXTRAS_KIO_LIBKPROPERTIESDIALOGPLUGIN_HXX
#define EXTRAS_KIO_LIBKPROPERTIESDIALOGPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPropertiesDialogPlugin
class VirtualKPropertiesDialogPlugin final : public KPropertiesDialogPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPropertiesDialogPlugin_MetaObject_Callback = QMetaObject* (*)(const KPropertiesDialogPlugin*);
    using KPropertiesDialogPlugin_Metacast_Callback = void* (*)(KPropertiesDialogPlugin*, const char*);
    using KPropertiesDialogPlugin_Metacall_Callback = int (*)(KPropertiesDialogPlugin*, int, int, void**);
    using KPropertiesDialogPlugin_ApplyChanges_Callback = void (*)(KPropertiesDialogPlugin*);
    using KPropertiesDialogPlugin_Event_Callback = bool (*)(KPropertiesDialogPlugin*, QEvent*);
    using KPropertiesDialogPlugin_EventFilter_Callback = bool (*)(KPropertiesDialogPlugin*, QObject*, QEvent*);
    using KPropertiesDialogPlugin_TimerEvent_Callback = void (*)(KPropertiesDialogPlugin*, QTimerEvent*);
    using KPropertiesDialogPlugin_ChildEvent_Callback = void (*)(KPropertiesDialogPlugin*, QChildEvent*);
    using KPropertiesDialogPlugin_CustomEvent_Callback = void (*)(KPropertiesDialogPlugin*, QEvent*);
    using KPropertiesDialogPlugin_ConnectNotify_Callback = void (*)(KPropertiesDialogPlugin*, QMetaMethod*);
    using KPropertiesDialogPlugin_DisconnectNotify_Callback = void (*)(KPropertiesDialogPlugin*, QMetaMethod*);
    using KPropertiesDialogPlugin::fontHeight;
    using KPropertiesDialogPlugin::isSignalConnected;
    using KPropertiesDialogPlugin::receivers;
    using KPropertiesDialogPlugin::sender;
    using KPropertiesDialogPlugin::senderSignalIndex;

    // Instance callback storage
    KPropertiesDialogPlugin_MetaObject_Callback kpropertiesdialogplugin_metaobject_callback = nullptr;
    KPropertiesDialogPlugin_Metacast_Callback kpropertiesdialogplugin_metacast_callback = nullptr;
    KPropertiesDialogPlugin_Metacall_Callback kpropertiesdialogplugin_metacall_callback = nullptr;
    KPropertiesDialogPlugin_ApplyChanges_Callback kpropertiesdialogplugin_applychanges_callback = nullptr;
    KPropertiesDialogPlugin_Event_Callback kpropertiesdialogplugin_event_callback = nullptr;
    KPropertiesDialogPlugin_EventFilter_Callback kpropertiesdialogplugin_eventfilter_callback = nullptr;
    KPropertiesDialogPlugin_TimerEvent_Callback kpropertiesdialogplugin_timerevent_callback = nullptr;
    KPropertiesDialogPlugin_ChildEvent_Callback kpropertiesdialogplugin_childevent_callback = nullptr;
    KPropertiesDialogPlugin_CustomEvent_Callback kpropertiesdialogplugin_customevent_callback = nullptr;
    KPropertiesDialogPlugin_ConnectNotify_Callback kpropertiesdialogplugin_connectnotify_callback = nullptr;
    KPropertiesDialogPlugin_DisconnectNotify_Callback kpropertiesdialogplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPropertiesDialogPlugin {
        using KPropertiesDialogPlugin::childEvent;
        using KPropertiesDialogPlugin::connectNotify;
        using KPropertiesDialogPlugin::customEvent;
        using KPropertiesDialogPlugin::disconnectNotify;
        using KPropertiesDialogPlugin::timerEvent;
    };

    VirtualKPropertiesDialogPlugin(QObject* parent) : KPropertiesDialogPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpropertiesdialogplugin_metaobject_callback) {
            QMetaObject* callback_ret = kpropertiesdialogplugin_metaobject_callback(this);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpropertiesdialogplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpropertiesdialogplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpropertiesdialogplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpropertiesdialogplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialogPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyChanges() override {
        if (kpropertiesdialogplugin_applychanges_callback) {
            kpropertiesdialogplugin_applychanges_callback(this);
            return;
        }
        KPropertiesDialogPlugin::applyChanges();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpropertiesdialogplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpropertiesdialogplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpropertiesdialogplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpropertiesdialogplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpropertiesdialogplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpropertiesdialogplugin_timerevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpropertiesdialogplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpropertiesdialogplugin_childevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpropertiesdialogplugin_customevent_callback) {
            QEvent* cbval1 = event;
            kpropertiesdialogplugin_customevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialogplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpropertiesdialogplugin_connectnotify_callback(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialogplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpropertiesdialogplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPropertiesDialogPlugin_SuperTimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event);
    friend void KPropertiesDialogPlugin_SuperChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event);
    friend void KPropertiesDialogPlugin_SuperCustomEvent(KPropertiesDialogPlugin* self, QEvent* event);
    friend void KPropertiesDialogPlugin_SuperConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
    friend void KPropertiesDialogPlugin_SuperDisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
};

#endif
