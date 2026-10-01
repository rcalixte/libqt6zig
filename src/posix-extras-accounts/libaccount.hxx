#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBACCOUNT_HXX
#define POSIX_EXTRAS_ACCOUNTS_LIBACCOUNT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Accounts::Watch
class VirtualAccountsWatch final : public Accounts::Watch {
  public:
    // Virtual class public types (including callbacks and access types)
    using Accounts__Watch_MetaObject_Callback = QMetaObject* (*)(const Accounts__Watch*);
    using Accounts__Watch_Metacast_Callback = void* (*)(Accounts__Watch*, const char*);
    using Accounts__Watch_Metacall_Callback = int (*)(Accounts__Watch*, int, int, void**);
    using Accounts__Watch_Event_Callback = bool (*)(Accounts__Watch*, QEvent*);
    using Accounts__Watch_EventFilter_Callback = bool (*)(Accounts__Watch*, QObject*, QEvent*);
    using Accounts__Watch_TimerEvent_Callback = void (*)(Accounts__Watch*, QTimerEvent*);
    using Accounts__Watch_ChildEvent_Callback = void (*)(Accounts__Watch*, QChildEvent*);
    using Accounts__Watch_CustomEvent_Callback = void (*)(Accounts__Watch*, QEvent*);
    using Accounts__Watch_ConnectNotify_Callback = void (*)(Accounts__Watch*, QMetaMethod*);
    using Accounts__Watch_DisconnectNotify_Callback = void (*)(Accounts__Watch*, QMetaMethod*);
    using Accounts::Watch::isSignalConnected;
    using Accounts::Watch::receivers;
    using Accounts::Watch::sender;
    using Accounts::Watch::senderSignalIndex;

    // Instance callback storage
    Accounts__Watch_MetaObject_Callback accounts__watch_metaobject_callback = nullptr;
    Accounts__Watch_Metacast_Callback accounts__watch_metacast_callback = nullptr;
    Accounts__Watch_Metacall_Callback accounts__watch_metacall_callback = nullptr;
    Accounts__Watch_Event_Callback accounts__watch_event_callback = nullptr;
    Accounts__Watch_EventFilter_Callback accounts__watch_eventfilter_callback = nullptr;
    Accounts__Watch_TimerEvent_Callback accounts__watch_timerevent_callback = nullptr;
    Accounts__Watch_ChildEvent_Callback accounts__watch_childevent_callback = nullptr;
    Accounts__Watch_CustomEvent_Callback accounts__watch_customevent_callback = nullptr;
    Accounts__Watch_ConnectNotify_Callback accounts__watch_connectnotify_callback = nullptr;
    Accounts__Watch_DisconnectNotify_Callback accounts__watch_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Accounts::Watch {
        using Accounts::Watch::childEvent;
        using Accounts::Watch::connectNotify;
        using Accounts::Watch::customEvent;
        using Accounts::Watch::disconnectNotify;
        using Accounts::Watch::timerEvent;
    };

    VirtualAccountsWatch() : Accounts::Watch() {};
    VirtualAccountsWatch(QObject* parent) : Accounts::Watch(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (accounts__watch_metaobject_callback) {
            QMetaObject* callback_ret = accounts__watch_metaobject_callback(this);
            return callback_ret;
        }
        return Accounts__Watch::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (accounts__watch_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = accounts__watch_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__Watch::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__watch_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = accounts__watch_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Accounts__Watch::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__watch_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = accounts__watch_event_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__Watch::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__watch_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = accounts__watch_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Accounts__Watch::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__watch_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            accounts__watch_timerevent_callback(this, cbval1);
            return;
        }
        Accounts__Watch::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__watch_childevent_callback) {
            QChildEvent* cbval1 = event;
            accounts__watch_childevent_callback(this, cbval1);
            return;
        }
        Accounts__Watch::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__watch_customevent_callback) {
            QEvent* cbval1 = event;
            accounts__watch_customevent_callback(this, cbval1);
            return;
        }
        Accounts__Watch::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__watch_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__watch_connectnotify_callback(this, cbval1);
            return;
        }
        Accounts__Watch::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__watch_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__watch_disconnectnotify_callback(this, cbval1);
            return;
        }
        Accounts__Watch::disconnectNotify(signal);
    }

    // Friend functions
    friend void Accounts__Watch_SuperTimerEvent(Accounts::Watch* self, QTimerEvent* event);
    friend void Accounts__Watch_SuperChildEvent(Accounts::Watch* self, QChildEvent* event);
    friend void Accounts__Watch_SuperCustomEvent(Accounts::Watch* self, QEvent* event);
    friend void Accounts__Watch_SuperConnectNotify(Accounts::Watch* self, const QMetaMethod* signal);
    friend void Accounts__Watch_SuperDisconnectNotify(Accounts::Watch* self, const QMetaMethod* signal);
};

// This class is a subclass of Accounts::Account
class VirtualAccountsAccount final : public Accounts::Account {
  public:
    // Virtual class public types (including callbacks and access types)
    using Accounts__Account_MetaObject_Callback = QMetaObject* (*)(const Accounts__Account*);
    using Accounts__Account_Metacast_Callback = void* (*)(Accounts__Account*, const char*);
    using Accounts__Account_Metacall_Callback = int (*)(Accounts__Account*, int, int, void**);
    using Accounts__Account_Event_Callback = bool (*)(Accounts__Account*, QEvent*);
    using Accounts__Account_EventFilter_Callback = bool (*)(Accounts__Account*, QObject*, QEvent*);
    using Accounts__Account_TimerEvent_Callback = void (*)(Accounts__Account*, QTimerEvent*);
    using Accounts__Account_ChildEvent_Callback = void (*)(Accounts__Account*, QChildEvent*);
    using Accounts__Account_CustomEvent_Callback = void (*)(Accounts__Account*, QEvent*);
    using Accounts__Account_ConnectNotify_Callback = void (*)(Accounts__Account*, QMetaMethod*);
    using Accounts__Account_DisconnectNotify_Callback = void (*)(Accounts__Account*, QMetaMethod*);
    using Accounts::Account::isSignalConnected;
    using Accounts::Account::receivers;
    using Accounts::Account::sender;
    using Accounts::Account::senderSignalIndex;

    // Instance callback storage
    Accounts__Account_MetaObject_Callback accounts__account_metaobject_callback = nullptr;
    Accounts__Account_Metacast_Callback accounts__account_metacast_callback = nullptr;
    Accounts__Account_Metacall_Callback accounts__account_metacall_callback = nullptr;
    Accounts__Account_Event_Callback accounts__account_event_callback = nullptr;
    Accounts__Account_EventFilter_Callback accounts__account_eventfilter_callback = nullptr;
    Accounts__Account_TimerEvent_Callback accounts__account_timerevent_callback = nullptr;
    Accounts__Account_ChildEvent_Callback accounts__account_childevent_callback = nullptr;
    Accounts__Account_CustomEvent_Callback accounts__account_customevent_callback = nullptr;
    Accounts__Account_ConnectNotify_Callback accounts__account_connectnotify_callback = nullptr;
    Accounts__Account_DisconnectNotify_Callback accounts__account_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Accounts::Account {
        using Accounts::Account::childEvent;
        using Accounts::Account::connectNotify;
        using Accounts::Account::customEvent;
        using Accounts::Account::disconnectNotify;
        using Accounts::Account::timerEvent;
    };

    VirtualAccountsAccount(Accounts::Manager* manager, const QString& provider) : Accounts::Account(manager, provider) {};
    VirtualAccountsAccount(Accounts::Manager* manager, const QString& provider, QObject* parent) : Accounts::Account(manager, provider, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (accounts__account_metaobject_callback) {
            QMetaObject* callback_ret = accounts__account_metaobject_callback(this);
            return callback_ret;
        }
        return Accounts__Account::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (accounts__account_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = accounts__account_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__Account::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__account_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = accounts__account_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Accounts__Account::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__account_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = accounts__account_event_callback(this, cbval1);
            return callback_ret;
        }
        return Accounts__Account::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__account_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = accounts__account_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Accounts__Account::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__account_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            accounts__account_timerevent_callback(this, cbval1);
            return;
        }
        Accounts__Account::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__account_childevent_callback) {
            QChildEvent* cbval1 = event;
            accounts__account_childevent_callback(this, cbval1);
            return;
        }
        Accounts__Account::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__account_customevent_callback) {
            QEvent* cbval1 = event;
            accounts__account_customevent_callback(this, cbval1);
            return;
        }
        Accounts__Account::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__account_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__account_connectnotify_callback(this, cbval1);
            return;
        }
        Accounts__Account::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__account_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            accounts__account_disconnectnotify_callback(this, cbval1);
            return;
        }
        Accounts__Account::disconnectNotify(signal);
    }

    // Friend functions
    friend void Accounts__Account_SuperTimerEvent(Accounts::Account* self, QTimerEvent* event);
    friend void Accounts__Account_SuperChildEvent(Accounts::Account* self, QChildEvent* event);
    friend void Accounts__Account_SuperCustomEvent(Accounts::Account* self, QEvent* event);
    friend void Accounts__Account_SuperConnectNotify(Accounts::Account* self, const QMetaMethod* signal);
    friend void Accounts__Account_SuperDisconnectNotify(Accounts::Account* self, const QMetaMethod* signal);
};

#endif
