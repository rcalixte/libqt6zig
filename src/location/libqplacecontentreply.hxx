#pragma once
#ifndef LOCATION_LIBQPLACECONTENTREPLY_HXX
#define LOCATION_LIBQPLACECONTENTREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceContentReply
class VirtualQPlaceContentReply final : public QPlaceContentReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceContentReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceContentReply*);
    using QPlaceContentReply_Metacast_Callback = void* (*)(QPlaceContentReply*, const char*);
    using QPlaceContentReply_Metacall_Callback = int (*)(QPlaceContentReply*, int, int, void**);
    using QPlaceContentReply_Type_Callback = int (*)(const QPlaceContentReply*);
    using QPlaceContentReply_Abort_Callback = void (*)(QPlaceContentReply*);
    using QPlaceContentReply_Event_Callback = bool (*)(QPlaceContentReply*, QEvent*);
    using QPlaceContentReply_EventFilter_Callback = bool (*)(QPlaceContentReply*, QObject*, QEvent*);
    using QPlaceContentReply_TimerEvent_Callback = void (*)(QPlaceContentReply*, QTimerEvent*);
    using QPlaceContentReply_ChildEvent_Callback = void (*)(QPlaceContentReply*, QChildEvent*);
    using QPlaceContentReply_CustomEvent_Callback = void (*)(QPlaceContentReply*, QEvent*);
    using QPlaceContentReply_ConnectNotify_Callback = void (*)(QPlaceContentReply*, QMetaMethod*);
    using QPlaceContentReply_DisconnectNotify_Callback = void (*)(QPlaceContentReply*, QMetaMethod*);
    using QPlaceContentReply::isSignalConnected;
    using QPlaceContentReply::receivers;
    using QPlaceContentReply::sender;
    using QPlaceContentReply::senderSignalIndex;
    using QPlaceContentReply::setContent;
    using QPlaceContentReply::setError;
    using QPlaceContentReply::setFinished;
    using QPlaceContentReply::setNextPageRequest;
    using QPlaceContentReply::setPreviousPageRequest;
    using QPlaceContentReply::setRequest;
    using QPlaceContentReply::setTotalCount;

    // Instance callback storage
    QPlaceContentReply_MetaObject_Callback qplacecontentreply_metaobject_callback = nullptr;
    QPlaceContentReply_Metacast_Callback qplacecontentreply_metacast_callback = nullptr;
    QPlaceContentReply_Metacall_Callback qplacecontentreply_metacall_callback = nullptr;
    QPlaceContentReply_Type_Callback qplacecontentreply_type_callback = nullptr;
    QPlaceContentReply_Abort_Callback qplacecontentreply_abort_callback = nullptr;
    QPlaceContentReply_Event_Callback qplacecontentreply_event_callback = nullptr;
    QPlaceContentReply_EventFilter_Callback qplacecontentreply_eventfilter_callback = nullptr;
    QPlaceContentReply_TimerEvent_Callback qplacecontentreply_timerevent_callback = nullptr;
    QPlaceContentReply_ChildEvent_Callback qplacecontentreply_childevent_callback = nullptr;
    QPlaceContentReply_CustomEvent_Callback qplacecontentreply_customevent_callback = nullptr;
    QPlaceContentReply_ConnectNotify_Callback qplacecontentreply_connectnotify_callback = nullptr;
    QPlaceContentReply_DisconnectNotify_Callback qplacecontentreply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceContentReply {
        using QPlaceContentReply::childEvent;
        using QPlaceContentReply::connectNotify;
        using QPlaceContentReply::customEvent;
        using QPlaceContentReply::disconnectNotify;
        using QPlaceContentReply::timerEvent;
    };

    VirtualQPlaceContentReply() : QPlaceContentReply() {};
    VirtualQPlaceContentReply(QObject* parent) : QPlaceContentReply(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacecontentreply_metaobject_callback) {
            QMetaObject* callback_ret = qplacecontentreply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceContentReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacecontentreply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacecontentreply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceContentReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacecontentreply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacecontentreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceContentReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacecontentreply_type_callback) {
            int callback_ret = qplacecontentreply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceContentReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacecontentreply_abort_callback) {
            qplacecontentreply_abort_callback(this);
            return;
        }
        QPlaceContentReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacecontentreply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacecontentreply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceContentReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacecontentreply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacecontentreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceContentReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacecontentreply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacecontentreply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceContentReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacecontentreply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacecontentreply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceContentReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacecontentreply_customevent_callback) {
            QEvent* cbval1 = event;
            qplacecontentreply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceContentReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacecontentreply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacecontentreply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceContentReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacecontentreply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacecontentreply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceContentReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceContentReply_SuperTimerEvent(QPlaceContentReply* self, QTimerEvent* event);
    friend void QPlaceContentReply_SuperChildEvent(QPlaceContentReply* self, QChildEvent* event);
    friend void QPlaceContentReply_SuperCustomEvent(QPlaceContentReply* self, QEvent* event);
    friend void QPlaceContentReply_SuperConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
    friend void QPlaceContentReply_SuperDisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
};

#endif
