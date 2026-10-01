#pragma once
#ifndef LIBQSTYLEPLUGIN_HXX
#define LIBQSTYLEPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStylePlugin
class VirtualQStylePlugin : public QStylePlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStylePlugin_MetaObject_Callback = QMetaObject* (*)(const QStylePlugin*);
    using QStylePlugin_Metacast_Callback = void* (*)(QStylePlugin*, const char*);
    using QStylePlugin_Metacall_Callback = int (*)(QStylePlugin*, int, int, void**);
    using QStylePlugin_Create_Callback = QStyle* (*)(QStylePlugin*, const char*);
    using QStylePlugin_Event_Callback = bool (*)(QStylePlugin*, QEvent*);
    using QStylePlugin_EventFilter_Callback = bool (*)(QStylePlugin*, QObject*, QEvent*);
    using QStylePlugin_TimerEvent_Callback = void (*)(QStylePlugin*, QTimerEvent*);
    using QStylePlugin_ChildEvent_Callback = void (*)(QStylePlugin*, QChildEvent*);
    using QStylePlugin_CustomEvent_Callback = void (*)(QStylePlugin*, QEvent*);
    using QStylePlugin_ConnectNotify_Callback = void (*)(QStylePlugin*, QMetaMethod*);
    using QStylePlugin_DisconnectNotify_Callback = void (*)(QStylePlugin*, QMetaMethod*);
    using QStylePlugin::isSignalConnected;
    using QStylePlugin::receivers;
    using QStylePlugin::sender;
    using QStylePlugin::senderSignalIndex;

    // Instance callback storage
    QStylePlugin_MetaObject_Callback qstyleplugin_metaobject_callback = nullptr;
    QStylePlugin_Metacast_Callback qstyleplugin_metacast_callback = nullptr;
    QStylePlugin_Metacall_Callback qstyleplugin_metacall_callback = nullptr;
    QStylePlugin_Create_Callback qstyleplugin_create_callback = nullptr;
    QStylePlugin_Event_Callback qstyleplugin_event_callback = nullptr;
    QStylePlugin_EventFilter_Callback qstyleplugin_eventfilter_callback = nullptr;
    QStylePlugin_TimerEvent_Callback qstyleplugin_timerevent_callback = nullptr;
    QStylePlugin_ChildEvent_Callback qstyleplugin_childevent_callback = nullptr;
    QStylePlugin_CustomEvent_Callback qstyleplugin_customevent_callback = nullptr;
    QStylePlugin_ConnectNotify_Callback qstyleplugin_connectnotify_callback = nullptr;
    QStylePlugin_DisconnectNotify_Callback qstyleplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStylePlugin {
        using QStylePlugin::childEvent;
        using QStylePlugin::connectNotify;
        using QStylePlugin::customEvent;
        using QStylePlugin::disconnectNotify;
        using QStylePlugin::timerEvent;
    };

    VirtualQStylePlugin() : QStylePlugin() {};
    VirtualQStylePlugin(QObject* parent) : QStylePlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstyleplugin_metaobject_callback) {
            QMetaObject* callback_ret = qstyleplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QStylePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstyleplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstyleplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStylePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyleplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstyleplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStylePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle* create(const QString& key) override {
        if (qstyleplugin_create_callback) {
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            QStyle* callback_ret = qstyleplugin_create_callback(this, cbval1);
            libqt_free(key_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStylePlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyleplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstyleplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStylePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstyleplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstyleplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStylePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyleplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstyleplugin_timerevent_callback(this, cbval1);
            return;
        }
        QStylePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyleplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstyleplugin_childevent_callback(this, cbval1);
            return;
        }
        QStylePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyleplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qstyleplugin_customevent_callback(this, cbval1);
            return;
        }
        QStylePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyleplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstyleplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QStylePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyleplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstyleplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStylePlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStylePlugin_SuperTimerEvent(QStylePlugin* self, QTimerEvent* event);
    friend void QStylePlugin_SuperChildEvent(QStylePlugin* self, QChildEvent* event);
    friend void QStylePlugin_SuperCustomEvent(QStylePlugin* self, QEvent* event);
    friend void QStylePlugin_SuperConnectNotify(QStylePlugin* self, const QMetaMethod* signal);
    friend void QStylePlugin_SuperDisconnectNotify(QStylePlugin* self, const QMetaMethod* signal);
};

#endif
