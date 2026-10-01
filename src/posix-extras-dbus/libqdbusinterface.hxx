#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSINTERFACE_HXX
#define POSIX_EXTRAS_DBUS_LIBQDBUSINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusInterface
class VirtualQDBusInterface final : public QDBusInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDBusInterface_MetaObject_Callback = QMetaObject* (*)(const QDBusInterface*);
    using QDBusInterface_Metacast_Callback = void* (*)(QDBusInterface*, const char*);
    using QDBusInterface_Metacall_Callback = int (*)(QDBusInterface*, int, int, void**);
    using QDBusInterface_ConnectNotify_Callback = void (*)(QDBusInterface*, QMetaMethod*);
    using QDBusInterface_DisconnectNotify_Callback = void (*)(QDBusInterface*, QMetaMethod*);
    using QDBusInterface_Event_Callback = bool (*)(QDBusInterface*, QEvent*);
    using QDBusInterface_EventFilter_Callback = bool (*)(QDBusInterface*, QObject*, QEvent*);
    using QDBusInterface_TimerEvent_Callback = void (*)(QDBusInterface*, QTimerEvent*);
    using QDBusInterface_ChildEvent_Callback = void (*)(QDBusInterface*, QChildEvent*);
    using QDBusInterface_CustomEvent_Callback = void (*)(QDBusInterface*, QEvent*);
    using QDBusInterface::internalConstCall;
    using QDBusInterface::internalPropGet;
    using QDBusInterface::internalPropSet;
    using QDBusInterface::isSignalConnected;
    using QDBusInterface::receivers;
    using QDBusInterface::sender;
    using QDBusInterface::senderSignalIndex;

    // Instance callback storage
    QDBusInterface_MetaObject_Callback qdbusinterface_metaobject_callback = nullptr;
    QDBusInterface_Metacast_Callback qdbusinterface_metacast_callback = nullptr;
    QDBusInterface_Metacall_Callback qdbusinterface_metacall_callback = nullptr;
    QDBusInterface_ConnectNotify_Callback qdbusinterface_connectnotify_callback = nullptr;
    QDBusInterface_DisconnectNotify_Callback qdbusinterface_disconnectnotify_callback = nullptr;
    QDBusInterface_Event_Callback qdbusinterface_event_callback = nullptr;
    QDBusInterface_EventFilter_Callback qdbusinterface_eventfilter_callback = nullptr;
    QDBusInterface_TimerEvent_Callback qdbusinterface_timerevent_callback = nullptr;
    QDBusInterface_ChildEvent_Callback qdbusinterface_childevent_callback = nullptr;
    QDBusInterface_CustomEvent_Callback qdbusinterface_customevent_callback = nullptr;

    // Access struct
    struct Base : QDBusInterface {
        using QDBusInterface::childEvent;
        using QDBusInterface::connectNotify;
        using QDBusInterface::customEvent;
        using QDBusInterface::disconnectNotify;
        using QDBusInterface::timerEvent;
    };

    VirtualQDBusInterface(const QString& service, const QString& path) : QDBusInterface(service, path) {};
    VirtualQDBusInterface(const QString& service, const QString& path, const QString& interface) : QDBusInterface(service, path, interface) {};
    VirtualQDBusInterface(const QString& service, const QString& path, const QString& interface, const QDBusConnection& connection) : QDBusInterface(service, path, interface, connection) {};
    VirtualQDBusInterface(const QString& service, const QString& path, const QString& interface, const QDBusConnection& connection, QObject* parent) : QDBusInterface(service, path, interface, connection, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbusinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdbusinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDBusInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbusinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdbusinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdbusinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDBusInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDBusInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdbusinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdbusinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdbusinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDBusInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdbusinterface_childevent_callback(this, cbval1);
            return;
        }
        QDBusInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdbusinterface_customevent_callback(this, cbval1);
            return;
        }
        QDBusInterface::customEvent(event);
    }

    // Friend functions
    friend void QDBusInterface_SuperConnectNotify(QDBusInterface* self, const QMetaMethod* signal);
    friend void QDBusInterface_SuperDisconnectNotify(QDBusInterface* self, const QMetaMethod* signal);
    friend void QDBusInterface_SuperTimerEvent(QDBusInterface* self, QTimerEvent* event);
    friend void QDBusInterface_SuperChildEvent(QDBusInterface* self, QChildEvent* event);
    friend void QDBusInterface_SuperCustomEvent(QDBusInterface* self, QEvent* event);
};

#endif
