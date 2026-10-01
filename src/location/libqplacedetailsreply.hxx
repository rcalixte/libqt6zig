#pragma once
#ifndef LOCATION_LIBQPLACEDETAILSREPLY_HXX
#define LOCATION_LIBQPLACEDETAILSREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceDetailsReply
class VirtualQPlaceDetailsReply final : public QPlaceDetailsReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceDetailsReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceDetailsReply*);
    using QPlaceDetailsReply_Metacast_Callback = void* (*)(QPlaceDetailsReply*, const char*);
    using QPlaceDetailsReply_Metacall_Callback = int (*)(QPlaceDetailsReply*, int, int, void**);
    using QPlaceDetailsReply_Type_Callback = int (*)(const QPlaceDetailsReply*);
    using QPlaceDetailsReply_Abort_Callback = void (*)(QPlaceDetailsReply*);
    using QPlaceDetailsReply_Event_Callback = bool (*)(QPlaceDetailsReply*, QEvent*);
    using QPlaceDetailsReply_EventFilter_Callback = bool (*)(QPlaceDetailsReply*, QObject*, QEvent*);
    using QPlaceDetailsReply_TimerEvent_Callback = void (*)(QPlaceDetailsReply*, QTimerEvent*);
    using QPlaceDetailsReply_ChildEvent_Callback = void (*)(QPlaceDetailsReply*, QChildEvent*);
    using QPlaceDetailsReply_CustomEvent_Callback = void (*)(QPlaceDetailsReply*, QEvent*);
    using QPlaceDetailsReply_ConnectNotify_Callback = void (*)(QPlaceDetailsReply*, QMetaMethod*);
    using QPlaceDetailsReply_DisconnectNotify_Callback = void (*)(QPlaceDetailsReply*, QMetaMethod*);
    using QPlaceDetailsReply::isSignalConnected;
    using QPlaceDetailsReply::receivers;
    using QPlaceDetailsReply::sender;
    using QPlaceDetailsReply::senderSignalIndex;
    using QPlaceDetailsReply::setError;
    using QPlaceDetailsReply::setFinished;
    using QPlaceDetailsReply::setPlace;

    // Instance callback storage
    QPlaceDetailsReply_MetaObject_Callback qplacedetailsreply_metaobject_callback = nullptr;
    QPlaceDetailsReply_Metacast_Callback qplacedetailsreply_metacast_callback = nullptr;
    QPlaceDetailsReply_Metacall_Callback qplacedetailsreply_metacall_callback = nullptr;
    QPlaceDetailsReply_Type_Callback qplacedetailsreply_type_callback = nullptr;
    QPlaceDetailsReply_Abort_Callback qplacedetailsreply_abort_callback = nullptr;
    QPlaceDetailsReply_Event_Callback qplacedetailsreply_event_callback = nullptr;
    QPlaceDetailsReply_EventFilter_Callback qplacedetailsreply_eventfilter_callback = nullptr;
    QPlaceDetailsReply_TimerEvent_Callback qplacedetailsreply_timerevent_callback = nullptr;
    QPlaceDetailsReply_ChildEvent_Callback qplacedetailsreply_childevent_callback = nullptr;
    QPlaceDetailsReply_CustomEvent_Callback qplacedetailsreply_customevent_callback = nullptr;
    QPlaceDetailsReply_ConnectNotify_Callback qplacedetailsreply_connectnotify_callback = nullptr;
    QPlaceDetailsReply_DisconnectNotify_Callback qplacedetailsreply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceDetailsReply {
        using QPlaceDetailsReply::childEvent;
        using QPlaceDetailsReply::connectNotify;
        using QPlaceDetailsReply::customEvent;
        using QPlaceDetailsReply::disconnectNotify;
        using QPlaceDetailsReply::timerEvent;
    };

    VirtualQPlaceDetailsReply() : QPlaceDetailsReply() {};
    VirtualQPlaceDetailsReply(QObject* parent) : QPlaceDetailsReply(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacedetailsreply_metaobject_callback) {
            QMetaObject* callback_ret = qplacedetailsreply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceDetailsReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacedetailsreply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacedetailsreply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceDetailsReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacedetailsreply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacedetailsreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceDetailsReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacedetailsreply_type_callback) {
            int callback_ret = qplacedetailsreply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceDetailsReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacedetailsreply_abort_callback) {
            qplacedetailsreply_abort_callback(this);
            return;
        }
        QPlaceDetailsReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacedetailsreply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacedetailsreply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceDetailsReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacedetailsreply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacedetailsreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceDetailsReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacedetailsreply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacedetailsreply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceDetailsReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacedetailsreply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacedetailsreply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceDetailsReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacedetailsreply_customevent_callback) {
            QEvent* cbval1 = event;
            qplacedetailsreply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceDetailsReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacedetailsreply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacedetailsreply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceDetailsReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacedetailsreply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacedetailsreply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceDetailsReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceDetailsReply_SuperTimerEvent(QPlaceDetailsReply* self, QTimerEvent* event);
    friend void QPlaceDetailsReply_SuperChildEvent(QPlaceDetailsReply* self, QChildEvent* event);
    friend void QPlaceDetailsReply_SuperCustomEvent(QPlaceDetailsReply* self, QEvent* event);
    friend void QPlaceDetailsReply_SuperConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
    friend void QPlaceDetailsReply_SuperDisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
};

#endif
