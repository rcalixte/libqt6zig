#pragma once
#ifndef LOCATION_LIBQPLACESEARCHREPLY_HXX
#define LOCATION_LIBQPLACESEARCHREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceSearchReply
class VirtualQPlaceSearchReply final : public QPlaceSearchReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceSearchReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceSearchReply*);
    using QPlaceSearchReply_Metacast_Callback = void* (*)(QPlaceSearchReply*, const char*);
    using QPlaceSearchReply_Metacall_Callback = int (*)(QPlaceSearchReply*, int, int, void**);
    using QPlaceSearchReply_Type_Callback = int (*)(const QPlaceSearchReply*);
    using QPlaceSearchReply_Abort_Callback = void (*)(QPlaceSearchReply*);
    using QPlaceSearchReply_Event_Callback = bool (*)(QPlaceSearchReply*, QEvent*);
    using QPlaceSearchReply_EventFilter_Callback = bool (*)(QPlaceSearchReply*, QObject*, QEvent*);
    using QPlaceSearchReply_TimerEvent_Callback = void (*)(QPlaceSearchReply*, QTimerEvent*);
    using QPlaceSearchReply_ChildEvent_Callback = void (*)(QPlaceSearchReply*, QChildEvent*);
    using QPlaceSearchReply_CustomEvent_Callback = void (*)(QPlaceSearchReply*, QEvent*);
    using QPlaceSearchReply_ConnectNotify_Callback = void (*)(QPlaceSearchReply*, QMetaMethod*);
    using QPlaceSearchReply_DisconnectNotify_Callback = void (*)(QPlaceSearchReply*, QMetaMethod*);
    using QPlaceSearchReply::isSignalConnected;
    using QPlaceSearchReply::receivers;
    using QPlaceSearchReply::sender;
    using QPlaceSearchReply::senderSignalIndex;
    using QPlaceSearchReply::setError;
    using QPlaceSearchReply::setFinished;
    using QPlaceSearchReply::setNextPageRequest;
    using QPlaceSearchReply::setPreviousPageRequest;
    using QPlaceSearchReply::setRequest;
    using QPlaceSearchReply::setResults;

    // Instance callback storage
    QPlaceSearchReply_MetaObject_Callback qplacesearchreply_metaobject_callback = nullptr;
    QPlaceSearchReply_Metacast_Callback qplacesearchreply_metacast_callback = nullptr;
    QPlaceSearchReply_Metacall_Callback qplacesearchreply_metacall_callback = nullptr;
    QPlaceSearchReply_Type_Callback qplacesearchreply_type_callback = nullptr;
    QPlaceSearchReply_Abort_Callback qplacesearchreply_abort_callback = nullptr;
    QPlaceSearchReply_Event_Callback qplacesearchreply_event_callback = nullptr;
    QPlaceSearchReply_EventFilter_Callback qplacesearchreply_eventfilter_callback = nullptr;
    QPlaceSearchReply_TimerEvent_Callback qplacesearchreply_timerevent_callback = nullptr;
    QPlaceSearchReply_ChildEvent_Callback qplacesearchreply_childevent_callback = nullptr;
    QPlaceSearchReply_CustomEvent_Callback qplacesearchreply_customevent_callback = nullptr;
    QPlaceSearchReply_ConnectNotify_Callback qplacesearchreply_connectnotify_callback = nullptr;
    QPlaceSearchReply_DisconnectNotify_Callback qplacesearchreply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceSearchReply {
        using QPlaceSearchReply::childEvent;
        using QPlaceSearchReply::connectNotify;
        using QPlaceSearchReply::customEvent;
        using QPlaceSearchReply::disconnectNotify;
        using QPlaceSearchReply::timerEvent;
    };

    VirtualQPlaceSearchReply() : QPlaceSearchReply() {};
    VirtualQPlaceSearchReply(QObject* parent) : QPlaceSearchReply(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacesearchreply_metaobject_callback) {
            QMetaObject* callback_ret = qplacesearchreply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceSearchReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacesearchreply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacesearchreply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacesearchreply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacesearchreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceSearchReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacesearchreply_type_callback) {
            int callback_ret = qplacesearchreply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceSearchReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacesearchreply_abort_callback) {
            qplacesearchreply_abort_callback(this);
            return;
        }
        QPlaceSearchReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacesearchreply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacesearchreply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacesearchreply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacesearchreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceSearchReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacesearchreply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacesearchreply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceSearchReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacesearchreply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacesearchreply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceSearchReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacesearchreply_customevent_callback) {
            QEvent* cbval1 = event;
            qplacesearchreply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceSearchReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacesearchreply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacesearchreply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceSearchReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacesearchreply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacesearchreply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceSearchReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceSearchReply_SuperTimerEvent(QPlaceSearchReply* self, QTimerEvent* event);
    friend void QPlaceSearchReply_SuperChildEvent(QPlaceSearchReply* self, QChildEvent* event);
    friend void QPlaceSearchReply_SuperCustomEvent(QPlaceSearchReply* self, QEvent* event);
    friend void QPlaceSearchReply_SuperConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchReply_SuperDisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
};

#endif
