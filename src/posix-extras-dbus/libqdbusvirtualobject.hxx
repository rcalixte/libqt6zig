#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSVIRTUALOBJECT_HXX
#define POSIX_EXTRAS_DBUS_LIBQDBUSVIRTUALOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusVirtualObject
class VirtualQDBusVirtualObject : public QDBusVirtualObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDBusVirtualObject_MetaObject_Callback = QMetaObject* (*)(const QDBusVirtualObject*);
    using QDBusVirtualObject_Metacast_Callback = void* (*)(QDBusVirtualObject*, const char*);
    using QDBusVirtualObject_Metacall_Callback = int (*)(QDBusVirtualObject*, int, int, void**);
    using QDBusVirtualObject_Introspect_Callback = const char* (*)(const QDBusVirtualObject*, const char*);
    using QDBusVirtualObject_HandleMessage_Callback = bool (*)(QDBusVirtualObject*, QDBusMessage*, QDBusConnection*);
    using QDBusVirtualObject_Event_Callback = bool (*)(QDBusVirtualObject*, QEvent*);
    using QDBusVirtualObject_EventFilter_Callback = bool (*)(QDBusVirtualObject*, QObject*, QEvent*);
    using QDBusVirtualObject_TimerEvent_Callback = void (*)(QDBusVirtualObject*, QTimerEvent*);
    using QDBusVirtualObject_ChildEvent_Callback = void (*)(QDBusVirtualObject*, QChildEvent*);
    using QDBusVirtualObject_CustomEvent_Callback = void (*)(QDBusVirtualObject*, QEvent*);
    using QDBusVirtualObject_ConnectNotify_Callback = void (*)(QDBusVirtualObject*, QMetaMethod*);
    using QDBusVirtualObject_DisconnectNotify_Callback = void (*)(QDBusVirtualObject*, QMetaMethod*);
    using QDBusVirtualObject::isSignalConnected;
    using QDBusVirtualObject::receivers;
    using QDBusVirtualObject::sender;
    using QDBusVirtualObject::senderSignalIndex;

    // Instance callback storage
    QDBusVirtualObject_MetaObject_Callback qdbusvirtualobject_metaobject_callback = nullptr;
    QDBusVirtualObject_Metacast_Callback qdbusvirtualobject_metacast_callback = nullptr;
    QDBusVirtualObject_Metacall_Callback qdbusvirtualobject_metacall_callback = nullptr;
    QDBusVirtualObject_Introspect_Callback qdbusvirtualobject_introspect_callback = nullptr;
    QDBusVirtualObject_HandleMessage_Callback qdbusvirtualobject_handlemessage_callback = nullptr;
    QDBusVirtualObject_Event_Callback qdbusvirtualobject_event_callback = nullptr;
    QDBusVirtualObject_EventFilter_Callback qdbusvirtualobject_eventfilter_callback = nullptr;
    QDBusVirtualObject_TimerEvent_Callback qdbusvirtualobject_timerevent_callback = nullptr;
    QDBusVirtualObject_ChildEvent_Callback qdbusvirtualobject_childevent_callback = nullptr;
    QDBusVirtualObject_CustomEvent_Callback qdbusvirtualobject_customevent_callback = nullptr;
    QDBusVirtualObject_ConnectNotify_Callback qdbusvirtualobject_connectnotify_callback = nullptr;
    QDBusVirtualObject_DisconnectNotify_Callback qdbusvirtualobject_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDBusVirtualObject {
        using QDBusVirtualObject::childEvent;
        using QDBusVirtualObject::connectNotify;
        using QDBusVirtualObject::customEvent;
        using QDBusVirtualObject::disconnectNotify;
        using QDBusVirtualObject::timerEvent;
    };

    VirtualQDBusVirtualObject() : QDBusVirtualObject() {};
    VirtualQDBusVirtualObject(QObject* parent) : QDBusVirtualObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbusvirtualobject_metaobject_callback) {
            QMetaObject* callback_ret = qdbusvirtualobject_metaobject_callback(this);
            return callback_ret;
        }
        return QDBusVirtualObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbusvirtualobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdbusvirtualobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusVirtualObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusvirtualobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdbusvirtualobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusVirtualObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString introspect(const QString& path) const override {
        if (qdbusvirtualobject_introspect_callback) {
            const auto path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;
            const char* callback_ret = qdbusvirtualobject_introspect_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(path_str);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDBusVirtualObject::introspect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool handleMessage(const QDBusMessage& message, const QDBusConnection& connection) override {
        if (qdbusvirtualobject_handlemessage_callback) {
            const QDBusMessage& message_ret = message;
            // Cast returned reference into pointer
            QDBusMessage* cbval1 = const_cast<QDBusMessage*>(&message_ret);
            const QDBusConnection& connection_ret = connection;
            // Cast returned reference into pointer
            QDBusConnection* cbval2 = const_cast<QDBusConnection*>(&connection_ret);
            bool callback_ret = qdbusvirtualobject_handlemessage_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDBusVirtualObject::handleMessage called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusvirtualobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdbusvirtualobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusVirtualObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusvirtualobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdbusvirtualobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusVirtualObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusvirtualobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdbusvirtualobject_timerevent_callback(this, cbval1);
            return;
        }
        QDBusVirtualObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusvirtualobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdbusvirtualobject_childevent_callback(this, cbval1);
            return;
        }
        QDBusVirtualObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusvirtualobject_customevent_callback) {
            QEvent* cbval1 = event;
            qdbusvirtualobject_customevent_callback(this, cbval1);
            return;
        }
        QDBusVirtualObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusvirtualobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusvirtualobject_connectnotify_callback(this, cbval1);
            return;
        }
        QDBusVirtualObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusvirtualobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusvirtualobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDBusVirtualObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDBusVirtualObject_SuperTimerEvent(QDBusVirtualObject* self, QTimerEvent* event);
    friend void QDBusVirtualObject_SuperChildEvent(QDBusVirtualObject* self, QChildEvent* event);
    friend void QDBusVirtualObject_SuperCustomEvent(QDBusVirtualObject* self, QEvent* event);
    friend void QDBusVirtualObject_SuperConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
    friend void QDBusVirtualObject_SuperDisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
};

#endif
