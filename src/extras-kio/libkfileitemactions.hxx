#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEITEMACTIONS_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEITEMACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileItemActions so that we can call protected methods
class VirtualKFileItemActions final : public KFileItemActions {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileItemActions = true;

    // Virtual class public types (including callbacks)
    using KFileItemActions_MetaObject_Callback = QMetaObject* (*)();
    using KFileItemActions_Metacast_Callback = void* (*)(KFileItemActions*, const char*);
    using KFileItemActions_Metacall_Callback = int (*)(KFileItemActions*, int, int, void**);
    using KFileItemActions_Event_Callback = bool (*)(KFileItemActions*, QEvent*);
    using KFileItemActions_EventFilter_Callback = bool (*)(KFileItemActions*, QObject*, QEvent*);
    using KFileItemActions_TimerEvent_Callback = void (*)(KFileItemActions*, QTimerEvent*);
    using KFileItemActions_ChildEvent_Callback = void (*)(KFileItemActions*, QChildEvent*);
    using KFileItemActions_CustomEvent_Callback = void (*)(KFileItemActions*, QEvent*);
    using KFileItemActions_ConnectNotify_Callback = void (*)(KFileItemActions*, QMetaMethod*);
    using KFileItemActions_DisconnectNotify_Callback = void (*)(KFileItemActions*, QMetaMethod*);
    using KFileItemActions_Sender_Callback = QObject* (*)();
    using KFileItemActions_SenderSignalIndex_Callback = int (*)();
    using KFileItemActions_Receivers_Callback = int (*)(const KFileItemActions*, const char*);
    using KFileItemActions_IsSignalConnected_Callback = bool (*)(const KFileItemActions*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFileItemActions_MetaObject_Callback kfileitemactions_metaobject_callback = nullptr;
    KFileItemActions_Metacast_Callback kfileitemactions_metacast_callback = nullptr;
    KFileItemActions_Metacall_Callback kfileitemactions_metacall_callback = nullptr;
    KFileItemActions_Event_Callback kfileitemactions_event_callback = nullptr;
    KFileItemActions_EventFilter_Callback kfileitemactions_eventfilter_callback = nullptr;
    KFileItemActions_TimerEvent_Callback kfileitemactions_timerevent_callback = nullptr;
    KFileItemActions_ChildEvent_Callback kfileitemactions_childevent_callback = nullptr;
    KFileItemActions_CustomEvent_Callback kfileitemactions_customevent_callback = nullptr;
    KFileItemActions_ConnectNotify_Callback kfileitemactions_connectnotify_callback = nullptr;
    KFileItemActions_DisconnectNotify_Callback kfileitemactions_disconnectnotify_callback = nullptr;
    KFileItemActions_Sender_Callback kfileitemactions_sender_callback = nullptr;
    KFileItemActions_SenderSignalIndex_Callback kfileitemactions_sendersignalindex_callback = nullptr;
    KFileItemActions_Receivers_Callback kfileitemactions_receivers_callback = nullptr;
    KFileItemActions_IsSignalConnected_Callback kfileitemactions_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfileitemactions_metaobject_isbase = false;
    mutable bool kfileitemactions_metacast_isbase = false;
    mutable bool kfileitemactions_metacall_isbase = false;
    mutable bool kfileitemactions_event_isbase = false;
    mutable bool kfileitemactions_eventfilter_isbase = false;
    mutable bool kfileitemactions_timerevent_isbase = false;
    mutable bool kfileitemactions_childevent_isbase = false;
    mutable bool kfileitemactions_customevent_isbase = false;
    mutable bool kfileitemactions_connectnotify_isbase = false;
    mutable bool kfileitemactions_disconnectnotify_isbase = false;
    mutable bool kfileitemactions_sender_isbase = false;
    mutable bool kfileitemactions_sendersignalindex_isbase = false;
    mutable bool kfileitemactions_receivers_isbase = false;
    mutable bool kfileitemactions_issignalconnected_isbase = false;

  public:
    VirtualKFileItemActions() : KFileItemActions() {};
    VirtualKFileItemActions(QObject* parent) : KFileItemActions(parent) {};

    // Callback setters
    inline void setKFileItemActions_MetaObject_Callback(KFileItemActions_MetaObject_Callback cb) { kfileitemactions_metaobject_callback = cb; }
    inline void setKFileItemActions_Metacast_Callback(KFileItemActions_Metacast_Callback cb) { kfileitemactions_metacast_callback = cb; }
    inline void setKFileItemActions_Metacall_Callback(KFileItemActions_Metacall_Callback cb) { kfileitemactions_metacall_callback = cb; }
    inline void setKFileItemActions_Event_Callback(KFileItemActions_Event_Callback cb) { kfileitemactions_event_callback = cb; }
    inline void setKFileItemActions_EventFilter_Callback(KFileItemActions_EventFilter_Callback cb) { kfileitemactions_eventfilter_callback = cb; }
    inline void setKFileItemActions_TimerEvent_Callback(KFileItemActions_TimerEvent_Callback cb) { kfileitemactions_timerevent_callback = cb; }
    inline void setKFileItemActions_ChildEvent_Callback(KFileItemActions_ChildEvent_Callback cb) { kfileitemactions_childevent_callback = cb; }
    inline void setKFileItemActions_CustomEvent_Callback(KFileItemActions_CustomEvent_Callback cb) { kfileitemactions_customevent_callback = cb; }
    inline void setKFileItemActions_ConnectNotify_Callback(KFileItemActions_ConnectNotify_Callback cb) { kfileitemactions_connectnotify_callback = cb; }
    inline void setKFileItemActions_DisconnectNotify_Callback(KFileItemActions_DisconnectNotify_Callback cb) { kfileitemactions_disconnectnotify_callback = cb; }
    inline void setKFileItemActions_Sender_Callback(KFileItemActions_Sender_Callback cb) { kfileitemactions_sender_callback = cb; }
    inline void setKFileItemActions_SenderSignalIndex_Callback(KFileItemActions_SenderSignalIndex_Callback cb) { kfileitemactions_sendersignalindex_callback = cb; }
    inline void setKFileItemActions_Receivers_Callback(KFileItemActions_Receivers_Callback cb) { kfileitemactions_receivers_callback = cb; }
    inline void setKFileItemActions_IsSignalConnected_Callback(KFileItemActions_IsSignalConnected_Callback cb) { kfileitemactions_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFileItemActions_MetaObject_IsBase(bool value) const { kfileitemactions_metaobject_isbase = value; }
    inline void setKFileItemActions_Metacast_IsBase(bool value) const { kfileitemactions_metacast_isbase = value; }
    inline void setKFileItemActions_Metacall_IsBase(bool value) const { kfileitemactions_metacall_isbase = value; }
    inline void setKFileItemActions_Event_IsBase(bool value) const { kfileitemactions_event_isbase = value; }
    inline void setKFileItemActions_EventFilter_IsBase(bool value) const { kfileitemactions_eventfilter_isbase = value; }
    inline void setKFileItemActions_TimerEvent_IsBase(bool value) const { kfileitemactions_timerevent_isbase = value; }
    inline void setKFileItemActions_ChildEvent_IsBase(bool value) const { kfileitemactions_childevent_isbase = value; }
    inline void setKFileItemActions_CustomEvent_IsBase(bool value) const { kfileitemactions_customevent_isbase = value; }
    inline void setKFileItemActions_ConnectNotify_IsBase(bool value) const { kfileitemactions_connectnotify_isbase = value; }
    inline void setKFileItemActions_DisconnectNotify_IsBase(bool value) const { kfileitemactions_disconnectnotify_isbase = value; }
    inline void setKFileItemActions_Sender_IsBase(bool value) const { kfileitemactions_sender_isbase = value; }
    inline void setKFileItemActions_SenderSignalIndex_IsBase(bool value) const { kfileitemactions_sendersignalindex_isbase = value; }
    inline void setKFileItemActions_Receivers_IsBase(bool value) const { kfileitemactions_receivers_isbase = value; }
    inline void setKFileItemActions_IsSignalConnected_IsBase(bool value) const { kfileitemactions_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileitemactions_metaobject_isbase) {
            kfileitemactions_metaobject_isbase = false;
            return KFileItemActions::metaObject();
        }
        auto metaobject_cb = kfileitemactions_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFileItemActions::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileitemactions_metacast_isbase) {
            kfileitemactions_metacast_isbase = false;
            return KFileItemActions::qt_metacast(param1);
        }
        auto metacast_cb = kfileitemactions_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFileItemActions::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileitemactions_metacall_isbase) {
            kfileitemactions_metacall_isbase = false;
            return KFileItemActions::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfileitemactions_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileItemActions::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileitemactions_event_isbase) {
            kfileitemactions_event_isbase = false;
            return KFileItemActions::event(event);
        }
        auto event_cb = kfileitemactions_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFileItemActions::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfileitemactions_eventfilter_isbase) {
            kfileitemactions_eventfilter_isbase = false;
            return KFileItemActions::eventFilter(watched, event);
        }
        auto eventfilter_cb = kfileitemactions_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileItemActions::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileitemactions_timerevent_isbase) {
            kfileitemactions_timerevent_isbase = false;
            KFileItemActions::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfileitemactions_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFileItemActions::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileitemactions_childevent_isbase) {
            kfileitemactions_childevent_isbase = false;
            KFileItemActions::childEvent(event);
            return;
        }
        auto childevent_cb = kfileitemactions_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFileItemActions::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileitemactions_customevent_isbase) {
            kfileitemactions_customevent_isbase = false;
            KFileItemActions::customEvent(event);
            return;
        }
        auto customevent_cb = kfileitemactions_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFileItemActions::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileitemactions_connectnotify_isbase) {
            kfileitemactions_connectnotify_isbase = false;
            KFileItemActions::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfileitemactions_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFileItemActions::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileitemactions_disconnectnotify_isbase) {
            kfileitemactions_disconnectnotify_isbase = false;
            KFileItemActions::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfileitemactions_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFileItemActions::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileitemactions_sender_isbase) {
            kfileitemactions_sender_isbase = false;
            return KFileItemActions::sender();
        }
        auto sender_cb = kfileitemactions_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFileItemActions::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileitemactions_sendersignalindex_isbase) {
            kfileitemactions_sendersignalindex_isbase = false;
            return KFileItemActions::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfileitemactions_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFileItemActions::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileitemactions_receivers_isbase) {
            kfileitemactions_receivers_isbase = false;
            return KFileItemActions::receivers(signal);
        }
        auto receivers_cb = kfileitemactions_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileItemActions::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileitemactions_issignalconnected_isbase) {
            kfileitemactions_issignalconnected_isbase = false;
            return KFileItemActions::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfileitemactions_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFileItemActions::isSignalConnected(signal);
    }

    // Friend functions
    friend void KFileItemActions_TimerEvent(KFileItemActions* self, QTimerEvent* event);
    friend void KFileItemActions_SuperTimerEvent(KFileItemActions* self, QTimerEvent* event);
    friend void KFileItemActions_ChildEvent(KFileItemActions* self, QChildEvent* event);
    friend void KFileItemActions_SuperChildEvent(KFileItemActions* self, QChildEvent* event);
    friend void KFileItemActions_CustomEvent(KFileItemActions* self, QEvent* event);
    friend void KFileItemActions_SuperCustomEvent(KFileItemActions* self, QEvent* event);
    friend void KFileItemActions_ConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_SuperConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_DisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_SuperDisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend QObject* KFileItemActions_Sender(const KFileItemActions* self);
    friend QObject* KFileItemActions_SuperSender(const KFileItemActions* self);
    friend int KFileItemActions_SenderSignalIndex(const KFileItemActions* self);
    friend int KFileItemActions_SuperSenderSignalIndex(const KFileItemActions* self);
    friend int KFileItemActions_Receivers(const KFileItemActions* self, const char* signal);
    friend int KFileItemActions_SuperReceivers(const KFileItemActions* self, const char* signal);
    friend bool KFileItemActions_IsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal);
    friend bool KFileItemActions_SuperIsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal);
};

#endif
