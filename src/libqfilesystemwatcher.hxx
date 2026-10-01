#pragma once
#ifndef LIBQFILESYSTEMWATCHER_HXX
#define LIBQFILESYSTEMWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSystemWatcher
class VirtualQFileSystemWatcher final : public QFileSystemWatcher {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFileSystemWatcher_MetaObject_Callback = QMetaObject* (*)(const QFileSystemWatcher*);
    using QFileSystemWatcher_Metacast_Callback = void* (*)(QFileSystemWatcher*, const char*);
    using QFileSystemWatcher_Metacall_Callback = int (*)(QFileSystemWatcher*, int, int, void**);
    using QFileSystemWatcher_Event_Callback = bool (*)(QFileSystemWatcher*, QEvent*);
    using QFileSystemWatcher_EventFilter_Callback = bool (*)(QFileSystemWatcher*, QObject*, QEvent*);
    using QFileSystemWatcher_TimerEvent_Callback = void (*)(QFileSystemWatcher*, QTimerEvent*);
    using QFileSystemWatcher_ChildEvent_Callback = void (*)(QFileSystemWatcher*, QChildEvent*);
    using QFileSystemWatcher_CustomEvent_Callback = void (*)(QFileSystemWatcher*, QEvent*);
    using QFileSystemWatcher_ConnectNotify_Callback = void (*)(QFileSystemWatcher*, QMetaMethod*);
    using QFileSystemWatcher_DisconnectNotify_Callback = void (*)(QFileSystemWatcher*, QMetaMethod*);
    using QFileSystemWatcher::isSignalConnected;
    using QFileSystemWatcher::receivers;
    using QFileSystemWatcher::sender;
    using QFileSystemWatcher::senderSignalIndex;

    // Instance callback storage
    QFileSystemWatcher_MetaObject_Callback qfilesystemwatcher_metaobject_callback = nullptr;
    QFileSystemWatcher_Metacast_Callback qfilesystemwatcher_metacast_callback = nullptr;
    QFileSystemWatcher_Metacall_Callback qfilesystemwatcher_metacall_callback = nullptr;
    QFileSystemWatcher_Event_Callback qfilesystemwatcher_event_callback = nullptr;
    QFileSystemWatcher_EventFilter_Callback qfilesystemwatcher_eventfilter_callback = nullptr;
    QFileSystemWatcher_TimerEvent_Callback qfilesystemwatcher_timerevent_callback = nullptr;
    QFileSystemWatcher_ChildEvent_Callback qfilesystemwatcher_childevent_callback = nullptr;
    QFileSystemWatcher_CustomEvent_Callback qfilesystemwatcher_customevent_callback = nullptr;
    QFileSystemWatcher_ConnectNotify_Callback qfilesystemwatcher_connectnotify_callback = nullptr;
    QFileSystemWatcher_DisconnectNotify_Callback qfilesystemwatcher_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFileSystemWatcher {
        using QFileSystemWatcher::childEvent;
        using QFileSystemWatcher::connectNotify;
        using QFileSystemWatcher::customEvent;
        using QFileSystemWatcher::disconnectNotify;
        using QFileSystemWatcher::timerEvent;
    };

    VirtualQFileSystemWatcher() : QFileSystemWatcher() {};
    VirtualQFileSystemWatcher(const QList<QString>& paths) : QFileSystemWatcher(paths) {};
    VirtualQFileSystemWatcher(QObject* parent) : QFileSystemWatcher(parent) {};
    VirtualQFileSystemWatcher(const QList<QString>& paths, QObject* parent) : QFileSystemWatcher(paths, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfilesystemwatcher_metaobject_callback) {
            QMetaObject* callback_ret = qfilesystemwatcher_metaobject_callback(this);
            return callback_ret;
        }
        return QFileSystemWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfilesystemwatcher_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfilesystemwatcher_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfilesystemwatcher_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfilesystemwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfilesystemwatcher_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qfilesystemwatcher_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfilesystemwatcher_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qfilesystemwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileSystemWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfilesystemwatcher_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfilesystemwatcher_timerevent_callback(this, cbval1);
            return;
        }
        QFileSystemWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfilesystemwatcher_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfilesystemwatcher_childevent_callback(this, cbval1);
            return;
        }
        QFileSystemWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfilesystemwatcher_customevent_callback) {
            QEvent* cbval1 = event;
            qfilesystemwatcher_customevent_callback(this, cbval1);
            return;
        }
        QFileSystemWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfilesystemwatcher_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfilesystemwatcher_connectnotify_callback(this, cbval1);
            return;
        }
        QFileSystemWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfilesystemwatcher_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfilesystemwatcher_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFileSystemWatcher::disconnectNotify(signal);
    }

    // Friend functions
    friend void QFileSystemWatcher_SuperTimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
    friend void QFileSystemWatcher_SuperChildEvent(QFileSystemWatcher* self, QChildEvent* event);
    friend void QFileSystemWatcher_SuperCustomEvent(QFileSystemWatcher* self, QEvent* event);
    friend void QFileSystemWatcher_SuperConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_SuperDisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
};

#endif
