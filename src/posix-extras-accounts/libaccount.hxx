#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBVIRTUALACCOUNT_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBVIRTUALACCOUNT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Accounts::Watch so that we can call protected methods
class VirtualAccountsWatch final : public Accounts::Watch {

  public:
    // Virtual class boolean flag
    bool isVirtualAccountsWatch = true;

    // Virtual class public types (including callbacks)
    using Accounts__Watch_Metacall_Callback = int (*)(Accounts__Watch*, int, int, void**);
    using Accounts__Watch_Event_Callback = bool (*)(Accounts__Watch*, QEvent*);
    using Accounts__Watch_EventFilter_Callback = bool (*)(Accounts__Watch*, QObject*, QEvent*);
    using Accounts__Watch_TimerEvent_Callback = void (*)(Accounts__Watch*, QTimerEvent*);
    using Accounts__Watch_ChildEvent_Callback = void (*)(Accounts__Watch*, QChildEvent*);
    using Accounts__Watch_CustomEvent_Callback = void (*)(Accounts__Watch*, QEvent*);
    using Accounts__Watch_ConnectNotify_Callback = void (*)(Accounts__Watch*, QMetaMethod*);
    using Accounts__Watch_DisconnectNotify_Callback = void (*)(Accounts__Watch*, QMetaMethod*);
    using Accounts__Watch_Sender_Callback = QObject* (*)();
    using Accounts__Watch_SenderSignalIndex_Callback = int (*)();
    using Accounts__Watch_Receivers_Callback = int (*)(const Accounts__Watch*, const char*);
    using Accounts__Watch_IsSignalConnected_Callback = bool (*)(const Accounts__Watch*, QMetaMethod*);

  protected:
    // Instance callback storage
    Accounts__Watch_Metacall_Callback accounts__watch_metacall_callback = nullptr;
    Accounts__Watch_Event_Callback accounts__watch_event_callback = nullptr;
    Accounts__Watch_EventFilter_Callback accounts__watch_eventfilter_callback = nullptr;
    Accounts__Watch_TimerEvent_Callback accounts__watch_timerevent_callback = nullptr;
    Accounts__Watch_ChildEvent_Callback accounts__watch_childevent_callback = nullptr;
    Accounts__Watch_CustomEvent_Callback accounts__watch_customevent_callback = nullptr;
    Accounts__Watch_ConnectNotify_Callback accounts__watch_connectnotify_callback = nullptr;
    Accounts__Watch_DisconnectNotify_Callback accounts__watch_disconnectnotify_callback = nullptr;
    Accounts__Watch_Sender_Callback accounts__watch_sender_callback = nullptr;
    Accounts__Watch_SenderSignalIndex_Callback accounts__watch_sendersignalindex_callback = nullptr;
    Accounts__Watch_Receivers_Callback accounts__watch_receivers_callback = nullptr;
    Accounts__Watch_IsSignalConnected_Callback accounts__watch_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool accounts__watch_metacall_isbase = false;
    mutable bool accounts__watch_event_isbase = false;
    mutable bool accounts__watch_eventfilter_isbase = false;
    mutable bool accounts__watch_timerevent_isbase = false;
    mutable bool accounts__watch_childevent_isbase = false;
    mutable bool accounts__watch_customevent_isbase = false;
    mutable bool accounts__watch_connectnotify_isbase = false;
    mutable bool accounts__watch_disconnectnotify_isbase = false;
    mutable bool accounts__watch_sender_isbase = false;
    mutable bool accounts__watch_sendersignalindex_isbase = false;
    mutable bool accounts__watch_receivers_isbase = false;
    mutable bool accounts__watch_issignalconnected_isbase = false;

  public:
    VirtualAccountsWatch() : Accounts::Watch() {};
    VirtualAccountsWatch(QObject* parent) : Accounts::Watch(parent) {};

    ~VirtualAccountsWatch() {
        accounts__watch_metacall_callback = nullptr;
        accounts__watch_event_callback = nullptr;
        accounts__watch_eventfilter_callback = nullptr;
        accounts__watch_timerevent_callback = nullptr;
        accounts__watch_childevent_callback = nullptr;
        accounts__watch_customevent_callback = nullptr;
        accounts__watch_connectnotify_callback = nullptr;
        accounts__watch_disconnectnotify_callback = nullptr;
        accounts__watch_sender_callback = nullptr;
        accounts__watch_sendersignalindex_callback = nullptr;
        accounts__watch_receivers_callback = nullptr;
        accounts__watch_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setAccounts__Watch_Metacall_Callback(Accounts__Watch_Metacall_Callback cb) { accounts__watch_metacall_callback = cb; }
    inline void setAccounts__Watch_Event_Callback(Accounts__Watch_Event_Callback cb) { accounts__watch_event_callback = cb; }
    inline void setAccounts__Watch_EventFilter_Callback(Accounts__Watch_EventFilter_Callback cb) { accounts__watch_eventfilter_callback = cb; }
    inline void setAccounts__Watch_TimerEvent_Callback(Accounts__Watch_TimerEvent_Callback cb) { accounts__watch_timerevent_callback = cb; }
    inline void setAccounts__Watch_ChildEvent_Callback(Accounts__Watch_ChildEvent_Callback cb) { accounts__watch_childevent_callback = cb; }
    inline void setAccounts__Watch_CustomEvent_Callback(Accounts__Watch_CustomEvent_Callback cb) { accounts__watch_customevent_callback = cb; }
    inline void setAccounts__Watch_ConnectNotify_Callback(Accounts__Watch_ConnectNotify_Callback cb) { accounts__watch_connectnotify_callback = cb; }
    inline void setAccounts__Watch_DisconnectNotify_Callback(Accounts__Watch_DisconnectNotify_Callback cb) { accounts__watch_disconnectnotify_callback = cb; }
    inline void setAccounts__Watch_Sender_Callback(Accounts__Watch_Sender_Callback cb) { accounts__watch_sender_callback = cb; }
    inline void setAccounts__Watch_SenderSignalIndex_Callback(Accounts__Watch_SenderSignalIndex_Callback cb) { accounts__watch_sendersignalindex_callback = cb; }
    inline void setAccounts__Watch_Receivers_Callback(Accounts__Watch_Receivers_Callback cb) { accounts__watch_receivers_callback = cb; }
    inline void setAccounts__Watch_IsSignalConnected_Callback(Accounts__Watch_IsSignalConnected_Callback cb) { accounts__watch_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setAccounts__Watch_Metacall_IsBase(bool value) const { accounts__watch_metacall_isbase = value; }
    inline void setAccounts__Watch_Event_IsBase(bool value) const { accounts__watch_event_isbase = value; }
    inline void setAccounts__Watch_EventFilter_IsBase(bool value) const { accounts__watch_eventfilter_isbase = value; }
    inline void setAccounts__Watch_TimerEvent_IsBase(bool value) const { accounts__watch_timerevent_isbase = value; }
    inline void setAccounts__Watch_ChildEvent_IsBase(bool value) const { accounts__watch_childevent_isbase = value; }
    inline void setAccounts__Watch_CustomEvent_IsBase(bool value) const { accounts__watch_customevent_isbase = value; }
    inline void setAccounts__Watch_ConnectNotify_IsBase(bool value) const { accounts__watch_connectnotify_isbase = value; }
    inline void setAccounts__Watch_DisconnectNotify_IsBase(bool value) const { accounts__watch_disconnectnotify_isbase = value; }
    inline void setAccounts__Watch_Sender_IsBase(bool value) const { accounts__watch_sender_isbase = value; }
    inline void setAccounts__Watch_SenderSignalIndex_IsBase(bool value) const { accounts__watch_sendersignalindex_isbase = value; }
    inline void setAccounts__Watch_Receivers_IsBase(bool value) const { accounts__watch_receivers_isbase = value; }
    inline void setAccounts__Watch_IsSignalConnected_IsBase(bool value) const { accounts__watch_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__watch_metacall_isbase) {
            accounts__watch_metacall_isbase = false;
            return Accounts__Watch::qt_metacall(param1, param2, param3);
        } else if (accounts__watch_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = accounts__watch_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__Watch::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__watch_event_isbase) {
            accounts__watch_event_isbase = false;
            return Accounts__Watch::event(event);
        } else if (accounts__watch_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = accounts__watch_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__Watch::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__watch_eventfilter_isbase) {
            accounts__watch_eventfilter_isbase = false;
            return Accounts__Watch::eventFilter(watched, event);
        } else if (accounts__watch_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = accounts__watch_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Accounts__Watch::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__watch_timerevent_isbase) {
            accounts__watch_timerevent_isbase = false;
            Accounts__Watch::timerEvent(event);
        } else if (accounts__watch_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            accounts__watch_timerevent_callback(this, cbval1);
        } else {
            Accounts__Watch::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__watch_childevent_isbase) {
            accounts__watch_childevent_isbase = false;
            Accounts__Watch::childEvent(event);
        } else if (accounts__watch_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            accounts__watch_childevent_callback(this, cbval1);
        } else {
            Accounts__Watch::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__watch_customevent_isbase) {
            accounts__watch_customevent_isbase = false;
            Accounts__Watch::customEvent(event);
        } else if (accounts__watch_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            accounts__watch_customevent_callback(this, cbval1);
        } else {
            Accounts__Watch::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__watch_connectnotify_isbase) {
            accounts__watch_connectnotify_isbase = false;
            Accounts__Watch::connectNotify(signal);
        } else if (accounts__watch_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            accounts__watch_connectnotify_callback(this, cbval1);
        } else {
            Accounts__Watch::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__watch_disconnectnotify_isbase) {
            accounts__watch_disconnectnotify_isbase = false;
            Accounts__Watch::disconnectNotify(signal);
        } else if (accounts__watch_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            accounts__watch_disconnectnotify_callback(this, cbval1);
        } else {
            Accounts__Watch::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (accounts__watch_sender_isbase) {
            accounts__watch_sender_isbase = false;
            return Accounts__Watch::sender();
        } else if (accounts__watch_sender_callback != nullptr) {
            QObject* callback_ret = accounts__watch_sender_callback();
            return callback_ret;
        } else {
            return Accounts__Watch::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (accounts__watch_sendersignalindex_isbase) {
            accounts__watch_sendersignalindex_isbase = false;
            return Accounts__Watch::senderSignalIndex();
        } else if (accounts__watch_sendersignalindex_callback != nullptr) {
            int callback_ret = accounts__watch_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__Watch::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (accounts__watch_receivers_isbase) {
            accounts__watch_receivers_isbase = false;
            return Accounts__Watch::receivers(signal);
        } else if (accounts__watch_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = accounts__watch_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__Watch::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (accounts__watch_issignalconnected_isbase) {
            accounts__watch_issignalconnected_isbase = false;
            return Accounts__Watch::isSignalConnected(signal);
        } else if (accounts__watch_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = accounts__watch_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__Watch::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Accounts__Watch_TimerEvent(Accounts::Watch* self, QTimerEvent* event);
    friend void Accounts__Watch_QBaseTimerEvent(Accounts::Watch* self, QTimerEvent* event);
    friend void Accounts__Watch_ChildEvent(Accounts::Watch* self, QChildEvent* event);
    friend void Accounts__Watch_QBaseChildEvent(Accounts::Watch* self, QChildEvent* event);
    friend void Accounts__Watch_CustomEvent(Accounts::Watch* self, QEvent* event);
    friend void Accounts__Watch_QBaseCustomEvent(Accounts::Watch* self, QEvent* event);
    friend void Accounts__Watch_ConnectNotify(Accounts::Watch* self, const QMetaMethod* signal);
    friend void Accounts__Watch_QBaseConnectNotify(Accounts::Watch* self, const QMetaMethod* signal);
    friend void Accounts__Watch_DisconnectNotify(Accounts::Watch* self, const QMetaMethod* signal);
    friend void Accounts__Watch_QBaseDisconnectNotify(Accounts::Watch* self, const QMetaMethod* signal);
    friend QObject* Accounts__Watch_Sender(const Accounts::Watch* self);
    friend QObject* Accounts__Watch_QBaseSender(const Accounts::Watch* self);
    friend int Accounts__Watch_SenderSignalIndex(const Accounts::Watch* self);
    friend int Accounts__Watch_QBaseSenderSignalIndex(const Accounts::Watch* self);
    friend int Accounts__Watch_Receivers(const Accounts::Watch* self, const char* signal);
    friend int Accounts__Watch_QBaseReceivers(const Accounts::Watch* self, const char* signal);
    friend bool Accounts__Watch_IsSignalConnected(const Accounts::Watch* self, const QMetaMethod* signal);
    friend bool Accounts__Watch_QBaseIsSignalConnected(const Accounts::Watch* self, const QMetaMethod* signal);
};

// This class is a subclass of Accounts::Account so that we can call protected methods
class VirtualAccountsAccount final : public Accounts::Account {

  public:
    // Virtual class boolean flag
    bool isVirtualAccountsAccount = true;

    // Virtual class public types (including callbacks)
    using Accounts__Account_Metacall_Callback = int (*)(Accounts__Account*, int, int, void**);
    using Accounts__Account_Event_Callback = bool (*)(Accounts__Account*, QEvent*);
    using Accounts__Account_EventFilter_Callback = bool (*)(Accounts__Account*, QObject*, QEvent*);
    using Accounts__Account_TimerEvent_Callback = void (*)(Accounts__Account*, QTimerEvent*);
    using Accounts__Account_ChildEvent_Callback = void (*)(Accounts__Account*, QChildEvent*);
    using Accounts__Account_CustomEvent_Callback = void (*)(Accounts__Account*, QEvent*);
    using Accounts__Account_ConnectNotify_Callback = void (*)(Accounts__Account*, QMetaMethod*);
    using Accounts__Account_DisconnectNotify_Callback = void (*)(Accounts__Account*, QMetaMethod*);
    using Accounts__Account_Sender_Callback = QObject* (*)();
    using Accounts__Account_SenderSignalIndex_Callback = int (*)();
    using Accounts__Account_Receivers_Callback = int (*)(const Accounts__Account*, const char*);
    using Accounts__Account_IsSignalConnected_Callback = bool (*)(const Accounts__Account*, QMetaMethod*);

  protected:
    // Instance callback storage
    Accounts__Account_Metacall_Callback accounts__account_metacall_callback = nullptr;
    Accounts__Account_Event_Callback accounts__account_event_callback = nullptr;
    Accounts__Account_EventFilter_Callback accounts__account_eventfilter_callback = nullptr;
    Accounts__Account_TimerEvent_Callback accounts__account_timerevent_callback = nullptr;
    Accounts__Account_ChildEvent_Callback accounts__account_childevent_callback = nullptr;
    Accounts__Account_CustomEvent_Callback accounts__account_customevent_callback = nullptr;
    Accounts__Account_ConnectNotify_Callback accounts__account_connectnotify_callback = nullptr;
    Accounts__Account_DisconnectNotify_Callback accounts__account_disconnectnotify_callback = nullptr;
    Accounts__Account_Sender_Callback accounts__account_sender_callback = nullptr;
    Accounts__Account_SenderSignalIndex_Callback accounts__account_sendersignalindex_callback = nullptr;
    Accounts__Account_Receivers_Callback accounts__account_receivers_callback = nullptr;
    Accounts__Account_IsSignalConnected_Callback accounts__account_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool accounts__account_metacall_isbase = false;
    mutable bool accounts__account_event_isbase = false;
    mutable bool accounts__account_eventfilter_isbase = false;
    mutable bool accounts__account_timerevent_isbase = false;
    mutable bool accounts__account_childevent_isbase = false;
    mutable bool accounts__account_customevent_isbase = false;
    mutable bool accounts__account_connectnotify_isbase = false;
    mutable bool accounts__account_disconnectnotify_isbase = false;
    mutable bool accounts__account_sender_isbase = false;
    mutable bool accounts__account_sendersignalindex_isbase = false;
    mutable bool accounts__account_receivers_isbase = false;
    mutable bool accounts__account_issignalconnected_isbase = false;

  public:
    VirtualAccountsAccount(Accounts::Manager* manager, const QString& provider) : Accounts::Account(manager, provider) {};
    VirtualAccountsAccount(Accounts::Manager* manager, const QString& provider, QObject* parent) : Accounts::Account(manager, provider, parent) {};

    ~VirtualAccountsAccount() {
        accounts__account_metacall_callback = nullptr;
        accounts__account_event_callback = nullptr;
        accounts__account_eventfilter_callback = nullptr;
        accounts__account_timerevent_callback = nullptr;
        accounts__account_childevent_callback = nullptr;
        accounts__account_customevent_callback = nullptr;
        accounts__account_connectnotify_callback = nullptr;
        accounts__account_disconnectnotify_callback = nullptr;
        accounts__account_sender_callback = nullptr;
        accounts__account_sendersignalindex_callback = nullptr;
        accounts__account_receivers_callback = nullptr;
        accounts__account_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setAccounts__Account_Metacall_Callback(Accounts__Account_Metacall_Callback cb) { accounts__account_metacall_callback = cb; }
    inline void setAccounts__Account_Event_Callback(Accounts__Account_Event_Callback cb) { accounts__account_event_callback = cb; }
    inline void setAccounts__Account_EventFilter_Callback(Accounts__Account_EventFilter_Callback cb) { accounts__account_eventfilter_callback = cb; }
    inline void setAccounts__Account_TimerEvent_Callback(Accounts__Account_TimerEvent_Callback cb) { accounts__account_timerevent_callback = cb; }
    inline void setAccounts__Account_ChildEvent_Callback(Accounts__Account_ChildEvent_Callback cb) { accounts__account_childevent_callback = cb; }
    inline void setAccounts__Account_CustomEvent_Callback(Accounts__Account_CustomEvent_Callback cb) { accounts__account_customevent_callback = cb; }
    inline void setAccounts__Account_ConnectNotify_Callback(Accounts__Account_ConnectNotify_Callback cb) { accounts__account_connectnotify_callback = cb; }
    inline void setAccounts__Account_DisconnectNotify_Callback(Accounts__Account_DisconnectNotify_Callback cb) { accounts__account_disconnectnotify_callback = cb; }
    inline void setAccounts__Account_Sender_Callback(Accounts__Account_Sender_Callback cb) { accounts__account_sender_callback = cb; }
    inline void setAccounts__Account_SenderSignalIndex_Callback(Accounts__Account_SenderSignalIndex_Callback cb) { accounts__account_sendersignalindex_callback = cb; }
    inline void setAccounts__Account_Receivers_Callback(Accounts__Account_Receivers_Callback cb) { accounts__account_receivers_callback = cb; }
    inline void setAccounts__Account_IsSignalConnected_Callback(Accounts__Account_IsSignalConnected_Callback cb) { accounts__account_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setAccounts__Account_Metacall_IsBase(bool value) const { accounts__account_metacall_isbase = value; }
    inline void setAccounts__Account_Event_IsBase(bool value) const { accounts__account_event_isbase = value; }
    inline void setAccounts__Account_EventFilter_IsBase(bool value) const { accounts__account_eventfilter_isbase = value; }
    inline void setAccounts__Account_TimerEvent_IsBase(bool value) const { accounts__account_timerevent_isbase = value; }
    inline void setAccounts__Account_ChildEvent_IsBase(bool value) const { accounts__account_childevent_isbase = value; }
    inline void setAccounts__Account_CustomEvent_IsBase(bool value) const { accounts__account_customevent_isbase = value; }
    inline void setAccounts__Account_ConnectNotify_IsBase(bool value) const { accounts__account_connectnotify_isbase = value; }
    inline void setAccounts__Account_DisconnectNotify_IsBase(bool value) const { accounts__account_disconnectnotify_isbase = value; }
    inline void setAccounts__Account_Sender_IsBase(bool value) const { accounts__account_sender_isbase = value; }
    inline void setAccounts__Account_SenderSignalIndex_IsBase(bool value) const { accounts__account_sendersignalindex_isbase = value; }
    inline void setAccounts__Account_Receivers_IsBase(bool value) const { accounts__account_receivers_isbase = value; }
    inline void setAccounts__Account_IsSignalConnected_IsBase(bool value) const { accounts__account_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__account_metacall_isbase) {
            accounts__account_metacall_isbase = false;
            return Accounts__Account::qt_metacall(param1, param2, param3);
        } else if (accounts__account_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = accounts__account_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__Account::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__account_event_isbase) {
            accounts__account_event_isbase = false;
            return Accounts__Account::event(event);
        } else if (accounts__account_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = accounts__account_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__Account::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__account_eventfilter_isbase) {
            accounts__account_eventfilter_isbase = false;
            return Accounts__Account::eventFilter(watched, event);
        } else if (accounts__account_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = accounts__account_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Accounts__Account::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__account_timerevent_isbase) {
            accounts__account_timerevent_isbase = false;
            Accounts__Account::timerEvent(event);
        } else if (accounts__account_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            accounts__account_timerevent_callback(this, cbval1);
        } else {
            Accounts__Account::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__account_childevent_isbase) {
            accounts__account_childevent_isbase = false;
            Accounts__Account::childEvent(event);
        } else if (accounts__account_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            accounts__account_childevent_callback(this, cbval1);
        } else {
            Accounts__Account::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__account_customevent_isbase) {
            accounts__account_customevent_isbase = false;
            Accounts__Account::customEvent(event);
        } else if (accounts__account_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            accounts__account_customevent_callback(this, cbval1);
        } else {
            Accounts__Account::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__account_connectnotify_isbase) {
            accounts__account_connectnotify_isbase = false;
            Accounts__Account::connectNotify(signal);
        } else if (accounts__account_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            accounts__account_connectnotify_callback(this, cbval1);
        } else {
            Accounts__Account::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__account_disconnectnotify_isbase) {
            accounts__account_disconnectnotify_isbase = false;
            Accounts__Account::disconnectNotify(signal);
        } else if (accounts__account_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            accounts__account_disconnectnotify_callback(this, cbval1);
        } else {
            Accounts__Account::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (accounts__account_sender_isbase) {
            accounts__account_sender_isbase = false;
            return Accounts__Account::sender();
        } else if (accounts__account_sender_callback != nullptr) {
            QObject* callback_ret = accounts__account_sender_callback();
            return callback_ret;
        } else {
            return Accounts__Account::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (accounts__account_sendersignalindex_isbase) {
            accounts__account_sendersignalindex_isbase = false;
            return Accounts__Account::senderSignalIndex();
        } else if (accounts__account_sendersignalindex_callback != nullptr) {
            int callback_ret = accounts__account_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__Account::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (accounts__account_receivers_isbase) {
            accounts__account_receivers_isbase = false;
            return Accounts__Account::receivers(signal);
        } else if (accounts__account_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = accounts__account_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__Account::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (accounts__account_issignalconnected_isbase) {
            accounts__account_issignalconnected_isbase = false;
            return Accounts__Account::isSignalConnected(signal);
        } else if (accounts__account_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = accounts__account_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__Account::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Accounts__Account_TimerEvent(Accounts::Account* self, QTimerEvent* event);
    friend void Accounts__Account_QBaseTimerEvent(Accounts::Account* self, QTimerEvent* event);
    friend void Accounts__Account_ChildEvent(Accounts::Account* self, QChildEvent* event);
    friend void Accounts__Account_QBaseChildEvent(Accounts::Account* self, QChildEvent* event);
    friend void Accounts__Account_CustomEvent(Accounts::Account* self, QEvent* event);
    friend void Accounts__Account_QBaseCustomEvent(Accounts::Account* self, QEvent* event);
    friend void Accounts__Account_ConnectNotify(Accounts::Account* self, const QMetaMethod* signal);
    friend void Accounts__Account_QBaseConnectNotify(Accounts::Account* self, const QMetaMethod* signal);
    friend void Accounts__Account_DisconnectNotify(Accounts::Account* self, const QMetaMethod* signal);
    friend void Accounts__Account_QBaseDisconnectNotify(Accounts::Account* self, const QMetaMethod* signal);
    friend QObject* Accounts__Account_Sender(const Accounts::Account* self);
    friend QObject* Accounts__Account_QBaseSender(const Accounts::Account* self);
    friend int Accounts__Account_SenderSignalIndex(const Accounts::Account* self);
    friend int Accounts__Account_QBaseSenderSignalIndex(const Accounts::Account* self);
    friend int Accounts__Account_Receivers(const Accounts::Account* self, const char* signal);
    friend int Accounts__Account_QBaseReceivers(const Accounts::Account* self, const char* signal);
    friend bool Accounts__Account_IsSignalConnected(const Accounts::Account* self, const QMetaMethod* signal);
    friend bool Accounts__Account_QBaseIsSignalConnected(const Accounts::Account* self, const QMetaMethod* signal);
};

#endif
