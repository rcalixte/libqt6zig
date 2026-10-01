#pragma once
#ifndef LOCATION_LIBQPLACEREPLY_HXX
#define LOCATION_LIBQPLACEREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceReply
class VirtualQPlaceReply final : public QPlaceReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceReply*);
    using QPlaceReply_Metacast_Callback = void* (*)(QPlaceReply*, const char*);
    using QPlaceReply_Metacall_Callback = int (*)(QPlaceReply*, int, int, void**);
    using QPlaceReply_Type_Callback = int (*)(const QPlaceReply*);
    using QPlaceReply_Abort_Callback = void (*)(QPlaceReply*);
    using QPlaceReply_Event_Callback = bool (*)(QPlaceReply*, QEvent*);
    using QPlaceReply_EventFilter_Callback = bool (*)(QPlaceReply*, QObject*, QEvent*);
    using QPlaceReply_TimerEvent_Callback = void (*)(QPlaceReply*, QTimerEvent*);
    using QPlaceReply_ChildEvent_Callback = void (*)(QPlaceReply*, QChildEvent*);
    using QPlaceReply_CustomEvent_Callback = void (*)(QPlaceReply*, QEvent*);
    using QPlaceReply_ConnectNotify_Callback = void (*)(QPlaceReply*, QMetaMethod*);
    using QPlaceReply_DisconnectNotify_Callback = void (*)(QPlaceReply*, QMetaMethod*);
    using QPlaceReply::isSignalConnected;
    using QPlaceReply::receivers;
    using QPlaceReply::sender;
    using QPlaceReply::senderSignalIndex;
    using QPlaceReply::setError;
    using QPlaceReply::setFinished;

    // Instance callback storage
    QPlaceReply_MetaObject_Callback qplacereply_metaobject_callback = nullptr;
    QPlaceReply_Metacast_Callback qplacereply_metacast_callback = nullptr;
    QPlaceReply_Metacall_Callback qplacereply_metacall_callback = nullptr;
    QPlaceReply_Type_Callback qplacereply_type_callback = nullptr;
    QPlaceReply_Abort_Callback qplacereply_abort_callback = nullptr;
    QPlaceReply_Event_Callback qplacereply_event_callback = nullptr;
    QPlaceReply_EventFilter_Callback qplacereply_eventfilter_callback = nullptr;
    QPlaceReply_TimerEvent_Callback qplacereply_timerevent_callback = nullptr;
    QPlaceReply_ChildEvent_Callback qplacereply_childevent_callback = nullptr;
    QPlaceReply_CustomEvent_Callback qplacereply_customevent_callback = nullptr;
    QPlaceReply_ConnectNotify_Callback qplacereply_connectnotify_callback = nullptr;
    QPlaceReply_DisconnectNotify_Callback qplacereply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceReply {
        using QPlaceReply::childEvent;
        using QPlaceReply::connectNotify;
        using QPlaceReply::customEvent;
        using QPlaceReply::disconnectNotify;
        using QPlaceReply::timerEvent;
    };

    VirtualQPlaceReply() : QPlaceReply() {};
    VirtualQPlaceReply(QObject* parent) : QPlaceReply(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacereply_metaobject_callback) {
            QMetaObject* callback_ret = qplacereply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacereply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacereply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacereply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacereply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacereply_type_callback) {
            int callback_ret = qplacereply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacereply_abort_callback) {
            qplacereply_abort_callback(this);
            return;
        }
        QPlaceReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacereply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacereply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacereply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacereply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacereply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacereply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacereply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacereply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacereply_customevent_callback) {
            QEvent* cbval1 = event;
            qplacereply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacereply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacereply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacereply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacereply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceReply_SuperTimerEvent(QPlaceReply* self, QTimerEvent* event);
    friend void QPlaceReply_SuperChildEvent(QPlaceReply* self, QChildEvent* event);
    friend void QPlaceReply_SuperCustomEvent(QPlaceReply* self, QEvent* event);
    friend void QPlaceReply_SuperConnectNotify(QPlaceReply* self, const QMetaMethod* signal);
    friend void QPlaceReply_SuperDisconnectNotify(QPlaceReply* self, const QMetaMethod* signal);
};

#endif
