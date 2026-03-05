#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKACTIONCOLLECTION_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKACTIONCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionCollection so that we can call protected methods
class VirtualKActionCollection final : public KActionCollection {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionCollection = true;

    // Virtual class public types (including callbacks)
    using KActionCollection_MetaObject_Callback = QMetaObject* (*)();
    using KActionCollection_Metacast_Callback = void* (*)(KActionCollection*, const char*);
    using KActionCollection_Metacall_Callback = int (*)(KActionCollection*, int, int, void**);
    using KActionCollection_ConnectNotify_Callback = void (*)(KActionCollection*, QMetaMethod*);
    using KActionCollection_SlotActionTriggered_Callback = void (*)();
    using KActionCollection_Event_Callback = bool (*)(KActionCollection*, QEvent*);
    using KActionCollection_EventFilter_Callback = bool (*)(KActionCollection*, QObject*, QEvent*);
    using KActionCollection_TimerEvent_Callback = void (*)(KActionCollection*, QTimerEvent*);
    using KActionCollection_ChildEvent_Callback = void (*)(KActionCollection*, QChildEvent*);
    using KActionCollection_CustomEvent_Callback = void (*)(KActionCollection*, QEvent*);
    using KActionCollection_DisconnectNotify_Callback = void (*)(KActionCollection*, QMetaMethod*);
    using KActionCollection_Sender_Callback = QObject* (*)();
    using KActionCollection_SenderSignalIndex_Callback = int (*)();
    using KActionCollection_Receivers_Callback = int (*)(const KActionCollection*, const char*);
    using KActionCollection_IsSignalConnected_Callback = bool (*)(const KActionCollection*, QMetaMethod*);

  protected:
    // Instance callback storage
    KActionCollection_MetaObject_Callback kactioncollection_metaobject_callback = nullptr;
    KActionCollection_Metacast_Callback kactioncollection_metacast_callback = nullptr;
    KActionCollection_Metacall_Callback kactioncollection_metacall_callback = nullptr;
    KActionCollection_ConnectNotify_Callback kactioncollection_connectnotify_callback = nullptr;
    KActionCollection_SlotActionTriggered_Callback kactioncollection_slotactiontriggered_callback = nullptr;
    KActionCollection_Event_Callback kactioncollection_event_callback = nullptr;
    KActionCollection_EventFilter_Callback kactioncollection_eventfilter_callback = nullptr;
    KActionCollection_TimerEvent_Callback kactioncollection_timerevent_callback = nullptr;
    KActionCollection_ChildEvent_Callback kactioncollection_childevent_callback = nullptr;
    KActionCollection_CustomEvent_Callback kactioncollection_customevent_callback = nullptr;
    KActionCollection_DisconnectNotify_Callback kactioncollection_disconnectnotify_callback = nullptr;
    KActionCollection_Sender_Callback kactioncollection_sender_callback = nullptr;
    KActionCollection_SenderSignalIndex_Callback kactioncollection_sendersignalindex_callback = nullptr;
    KActionCollection_Receivers_Callback kactioncollection_receivers_callback = nullptr;
    KActionCollection_IsSignalConnected_Callback kactioncollection_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kactioncollection_metaobject_isbase = false;
    mutable bool kactioncollection_metacast_isbase = false;
    mutable bool kactioncollection_metacall_isbase = false;
    mutable bool kactioncollection_connectnotify_isbase = false;
    mutable bool kactioncollection_slotactiontriggered_isbase = false;
    mutable bool kactioncollection_event_isbase = false;
    mutable bool kactioncollection_eventfilter_isbase = false;
    mutable bool kactioncollection_timerevent_isbase = false;
    mutable bool kactioncollection_childevent_isbase = false;
    mutable bool kactioncollection_customevent_isbase = false;
    mutable bool kactioncollection_disconnectnotify_isbase = false;
    mutable bool kactioncollection_sender_isbase = false;
    mutable bool kactioncollection_sendersignalindex_isbase = false;
    mutable bool kactioncollection_receivers_isbase = false;
    mutable bool kactioncollection_issignalconnected_isbase = false;

  public:
    VirtualKActionCollection(QObject* parent) : KActionCollection(parent) {};
    VirtualKActionCollection(QObject* parent, const QString& cName) : KActionCollection(parent, cName) {};

    // Callback setters
    inline void setKActionCollection_MetaObject_Callback(KActionCollection_MetaObject_Callback cb) { kactioncollection_metaobject_callback = cb; }
    inline void setKActionCollection_Metacast_Callback(KActionCollection_Metacast_Callback cb) { kactioncollection_metacast_callback = cb; }
    inline void setKActionCollection_Metacall_Callback(KActionCollection_Metacall_Callback cb) { kactioncollection_metacall_callback = cb; }
    inline void setKActionCollection_ConnectNotify_Callback(KActionCollection_ConnectNotify_Callback cb) { kactioncollection_connectnotify_callback = cb; }
    inline void setKActionCollection_SlotActionTriggered_Callback(KActionCollection_SlotActionTriggered_Callback cb) { kactioncollection_slotactiontriggered_callback = cb; }
    inline void setKActionCollection_Event_Callback(KActionCollection_Event_Callback cb) { kactioncollection_event_callback = cb; }
    inline void setKActionCollection_EventFilter_Callback(KActionCollection_EventFilter_Callback cb) { kactioncollection_eventfilter_callback = cb; }
    inline void setKActionCollection_TimerEvent_Callback(KActionCollection_TimerEvent_Callback cb) { kactioncollection_timerevent_callback = cb; }
    inline void setKActionCollection_ChildEvent_Callback(KActionCollection_ChildEvent_Callback cb) { kactioncollection_childevent_callback = cb; }
    inline void setKActionCollection_CustomEvent_Callback(KActionCollection_CustomEvent_Callback cb) { kactioncollection_customevent_callback = cb; }
    inline void setKActionCollection_DisconnectNotify_Callback(KActionCollection_DisconnectNotify_Callback cb) { kactioncollection_disconnectnotify_callback = cb; }
    inline void setKActionCollection_Sender_Callback(KActionCollection_Sender_Callback cb) { kactioncollection_sender_callback = cb; }
    inline void setKActionCollection_SenderSignalIndex_Callback(KActionCollection_SenderSignalIndex_Callback cb) { kactioncollection_sendersignalindex_callback = cb; }
    inline void setKActionCollection_Receivers_Callback(KActionCollection_Receivers_Callback cb) { kactioncollection_receivers_callback = cb; }
    inline void setKActionCollection_IsSignalConnected_Callback(KActionCollection_IsSignalConnected_Callback cb) { kactioncollection_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKActionCollection_MetaObject_IsBase(bool value) const { kactioncollection_metaobject_isbase = value; }
    inline void setKActionCollection_Metacast_IsBase(bool value) const { kactioncollection_metacast_isbase = value; }
    inline void setKActionCollection_Metacall_IsBase(bool value) const { kactioncollection_metacall_isbase = value; }
    inline void setKActionCollection_ConnectNotify_IsBase(bool value) const { kactioncollection_connectnotify_isbase = value; }
    inline void setKActionCollection_SlotActionTriggered_IsBase(bool value) const { kactioncollection_slotactiontriggered_isbase = value; }
    inline void setKActionCollection_Event_IsBase(bool value) const { kactioncollection_event_isbase = value; }
    inline void setKActionCollection_EventFilter_IsBase(bool value) const { kactioncollection_eventfilter_isbase = value; }
    inline void setKActionCollection_TimerEvent_IsBase(bool value) const { kactioncollection_timerevent_isbase = value; }
    inline void setKActionCollection_ChildEvent_IsBase(bool value) const { kactioncollection_childevent_isbase = value; }
    inline void setKActionCollection_CustomEvent_IsBase(bool value) const { kactioncollection_customevent_isbase = value; }
    inline void setKActionCollection_DisconnectNotify_IsBase(bool value) const { kactioncollection_disconnectnotify_isbase = value; }
    inline void setKActionCollection_Sender_IsBase(bool value) const { kactioncollection_sender_isbase = value; }
    inline void setKActionCollection_SenderSignalIndex_IsBase(bool value) const { kactioncollection_sendersignalindex_isbase = value; }
    inline void setKActionCollection_Receivers_IsBase(bool value) const { kactioncollection_receivers_isbase = value; }
    inline void setKActionCollection_IsSignalConnected_IsBase(bool value) const { kactioncollection_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactioncollection_metaobject_isbase) {
            kactioncollection_metaobject_isbase = false;
            return KActionCollection::metaObject();
        }
        auto metaobject_cb = kactioncollection_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KActionCollection::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactioncollection_metacast_isbase) {
            kactioncollection_metacast_isbase = false;
            return KActionCollection::qt_metacast(param1);
        }
        auto metacast_cb = kactioncollection_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KActionCollection::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactioncollection_metacall_isbase) {
            kactioncollection_metacall_isbase = false;
            return KActionCollection::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kactioncollection_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionCollection::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactioncollection_connectnotify_isbase) {
            kactioncollection_connectnotify_isbase = false;
            KActionCollection::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kactioncollection_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KActionCollection::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered() override {
        if (kactioncollection_slotactiontriggered_isbase) {
            kactioncollection_slotactiontriggered_isbase = false;
            KActionCollection::slotActionTriggered();
            return;
        }
        auto slotactiontriggered_cb = kactioncollection_slotactiontriggered_callback;
        if (slotactiontriggered_cb) {
            slotactiontriggered_cb();
            return;
        }
        KActionCollection::slotActionTriggered();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactioncollection_event_isbase) {
            kactioncollection_event_isbase = false;
            return KActionCollection::event(event);
        }
        auto event_cb = kactioncollection_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KActionCollection::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kactioncollection_eventfilter_isbase) {
            kactioncollection_eventfilter_isbase = false;
            return KActionCollection::eventFilter(watched, event);
        }
        auto eventfilter_cb = kactioncollection_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionCollection::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactioncollection_timerevent_isbase) {
            kactioncollection_timerevent_isbase = false;
            KActionCollection::timerEvent(event);
            return;
        }
        auto timerevent_cb = kactioncollection_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KActionCollection::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactioncollection_childevent_isbase) {
            kactioncollection_childevent_isbase = false;
            KActionCollection::childEvent(event);
            return;
        }
        auto childevent_cb = kactioncollection_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KActionCollection::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactioncollection_customevent_isbase) {
            kactioncollection_customevent_isbase = false;
            KActionCollection::customEvent(event);
            return;
        }
        auto customevent_cb = kactioncollection_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KActionCollection::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactioncollection_disconnectnotify_isbase) {
            kactioncollection_disconnectnotify_isbase = false;
            KActionCollection::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kactioncollection_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KActionCollection::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactioncollection_sender_isbase) {
            kactioncollection_sender_isbase = false;
            return KActionCollection::sender();
        }
        auto sender_cb = kactioncollection_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KActionCollection::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactioncollection_sendersignalindex_isbase) {
            kactioncollection_sendersignalindex_isbase = false;
            return KActionCollection::senderSignalIndex();
        }
        auto sendersignalindex_cb = kactioncollection_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KActionCollection::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactioncollection_receivers_isbase) {
            kactioncollection_receivers_isbase = false;
            return KActionCollection::receivers(signal);
        }
        auto receivers_cb = kactioncollection_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionCollection::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactioncollection_issignalconnected_isbase) {
            kactioncollection_issignalconnected_isbase = false;
            return KActionCollection::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kactioncollection_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KActionCollection::isSignalConnected(signal);
    }

    // Friend functions
    friend void KActionCollection_ConnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_SuperConnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_SlotActionTriggered(KActionCollection* self);
    friend void KActionCollection_SuperSlotActionTriggered(KActionCollection* self);
    friend void KActionCollection_TimerEvent(KActionCollection* self, QTimerEvent* event);
    friend void KActionCollection_SuperTimerEvent(KActionCollection* self, QTimerEvent* event);
    friend void KActionCollection_ChildEvent(KActionCollection* self, QChildEvent* event);
    friend void KActionCollection_SuperChildEvent(KActionCollection* self, QChildEvent* event);
    friend void KActionCollection_CustomEvent(KActionCollection* self, QEvent* event);
    friend void KActionCollection_SuperCustomEvent(KActionCollection* self, QEvent* event);
    friend void KActionCollection_DisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_SuperDisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend QObject* KActionCollection_Sender(const KActionCollection* self);
    friend QObject* KActionCollection_SuperSender(const KActionCollection* self);
    friend int KActionCollection_SenderSignalIndex(const KActionCollection* self);
    friend int KActionCollection_SuperSenderSignalIndex(const KActionCollection* self);
    friend int KActionCollection_Receivers(const KActionCollection* self, const char* signal);
    friend int KActionCollection_SuperReceivers(const KActionCollection* self, const char* signal);
    friend bool KActionCollection_IsSignalConnected(const KActionCollection* self, const QMetaMethod* signal);
    friend bool KActionCollection_SuperIsSignalConnected(const KActionCollection* self, const QMetaMethod* signal);
};

#endif
