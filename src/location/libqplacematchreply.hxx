#pragma once
#ifndef LOCATION_LIBQPLACEMATCHREPLY_HXX
#define LOCATION_LIBQPLACEMATCHREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceMatchReply
class VirtualQPlaceMatchReply final : public QPlaceMatchReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceMatchReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceMatchReply*);
    using QPlaceMatchReply_Metacast_Callback = void* (*)(QPlaceMatchReply*, const char*);
    using QPlaceMatchReply_Metacall_Callback = int (*)(QPlaceMatchReply*, int, int, void**);
    using QPlaceMatchReply_Type_Callback = int (*)(const QPlaceMatchReply*);
    using QPlaceMatchReply_Abort_Callback = void (*)(QPlaceMatchReply*);
    using QPlaceMatchReply_Event_Callback = bool (*)(QPlaceMatchReply*, QEvent*);
    using QPlaceMatchReply_EventFilter_Callback = bool (*)(QPlaceMatchReply*, QObject*, QEvent*);
    using QPlaceMatchReply_TimerEvent_Callback = void (*)(QPlaceMatchReply*, QTimerEvent*);
    using QPlaceMatchReply_ChildEvent_Callback = void (*)(QPlaceMatchReply*, QChildEvent*);
    using QPlaceMatchReply_CustomEvent_Callback = void (*)(QPlaceMatchReply*, QEvent*);
    using QPlaceMatchReply_ConnectNotify_Callback = void (*)(QPlaceMatchReply*, QMetaMethod*);
    using QPlaceMatchReply_DisconnectNotify_Callback = void (*)(QPlaceMatchReply*, QMetaMethod*);
    using QPlaceMatchReply::isSignalConnected;
    using QPlaceMatchReply::receivers;
    using QPlaceMatchReply::sender;
    using QPlaceMatchReply::senderSignalIndex;
    using QPlaceMatchReply::setError;
    using QPlaceMatchReply::setFinished;
    using QPlaceMatchReply::setPlaces;
    using QPlaceMatchReply::setRequest;

    // Instance callback storage
    QPlaceMatchReply_MetaObject_Callback qplacematchreply_metaobject_callback = nullptr;
    QPlaceMatchReply_Metacast_Callback qplacematchreply_metacast_callback = nullptr;
    QPlaceMatchReply_Metacall_Callback qplacematchreply_metacall_callback = nullptr;
    QPlaceMatchReply_Type_Callback qplacematchreply_type_callback = nullptr;
    QPlaceMatchReply_Abort_Callback qplacematchreply_abort_callback = nullptr;
    QPlaceMatchReply_Event_Callback qplacematchreply_event_callback = nullptr;
    QPlaceMatchReply_EventFilter_Callback qplacematchreply_eventfilter_callback = nullptr;
    QPlaceMatchReply_TimerEvent_Callback qplacematchreply_timerevent_callback = nullptr;
    QPlaceMatchReply_ChildEvent_Callback qplacematchreply_childevent_callback = nullptr;
    QPlaceMatchReply_CustomEvent_Callback qplacematchreply_customevent_callback = nullptr;
    QPlaceMatchReply_ConnectNotify_Callback qplacematchreply_connectnotify_callback = nullptr;
    QPlaceMatchReply_DisconnectNotify_Callback qplacematchreply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceMatchReply {
        using QPlaceMatchReply::childEvent;
        using QPlaceMatchReply::connectNotify;
        using QPlaceMatchReply::customEvent;
        using QPlaceMatchReply::disconnectNotify;
        using QPlaceMatchReply::timerEvent;
    };

    VirtualQPlaceMatchReply() : QPlaceMatchReply() {};
    VirtualQPlaceMatchReply(QObject* parent) : QPlaceMatchReply(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacematchreply_metaobject_callback) {
            QMetaObject* callback_ret = qplacematchreply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceMatchReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacematchreply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacematchreply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceMatchReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacematchreply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacematchreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceMatchReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacematchreply_type_callback) {
            int callback_ret = qplacematchreply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceMatchReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacematchreply_abort_callback) {
            qplacematchreply_abort_callback(this);
            return;
        }
        QPlaceMatchReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacematchreply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacematchreply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceMatchReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacematchreply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacematchreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceMatchReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacematchreply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacematchreply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceMatchReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacematchreply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacematchreply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceMatchReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacematchreply_customevent_callback) {
            QEvent* cbval1 = event;
            qplacematchreply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceMatchReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacematchreply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacematchreply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceMatchReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacematchreply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacematchreply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceMatchReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceMatchReply_SuperTimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
    friend void QPlaceMatchReply_SuperChildEvent(QPlaceMatchReply* self, QChildEvent* event);
    friend void QPlaceMatchReply_SuperCustomEvent(QPlaceMatchReply* self, QEvent* event);
    friend void QPlaceMatchReply_SuperConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
    friend void QPlaceMatchReply_SuperDisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
};

#endif
