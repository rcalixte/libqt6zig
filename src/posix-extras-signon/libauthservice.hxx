#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONC_LIBVIRTUALAUTHSERVICE_H
#define SRC_POSIX_EXTRAS_SIGNONC_LIBVIRTUALAUTHSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of SignOn::AuthService so that we can call protected methods
class VirtualSignOnAuthService final : public SignOn::AuthService {

  public:
    // Virtual class boolean flag
    bool isVirtualSignOnAuthService = true;

    // Virtual class public types (including callbacks)
    using SignOn__AuthService_MetaObject_Callback = QMetaObject* (*)();
    using SignOn__AuthService_Metacast_Callback = void* (*)(SignOn__AuthService*, const char*);
    using SignOn__AuthService_Metacall_Callback = int (*)(SignOn__AuthService*, int, int, void**);
    using SignOn__AuthService_Event_Callback = bool (*)(SignOn__AuthService*, QEvent*);
    using SignOn__AuthService_EventFilter_Callback = bool (*)(SignOn__AuthService*, QObject*, QEvent*);
    using SignOn__AuthService_TimerEvent_Callback = void (*)(SignOn__AuthService*, QTimerEvent*);
    using SignOn__AuthService_ChildEvent_Callback = void (*)(SignOn__AuthService*, QChildEvent*);
    using SignOn__AuthService_CustomEvent_Callback = void (*)(SignOn__AuthService*, QEvent*);
    using SignOn__AuthService_ConnectNotify_Callback = void (*)(SignOn__AuthService*, QMetaMethod*);
    using SignOn__AuthService_DisconnectNotify_Callback = void (*)(SignOn__AuthService*, QMetaMethod*);
    using SignOn__AuthService_Sender_Callback = QObject* (*)();
    using SignOn__AuthService_SenderSignalIndex_Callback = int (*)();
    using SignOn__AuthService_Receivers_Callback = int (*)(const SignOn__AuthService*, const char*);
    using SignOn__AuthService_IsSignalConnected_Callback = bool (*)(const SignOn__AuthService*, QMetaMethod*);

  protected:
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
    SignOn__AuthService_Sender_Callback signon__authservice_sender_callback = nullptr;
    SignOn__AuthService_SenderSignalIndex_Callback signon__authservice_sendersignalindex_callback = nullptr;
    SignOn__AuthService_Receivers_Callback signon__authservice_receivers_callback = nullptr;
    SignOn__AuthService_IsSignalConnected_Callback signon__authservice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool signon__authservice_metaobject_isbase = false;
    mutable bool signon__authservice_metacast_isbase = false;
    mutable bool signon__authservice_metacall_isbase = false;
    mutable bool signon__authservice_event_isbase = false;
    mutable bool signon__authservice_eventfilter_isbase = false;
    mutable bool signon__authservice_timerevent_isbase = false;
    mutable bool signon__authservice_childevent_isbase = false;
    mutable bool signon__authservice_customevent_isbase = false;
    mutable bool signon__authservice_connectnotify_isbase = false;
    mutable bool signon__authservice_disconnectnotify_isbase = false;
    mutable bool signon__authservice_sender_isbase = false;
    mutable bool signon__authservice_sendersignalindex_isbase = false;
    mutable bool signon__authservice_receivers_isbase = false;
    mutable bool signon__authservice_issignalconnected_isbase = false;

  public:
    VirtualSignOnAuthService() : SignOn::AuthService() {};
    VirtualSignOnAuthService(QObject* parent) : SignOn::AuthService(parent) {};

    ~VirtualSignOnAuthService() {
        signon__authservice_metaobject_callback = nullptr;
        signon__authservice_metacast_callback = nullptr;
        signon__authservice_metacall_callback = nullptr;
        signon__authservice_event_callback = nullptr;
        signon__authservice_eventfilter_callback = nullptr;
        signon__authservice_timerevent_callback = nullptr;
        signon__authservice_childevent_callback = nullptr;
        signon__authservice_customevent_callback = nullptr;
        signon__authservice_connectnotify_callback = nullptr;
        signon__authservice_disconnectnotify_callback = nullptr;
        signon__authservice_sender_callback = nullptr;
        signon__authservice_sendersignalindex_callback = nullptr;
        signon__authservice_receivers_callback = nullptr;
        signon__authservice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setSignOn__AuthService_MetaObject_Callback(SignOn__AuthService_MetaObject_Callback cb) { signon__authservice_metaobject_callback = cb; }
    inline void setSignOn__AuthService_Metacast_Callback(SignOn__AuthService_Metacast_Callback cb) { signon__authservice_metacast_callback = cb; }
    inline void setSignOn__AuthService_Metacall_Callback(SignOn__AuthService_Metacall_Callback cb) { signon__authservice_metacall_callback = cb; }
    inline void setSignOn__AuthService_Event_Callback(SignOn__AuthService_Event_Callback cb) { signon__authservice_event_callback = cb; }
    inline void setSignOn__AuthService_EventFilter_Callback(SignOn__AuthService_EventFilter_Callback cb) { signon__authservice_eventfilter_callback = cb; }
    inline void setSignOn__AuthService_TimerEvent_Callback(SignOn__AuthService_TimerEvent_Callback cb) { signon__authservice_timerevent_callback = cb; }
    inline void setSignOn__AuthService_ChildEvent_Callback(SignOn__AuthService_ChildEvent_Callback cb) { signon__authservice_childevent_callback = cb; }
    inline void setSignOn__AuthService_CustomEvent_Callback(SignOn__AuthService_CustomEvent_Callback cb) { signon__authservice_customevent_callback = cb; }
    inline void setSignOn__AuthService_ConnectNotify_Callback(SignOn__AuthService_ConnectNotify_Callback cb) { signon__authservice_connectnotify_callback = cb; }
    inline void setSignOn__AuthService_DisconnectNotify_Callback(SignOn__AuthService_DisconnectNotify_Callback cb) { signon__authservice_disconnectnotify_callback = cb; }
    inline void setSignOn__AuthService_Sender_Callback(SignOn__AuthService_Sender_Callback cb) { signon__authservice_sender_callback = cb; }
    inline void setSignOn__AuthService_SenderSignalIndex_Callback(SignOn__AuthService_SenderSignalIndex_Callback cb) { signon__authservice_sendersignalindex_callback = cb; }
    inline void setSignOn__AuthService_Receivers_Callback(SignOn__AuthService_Receivers_Callback cb) { signon__authservice_receivers_callback = cb; }
    inline void setSignOn__AuthService_IsSignalConnected_Callback(SignOn__AuthService_IsSignalConnected_Callback cb) { signon__authservice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setSignOn__AuthService_MetaObject_IsBase(bool value) const { signon__authservice_metaobject_isbase = value; }
    inline void setSignOn__AuthService_Metacast_IsBase(bool value) const { signon__authservice_metacast_isbase = value; }
    inline void setSignOn__AuthService_Metacall_IsBase(bool value) const { signon__authservice_metacall_isbase = value; }
    inline void setSignOn__AuthService_Event_IsBase(bool value) const { signon__authservice_event_isbase = value; }
    inline void setSignOn__AuthService_EventFilter_IsBase(bool value) const { signon__authservice_eventfilter_isbase = value; }
    inline void setSignOn__AuthService_TimerEvent_IsBase(bool value) const { signon__authservice_timerevent_isbase = value; }
    inline void setSignOn__AuthService_ChildEvent_IsBase(bool value) const { signon__authservice_childevent_isbase = value; }
    inline void setSignOn__AuthService_CustomEvent_IsBase(bool value) const { signon__authservice_customevent_isbase = value; }
    inline void setSignOn__AuthService_ConnectNotify_IsBase(bool value) const { signon__authservice_connectnotify_isbase = value; }
    inline void setSignOn__AuthService_DisconnectNotify_IsBase(bool value) const { signon__authservice_disconnectnotify_isbase = value; }
    inline void setSignOn__AuthService_Sender_IsBase(bool value) const { signon__authservice_sender_isbase = value; }
    inline void setSignOn__AuthService_SenderSignalIndex_IsBase(bool value) const { signon__authservice_sendersignalindex_isbase = value; }
    inline void setSignOn__AuthService_Receivers_IsBase(bool value) const { signon__authservice_receivers_isbase = value; }
    inline void setSignOn__AuthService_IsSignalConnected_IsBase(bool value) const { signon__authservice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (signon__authservice_metaobject_isbase) {
            signon__authservice_metaobject_isbase = false;
            return SignOn__AuthService::metaObject();
        } else if (signon__authservice_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = signon__authservice_metaobject_callback();
            return callback_ret;
        } else {
            return SignOn__AuthService::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (signon__authservice_metacast_isbase) {
            signon__authservice_metacast_isbase = false;
            return SignOn__AuthService::qt_metacast(param1);
        } else if (signon__authservice_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = signon__authservice_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return SignOn__AuthService::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (signon__authservice_metacall_isbase) {
            signon__authservice_metacall_isbase = false;
            return SignOn__AuthService::qt_metacall(param1, param2, param3);
        } else if (signon__authservice_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = signon__authservice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return SignOn__AuthService::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (signon__authservice_event_isbase) {
            signon__authservice_event_isbase = false;
            return SignOn__AuthService::event(event);
        } else if (signon__authservice_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = signon__authservice_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return SignOn__AuthService::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (signon__authservice_eventfilter_isbase) {
            signon__authservice_eventfilter_isbase = false;
            return SignOn__AuthService::eventFilter(watched, event);
        } else if (signon__authservice_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = signon__authservice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return SignOn__AuthService::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (signon__authservice_timerevent_isbase) {
            signon__authservice_timerevent_isbase = false;
            SignOn__AuthService::timerEvent(event);
        } else if (signon__authservice_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            signon__authservice_timerevent_callback(this, cbval1);
        } else {
            SignOn__AuthService::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (signon__authservice_childevent_isbase) {
            signon__authservice_childevent_isbase = false;
            SignOn__AuthService::childEvent(event);
        } else if (signon__authservice_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            signon__authservice_childevent_callback(this, cbval1);
        } else {
            SignOn__AuthService::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (signon__authservice_customevent_isbase) {
            signon__authservice_customevent_isbase = false;
            SignOn__AuthService::customEvent(event);
        } else if (signon__authservice_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            signon__authservice_customevent_callback(this, cbval1);
        } else {
            SignOn__AuthService::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (signon__authservice_connectnotify_isbase) {
            signon__authservice_connectnotify_isbase = false;
            SignOn__AuthService::connectNotify(signal);
        } else if (signon__authservice_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            signon__authservice_connectnotify_callback(this, cbval1);
        } else {
            SignOn__AuthService::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (signon__authservice_disconnectnotify_isbase) {
            signon__authservice_disconnectnotify_isbase = false;
            SignOn__AuthService::disconnectNotify(signal);
        } else if (signon__authservice_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            signon__authservice_disconnectnotify_callback(this, cbval1);
        } else {
            SignOn__AuthService::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (signon__authservice_sender_isbase) {
            signon__authservice_sender_isbase = false;
            return SignOn__AuthService::sender();
        } else if (signon__authservice_sender_callback != nullptr) {
            QObject* callback_ret = signon__authservice_sender_callback();
            return callback_ret;
        } else {
            return SignOn__AuthService::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (signon__authservice_sendersignalindex_isbase) {
            signon__authservice_sendersignalindex_isbase = false;
            return SignOn__AuthService::senderSignalIndex();
        } else if (signon__authservice_sendersignalindex_callback != nullptr) {
            int callback_ret = signon__authservice_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return SignOn__AuthService::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (signon__authservice_receivers_isbase) {
            signon__authservice_receivers_isbase = false;
            return SignOn__AuthService::receivers(signal);
        } else if (signon__authservice_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = signon__authservice_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return SignOn__AuthService::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (signon__authservice_issignalconnected_isbase) {
            signon__authservice_issignalconnected_isbase = false;
            return SignOn__AuthService::isSignalConnected(signal);
        } else if (signon__authservice_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = signon__authservice_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return SignOn__AuthService::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void SignOn__AuthService_TimerEvent(SignOn::AuthService* self, QTimerEvent* event);
    friend void SignOn__AuthService_QBaseTimerEvent(SignOn::AuthService* self, QTimerEvent* event);
    friend void SignOn__AuthService_ChildEvent(SignOn::AuthService* self, QChildEvent* event);
    friend void SignOn__AuthService_QBaseChildEvent(SignOn::AuthService* self, QChildEvent* event);
    friend void SignOn__AuthService_CustomEvent(SignOn::AuthService* self, QEvent* event);
    friend void SignOn__AuthService_QBaseCustomEvent(SignOn::AuthService* self, QEvent* event);
    friend void SignOn__AuthService_ConnectNotify(SignOn::AuthService* self, const QMetaMethod* signal);
    friend void SignOn__AuthService_QBaseConnectNotify(SignOn::AuthService* self, const QMetaMethod* signal);
    friend void SignOn__AuthService_DisconnectNotify(SignOn::AuthService* self, const QMetaMethod* signal);
    friend void SignOn__AuthService_QBaseDisconnectNotify(SignOn::AuthService* self, const QMetaMethod* signal);
    friend QObject* SignOn__AuthService_Sender(const SignOn::AuthService* self);
    friend QObject* SignOn__AuthService_QBaseSender(const SignOn::AuthService* self);
    friend int SignOn__AuthService_SenderSignalIndex(const SignOn::AuthService* self);
    friend int SignOn__AuthService_QBaseSenderSignalIndex(const SignOn::AuthService* self);
    friend int SignOn__AuthService_Receivers(const SignOn::AuthService* self, const char* signal);
    friend int SignOn__AuthService_QBaseReceivers(const SignOn::AuthService* self, const char* signal);
    friend bool SignOn__AuthService_IsSignalConnected(const SignOn::AuthService* self, const QMetaMethod* signal);
    friend bool SignOn__AuthService_QBaseIsSignalConnected(const SignOn::AuthService* self, const QMetaMethod* signal);
};

#endif
