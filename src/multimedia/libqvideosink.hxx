#pragma once
#ifndef MULTIMEDIA_LIBQVIDEOSINK_HXX
#define MULTIMEDIA_LIBQVIDEOSINK_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVideoSink
class VirtualQVideoSink final : public QVideoSink {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVideoSink_MetaObject_Callback = QMetaObject* (*)(const QVideoSink*);
    using QVideoSink_Metacast_Callback = void* (*)(QVideoSink*, const char*);
    using QVideoSink_Metacall_Callback = int (*)(QVideoSink*, int, int, void**);
    using QVideoSink_Event_Callback = bool (*)(QVideoSink*, QEvent*);
    using QVideoSink_EventFilter_Callback = bool (*)(QVideoSink*, QObject*, QEvent*);
    using QVideoSink_TimerEvent_Callback = void (*)(QVideoSink*, QTimerEvent*);
    using QVideoSink_ChildEvent_Callback = void (*)(QVideoSink*, QChildEvent*);
    using QVideoSink_CustomEvent_Callback = void (*)(QVideoSink*, QEvent*);
    using QVideoSink_ConnectNotify_Callback = void (*)(QVideoSink*, QMetaMethod*);
    using QVideoSink_DisconnectNotify_Callback = void (*)(QVideoSink*, QMetaMethod*);
    using QVideoSink::isSignalConnected;
    using QVideoSink::receivers;
    using QVideoSink::sender;
    using QVideoSink::senderSignalIndex;

    // Instance callback storage
    QVideoSink_MetaObject_Callback qvideosink_metaobject_callback = nullptr;
    QVideoSink_Metacast_Callback qvideosink_metacast_callback = nullptr;
    QVideoSink_Metacall_Callback qvideosink_metacall_callback = nullptr;
    QVideoSink_Event_Callback qvideosink_event_callback = nullptr;
    QVideoSink_EventFilter_Callback qvideosink_eventfilter_callback = nullptr;
    QVideoSink_TimerEvent_Callback qvideosink_timerevent_callback = nullptr;
    QVideoSink_ChildEvent_Callback qvideosink_childevent_callback = nullptr;
    QVideoSink_CustomEvent_Callback qvideosink_customevent_callback = nullptr;
    QVideoSink_ConnectNotify_Callback qvideosink_connectnotify_callback = nullptr;
    QVideoSink_DisconnectNotify_Callback qvideosink_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVideoSink {
        using QVideoSink::childEvent;
        using QVideoSink::connectNotify;
        using QVideoSink::customEvent;
        using QVideoSink::disconnectNotify;
        using QVideoSink::timerEvent;
    };

    VirtualQVideoSink() : QVideoSink() {};
    VirtualQVideoSink(QObject* parent) : QVideoSink(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvideosink_metaobject_callback) {
            QMetaObject* callback_ret = qvideosink_metaobject_callback(this);
            return callback_ret;
        }
        return QVideoSink::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvideosink_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvideosink_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoSink::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvideosink_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvideosink_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVideoSink::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvideosink_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvideosink_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoSink::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvideosink_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvideosink_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVideoSink::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvideosink_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvideosink_timerevent_callback(this, cbval1);
            return;
        }
        QVideoSink::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvideosink_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvideosink_childevent_callback(this, cbval1);
            return;
        }
        QVideoSink::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvideosink_customevent_callback) {
            QEvent* cbval1 = event;
            qvideosink_customevent_callback(this, cbval1);
            return;
        }
        QVideoSink::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvideosink_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvideosink_connectnotify_callback(this, cbval1);
            return;
        }
        QVideoSink::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvideosink_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvideosink_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVideoSink::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVideoSink_SuperTimerEvent(QVideoSink* self, QTimerEvent* event);
    friend void QVideoSink_SuperChildEvent(QVideoSink* self, QChildEvent* event);
    friend void QVideoSink_SuperCustomEvent(QVideoSink* self, QEvent* event);
    friend void QVideoSink_SuperConnectNotify(QVideoSink* self, const QMetaMethod* signal);
    friend void QVideoSink_SuperDisconnectNotify(QVideoSink* self, const QMetaMethod* signal);
};

#endif
