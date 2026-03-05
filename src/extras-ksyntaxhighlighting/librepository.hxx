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
    using KSyntaxHighlighting__Repository_MetaObject_Callback = QMetaObject* (*)();
    using KSyntaxHighlighting__Repository_Metacast_Callback = void* (*)(KSyntaxHighlighting__Repository*, const char*);
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
    KSyntaxHighlighting__Repository_MetaObject_Callback ksyntaxhighlighting__repository_metaobject_callback = nullptr;
    KSyntaxHighlighting__Repository_Metacast_Callback ksyntaxhighlighting__repository_metacast_callback = nullptr;
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
    mutable bool ksyntaxhighlighting__repository_metaobject_isbase = false;
    mutable bool ksyntaxhighlighting__repository_metacast_isbase = false;
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

    // Callback setters
    inline void setKSyntaxHighlighting__Repository_MetaObject_Callback(KSyntaxHighlighting__Repository_MetaObject_Callback cb) { ksyntaxhighlighting__repository_metaobject_callback = cb; }
    inline void setKSyntaxHighlighting__Repository_Metacast_Callback(KSyntaxHighlighting__Repository_Metacast_Callback cb) { ksyntaxhighlighting__repository_metacast_callback = cb; }
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
    inline void setKSyntaxHighlighting__Repository_MetaObject_IsBase(bool value) const { ksyntaxhighlighting__repository_metaobject_isbase = value; }
    inline void setKSyntaxHighlighting__Repository_Metacast_IsBase(bool value) const { ksyntaxhighlighting__repository_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (ksyntaxhighlighting__repository_metaobject_isbase) {
            ksyntaxhighlighting__repository_metaobject_isbase = false;
            return KSyntaxHighlighting__Repository::metaObject();
        }
        auto metaobject_cb = ksyntaxhighlighting__repository_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksyntaxhighlighting__repository_metacast_isbase) {
            ksyntaxhighlighting__repository_metacast_isbase = false;
            return KSyntaxHighlighting__Repository::qt_metacast(param1);
        }
        auto metacast_cb = ksyntaxhighlighting__repository_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__repository_metacall_isbase) {
            ksyntaxhighlighting__repository_metacall_isbase = false;
            return KSyntaxHighlighting__Repository::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ksyntaxhighlighting__repository_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__Repository::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__repository_event_isbase) {
            ksyntaxhighlighting__repository_event_isbase = false;
            return KSyntaxHighlighting__Repository::event(event);
        }
        auto event_cb = ksyntaxhighlighting__repository_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__repository_eventfilter_isbase) {
            ksyntaxhighlighting__repository_eventfilter_isbase = false;
            return KSyntaxHighlighting__Repository::eventFilter(watched, event);
        }
        auto eventfilter_cb = ksyntaxhighlighting__repository_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__repository_timerevent_isbase) {
            ksyntaxhighlighting__repository_timerevent_isbase = false;
            KSyntaxHighlighting__Repository::timerEvent(event);
            return;
        }
        auto timerevent_cb = ksyntaxhighlighting__repository_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__repository_childevent_isbase) {
            ksyntaxhighlighting__repository_childevent_isbase = false;
            KSyntaxHighlighting__Repository::childEvent(event);
            return;
        }
        auto childevent_cb = ksyntaxhighlighting__repository_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__repository_customevent_isbase) {
            ksyntaxhighlighting__repository_customevent_isbase = false;
            KSyntaxHighlighting__Repository::customEvent(event);
            return;
        }
        auto customevent_cb = ksyntaxhighlighting__repository_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__repository_connectnotify_isbase) {
            ksyntaxhighlighting__repository_connectnotify_isbase = false;
            KSyntaxHighlighting__Repository::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ksyntaxhighlighting__repository_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__repository_disconnectnotify_isbase) {
            ksyntaxhighlighting__repository_disconnectnotify_isbase = false;
            KSyntaxHighlighting__Repository::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ksyntaxhighlighting__repository_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksyntaxhighlighting__repository_sender_isbase) {
            ksyntaxhighlighting__repository_sender_isbase = false;
            return KSyntaxHighlighting__Repository::sender();
        }
        auto sender_cb = ksyntaxhighlighting__repository_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksyntaxhighlighting__repository_sendersignalindex_isbase) {
            ksyntaxhighlighting__repository_sendersignalindex_isbase = false;
            return KSyntaxHighlighting__Repository::senderSignalIndex();
        }
        auto sendersignalindex_cb = ksyntaxhighlighting__repository_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__Repository::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksyntaxhighlighting__repository_receivers_isbase) {
            ksyntaxhighlighting__repository_receivers_isbase = false;
            return KSyntaxHighlighting__Repository::receivers(signal);
        }
        auto receivers_cb = ksyntaxhighlighting__repository_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__Repository::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksyntaxhighlighting__repository_issignalconnected_isbase) {
            ksyntaxhighlighting__repository_issignalconnected_isbase = false;
            return KSyntaxHighlighting__Repository::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ksyntaxhighlighting__repository_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::isSignalConnected(signal);
    }

    // Friend functions
    friend void KSyntaxHighlighting__Repository_TimerEvent(KSyntaxHighlighting::Repository* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__Repository_SuperTimerEvent(KSyntaxHighlighting::Repository* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__Repository_ChildEvent(KSyntaxHighlighting::Repository* self, QChildEvent* event);
    friend void KSyntaxHighlighting__Repository_SuperChildEvent(KSyntaxHighlighting::Repository* self, QChildEvent* event);
    friend void KSyntaxHighlighting__Repository_CustomEvent(KSyntaxHighlighting::Repository* self, QEvent* event);
    friend void KSyntaxHighlighting__Repository_SuperCustomEvent(KSyntaxHighlighting::Repository* self, QEvent* event);
    friend void KSyntaxHighlighting__Repository_ConnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_SuperConnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_DisconnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_SuperDisconnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend QObject* KSyntaxHighlighting__Repository_Sender(const KSyntaxHighlighting::Repository* self);
    friend QObject* KSyntaxHighlighting__Repository_SuperSender(const KSyntaxHighlighting::Repository* self);
    friend int KSyntaxHighlighting__Repository_SenderSignalIndex(const KSyntaxHighlighting::Repository* self);
    friend int KSyntaxHighlighting__Repository_SuperSenderSignalIndex(const KSyntaxHighlighting::Repository* self);
    friend int KSyntaxHighlighting__Repository_Receivers(const KSyntaxHighlighting::Repository* self, const char* signal);
    friend int KSyntaxHighlighting__Repository_SuperReceivers(const KSyntaxHighlighting::Repository* self, const char* signal);
    friend bool KSyntaxHighlighting__Repository_IsSignalConnected(const KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend bool KSyntaxHighlighting__Repository_SuperIsSignalConnected(const KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
};

#endif
