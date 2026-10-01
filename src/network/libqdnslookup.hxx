#pragma once
#ifndef NETWORK_LIBQDNSLOOKUP_HXX
#define NETWORK_LIBQDNSLOOKUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDnsLookup
class VirtualQDnsLookup final : public QDnsLookup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDnsLookup_MetaObject_Callback = QMetaObject* (*)(const QDnsLookup*);
    using QDnsLookup_Metacast_Callback = void* (*)(QDnsLookup*, const char*);
    using QDnsLookup_Metacall_Callback = int (*)(QDnsLookup*, int, int, void**);
    using QDnsLookup_Event_Callback = bool (*)(QDnsLookup*, QEvent*);
    using QDnsLookup_EventFilter_Callback = bool (*)(QDnsLookup*, QObject*, QEvent*);
    using QDnsLookup_TimerEvent_Callback = void (*)(QDnsLookup*, QTimerEvent*);
    using QDnsLookup_ChildEvent_Callback = void (*)(QDnsLookup*, QChildEvent*);
    using QDnsLookup_CustomEvent_Callback = void (*)(QDnsLookup*, QEvent*);
    using QDnsLookup_ConnectNotify_Callback = void (*)(QDnsLookup*, QMetaMethod*);
    using QDnsLookup_DisconnectNotify_Callback = void (*)(QDnsLookup*, QMetaMethod*);
    using QDnsLookup::isSignalConnected;
    using QDnsLookup::receivers;
    using QDnsLookup::sender;
    using QDnsLookup::senderSignalIndex;

    // Instance callback storage
    QDnsLookup_MetaObject_Callback qdnslookup_metaobject_callback = nullptr;
    QDnsLookup_Metacast_Callback qdnslookup_metacast_callback = nullptr;
    QDnsLookup_Metacall_Callback qdnslookup_metacall_callback = nullptr;
    QDnsLookup_Event_Callback qdnslookup_event_callback = nullptr;
    QDnsLookup_EventFilter_Callback qdnslookup_eventfilter_callback = nullptr;
    QDnsLookup_TimerEvent_Callback qdnslookup_timerevent_callback = nullptr;
    QDnsLookup_ChildEvent_Callback qdnslookup_childevent_callback = nullptr;
    QDnsLookup_CustomEvent_Callback qdnslookup_customevent_callback = nullptr;
    QDnsLookup_ConnectNotify_Callback qdnslookup_connectnotify_callback = nullptr;
    QDnsLookup_DisconnectNotify_Callback qdnslookup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDnsLookup {
        using QDnsLookup::childEvent;
        using QDnsLookup::connectNotify;
        using QDnsLookup::customEvent;
        using QDnsLookup::disconnectNotify;
        using QDnsLookup::timerEvent;
    };

    VirtualQDnsLookup() : QDnsLookup() {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name) : QDnsLookup(typeVal, name) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, const QHostAddress& nameserver) : QDnsLookup(typeVal, name, nameserver) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, const QHostAddress& nameserver, quint16 port) : QDnsLookup(typeVal, name, nameserver, port) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, QDnsLookup::Protocol protocol, const QHostAddress& nameserver) : QDnsLookup(typeVal, name, protocol, nameserver) {};
    VirtualQDnsLookup(QObject* parent) : QDnsLookup(parent) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, QObject* parent) : QDnsLookup(typeVal, name, parent) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, const QHostAddress& nameserver, QObject* parent) : QDnsLookup(typeVal, name, nameserver, parent) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, const QHostAddress& nameserver, quint16 port, QObject* parent) : QDnsLookup(typeVal, name, nameserver, port, parent) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, QDnsLookup::Protocol protocol, const QHostAddress& nameserver, quint16 port) : QDnsLookup(typeVal, name, protocol, nameserver, port) {};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, QDnsLookup::Protocol protocol, const QHostAddress& nameserver, quint16 port, QObject* parent) : QDnsLookup(typeVal, name, protocol, nameserver, port, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdnslookup_metaobject_callback) {
            QMetaObject* callback_ret = qdnslookup_metaobject_callback(this);
            return callback_ret;
        }
        return QDnsLookup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdnslookup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdnslookup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDnsLookup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdnslookup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdnslookup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDnsLookup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdnslookup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdnslookup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDnsLookup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdnslookup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdnslookup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDnsLookup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdnslookup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdnslookup_timerevent_callback(this, cbval1);
            return;
        }
        QDnsLookup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdnslookup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdnslookup_childevent_callback(this, cbval1);
            return;
        }
        QDnsLookup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdnslookup_customevent_callback) {
            QEvent* cbval1 = event;
            qdnslookup_customevent_callback(this, cbval1);
            return;
        }
        QDnsLookup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdnslookup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdnslookup_connectnotify_callback(this, cbval1);
            return;
        }
        QDnsLookup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdnslookup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdnslookup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDnsLookup::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDnsLookup_SuperTimerEvent(QDnsLookup* self, QTimerEvent* event);
    friend void QDnsLookup_SuperChildEvent(QDnsLookup* self, QChildEvent* event);
    friend void QDnsLookup_SuperCustomEvent(QDnsLookup* self, QEvent* event);
    friend void QDnsLookup_SuperConnectNotify(QDnsLookup* self, const QMetaMethod* signal);
    friend void QDnsLookup_SuperDisconnectNotify(QDnsLookup* self, const QMetaMethod* signal);
};

#endif
