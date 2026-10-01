#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKICONLOADER_HXX
#define EXTRAS_KICONTHEMES_LIBKICONLOADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconLoader
class VirtualKIconLoader final : public KIconLoader {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIconLoader_MetaObject_Callback = QMetaObject* (*)(const KIconLoader*);
    using KIconLoader_Metacast_Callback = void* (*)(KIconLoader*, const char*);
    using KIconLoader_Metacall_Callback = int (*)(KIconLoader*, int, int, void**);
    using KIconLoader_Event_Callback = bool (*)(KIconLoader*, QEvent*);
    using KIconLoader_EventFilter_Callback = bool (*)(KIconLoader*, QObject*, QEvent*);
    using KIconLoader_TimerEvent_Callback = void (*)(KIconLoader*, QTimerEvent*);
    using KIconLoader_ChildEvent_Callback = void (*)(KIconLoader*, QChildEvent*);
    using KIconLoader_CustomEvent_Callback = void (*)(KIconLoader*, QEvent*);
    using KIconLoader_ConnectNotify_Callback = void (*)(KIconLoader*, QMetaMethod*);
    using KIconLoader_DisconnectNotify_Callback = void (*)(KIconLoader*, QMetaMethod*);
    using KIconLoader::isSignalConnected;
    using KIconLoader::receivers;
    using KIconLoader::sender;
    using KIconLoader::senderSignalIndex;

    // Instance callback storage
    KIconLoader_MetaObject_Callback kiconloader_metaobject_callback = nullptr;
    KIconLoader_Metacast_Callback kiconloader_metacast_callback = nullptr;
    KIconLoader_Metacall_Callback kiconloader_metacall_callback = nullptr;
    KIconLoader_Event_Callback kiconloader_event_callback = nullptr;
    KIconLoader_EventFilter_Callback kiconloader_eventfilter_callback = nullptr;
    KIconLoader_TimerEvent_Callback kiconloader_timerevent_callback = nullptr;
    KIconLoader_ChildEvent_Callback kiconloader_childevent_callback = nullptr;
    KIconLoader_CustomEvent_Callback kiconloader_customevent_callback = nullptr;
    KIconLoader_ConnectNotify_Callback kiconloader_connectnotify_callback = nullptr;
    KIconLoader_DisconnectNotify_Callback kiconloader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIconLoader {
        using KIconLoader::childEvent;
        using KIconLoader::connectNotify;
        using KIconLoader::customEvent;
        using KIconLoader::disconnectNotify;
        using KIconLoader::timerEvent;
    };

    VirtualKIconLoader() : KIconLoader() {};
    VirtualKIconLoader(const QString& appname) : KIconLoader(appname) {};
    VirtualKIconLoader(const QString& appname, const QList<QString>& extraSearchPaths) : KIconLoader(appname, extraSearchPaths) {};
    VirtualKIconLoader(const QString& appname, const QList<QString>& extraSearchPaths, QObject* parent) : KIconLoader(appname, extraSearchPaths, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kiconloader_metaobject_callback) {
            QMetaObject* callback_ret = kiconloader_metaobject_callback(this);
            return callback_ret;
        }
        return KIconLoader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kiconloader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kiconloader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIconLoader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kiconloader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kiconloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIconLoader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kiconloader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kiconloader_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIconLoader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kiconloader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kiconloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIconLoader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kiconloader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kiconloader_timerevent_callback(this, cbval1);
            return;
        }
        KIconLoader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kiconloader_childevent_callback) {
            QChildEvent* cbval1 = event;
            kiconloader_childevent_callback(this, cbval1);
            return;
        }
        KIconLoader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kiconloader_customevent_callback) {
            QEvent* cbval1 = event;
            kiconloader_customevent_callback(this, cbval1);
            return;
        }
        KIconLoader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kiconloader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kiconloader_connectnotify_callback(this, cbval1);
            return;
        }
        KIconLoader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kiconloader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kiconloader_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIconLoader::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIconLoader_SuperTimerEvent(KIconLoader* self, QTimerEvent* event);
    friend void KIconLoader_SuperChildEvent(KIconLoader* self, QChildEvent* event);
    friend void KIconLoader_SuperCustomEvent(KIconLoader* self, QEvent* event);
    friend void KIconLoader_SuperConnectNotify(KIconLoader* self, const QMetaMethod* signal);
    friend void KIconLoader_SuperDisconnectNotify(KIconLoader* self, const QMetaMethod* signal);
};

#endif
