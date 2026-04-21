#pragma once
#ifndef SRC_EXTRAS_KSTATUSNOTIFIERITEMC_LIBVIRTUALKSTATUSNOTIFIERITEM_H
#define SRC_EXTRAS_KSTATUSNOTIFIERITEMC_LIBVIRTUALKSTATUSNOTIFIERITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KStatusNotifierItem so that we can call protected methods
class VirtualKStatusNotifierItem final : public KStatusNotifierItem {

  public:
    // Virtual class boolean flag
    bool isVirtualKStatusNotifierItem = true;

    // Virtual class public types (including callbacks)
    using KStatusNotifierItem_MetaObject_Callback = QMetaObject* (*)();
    using KStatusNotifierItem_Metacast_Callback = void* (*)(KStatusNotifierItem*, const char*);
    using KStatusNotifierItem_Metacall_Callback = int (*)(KStatusNotifierItem*, int, int, void**);
    using KStatusNotifierItem_Activate_Callback = void (*)(KStatusNotifierItem*, QPoint*);
    using KStatusNotifierItem_EventFilter_Callback = bool (*)(KStatusNotifierItem*, QObject*, QEvent*);
    using KStatusNotifierItem_Event_Callback = bool (*)(KStatusNotifierItem*, QEvent*);
    using KStatusNotifierItem_TimerEvent_Callback = void (*)(KStatusNotifierItem*, QTimerEvent*);
    using KStatusNotifierItem_ChildEvent_Callback = void (*)(KStatusNotifierItem*, QChildEvent*);
    using KStatusNotifierItem_CustomEvent_Callback = void (*)(KStatusNotifierItem*, QEvent*);
    using KStatusNotifierItem_ConnectNotify_Callback = void (*)(KStatusNotifierItem*, QMetaMethod*);
    using KStatusNotifierItem_DisconnectNotify_Callback = void (*)(KStatusNotifierItem*, QMetaMethod*);
    using KStatusNotifierItem_Sender_Callback = QObject* (*)();
    using KStatusNotifierItem_SenderSignalIndex_Callback = int (*)();
    using KStatusNotifierItem_Receivers_Callback = int (*)(const KStatusNotifierItem*, const char*);
    using KStatusNotifierItem_IsSignalConnected_Callback = bool (*)(const KStatusNotifierItem*, QMetaMethod*);

  protected:
    // Instance callback storage
    KStatusNotifierItem_MetaObject_Callback kstatusnotifieritem_metaobject_callback = nullptr;
    KStatusNotifierItem_Metacast_Callback kstatusnotifieritem_metacast_callback = nullptr;
    KStatusNotifierItem_Metacall_Callback kstatusnotifieritem_metacall_callback = nullptr;
    KStatusNotifierItem_Activate_Callback kstatusnotifieritem_activate_callback = nullptr;
    KStatusNotifierItem_EventFilter_Callback kstatusnotifieritem_eventfilter_callback = nullptr;
    KStatusNotifierItem_Event_Callback kstatusnotifieritem_event_callback = nullptr;
    KStatusNotifierItem_TimerEvent_Callback kstatusnotifieritem_timerevent_callback = nullptr;
    KStatusNotifierItem_ChildEvent_Callback kstatusnotifieritem_childevent_callback = nullptr;
    KStatusNotifierItem_CustomEvent_Callback kstatusnotifieritem_customevent_callback = nullptr;
    KStatusNotifierItem_ConnectNotify_Callback kstatusnotifieritem_connectnotify_callback = nullptr;
    KStatusNotifierItem_DisconnectNotify_Callback kstatusnotifieritem_disconnectnotify_callback = nullptr;
    KStatusNotifierItem_Sender_Callback kstatusnotifieritem_sender_callback = nullptr;
    KStatusNotifierItem_SenderSignalIndex_Callback kstatusnotifieritem_sendersignalindex_callback = nullptr;
    KStatusNotifierItem_Receivers_Callback kstatusnotifieritem_receivers_callback = nullptr;
    KStatusNotifierItem_IsSignalConnected_Callback kstatusnotifieritem_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kstatusnotifieritem_metaobject_isbase = false;
    mutable bool kstatusnotifieritem_metacast_isbase = false;
    mutable bool kstatusnotifieritem_metacall_isbase = false;
    mutable bool kstatusnotifieritem_activate_isbase = false;
    mutable bool kstatusnotifieritem_eventfilter_isbase = false;
    mutable bool kstatusnotifieritem_event_isbase = false;
    mutable bool kstatusnotifieritem_timerevent_isbase = false;
    mutable bool kstatusnotifieritem_childevent_isbase = false;
    mutable bool kstatusnotifieritem_customevent_isbase = false;
    mutable bool kstatusnotifieritem_connectnotify_isbase = false;
    mutable bool kstatusnotifieritem_disconnectnotify_isbase = false;
    mutable bool kstatusnotifieritem_sender_isbase = false;
    mutable bool kstatusnotifieritem_sendersignalindex_isbase = false;
    mutable bool kstatusnotifieritem_receivers_isbase = false;
    mutable bool kstatusnotifieritem_issignalconnected_isbase = false;

  public:
    VirtualKStatusNotifierItem() : KStatusNotifierItem() {};
    VirtualKStatusNotifierItem(const QString& id) : KStatusNotifierItem(id) {};
    VirtualKStatusNotifierItem(QObject* parent) : KStatusNotifierItem(parent) {};
    VirtualKStatusNotifierItem(const QString& id, QObject* parent) : KStatusNotifierItem(id, parent) {};

    // Callback setters
    inline void setKStatusNotifierItem_MetaObject_Callback(KStatusNotifierItem_MetaObject_Callback cb) { kstatusnotifieritem_metaobject_callback = cb; }
    inline void setKStatusNotifierItem_Metacast_Callback(KStatusNotifierItem_Metacast_Callback cb) { kstatusnotifieritem_metacast_callback = cb; }
    inline void setKStatusNotifierItem_Metacall_Callback(KStatusNotifierItem_Metacall_Callback cb) { kstatusnotifieritem_metacall_callback = cb; }
    inline void setKStatusNotifierItem_Activate_Callback(KStatusNotifierItem_Activate_Callback cb) { kstatusnotifieritem_activate_callback = cb; }
    inline void setKStatusNotifierItem_EventFilter_Callback(KStatusNotifierItem_EventFilter_Callback cb) { kstatusnotifieritem_eventfilter_callback = cb; }
    inline void setKStatusNotifierItem_Event_Callback(KStatusNotifierItem_Event_Callback cb) { kstatusnotifieritem_event_callback = cb; }
    inline void setKStatusNotifierItem_TimerEvent_Callback(KStatusNotifierItem_TimerEvent_Callback cb) { kstatusnotifieritem_timerevent_callback = cb; }
    inline void setKStatusNotifierItem_ChildEvent_Callback(KStatusNotifierItem_ChildEvent_Callback cb) { kstatusnotifieritem_childevent_callback = cb; }
    inline void setKStatusNotifierItem_CustomEvent_Callback(KStatusNotifierItem_CustomEvent_Callback cb) { kstatusnotifieritem_customevent_callback = cb; }
    inline void setKStatusNotifierItem_ConnectNotify_Callback(KStatusNotifierItem_ConnectNotify_Callback cb) { kstatusnotifieritem_connectnotify_callback = cb; }
    inline void setKStatusNotifierItem_DisconnectNotify_Callback(KStatusNotifierItem_DisconnectNotify_Callback cb) { kstatusnotifieritem_disconnectnotify_callback = cb; }
    inline void setKStatusNotifierItem_Sender_Callback(KStatusNotifierItem_Sender_Callback cb) { kstatusnotifieritem_sender_callback = cb; }
    inline void setKStatusNotifierItem_SenderSignalIndex_Callback(KStatusNotifierItem_SenderSignalIndex_Callback cb) { kstatusnotifieritem_sendersignalindex_callback = cb; }
    inline void setKStatusNotifierItem_Receivers_Callback(KStatusNotifierItem_Receivers_Callback cb) { kstatusnotifieritem_receivers_callback = cb; }
    inline void setKStatusNotifierItem_IsSignalConnected_Callback(KStatusNotifierItem_IsSignalConnected_Callback cb) { kstatusnotifieritem_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKStatusNotifierItem_MetaObject_IsBase(bool value) const { kstatusnotifieritem_metaobject_isbase = value; }
    inline void setKStatusNotifierItem_Metacast_IsBase(bool value) const { kstatusnotifieritem_metacast_isbase = value; }
    inline void setKStatusNotifierItem_Metacall_IsBase(bool value) const { kstatusnotifieritem_metacall_isbase = value; }
    inline void setKStatusNotifierItem_Activate_IsBase(bool value) const { kstatusnotifieritem_activate_isbase = value; }
    inline void setKStatusNotifierItem_EventFilter_IsBase(bool value) const { kstatusnotifieritem_eventfilter_isbase = value; }
    inline void setKStatusNotifierItem_Event_IsBase(bool value) const { kstatusnotifieritem_event_isbase = value; }
    inline void setKStatusNotifierItem_TimerEvent_IsBase(bool value) const { kstatusnotifieritem_timerevent_isbase = value; }
    inline void setKStatusNotifierItem_ChildEvent_IsBase(bool value) const { kstatusnotifieritem_childevent_isbase = value; }
    inline void setKStatusNotifierItem_CustomEvent_IsBase(bool value) const { kstatusnotifieritem_customevent_isbase = value; }
    inline void setKStatusNotifierItem_ConnectNotify_IsBase(bool value) const { kstatusnotifieritem_connectnotify_isbase = value; }
    inline void setKStatusNotifierItem_DisconnectNotify_IsBase(bool value) const { kstatusnotifieritem_disconnectnotify_isbase = value; }
    inline void setKStatusNotifierItem_Sender_IsBase(bool value) const { kstatusnotifieritem_sender_isbase = value; }
    inline void setKStatusNotifierItem_SenderSignalIndex_IsBase(bool value) const { kstatusnotifieritem_sendersignalindex_isbase = value; }
    inline void setKStatusNotifierItem_Receivers_IsBase(bool value) const { kstatusnotifieritem_receivers_isbase = value; }
    inline void setKStatusNotifierItem_IsSignalConnected_IsBase(bool value) const { kstatusnotifieritem_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kstatusnotifieritem_metaobject_isbase) {
            kstatusnotifieritem_metaobject_isbase = false;
            return KStatusNotifierItem::metaObject();
        }
        auto metaobject_cb = kstatusnotifieritem_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KStatusNotifierItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kstatusnotifieritem_metacast_isbase) {
            kstatusnotifieritem_metacast_isbase = false;
            return KStatusNotifierItem::qt_metacast(param1);
        }
        auto metacast_cb = kstatusnotifieritem_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KStatusNotifierItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kstatusnotifieritem_metacall_isbase) {
            kstatusnotifieritem_metacall_isbase = false;
            return KStatusNotifierItem::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kstatusnotifieritem_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KStatusNotifierItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QPoint& pos) override {
        if (kstatusnotifieritem_activate_isbase) {
            kstatusnotifieritem_activate_isbase = false;
            KStatusNotifierItem::activate(pos);
            return;
        }
        auto activate_cb = kstatusnotifieritem_activate_callback;
        if (activate_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            activate_cb(this, cbval1);
            return;
        }
        KStatusNotifierItem::activate(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kstatusnotifieritem_eventfilter_isbase) {
            kstatusnotifieritem_eventfilter_isbase = false;
            return KStatusNotifierItem::eventFilter(watched, event);
        }
        auto eventfilter_cb = kstatusnotifieritem_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KStatusNotifierItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kstatusnotifieritem_event_isbase) {
            kstatusnotifieritem_event_isbase = false;
            return KStatusNotifierItem::event(event);
        }
        auto event_cb = kstatusnotifieritem_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KStatusNotifierItem::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kstatusnotifieritem_timerevent_isbase) {
            kstatusnotifieritem_timerevent_isbase = false;
            KStatusNotifierItem::timerEvent(event);
            return;
        }
        auto timerevent_cb = kstatusnotifieritem_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KStatusNotifierItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kstatusnotifieritem_childevent_isbase) {
            kstatusnotifieritem_childevent_isbase = false;
            KStatusNotifierItem::childEvent(event);
            return;
        }
        auto childevent_cb = kstatusnotifieritem_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KStatusNotifierItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kstatusnotifieritem_customevent_isbase) {
            kstatusnotifieritem_customevent_isbase = false;
            KStatusNotifierItem::customEvent(event);
            return;
        }
        auto customevent_cb = kstatusnotifieritem_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KStatusNotifierItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kstatusnotifieritem_connectnotify_isbase) {
            kstatusnotifieritem_connectnotify_isbase = false;
            KStatusNotifierItem::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kstatusnotifieritem_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KStatusNotifierItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kstatusnotifieritem_disconnectnotify_isbase) {
            kstatusnotifieritem_disconnectnotify_isbase = false;
            KStatusNotifierItem::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kstatusnotifieritem_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KStatusNotifierItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kstatusnotifieritem_sender_isbase) {
            kstatusnotifieritem_sender_isbase = false;
            return KStatusNotifierItem::sender();
        }
        auto sender_cb = kstatusnotifieritem_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KStatusNotifierItem::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kstatusnotifieritem_sendersignalindex_isbase) {
            kstatusnotifieritem_sendersignalindex_isbase = false;
            return KStatusNotifierItem::senderSignalIndex();
        }
        auto sendersignalindex_cb = kstatusnotifieritem_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KStatusNotifierItem::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kstatusnotifieritem_receivers_isbase) {
            kstatusnotifieritem_receivers_isbase = false;
            return KStatusNotifierItem::receivers(signal);
        }
        auto receivers_cb = kstatusnotifieritem_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KStatusNotifierItem::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kstatusnotifieritem_issignalconnected_isbase) {
            kstatusnotifieritem_issignalconnected_isbase = false;
            return KStatusNotifierItem::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kstatusnotifieritem_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KStatusNotifierItem::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KStatusNotifierItem_EventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event);
    friend bool KStatusNotifierItem_SuperEventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event);
    friend void KStatusNotifierItem_TimerEvent(KStatusNotifierItem* self, QTimerEvent* event);
    friend void KStatusNotifierItem_SuperTimerEvent(KStatusNotifierItem* self, QTimerEvent* event);
    friend void KStatusNotifierItem_ChildEvent(KStatusNotifierItem* self, QChildEvent* event);
    friend void KStatusNotifierItem_SuperChildEvent(KStatusNotifierItem* self, QChildEvent* event);
    friend void KStatusNotifierItem_CustomEvent(KStatusNotifierItem* self, QEvent* event);
    friend void KStatusNotifierItem_SuperCustomEvent(KStatusNotifierItem* self, QEvent* event);
    friend void KStatusNotifierItem_ConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
    friend void KStatusNotifierItem_SuperConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
    friend void KStatusNotifierItem_DisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
    friend void KStatusNotifierItem_SuperDisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
    friend QObject* KStatusNotifierItem_Sender(const KStatusNotifierItem* self);
    friend QObject* KStatusNotifierItem_SuperSender(const KStatusNotifierItem* self);
    friend int KStatusNotifierItem_SenderSignalIndex(const KStatusNotifierItem* self);
    friend int KStatusNotifierItem_SuperSenderSignalIndex(const KStatusNotifierItem* self);
    friend int KStatusNotifierItem_Receivers(const KStatusNotifierItem* self, const char* signal);
    friend int KStatusNotifierItem_SuperReceivers(const KStatusNotifierItem* self, const char* signal);
    friend bool KStatusNotifierItem_IsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal);
    friend bool KStatusNotifierItem_SuperIsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal);
};

#endif
