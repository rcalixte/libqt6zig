#pragma once
#ifndef WEBCHANNEL_LIBQQMLWEBCHANNEL_HXX
#define WEBCHANNEL_LIBQQMLWEBCHANNEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlWebChannel
class VirtualQQmlWebChannel final : public QQmlWebChannel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlWebChannel_MetaObject_Callback = QMetaObject* (*)(const QQmlWebChannel*);
    using QQmlWebChannel_Metacast_Callback = void* (*)(QQmlWebChannel*, const char*);
    using QQmlWebChannel_Metacall_Callback = int (*)(QQmlWebChannel*, int, int, void**);
    using QQmlWebChannel_Event_Callback = bool (*)(QQmlWebChannel*, QEvent*);
    using QQmlWebChannel_EventFilter_Callback = bool (*)(QQmlWebChannel*, QObject*, QEvent*);
    using QQmlWebChannel_TimerEvent_Callback = void (*)(QQmlWebChannel*, QTimerEvent*);
    using QQmlWebChannel_ChildEvent_Callback = void (*)(QQmlWebChannel*, QChildEvent*);
    using QQmlWebChannel_CustomEvent_Callback = void (*)(QQmlWebChannel*, QEvent*);
    using QQmlWebChannel_ConnectNotify_Callback = void (*)(QQmlWebChannel*, QMetaMethod*);
    using QQmlWebChannel_DisconnectNotify_Callback = void (*)(QQmlWebChannel*, QMetaMethod*);
    using QQmlWebChannel::isSignalConnected;
    using QQmlWebChannel::receivers;
    using QQmlWebChannel::sender;
    using QQmlWebChannel::senderSignalIndex;

    // Instance callback storage
    QQmlWebChannel_MetaObject_Callback qqmlwebchannel_metaobject_callback = nullptr;
    QQmlWebChannel_Metacast_Callback qqmlwebchannel_metacast_callback = nullptr;
    QQmlWebChannel_Metacall_Callback qqmlwebchannel_metacall_callback = nullptr;
    QQmlWebChannel_Event_Callback qqmlwebchannel_event_callback = nullptr;
    QQmlWebChannel_EventFilter_Callback qqmlwebchannel_eventfilter_callback = nullptr;
    QQmlWebChannel_TimerEvent_Callback qqmlwebchannel_timerevent_callback = nullptr;
    QQmlWebChannel_ChildEvent_Callback qqmlwebchannel_childevent_callback = nullptr;
    QQmlWebChannel_CustomEvent_Callback qqmlwebchannel_customevent_callback = nullptr;
    QQmlWebChannel_ConnectNotify_Callback qqmlwebchannel_connectnotify_callback = nullptr;
    QQmlWebChannel_DisconnectNotify_Callback qqmlwebchannel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlWebChannel {
        using QQmlWebChannel::childEvent;
        using QQmlWebChannel::connectNotify;
        using QQmlWebChannel::customEvent;
        using QQmlWebChannel::disconnectNotify;
        using QQmlWebChannel::timerEvent;
    };

    VirtualQQmlWebChannel() : QQmlWebChannel() {};
    VirtualQQmlWebChannel(QObject* parent) : QQmlWebChannel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlwebchannel_metaobject_callback) {
            QMetaObject* callback_ret = qqmlwebchannel_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlWebChannel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlwebchannel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlwebchannel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlWebChannel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlwebchannel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlwebchannel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlWebChannel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlwebchannel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlwebchannel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlWebChannel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlwebchannel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlwebchannel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlWebChannel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlwebchannel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlwebchannel_timerevent_callback(this, cbval1);
            return;
        }
        QQmlWebChannel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlwebchannel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlwebchannel_childevent_callback(this, cbval1);
            return;
        }
        QQmlWebChannel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlwebchannel_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlwebchannel_customevent_callback(this, cbval1);
            return;
        }
        QQmlWebChannel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlwebchannel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlwebchannel_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlWebChannel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlwebchannel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlwebchannel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlWebChannel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlWebChannel_SuperTimerEvent(QQmlWebChannel* self, QTimerEvent* event);
    friend void QQmlWebChannel_SuperChildEvent(QQmlWebChannel* self, QChildEvent* event);
    friend void QQmlWebChannel_SuperCustomEvent(QQmlWebChannel* self, QEvent* event);
    friend void QQmlWebChannel_SuperConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
    friend void QQmlWebChannel_SuperDisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
};

#endif
