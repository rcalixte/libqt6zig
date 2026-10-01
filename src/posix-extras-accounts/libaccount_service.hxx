#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBACCOUNT_SERVICE_HXX
#define POSIX_EXTRAS_ACCOUNTS_LIBACCOUNT_SERVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Accounts::AccountService
class VirtualAccountsAccountService final : public Accounts::AccountService {
  public:
    // Virtual class public types (including callbacks and access types)
    using Accounts__AccountService_MetaObject_Callback = QMetaObject* (*)(const Accounts__AccountService*);
    using Accounts__AccountService_Metacast_Callback = void* (*)(Accounts__AccountService*, const char*);
    using Accounts__AccountService_Metacall_Callback = int (*)(Accounts__AccountService*, int, int, void**);
    using Accounts__AccountService_Event_Callback = bool (*)(Accounts__AccountService*, QEvent*);
    using Accounts__AccountService_EventFilter_Callback = bool (*)(Accounts__AccountService*, QObject*, QEvent*);
    using Accounts__AccountService_TimerEvent_Callback = void (*)(Accounts__AccountService*, QTimerEvent*);
    using Accounts__AccountService_ChildEvent_Callback = void (*)(Accounts__AccountService*, QChildEvent*);
    using Accounts__AccountService_CustomEvent_Callback = void (*)(Accounts__AccountService*, QEvent*);
    using Accounts__AccountService_ConnectNotify_Callback = void (*)(Accounts__AccountService*, QMetaMethod*);
    using Accounts__AccountService_DisconnectNotify_Callback = void (*)(Accounts__AccountService*, QMetaMethod*);
    using Accounts::AccountService::isSignalConnected;
    using Accounts::AccountService::receivers;
    using Accounts::AccountService::sender;
    using Accounts::AccountService::senderSignalIndex;

    // Instance callback storage
    Accounts__AccountService_MetaObject_Callback accounts__accountservice_metaobject_callback = nullptr;
    Accounts__AccountService_Metacast_Callback accounts__accountservice_metacast_callback = nullptr;
    Accounts__AccountService_Metacall_Callback accounts__accountservice_metacall_callback = nullptr;
    Accounts__AccountService_Event_Callback accounts__accountservice_event_callback = nullptr;
    Accounts__AccountService_EventFilter_Callback accounts__accountservice_eventfilter_callback = nullptr;
    Accounts__AccountService_TimerEvent_Callback accounts__accountservice_timerevent_callback = nullptr;
    Accounts__AccountService_ChildEvent_Callback accounts__accountservice_childevent_callback = nullptr;
    Accounts__AccountService_CustomEvent_Callback accounts__accountservice_customevent_callback = nullptr;
    Accounts__AccountService_ConnectNotify_Callback accounts__accountservice_connectnotify_callback = nullptr;
    Accounts__AccountService_DisconnectNotify_Callback accounts__accountservice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Accounts::AccountService {
        using Accounts::AccountService::childEvent;
        using Accounts::AccountService::connectNotify;
        using Accounts::AccountService::customEvent;
        using Accounts::AccountService::disconnectNotify;
        using Accounts::AccountService::timerEvent;
    };

    VirtualAccountsAccountService(Accounts::Account* account, const Accounts::Service& service) : Accounts::AccountService(account, service) {};
    VirtualAccountsAccountService(Accounts::Account* account, const Accounts::Service& service, QObject* parent) : Accounts::AccountService(account, service, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (accounts__accountservice_metaobject_callback) {
            QMetaObject* callback_ret = accounts__accountservice_metaobject_callback(this);
            return callback_ret;
        }
        return Accounts__AccountService::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (accounts__accountservice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = accounts__accountservice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__AccountService::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__accountservice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = accounts__accountservice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Accounts__AccountService::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__accountservice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = accounts__accountservice_event_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__AccountService::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__accountservice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = accounts__accountservice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Accounts__AccountService::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__accountservice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            accounts__accountservice_timerevent_callback(this, cbval1);
            return;
        }
        Accounts__AccountService::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__accountservice_childevent_callback) {
            QChildEvent* cbval1 = event;
            accounts__accountservice_childevent_callback(this, cbval1);
            return;
        }
        Accounts__AccountService::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__accountservice_customevent_callback) {
            QEvent* cbval1 = event;
            accounts__accountservice_customevent_callback(this, cbval1);
            return;
        }
        Accounts__AccountService::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__accountservice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__accountservice_connectnotify_callback(this, cbval1);
            return;
        }
        Accounts__AccountService::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__accountservice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__accountservice_disconnectnotify_callback(this, cbval1);
            return;
        }
        Accounts__AccountService::disconnectNotify(signal);
    }

    // Friend functions
    friend void Accounts__AccountService_SuperTimerEvent(Accounts::AccountService* self, QTimerEvent* event);
    friend void Accounts__AccountService_SuperChildEvent(Accounts::AccountService* self, QChildEvent* event);
    friend void Accounts__AccountService_SuperCustomEvent(Accounts::AccountService* self, QEvent* event);
    friend void Accounts__AccountService_SuperConnectNotify(Accounts::AccountService* self, const QMetaMethod* signal);
    friend void Accounts__AccountService_SuperDisconnectNotify(Accounts::AccountService* self, const QMetaMethod* signal);
};

#endif
