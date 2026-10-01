#pragma once
#ifndef POSIX_EXTRAS_SIGNON_LIBAUTHSERVICE_HXX
#define POSIX_EXTRAS_SIGNON_LIBAUTHSERVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of SignOn::AuthService
class VirtualSignOnAuthService final : public SignOn::AuthService {
  public:
    // Virtual class public types (including callbacks and access types)
    using SignOn__AuthService_MetaObject_Callback = QMetaObject* (*)(const SignOn__AuthService*);
    using SignOn__AuthService_Metacast_Callback = void* (*)(SignOn__AuthService*, const char*);
    using SignOn__AuthService_Metacall_Callback = int (*)(SignOn__AuthService*, int, int, void**);
    using SignOn__AuthService_Event_Callback = bool (*)(SignOn__AuthService*, QEvent*);
    using SignOn__AuthService_EventFilter_Callback = bool (*)(SignOn__AuthService*, QObject*, QEvent*);
    using SignOn__AuthService_TimerEvent_Callback = void (*)(SignOn__AuthService*, QTimerEvent*);
    using SignOn__AuthService_ChildEvent_Callback = void (*)(SignOn__AuthService*, QChildEvent*);
    using SignOn__AuthService_CustomEvent_Callback = void (*)(SignOn__AuthService*, QEvent*);
    using SignOn__AuthService_ConnectNotify_Callback = void (*)(SignOn__AuthService*, QMetaMethod*);
    using SignOn__AuthService_DisconnectNotify_Callback = void (*)(SignOn__AuthService*, QMetaMethod*);
    using SignOn::AuthService::isSignalConnected;
    using SignOn::AuthService::receivers;
    using SignOn::AuthService::sender;
    using SignOn::AuthService::senderSignalIndex;

    // Instance callback storage
    SignOn__AuthService_MetaObject_Callback signon__authservice_metaobject_callback = nullptr;
    SignOn__AuthService_Metacast_Callback signon__authservice_metacast_callback = nullptr;
    SignOn__AuthService_Metacall_Callback signon__authservice_metacall_callback = nullptr;
    SignOn__AuthService_Event_Callback signon__authservice_event_callback = nullptr;
    SignOn__AuthService_EventFilter_Callback signon__authservice_eventfilter_callback = nullptr;
    SignOn__AuthService_TimerEvent_Callback signon__authservice_timerevent_callback = nullptr;
    SignOn__AuthService_ChildEvent_Callback signon__authservice_childevent_callback = nullptr;
    SignOn__AuthService_CustomEvent_Callback signon__authservice_customevent_callback = nullptr;
    SignOn__AuthService_ConnectNotify_Callback signon__authservice_connectnotify_callback = nullptr;
    SignOn__AuthService_DisconnectNotify_Callback signon__authservice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : SignOn::AuthService {
        using SignOn::AuthService::childEvent;
        using SignOn::AuthService::connectNotify;
        using SignOn::AuthService::customEvent;
        using SignOn::AuthService::disconnectNotify;
        using SignOn::AuthService::timerEvent;
    };

    VirtualSignOnAuthService() : SignOn::AuthService() {};
    VirtualSignOnAuthService(QObject* parent) : SignOn::AuthService(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (signon__authservice_metaobject_callback) {
            QMetaObject* callback_ret = signon__authservice_metaobject_callback(this);
            return callback_ret;
        }
        return SignOn__AuthService::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (signon__authservice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = signon__authservice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return SignOn__AuthService::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (signon__authservice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = signon__authservice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return SignOn__AuthService::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (signon__authservice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = signon__authservice_event_callback(this, cbval1);
            return callback_ret;
        }
        return SignOn__AuthService::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (signon__authservice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = signon__authservice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return SignOn__AuthService::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (signon__authservice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            signon__authservice_timerevent_callback(this, cbval1);
            return;
        }
        SignOn__AuthService::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (signon__authservice_childevent_callback) {
            QChildEvent* cbval1 = event;
            signon__authservice_childevent_callback(this, cbval1);
            return;
        }
        SignOn__AuthService::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (signon__authservice_customevent_callback) {
            QEvent* cbval1 = event;
            signon__authservice_customevent_callback(this, cbval1);
            return;
        }
        SignOn__AuthService::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (signon__authservice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            signon__authservice_connectnotify_callback(this, cbval1);
            return;
        }
        SignOn__AuthService::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (signon__authservice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            signon__authservice_disconnectnotify_callback(this, cbval1);
            return;
        }
        SignOn__AuthService::disconnectNotify(signal);
    }

    // Friend functions
    friend void SignOn__AuthService_SuperTimerEvent(SignOn::AuthService* self, QTimerEvent* event);
    friend void SignOn__AuthService_SuperChildEvent(SignOn::AuthService* self, QChildEvent* event);
    friend void SignOn__AuthService_SuperCustomEvent(SignOn::AuthService* self, QEvent* event);
    friend void SignOn__AuthService_SuperConnectNotify(SignOn::AuthService* self, const QMetaMethod* signal);
    friend void SignOn__AuthService_SuperDisconnectNotify(SignOn::AuthService* self, const QMetaMethod* signal);
};

#endif
