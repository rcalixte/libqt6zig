#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKCOLORSCHEMEWATCHER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKCOLORSCHEMEWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorSchemeWatcher so that we can call protected methods
class VirtualKColorSchemeWatcher final : public KColorSchemeWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualKColorSchemeWatcher = true;

    // Virtual class public types (including callbacks)
    using KColorSchemeWatcher_MetaObject_Callback = QMetaObject* (*)();
    using KColorSchemeWatcher_Metacast_Callback = void* (*)(KColorSchemeWatcher*, const char*);
    using KColorSchemeWatcher_Metacall_Callback = int (*)(KColorSchemeWatcher*, int, int, void**);
    using KColorSchemeWatcher_Event_Callback = bool (*)(KColorSchemeWatcher*, QEvent*);
    using KColorSchemeWatcher_EventFilter_Callback = bool (*)(KColorSchemeWatcher*, QObject*, QEvent*);
    using KColorSchemeWatcher_TimerEvent_Callback = void (*)(KColorSchemeWatcher*, QTimerEvent*);
    using KColorSchemeWatcher_ChildEvent_Callback = void (*)(KColorSchemeWatcher*, QChildEvent*);
    using KColorSchemeWatcher_CustomEvent_Callback = void (*)(KColorSchemeWatcher*, QEvent*);
    using KColorSchemeWatcher_ConnectNotify_Callback = void (*)(KColorSchemeWatcher*, QMetaMethod*);
    using KColorSchemeWatcher_DisconnectNotify_Callback = void (*)(KColorSchemeWatcher*, QMetaMethod*);
    using KColorSchemeWatcher_Sender_Callback = QObject* (*)();
    using KColorSchemeWatcher_SenderSignalIndex_Callback = int (*)();
    using KColorSchemeWatcher_Receivers_Callback = int (*)(const KColorSchemeWatcher*, const char*);
    using KColorSchemeWatcher_IsSignalConnected_Callback = bool (*)(const KColorSchemeWatcher*, QMetaMethod*);

  protected:
    // Instance callback storage
    KColorSchemeWatcher_MetaObject_Callback kcolorschemewatcher_metaobject_callback = nullptr;
    KColorSchemeWatcher_Metacast_Callback kcolorschemewatcher_metacast_callback = nullptr;
    KColorSchemeWatcher_Metacall_Callback kcolorschemewatcher_metacall_callback = nullptr;
    KColorSchemeWatcher_Event_Callback kcolorschemewatcher_event_callback = nullptr;
    KColorSchemeWatcher_EventFilter_Callback kcolorschemewatcher_eventfilter_callback = nullptr;
    KColorSchemeWatcher_TimerEvent_Callback kcolorschemewatcher_timerevent_callback = nullptr;
    KColorSchemeWatcher_ChildEvent_Callback kcolorschemewatcher_childevent_callback = nullptr;
    KColorSchemeWatcher_CustomEvent_Callback kcolorschemewatcher_customevent_callback = nullptr;
    KColorSchemeWatcher_ConnectNotify_Callback kcolorschemewatcher_connectnotify_callback = nullptr;
    KColorSchemeWatcher_DisconnectNotify_Callback kcolorschemewatcher_disconnectnotify_callback = nullptr;
    KColorSchemeWatcher_Sender_Callback kcolorschemewatcher_sender_callback = nullptr;
    KColorSchemeWatcher_SenderSignalIndex_Callback kcolorschemewatcher_sendersignalindex_callback = nullptr;
    KColorSchemeWatcher_Receivers_Callback kcolorschemewatcher_receivers_callback = nullptr;
    KColorSchemeWatcher_IsSignalConnected_Callback kcolorschemewatcher_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcolorschemewatcher_metaobject_isbase = false;
    mutable bool kcolorschemewatcher_metacast_isbase = false;
    mutable bool kcolorschemewatcher_metacall_isbase = false;
    mutable bool kcolorschemewatcher_event_isbase = false;
    mutable bool kcolorschemewatcher_eventfilter_isbase = false;
    mutable bool kcolorschemewatcher_timerevent_isbase = false;
    mutable bool kcolorschemewatcher_childevent_isbase = false;
    mutable bool kcolorschemewatcher_customevent_isbase = false;
    mutable bool kcolorschemewatcher_connectnotify_isbase = false;
    mutable bool kcolorschemewatcher_disconnectnotify_isbase = false;
    mutable bool kcolorschemewatcher_sender_isbase = false;
    mutable bool kcolorschemewatcher_sendersignalindex_isbase = false;
    mutable bool kcolorschemewatcher_receivers_isbase = false;
    mutable bool kcolorschemewatcher_issignalconnected_isbase = false;

  public:
    VirtualKColorSchemeWatcher() : KColorSchemeWatcher() {};
    VirtualKColorSchemeWatcher(QObject* parent) : KColorSchemeWatcher(parent) {};

    // Callback setters
    inline void setKColorSchemeWatcher_MetaObject_Callback(KColorSchemeWatcher_MetaObject_Callback cb) { kcolorschemewatcher_metaobject_callback = cb; }
    inline void setKColorSchemeWatcher_Metacast_Callback(KColorSchemeWatcher_Metacast_Callback cb) { kcolorschemewatcher_metacast_callback = cb; }
    inline void setKColorSchemeWatcher_Metacall_Callback(KColorSchemeWatcher_Metacall_Callback cb) { kcolorschemewatcher_metacall_callback = cb; }
    inline void setKColorSchemeWatcher_Event_Callback(KColorSchemeWatcher_Event_Callback cb) { kcolorschemewatcher_event_callback = cb; }
    inline void setKColorSchemeWatcher_EventFilter_Callback(KColorSchemeWatcher_EventFilter_Callback cb) { kcolorschemewatcher_eventfilter_callback = cb; }
    inline void setKColorSchemeWatcher_TimerEvent_Callback(KColorSchemeWatcher_TimerEvent_Callback cb) { kcolorschemewatcher_timerevent_callback = cb; }
    inline void setKColorSchemeWatcher_ChildEvent_Callback(KColorSchemeWatcher_ChildEvent_Callback cb) { kcolorschemewatcher_childevent_callback = cb; }
    inline void setKColorSchemeWatcher_CustomEvent_Callback(KColorSchemeWatcher_CustomEvent_Callback cb) { kcolorschemewatcher_customevent_callback = cb; }
    inline void setKColorSchemeWatcher_ConnectNotify_Callback(KColorSchemeWatcher_ConnectNotify_Callback cb) { kcolorschemewatcher_connectnotify_callback = cb; }
    inline void setKColorSchemeWatcher_DisconnectNotify_Callback(KColorSchemeWatcher_DisconnectNotify_Callback cb) { kcolorschemewatcher_disconnectnotify_callback = cb; }
    inline void setKColorSchemeWatcher_Sender_Callback(KColorSchemeWatcher_Sender_Callback cb) { kcolorschemewatcher_sender_callback = cb; }
    inline void setKColorSchemeWatcher_SenderSignalIndex_Callback(KColorSchemeWatcher_SenderSignalIndex_Callback cb) { kcolorschemewatcher_sendersignalindex_callback = cb; }
    inline void setKColorSchemeWatcher_Receivers_Callback(KColorSchemeWatcher_Receivers_Callback cb) { kcolorschemewatcher_receivers_callback = cb; }
    inline void setKColorSchemeWatcher_IsSignalConnected_Callback(KColorSchemeWatcher_IsSignalConnected_Callback cb) { kcolorschemewatcher_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKColorSchemeWatcher_MetaObject_IsBase(bool value) const { kcolorschemewatcher_metaobject_isbase = value; }
    inline void setKColorSchemeWatcher_Metacast_IsBase(bool value) const { kcolorschemewatcher_metacast_isbase = value; }
    inline void setKColorSchemeWatcher_Metacall_IsBase(bool value) const { kcolorschemewatcher_metacall_isbase = value; }
    inline void setKColorSchemeWatcher_Event_IsBase(bool value) const { kcolorschemewatcher_event_isbase = value; }
    inline void setKColorSchemeWatcher_EventFilter_IsBase(bool value) const { kcolorschemewatcher_eventfilter_isbase = value; }
    inline void setKColorSchemeWatcher_TimerEvent_IsBase(bool value) const { kcolorschemewatcher_timerevent_isbase = value; }
    inline void setKColorSchemeWatcher_ChildEvent_IsBase(bool value) const { kcolorschemewatcher_childevent_isbase = value; }
    inline void setKColorSchemeWatcher_CustomEvent_IsBase(bool value) const { kcolorschemewatcher_customevent_isbase = value; }
    inline void setKColorSchemeWatcher_ConnectNotify_IsBase(bool value) const { kcolorschemewatcher_connectnotify_isbase = value; }
    inline void setKColorSchemeWatcher_DisconnectNotify_IsBase(bool value) const { kcolorschemewatcher_disconnectnotify_isbase = value; }
    inline void setKColorSchemeWatcher_Sender_IsBase(bool value) const { kcolorschemewatcher_sender_isbase = value; }
    inline void setKColorSchemeWatcher_SenderSignalIndex_IsBase(bool value) const { kcolorschemewatcher_sendersignalindex_isbase = value; }
    inline void setKColorSchemeWatcher_Receivers_IsBase(bool value) const { kcolorschemewatcher_receivers_isbase = value; }
    inline void setKColorSchemeWatcher_IsSignalConnected_IsBase(bool value) const { kcolorschemewatcher_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorschemewatcher_metaobject_isbase) {
            kcolorschemewatcher_metaobject_isbase = false;
            return KColorSchemeWatcher::metaObject();
        }
        auto metaobject_cb = kcolorschemewatcher_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KColorSchemeWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorschemewatcher_metacast_isbase) {
            kcolorschemewatcher_metacast_isbase = false;
            return KColorSchemeWatcher::qt_metacast(param1);
        }
        auto metacast_cb = kcolorschemewatcher_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorschemewatcher_metacall_isbase) {
            kcolorschemewatcher_metacall_isbase = false;
            return KColorSchemeWatcher::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcolorschemewatcher_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorschemewatcher_event_isbase) {
            kcolorschemewatcher_event_isbase = false;
            return KColorSchemeWatcher::event(event);
        }
        auto event_cb = kcolorschemewatcher_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorschemewatcher_eventfilter_isbase) {
            kcolorschemewatcher_eventfilter_isbase = false;
            return KColorSchemeWatcher::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcolorschemewatcher_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorSchemeWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorschemewatcher_timerevent_isbase) {
            kcolorschemewatcher_timerevent_isbase = false;
            KColorSchemeWatcher::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcolorschemewatcher_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KColorSchemeWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorschemewatcher_childevent_isbase) {
            kcolorschemewatcher_childevent_isbase = false;
            KColorSchemeWatcher::childEvent(event);
            return;
        }
        auto childevent_cb = kcolorschemewatcher_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KColorSchemeWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorschemewatcher_customevent_isbase) {
            kcolorschemewatcher_customevent_isbase = false;
            KColorSchemeWatcher::customEvent(event);
            return;
        }
        auto customevent_cb = kcolorschemewatcher_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KColorSchemeWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorschemewatcher_connectnotify_isbase) {
            kcolorschemewatcher_connectnotify_isbase = false;
            KColorSchemeWatcher::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcolorschemewatcher_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KColorSchemeWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorschemewatcher_disconnectnotify_isbase) {
            kcolorschemewatcher_disconnectnotify_isbase = false;
            KColorSchemeWatcher::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcolorschemewatcher_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KColorSchemeWatcher::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorschemewatcher_sender_isbase) {
            kcolorschemewatcher_sender_isbase = false;
            return KColorSchemeWatcher::sender();
        }
        auto sender_cb = kcolorschemewatcher_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KColorSchemeWatcher::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorschemewatcher_sendersignalindex_isbase) {
            kcolorschemewatcher_sendersignalindex_isbase = false;
            return KColorSchemeWatcher::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcolorschemewatcher_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeWatcher::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorschemewatcher_receivers_isbase) {
            kcolorschemewatcher_receivers_isbase = false;
            return KColorSchemeWatcher::receivers(signal);
        }
        auto receivers_cb = kcolorschemewatcher_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeWatcher::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorschemewatcher_issignalconnected_isbase) {
            kcolorschemewatcher_issignalconnected_isbase = false;
            return KColorSchemeWatcher::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcolorschemewatcher_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeWatcher::isSignalConnected(signal);
    }

    // Friend functions
    friend void KColorSchemeWatcher_TimerEvent(KColorSchemeWatcher* self, QTimerEvent* event);
    friend void KColorSchemeWatcher_SuperTimerEvent(KColorSchemeWatcher* self, QTimerEvent* event);
    friend void KColorSchemeWatcher_ChildEvent(KColorSchemeWatcher* self, QChildEvent* event);
    friend void KColorSchemeWatcher_SuperChildEvent(KColorSchemeWatcher* self, QChildEvent* event);
    friend void KColorSchemeWatcher_CustomEvent(KColorSchemeWatcher* self, QEvent* event);
    friend void KColorSchemeWatcher_SuperCustomEvent(KColorSchemeWatcher* self, QEvent* event);
    friend void KColorSchemeWatcher_ConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
    friend void KColorSchemeWatcher_SuperConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
    friend void KColorSchemeWatcher_DisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
    friend void KColorSchemeWatcher_SuperDisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
    friend QObject* KColorSchemeWatcher_Sender(const KColorSchemeWatcher* self);
    friend QObject* KColorSchemeWatcher_SuperSender(const KColorSchemeWatcher* self);
    friend int KColorSchemeWatcher_SenderSignalIndex(const KColorSchemeWatcher* self);
    friend int KColorSchemeWatcher_SuperSenderSignalIndex(const KColorSchemeWatcher* self);
    friend int KColorSchemeWatcher_Receivers(const KColorSchemeWatcher* self, const char* signal);
    friend int KColorSchemeWatcher_SuperReceivers(const KColorSchemeWatcher* self, const char* signal);
    friend bool KColorSchemeWatcher_IsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal);
    friend bool KColorSchemeWatcher_SuperIsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal);
};

#endif
