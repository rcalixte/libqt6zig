#pragma once
#ifndef LOCATION_LIBQGEOROUTEREPLY_HXX
#define LOCATION_LIBQGEOROUTEREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoRouteReply
class VirtualQGeoRouteReply final : public QGeoRouteReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoRouteReply_MetaObject_Callback = QMetaObject* (*)(const QGeoRouteReply*);
    using QGeoRouteReply_Metacast_Callback = void* (*)(QGeoRouteReply*, const char*);
    using QGeoRouteReply_Metacall_Callback = int (*)(QGeoRouteReply*, int, int, void**);
    using QGeoRouteReply_Abort_Callback = void (*)(QGeoRouteReply*);
    using QGeoRouteReply_Event_Callback = bool (*)(QGeoRouteReply*, QEvent*);
    using QGeoRouteReply_EventFilter_Callback = bool (*)(QGeoRouteReply*, QObject*, QEvent*);
    using QGeoRouteReply_TimerEvent_Callback = void (*)(QGeoRouteReply*, QTimerEvent*);
    using QGeoRouteReply_ChildEvent_Callback = void (*)(QGeoRouteReply*, QChildEvent*);
    using QGeoRouteReply_CustomEvent_Callback = void (*)(QGeoRouteReply*, QEvent*);
    using QGeoRouteReply_ConnectNotify_Callback = void (*)(QGeoRouteReply*, QMetaMethod*);
    using QGeoRouteReply_DisconnectNotify_Callback = void (*)(QGeoRouteReply*, QMetaMethod*);
    using QGeoRouteReply::addRoutes;
    using QGeoRouteReply::isSignalConnected;
    using QGeoRouteReply::receivers;
    using QGeoRouteReply::sender;
    using QGeoRouteReply::senderSignalIndex;
    using QGeoRouteReply::setError;
    using QGeoRouteReply::setFinished;
    using QGeoRouteReply::setRoutes;

    // Instance callback storage
    QGeoRouteReply_MetaObject_Callback qgeoroutereply_metaobject_callback = nullptr;
    QGeoRouteReply_Metacast_Callback qgeoroutereply_metacast_callback = nullptr;
    QGeoRouteReply_Metacall_Callback qgeoroutereply_metacall_callback = nullptr;
    QGeoRouteReply_Abort_Callback qgeoroutereply_abort_callback = nullptr;
    QGeoRouteReply_Event_Callback qgeoroutereply_event_callback = nullptr;
    QGeoRouteReply_EventFilter_Callback qgeoroutereply_eventfilter_callback = nullptr;
    QGeoRouteReply_TimerEvent_Callback qgeoroutereply_timerevent_callback = nullptr;
    QGeoRouteReply_ChildEvent_Callback qgeoroutereply_childevent_callback = nullptr;
    QGeoRouteReply_CustomEvent_Callback qgeoroutereply_customevent_callback = nullptr;
    QGeoRouteReply_ConnectNotify_Callback qgeoroutereply_connectnotify_callback = nullptr;
    QGeoRouteReply_DisconnectNotify_Callback qgeoroutereply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoRouteReply {
        using QGeoRouteReply::childEvent;
        using QGeoRouteReply::connectNotify;
        using QGeoRouteReply::customEvent;
        using QGeoRouteReply::disconnectNotify;
        using QGeoRouteReply::timerEvent;
    };

    VirtualQGeoRouteReply(QGeoRouteReply::Error errorVal, const QString& errorString) : QGeoRouteReply(errorVal, errorString) {};
    VirtualQGeoRouteReply(QGeoRouteReply::Error errorVal, const QString& errorString, QObject* parent) : QGeoRouteReply(errorVal, errorString, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeoroutereply_metaobject_callback) {
            QMetaObject* callback_ret = qgeoroutereply_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoRouteReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoroutereply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeoroutereply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoRouteReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoroutereply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeoroutereply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoRouteReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qgeoroutereply_abort_callback) {
            qgeoroutereply_abort_callback(this);
            return;
        }
        QGeoRouteReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoroutereply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeoroutereply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoRouteReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoroutereply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeoroutereply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoRouteReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoroutereply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeoroutereply_timerevent_callback(this, cbval1);
            return;
        }
        QGeoRouteReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoroutereply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeoroutereply_childevent_callback(this, cbval1);
            return;
        }
        QGeoRouteReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoroutereply_customevent_callback) {
            QEvent* cbval1 = event;
            qgeoroutereply_customevent_callback(this, cbval1);
            return;
        }
        QGeoRouteReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoroutereply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoroutereply_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoRouteReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoroutereply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoroutereply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoRouteReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoRouteReply_SuperTimerEvent(QGeoRouteReply* self, QTimerEvent* event);
    friend void QGeoRouteReply_SuperChildEvent(QGeoRouteReply* self, QChildEvent* event);
    friend void QGeoRouteReply_SuperCustomEvent(QGeoRouteReply* self, QEvent* event);
    friend void QGeoRouteReply_SuperConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
    friend void QGeoRouteReply_SuperDisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
};

#endif
