#pragma once
#ifndef LIBQSOCKETNOTIFIER_HXX
#define LIBQSOCKETNOTIFIER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSocketNotifier
class VirtualQSocketNotifier final : public QSocketNotifier {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSocketNotifier_MetaObject_Callback = QMetaObject* (*)(const QSocketNotifier*);
    using QSocketNotifier_Metacast_Callback = void* (*)(QSocketNotifier*, const char*);
    using QSocketNotifier_Metacall_Callback = int (*)(QSocketNotifier*, int, int, void**);
    using QSocketNotifier_Event_Callback = bool (*)(QSocketNotifier*, QEvent*);
    using QSocketNotifier_EventFilter_Callback = bool (*)(QSocketNotifier*, QObject*, QEvent*);
    using QSocketNotifier_TimerEvent_Callback = void (*)(QSocketNotifier*, QTimerEvent*);
    using QSocketNotifier_ChildEvent_Callback = void (*)(QSocketNotifier*, QChildEvent*);
    using QSocketNotifier_CustomEvent_Callback = void (*)(QSocketNotifier*, QEvent*);
    using QSocketNotifier_ConnectNotify_Callback = void (*)(QSocketNotifier*, QMetaMethod*);
    using QSocketNotifier_DisconnectNotify_Callback = void (*)(QSocketNotifier*, QMetaMethod*);
    using QSocketNotifier::isSignalConnected;
    using QSocketNotifier::receivers;
    using QSocketNotifier::sender;
    using QSocketNotifier::senderSignalIndex;

    // Instance callback storage
    QSocketNotifier_MetaObject_Callback qsocketnotifier_metaobject_callback = nullptr;
    QSocketNotifier_Metacast_Callback qsocketnotifier_metacast_callback = nullptr;
    QSocketNotifier_Metacall_Callback qsocketnotifier_metacall_callback = nullptr;
    QSocketNotifier_Event_Callback qsocketnotifier_event_callback = nullptr;
    QSocketNotifier_EventFilter_Callback qsocketnotifier_eventfilter_callback = nullptr;
    QSocketNotifier_TimerEvent_Callback qsocketnotifier_timerevent_callback = nullptr;
    QSocketNotifier_ChildEvent_Callback qsocketnotifier_childevent_callback = nullptr;
    QSocketNotifier_CustomEvent_Callback qsocketnotifier_customevent_callback = nullptr;
    QSocketNotifier_ConnectNotify_Callback qsocketnotifier_connectnotify_callback = nullptr;
    QSocketNotifier_DisconnectNotify_Callback qsocketnotifier_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSocketNotifier {
        using QSocketNotifier::childEvent;
        using QSocketNotifier::connectNotify;
        using QSocketNotifier::customEvent;
        using QSocketNotifier::disconnectNotify;
        using QSocketNotifier::event;
        using QSocketNotifier::timerEvent;
    };

    VirtualQSocketNotifier(QSocketNotifier::Type param1) : QSocketNotifier(param1) {};
    VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2) : QSocketNotifier(socket, param2) {};
    VirtualQSocketNotifier(QSocketNotifier::Type param1, QObject* parent) : QSocketNotifier(param1, parent) {};
    VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2, QObject* parent) : QSocketNotifier(socket, param2, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsocketnotifier_metaobject_callback) {
            QMetaObject* callback_ret = qsocketnotifier_metaobject_callback(this);
            return callback_ret;
        }
        return QSocketNotifier::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsocketnotifier_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsocketnotifier_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSocketNotifier::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsocketnotifier_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsocketnotifier_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSocketNotifier::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsocketnotifier_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsocketnotifier_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSocketNotifier::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsocketnotifier_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsocketnotifier_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSocketNotifier::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsocketnotifier_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsocketnotifier_timerevent_callback(this, cbval1);
            return;
        }
        QSocketNotifier::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsocketnotifier_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsocketnotifier_childevent_callback(this, cbval1);
            return;
        }
        QSocketNotifier::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsocketnotifier_customevent_callback) {
            QEvent* cbval1 = event;
            qsocketnotifier_customevent_callback(this, cbval1);
            return;
        }
        QSocketNotifier::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsocketnotifier_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsocketnotifier_connectnotify_callback(this, cbval1);
            return;
        }
        QSocketNotifier::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsocketnotifier_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsocketnotifier_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSocketNotifier::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSocketNotifier_SuperEvent(QSocketNotifier* self, QEvent* param1);
    friend void QSocketNotifier_SuperTimerEvent(QSocketNotifier* self, QTimerEvent* event);
    friend void QSocketNotifier_SuperChildEvent(QSocketNotifier* self, QChildEvent* event);
    friend void QSocketNotifier_SuperCustomEvent(QSocketNotifier* self, QEvent* event);
    friend void QSocketNotifier_SuperConnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
    friend void QSocketNotifier_SuperDisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
};

#endif
