#pragma once
#ifndef NETWORK_LIBQDTLS_HXX
#define NETWORK_LIBQDTLS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDtlsClientVerifier
class VirtualQDtlsClientVerifier final : public QDtlsClientVerifier {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDtlsClientVerifier_MetaObject_Callback = QMetaObject* (*)(const QDtlsClientVerifier*);
    using QDtlsClientVerifier_Metacast_Callback = void* (*)(QDtlsClientVerifier*, const char*);
    using QDtlsClientVerifier_Metacall_Callback = int (*)(QDtlsClientVerifier*, int, int, void**);
    using QDtlsClientVerifier_Event_Callback = bool (*)(QDtlsClientVerifier*, QEvent*);
    using QDtlsClientVerifier_EventFilter_Callback = bool (*)(QDtlsClientVerifier*, QObject*, QEvent*);
    using QDtlsClientVerifier_TimerEvent_Callback = void (*)(QDtlsClientVerifier*, QTimerEvent*);
    using QDtlsClientVerifier_ChildEvent_Callback = void (*)(QDtlsClientVerifier*, QChildEvent*);
    using QDtlsClientVerifier_CustomEvent_Callback = void (*)(QDtlsClientVerifier*, QEvent*);
    using QDtlsClientVerifier_ConnectNotify_Callback = void (*)(QDtlsClientVerifier*, QMetaMethod*);
    using QDtlsClientVerifier_DisconnectNotify_Callback = void (*)(QDtlsClientVerifier*, QMetaMethod*);
    using QDtlsClientVerifier::isSignalConnected;
    using QDtlsClientVerifier::receivers;
    using QDtlsClientVerifier::sender;
    using QDtlsClientVerifier::senderSignalIndex;

    // Instance callback storage
    QDtlsClientVerifier_MetaObject_Callback qdtlsclientverifier_metaobject_callback = nullptr;
    QDtlsClientVerifier_Metacast_Callback qdtlsclientverifier_metacast_callback = nullptr;
    QDtlsClientVerifier_Metacall_Callback qdtlsclientverifier_metacall_callback = nullptr;
    QDtlsClientVerifier_Event_Callback qdtlsclientverifier_event_callback = nullptr;
    QDtlsClientVerifier_EventFilter_Callback qdtlsclientverifier_eventfilter_callback = nullptr;
    QDtlsClientVerifier_TimerEvent_Callback qdtlsclientverifier_timerevent_callback = nullptr;
    QDtlsClientVerifier_ChildEvent_Callback qdtlsclientverifier_childevent_callback = nullptr;
    QDtlsClientVerifier_CustomEvent_Callback qdtlsclientverifier_customevent_callback = nullptr;
    QDtlsClientVerifier_ConnectNotify_Callback qdtlsclientverifier_connectnotify_callback = nullptr;
    QDtlsClientVerifier_DisconnectNotify_Callback qdtlsclientverifier_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDtlsClientVerifier {
        using QDtlsClientVerifier::childEvent;
        using QDtlsClientVerifier::connectNotify;
        using QDtlsClientVerifier::customEvent;
        using QDtlsClientVerifier::disconnectNotify;
        using QDtlsClientVerifier::timerEvent;
    };

    VirtualQDtlsClientVerifier() : QDtlsClientVerifier() {};
    VirtualQDtlsClientVerifier(QObject* parent) : QDtlsClientVerifier(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdtlsclientverifier_metaobject_callback) {
            QMetaObject* callback_ret = qdtlsclientverifier_metaobject_callback(this);
            return callback_ret;
        }
        return QDtlsClientVerifier::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdtlsclientverifier_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdtlsclientverifier_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDtlsClientVerifier::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdtlsclientverifier_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdtlsclientverifier_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDtlsClientVerifier::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdtlsclientverifier_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdtlsclientverifier_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDtlsClientVerifier::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdtlsclientverifier_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdtlsclientverifier_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDtlsClientVerifier::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdtlsclientverifier_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdtlsclientverifier_timerevent_callback(this, cbval1);
            return;
        }
        QDtlsClientVerifier::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdtlsclientverifier_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdtlsclientverifier_childevent_callback(this, cbval1);
            return;
        }
        QDtlsClientVerifier::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdtlsclientverifier_customevent_callback) {
            QEvent* cbval1 = event;
            qdtlsclientverifier_customevent_callback(this, cbval1);
            return;
        }
        QDtlsClientVerifier::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdtlsclientverifier_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdtlsclientverifier_connectnotify_callback(this, cbval1);
            return;
        }
        QDtlsClientVerifier::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdtlsclientverifier_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdtlsclientverifier_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDtlsClientVerifier::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDtlsClientVerifier_SuperTimerEvent(QDtlsClientVerifier* self, QTimerEvent* event);
    friend void QDtlsClientVerifier_SuperChildEvent(QDtlsClientVerifier* self, QChildEvent* event);
    friend void QDtlsClientVerifier_SuperCustomEvent(QDtlsClientVerifier* self, QEvent* event);
    friend void QDtlsClientVerifier_SuperConnectNotify(QDtlsClientVerifier* self, const QMetaMethod* signal);
    friend void QDtlsClientVerifier_SuperDisconnectNotify(QDtlsClientVerifier* self, const QMetaMethod* signal);
};

// This class is a subclass of QDtls
class VirtualQDtls final : public QDtls {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDtls_MetaObject_Callback = QMetaObject* (*)(const QDtls*);
    using QDtls_Metacast_Callback = void* (*)(QDtls*, const char*);
    using QDtls_Metacall_Callback = int (*)(QDtls*, int, int, void**);
    using QDtls_Event_Callback = bool (*)(QDtls*, QEvent*);
    using QDtls_EventFilter_Callback = bool (*)(QDtls*, QObject*, QEvent*);
    using QDtls_TimerEvent_Callback = void (*)(QDtls*, QTimerEvent*);
    using QDtls_ChildEvent_Callback = void (*)(QDtls*, QChildEvent*);
    using QDtls_CustomEvent_Callback = void (*)(QDtls*, QEvent*);
    using QDtls_ConnectNotify_Callback = void (*)(QDtls*, QMetaMethod*);
    using QDtls_DisconnectNotify_Callback = void (*)(QDtls*, QMetaMethod*);
    using QDtls::isSignalConnected;
    using QDtls::receivers;
    using QDtls::sender;
    using QDtls::senderSignalIndex;

    // Instance callback storage
    QDtls_MetaObject_Callback qdtls_metaobject_callback = nullptr;
    QDtls_Metacast_Callback qdtls_metacast_callback = nullptr;
    QDtls_Metacall_Callback qdtls_metacall_callback = nullptr;
    QDtls_Event_Callback qdtls_event_callback = nullptr;
    QDtls_EventFilter_Callback qdtls_eventfilter_callback = nullptr;
    QDtls_TimerEvent_Callback qdtls_timerevent_callback = nullptr;
    QDtls_ChildEvent_Callback qdtls_childevent_callback = nullptr;
    QDtls_CustomEvent_Callback qdtls_customevent_callback = nullptr;
    QDtls_ConnectNotify_Callback qdtls_connectnotify_callback = nullptr;
    QDtls_DisconnectNotify_Callback qdtls_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDtls {
        using QDtls::childEvent;
        using QDtls::connectNotify;
        using QDtls::customEvent;
        using QDtls::disconnectNotify;
        using QDtls::timerEvent;
    };

    VirtualQDtls(QSslSocket::SslMode mode) : QDtls(mode) {};
    VirtualQDtls(QSslSocket::SslMode mode, QObject* parent) : QDtls(mode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdtls_metaobject_callback) {
            QMetaObject* callback_ret = qdtls_metaobject_callback(this);
            return callback_ret;
        }
        return QDtls::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdtls_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdtls_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDtls::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdtls_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdtls_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDtls::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdtls_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdtls_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDtls::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdtls_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdtls_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDtls::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdtls_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdtls_timerevent_callback(this, cbval1);
            return;
        }
        QDtls::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdtls_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdtls_childevent_callback(this, cbval1);
            return;
        }
        QDtls::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdtls_customevent_callback) {
            QEvent* cbval1 = event;
            qdtls_customevent_callback(this, cbval1);
            return;
        }
        QDtls::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdtls_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdtls_connectnotify_callback(this, cbval1);
            return;
        }
        QDtls::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdtls_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdtls_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDtls::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDtls_SuperTimerEvent(QDtls* self, QTimerEvent* event);
    friend void QDtls_SuperChildEvent(QDtls* self, QChildEvent* event);
    friend void QDtls_SuperCustomEvent(QDtls* self, QEvent* event);
    friend void QDtls_SuperConnectNotify(QDtls* self, const QMetaMethod* signal);
    friend void QDtls_SuperDisconnectNotify(QDtls* self, const QMetaMethod* signal);
};

#endif
