#pragma once
#ifndef MULTIMEDIA_LIBQWINDOWCAPTURE_HXX
#define MULTIMEDIA_LIBQWINDOWCAPTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWindowCapture
class VirtualQWindowCapture final : public QWindowCapture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWindowCapture_MetaObject_Callback = QMetaObject* (*)(const QWindowCapture*);
    using QWindowCapture_Metacast_Callback = void* (*)(QWindowCapture*, const char*);
    using QWindowCapture_Metacall_Callback = int (*)(QWindowCapture*, int, int, void**);
    using QWindowCapture_Event_Callback = bool (*)(QWindowCapture*, QEvent*);
    using QWindowCapture_EventFilter_Callback = bool (*)(QWindowCapture*, QObject*, QEvent*);
    using QWindowCapture_TimerEvent_Callback = void (*)(QWindowCapture*, QTimerEvent*);
    using QWindowCapture_ChildEvent_Callback = void (*)(QWindowCapture*, QChildEvent*);
    using QWindowCapture_CustomEvent_Callback = void (*)(QWindowCapture*, QEvent*);
    using QWindowCapture_ConnectNotify_Callback = void (*)(QWindowCapture*, QMetaMethod*);
    using QWindowCapture_DisconnectNotify_Callback = void (*)(QWindowCapture*, QMetaMethod*);
    using QWindowCapture::isSignalConnected;
    using QWindowCapture::receivers;
    using QWindowCapture::sender;
    using QWindowCapture::senderSignalIndex;

    // Instance callback storage
    QWindowCapture_MetaObject_Callback qwindowcapture_metaobject_callback = nullptr;
    QWindowCapture_Metacast_Callback qwindowcapture_metacast_callback = nullptr;
    QWindowCapture_Metacall_Callback qwindowcapture_metacall_callback = nullptr;
    QWindowCapture_Event_Callback qwindowcapture_event_callback = nullptr;
    QWindowCapture_EventFilter_Callback qwindowcapture_eventfilter_callback = nullptr;
    QWindowCapture_TimerEvent_Callback qwindowcapture_timerevent_callback = nullptr;
    QWindowCapture_ChildEvent_Callback qwindowcapture_childevent_callback = nullptr;
    QWindowCapture_CustomEvent_Callback qwindowcapture_customevent_callback = nullptr;
    QWindowCapture_ConnectNotify_Callback qwindowcapture_connectnotify_callback = nullptr;
    QWindowCapture_DisconnectNotify_Callback qwindowcapture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWindowCapture {
        using QWindowCapture::childEvent;
        using QWindowCapture::connectNotify;
        using QWindowCapture::customEvent;
        using QWindowCapture::disconnectNotify;
        using QWindowCapture::timerEvent;
    };

    VirtualQWindowCapture() : QWindowCapture() {};
    VirtualQWindowCapture(QObject* parent) : QWindowCapture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwindowcapture_metaobject_callback) {
            QMetaObject* callback_ret = qwindowcapture_metaobject_callback(this);
            return callback_ret;
        }
        return QWindowCapture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwindowcapture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwindowcapture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWindowCapture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwindowcapture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwindowcapture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWindowCapture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwindowcapture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwindowcapture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWindowCapture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwindowcapture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwindowcapture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWindowCapture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwindowcapture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwindowcapture_timerevent_callback(this, cbval1);
            return;
        }
        QWindowCapture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwindowcapture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwindowcapture_childevent_callback(this, cbval1);
            return;
        }
        QWindowCapture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwindowcapture_customevent_callback) {
            QEvent* cbval1 = event;
            qwindowcapture_customevent_callback(this, cbval1);
            return;
        }
        QWindowCapture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwindowcapture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwindowcapture_connectnotify_callback(this, cbval1);
            return;
        }
        QWindowCapture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwindowcapture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwindowcapture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWindowCapture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWindowCapture_SuperTimerEvent(QWindowCapture* self, QTimerEvent* event);
    friend void QWindowCapture_SuperChildEvent(QWindowCapture* self, QChildEvent* event);
    friend void QWindowCapture_SuperCustomEvent(QWindowCapture* self, QEvent* event);
    friend void QWindowCapture_SuperConnectNotify(QWindowCapture* self, const QMetaMethod* signal);
    friend void QWindowCapture_SuperDisconnectNotify(QWindowCapture* self, const QMetaMethod* signal);
};

#endif
