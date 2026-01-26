#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBVIRTUALACCOUNT_SERVICE_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBVIRTUALACCOUNT_SERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Accounts::AccountService so that we can call protected methods
class VirtualAccountsAccountService final : public Accounts::AccountService {

  public:
    // Virtual class boolean flag
    bool isVirtualAccountsAccountService = true;

    // Virtual class public types (including callbacks)
    using Accounts__AccountService_MetaObject_Callback = QMetaObject* (*)();
    using Accounts__AccountService_Metacast_Callback = void* (*)(Accounts__AccountService*, const char*);
    using Accounts__AccountService_Metacall_Callback = int (*)(Accounts__AccountService*, int, int, void**);
    using Accounts__AccountService_Event_Callback = bool (*)(Accounts__AccountService*, QEvent*);
    using Accounts__AccountService_EventFilter_Callback = bool (*)(Accounts__AccountService*, QObject*, QEvent*);
    using Accounts__AccountService_TimerEvent_Callback = void (*)(Accounts__AccountService*, QTimerEvent*);
    using Accounts__AccountService_ChildEvent_Callback = void (*)(Accounts__AccountService*, QChildEvent*);
    using Accounts__AccountService_CustomEvent_Callback = void (*)(Accounts__AccountService*, QEvent*);
    using Accounts__AccountService_ConnectNotify_Callback = void (*)(Accounts__AccountService*, QMetaMethod*);
    using Accounts__AccountService_DisconnectNotify_Callback = void (*)(Accounts__AccountService*, QMetaMethod*);
    using Accounts__AccountService_Sender_Callback = QObject* (*)();
    using Accounts__AccountService_SenderSignalIndex_Callback = int (*)();
    using Accounts__AccountService_Receivers_Callback = int (*)(const Accounts__AccountService*, const char*);
    using Accounts__AccountService_IsSignalConnected_Callback = bool (*)(const Accounts__AccountService*, QMetaMethod*);

  protected:
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
    Accounts__AccountService_Sender_Callback accounts__accountservice_sender_callback = nullptr;
    Accounts__AccountService_SenderSignalIndex_Callback accounts__accountservice_sendersignalindex_callback = nullptr;
    Accounts__AccountService_Receivers_Callback accounts__accountservice_receivers_callback = nullptr;
    Accounts__AccountService_IsSignalConnected_Callback accounts__accountservice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool accounts__accountservice_metaobject_isbase = false;
    mutable bool accounts__accountservice_metacast_isbase = false;
    mutable bool accounts__accountservice_metacall_isbase = false;
    mutable bool accounts__accountservice_event_isbase = false;
    mutable bool accounts__accountservice_eventfilter_isbase = false;
    mutable bool accounts__accountservice_timerevent_isbase = false;
    mutable bool accounts__accountservice_childevent_isbase = false;
    mutable bool accounts__accountservice_customevent_isbase = false;
    mutable bool accounts__accountservice_connectnotify_isbase = false;
    mutable bool accounts__accountservice_disconnectnotify_isbase = false;
    mutable bool accounts__accountservice_sender_isbase = false;
    mutable bool accounts__accountservice_sendersignalindex_isbase = false;
    mutable bool accounts__accountservice_receivers_isbase = false;
    mutable bool accounts__accountservice_issignalconnected_isbase = false;

  public:
    VirtualAccountsAccountService(Accounts::Account* account, const Accounts::Service& service) : Accounts::AccountService(account, service) {};
    VirtualAccountsAccountService(Accounts::Account* account, const Accounts::Service& service, QObject* parent) : Accounts::AccountService(account, service, parent) {};

    ~VirtualAccountsAccountService() {
        accounts__accountservice_metaobject_callback = nullptr;
        accounts__accountservice_metacast_callback = nullptr;
        accounts__accountservice_metacall_callback = nullptr;
        accounts__accountservice_event_callback = nullptr;
        accounts__accountservice_eventfilter_callback = nullptr;
        accounts__accountservice_timerevent_callback = nullptr;
        accounts__accountservice_childevent_callback = nullptr;
        accounts__accountservice_customevent_callback = nullptr;
        accounts__accountservice_connectnotify_callback = nullptr;
        accounts__accountservice_disconnectnotify_callback = nullptr;
        accounts__accountservice_sender_callback = nullptr;
        accounts__accountservice_sendersignalindex_callback = nullptr;
        accounts__accountservice_receivers_callback = nullptr;
        accounts__accountservice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setAccounts__AccountService_MetaObject_Callback(Accounts__AccountService_MetaObject_Callback cb) { accounts__accountservice_metaobject_callback = cb; }
    inline void setAccounts__AccountService_Metacast_Callback(Accounts__AccountService_Metacast_Callback cb) { accounts__accountservice_metacast_callback = cb; }
    inline void setAccounts__AccountService_Metacall_Callback(Accounts__AccountService_Metacall_Callback cb) { accounts__accountservice_metacall_callback = cb; }
    inline void setAccounts__AccountService_Event_Callback(Accounts__AccountService_Event_Callback cb) { accounts__accountservice_event_callback = cb; }
    inline void setAccounts__AccountService_EventFilter_Callback(Accounts__AccountService_EventFilter_Callback cb) { accounts__accountservice_eventfilter_callback = cb; }
    inline void setAccounts__AccountService_TimerEvent_Callback(Accounts__AccountService_TimerEvent_Callback cb) { accounts__accountservice_timerevent_callback = cb; }
    inline void setAccounts__AccountService_ChildEvent_Callback(Accounts__AccountService_ChildEvent_Callback cb) { accounts__accountservice_childevent_callback = cb; }
    inline void setAccounts__AccountService_CustomEvent_Callback(Accounts__AccountService_CustomEvent_Callback cb) { accounts__accountservice_customevent_callback = cb; }
    inline void setAccounts__AccountService_ConnectNotify_Callback(Accounts__AccountService_ConnectNotify_Callback cb) { accounts__accountservice_connectnotify_callback = cb; }
    inline void setAccounts__AccountService_DisconnectNotify_Callback(Accounts__AccountService_DisconnectNotify_Callback cb) { accounts__accountservice_disconnectnotify_callback = cb; }
    inline void setAccounts__AccountService_Sender_Callback(Accounts__AccountService_Sender_Callback cb) { accounts__accountservice_sender_callback = cb; }
    inline void setAccounts__AccountService_SenderSignalIndex_Callback(Accounts__AccountService_SenderSignalIndex_Callback cb) { accounts__accountservice_sendersignalindex_callback = cb; }
    inline void setAccounts__AccountService_Receivers_Callback(Accounts__AccountService_Receivers_Callback cb) { accounts__accountservice_receivers_callback = cb; }
    inline void setAccounts__AccountService_IsSignalConnected_Callback(Accounts__AccountService_IsSignalConnected_Callback cb) { accounts__accountservice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setAccounts__AccountService_MetaObject_IsBase(bool value) const { accounts__accountservice_metaobject_isbase = value; }
    inline void setAccounts__AccountService_Metacast_IsBase(bool value) const { accounts__accountservice_metacast_isbase = value; }
    inline void setAccounts__AccountService_Metacall_IsBase(bool value) const { accounts__accountservice_metacall_isbase = value; }
    inline void setAccounts__AccountService_Event_IsBase(bool value) const { accounts__accountservice_event_isbase = value; }
    inline void setAccounts__AccountService_EventFilter_IsBase(bool value) const { accounts__accountservice_eventfilter_isbase = value; }
    inline void setAccounts__AccountService_TimerEvent_IsBase(bool value) const { accounts__accountservice_timerevent_isbase = value; }
    inline void setAccounts__AccountService_ChildEvent_IsBase(bool value) const { accounts__accountservice_childevent_isbase = value; }
    inline void setAccounts__AccountService_CustomEvent_IsBase(bool value) const { accounts__accountservice_customevent_isbase = value; }
    inline void setAccounts__AccountService_ConnectNotify_IsBase(bool value) const { accounts__accountservice_connectnotify_isbase = value; }
    inline void setAccounts__AccountService_DisconnectNotify_IsBase(bool value) const { accounts__accountservice_disconnectnotify_isbase = value; }
    inline void setAccounts__AccountService_Sender_IsBase(bool value) const { accounts__accountservice_sender_isbase = value; }
    inline void setAccounts__AccountService_SenderSignalIndex_IsBase(bool value) const { accounts__accountservice_sendersignalindex_isbase = value; }
    inline void setAccounts__AccountService_Receivers_IsBase(bool value) const { accounts__accountservice_receivers_isbase = value; }
    inline void setAccounts__AccountService_IsSignalConnected_IsBase(bool value) const { accounts__accountservice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (accounts__accountservice_metaobject_isbase) {
            accounts__accountservice_metaobject_isbase = false;
            return Accounts__AccountService::metaObject();
        } else if (accounts__accountservice_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = accounts__accountservice_metaobject_callback();
            return callback_ret;
        } else {
            return Accounts__AccountService::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (accounts__accountservice_metacast_isbase) {
            accounts__accountservice_metacast_isbase = false;
            return Accounts__AccountService::qt_metacast(param1);
        } else if (accounts__accountservice_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = accounts__accountservice_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__AccountService::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__accountservice_metacall_isbase) {
            accounts__accountservice_metacall_isbase = false;
            return Accounts__AccountService::qt_metacall(param1, param2, param3);
        } else if (accounts__accountservice_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = accounts__accountservice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__AccountService::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__accountservice_event_isbase) {
            accounts__accountservice_event_isbase = false;
            return Accounts__AccountService::event(event);
        } else if (accounts__accountservice_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = accounts__accountservice_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__AccountService::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__accountservice_eventfilter_isbase) {
            accounts__accountservice_eventfilter_isbase = false;
            return Accounts__AccountService::eventFilter(watched, event);
        } else if (accounts__accountservice_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = accounts__accountservice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Accounts__AccountService::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__accountservice_timerevent_isbase) {
            accounts__accountservice_timerevent_isbase = false;
            Accounts__AccountService::timerEvent(event);
        } else if (accounts__accountservice_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            accounts__accountservice_timerevent_callback(this, cbval1);
        } else {
            Accounts__AccountService::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__accountservice_childevent_isbase) {
            accounts__accountservice_childevent_isbase = false;
            Accounts__AccountService::childEvent(event);
        } else if (accounts__accountservice_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            accounts__accountservice_childevent_callback(this, cbval1);
        } else {
            Accounts__AccountService::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__accountservice_customevent_isbase) {
            accounts__accountservice_customevent_isbase = false;
            Accounts__AccountService::customEvent(event);
        } else if (accounts__accountservice_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            accounts__accountservice_customevent_callback(this, cbval1);
        } else {
            Accounts__AccountService::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__accountservice_connectnotify_isbase) {
            accounts__accountservice_connectnotify_isbase = false;
            Accounts__AccountService::connectNotify(signal);
        } else if (accounts__accountservice_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            accounts__accountservice_connectnotify_callback(this, cbval1);
        } else {
            Accounts__AccountService::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__accountservice_disconnectnotify_isbase) {
            accounts__accountservice_disconnectnotify_isbase = false;
            Accounts__AccountService::disconnectNotify(signal);
        } else if (accounts__accountservice_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            accounts__accountservice_disconnectnotify_callback(this, cbval1);
        } else {
            Accounts__AccountService::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (accounts__accountservice_sender_isbase) {
            accounts__accountservice_sender_isbase = false;
            return Accounts__AccountService::sender();
        } else if (accounts__accountservice_sender_callback != nullptr) {
            QObject* callback_ret = accounts__accountservice_sender_callback();
            return callback_ret;
        } else {
            return Accounts__AccountService::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (accounts__accountservice_sendersignalindex_isbase) {
            accounts__accountservice_sendersignalindex_isbase = false;
            return Accounts__AccountService::senderSignalIndex();
        } else if (accounts__accountservice_sendersignalindex_callback != nullptr) {
            int callback_ret = accounts__accountservice_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__AccountService::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (accounts__accountservice_receivers_isbase) {
            accounts__accountservice_receivers_isbase = false;
            return Accounts__AccountService::receivers(signal);
        } else if (accounts__accountservice_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = accounts__accountservice_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Accounts__AccountService::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (accounts__accountservice_issignalconnected_isbase) {
            accounts__accountservice_issignalconnected_isbase = false;
            return Accounts__AccountService::isSignalConnected(signal);
        } else if (accounts__accountservice_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = accounts__accountservice_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Accounts__AccountService::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Accounts__AccountService_TimerEvent(Accounts::AccountService* self, QTimerEvent* event);
    friend void Accounts__AccountService_QBaseTimerEvent(Accounts::AccountService* self, QTimerEvent* event);
    friend void Accounts__AccountService_ChildEvent(Accounts::AccountService* self, QChildEvent* event);
    friend void Accounts__AccountService_QBaseChildEvent(Accounts::AccountService* self, QChildEvent* event);
    friend void Accounts__AccountService_CustomEvent(Accounts::AccountService* self, QEvent* event);
    friend void Accounts__AccountService_QBaseCustomEvent(Accounts::AccountService* self, QEvent* event);
    friend void Accounts__AccountService_ConnectNotify(Accounts::AccountService* self, const QMetaMethod* signal);
    friend void Accounts__AccountService_QBaseConnectNotify(Accounts::AccountService* self, const QMetaMethod* signal);
    friend void Accounts__AccountService_DisconnectNotify(Accounts::AccountService* self, const QMetaMethod* signal);
    friend void Accounts__AccountService_QBaseDisconnectNotify(Accounts::AccountService* self, const QMetaMethod* signal);
    friend QObject* Accounts__AccountService_Sender(const Accounts::AccountService* self);
    friend QObject* Accounts__AccountService_QBaseSender(const Accounts::AccountService* self);
    friend int Accounts__AccountService_SenderSignalIndex(const Accounts::AccountService* self);
    friend int Accounts__AccountService_QBaseSenderSignalIndex(const Accounts::AccountService* self);
    friend int Accounts__AccountService_Receivers(const Accounts::AccountService* self, const char* signal);
    friend int Accounts__AccountService_QBaseReceivers(const Accounts::AccountService* self, const char* signal);
    friend bool Accounts__AccountService_IsSignalConnected(const Accounts::AccountService* self, const QMetaMethod* signal);
    friend bool Accounts__AccountService_QBaseIsSignalConnected(const Accounts::AccountService* self, const QMetaMethod* signal);
};

#endif
