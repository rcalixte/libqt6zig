#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSC_LIBVIRTUALMANAGER_H
#define SRC_POSIX_EXTRAS_ACCOUNTSC_LIBVIRTUALMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Accounts::Manager so that we can call protected methods
class VirtualAccountsManager final : public Accounts::Manager {

  public:
    // Virtual class boolean flag
    bool isVirtualAccountsManager = true;

    // Virtual class public types (including callbacks)
    using Accounts__Manager_MetaObject_Callback = QMetaObject* (*)();
    using Accounts__Manager_Metacast_Callback = void* (*)(Accounts__Manager*, const char*);
    using Accounts__Manager_Metacall_Callback = int (*)(Accounts__Manager*, int, int, void**);
    using Accounts__Manager_Event_Callback = bool (*)(Accounts__Manager*, QEvent*);
    using Accounts__Manager_EventFilter_Callback = bool (*)(Accounts__Manager*, QObject*, QEvent*);
    using Accounts__Manager_TimerEvent_Callback = void (*)(Accounts__Manager*, QTimerEvent*);
    using Accounts__Manager_ChildEvent_Callback = void (*)(Accounts__Manager*, QChildEvent*);
    using Accounts__Manager_CustomEvent_Callback = void (*)(Accounts__Manager*, QEvent*);
    using Accounts__Manager_ConnectNotify_Callback = void (*)(Accounts__Manager*, QMetaMethod*);
    using Accounts__Manager_DisconnectNotify_Callback = void (*)(Accounts__Manager*, QMetaMethod*);
    using Accounts__Manager_Sender_Callback = QObject* (*)();
    using Accounts__Manager_SenderSignalIndex_Callback = int (*)();
    using Accounts__Manager_Receivers_Callback = int (*)(const Accounts__Manager*, const char*);
    using Accounts__Manager_IsSignalConnected_Callback = bool (*)(const Accounts__Manager*, QMetaMethod*);

  protected:
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
    Accounts__Manager_Sender_Callback accounts__manager_sender_callback = nullptr;
    Accounts__Manager_SenderSignalIndex_Callback accounts__manager_sendersignalindex_callback = nullptr;
    Accounts__Manager_Receivers_Callback accounts__manager_receivers_callback = nullptr;
    Accounts__Manager_IsSignalConnected_Callback accounts__manager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool accounts__manager_metaobject_isbase = false;
    mutable bool accounts__manager_metacast_isbase = false;
    mutable bool accounts__manager_metacall_isbase = false;
    mutable bool accounts__manager_event_isbase = false;
    mutable bool accounts__manager_eventfilter_isbase = false;
    mutable bool accounts__manager_timerevent_isbase = false;
    mutable bool accounts__manager_childevent_isbase = false;
    mutable bool accounts__manager_customevent_isbase = false;
    mutable bool accounts__manager_connectnotify_isbase = false;
    mutable bool accounts__manager_disconnectnotify_isbase = false;
    mutable bool accounts__manager_sender_isbase = false;
    mutable bool accounts__manager_sendersignalindex_isbase = false;
    mutable bool accounts__manager_receivers_isbase = false;
    mutable bool accounts__manager_issignalconnected_isbase = false;

  public:
    VirtualAccountsManager() : Accounts::Manager() {};
    VirtualAccountsManager(const QString& serviceType) : Accounts::Manager(serviceType) {};
    VirtualAccountsManager(Accounts::Manager::Options options) : Accounts::Manager(options) {};
    VirtualAccountsManager(QObject* parent) : Accounts::Manager(parent) {};
    VirtualAccountsManager(const QString& serviceType, QObject* parent) : Accounts::Manager(serviceType, parent) {};
    VirtualAccountsManager(Accounts::Manager::Options options, QObject* parent) : Accounts::Manager(options, parent) {};

    // Callback setters
    inline void setAccounts__Manager_MetaObject_Callback(Accounts__Manager_MetaObject_Callback cb) { accounts__manager_metaobject_callback = cb; }
    inline void setAccounts__Manager_Metacast_Callback(Accounts__Manager_Metacast_Callback cb) { accounts__manager_metacast_callback = cb; }
    inline void setAccounts__Manager_Metacall_Callback(Accounts__Manager_Metacall_Callback cb) { accounts__manager_metacall_callback = cb; }
    inline void setAccounts__Manager_Event_Callback(Accounts__Manager_Event_Callback cb) { accounts__manager_event_callback = cb; }
    inline void setAccounts__Manager_EventFilter_Callback(Accounts__Manager_EventFilter_Callback cb) { accounts__manager_eventfilter_callback = cb; }
    inline void setAccounts__Manager_TimerEvent_Callback(Accounts__Manager_TimerEvent_Callback cb) { accounts__manager_timerevent_callback = cb; }
    inline void setAccounts__Manager_ChildEvent_Callback(Accounts__Manager_ChildEvent_Callback cb) { accounts__manager_childevent_callback = cb; }
    inline void setAccounts__Manager_CustomEvent_Callback(Accounts__Manager_CustomEvent_Callback cb) { accounts__manager_customevent_callback = cb; }
    inline void setAccounts__Manager_ConnectNotify_Callback(Accounts__Manager_ConnectNotify_Callback cb) { accounts__manager_connectnotify_callback = cb; }
    inline void setAccounts__Manager_DisconnectNotify_Callback(Accounts__Manager_DisconnectNotify_Callback cb) { accounts__manager_disconnectnotify_callback = cb; }
    inline void setAccounts__Manager_Sender_Callback(Accounts__Manager_Sender_Callback cb) { accounts__manager_sender_callback = cb; }
    inline void setAccounts__Manager_SenderSignalIndex_Callback(Accounts__Manager_SenderSignalIndex_Callback cb) { accounts__manager_sendersignalindex_callback = cb; }
    inline void setAccounts__Manager_Receivers_Callback(Accounts__Manager_Receivers_Callback cb) { accounts__manager_receivers_callback = cb; }
    inline void setAccounts__Manager_IsSignalConnected_Callback(Accounts__Manager_IsSignalConnected_Callback cb) { accounts__manager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setAccounts__Manager_MetaObject_IsBase(bool value) const { accounts__manager_metaobject_isbase = value; }
    inline void setAccounts__Manager_Metacast_IsBase(bool value) const { accounts__manager_metacast_isbase = value; }
    inline void setAccounts__Manager_Metacall_IsBase(bool value) const { accounts__manager_metacall_isbase = value; }
    inline void setAccounts__Manager_Event_IsBase(bool value) const { accounts__manager_event_isbase = value; }
    inline void setAccounts__Manager_EventFilter_IsBase(bool value) const { accounts__manager_eventfilter_isbase = value; }
    inline void setAccounts__Manager_TimerEvent_IsBase(bool value) const { accounts__manager_timerevent_isbase = value; }
    inline void setAccounts__Manager_ChildEvent_IsBase(bool value) const { accounts__manager_childevent_isbase = value; }
    inline void setAccounts__Manager_CustomEvent_IsBase(bool value) const { accounts__manager_customevent_isbase = value; }
    inline void setAccounts__Manager_ConnectNotify_IsBase(bool value) const { accounts__manager_connectnotify_isbase = value; }
    inline void setAccounts__Manager_DisconnectNotify_IsBase(bool value) const { accounts__manager_disconnectnotify_isbase = value; }
    inline void setAccounts__Manager_Sender_IsBase(bool value) const { accounts__manager_sender_isbase = value; }
    inline void setAccounts__Manager_SenderSignalIndex_IsBase(bool value) const { accounts__manager_sendersignalindex_isbase = value; }
    inline void setAccounts__Manager_Receivers_IsBase(bool value) const { accounts__manager_receivers_isbase = value; }
    inline void setAccounts__Manager_IsSignalConnected_IsBase(bool value) const { accounts__manager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (accounts__manager_metaobject_isbase) {
            accounts__manager_metaobject_isbase = false;
            return Accounts__Manager::metaObject();
        }
        auto metaobject_cb = accounts__manager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Accounts__Manager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (accounts__manager_metacast_isbase) {
            accounts__manager_metacast_isbase = false;
            return Accounts__Manager::qt_metacast(param1);
        }
        auto metacast_cb = accounts__manager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Accounts__Manager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (accounts__manager_metacall_isbase) {
            accounts__manager_metacall_isbase = false;
            return Accounts__Manager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = accounts__manager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Accounts__Manager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (accounts__manager_event_isbase) {
            accounts__manager_event_isbase = false;
            return Accounts__Manager::event(event);
        }
        auto event_cb = accounts__manager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Accounts__Manager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (accounts__manager_eventfilter_isbase) {
            accounts__manager_eventfilter_isbase = false;
            return Accounts__Manager::eventFilter(watched, event);
        }
        auto eventfilter_cb = accounts__manager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Accounts__Manager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (accounts__manager_timerevent_isbase) {
            accounts__manager_timerevent_isbase = false;
            Accounts__Manager::timerEvent(event);
            return;
        }
        auto timerevent_cb = accounts__manager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Accounts__Manager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (accounts__manager_childevent_isbase) {
            accounts__manager_childevent_isbase = false;
            Accounts__Manager::childEvent(event);
            return;
        }
        auto childevent_cb = accounts__manager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Accounts__Manager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (accounts__manager_customevent_isbase) {
            accounts__manager_customevent_isbase = false;
            Accounts__Manager::customEvent(event);
            return;
        }
        auto customevent_cb = accounts__manager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Accounts__Manager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (accounts__manager_connectnotify_isbase) {
            accounts__manager_connectnotify_isbase = false;
            Accounts__Manager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = accounts__manager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Accounts__Manager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (accounts__manager_disconnectnotify_isbase) {
            accounts__manager_disconnectnotify_isbase = false;
            Accounts__Manager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = accounts__manager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Accounts__Manager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (accounts__manager_sender_isbase) {
            accounts__manager_sender_isbase = false;
            return Accounts__Manager::sender();
        }
        auto sender_cb = accounts__manager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Accounts__Manager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (accounts__manager_sendersignalindex_isbase) {
            accounts__manager_sendersignalindex_isbase = false;
            return Accounts__Manager::senderSignalIndex();
        }
        auto sendersignalindex_cb = accounts__manager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Accounts__Manager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (accounts__manager_receivers_isbase) {
            accounts__manager_receivers_isbase = false;
            return Accounts__Manager::receivers(signal);
        }
        auto receivers_cb = accounts__manager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Accounts__Manager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (accounts__manager_issignalconnected_isbase) {
            accounts__manager_issignalconnected_isbase = false;
            return Accounts__Manager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = accounts__manager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Accounts__Manager::isSignalConnected(signal);
    }

    // Friend functions
    friend void Accounts__Manager_TimerEvent(Accounts::Manager* self, QTimerEvent* event);
    friend void Accounts__Manager_SuperTimerEvent(Accounts::Manager* self, QTimerEvent* event);
    friend void Accounts__Manager_ChildEvent(Accounts::Manager* self, QChildEvent* event);
    friend void Accounts__Manager_SuperChildEvent(Accounts::Manager* self, QChildEvent* event);
    friend void Accounts__Manager_CustomEvent(Accounts::Manager* self, QEvent* event);
    friend void Accounts__Manager_SuperCustomEvent(Accounts::Manager* self, QEvent* event);
    friend void Accounts__Manager_ConnectNotify(Accounts::Manager* self, const QMetaMethod* signal);
    friend void Accounts__Manager_SuperConnectNotify(Accounts::Manager* self, const QMetaMethod* signal);
    friend void Accounts__Manager_DisconnectNotify(Accounts::Manager* self, const QMetaMethod* signal);
    friend void Accounts__Manager_SuperDisconnectNotify(Accounts::Manager* self, const QMetaMethod* signal);
    friend QObject* Accounts__Manager_Sender(const Accounts::Manager* self);
    friend QObject* Accounts__Manager_SuperSender(const Accounts::Manager* self);
    friend int Accounts__Manager_SenderSignalIndex(const Accounts::Manager* self);
    friend int Accounts__Manager_SuperSenderSignalIndex(const Accounts::Manager* self);
    friend int Accounts__Manager_Receivers(const Accounts::Manager* self, const char* signal);
    friend int Accounts__Manager_SuperReceivers(const Accounts::Manager* self, const char* signal);
    friend bool Accounts__Manager_IsSignalConnected(const Accounts::Manager* self, const QMetaMethod* signal);
    friend bool Accounts__Manager_SuperIsSignalConnected(const Accounts::Manager* self, const QMetaMethod* signal);
};

#endif
