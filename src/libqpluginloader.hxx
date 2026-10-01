#pragma once
#ifndef LIBQPLUGINLOADER_HXX
#define LIBQPLUGINLOADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPluginLoader
class VirtualQPluginLoader final : public QPluginLoader {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPluginLoader_MetaObject_Callback = QMetaObject* (*)(const QPluginLoader*);
    using QPluginLoader_Metacast_Callback = void* (*)(QPluginLoader*, const char*);
    using QPluginLoader_Metacall_Callback = int (*)(QPluginLoader*, int, int, void**);
    using QPluginLoader_Event_Callback = bool (*)(QPluginLoader*, QEvent*);
    using QPluginLoader_EventFilter_Callback = bool (*)(QPluginLoader*, QObject*, QEvent*);
    using QPluginLoader_TimerEvent_Callback = void (*)(QPluginLoader*, QTimerEvent*);
    using QPluginLoader_ChildEvent_Callback = void (*)(QPluginLoader*, QChildEvent*);
    using QPluginLoader_CustomEvent_Callback = void (*)(QPluginLoader*, QEvent*);
    using QPluginLoader_ConnectNotify_Callback = void (*)(QPluginLoader*, QMetaMethod*);
    using QPluginLoader_DisconnectNotify_Callback = void (*)(QPluginLoader*, QMetaMethod*);
    using QPluginLoader::isSignalConnected;
    using QPluginLoader::receivers;
    using QPluginLoader::sender;
    using QPluginLoader::senderSignalIndex;

    // Instance callback storage
    QPluginLoader_MetaObject_Callback qpluginloader_metaobject_callback = nullptr;
    QPluginLoader_Metacast_Callback qpluginloader_metacast_callback = nullptr;
    QPluginLoader_Metacall_Callback qpluginloader_metacall_callback = nullptr;
    QPluginLoader_Event_Callback qpluginloader_event_callback = nullptr;
    QPluginLoader_EventFilter_Callback qpluginloader_eventfilter_callback = nullptr;
    QPluginLoader_TimerEvent_Callback qpluginloader_timerevent_callback = nullptr;
    QPluginLoader_ChildEvent_Callback qpluginloader_childevent_callback = nullptr;
    QPluginLoader_CustomEvent_Callback qpluginloader_customevent_callback = nullptr;
    QPluginLoader_ConnectNotify_Callback qpluginloader_connectnotify_callback = nullptr;
    QPluginLoader_DisconnectNotify_Callback qpluginloader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPluginLoader {
        using QPluginLoader::childEvent;
        using QPluginLoader::connectNotify;
        using QPluginLoader::customEvent;
        using QPluginLoader::disconnectNotify;
        using QPluginLoader::timerEvent;
    };

    VirtualQPluginLoader() : QPluginLoader() {};
    VirtualQPluginLoader(const QString& fileName) : QPluginLoader(fileName) {};
    VirtualQPluginLoader(QObject* parent) : QPluginLoader(parent) {};
    VirtualQPluginLoader(const QString& fileName, QObject* parent) : QPluginLoader(fileName, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpluginloader_metaobject_callback) {
            QMetaObject* callback_ret = qpluginloader_metaobject_callback(this);
            return callback_ret;
        }
        return QPluginLoader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpluginloader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpluginloader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPluginLoader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpluginloader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpluginloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPluginLoader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpluginloader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpluginloader_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPluginLoader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpluginloader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpluginloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPluginLoader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpluginloader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpluginloader_timerevent_callback(this, cbval1);
            return;
        }
        QPluginLoader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpluginloader_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpluginloader_childevent_callback(this, cbval1);
            return;
        }
        QPluginLoader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpluginloader_customevent_callback) {
            QEvent* cbval1 = event;
            qpluginloader_customevent_callback(this, cbval1);
            return;
        }
        QPluginLoader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpluginloader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpluginloader_connectnotify_callback(this, cbval1);
            return;
        }
        QPluginLoader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpluginloader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpluginloader_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPluginLoader::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPluginLoader_SuperTimerEvent(QPluginLoader* self, QTimerEvent* event);
    friend void QPluginLoader_SuperChildEvent(QPluginLoader* self, QChildEvent* event);
    friend void QPluginLoader_SuperCustomEvent(QPluginLoader* self, QEvent* event);
    friend void QPluginLoader_SuperConnectNotify(QPluginLoader* self, const QMetaMethod* signal);
    friend void QPluginLoader_SuperDisconnectNotify(QPluginLoader* self, const QMetaMethod* signal);
};

#endif
