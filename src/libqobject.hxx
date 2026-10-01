#pragma once
#ifndef LIBQOBJECT_HXX
#define LIBQOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QObject
class VirtualQObject final : public QObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QObject_MetaObject_Callback = QMetaObject* (*)(const QObject*);
    using QObject_Metacast_Callback = void* (*)(QObject*, const char*);
    using QObject_Metacall_Callback = int (*)(QObject*, int, int, void**);
    using QObject_Event_Callback = bool (*)(QObject*, QEvent*);
    using QObject_EventFilter_Callback = bool (*)(QObject*, QObject*, QEvent*);
    using QObject_TimerEvent_Callback = void (*)(QObject*, QTimerEvent*);
    using QObject_ChildEvent_Callback = void (*)(QObject*, QChildEvent*);
    using QObject_CustomEvent_Callback = void (*)(QObject*, QEvent*);
    using QObject_ConnectNotify_Callback = void (*)(QObject*, QMetaMethod*);
    using QObject_DisconnectNotify_Callback = void (*)(QObject*, QMetaMethod*);
    using QObject::isSignalConnected;
    using QObject::receivers;
    using QObject::sender;
    using QObject::senderSignalIndex;

    // Instance callback storage
    QObject_MetaObject_Callback qobject_metaobject_callback = nullptr;
    QObject_Metacast_Callback qobject_metacast_callback = nullptr;
    QObject_Metacall_Callback qobject_metacall_callback = nullptr;
    QObject_Event_Callback qobject_event_callback = nullptr;
    QObject_EventFilter_Callback qobject_eventfilter_callback = nullptr;
    QObject_TimerEvent_Callback qobject_timerevent_callback = nullptr;
    QObject_ChildEvent_Callback qobject_childevent_callback = nullptr;
    QObject_CustomEvent_Callback qobject_customevent_callback = nullptr;
    QObject_ConnectNotify_Callback qobject_connectnotify_callback = nullptr;
    QObject_DisconnectNotify_Callback qobject_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QObject {
        using QObject::childEvent;
        using QObject::connectNotify;
        using QObject::customEvent;
        using QObject::disconnectNotify;
        using QObject::timerEvent;
    };

    VirtualQObject() : QObject() {};
    VirtualQObject(QObject* parent) : QObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qobject_metaobject_callback) {
            QMetaObject* callback_ret = qobject_metaobject_callback(this);
            return callback_ret;
        }
        return QObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return QObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qobject_timerevent_callback(this, cbval1);
            return;
        }
        QObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            qobject_childevent_callback(this, cbval1);
            return;
        }
        QObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qobject_customevent_callback) {
            QEvent* cbval1 = event;
            qobject_customevent_callback(this, cbval1);
            return;
        }
        QObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qobject_connectnotify_callback(this, cbval1);
            return;
        }
        QObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        QObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void QObject_SuperTimerEvent(QObject* self, QTimerEvent* event);
    friend void QObject_SuperChildEvent(QObject* self, QChildEvent* event);
    friend void QObject_SuperCustomEvent(QObject* self, QEvent* event);
    friend void QObject_SuperConnectNotify(QObject* self, const QMetaMethod* signal);
    friend void QObject_SuperDisconnectNotify(QObject* self, const QMetaMethod* signal);
};

#endif
