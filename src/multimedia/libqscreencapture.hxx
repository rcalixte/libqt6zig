#pragma once
#ifndef MULTIMEDIA_LIBQSCREENCAPTURE_HXX
#define MULTIMEDIA_LIBQSCREENCAPTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScreenCapture
class VirtualQScreenCapture final : public QScreenCapture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScreenCapture_MetaObject_Callback = QMetaObject* (*)(const QScreenCapture*);
    using QScreenCapture_Metacast_Callback = void* (*)(QScreenCapture*, const char*);
    using QScreenCapture_Metacall_Callback = int (*)(QScreenCapture*, int, int, void**);
    using QScreenCapture_Event_Callback = bool (*)(QScreenCapture*, QEvent*);
    using QScreenCapture_EventFilter_Callback = bool (*)(QScreenCapture*, QObject*, QEvent*);
    using QScreenCapture_TimerEvent_Callback = void (*)(QScreenCapture*, QTimerEvent*);
    using QScreenCapture_ChildEvent_Callback = void (*)(QScreenCapture*, QChildEvent*);
    using QScreenCapture_CustomEvent_Callback = void (*)(QScreenCapture*, QEvent*);
    using QScreenCapture_ConnectNotify_Callback = void (*)(QScreenCapture*, QMetaMethod*);
    using QScreenCapture_DisconnectNotify_Callback = void (*)(QScreenCapture*, QMetaMethod*);
    using QScreenCapture::isSignalConnected;
    using QScreenCapture::receivers;
    using QScreenCapture::sender;
    using QScreenCapture::senderSignalIndex;

    // Instance callback storage
    QScreenCapture_MetaObject_Callback qscreencapture_metaobject_callback = nullptr;
    QScreenCapture_Metacast_Callback qscreencapture_metacast_callback = nullptr;
    QScreenCapture_Metacall_Callback qscreencapture_metacall_callback = nullptr;
    QScreenCapture_Event_Callback qscreencapture_event_callback = nullptr;
    QScreenCapture_EventFilter_Callback qscreencapture_eventfilter_callback = nullptr;
    QScreenCapture_TimerEvent_Callback qscreencapture_timerevent_callback = nullptr;
    QScreenCapture_ChildEvent_Callback qscreencapture_childevent_callback = nullptr;
    QScreenCapture_CustomEvent_Callback qscreencapture_customevent_callback = nullptr;
    QScreenCapture_ConnectNotify_Callback qscreencapture_connectnotify_callback = nullptr;
    QScreenCapture_DisconnectNotify_Callback qscreencapture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QScreenCapture {
        using QScreenCapture::childEvent;
        using QScreenCapture::connectNotify;
        using QScreenCapture::customEvent;
        using QScreenCapture::disconnectNotify;
        using QScreenCapture::timerEvent;
    };

    VirtualQScreenCapture() : QScreenCapture() {};
    VirtualQScreenCapture(QObject* parent) : QScreenCapture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscreencapture_metaobject_callback) {
            QMetaObject* callback_ret = qscreencapture_metaobject_callback(this);
            return callback_ret;
        }
        return QScreenCapture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscreencapture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscreencapture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QScreenCapture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscreencapture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscreencapture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScreenCapture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscreencapture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscreencapture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QScreenCapture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscreencapture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscreencapture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScreenCapture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscreencapture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscreencapture_timerevent_callback(this, cbval1);
            return;
        }
        QScreenCapture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscreencapture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscreencapture_childevent_callback(this, cbval1);
            return;
        }
        QScreenCapture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscreencapture_customevent_callback) {
            QEvent* cbval1 = event;
            qscreencapture_customevent_callback(this, cbval1);
            return;
        }
        QScreenCapture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscreencapture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscreencapture_connectnotify_callback(this, cbval1);
            return;
        }
        QScreenCapture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscreencapture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscreencapture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QScreenCapture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QScreenCapture_SuperTimerEvent(QScreenCapture* self, QTimerEvent* event);
    friend void QScreenCapture_SuperChildEvent(QScreenCapture* self, QChildEvent* event);
    friend void QScreenCapture_SuperCustomEvent(QScreenCapture* self, QEvent* event);
    friend void QScreenCapture_SuperConnectNotify(QScreenCapture* self, const QMetaMethod* signal);
    friend void QScreenCapture_SuperDisconnectNotify(QScreenCapture* self, const QMetaMethod* signal);
};

#endif
