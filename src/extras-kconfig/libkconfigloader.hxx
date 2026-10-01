#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGLOADER_HXX
#define EXTRAS_KCONFIG_LIBKCONFIGLOADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigLoader
class VirtualKConfigLoader final : public KConfigLoader {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigLoader_UsrSave_Callback = bool (*)(KConfigLoader*);
    using KConfigLoader_MetaObject_Callback = QMetaObject* (*)(const KConfigLoader*);
    using KConfigLoader_Metacast_Callback = void* (*)(KConfigLoader*, const char*);
    using KConfigLoader_Metacall_Callback = int (*)(KConfigLoader*, int, int, void**);
    using KConfigLoader_SetDefaults_Callback = void (*)(KConfigLoader*);
    using KConfigLoader_UseDefaults_Callback = bool (*)(KConfigLoader*, bool);
    using KConfigLoader_UsrUseDefaults_Callback = bool (*)(KConfigLoader*, bool);
    using KConfigLoader_UsrSetDefaults_Callback = void (*)(KConfigLoader*);
    using KConfigLoader_UsrRead_Callback = void (*)(KConfigLoader*);
    using KConfigLoader_Event_Callback = bool (*)(KConfigLoader*, QEvent*);
    using KConfigLoader_EventFilter_Callback = bool (*)(KConfigLoader*, QObject*, QEvent*);
    using KConfigLoader_TimerEvent_Callback = void (*)(KConfigLoader*, QTimerEvent*);
    using KConfigLoader_ChildEvent_Callback = void (*)(KConfigLoader*, QChildEvent*);
    using KConfigLoader_CustomEvent_Callback = void (*)(KConfigLoader*, QEvent*);
    using KConfigLoader_ConnectNotify_Callback = void (*)(KConfigLoader*, QMetaMethod*);
    using KConfigLoader_DisconnectNotify_Callback = void (*)(KConfigLoader*, QMetaMethod*);
    using KConfigLoader::isSignalConnected;
    using KConfigLoader::receivers;
    using KConfigLoader::sender;
    using KConfigLoader::senderSignalIndex;

    // Instance callback storage
    KConfigLoader_UsrSave_Callback kconfigloader_usrsave_callback = nullptr;
    KConfigLoader_MetaObject_Callback kconfigloader_metaobject_callback = nullptr;
    KConfigLoader_Metacast_Callback kconfigloader_metacast_callback = nullptr;
    KConfigLoader_Metacall_Callback kconfigloader_metacall_callback = nullptr;
    KConfigLoader_SetDefaults_Callback kconfigloader_setdefaults_callback = nullptr;
    KConfigLoader_UseDefaults_Callback kconfigloader_usedefaults_callback = nullptr;
    KConfigLoader_UsrUseDefaults_Callback kconfigloader_usrusedefaults_callback = nullptr;
    KConfigLoader_UsrSetDefaults_Callback kconfigloader_usrsetdefaults_callback = nullptr;
    KConfigLoader_UsrRead_Callback kconfigloader_usrread_callback = nullptr;
    KConfigLoader_Event_Callback kconfigloader_event_callback = nullptr;
    KConfigLoader_EventFilter_Callback kconfigloader_eventfilter_callback = nullptr;
    KConfigLoader_TimerEvent_Callback kconfigloader_timerevent_callback = nullptr;
    KConfigLoader_ChildEvent_Callback kconfigloader_childevent_callback = nullptr;
    KConfigLoader_CustomEvent_Callback kconfigloader_customevent_callback = nullptr;
    KConfigLoader_ConnectNotify_Callback kconfigloader_connectnotify_callback = nullptr;
    KConfigLoader_DisconnectNotify_Callback kconfigloader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KConfigLoader {
        using KConfigLoader::childEvent;
        using KConfigLoader::connectNotify;
        using KConfigLoader::customEvent;
        using KConfigLoader::disconnectNotify;
        using KConfigLoader::timerEvent;
        using KConfigLoader::usrRead;
        using KConfigLoader::usrSave;
        using KConfigLoader::usrSetDefaults;
        using KConfigLoader::usrUseDefaults;
    };

    VirtualKConfigLoader(const QString& configFile, QIODevice* xml) : KConfigLoader(configFile, xml) {};
    VirtualKConfigLoader(const KConfigGroup& config, QIODevice* xml) : KConfigLoader(config, xml) {};
    VirtualKConfigLoader(const QString& configFile, QIODevice* xml, QObject* parent) : KConfigLoader(configFile, xml, parent) {};
    VirtualKConfigLoader(const KConfigGroup& config, QIODevice* xml, QObject* parent) : KConfigLoader(config, xml, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kconfigloader_usrsave_callback) {
            bool callback_ret = kconfigloader_usrsave_callback(this);
            return callback_ret;
        }
        return KConfigLoader::usrSave();
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigloader_metaobject_callback) {
            QMetaObject* callback_ret = kconfigloader_metaobject_callback(this);
            return callback_ret;
        }
        return KConfigLoader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigloader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kconfigloader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigLoader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigloader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kconfigloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigLoader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kconfigloader_setdefaults_callback) {
            kconfigloader_setdefaults_callback(this);
            return;
        }
        KConfigLoader::setDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kconfigloader_usedefaults_callback) {
            bool cbval1 = b;
            bool callback_ret = kconfigloader_usedefaults_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigLoader::useDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kconfigloader_usrusedefaults_callback) {
            bool cbval1 = b;
            bool callback_ret = kconfigloader_usrusedefaults_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigLoader::usrUseDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kconfigloader_usrsetdefaults_callback) {
            kconfigloader_usrsetdefaults_callback(this);
            return;
        }
        KConfigLoader::usrSetDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kconfigloader_usrread_callback) {
            kconfigloader_usrread_callback(this);
            return;
        }
        KConfigLoader::usrRead();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigloader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kconfigloader_event_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigLoader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigloader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kconfigloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigLoader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigloader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kconfigloader_timerevent_callback(this, cbval1);
            return;
        }
        KConfigLoader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigloader_childevent_callback) {
            QChildEvent* cbval1 = event;
            kconfigloader_childevent_callback(this, cbval1);
            return;
        }
        KConfigLoader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigloader_customevent_callback) {
            QEvent* cbval1 = event;
            kconfigloader_customevent_callback(this, cbval1);
            return;
        }
        KConfigLoader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigloader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigloader_connectnotify_callback(this, cbval1);
            return;
        }
        KConfigLoader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigloader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigloader_disconnectnotify_callback(this, cbval1);
            return;
        }
        KConfigLoader::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KConfigLoader_SuperUsrSave(KConfigLoader* self);
    friend bool KConfigLoader_SuperUsrUseDefaults(KConfigLoader* self, bool b);
    friend void KConfigLoader_SuperUsrSetDefaults(KConfigLoader* self);
    friend void KConfigLoader_SuperUsrRead(KConfigLoader* self);
    friend void KConfigLoader_SuperTimerEvent(KConfigLoader* self, QTimerEvent* event);
    friend void KConfigLoader_SuperChildEvent(KConfigLoader* self, QChildEvent* event);
    friend void KConfigLoader_SuperCustomEvent(KConfigLoader* self, QEvent* event);
    friend void KConfigLoader_SuperConnectNotify(KConfigLoader* self, const QMetaMethod* signal);
    friend void KConfigLoader_SuperDisconnectNotify(KConfigLoader* self, const QMetaMethod* signal);
};

#endif
