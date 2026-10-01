#pragma once
#ifndef LIBQACCESSIBLEBRIDGE_HXX
#define LIBQACCESSIBLEBRIDGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleBridgePlugin
class VirtualQAccessibleBridgePlugin : public QAccessibleBridgePlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleBridgePlugin_MetaObject_Callback = QMetaObject* (*)(const QAccessibleBridgePlugin*);
    using QAccessibleBridgePlugin_Metacast_Callback = void* (*)(QAccessibleBridgePlugin*, const char*);
    using QAccessibleBridgePlugin_Metacall_Callback = int (*)(QAccessibleBridgePlugin*, int, int, void**);
    using QAccessibleBridgePlugin_Create_Callback = QAccessibleBridge* (*)(QAccessibleBridgePlugin*, const char*);
    using QAccessibleBridgePlugin_Event_Callback = bool (*)(QAccessibleBridgePlugin*, QEvent*);
    using QAccessibleBridgePlugin_EventFilter_Callback = bool (*)(QAccessibleBridgePlugin*, QObject*, QEvent*);
    using QAccessibleBridgePlugin_TimerEvent_Callback = void (*)(QAccessibleBridgePlugin*, QTimerEvent*);
    using QAccessibleBridgePlugin_ChildEvent_Callback = void (*)(QAccessibleBridgePlugin*, QChildEvent*);
    using QAccessibleBridgePlugin_CustomEvent_Callback = void (*)(QAccessibleBridgePlugin*, QEvent*);
    using QAccessibleBridgePlugin_ConnectNotify_Callback = void (*)(QAccessibleBridgePlugin*, QMetaMethod*);
    using QAccessibleBridgePlugin_DisconnectNotify_Callback = void (*)(QAccessibleBridgePlugin*, QMetaMethod*);
    using QAccessibleBridgePlugin::isSignalConnected;
    using QAccessibleBridgePlugin::receivers;
    using QAccessibleBridgePlugin::sender;
    using QAccessibleBridgePlugin::senderSignalIndex;

    // Instance callback storage
    QAccessibleBridgePlugin_MetaObject_Callback qaccessiblebridgeplugin_metaobject_callback = nullptr;
    QAccessibleBridgePlugin_Metacast_Callback qaccessiblebridgeplugin_metacast_callback = nullptr;
    QAccessibleBridgePlugin_Metacall_Callback qaccessiblebridgeplugin_metacall_callback = nullptr;
    QAccessibleBridgePlugin_Create_Callback qaccessiblebridgeplugin_create_callback = nullptr;
    QAccessibleBridgePlugin_Event_Callback qaccessiblebridgeplugin_event_callback = nullptr;
    QAccessibleBridgePlugin_EventFilter_Callback qaccessiblebridgeplugin_eventfilter_callback = nullptr;
    QAccessibleBridgePlugin_TimerEvent_Callback qaccessiblebridgeplugin_timerevent_callback = nullptr;
    QAccessibleBridgePlugin_ChildEvent_Callback qaccessiblebridgeplugin_childevent_callback = nullptr;
    QAccessibleBridgePlugin_CustomEvent_Callback qaccessiblebridgeplugin_customevent_callback = nullptr;
    QAccessibleBridgePlugin_ConnectNotify_Callback qaccessiblebridgeplugin_connectnotify_callback = nullptr;
    QAccessibleBridgePlugin_DisconnectNotify_Callback qaccessiblebridgeplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAccessibleBridgePlugin {
        using QAccessibleBridgePlugin::childEvent;
        using QAccessibleBridgePlugin::connectNotify;
        using QAccessibleBridgePlugin::customEvent;
        using QAccessibleBridgePlugin::disconnectNotify;
        using QAccessibleBridgePlugin::timerEvent;
    };

    VirtualQAccessibleBridgePlugin() : QAccessibleBridgePlugin() {};
    VirtualQAccessibleBridgePlugin(QObject* parent) : QAccessibleBridgePlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaccessiblebridgeplugin_metaobject_callback) {
            QMetaObject* callback_ret = qaccessiblebridgeplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaccessiblebridgeplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaccessiblebridgeplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessiblebridgeplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaccessiblebridgeplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleBridge* create(const QString& key) override {
        if (qaccessiblebridgeplugin_create_callback) {
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            QAccessibleBridge* callback_ret = qaccessiblebridgeplugin_create_callback(this, cbval1);
            libqt_free(key_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleBridgePlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessiblebridgeplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaccessiblebridgeplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessiblebridgeplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaccessiblebridgeplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessiblebridgeplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaccessiblebridgeplugin_timerevent_callback(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessiblebridgeplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaccessiblebridgeplugin_childevent_callback(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessiblebridgeplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qaccessiblebridgeplugin_customevent_callback(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaccessiblebridgeplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaccessiblebridgeplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAccessibleBridgePlugin_SuperTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
    friend void QAccessibleBridgePlugin_SuperChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
    friend void QAccessibleBridgePlugin_SuperCustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
    friend void QAccessibleBridgePlugin_SuperConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_SuperDisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
};

#endif
