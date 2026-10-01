#pragma once
#ifndef LIBQOBJECTCLEANUPHANDLER_HXX
#define LIBQOBJECTCLEANUPHANDLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QObjectCleanupHandler
class VirtualQObjectCleanupHandler final : public QObjectCleanupHandler {
  public:
    // Virtual class public types (including callbacks and access types)
    using QObjectCleanupHandler_MetaObject_Callback = QMetaObject* (*)(const QObjectCleanupHandler*);
    using QObjectCleanupHandler_Metacast_Callback = void* (*)(QObjectCleanupHandler*, const char*);
    using QObjectCleanupHandler_Metacall_Callback = int (*)(QObjectCleanupHandler*, int, int, void**);
    using QObjectCleanupHandler_Event_Callback = bool (*)(QObjectCleanupHandler*, QEvent*);
    using QObjectCleanupHandler_EventFilter_Callback = bool (*)(QObjectCleanupHandler*, QObject*, QEvent*);
    using QObjectCleanupHandler_TimerEvent_Callback = void (*)(QObjectCleanupHandler*, QTimerEvent*);
    using QObjectCleanupHandler_ChildEvent_Callback = void (*)(QObjectCleanupHandler*, QChildEvent*);
    using QObjectCleanupHandler_CustomEvent_Callback = void (*)(QObjectCleanupHandler*, QEvent*);
    using QObjectCleanupHandler_ConnectNotify_Callback = void (*)(QObjectCleanupHandler*, QMetaMethod*);
    using QObjectCleanupHandler_DisconnectNotify_Callback = void (*)(QObjectCleanupHandler*, QMetaMethod*);
    using QObjectCleanupHandler::isSignalConnected;
    using QObjectCleanupHandler::receivers;
    using QObjectCleanupHandler::sender;
    using QObjectCleanupHandler::senderSignalIndex;

    // Instance callback storage
    QObjectCleanupHandler_MetaObject_Callback qobjectcleanuphandler_metaobject_callback = nullptr;
    QObjectCleanupHandler_Metacast_Callback qobjectcleanuphandler_metacast_callback = nullptr;
    QObjectCleanupHandler_Metacall_Callback qobjectcleanuphandler_metacall_callback = nullptr;
    QObjectCleanupHandler_Event_Callback qobjectcleanuphandler_event_callback = nullptr;
    QObjectCleanupHandler_EventFilter_Callback qobjectcleanuphandler_eventfilter_callback = nullptr;
    QObjectCleanupHandler_TimerEvent_Callback qobjectcleanuphandler_timerevent_callback = nullptr;
    QObjectCleanupHandler_ChildEvent_Callback qobjectcleanuphandler_childevent_callback = nullptr;
    QObjectCleanupHandler_CustomEvent_Callback qobjectcleanuphandler_customevent_callback = nullptr;
    QObjectCleanupHandler_ConnectNotify_Callback qobjectcleanuphandler_connectnotify_callback = nullptr;
    QObjectCleanupHandler_DisconnectNotify_Callback qobjectcleanuphandler_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QObjectCleanupHandler {
        using QObjectCleanupHandler::childEvent;
        using QObjectCleanupHandler::connectNotify;
        using QObjectCleanupHandler::customEvent;
        using QObjectCleanupHandler::disconnectNotify;
        using QObjectCleanupHandler::timerEvent;
    };

    VirtualQObjectCleanupHandler() : QObjectCleanupHandler() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qobjectcleanuphandler_metaobject_callback) {
            QMetaObject* callback_ret = qobjectcleanuphandler_metaobject_callback(this);
            return callback_ret;
        }
        return QObjectCleanupHandler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qobjectcleanuphandler_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qobjectcleanuphandler_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QObjectCleanupHandler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qobjectcleanuphandler_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qobjectcleanuphandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QObjectCleanupHandler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qobjectcleanuphandler_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qobjectcleanuphandler_event_callback(this, cbval1);
            return callback_ret;
        }
        return QObjectCleanupHandler::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qobjectcleanuphandler_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qobjectcleanuphandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QObjectCleanupHandler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qobjectcleanuphandler_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qobjectcleanuphandler_timerevent_callback(this, cbval1);
            return;
        }
        QObjectCleanupHandler::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qobjectcleanuphandler_childevent_callback) {
            QChildEvent* cbval1 = event;
            qobjectcleanuphandler_childevent_callback(this, cbval1);
            return;
        }
        QObjectCleanupHandler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qobjectcleanuphandler_customevent_callback) {
            QEvent* cbval1 = event;
            qobjectcleanuphandler_customevent_callback(this, cbval1);
            return;
        }
        QObjectCleanupHandler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qobjectcleanuphandler_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qobjectcleanuphandler_connectnotify_callback(this, cbval1);
            return;
        }
        QObjectCleanupHandler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qobjectcleanuphandler_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qobjectcleanuphandler_disconnectnotify_callback(this, cbval1);
            return;
        }
        QObjectCleanupHandler::disconnectNotify(signal);
    }

    // Friend functions
    friend void QObjectCleanupHandler_SuperTimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
    friend void QObjectCleanupHandler_SuperChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
    friend void QObjectCleanupHandler_SuperCustomEvent(QObjectCleanupHandler* self, QEvent* event);
    friend void QObjectCleanupHandler_SuperConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
    friend void QObjectCleanupHandler_SuperDisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
};

#endif
