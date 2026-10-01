#pragma once
#ifndef LOCATION_LIBQGEOCODEREPLY_HXX
#define LOCATION_LIBQGEOCODEREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoCodeReply
class VirtualQGeoCodeReply final : public QGeoCodeReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoCodeReply_MetaObject_Callback = QMetaObject* (*)(const QGeoCodeReply*);
    using QGeoCodeReply_Metacast_Callback = void* (*)(QGeoCodeReply*, const char*);
    using QGeoCodeReply_Metacall_Callback = int (*)(QGeoCodeReply*, int, int, void**);
    using QGeoCodeReply_Abort_Callback = void (*)(QGeoCodeReply*);
    using QGeoCodeReply_Event_Callback = bool (*)(QGeoCodeReply*, QEvent*);
    using QGeoCodeReply_EventFilter_Callback = bool (*)(QGeoCodeReply*, QObject*, QEvent*);
    using QGeoCodeReply_TimerEvent_Callback = void (*)(QGeoCodeReply*, QTimerEvent*);
    using QGeoCodeReply_ChildEvent_Callback = void (*)(QGeoCodeReply*, QChildEvent*);
    using QGeoCodeReply_CustomEvent_Callback = void (*)(QGeoCodeReply*, QEvent*);
    using QGeoCodeReply_ConnectNotify_Callback = void (*)(QGeoCodeReply*, QMetaMethod*);
    using QGeoCodeReply_DisconnectNotify_Callback = void (*)(QGeoCodeReply*, QMetaMethod*);
    using QGeoCodeReply::addLocation;
    using QGeoCodeReply::isSignalConnected;
    using QGeoCodeReply::receivers;
    using QGeoCodeReply::sender;
    using QGeoCodeReply::senderSignalIndex;
    using QGeoCodeReply::setError;
    using QGeoCodeReply::setFinished;
    using QGeoCodeReply::setLimit;
    using QGeoCodeReply::setLocations;
    using QGeoCodeReply::setOffset;
    using QGeoCodeReply::setViewport;

    // Instance callback storage
    QGeoCodeReply_MetaObject_Callback qgeocodereply_metaobject_callback = nullptr;
    QGeoCodeReply_Metacast_Callback qgeocodereply_metacast_callback = nullptr;
    QGeoCodeReply_Metacall_Callback qgeocodereply_metacall_callback = nullptr;
    QGeoCodeReply_Abort_Callback qgeocodereply_abort_callback = nullptr;
    QGeoCodeReply_Event_Callback qgeocodereply_event_callback = nullptr;
    QGeoCodeReply_EventFilter_Callback qgeocodereply_eventfilter_callback = nullptr;
    QGeoCodeReply_TimerEvent_Callback qgeocodereply_timerevent_callback = nullptr;
    QGeoCodeReply_ChildEvent_Callback qgeocodereply_childevent_callback = nullptr;
    QGeoCodeReply_CustomEvent_Callback qgeocodereply_customevent_callback = nullptr;
    QGeoCodeReply_ConnectNotify_Callback qgeocodereply_connectnotify_callback = nullptr;
    QGeoCodeReply_DisconnectNotify_Callback qgeocodereply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoCodeReply {
        using QGeoCodeReply::childEvent;
        using QGeoCodeReply::connectNotify;
        using QGeoCodeReply::customEvent;
        using QGeoCodeReply::disconnectNotify;
        using QGeoCodeReply::timerEvent;
    };

    VirtualQGeoCodeReply(QGeoCodeReply::Error errorVal, const QString& errorString) : QGeoCodeReply(errorVal, errorString) {};
    VirtualQGeoCodeReply(QGeoCodeReply::Error errorVal, const QString& errorString, QObject* parent) : QGeoCodeReply(errorVal, errorString, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeocodereply_metaobject_callback) {
            QMetaObject* callback_ret = qgeocodereply_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoCodeReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeocodereply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeocodereply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoCodeReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeocodereply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeocodereply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoCodeReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qgeocodereply_abort_callback) {
            qgeocodereply_abort_callback(this);
            return;
        }
        QGeoCodeReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeocodereply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeocodereply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoCodeReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeocodereply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeocodereply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodeReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeocodereply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeocodereply_timerevent_callback(this, cbval1);
            return;
        }
        QGeoCodeReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeocodereply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeocodereply_childevent_callback(this, cbval1);
            return;
        }
        QGeoCodeReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeocodereply_customevent_callback) {
            QEvent* cbval1 = event;
            qgeocodereply_customevent_callback(this, cbval1);
            return;
        }
        QGeoCodeReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeocodereply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeocodereply_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoCodeReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeocodereply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeocodereply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoCodeReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoCodeReply_SuperTimerEvent(QGeoCodeReply* self, QTimerEvent* event);
    friend void QGeoCodeReply_SuperChildEvent(QGeoCodeReply* self, QChildEvent* event);
    friend void QGeoCodeReply_SuperCustomEvent(QGeoCodeReply* self, QEvent* event);
    friend void QGeoCodeReply_SuperConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
    friend void QGeoCodeReply_SuperDisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
};

#endif
