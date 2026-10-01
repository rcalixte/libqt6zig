#pragma once
#ifndef LOCATION_LIBQPLACEIDREPLY_HXX
#define LOCATION_LIBQPLACEIDREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceIdReply
class VirtualQPlaceIdReply final : public QPlaceIdReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceIdReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceIdReply*);
    using QPlaceIdReply_Metacast_Callback = void* (*)(QPlaceIdReply*, const char*);
    using QPlaceIdReply_Metacall_Callback = int (*)(QPlaceIdReply*, int, int, void**);
    using QPlaceIdReply_Type_Callback = int (*)(const QPlaceIdReply*);
    using QPlaceIdReply_Abort_Callback = void (*)(QPlaceIdReply*);
    using QPlaceIdReply_Event_Callback = bool (*)(QPlaceIdReply*, QEvent*);
    using QPlaceIdReply_EventFilter_Callback = bool (*)(QPlaceIdReply*, QObject*, QEvent*);
    using QPlaceIdReply_TimerEvent_Callback = void (*)(QPlaceIdReply*, QTimerEvent*);
    using QPlaceIdReply_ChildEvent_Callback = void (*)(QPlaceIdReply*, QChildEvent*);
    using QPlaceIdReply_CustomEvent_Callback = void (*)(QPlaceIdReply*, QEvent*);
    using QPlaceIdReply_ConnectNotify_Callback = void (*)(QPlaceIdReply*, QMetaMethod*);
    using QPlaceIdReply_DisconnectNotify_Callback = void (*)(QPlaceIdReply*, QMetaMethod*);
    using QPlaceIdReply::isSignalConnected;
    using QPlaceIdReply::receivers;
    using QPlaceIdReply::sender;
    using QPlaceIdReply::senderSignalIndex;
    using QPlaceIdReply::setError;
    using QPlaceIdReply::setFinished;
    using QPlaceIdReply::setId;

    // Instance callback storage
    QPlaceIdReply_MetaObject_Callback qplaceidreply_metaobject_callback = nullptr;
    QPlaceIdReply_Metacast_Callback qplaceidreply_metacast_callback = nullptr;
    QPlaceIdReply_Metacall_Callback qplaceidreply_metacall_callback = nullptr;
    QPlaceIdReply_Type_Callback qplaceidreply_type_callback = nullptr;
    QPlaceIdReply_Abort_Callback qplaceidreply_abort_callback = nullptr;
    QPlaceIdReply_Event_Callback qplaceidreply_event_callback = nullptr;
    QPlaceIdReply_EventFilter_Callback qplaceidreply_eventfilter_callback = nullptr;
    QPlaceIdReply_TimerEvent_Callback qplaceidreply_timerevent_callback = nullptr;
    QPlaceIdReply_ChildEvent_Callback qplaceidreply_childevent_callback = nullptr;
    QPlaceIdReply_CustomEvent_Callback qplaceidreply_customevent_callback = nullptr;
    QPlaceIdReply_ConnectNotify_Callback qplaceidreply_connectnotify_callback = nullptr;
    QPlaceIdReply_DisconnectNotify_Callback qplaceidreply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceIdReply {
        using QPlaceIdReply::childEvent;
        using QPlaceIdReply::connectNotify;
        using QPlaceIdReply::customEvent;
        using QPlaceIdReply::disconnectNotify;
        using QPlaceIdReply::timerEvent;
    };

    VirtualQPlaceIdReply(QPlaceIdReply::OperationType operationType) : QPlaceIdReply(operationType) {};
    VirtualQPlaceIdReply(QPlaceIdReply::OperationType operationType, QObject* parent) : QPlaceIdReply(operationType, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplaceidreply_metaobject_callback) {
            QMetaObject* callback_ret = qplaceidreply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceIdReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplaceidreply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplaceidreply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceIdReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaceidreply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplaceidreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceIdReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplaceidreply_type_callback) {
            int callback_ret = qplaceidreply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceIdReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplaceidreply_abort_callback) {
            qplaceidreply_abort_callback(this);
            return;
        }
        QPlaceIdReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplaceidreply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplaceidreply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceIdReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplaceidreply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplaceidreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceIdReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplaceidreply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplaceidreply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceIdReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaceidreply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplaceidreply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceIdReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaceidreply_customevent_callback) {
            QEvent* cbval1 = event;
            qplaceidreply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceIdReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaceidreply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplaceidreply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceIdReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaceidreply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplaceidreply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceIdReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceIdReply_SuperTimerEvent(QPlaceIdReply* self, QTimerEvent* event);
    friend void QPlaceIdReply_SuperChildEvent(QPlaceIdReply* self, QChildEvent* event);
    friend void QPlaceIdReply_SuperCustomEvent(QPlaceIdReply* self, QEvent* event);
    friend void QPlaceIdReply_SuperConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
    friend void QPlaceIdReply_SuperDisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
};

#endif
