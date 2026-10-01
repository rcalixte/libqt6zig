#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBMANAGER_HXX
#define POSIX_EXTRAS_ACCOUNTS_LIBMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Accounts::Manager
class VirtualAccountsManager final : public Accounts::Manager {
  public:
    // Virtual class public types (including callbacks and access types)
    using Accounts__Manager_MetaObject_Callback = QMetaObject* (*)(const Accounts__Manager*);
    using Accounts__Manager_Metacast_Callback = void* (*)(Accounts__Manager*, const char*);
    using Accounts__Manager_Metacall_Callback = int (*)(Accounts__Manager*, int, int, void**);
    using Accounts__Manager_Event_Callback = bool (*)(Accounts__Manager*, QEvent*);
    using Accounts__Manager_EventFilter_Callback = bool (*)(Accounts__Manager*, QObject*, QEvent*);
    using Accounts__Manager_TimerEvent_Callback = void (*)(Accounts__Manager*, QTimerEvent*);
    using Accounts__Manager_ChildEvent_Callback = void (*)(Accounts__Manager*, QChildEvent*);
    using Accounts__Manager_CustomEvent_Callback = void (*)(Accounts__Manager*, QEvent*);
    using Accounts__Manager_ConnectNotify_Callback = void (*)(Accounts__Manager*, QMetaMethod*);
    using Accounts__Manager_DisconnectNotify_Callback = void (*)(Accounts__Manager*, QMetaMethod*);
    using Accounts::Manager::isSignalConnected;
    using Accounts::Manager::receivers;
    using Accounts::Manager::sender;
    using Accounts::Manager::senderSignalIndex;

    // Instance callback storage
    Accounts__Manager_MetaObject_Callback accounts__manager_metaobject_callback = nullptr;
    Accounts__Manager_Metacast_Callback accounts__manager_metacast_callback = nullptr;
    Accounts__Manager_Metacall_Callback accounts__manager_metacall_callback = nullptr;
    Accounts__Manager_Event_Callback accounts__manager_event_callback = nullptr;
    Accounts__Manager_EventFilter_Callback accounts__manager_eventfilter_callback = nullptr;
    Accounts__Manager_TimerEvent_Callback accounts__manager_timerevent_callback = nullptr;
    Accounts__Manager_ChildEvent_Callback accounts__manager_childevent_callback = nullptr;
    Accounts__Manager_CustomEvent_Callback accounts__manager_customevent_callback = nullptr;
    Accounts__Manager_ConnectNotify_Callback accounts__manager_connectnotify_callback = nullptr;
    Accounts__Manager_DisconnectNotify_Callback accounts__manager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Accounts::Manager {
        using Accounts::Manager::childEvent;
        using Accounts::Manager::connectNotify;
        using Accounts::Manager::customEvent;
        using Accounts::Manager::disconnectNotify;
        using Accounts::Manager::timerEvent;
    };

    VirtualAccountsManager() : Accounts::Manager() {};
    VirtualAccountsManager(const QString& serviceType) : Accounts::Manager(serviceType) {};
    VirtualAccountsManager(Accounts::Manager::Options options) : Accounts::Manager(options) {};
    VirtualAccountsManager(QObject* parent) : Accounts::Manager(parent) {};
    VirtualAccountsManager(const QString& serviceType, QObject* parent) : Accounts::Manager(serviceType, parent) {};
    VirtualAccountsManager(Accounts::Manager::Options options, QObject* parent) : Accounts::Manager(options, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (accounts__manager_metaobject_callback) {
            QMetaObject* callback_ret = accounts__manager_metaobject_callback(this);
            return callback_ret;
        }
        return Accounts__Manager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (accounts__manager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = accounts__manager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__Manager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__manager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = accounts__manager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Accounts__Manager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__manager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = accounts__manager_event_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__Manager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__manager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = accounts__manager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Accounts__Manager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__manager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            accounts__manager_timerevent_callback(this, cbval1);
            return;
        }
        Accounts__Manager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__manager_childevent_callback) {
            QChildEvent* cbval1 = event;
            accounts__manager_childevent_callback(this, cbval1);
            return;
        }
        Accounts__Manager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__manager_customevent_callback) {
            QEvent* cbval1 = event;
            accounts__manager_customevent_callback(this, cbval1);
            return;
        }
        Accounts__Manager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__manager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__manager_connectnotify_callback(this, cbval1);
            return;
        }
        Accounts__Manager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__manager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__manager_disconnectnotify_callback(this, cbval1);
            return;
        }
        Accounts__Manager::disconnectNotify(signal);
    }

    // Friend functions
    friend void Accounts__Manager_SuperTimerEvent(Accounts::Manager* self, QTimerEvent* event);
    friend void Accounts__Manager_SuperChildEvent(Accounts::Manager* self, QChildEvent* event);
    friend void Accounts__Manager_SuperCustomEvent(Accounts::Manager* self, QEvent* event);
    friend void Accounts__Manager_SuperConnectNotify(Accounts::Manager* self, const QMetaMethod* signal);
    friend void Accounts__Manager_SuperDisconnectNotify(Accounts::Manager* self, const QMetaMethod* signal);
};

#endif
