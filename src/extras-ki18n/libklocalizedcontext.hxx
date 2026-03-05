#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDCONTEXT_H
#define SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedContext so that we can call protected methods
class VirtualKLocalizedContext final : public KLocalizedContext {

  public:
    // Virtual class boolean flag
    bool isVirtualKLocalizedContext = true;

    // Virtual class public types (including callbacks)
    using KLocalizedContext_MetaObject_Callback = QMetaObject* (*)();
    using KLocalizedContext_Metacast_Callback = void* (*)(KLocalizedContext*, const char*);
    using KLocalizedContext_Metacall_Callback = int (*)(KLocalizedContext*, int, int, void**);
    using KLocalizedContext_Event_Callback = bool (*)(KLocalizedContext*, QEvent*);
    using KLocalizedContext_EventFilter_Callback = bool (*)(KLocalizedContext*, QObject*, QEvent*);
    using KLocalizedContext_TimerEvent_Callback = void (*)(KLocalizedContext*, QTimerEvent*);
    using KLocalizedContext_ChildEvent_Callback = void (*)(KLocalizedContext*, QChildEvent*);
    using KLocalizedContext_CustomEvent_Callback = void (*)(KLocalizedContext*, QEvent*);
    using KLocalizedContext_ConnectNotify_Callback = void (*)(KLocalizedContext*, QMetaMethod*);
    using KLocalizedContext_DisconnectNotify_Callback = void (*)(KLocalizedContext*, QMetaMethod*);
    using KLocalizedContext_Sender_Callback = QObject* (*)();
    using KLocalizedContext_SenderSignalIndex_Callback = int (*)();
    using KLocalizedContext_Receivers_Callback = int (*)(const KLocalizedContext*, const char*);
    using KLocalizedContext_IsSignalConnected_Callback = bool (*)(const KLocalizedContext*, QMetaMethod*);

  protected:
    // Instance callback storage
    KLocalizedContext_MetaObject_Callback klocalizedcontext_metaobject_callback = nullptr;
    KLocalizedContext_Metacast_Callback klocalizedcontext_metacast_callback = nullptr;
    KLocalizedContext_Metacall_Callback klocalizedcontext_metacall_callback = nullptr;
    KLocalizedContext_Event_Callback klocalizedcontext_event_callback = nullptr;
    KLocalizedContext_EventFilter_Callback klocalizedcontext_eventfilter_callback = nullptr;
    KLocalizedContext_TimerEvent_Callback klocalizedcontext_timerevent_callback = nullptr;
    KLocalizedContext_ChildEvent_Callback klocalizedcontext_childevent_callback = nullptr;
    KLocalizedContext_CustomEvent_Callback klocalizedcontext_customevent_callback = nullptr;
    KLocalizedContext_ConnectNotify_Callback klocalizedcontext_connectnotify_callback = nullptr;
    KLocalizedContext_DisconnectNotify_Callback klocalizedcontext_disconnectnotify_callback = nullptr;
    KLocalizedContext_Sender_Callback klocalizedcontext_sender_callback = nullptr;
    KLocalizedContext_SenderSignalIndex_Callback klocalizedcontext_sendersignalindex_callback = nullptr;
    KLocalizedContext_Receivers_Callback klocalizedcontext_receivers_callback = nullptr;
    KLocalizedContext_IsSignalConnected_Callback klocalizedcontext_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klocalizedcontext_metaobject_isbase = false;
    mutable bool klocalizedcontext_metacast_isbase = false;
    mutable bool klocalizedcontext_metacall_isbase = false;
    mutable bool klocalizedcontext_event_isbase = false;
    mutable bool klocalizedcontext_eventfilter_isbase = false;
    mutable bool klocalizedcontext_timerevent_isbase = false;
    mutable bool klocalizedcontext_childevent_isbase = false;
    mutable bool klocalizedcontext_customevent_isbase = false;
    mutable bool klocalizedcontext_connectnotify_isbase = false;
    mutable bool klocalizedcontext_disconnectnotify_isbase = false;
    mutable bool klocalizedcontext_sender_isbase = false;
    mutable bool klocalizedcontext_sendersignalindex_isbase = false;
    mutable bool klocalizedcontext_receivers_isbase = false;
    mutable bool klocalizedcontext_issignalconnected_isbase = false;

  public:
    VirtualKLocalizedContext() : KLocalizedContext() {};
    VirtualKLocalizedContext(QObject* parent) : KLocalizedContext(parent) {};

    // Callback setters
    inline void setKLocalizedContext_MetaObject_Callback(KLocalizedContext_MetaObject_Callback cb) { klocalizedcontext_metaobject_callback = cb; }
    inline void setKLocalizedContext_Metacast_Callback(KLocalizedContext_Metacast_Callback cb) { klocalizedcontext_metacast_callback = cb; }
    inline void setKLocalizedContext_Metacall_Callback(KLocalizedContext_Metacall_Callback cb) { klocalizedcontext_metacall_callback = cb; }
    inline void setKLocalizedContext_Event_Callback(KLocalizedContext_Event_Callback cb) { klocalizedcontext_event_callback = cb; }
    inline void setKLocalizedContext_EventFilter_Callback(KLocalizedContext_EventFilter_Callback cb) { klocalizedcontext_eventfilter_callback = cb; }
    inline void setKLocalizedContext_TimerEvent_Callback(KLocalizedContext_TimerEvent_Callback cb) { klocalizedcontext_timerevent_callback = cb; }
    inline void setKLocalizedContext_ChildEvent_Callback(KLocalizedContext_ChildEvent_Callback cb) { klocalizedcontext_childevent_callback = cb; }
    inline void setKLocalizedContext_CustomEvent_Callback(KLocalizedContext_CustomEvent_Callback cb) { klocalizedcontext_customevent_callback = cb; }
    inline void setKLocalizedContext_ConnectNotify_Callback(KLocalizedContext_ConnectNotify_Callback cb) { klocalizedcontext_connectnotify_callback = cb; }
    inline void setKLocalizedContext_DisconnectNotify_Callback(KLocalizedContext_DisconnectNotify_Callback cb) { klocalizedcontext_disconnectnotify_callback = cb; }
    inline void setKLocalizedContext_Sender_Callback(KLocalizedContext_Sender_Callback cb) { klocalizedcontext_sender_callback = cb; }
    inline void setKLocalizedContext_SenderSignalIndex_Callback(KLocalizedContext_SenderSignalIndex_Callback cb) { klocalizedcontext_sendersignalindex_callback = cb; }
    inline void setKLocalizedContext_Receivers_Callback(KLocalizedContext_Receivers_Callback cb) { klocalizedcontext_receivers_callback = cb; }
    inline void setKLocalizedContext_IsSignalConnected_Callback(KLocalizedContext_IsSignalConnected_Callback cb) { klocalizedcontext_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKLocalizedContext_MetaObject_IsBase(bool value) const { klocalizedcontext_metaobject_isbase = value; }
    inline void setKLocalizedContext_Metacast_IsBase(bool value) const { klocalizedcontext_metacast_isbase = value; }
    inline void setKLocalizedContext_Metacall_IsBase(bool value) const { klocalizedcontext_metacall_isbase = value; }
    inline void setKLocalizedContext_Event_IsBase(bool value) const { klocalizedcontext_event_isbase = value; }
    inline void setKLocalizedContext_EventFilter_IsBase(bool value) const { klocalizedcontext_eventfilter_isbase = value; }
    inline void setKLocalizedContext_TimerEvent_IsBase(bool value) const { klocalizedcontext_timerevent_isbase = value; }
    inline void setKLocalizedContext_ChildEvent_IsBase(bool value) const { klocalizedcontext_childevent_isbase = value; }
    inline void setKLocalizedContext_CustomEvent_IsBase(bool value) const { klocalizedcontext_customevent_isbase = value; }
    inline void setKLocalizedContext_ConnectNotify_IsBase(bool value) const { klocalizedcontext_connectnotify_isbase = value; }
    inline void setKLocalizedContext_DisconnectNotify_IsBase(bool value) const { klocalizedcontext_disconnectnotify_isbase = value; }
    inline void setKLocalizedContext_Sender_IsBase(bool value) const { klocalizedcontext_sender_isbase = value; }
    inline void setKLocalizedContext_SenderSignalIndex_IsBase(bool value) const { klocalizedcontext_sendersignalindex_isbase = value; }
    inline void setKLocalizedContext_Receivers_IsBase(bool value) const { klocalizedcontext_receivers_isbase = value; }
    inline void setKLocalizedContext_IsSignalConnected_IsBase(bool value) const { klocalizedcontext_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klocalizedcontext_metaobject_isbase) {
            klocalizedcontext_metaobject_isbase = false;
            return KLocalizedContext::metaObject();
        }
        auto metaobject_cb = klocalizedcontext_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KLocalizedContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klocalizedcontext_metacast_isbase) {
            klocalizedcontext_metacast_isbase = false;
            return KLocalizedContext::qt_metacast(param1);
        }
        auto metacast_cb = klocalizedcontext_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KLocalizedContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedcontext_metacall_isbase) {
            klocalizedcontext_metacall_isbase = false;
            return KLocalizedContext::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = klocalizedcontext_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLocalizedContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedcontext_event_isbase) {
            klocalizedcontext_event_isbase = false;
            return KLocalizedContext::event(event);
        }
        auto event_cb = klocalizedcontext_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KLocalizedContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klocalizedcontext_eventfilter_isbase) {
            klocalizedcontext_eventfilter_isbase = false;
            return KLocalizedContext::eventFilter(watched, event);
        }
        auto eventfilter_cb = klocalizedcontext_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLocalizedContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedcontext_timerevent_isbase) {
            klocalizedcontext_timerevent_isbase = false;
            KLocalizedContext::timerEvent(event);
            return;
        }
        auto timerevent_cb = klocalizedcontext_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KLocalizedContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedcontext_childevent_isbase) {
            klocalizedcontext_childevent_isbase = false;
            KLocalizedContext::childEvent(event);
            return;
        }
        auto childevent_cb = klocalizedcontext_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KLocalizedContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedcontext_customevent_isbase) {
            klocalizedcontext_customevent_isbase = false;
            KLocalizedContext::customEvent(event);
            return;
        }
        auto customevent_cb = klocalizedcontext_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KLocalizedContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedcontext_connectnotify_isbase) {
            klocalizedcontext_connectnotify_isbase = false;
            KLocalizedContext::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = klocalizedcontext_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KLocalizedContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedcontext_disconnectnotify_isbase) {
            klocalizedcontext_disconnectnotify_isbase = false;
            KLocalizedContext::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = klocalizedcontext_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KLocalizedContext::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klocalizedcontext_sender_isbase) {
            klocalizedcontext_sender_isbase = false;
            return KLocalizedContext::sender();
        }
        auto sender_cb = klocalizedcontext_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KLocalizedContext::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klocalizedcontext_sendersignalindex_isbase) {
            klocalizedcontext_sendersignalindex_isbase = false;
            return KLocalizedContext::senderSignalIndex();
        }
        auto sendersignalindex_cb = klocalizedcontext_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KLocalizedContext::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klocalizedcontext_receivers_isbase) {
            klocalizedcontext_receivers_isbase = false;
            return KLocalizedContext::receivers(signal);
        }
        auto receivers_cb = klocalizedcontext_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLocalizedContext::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klocalizedcontext_issignalconnected_isbase) {
            klocalizedcontext_issignalconnected_isbase = false;
            return KLocalizedContext::isSignalConnected(signal);
        }
        auto issignalconnected_cb = klocalizedcontext_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KLocalizedContext::isSignalConnected(signal);
    }

    // Friend functions
    friend void KLocalizedContext_TimerEvent(KLocalizedContext* self, QTimerEvent* event);
    friend void KLocalizedContext_SuperTimerEvent(KLocalizedContext* self, QTimerEvent* event);
    friend void KLocalizedContext_ChildEvent(KLocalizedContext* self, QChildEvent* event);
    friend void KLocalizedContext_SuperChildEvent(KLocalizedContext* self, QChildEvent* event);
    friend void KLocalizedContext_CustomEvent(KLocalizedContext* self, QEvent* event);
    friend void KLocalizedContext_SuperCustomEvent(KLocalizedContext* self, QEvent* event);
    friend void KLocalizedContext_ConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_SuperConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_DisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_SuperDisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend QObject* KLocalizedContext_Sender(const KLocalizedContext* self);
    friend QObject* KLocalizedContext_SuperSender(const KLocalizedContext* self);
    friend int KLocalizedContext_SenderSignalIndex(const KLocalizedContext* self);
    friend int KLocalizedContext_SuperSenderSignalIndex(const KLocalizedContext* self);
    friend int KLocalizedContext_Receivers(const KLocalizedContext* self, const char* signal);
    friend int KLocalizedContext_SuperReceivers(const KLocalizedContext* self, const char* signal);
    friend bool KLocalizedContext_IsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal);
    friend bool KLocalizedContext_SuperIsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal);
};

#endif
