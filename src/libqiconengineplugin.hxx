#pragma once
#ifndef LIBQICONENGINEPLUGIN_HXX
#define LIBQICONENGINEPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIconEnginePlugin
class VirtualQIconEnginePlugin : public QIconEnginePlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QIconEnginePlugin_MetaObject_Callback = QMetaObject* (*)(const QIconEnginePlugin*);
    using QIconEnginePlugin_Metacast_Callback = void* (*)(QIconEnginePlugin*, const char*);
    using QIconEnginePlugin_Metacall_Callback = int (*)(QIconEnginePlugin*, int, int, void**);
    using QIconEnginePlugin_Create_Callback = QIconEngine* (*)(QIconEnginePlugin*, const char*);
    using QIconEnginePlugin_Event_Callback = bool (*)(QIconEnginePlugin*, QEvent*);
    using QIconEnginePlugin_EventFilter_Callback = bool (*)(QIconEnginePlugin*, QObject*, QEvent*);
    using QIconEnginePlugin_TimerEvent_Callback = void (*)(QIconEnginePlugin*, QTimerEvent*);
    using QIconEnginePlugin_ChildEvent_Callback = void (*)(QIconEnginePlugin*, QChildEvent*);
    using QIconEnginePlugin_CustomEvent_Callback = void (*)(QIconEnginePlugin*, QEvent*);
    using QIconEnginePlugin_ConnectNotify_Callback = void (*)(QIconEnginePlugin*, QMetaMethod*);
    using QIconEnginePlugin_DisconnectNotify_Callback = void (*)(QIconEnginePlugin*, QMetaMethod*);
    using QIconEnginePlugin::isSignalConnected;
    using QIconEnginePlugin::receivers;
    using QIconEnginePlugin::sender;
    using QIconEnginePlugin::senderSignalIndex;

    // Instance callback storage
    QIconEnginePlugin_MetaObject_Callback qiconengineplugin_metaobject_callback = nullptr;
    QIconEnginePlugin_Metacast_Callback qiconengineplugin_metacast_callback = nullptr;
    QIconEnginePlugin_Metacall_Callback qiconengineplugin_metacall_callback = nullptr;
    QIconEnginePlugin_Create_Callback qiconengineplugin_create_callback = nullptr;
    QIconEnginePlugin_Event_Callback qiconengineplugin_event_callback = nullptr;
    QIconEnginePlugin_EventFilter_Callback qiconengineplugin_eventfilter_callback = nullptr;
    QIconEnginePlugin_TimerEvent_Callback qiconengineplugin_timerevent_callback = nullptr;
    QIconEnginePlugin_ChildEvent_Callback qiconengineplugin_childevent_callback = nullptr;
    QIconEnginePlugin_CustomEvent_Callback qiconengineplugin_customevent_callback = nullptr;
    QIconEnginePlugin_ConnectNotify_Callback qiconengineplugin_connectnotify_callback = nullptr;
    QIconEnginePlugin_DisconnectNotify_Callback qiconengineplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QIconEnginePlugin {
        using QIconEnginePlugin::childEvent;
        using QIconEnginePlugin::connectNotify;
        using QIconEnginePlugin::customEvent;
        using QIconEnginePlugin::disconnectNotify;
        using QIconEnginePlugin::timerEvent;
    };

    VirtualQIconEnginePlugin() : QIconEnginePlugin() {};
    VirtualQIconEnginePlugin(QObject* parent) : QIconEnginePlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qiconengineplugin_metaobject_callback) {
            QMetaObject* callback_ret = qiconengineplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QIconEnginePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qiconengineplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qiconengineplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QIconEnginePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qiconengineplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qiconengineplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QIconEnginePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* create(const QString& filename) override {
        if (qiconengineplugin_create_callback) {
            const auto filename_ret = filename;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filename_b = filename_ret.toUtf8();
            auto filename_str_len = filename_b.length();
            const char* filename_str = static_cast<const char*>(malloc(filename_str_len + 1));
            memcpy((void*)filename_str, filename_b.data(), filename_str_len);
            ((char*)filename_str)[filename_str_len] = '\0';
            const char* cbval1 = filename_str;
            QIconEngine* callback_ret = qiconengineplugin_create_callback(this, cbval1);
            libqt_free(filename_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QIconEnginePlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qiconengineplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qiconengineplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QIconEnginePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qiconengineplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qiconengineplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIconEnginePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qiconengineplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qiconengineplugin_timerevent_callback(this, cbval1);
            return;
        }
        QIconEnginePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qiconengineplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qiconengineplugin_childevent_callback(this, cbval1);
            return;
        }
        QIconEnginePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qiconengineplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qiconengineplugin_customevent_callback(this, cbval1);
            return;
        }
        QIconEnginePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qiconengineplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qiconengineplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QIconEnginePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qiconengineplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qiconengineplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QIconEnginePlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QIconEnginePlugin_SuperTimerEvent(QIconEnginePlugin* self, QTimerEvent* event);
    friend void QIconEnginePlugin_SuperChildEvent(QIconEnginePlugin* self, QChildEvent* event);
    friend void QIconEnginePlugin_SuperCustomEvent(QIconEnginePlugin* self, QEvent* event);
    friend void QIconEnginePlugin_SuperConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal);
    friend void QIconEnginePlugin_SuperDisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal);
};

#endif
