#pragma once
#ifndef WEBCHANNEL_LIBQWEBCHANNELABSTRACTTRANSPORT_HXX
#define WEBCHANNEL_LIBQWEBCHANNELABSTRACTTRANSPORT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebChannelAbstractTransport
class VirtualQWebChannelAbstractTransport : public QWebChannelAbstractTransport {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebChannelAbstractTransport_MetaObject_Callback = QMetaObject* (*)(const QWebChannelAbstractTransport*);
    using QWebChannelAbstractTransport_Metacast_Callback = void* (*)(QWebChannelAbstractTransport*, const char*);
    using QWebChannelAbstractTransport_Metacall_Callback = int (*)(QWebChannelAbstractTransport*, int, int, void**);
    using QWebChannelAbstractTransport_SendMessage_Callback = void (*)(QWebChannelAbstractTransport*, QJsonObject*);
    using QWebChannelAbstractTransport_Event_Callback = bool (*)(QWebChannelAbstractTransport*, QEvent*);
    using QWebChannelAbstractTransport_EventFilter_Callback = bool (*)(QWebChannelAbstractTransport*, QObject*, QEvent*);
    using QWebChannelAbstractTransport_TimerEvent_Callback = void (*)(QWebChannelAbstractTransport*, QTimerEvent*);
    using QWebChannelAbstractTransport_ChildEvent_Callback = void (*)(QWebChannelAbstractTransport*, QChildEvent*);
    using QWebChannelAbstractTransport_CustomEvent_Callback = void (*)(QWebChannelAbstractTransport*, QEvent*);
    using QWebChannelAbstractTransport_ConnectNotify_Callback = void (*)(QWebChannelAbstractTransport*, QMetaMethod*);
    using QWebChannelAbstractTransport_DisconnectNotify_Callback = void (*)(QWebChannelAbstractTransport*, QMetaMethod*);
    using QWebChannelAbstractTransport::isSignalConnected;
    using QWebChannelAbstractTransport::receivers;
    using QWebChannelAbstractTransport::sender;
    using QWebChannelAbstractTransport::senderSignalIndex;

    // Instance callback storage
    QWebChannelAbstractTransport_MetaObject_Callback qwebchannelabstracttransport_metaobject_callback = nullptr;
    QWebChannelAbstractTransport_Metacast_Callback qwebchannelabstracttransport_metacast_callback = nullptr;
    QWebChannelAbstractTransport_Metacall_Callback qwebchannelabstracttransport_metacall_callback = nullptr;
    QWebChannelAbstractTransport_SendMessage_Callback qwebchannelabstracttransport_sendmessage_callback = nullptr;
    QWebChannelAbstractTransport_Event_Callback qwebchannelabstracttransport_event_callback = nullptr;
    QWebChannelAbstractTransport_EventFilter_Callback qwebchannelabstracttransport_eventfilter_callback = nullptr;
    QWebChannelAbstractTransport_TimerEvent_Callback qwebchannelabstracttransport_timerevent_callback = nullptr;
    QWebChannelAbstractTransport_ChildEvent_Callback qwebchannelabstracttransport_childevent_callback = nullptr;
    QWebChannelAbstractTransport_CustomEvent_Callback qwebchannelabstracttransport_customevent_callback = nullptr;
    QWebChannelAbstractTransport_ConnectNotify_Callback qwebchannelabstracttransport_connectnotify_callback = nullptr;
    QWebChannelAbstractTransport_DisconnectNotify_Callback qwebchannelabstracttransport_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebChannelAbstractTransport {
        using QWebChannelAbstractTransport::childEvent;
        using QWebChannelAbstractTransport::connectNotify;
        using QWebChannelAbstractTransport::customEvent;
        using QWebChannelAbstractTransport::disconnectNotify;
        using QWebChannelAbstractTransport::timerEvent;
    };

    VirtualQWebChannelAbstractTransport() : QWebChannelAbstractTransport() {};
    VirtualQWebChannelAbstractTransport(QObject* parent) : QWebChannelAbstractTransport(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebchannelabstracttransport_metaobject_callback) {
            QMetaObject* callback_ret = qwebchannelabstracttransport_metaobject_callback(this);
            return callback_ret;
        }
        return QWebChannelAbstractTransport::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebchannelabstracttransport_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebchannelabstracttransport_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebChannelAbstractTransport::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebchannelabstracttransport_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebchannelabstracttransport_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebChannelAbstractTransport::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendMessage(const QJsonObject& message) override {
        if (qwebchannelabstracttransport_sendmessage_callback) {
            const QJsonObject& message_ret = message;
            // Cast returned reference into pointer
            QJsonObject* cbval1 = const_cast<QJsonObject*>(&message_ret);
            qwebchannelabstracttransport_sendmessage_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QWebChannelAbstractTransport::sendMessage called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebchannelabstracttransport_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebchannelabstracttransport_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebChannelAbstractTransport::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebchannelabstracttransport_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebchannelabstracttransport_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebChannelAbstractTransport::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebchannelabstracttransport_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebchannelabstracttransport_timerevent_callback(this, cbval1);
            return;
        }
        QWebChannelAbstractTransport::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebchannelabstracttransport_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebchannelabstracttransport_childevent_callback(this, cbval1);
            return;
        }
        QWebChannelAbstractTransport::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebchannelabstracttransport_customevent_callback) {
            QEvent* cbval1 = event;
            qwebchannelabstracttransport_customevent_callback(this, cbval1);
            return;
        }
        QWebChannelAbstractTransport::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebchannelabstracttransport_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebchannelabstracttransport_connectnotify_callback(this, cbval1);
            return;
        }
        QWebChannelAbstractTransport::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebchannelabstracttransport_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebchannelabstracttransport_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebChannelAbstractTransport::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebChannelAbstractTransport_SuperTimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event);
    friend void QWebChannelAbstractTransport_SuperChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event);
    friend void QWebChannelAbstractTransport_SuperCustomEvent(QWebChannelAbstractTransport* self, QEvent* event);
    friend void QWebChannelAbstractTransport_SuperConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal);
    friend void QWebChannelAbstractTransport_SuperDisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal);
};

#endif
