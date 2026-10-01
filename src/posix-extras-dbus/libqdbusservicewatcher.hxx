#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSSERVICEWATCHER_HXX
#define POSIX_EXTRAS_DBUS_LIBQDBUSSERVICEWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusServiceWatcher
class VirtualQDBusServiceWatcher final : public QDBusServiceWatcher {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDBusServiceWatcher_MetaObject_Callback = QMetaObject* (*)(const QDBusServiceWatcher*);
    using QDBusServiceWatcher_Metacast_Callback = void* (*)(QDBusServiceWatcher*, const char*);
    using QDBusServiceWatcher_Metacall_Callback = int (*)(QDBusServiceWatcher*, int, int, void**);
    using QDBusServiceWatcher_Event_Callback = bool (*)(QDBusServiceWatcher*, QEvent*);
    using QDBusServiceWatcher_EventFilter_Callback = bool (*)(QDBusServiceWatcher*, QObject*, QEvent*);
    using QDBusServiceWatcher_TimerEvent_Callback = void (*)(QDBusServiceWatcher*, QTimerEvent*);
    using QDBusServiceWatcher_ChildEvent_Callback = void (*)(QDBusServiceWatcher*, QChildEvent*);
    using QDBusServiceWatcher_CustomEvent_Callback = void (*)(QDBusServiceWatcher*, QEvent*);
    using QDBusServiceWatcher_ConnectNotify_Callback = void (*)(QDBusServiceWatcher*, QMetaMethod*);
    using QDBusServiceWatcher_DisconnectNotify_Callback = void (*)(QDBusServiceWatcher*, QMetaMethod*);
    using QDBusServiceWatcher::isSignalConnected;
    using QDBusServiceWatcher::receivers;
    using QDBusServiceWatcher::sender;
    using QDBusServiceWatcher::senderSignalIndex;

    // Instance callback storage
    QDBusServiceWatcher_MetaObject_Callback qdbusservicewatcher_metaobject_callback = nullptr;
    QDBusServiceWatcher_Metacast_Callback qdbusservicewatcher_metacast_callback = nullptr;
    QDBusServiceWatcher_Metacall_Callback qdbusservicewatcher_metacall_callback = nullptr;
    QDBusServiceWatcher_Event_Callback qdbusservicewatcher_event_callback = nullptr;
    QDBusServiceWatcher_EventFilter_Callback qdbusservicewatcher_eventfilter_callback = nullptr;
    QDBusServiceWatcher_TimerEvent_Callback qdbusservicewatcher_timerevent_callback = nullptr;
    QDBusServiceWatcher_ChildEvent_Callback qdbusservicewatcher_childevent_callback = nullptr;
    QDBusServiceWatcher_CustomEvent_Callback qdbusservicewatcher_customevent_callback = nullptr;
    QDBusServiceWatcher_ConnectNotify_Callback qdbusservicewatcher_connectnotify_callback = nullptr;
    QDBusServiceWatcher_DisconnectNotify_Callback qdbusservicewatcher_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDBusServiceWatcher {
        using QDBusServiceWatcher::childEvent;
        using QDBusServiceWatcher::connectNotify;
        using QDBusServiceWatcher::customEvent;
        using QDBusServiceWatcher::disconnectNotify;
        using QDBusServiceWatcher::timerEvent;
    };

    VirtualQDBusServiceWatcher() : QDBusServiceWatcher() {};
    VirtualQDBusServiceWatcher(const QString& service, const QDBusConnection& connection) : QDBusServiceWatcher(service, connection) {};
    VirtualQDBusServiceWatcher(QObject* parent) : QDBusServiceWatcher(parent) {};
    VirtualQDBusServiceWatcher(const QString& service, const QDBusConnection& connection, QDBusServiceWatcher::WatchMode watchMode) : QDBusServiceWatcher(service, connection, watchMode) {};
    VirtualQDBusServiceWatcher(const QString& service, const QDBusConnection& connection, QDBusServiceWatcher::WatchMode watchMode, QObject* parent) : QDBusServiceWatcher(service, connection, watchMode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbusservicewatcher_metaobject_callback) {
            QMetaObject* callback_ret = qdbusservicewatcher_metaobject_callback(this);
            return callback_ret;
        }
        return QDBusServiceWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbusservicewatcher_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdbusservicewatcher_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusServiceWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusservicewatcher_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdbusservicewatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusServiceWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusservicewatcher_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdbusservicewatcher_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDBusServiceWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusservicewatcher_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdbusservicewatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusServiceWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusservicewatcher_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdbusservicewatcher_timerevent_callback(this, cbval1);
            return;
        }
        QDBusServiceWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusservicewatcher_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdbusservicewatcher_childevent_callback(this, cbval1);
            return;
        }
        QDBusServiceWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusservicewatcher_customevent_callback) {
            QEvent* cbval1 = event;
            qdbusservicewatcher_customevent_callback(this, cbval1);
            return;
        }
        QDBusServiceWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusservicewatcher_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusservicewatcher_connectnotify_callback(this, cbval1);
            return;
        }
        QDBusServiceWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusservicewatcher_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdbusservicewatcher_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDBusServiceWatcher::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDBusServiceWatcher_SuperTimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
    friend void QDBusServiceWatcher_SuperChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
    friend void QDBusServiceWatcher_SuperCustomEvent(QDBusServiceWatcher* self, QEvent* event);
    friend void QDBusServiceWatcher_SuperConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_SuperDisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
};

#endif
