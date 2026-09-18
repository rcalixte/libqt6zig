#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_HXX
#define EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KirigamiActionCollection so that we can call protected methods
class VirtualKirigamiActionCollection final : public KirigamiActionCollection {

  public:
    // Virtual class boolean flag
    bool isVirtualKirigamiActionCollection = true;

    // Virtual class public types (including callbacks)
    using KirigamiActionCollection_MetaObject_Callback = QMetaObject* (*)();
    using KirigamiActionCollection_Metacast_Callback = void* (*)(KirigamiActionCollection*, const char*);
    using KirigamiActionCollection_Metacall_Callback = int (*)(KirigamiActionCollection*, int, int, void**);
    using KirigamiActionCollection_ConnectNotify_Callback = void (*)(KirigamiActionCollection*, QMetaMethod*);
    using KirigamiActionCollection_SlotActionTriggered_Callback = void (*)();
    using KirigamiActionCollection_Event_Callback = bool (*)(KirigamiActionCollection*, QEvent*);
    using KirigamiActionCollection_EventFilter_Callback = bool (*)(KirigamiActionCollection*, QObject*, QEvent*);
    using KirigamiActionCollection_TimerEvent_Callback = void (*)(KirigamiActionCollection*, QTimerEvent*);
    using KirigamiActionCollection_ChildEvent_Callback = void (*)(KirigamiActionCollection*, QChildEvent*);
    using KirigamiActionCollection_CustomEvent_Callback = void (*)(KirigamiActionCollection*, QEvent*);
    using KirigamiActionCollection_DisconnectNotify_Callback = void (*)(KirigamiActionCollection*, QMetaMethod*);
    using KirigamiActionCollection_Sender_Callback = QObject* (*)();
    using KirigamiActionCollection_SenderSignalIndex_Callback = int (*)();
    using KirigamiActionCollection_Receivers_Callback = int (*)(const KirigamiActionCollection*, const char*);
    using KirigamiActionCollection_IsSignalConnected_Callback = bool (*)(const KirigamiActionCollection*, QMetaMethod*);

  protected:
    // Instance callback storage
    KirigamiActionCollection_MetaObject_Callback kirigamiactioncollection_metaobject_callback = nullptr;
    KirigamiActionCollection_Metacast_Callback kirigamiactioncollection_metacast_callback = nullptr;
    KirigamiActionCollection_Metacall_Callback kirigamiactioncollection_metacall_callback = nullptr;
    KirigamiActionCollection_ConnectNotify_Callback kirigamiactioncollection_connectnotify_callback = nullptr;
    KirigamiActionCollection_SlotActionTriggered_Callback kirigamiactioncollection_slotactiontriggered_callback = nullptr;
    KirigamiActionCollection_Event_Callback kirigamiactioncollection_event_callback = nullptr;
    KirigamiActionCollection_EventFilter_Callback kirigamiactioncollection_eventfilter_callback = nullptr;
    KirigamiActionCollection_TimerEvent_Callback kirigamiactioncollection_timerevent_callback = nullptr;
    KirigamiActionCollection_ChildEvent_Callback kirigamiactioncollection_childevent_callback = nullptr;
    KirigamiActionCollection_CustomEvent_Callback kirigamiactioncollection_customevent_callback = nullptr;
    KirigamiActionCollection_DisconnectNotify_Callback kirigamiactioncollection_disconnectnotify_callback = nullptr;
    KirigamiActionCollection_Sender_Callback kirigamiactioncollection_sender_callback = nullptr;
    KirigamiActionCollection_SenderSignalIndex_Callback kirigamiactioncollection_sendersignalindex_callback = nullptr;
    KirigamiActionCollection_Receivers_Callback kirigamiactioncollection_receivers_callback = nullptr;
    KirigamiActionCollection_IsSignalConnected_Callback kirigamiactioncollection_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kirigamiactioncollection_metaobject_isbase = false;
    mutable bool kirigamiactioncollection_metacast_isbase = false;
    mutable bool kirigamiactioncollection_metacall_isbase = false;
    mutable bool kirigamiactioncollection_connectnotify_isbase = false;
    mutable bool kirigamiactioncollection_slotactiontriggered_isbase = false;
    mutable bool kirigamiactioncollection_event_isbase = false;
    mutable bool kirigamiactioncollection_eventfilter_isbase = false;
    mutable bool kirigamiactioncollection_timerevent_isbase = false;
    mutable bool kirigamiactioncollection_childevent_isbase = false;
    mutable bool kirigamiactioncollection_customevent_isbase = false;
    mutable bool kirigamiactioncollection_disconnectnotify_isbase = false;
    mutable bool kirigamiactioncollection_sender_isbase = false;
    mutable bool kirigamiactioncollection_sendersignalindex_isbase = false;
    mutable bool kirigamiactioncollection_receivers_isbase = false;
    mutable bool kirigamiactioncollection_issignalconnected_isbase = false;

  public:
    VirtualKirigamiActionCollection(QObject* parent) : KirigamiActionCollection(parent) {};
    VirtualKirigamiActionCollection(QObject* parent, const QString& cName) : KirigamiActionCollection(parent, cName) {};

    // Callback setters
    inline void setKirigamiActionCollection_MetaObject_Callback(KirigamiActionCollection_MetaObject_Callback cb) { kirigamiactioncollection_metaobject_callback = cb; }
    inline void setKirigamiActionCollection_Metacast_Callback(KirigamiActionCollection_Metacast_Callback cb) { kirigamiactioncollection_metacast_callback = cb; }
    inline void setKirigamiActionCollection_Metacall_Callback(KirigamiActionCollection_Metacall_Callback cb) { kirigamiactioncollection_metacall_callback = cb; }
    inline void setKirigamiActionCollection_ConnectNotify_Callback(KirigamiActionCollection_ConnectNotify_Callback cb) { kirigamiactioncollection_connectnotify_callback = cb; }
    inline void setKirigamiActionCollection_SlotActionTriggered_Callback(KirigamiActionCollection_SlotActionTriggered_Callback cb) { kirigamiactioncollection_slotactiontriggered_callback = cb; }
    inline void setKirigamiActionCollection_Event_Callback(KirigamiActionCollection_Event_Callback cb) { kirigamiactioncollection_event_callback = cb; }
    inline void setKirigamiActionCollection_EventFilter_Callback(KirigamiActionCollection_EventFilter_Callback cb) { kirigamiactioncollection_eventfilter_callback = cb; }
    inline void setKirigamiActionCollection_TimerEvent_Callback(KirigamiActionCollection_TimerEvent_Callback cb) { kirigamiactioncollection_timerevent_callback = cb; }
    inline void setKirigamiActionCollection_ChildEvent_Callback(KirigamiActionCollection_ChildEvent_Callback cb) { kirigamiactioncollection_childevent_callback = cb; }
    inline void setKirigamiActionCollection_CustomEvent_Callback(KirigamiActionCollection_CustomEvent_Callback cb) { kirigamiactioncollection_customevent_callback = cb; }
    inline void setKirigamiActionCollection_DisconnectNotify_Callback(KirigamiActionCollection_DisconnectNotify_Callback cb) { kirigamiactioncollection_disconnectnotify_callback = cb; }
    inline void setKirigamiActionCollection_Sender_Callback(KirigamiActionCollection_Sender_Callback cb) { kirigamiactioncollection_sender_callback = cb; }
    inline void setKirigamiActionCollection_SenderSignalIndex_Callback(KirigamiActionCollection_SenderSignalIndex_Callback cb) { kirigamiactioncollection_sendersignalindex_callback = cb; }
    inline void setKirigamiActionCollection_Receivers_Callback(KirigamiActionCollection_Receivers_Callback cb) { kirigamiactioncollection_receivers_callback = cb; }
    inline void setKirigamiActionCollection_IsSignalConnected_Callback(KirigamiActionCollection_IsSignalConnected_Callback cb) { kirigamiactioncollection_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKirigamiActionCollection_MetaObject_IsBase(bool value) const { kirigamiactioncollection_metaobject_isbase = value; }
    inline void setKirigamiActionCollection_Metacast_IsBase(bool value) const { kirigamiactioncollection_metacast_isbase = value; }
    inline void setKirigamiActionCollection_Metacall_IsBase(bool value) const { kirigamiactioncollection_metacall_isbase = value; }
    inline void setKirigamiActionCollection_ConnectNotify_IsBase(bool value) const { kirigamiactioncollection_connectnotify_isbase = value; }
    inline void setKirigamiActionCollection_SlotActionTriggered_IsBase(bool value) const { kirigamiactioncollection_slotactiontriggered_isbase = value; }
    inline void setKirigamiActionCollection_Event_IsBase(bool value) const { kirigamiactioncollection_event_isbase = value; }
    inline void setKirigamiActionCollection_EventFilter_IsBase(bool value) const { kirigamiactioncollection_eventfilter_isbase = value; }
    inline void setKirigamiActionCollection_TimerEvent_IsBase(bool value) const { kirigamiactioncollection_timerevent_isbase = value; }
    inline void setKirigamiActionCollection_ChildEvent_IsBase(bool value) const { kirigamiactioncollection_childevent_isbase = value; }
    inline void setKirigamiActionCollection_CustomEvent_IsBase(bool value) const { kirigamiactioncollection_customevent_isbase = value; }
    inline void setKirigamiActionCollection_DisconnectNotify_IsBase(bool value) const { kirigamiactioncollection_disconnectnotify_isbase = value; }
    inline void setKirigamiActionCollection_Sender_IsBase(bool value) const { kirigamiactioncollection_sender_isbase = value; }
    inline void setKirigamiActionCollection_SenderSignalIndex_IsBase(bool value) const { kirigamiactioncollection_sendersignalindex_isbase = value; }
    inline void setKirigamiActionCollection_Receivers_IsBase(bool value) const { kirigamiactioncollection_receivers_isbase = value; }
    inline void setKirigamiActionCollection_IsSignalConnected_IsBase(bool value) const { kirigamiactioncollection_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigamiactioncollection_metaobject_isbase) {
            kirigamiactioncollection_metaobject_isbase = false;
            return KirigamiActionCollection::metaObject();
        }
        auto metaobject_cb = kirigamiactioncollection_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KirigamiActionCollection::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigamiactioncollection_metacast_isbase) {
            kirigamiactioncollection_metacast_isbase = false;
            return KirigamiActionCollection::qt_metacast(param1);
        }
        auto metacast_cb = kirigamiactioncollection_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KirigamiActionCollection::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigamiactioncollection_metacall_isbase) {
            kirigamiactioncollection_metacall_isbase = false;
            return KirigamiActionCollection::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kirigamiactioncollection_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KirigamiActionCollection::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigamiactioncollection_connectnotify_isbase) {
            kirigamiactioncollection_connectnotify_isbase = false;
            KirigamiActionCollection::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kirigamiactioncollection_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        KirigamiActionCollection::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered() override {
        if (kirigamiactioncollection_slotactiontriggered_isbase) {
            kirigamiactioncollection_slotactiontriggered_isbase = false;
            KirigamiActionCollection::slotActionTriggered();
            return;
        }
        auto slotactiontriggered_cb = kirigamiactioncollection_slotactiontriggered_callback;
        if (slotactiontriggered_cb) {
            slotactiontriggered_cb();
            return;
        }
        KirigamiActionCollection::slotActionTriggered();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigamiactioncollection_event_isbase) {
            kirigamiactioncollection_event_isbase = false;
            return KirigamiActionCollection::event(event);
        }
        auto event_cb = kirigamiactioncollection_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KirigamiActionCollection::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigamiactioncollection_eventfilter_isbase) {
            kirigamiactioncollection_eventfilter_isbase = false;
            return KirigamiActionCollection::eventFilter(watched, event);
        }
        auto eventfilter_cb = kirigamiactioncollection_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KirigamiActionCollection::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigamiactioncollection_timerevent_isbase) {
            kirigamiactioncollection_timerevent_isbase = false;
            KirigamiActionCollection::timerEvent(event);
            return;
        }
        auto timerevent_cb = kirigamiactioncollection_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        KirigamiActionCollection::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigamiactioncollection_childevent_isbase) {
            kirigamiactioncollection_childevent_isbase = false;
            KirigamiActionCollection::childEvent(event);
            return;
        }
        auto childevent_cb = kirigamiactioncollection_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        KirigamiActionCollection::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigamiactioncollection_customevent_isbase) {
            kirigamiactioncollection_customevent_isbase = false;
            KirigamiActionCollection::customEvent(event);
            return;
        }
        auto customevent_cb = kirigamiactioncollection_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        KirigamiActionCollection::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigamiactioncollection_disconnectnotify_isbase) {
            kirigamiactioncollection_disconnectnotify_isbase = false;
            KirigamiActionCollection::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kirigamiactioncollection_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        KirigamiActionCollection::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kirigamiactioncollection_sender_isbase) {
            kirigamiactioncollection_sender_isbase = false;
            return KirigamiActionCollection::sender();
        }
        auto sender_cb = kirigamiactioncollection_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KirigamiActionCollection::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kirigamiactioncollection_sendersignalindex_isbase) {
            kirigamiactioncollection_sendersignalindex_isbase = false;
            return KirigamiActionCollection::senderSignalIndex();
        }
        auto sendersignalindex_cb = kirigamiactioncollection_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KirigamiActionCollection::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kirigamiactioncollection_receivers_isbase) {
            kirigamiactioncollection_receivers_isbase = false;
            return KirigamiActionCollection::receivers(signal);
        }
        auto receivers_cb = kirigamiactioncollection_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KirigamiActionCollection::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kirigamiactioncollection_issignalconnected_isbase) {
            kirigamiactioncollection_issignalconnected_isbase = false;
            return KirigamiActionCollection::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kirigamiactioncollection_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KirigamiActionCollection::isSignalConnected(signal);
    }

    // Friend functions
    friend void KirigamiActionCollection_ConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
    friend void KirigamiActionCollection_SuperConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
    friend void KirigamiActionCollection_SlotActionTriggered(KirigamiActionCollection* self);
    friend void KirigamiActionCollection_SuperSlotActionTriggered(KirigamiActionCollection* self);
    friend void KirigamiActionCollection_TimerEvent(KirigamiActionCollection* self, QTimerEvent* event);
    friend void KirigamiActionCollection_SuperTimerEvent(KirigamiActionCollection* self, QTimerEvent* event);
    friend void KirigamiActionCollection_ChildEvent(KirigamiActionCollection* self, QChildEvent* event);
    friend void KirigamiActionCollection_SuperChildEvent(KirigamiActionCollection* self, QChildEvent* event);
    friend void KirigamiActionCollection_CustomEvent(KirigamiActionCollection* self, QEvent* event);
    friend void KirigamiActionCollection_SuperCustomEvent(KirigamiActionCollection* self, QEvent* event);
    friend void KirigamiActionCollection_DisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
    friend void KirigamiActionCollection_SuperDisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
    friend QObject* KirigamiActionCollection_Sender(const KirigamiActionCollection* self);
    friend QObject* KirigamiActionCollection_SuperSender(const KirigamiActionCollection* self);
    friend int KirigamiActionCollection_SenderSignalIndex(const KirigamiActionCollection* self);
    friend int KirigamiActionCollection_SuperSenderSignalIndex(const KirigamiActionCollection* self);
    friend int KirigamiActionCollection_Receivers(const KirigamiActionCollection* self, const char* signal);
    friend int KirigamiActionCollection_SuperReceivers(const KirigamiActionCollection* self, const char* signal);
    friend bool KirigamiActionCollection_IsSignalConnected(const KirigamiActionCollection* self, const QMetaMethod* signal);
    friend bool KirigamiActionCollection_SuperIsSignalConnected(const KirigamiActionCollection* self, const QMetaMethod* signal);
};

#endif
