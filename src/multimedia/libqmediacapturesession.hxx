#pragma once
#ifndef MULTIMEDIA_LIBQMEDIACAPTURESESSION_HXX
#define MULTIMEDIA_LIBQMEDIACAPTURESESSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaCaptureSession
class VirtualQMediaCaptureSession final : public QMediaCaptureSession {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMediaCaptureSession_MetaObject_Callback = QMetaObject* (*)(const QMediaCaptureSession*);
    using QMediaCaptureSession_Metacast_Callback = void* (*)(QMediaCaptureSession*, const char*);
    using QMediaCaptureSession_Metacall_Callback = int (*)(QMediaCaptureSession*, int, int, void**);
    using QMediaCaptureSession_Event_Callback = bool (*)(QMediaCaptureSession*, QEvent*);
    using QMediaCaptureSession_EventFilter_Callback = bool (*)(QMediaCaptureSession*, QObject*, QEvent*);
    using QMediaCaptureSession_TimerEvent_Callback = void (*)(QMediaCaptureSession*, QTimerEvent*);
    using QMediaCaptureSession_ChildEvent_Callback = void (*)(QMediaCaptureSession*, QChildEvent*);
    using QMediaCaptureSession_CustomEvent_Callback = void (*)(QMediaCaptureSession*, QEvent*);
    using QMediaCaptureSession_ConnectNotify_Callback = void (*)(QMediaCaptureSession*, QMetaMethod*);
    using QMediaCaptureSession_DisconnectNotify_Callback = void (*)(QMediaCaptureSession*, QMetaMethod*);
    using QMediaCaptureSession::isSignalConnected;
    using QMediaCaptureSession::receivers;
    using QMediaCaptureSession::sender;
    using QMediaCaptureSession::senderSignalIndex;

    // Instance callback storage
    QMediaCaptureSession_MetaObject_Callback qmediacapturesession_metaobject_callback = nullptr;
    QMediaCaptureSession_Metacast_Callback qmediacapturesession_metacast_callback = nullptr;
    QMediaCaptureSession_Metacall_Callback qmediacapturesession_metacall_callback = nullptr;
    QMediaCaptureSession_Event_Callback qmediacapturesession_event_callback = nullptr;
    QMediaCaptureSession_EventFilter_Callback qmediacapturesession_eventfilter_callback = nullptr;
    QMediaCaptureSession_TimerEvent_Callback qmediacapturesession_timerevent_callback = nullptr;
    QMediaCaptureSession_ChildEvent_Callback qmediacapturesession_childevent_callback = nullptr;
    QMediaCaptureSession_CustomEvent_Callback qmediacapturesession_customevent_callback = nullptr;
    QMediaCaptureSession_ConnectNotify_Callback qmediacapturesession_connectnotify_callback = nullptr;
    QMediaCaptureSession_DisconnectNotify_Callback qmediacapturesession_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMediaCaptureSession {
        using QMediaCaptureSession::childEvent;
        using QMediaCaptureSession::connectNotify;
        using QMediaCaptureSession::customEvent;
        using QMediaCaptureSession::disconnectNotify;
        using QMediaCaptureSession::timerEvent;
    };

    VirtualQMediaCaptureSession() : QMediaCaptureSession() {};
    VirtualQMediaCaptureSession(QObject* parent) : QMediaCaptureSession(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmediacapturesession_metaobject_callback) {
            QMetaObject* callback_ret = qmediacapturesession_metaobject_callback(this);
            return callback_ret;
        }
        return QMediaCaptureSession::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmediacapturesession_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmediacapturesession_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaCaptureSession::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediacapturesession_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmediacapturesession_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMediaCaptureSession::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediacapturesession_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmediacapturesession_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaCaptureSession::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediacapturesession_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmediacapturesession_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMediaCaptureSession::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediacapturesession_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmediacapturesession_timerevent_callback(this, cbval1);
            return;
        }
        QMediaCaptureSession::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediacapturesession_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmediacapturesession_childevent_callback(this, cbval1);
            return;
        }
        QMediaCaptureSession::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediacapturesession_customevent_callback) {
            QEvent* cbval1 = event;
            qmediacapturesession_customevent_callback(this, cbval1);
            return;
        }
        QMediaCaptureSession::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediacapturesession_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediacapturesession_connectnotify_callback(this, cbval1);
            return;
        }
        QMediaCaptureSession::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediacapturesession_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediacapturesession_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMediaCaptureSession::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMediaCaptureSession_SuperTimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
    friend void QMediaCaptureSession_SuperChildEvent(QMediaCaptureSession* self, QChildEvent* event);
    friend void QMediaCaptureSession_SuperCustomEvent(QMediaCaptureSession* self, QEvent* event);
    friend void QMediaCaptureSession_SuperConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
    friend void QMediaCaptureSession_SuperDisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
};

#endif
