#pragma once
#ifndef WEBCHANNEL_LIBQWEBCHANNEL_HXX
#define WEBCHANNEL_LIBQWEBCHANNEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebChannel
class VirtualQWebChannel final : public QWebChannel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebChannel_MetaObject_Callback = QMetaObject* (*)(const QWebChannel*);
    using QWebChannel_Metacast_Callback = void* (*)(QWebChannel*, const char*);
    using QWebChannel_Metacall_Callback = int (*)(QWebChannel*, int, int, void**);
    using QWebChannel_Event_Callback = bool (*)(QWebChannel*, QEvent*);
    using QWebChannel_EventFilter_Callback = bool (*)(QWebChannel*, QObject*, QEvent*);
    using QWebChannel_TimerEvent_Callback = void (*)(QWebChannel*, QTimerEvent*);
    using QWebChannel_ChildEvent_Callback = void (*)(QWebChannel*, QChildEvent*);
    using QWebChannel_CustomEvent_Callback = void (*)(QWebChannel*, QEvent*);
    using QWebChannel_ConnectNotify_Callback = void (*)(QWebChannel*, QMetaMethod*);
    using QWebChannel_DisconnectNotify_Callback = void (*)(QWebChannel*, QMetaMethod*);
    using QWebChannel::isSignalConnected;
    using QWebChannel::receivers;
    using QWebChannel::sender;
    using QWebChannel::senderSignalIndex;

    // Instance callback storage
    QWebChannel_MetaObject_Callback qwebchannel_metaobject_callback = nullptr;
    QWebChannel_Metacast_Callback qwebchannel_metacast_callback = nullptr;
    QWebChannel_Metacall_Callback qwebchannel_metacall_callback = nullptr;
    QWebChannel_Event_Callback qwebchannel_event_callback = nullptr;
    QWebChannel_EventFilter_Callback qwebchannel_eventfilter_callback = nullptr;
    QWebChannel_TimerEvent_Callback qwebchannel_timerevent_callback = nullptr;
    QWebChannel_ChildEvent_Callback qwebchannel_childevent_callback = nullptr;
    QWebChannel_CustomEvent_Callback qwebchannel_customevent_callback = nullptr;
    QWebChannel_ConnectNotify_Callback qwebchannel_connectnotify_callback = nullptr;
    QWebChannel_DisconnectNotify_Callback qwebchannel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebChannel {
        using QWebChannel::childEvent;
        using QWebChannel::connectNotify;
        using QWebChannel::customEvent;
        using QWebChannel::disconnectNotify;
        using QWebChannel::timerEvent;
    };

    VirtualQWebChannel() : QWebChannel() {};
    VirtualQWebChannel(QObject* parent) : QWebChannel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebchannel_metaobject_callback) {
            QMetaObject* callback_ret = qwebchannel_metaobject_callback(this);
            return callback_ret;
        }
        return QWebChannel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebchannel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebchannel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebChannel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebchannel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebchannel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebChannel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebchannel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebchannel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebChannel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebchannel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebchannel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebChannel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebchannel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebchannel_timerevent_callback(this, cbval1);
            return;
        }
        QWebChannel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebchannel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebchannel_childevent_callback(this, cbval1);
            return;
        }
        QWebChannel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebchannel_customevent_callback) {
            QEvent* cbval1 = event;
            qwebchannel_customevent_callback(this, cbval1);
            return;
        }
        QWebChannel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebchannel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebchannel_connectnotify_callback(this, cbval1);
            return;
        }
        QWebChannel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebchannel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebchannel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebChannel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebChannel_SuperTimerEvent(QWebChannel* self, QTimerEvent* event);
    friend void QWebChannel_SuperChildEvent(QWebChannel* self, QChildEvent* event);
    friend void QWebChannel_SuperCustomEvent(QWebChannel* self, QEvent* event);
    friend void QWebChannel_SuperConnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_SuperDisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
};

#endif
