#pragma once
#ifndef NETWORK_LIBQHTTPMULTIPART_HXX
#define NETWORK_LIBQHTTPMULTIPART_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHttpMultiPart
class VirtualQHttpMultiPart final : public QHttpMultiPart {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHttpMultiPart_MetaObject_Callback = QMetaObject* (*)(const QHttpMultiPart*);
    using QHttpMultiPart_Metacast_Callback = void* (*)(QHttpMultiPart*, const char*);
    using QHttpMultiPart_Metacall_Callback = int (*)(QHttpMultiPart*, int, int, void**);
    using QHttpMultiPart_Event_Callback = bool (*)(QHttpMultiPart*, QEvent*);
    using QHttpMultiPart_EventFilter_Callback = bool (*)(QHttpMultiPart*, QObject*, QEvent*);
    using QHttpMultiPart_TimerEvent_Callback = void (*)(QHttpMultiPart*, QTimerEvent*);
    using QHttpMultiPart_ChildEvent_Callback = void (*)(QHttpMultiPart*, QChildEvent*);
    using QHttpMultiPart_CustomEvent_Callback = void (*)(QHttpMultiPart*, QEvent*);
    using QHttpMultiPart_ConnectNotify_Callback = void (*)(QHttpMultiPart*, QMetaMethod*);
    using QHttpMultiPart_DisconnectNotify_Callback = void (*)(QHttpMultiPart*, QMetaMethod*);
    using QHttpMultiPart::isSignalConnected;
    using QHttpMultiPart::receivers;
    using QHttpMultiPart::sender;
    using QHttpMultiPart::senderSignalIndex;

    // Instance callback storage
    QHttpMultiPart_MetaObject_Callback qhttpmultipart_metaobject_callback = nullptr;
    QHttpMultiPart_Metacast_Callback qhttpmultipart_metacast_callback = nullptr;
    QHttpMultiPart_Metacall_Callback qhttpmultipart_metacall_callback = nullptr;
    QHttpMultiPart_Event_Callback qhttpmultipart_event_callback = nullptr;
    QHttpMultiPart_EventFilter_Callback qhttpmultipart_eventfilter_callback = nullptr;
    QHttpMultiPart_TimerEvent_Callback qhttpmultipart_timerevent_callback = nullptr;
    QHttpMultiPart_ChildEvent_Callback qhttpmultipart_childevent_callback = nullptr;
    QHttpMultiPart_CustomEvent_Callback qhttpmultipart_customevent_callback = nullptr;
    QHttpMultiPart_ConnectNotify_Callback qhttpmultipart_connectnotify_callback = nullptr;
    QHttpMultiPart_DisconnectNotify_Callback qhttpmultipart_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHttpMultiPart {
        using QHttpMultiPart::childEvent;
        using QHttpMultiPart::connectNotify;
        using QHttpMultiPart::customEvent;
        using QHttpMultiPart::disconnectNotify;
        using QHttpMultiPart::timerEvent;
    };

    VirtualQHttpMultiPart() : QHttpMultiPart() {};
    VirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType) : QHttpMultiPart(contentType) {};
    VirtualQHttpMultiPart(QObject* parent) : QHttpMultiPart(parent) {};
    VirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject* parent) : QHttpMultiPart(contentType, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhttpmultipart_metaobject_callback) {
            QMetaObject* callback_ret = qhttpmultipart_metaobject_callback(this);
            return callback_ret;
        }
        return QHttpMultiPart::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhttpmultipart_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhttpmultipart_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHttpMultiPart::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhttpmultipart_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhttpmultipart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHttpMultiPart::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhttpmultipart_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhttpmultipart_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHttpMultiPart::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhttpmultipart_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhttpmultipart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHttpMultiPart::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhttpmultipart_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhttpmultipart_timerevent_callback(this, cbval1);
            return;
        }
        QHttpMultiPart::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhttpmultipart_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhttpmultipart_childevent_callback(this, cbval1);
            return;
        }
        QHttpMultiPart::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhttpmultipart_customevent_callback) {
            QEvent* cbval1 = event;
            qhttpmultipart_customevent_callback(this, cbval1);
            return;
        }
        QHttpMultiPart::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhttpmultipart_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhttpmultipart_connectnotify_callback(this, cbval1);
            return;
        }
        QHttpMultiPart::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhttpmultipart_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhttpmultipart_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHttpMultiPart::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHttpMultiPart_SuperTimerEvent(QHttpMultiPart* self, QTimerEvent* event);
    friend void QHttpMultiPart_SuperChildEvent(QHttpMultiPart* self, QChildEvent* event);
    friend void QHttpMultiPart_SuperCustomEvent(QHttpMultiPart* self, QEvent* event);
    friend void QHttpMultiPart_SuperConnectNotify(QHttpMultiPart* self, const QMetaMethod* signal);
    friend void QHttpMultiPart_SuperDisconnectNotify(QHttpMultiPart* self, const QMetaMethod* signal);
};

#endif
