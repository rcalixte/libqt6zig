#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBVIRTUALREPOSITORY_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBVIRTUALREPOSITORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSyntaxHighlighting::Repository so that we can call protected methods
class VirtualKSyntaxHighlightingRepository final : public KSyntaxHighlighting::Repository {

  public:
    // Virtual class boolean flag
    bool isVirtualKSyntaxHighlightingRepository = true;

    // Virtual class public types (including callbacks)
    using KSyntaxHighlighting__Repository_Metacall_Callback = int (*)(KSyntaxHighlighting__Repository*, int, int, void**);
    using KSyntaxHighlighting__Repository_Event_Callback = bool (*)(KSyntaxHighlighting__Repository*, QEvent*);
    using KSyntaxHighlighting__Repository_EventFilter_Callback = bool (*)(KSyntaxHighlighting__Repository*, QObject*, QEvent*);
    using KSyntaxHighlighting__Repository_TimerEvent_Callback = void (*)(KSyntaxHighlighting__Repository*, QTimerEvent*);
    using KSyntaxHighlighting__Repository_ChildEvent_Callback = void (*)(KSyntaxHighlighting__Repository*, QChildEvent*);
    using KSyntaxHighlighting__Repository_CustomEvent_Callback = void (*)(KSyntaxHighlighting__Repository*, QEvent*);
    using KSyntaxHighlighting__Repository_ConnectNotify_Callback = void (*)(KSyntaxHighlighting__Repository*, QMetaMethod*);
    using KSyntaxHighlighting__Repository_DisconnectNotify_Callback = void (*)(KSyntaxHighlighting__Repository*, QMetaMethod*);
    using KSyntaxHighlighting__Repository_Sender_Callback = QObject* (*)();
    using KSyntaxHighlighting__Repository_SenderSignalIndex_Callback = int (*)();
    using KSyntaxHighlighting__Repository_Receivers_Callback = int (*)(const KSyntaxHighlighting__Repository*, const char*);
    using KSyntaxHighlighting__Repository_IsSignalConnected_Callback = bool (*)(const KSyntaxHighlighting__Repository*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSyntaxHighlighting__Repository_Metacall_Callback ksyntaxhighlighting__repository_metacall_callback = nullptr;
    KSyntaxHighlighting__Repository_Event_Callback ksyntaxhighlighting__repository_event_callback = nullptr;
    KSyntaxHighlighting__Repository_EventFilter_Callback ksyntaxhighlighting__repository_eventfilter_callback = nullptr;
    KSyntaxHighlighting__Repository_TimerEvent_Callback ksyntaxhighlighting__repository_timerevent_callback = nullptr;
    KSyntaxHighlighting__Repository_ChildEvent_Callback ksyntaxhighlighting__repository_childevent_callback = nullptr;
    KSyntaxHighlighting__Repository_CustomEvent_Callback ksyntaxhighlighting__repository_customevent_callback = nullptr;
    KSyntaxHighlighting__Repository_ConnectNotify_Callback ksyntaxhighlighting__repository_connectnotify_callback = nullptr;
    KSyntaxHighlighting__Repository_DisconnectNotify_Callback ksyntaxhighlighting__repository_disconnectnotify_callback = nullptr;
    KSyntaxHighlighting__Repository_Sender_Callback ksyntaxhighlighting__repository_sender_callback = nullptr;
    KSyntaxHighlighting__Repository_SenderSignalIndex_Callback ksyntaxhighlighting__repository_sendersignalindex_callback = nullptr;
    KSyntaxHighlighting__Repository_Receivers_Callback ksyntaxhighlighting__repository_receivers_callback = nullptr;
    KSyntaxHighlighting__Repository_IsSignalConnected_Callback ksyntaxhighlighting__repository_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksyntaxhighlighting__repository_metacall_isbase = false;
    mutable bool ksyntaxhighlighting__repository_event_isbase = false;
    mutable bool ksyntaxhighlighting__repository_eventfilter_isbase = false;
    mutable bool ksyntaxhighlighting__repository_timerevent_isbase = false;
    mutable bool ksyntaxhighlighting__repository_childevent_isbase = false;
    mutable bool ksyntaxhighlighting__repository_customevent_isbase = false;
    mutable bool ksyntaxhighlighting__repository_connectnotify_isbase = false;
    mutable bool ksyntaxhighlighting__repository_disconnectnotify_isbase = false;
    mutable bool ksyntaxhighlighting__repository_sender_isbase = false;
    mutable bool ksyntaxhighlighting__repository_sendersignalindex_isbase = false;
    mutable bool ksyntaxhighlighting__repository_receivers_isbase = false;
    mutable bool ksyntaxhighlighting__repository_issignalconnected_isbase = false;

  public:
    VirtualKSyntaxHighlightingRepository() : KSyntaxHighlighting::Repository() {};

    ~VirtualKSyntaxHighlightingRepository() {
        ksyntaxhighlighting__repository_metacall_callback = nullptr;
        ksyntaxhighlighting__repository_event_callback = nullptr;
        ksyntaxhighlighting__repository_eventfilter_callback = nullptr;
        ksyntaxhighlighting__repository_timerevent_callback = nullptr;
        ksyntaxhighlighting__repository_childevent_callback = nullptr;
        ksyntaxhighlighting__repository_customevent_callback = nullptr;
        ksyntaxhighlighting__repository_connectnotify_callback = nullptr;
        ksyntaxhighlighting__repository_disconnectnotify_callback = nullptr;
        ksyntaxhighlighting__repository_sender_callback = nullptr;
        ksyntaxhighlighting__repository_sendersignalindex_callback = nullptr;
        ksyntaxhighlighting__repository_receivers_callback = nullptr;
        ksyntaxhighlighting__repository_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSyntaxHighlighting__Repository_Metacall_Callback(KSyntaxHighlighting__Repository_Metacall_Callback cb) { ksyntaxhighlighting__repository_metacall_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_Event_Callback(KSyntaxHighlighting__Repository_Event_Callback cb) { ksyntaxhighlighting__repository_event_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_EventFilter_Callback(KSyntaxHighlighting__Repository_EventFilter_Callback cb) { ksyntaxhighlighting__repository_eventfilter_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_TimerEvent_Callback(KSyntaxHighlighting__Repository_TimerEvent_Callback cb) { ksyntaxhighlighting__repository_timerevent_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_ChildEvent_Callback(KSyntaxHighlighting__Repository_ChildEvent_Callback cb) { ksyntaxhighlighting__repository_childevent_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_CustomEvent_Callback(KSyntaxHighlighting__Repository_CustomEvent_Callback cb) { ksyntaxhighlighting__repository_customevent_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_ConnectNotify_Callback(KSyntaxHighlighting__Repository_ConnectNotify_Callback cb) { ksyntaxhighlighting__repository_connectnotify_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_DisconnectNotify_Callback(KSyntaxHighlighting__Repository_DisconnectNotify_Callback cb) { ksyntaxhighlighting__repository_disconnectnotify_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_Sender_Callback(KSyntaxHighlighting__Repository_Sender_Callback cb) { ksyntaxhighlighting__repository_sender_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_SenderSignalIndex_Callback(KSyntaxHighlighting__Repository_SenderSignalIndex_Callback cb) { ksyntaxhighlighting__repository_sendersignalindex_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_Receivers_Callback(KSyntaxHighlighting__Repository_Receivers_Callback cb) { ksyntaxhighlighting__repository_receivers_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_IsSignalConnected_Callback(KSyntaxHighlighting__Repository_IsSignalConnected_Callback cb) { ksyntaxhighlighting__repository_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSyntaxHighlighting__Repository_Metacall_IsBase(bool value) const { ksyntaxhighlighting__repository_metacall_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_Event_IsBase(bool value) const { ksyntaxhighlighting__repository_event_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_EventFilter_IsBase(bool value) const { ksyntaxhighlighting__repository_eventfilter_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_TimerEvent_IsBase(bool value) const { ksyntaxhighlighting__repository_timerevent_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_ChildEvent_IsBase(bool value) const { ksyntaxhighlighting__repository_childevent_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_CustomEvent_IsBase(bool value) const { ksyntaxhighlighting__repository_customevent_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_ConnectNotify_IsBase(bool value) const { ksyntaxhighlighting__repository_connectnotify_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_DisconnectNotify_IsBase(bool value) const { ksyntaxhighlighting__repository_disconnectnotify_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_Sender_IsBase(bool value) const { ksyntaxhighlighting__repository_sender_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_SenderSignalIndex_IsBase(bool value) const { ksyntaxhighlighting__repository_sendersignalindex_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_Receivers_IsBase(bool value) const { ksyntaxhighlighting__repository_receivers_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_IsSignalConnected_IsBase(bool value) const { ksyntaxhighlighting__repository_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__repository_metacall_isbase) {
            ksyntaxhighlighting__repository_metacall_isbase = false;
            return KSyntaxHighlighting__Repository::qt_metacall(param1, param2, param3);
        } else if (ksyntaxhighlighting__repository_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksyntaxhighlighting__repository_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSyntaxHighlighting__Repository::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__repository_event_isbase) {
            ksyntaxhighlighting__repository_event_isbase = false;
            return KSyntaxHighlighting__Repository::event(event);
        } else if (ksyntaxhighlighting__repository_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksyntaxhighlighting__repository_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSyntaxHighlighting__Repository::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__repository_eventfilter_isbase) {
            ksyntaxhighlighting__repository_eventfilter_isbase = false;
            return KSyntaxHighlighting__Repository::eventFilter(watched, event);
        } else if (ksyntaxhighlighting__repository_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ksyntaxhighlighting__repository_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSyntaxHighlighting__Repository::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__repository_timerevent_isbase) {
            ksyntaxhighlighting__repository_timerevent_isbase = false;
            KSyntaxHighlighting__Repository::timerEvent(event);
        } else if (ksyntaxhighlighting__repository_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksyntaxhighlighting__repository_timerevent_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__Repository::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__repository_childevent_isbase) {
            ksyntaxhighlighting__repository_childevent_isbase = false;
            KSyntaxHighlighting__Repository::childEvent(event);
        } else if (ksyntaxhighlighting__repository_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksyntaxhighlighting__repository_childevent_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__Repository::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__repository_customevent_isbase) {
            ksyntaxhighlighting__repository_customevent_isbase = false;
            KSyntaxHighlighting__Repository::customEvent(event);
        } else if (ksyntaxhighlighting__repository_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksyntaxhighlighting__repository_customevent_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__Repository::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__repository_connectnotify_isbase) {
            ksyntaxhighlighting__repository_connectnotify_isbase = false;
            KSyntaxHighlighting__Repository::connectNotify(signal);
        } else if (ksyntaxhighlighting__repository_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksyntaxhighlighting__repository_connectnotify_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__Repository::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__repository_disconnectnotify_isbase) {
            ksyntaxhighlighting__repository_disconnectnotify_isbase = false;
            KSyntaxHighlighting__Repository::disconnectNotify(signal);
        } else if (ksyntaxhighlighting__repository_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksyntaxhighlighting__repository_disconnectnotify_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__Repository::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksyntaxhighlighting__repository_sender_isbase) {
            ksyntaxhighlighting__repository_sender_isbase = false;
            return KSyntaxHighlighting__Repository::sender();
        } else if (ksyntaxhighlighting__repository_sender_callback != nullptr) {
            QObject* callback_ret = ksyntaxhighlighting__repository_sender_callback();
            return callback_ret;
        } else {
            return KSyntaxHighlighting__Repository::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksyntaxhighlighting__repository_sendersignalindex_isbase) {
            ksyntaxhighlighting__repository_sendersignalindex_isbase = false;
            return KSyntaxHighlighting__Repository::senderSignalIndex();
        } else if (ksyntaxhighlighting__repository_sendersignalindex_callback != nullptr) {
            int callback_ret = ksyntaxhighlighting__repository_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSyntaxHighlighting__Repository::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksyntaxhighlighting__repository_receivers_isbase) {
            ksyntaxhighlighting__repository_receivers_isbase = false;
            return KSyntaxHighlighting__Repository::receivers(signal);
        } else if (ksyntaxhighlighting__repository_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksyntaxhighlighting__repository_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSyntaxHighlighting__Repository::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksyntaxhighlighting__repository_issignalconnected_isbase) {
            ksyntaxhighlighting__repository_issignalconnected_isbase = false;
            return KSyntaxHighlighting__Repository::isSignalConnected(signal);
        } else if (ksyntaxhighlighting__repository_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksyntaxhighlighting__repository_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSyntaxHighlighting__Repository::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSyntaxHighlighting__Repository_TimerEvent(KSyntaxHighlighting::Repository* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__Repository_QBaseTimerEvent(KSyntaxHighlighting::Repository* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__Repository_ChildEvent(KSyntaxHighlighting::Repository* self, QChildEvent* event);
    friend void KSyntaxHighlighting__Repository_QBaseChildEvent(KSyntaxHighlighting::Repository* self, QChildEvent* event);
    friend void KSyntaxHighlighting__Repository_CustomEvent(KSyntaxHighlighting::Repository* self, QEvent* event);
    friend void KSyntaxHighlighting__Repository_QBaseCustomEvent(KSyntaxHighlighting::Repository* self, QEvent* event);
    friend void KSyntaxHighlighting__Repository_ConnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_QBaseConnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_DisconnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_QBaseDisconnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend QObject* KSyntaxHighlighting__Repository_Sender(const KSyntaxHighlighting::Repository* self);
    friend QObject* KSyntaxHighlighting__Repository_QBaseSender(const KSyntaxHighlighting::Repository* self);
    friend int KSyntaxHighlighting__Repository_SenderSignalIndex(const KSyntaxHighlighting::Repository* self);
    friend int KSyntaxHighlighting__Repository_QBaseSenderSignalIndex(const KSyntaxHighlighting::Repository* self);
    friend int KSyntaxHighlighting__Repository_Receivers(const KSyntaxHighlighting::Repository* self, const char* signal);
    friend int KSyntaxHighlighting__Repository_QBaseReceivers(const KSyntaxHighlighting::Repository* self, const char* signal);
    friend bool KSyntaxHighlighting__Repository_IsSignalConnected(const KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend bool KSyntaxHighlighting__Repository_QBaseIsSignalConnected(const KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
};

#endif
