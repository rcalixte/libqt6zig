#pragma once
#ifndef LIBQACCESSIBLEPLUGIN_HXX
#define LIBQACCESSIBLEPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessiblePlugin
class VirtualQAccessiblePlugin : public QAccessiblePlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessiblePlugin_MetaObject_Callback = QMetaObject* (*)(const QAccessiblePlugin*);
    using QAccessiblePlugin_Metacast_Callback = void* (*)(QAccessiblePlugin*, const char*);
    using QAccessiblePlugin_Metacall_Callback = int (*)(QAccessiblePlugin*, int, int, void**);
    using QAccessiblePlugin_Create_Callback = QAccessibleInterface* (*)(QAccessiblePlugin*, const char*, QObject*);
    using QAccessiblePlugin_Event_Callback = bool (*)(QAccessiblePlugin*, QEvent*);
    using QAccessiblePlugin_EventFilter_Callback = bool (*)(QAccessiblePlugin*, QObject*, QEvent*);
    using QAccessiblePlugin_TimerEvent_Callback = void (*)(QAccessiblePlugin*, QTimerEvent*);
    using QAccessiblePlugin_ChildEvent_Callback = void (*)(QAccessiblePlugin*, QChildEvent*);
    using QAccessiblePlugin_CustomEvent_Callback = void (*)(QAccessiblePlugin*, QEvent*);
    using QAccessiblePlugin_ConnectNotify_Callback = void (*)(QAccessiblePlugin*, QMetaMethod*);
    using QAccessiblePlugin_DisconnectNotify_Callback = void (*)(QAccessiblePlugin*, QMetaMethod*);
    using QAccessiblePlugin::isSignalConnected;
    using QAccessiblePlugin::receivers;
    using QAccessiblePlugin::sender;
    using QAccessiblePlugin::senderSignalIndex;

    // Instance callback storage
    QAccessiblePlugin_MetaObject_Callback qaccessibleplugin_metaobject_callback = nullptr;
    QAccessiblePlugin_Metacast_Callback qaccessibleplugin_metacast_callback = nullptr;
    QAccessiblePlugin_Metacall_Callback qaccessibleplugin_metacall_callback = nullptr;
    QAccessiblePlugin_Create_Callback qaccessibleplugin_create_callback = nullptr;
    QAccessiblePlugin_Event_Callback qaccessibleplugin_event_callback = nullptr;
    QAccessiblePlugin_EventFilter_Callback qaccessibleplugin_eventfilter_callback = nullptr;
    QAccessiblePlugin_TimerEvent_Callback qaccessibleplugin_timerevent_callback = nullptr;
    QAccessiblePlugin_ChildEvent_Callback qaccessibleplugin_childevent_callback = nullptr;
    QAccessiblePlugin_CustomEvent_Callback qaccessibleplugin_customevent_callback = nullptr;
    QAccessiblePlugin_ConnectNotify_Callback qaccessibleplugin_connectnotify_callback = nullptr;
    QAccessiblePlugin_DisconnectNotify_Callback qaccessibleplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAccessiblePlugin {
        using QAccessiblePlugin::childEvent;
        using QAccessiblePlugin::connectNotify;
        using QAccessiblePlugin::customEvent;
        using QAccessiblePlugin::disconnectNotify;
        using QAccessiblePlugin::timerEvent;
    };

    VirtualQAccessiblePlugin() : QAccessiblePlugin() {};
    VirtualQAccessiblePlugin(QObject* parent) : QAccessiblePlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaccessibleplugin_metaobject_callback) {
            QMetaObject* callback_ret = qaccessibleplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QAccessiblePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaccessibleplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaccessibleplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessiblePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessibleplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaccessibleplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAccessiblePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* create(const QString& key, QObject* object) override {
        if (qaccessibleplugin_create_callback) {
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            QObject* cbval2 = object;
            QAccessibleInterface* callback_ret = qaccessibleplugin_create_callback(this, cbval1, cbval2);
            libqt_free(key_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessiblePlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessibleplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaccessibleplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessiblePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessibleplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaccessibleplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAccessiblePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessibleplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaccessibleplugin_timerevent_callback(this, cbval1);
            return;
        }
        QAccessiblePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessibleplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaccessibleplugin_childevent_callback(this, cbval1);
            return;
        }
        QAccessiblePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessibleplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qaccessibleplugin_customevent_callback(this, cbval1);
            return;
        }
        QAccessiblePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessibleplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaccessibleplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QAccessiblePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessibleplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaccessibleplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAccessiblePlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAccessiblePlugin_SuperTimerEvent(QAccessiblePlugin* self, QTimerEvent* event);
    friend void QAccessiblePlugin_SuperChildEvent(QAccessiblePlugin* self, QChildEvent* event);
    friend void QAccessiblePlugin_SuperCustomEvent(QAccessiblePlugin* self, QEvent* event);
    friend void QAccessiblePlugin_SuperConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
    friend void QAccessiblePlugin_SuperDisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
};

#endif
