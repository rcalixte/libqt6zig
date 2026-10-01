#pragma once
#ifndef LOCATION_LIBQPLACESEARCHSUGGESTIONREPLY_HXX
#define LOCATION_LIBQPLACESEARCHSUGGESTIONREPLY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceSearchSuggestionReply
class VirtualQPlaceSearchSuggestionReply final : public QPlaceSearchSuggestionReply {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceSearchSuggestionReply_MetaObject_Callback = QMetaObject* (*)(const QPlaceSearchSuggestionReply*);
    using QPlaceSearchSuggestionReply_Metacast_Callback = void* (*)(QPlaceSearchSuggestionReply*, const char*);
    using QPlaceSearchSuggestionReply_Metacall_Callback = int (*)(QPlaceSearchSuggestionReply*, int, int, void**);
    using QPlaceSearchSuggestionReply_Type_Callback = int (*)(const QPlaceSearchSuggestionReply*);
    using QPlaceSearchSuggestionReply_Abort_Callback = void (*)(QPlaceSearchSuggestionReply*);
    using QPlaceSearchSuggestionReply_Event_Callback = bool (*)(QPlaceSearchSuggestionReply*, QEvent*);
    using QPlaceSearchSuggestionReply_EventFilter_Callback = bool (*)(QPlaceSearchSuggestionReply*, QObject*, QEvent*);
    using QPlaceSearchSuggestionReply_TimerEvent_Callback = void (*)(QPlaceSearchSuggestionReply*, QTimerEvent*);
    using QPlaceSearchSuggestionReply_ChildEvent_Callback = void (*)(QPlaceSearchSuggestionReply*, QChildEvent*);
    using QPlaceSearchSuggestionReply_CustomEvent_Callback = void (*)(QPlaceSearchSuggestionReply*, QEvent*);
    using QPlaceSearchSuggestionReply_ConnectNotify_Callback = void (*)(QPlaceSearchSuggestionReply*, QMetaMethod*);
    using QPlaceSearchSuggestionReply_DisconnectNotify_Callback = void (*)(QPlaceSearchSuggestionReply*, QMetaMethod*);
    using QPlaceSearchSuggestionReply::isSignalConnected;
    using QPlaceSearchSuggestionReply::receivers;
    using QPlaceSearchSuggestionReply::sender;
    using QPlaceSearchSuggestionReply::senderSignalIndex;
    using QPlaceSearchSuggestionReply::setError;
    using QPlaceSearchSuggestionReply::setFinished;
    using QPlaceSearchSuggestionReply::setSuggestions;

    // Instance callback storage
    QPlaceSearchSuggestionReply_MetaObject_Callback qplacesearchsuggestionreply_metaobject_callback = nullptr;
    QPlaceSearchSuggestionReply_Metacast_Callback qplacesearchsuggestionreply_metacast_callback = nullptr;
    QPlaceSearchSuggestionReply_Metacall_Callback qplacesearchsuggestionreply_metacall_callback = nullptr;
    QPlaceSearchSuggestionReply_Type_Callback qplacesearchsuggestionreply_type_callback = nullptr;
    QPlaceSearchSuggestionReply_Abort_Callback qplacesearchsuggestionreply_abort_callback = nullptr;
    QPlaceSearchSuggestionReply_Event_Callback qplacesearchsuggestionreply_event_callback = nullptr;
    QPlaceSearchSuggestionReply_EventFilter_Callback qplacesearchsuggestionreply_eventfilter_callback = nullptr;
    QPlaceSearchSuggestionReply_TimerEvent_Callback qplacesearchsuggestionreply_timerevent_callback = nullptr;
    QPlaceSearchSuggestionReply_ChildEvent_Callback qplacesearchsuggestionreply_childevent_callback = nullptr;
    QPlaceSearchSuggestionReply_CustomEvent_Callback qplacesearchsuggestionreply_customevent_callback = nullptr;
    QPlaceSearchSuggestionReply_ConnectNotify_Callback qplacesearchsuggestionreply_connectnotify_callback = nullptr;
    QPlaceSearchSuggestionReply_DisconnectNotify_Callback qplacesearchsuggestionreply_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlaceSearchSuggestionReply {
        using QPlaceSearchSuggestionReply::childEvent;
        using QPlaceSearchSuggestionReply::connectNotify;
        using QPlaceSearchSuggestionReply::customEvent;
        using QPlaceSearchSuggestionReply::disconnectNotify;
        using QPlaceSearchSuggestionReply::timerEvent;
    };

    VirtualQPlaceSearchSuggestionReply() : QPlaceSearchSuggestionReply() {};
    VirtualQPlaceSearchSuggestionReply(QObject* parent) : QPlaceSearchSuggestionReply(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacesearchsuggestionreply_metaobject_callback) {
            QMetaObject* callback_ret = qplacesearchsuggestionreply_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacesearchsuggestionreply_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacesearchsuggestionreply_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacesearchsuggestionreply_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacesearchsuggestionreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceSearchSuggestionReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacesearchsuggestionreply_type_callback) {
            int callback_ret = qplacesearchsuggestionreply_type_callback(this);
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceSearchSuggestionReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacesearchsuggestionreply_abort_callback) {
            qplacesearchsuggestionreply_abort_callback(this);
            return;
        }
        QPlaceSearchSuggestionReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacesearchsuggestionreply_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacesearchsuggestionreply_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacesearchsuggestionreply_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacesearchsuggestionreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacesearchsuggestionreply_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacesearchsuggestionreply_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacesearchsuggestionreply_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacesearchsuggestionreply_childevent_callback(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacesearchsuggestionreply_customevent_callback) {
            QEvent* cbval1 = event;
            qplacesearchsuggestionreply_customevent_callback(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacesearchsuggestionreply_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacesearchsuggestionreply_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacesearchsuggestionreply_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacesearchsuggestionreply_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceSearchSuggestionReply_SuperTimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
    friend void QPlaceSearchSuggestionReply_SuperChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
    friend void QPlaceSearchSuggestionReply_SuperCustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
    friend void QPlaceSearchSuggestionReply_SuperConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_SuperDisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
};

#endif
