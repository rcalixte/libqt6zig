#pragma once
#ifndef LIBQGENERICPLUGIN_HXX
#define LIBQGENERICPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGenericPlugin
class VirtualQGenericPlugin : public QGenericPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGenericPlugin_MetaObject_Callback = QMetaObject* (*)(const QGenericPlugin*);
    using QGenericPlugin_Metacast_Callback = void* (*)(QGenericPlugin*, const char*);
    using QGenericPlugin_Metacall_Callback = int (*)(QGenericPlugin*, int, int, void**);
    using QGenericPlugin_Create_Callback = QObject* (*)(QGenericPlugin*, const char*, const char*);
    using QGenericPlugin_Event_Callback = bool (*)(QGenericPlugin*, QEvent*);
    using QGenericPlugin_EventFilter_Callback = bool (*)(QGenericPlugin*, QObject*, QEvent*);
    using QGenericPlugin_TimerEvent_Callback = void (*)(QGenericPlugin*, QTimerEvent*);
    using QGenericPlugin_ChildEvent_Callback = void (*)(QGenericPlugin*, QChildEvent*);
    using QGenericPlugin_CustomEvent_Callback = void (*)(QGenericPlugin*, QEvent*);
    using QGenericPlugin_ConnectNotify_Callback = void (*)(QGenericPlugin*, QMetaMethod*);
    using QGenericPlugin_DisconnectNotify_Callback = void (*)(QGenericPlugin*, QMetaMethod*);
    using QGenericPlugin::isSignalConnected;
    using QGenericPlugin::receivers;
    using QGenericPlugin::sender;
    using QGenericPlugin::senderSignalIndex;

    // Instance callback storage
    QGenericPlugin_MetaObject_Callback qgenericplugin_metaobject_callback = nullptr;
    QGenericPlugin_Metacast_Callback qgenericplugin_metacast_callback = nullptr;
    QGenericPlugin_Metacall_Callback qgenericplugin_metacall_callback = nullptr;
    QGenericPlugin_Create_Callback qgenericplugin_create_callback = nullptr;
    QGenericPlugin_Event_Callback qgenericplugin_event_callback = nullptr;
    QGenericPlugin_EventFilter_Callback qgenericplugin_eventfilter_callback = nullptr;
    QGenericPlugin_TimerEvent_Callback qgenericplugin_timerevent_callback = nullptr;
    QGenericPlugin_ChildEvent_Callback qgenericplugin_childevent_callback = nullptr;
    QGenericPlugin_CustomEvent_Callback qgenericplugin_customevent_callback = nullptr;
    QGenericPlugin_ConnectNotify_Callback qgenericplugin_connectnotify_callback = nullptr;
    QGenericPlugin_DisconnectNotify_Callback qgenericplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGenericPlugin {
        using QGenericPlugin::childEvent;
        using QGenericPlugin::connectNotify;
        using QGenericPlugin::customEvent;
        using QGenericPlugin::disconnectNotify;
        using QGenericPlugin::timerEvent;
    };

    VirtualQGenericPlugin() : QGenericPlugin() {};
    VirtualQGenericPlugin(QObject* parent) : QGenericPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgenericplugin_metaobject_callback) {
            QMetaObject* callback_ret = qgenericplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QGenericPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgenericplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgenericplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGenericPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgenericplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgenericplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGenericPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(const QString& name, const QString& spec) override {
        if (qgenericplugin_create_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const auto spec_ret = spec;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray spec_b = spec_ret.toUtf8();
            auto spec_str_len = spec_b.length();
            const char* spec_str = static_cast<const char*>(malloc(spec_str_len + 1));
            memcpy((void*)spec_str, spec_b.data(), spec_str_len);
            ((char*)spec_str)[spec_str_len] = '\0';
            const char* cbval2 = spec_str;
            QObject* callback_ret = qgenericplugin_create_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            libqt_free(spec_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGenericPlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgenericplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgenericplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGenericPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgenericplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgenericplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGenericPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgenericplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgenericplugin_timerevent_callback(this, cbval1);
            return;
        }
        QGenericPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgenericplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgenericplugin_childevent_callback(this, cbval1);
            return;
        }
        QGenericPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgenericplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qgenericplugin_customevent_callback(this, cbval1);
            return;
        }
        QGenericPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgenericplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgenericplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QGenericPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgenericplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgenericplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGenericPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGenericPlugin_SuperTimerEvent(QGenericPlugin* self, QTimerEvent* event);
    friend void QGenericPlugin_SuperChildEvent(QGenericPlugin* self, QChildEvent* event);
    friend void QGenericPlugin_SuperCustomEvent(QGenericPlugin* self, QEvent* event);
    friend void QGenericPlugin_SuperConnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
    friend void QGenericPlugin_SuperDisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
};

#endif
