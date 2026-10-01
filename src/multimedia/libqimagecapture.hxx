#pragma once
#ifndef MULTIMEDIA_LIBQIMAGECAPTURE_HXX
#define MULTIMEDIA_LIBQIMAGECAPTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QImageCapture
class VirtualQImageCapture final : public QImageCapture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QImageCapture_MetaObject_Callback = QMetaObject* (*)(const QImageCapture*);
    using QImageCapture_Metacast_Callback = void* (*)(QImageCapture*, const char*);
    using QImageCapture_Metacall_Callback = int (*)(QImageCapture*, int, int, void**);
    using QImageCapture_Event_Callback = bool (*)(QImageCapture*, QEvent*);
    using QImageCapture_EventFilter_Callback = bool (*)(QImageCapture*, QObject*, QEvent*);
    using QImageCapture_TimerEvent_Callback = void (*)(QImageCapture*, QTimerEvent*);
    using QImageCapture_ChildEvent_Callback = void (*)(QImageCapture*, QChildEvent*);
    using QImageCapture_CustomEvent_Callback = void (*)(QImageCapture*, QEvent*);
    using QImageCapture_ConnectNotify_Callback = void (*)(QImageCapture*, QMetaMethod*);
    using QImageCapture_DisconnectNotify_Callback = void (*)(QImageCapture*, QMetaMethod*);
    using QImageCapture::isSignalConnected;
    using QImageCapture::receivers;
    using QImageCapture::sender;
    using QImageCapture::senderSignalIndex;

    // Instance callback storage
    QImageCapture_MetaObject_Callback qimagecapture_metaobject_callback = nullptr;
    QImageCapture_Metacast_Callback qimagecapture_metacast_callback = nullptr;
    QImageCapture_Metacall_Callback qimagecapture_metacall_callback = nullptr;
    QImageCapture_Event_Callback qimagecapture_event_callback = nullptr;
    QImageCapture_EventFilter_Callback qimagecapture_eventfilter_callback = nullptr;
    QImageCapture_TimerEvent_Callback qimagecapture_timerevent_callback = nullptr;
    QImageCapture_ChildEvent_Callback qimagecapture_childevent_callback = nullptr;
    QImageCapture_CustomEvent_Callback qimagecapture_customevent_callback = nullptr;
    QImageCapture_ConnectNotify_Callback qimagecapture_connectnotify_callback = nullptr;
    QImageCapture_DisconnectNotify_Callback qimagecapture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QImageCapture {
        using QImageCapture::childEvent;
        using QImageCapture::connectNotify;
        using QImageCapture::customEvent;
        using QImageCapture::disconnectNotify;
        using QImageCapture::timerEvent;
    };

    VirtualQImageCapture() : QImageCapture() {};
    VirtualQImageCapture(QObject* parent) : QImageCapture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qimagecapture_metaobject_callback) {
            QMetaObject* callback_ret = qimagecapture_metaobject_callback(this);
            return callback_ret;
        }
        return QImageCapture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qimagecapture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qimagecapture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QImageCapture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qimagecapture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qimagecapture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QImageCapture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qimagecapture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qimagecapture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QImageCapture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qimagecapture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qimagecapture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QImageCapture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qimagecapture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qimagecapture_timerevent_callback(this, cbval1);
            return;
        }
        QImageCapture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qimagecapture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qimagecapture_childevent_callback(this, cbval1);
            return;
        }
        QImageCapture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qimagecapture_customevent_callback) {
            QEvent* cbval1 = event;
            qimagecapture_customevent_callback(this, cbval1);
            return;
        }
        QImageCapture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qimagecapture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qimagecapture_connectnotify_callback(this, cbval1);
            return;
        }
        QImageCapture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qimagecapture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qimagecapture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QImageCapture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QImageCapture_SuperTimerEvent(QImageCapture* self, QTimerEvent* event);
    friend void QImageCapture_SuperChildEvent(QImageCapture* self, QChildEvent* event);
    friend void QImageCapture_SuperCustomEvent(QImageCapture* self, QEvent* event);
    friend void QImageCapture_SuperConnectNotify(QImageCapture* self, const QMetaMethod* signal);
    friend void QImageCapture_SuperDisconnectNotify(QImageCapture* self, const QMetaMethod* signal);
};

#endif
