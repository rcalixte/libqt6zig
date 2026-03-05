#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKACTIONCATEGORY_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKACTIONCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionCategory so that we can call protected methods
class VirtualKActionCategory final : public KActionCategory {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionCategory = true;

    // Virtual class public types (including callbacks)
    using KActionCategory_MetaObject_Callback = QMetaObject* (*)();
    using KActionCategory_Metacast_Callback = void* (*)(KActionCategory*, const char*);
    using KActionCategory_Metacall_Callback = int (*)(KActionCategory*, int, int, void**);
    using KActionCategory_Event_Callback = bool (*)(KActionCategory*, QEvent*);
    using KActionCategory_EventFilter_Callback = bool (*)(KActionCategory*, QObject*, QEvent*);
    using KActionCategory_TimerEvent_Callback = void (*)(KActionCategory*, QTimerEvent*);
    using KActionCategory_ChildEvent_Callback = void (*)(KActionCategory*, QChildEvent*);
    using KActionCategory_CustomEvent_Callback = void (*)(KActionCategory*, QEvent*);
    using KActionCategory_ConnectNotify_Callback = void (*)(KActionCategory*, QMetaMethod*);
    using KActionCategory_DisconnectNotify_Callback = void (*)(KActionCategory*, QMetaMethod*);
    using KActionCategory_Sender_Callback = QObject* (*)();
    using KActionCategory_SenderSignalIndex_Callback = int (*)();
    using KActionCategory_Receivers_Callback = int (*)(const KActionCategory*, const char*);
    using KActionCategory_IsSignalConnected_Callback = bool (*)(const KActionCategory*, QMetaMethod*);

  protected:
    // Instance callback storage
    KActionCategory_MetaObject_Callback kactioncategory_metaobject_callback = nullptr;
    KActionCategory_Metacast_Callback kactioncategory_metacast_callback = nullptr;
    KActionCategory_Metacall_Callback kactioncategory_metacall_callback = nullptr;
    KActionCategory_Event_Callback kactioncategory_event_callback = nullptr;
    KActionCategory_EventFilter_Callback kactioncategory_eventfilter_callback = nullptr;
    KActionCategory_TimerEvent_Callback kactioncategory_timerevent_callback = nullptr;
    KActionCategory_ChildEvent_Callback kactioncategory_childevent_callback = nullptr;
    KActionCategory_CustomEvent_Callback kactioncategory_customevent_callback = nullptr;
    KActionCategory_ConnectNotify_Callback kactioncategory_connectnotify_callback = nullptr;
    KActionCategory_DisconnectNotify_Callback kactioncategory_disconnectnotify_callback = nullptr;
    KActionCategory_Sender_Callback kactioncategory_sender_callback = nullptr;
    KActionCategory_SenderSignalIndex_Callback kactioncategory_sendersignalindex_callback = nullptr;
    KActionCategory_Receivers_Callback kactioncategory_receivers_callback = nullptr;
    KActionCategory_IsSignalConnected_Callback kactioncategory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kactioncategory_metaobject_isbase = false;
    mutable bool kactioncategory_metacast_isbase = false;
    mutable bool kactioncategory_metacall_isbase = false;
    mutable bool kactioncategory_event_isbase = false;
    mutable bool kactioncategory_eventfilter_isbase = false;
    mutable bool kactioncategory_timerevent_isbase = false;
    mutable bool kactioncategory_childevent_isbase = false;
    mutable bool kactioncategory_customevent_isbase = false;
    mutable bool kactioncategory_connectnotify_isbase = false;
    mutable bool kactioncategory_disconnectnotify_isbase = false;
    mutable bool kactioncategory_sender_isbase = false;
    mutable bool kactioncategory_sendersignalindex_isbase = false;
    mutable bool kactioncategory_receivers_isbase = false;
    mutable bool kactioncategory_issignalconnected_isbase = false;

  public:
    VirtualKActionCategory(const QString& text) : KActionCategory(text) {};
    VirtualKActionCategory(const QString& text, KActionCollection* parent) : KActionCategory(text, parent) {};

    // Callback setters
    inline void setKActionCategory_MetaObject_Callback(KActionCategory_MetaObject_Callback cb) { kactioncategory_metaobject_callback = cb; }
    inline void setKActionCategory_Metacast_Callback(KActionCategory_Metacast_Callback cb) { kactioncategory_metacast_callback = cb; }
    inline void setKActionCategory_Metacall_Callback(KActionCategory_Metacall_Callback cb) { kactioncategory_metacall_callback = cb; }
    inline void setKActionCategory_Event_Callback(KActionCategory_Event_Callback cb) { kactioncategory_event_callback = cb; }
    inline void setKActionCategory_EventFilter_Callback(KActionCategory_EventFilter_Callback cb) { kactioncategory_eventfilter_callback = cb; }
    inline void setKActionCategory_TimerEvent_Callback(KActionCategory_TimerEvent_Callback cb) { kactioncategory_timerevent_callback = cb; }
    inline void setKActionCategory_ChildEvent_Callback(KActionCategory_ChildEvent_Callback cb) { kactioncategory_childevent_callback = cb; }
    inline void setKActionCategory_CustomEvent_Callback(KActionCategory_CustomEvent_Callback cb) { kactioncategory_customevent_callback = cb; }
    inline void setKActionCategory_ConnectNotify_Callback(KActionCategory_ConnectNotify_Callback cb) { kactioncategory_connectnotify_callback = cb; }
    inline void setKActionCategory_DisconnectNotify_Callback(KActionCategory_DisconnectNotify_Callback cb) { kactioncategory_disconnectnotify_callback = cb; }
    inline void setKActionCategory_Sender_Callback(KActionCategory_Sender_Callback cb) { kactioncategory_sender_callback = cb; }
    inline void setKActionCategory_SenderSignalIndex_Callback(KActionCategory_SenderSignalIndex_Callback cb) { kactioncategory_sendersignalindex_callback = cb; }
    inline void setKActionCategory_Receivers_Callback(KActionCategory_Receivers_Callback cb) { kactioncategory_receivers_callback = cb; }
    inline void setKActionCategory_IsSignalConnected_Callback(KActionCategory_IsSignalConnected_Callback cb) { kactioncategory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKActionCategory_MetaObject_IsBase(bool value) const { kactioncategory_metaobject_isbase = value; }
    inline void setKActionCategory_Metacast_IsBase(bool value) const { kactioncategory_metacast_isbase = value; }
    inline void setKActionCategory_Metacall_IsBase(bool value) const { kactioncategory_metacall_isbase = value; }
    inline void setKActionCategory_Event_IsBase(bool value) const { kactioncategory_event_isbase = value; }
    inline void setKActionCategory_EventFilter_IsBase(bool value) const { kactioncategory_eventfilter_isbase = value; }
    inline void setKActionCategory_TimerEvent_IsBase(bool value) const { kactioncategory_timerevent_isbase = value; }
    inline void setKActionCategory_ChildEvent_IsBase(bool value) const { kactioncategory_childevent_isbase = value; }
    inline void setKActionCategory_CustomEvent_IsBase(bool value) const { kactioncategory_customevent_isbase = value; }
    inline void setKActionCategory_ConnectNotify_IsBase(bool value) const { kactioncategory_connectnotify_isbase = value; }
    inline void setKActionCategory_DisconnectNotify_IsBase(bool value) const { kactioncategory_disconnectnotify_isbase = value; }
    inline void setKActionCategory_Sender_IsBase(bool value) const { kactioncategory_sender_isbase = value; }
    inline void setKActionCategory_SenderSignalIndex_IsBase(bool value) const { kactioncategory_sendersignalindex_isbase = value; }
    inline void setKActionCategory_Receivers_IsBase(bool value) const { kactioncategory_receivers_isbase = value; }
    inline void setKActionCategory_IsSignalConnected_IsBase(bool value) const { kactioncategory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactioncategory_metaobject_isbase) {
            kactioncategory_metaobject_isbase = false;
            return KActionCategory::metaObject();
        }
        auto metaobject_cb = kactioncategory_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KActionCategory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactioncategory_metacast_isbase) {
            kactioncategory_metacast_isbase = false;
            return KActionCategory::qt_metacast(param1);
        }
        auto metacast_cb = kactioncategory_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KActionCategory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactioncategory_metacall_isbase) {
            kactioncategory_metacall_isbase = false;
            return KActionCategory::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kactioncategory_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionCategory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactioncategory_event_isbase) {
            kactioncategory_event_isbase = false;
            return KActionCategory::event(event);
        }
        auto event_cb = kactioncategory_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KActionCategory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kactioncategory_eventfilter_isbase) {
            kactioncategory_eventfilter_isbase = false;
            return KActionCategory::eventFilter(watched, event);
        }
        auto eventfilter_cb = kactioncategory_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionCategory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactioncategory_timerevent_isbase) {
            kactioncategory_timerevent_isbase = false;
            KActionCategory::timerEvent(event);
            return;
        }
        auto timerevent_cb = kactioncategory_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KActionCategory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactioncategory_childevent_isbase) {
            kactioncategory_childevent_isbase = false;
            KActionCategory::childEvent(event);
            return;
        }
        auto childevent_cb = kactioncategory_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KActionCategory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactioncategory_customevent_isbase) {
            kactioncategory_customevent_isbase = false;
            KActionCategory::customEvent(event);
            return;
        }
        auto customevent_cb = kactioncategory_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KActionCategory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactioncategory_connectnotify_isbase) {
            kactioncategory_connectnotify_isbase = false;
            KActionCategory::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kactioncategory_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KActionCategory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactioncategory_disconnectnotify_isbase) {
            kactioncategory_disconnectnotify_isbase = false;
            KActionCategory::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kactioncategory_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KActionCategory::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactioncategory_sender_isbase) {
            kactioncategory_sender_isbase = false;
            return KActionCategory::sender();
        }
        auto sender_cb = kactioncategory_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KActionCategory::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactioncategory_sendersignalindex_isbase) {
            kactioncategory_sendersignalindex_isbase = false;
            return KActionCategory::senderSignalIndex();
        }
        auto sendersignalindex_cb = kactioncategory_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KActionCategory::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactioncategory_receivers_isbase) {
            kactioncategory_receivers_isbase = false;
            return KActionCategory::receivers(signal);
        }
        auto receivers_cb = kactioncategory_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionCategory::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactioncategory_issignalconnected_isbase) {
            kactioncategory_issignalconnected_isbase = false;
            return KActionCategory::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kactioncategory_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KActionCategory::isSignalConnected(signal);
    }

    // Friend functions
    friend void KActionCategory_TimerEvent(KActionCategory* self, QTimerEvent* event);
    friend void KActionCategory_SuperTimerEvent(KActionCategory* self, QTimerEvent* event);
    friend void KActionCategory_ChildEvent(KActionCategory* self, QChildEvent* event);
    friend void KActionCategory_SuperChildEvent(KActionCategory* self, QChildEvent* event);
    friend void KActionCategory_CustomEvent(KActionCategory* self, QEvent* event);
    friend void KActionCategory_SuperCustomEvent(KActionCategory* self, QEvent* event);
    friend void KActionCategory_ConnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_SuperConnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_DisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_SuperDisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend QObject* KActionCategory_Sender(const KActionCategory* self);
    friend QObject* KActionCategory_SuperSender(const KActionCategory* self);
    friend int KActionCategory_SenderSignalIndex(const KActionCategory* self);
    friend int KActionCategory_SuperSenderSignalIndex(const KActionCategory* self);
    friend int KActionCategory_Receivers(const KActionCategory* self, const char* signal);
    friend int KActionCategory_SuperReceivers(const KActionCategory* self, const char* signal);
    friend bool KActionCategory_IsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
    friend bool KActionCategory_SuperIsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
};

#endif
