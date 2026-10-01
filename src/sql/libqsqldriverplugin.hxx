#pragma once
#ifndef SQL_LIBQSQLDRIVERPLUGIN_HXX
#define SQL_LIBQSQLDRIVERPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlDriverPlugin
class VirtualQSqlDriverPlugin : public QSqlDriverPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSqlDriverPlugin_MetaObject_Callback = QMetaObject* (*)(const QSqlDriverPlugin*);
    using QSqlDriverPlugin_Metacast_Callback = void* (*)(QSqlDriverPlugin*, const char*);
    using QSqlDriverPlugin_Metacall_Callback = int (*)(QSqlDriverPlugin*, int, int, void**);
    using QSqlDriverPlugin_Create_Callback = QSqlDriver* (*)(QSqlDriverPlugin*, const char*);
    using QSqlDriverPlugin_Event_Callback = bool (*)(QSqlDriverPlugin*, QEvent*);
    using QSqlDriverPlugin_EventFilter_Callback = bool (*)(QSqlDriverPlugin*, QObject*, QEvent*);
    using QSqlDriverPlugin_TimerEvent_Callback = void (*)(QSqlDriverPlugin*, QTimerEvent*);
    using QSqlDriverPlugin_ChildEvent_Callback = void (*)(QSqlDriverPlugin*, QChildEvent*);
    using QSqlDriverPlugin_CustomEvent_Callback = void (*)(QSqlDriverPlugin*, QEvent*);
    using QSqlDriverPlugin_ConnectNotify_Callback = void (*)(QSqlDriverPlugin*, QMetaMethod*);
    using QSqlDriverPlugin_DisconnectNotify_Callback = void (*)(QSqlDriverPlugin*, QMetaMethod*);
    using QSqlDriverPlugin::isSignalConnected;
    using QSqlDriverPlugin::receivers;
    using QSqlDriverPlugin::sender;
    using QSqlDriverPlugin::senderSignalIndex;

    // Instance callback storage
    QSqlDriverPlugin_MetaObject_Callback qsqldriverplugin_metaobject_callback = nullptr;
    QSqlDriverPlugin_Metacast_Callback qsqldriverplugin_metacast_callback = nullptr;
    QSqlDriverPlugin_Metacall_Callback qsqldriverplugin_metacall_callback = nullptr;
    QSqlDriverPlugin_Create_Callback qsqldriverplugin_create_callback = nullptr;
    QSqlDriverPlugin_Event_Callback qsqldriverplugin_event_callback = nullptr;
    QSqlDriverPlugin_EventFilter_Callback qsqldriverplugin_eventfilter_callback = nullptr;
    QSqlDriverPlugin_TimerEvent_Callback qsqldriverplugin_timerevent_callback = nullptr;
    QSqlDriverPlugin_ChildEvent_Callback qsqldriverplugin_childevent_callback = nullptr;
    QSqlDriverPlugin_CustomEvent_Callback qsqldriverplugin_customevent_callback = nullptr;
    QSqlDriverPlugin_ConnectNotify_Callback qsqldriverplugin_connectnotify_callback = nullptr;
    QSqlDriverPlugin_DisconnectNotify_Callback qsqldriverplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSqlDriverPlugin {
        using QSqlDriverPlugin::childEvent;
        using QSqlDriverPlugin::connectNotify;
        using QSqlDriverPlugin::customEvent;
        using QSqlDriverPlugin::disconnectNotify;
        using QSqlDriverPlugin::timerEvent;
    };

    VirtualQSqlDriverPlugin() : QSqlDriverPlugin() {};
    VirtualQSqlDriverPlugin(QObject* parent) : QSqlDriverPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsqldriverplugin_metaobject_callback) {
            QMetaObject* callback_ret = qsqldriverplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QSqlDriverPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsqldriverplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsqldriverplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlDriverPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqldriverplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsqldriverplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSqlDriverPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlDriver* create(const QString& key) override {
        if (qsqldriverplugin_create_callback) {
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            QSqlDriver* callback_ret = qsqldriverplugin_create_callback(this, cbval1);
            libqt_free(key_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSqlDriverPlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqldriverplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsqldriverplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlDriverPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqldriverplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsqldriverplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlDriverPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqldriverplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsqldriverplugin_timerevent_callback(this, cbval1);
            return;
        }
        QSqlDriverPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqldriverplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsqldriverplugin_childevent_callback(this, cbval1);
            return;
        }
        QSqlDriverPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqldriverplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qsqldriverplugin_customevent_callback(this, cbval1);
            return;
        }
        QSqlDriverPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqldriverplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqldriverplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QSqlDriverPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqldriverplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqldriverplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSqlDriverPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSqlDriverPlugin_SuperTimerEvent(QSqlDriverPlugin* self, QTimerEvent* event);
    friend void QSqlDriverPlugin_SuperChildEvent(QSqlDriverPlugin* self, QChildEvent* event);
    friend void QSqlDriverPlugin_SuperCustomEvent(QSqlDriverPlugin* self, QEvent* event);
    friend void QSqlDriverPlugin_SuperConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
    friend void QSqlDriverPlugin_SuperDisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
};

#endif
