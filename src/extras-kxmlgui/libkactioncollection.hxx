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

    ~VirtualKActionCollection() {
        kactioncollection_metacall_callback = nullptr;
        kactioncollection_connectnotify_callback = nullptr;
        kactioncollection_slotactiontriggered_callback = nullptr;
        kactioncollection_event_callback = nullptr;
        kactioncollection_eventfilter_callback = nullptr;
        kactioncollection_timerevent_callback = nullptr;
        kactioncollection_childevent_callback = nullptr;
        kactioncollection_customevent_callback = nullptr;
        kactioncollection_disconnectnotify_callback = nullptr;
        kactioncollection_sender_callback = nullptr;
        kactioncollection_sendersignalindex_callback = nullptr;
        kactioncollection_receivers_callback = nullptr;
        kactioncollection_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactioncollection_metacall_isbase) {
            kactioncollection_metacall_isbase = false;
            return KActionCollection::qt_metacall(param1, param2, param3);
        } else if (kactioncollection_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kactioncollection_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KActionCollection::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactioncollection_connectnotify_isbase) {
            kactioncollection_connectnotify_isbase = false;
            KActionCollection::connectNotify(signal);
        } else if (kactioncollection_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactioncollection_connectnotify_callback(this, cbval1);
        } else {
            KActionCollection::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered() override {
        if (kactioncollection_slotactiontriggered_isbase) {
            kactioncollection_slotactiontriggered_isbase = false;
            KActionCollection::slotActionTriggered();
        } else if (kactioncollection_slotactiontriggered_callback != nullptr) {
            kactioncollection_slotactiontriggered_callback();
        } else {
            KActionCollection::slotActionTriggered();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactioncollection_event_isbase) {
            kactioncollection_event_isbase = false;
            return KActionCollection::event(event);
        } else if (kactioncollection_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kactioncollection_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionCollection::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kactioncollection_eventfilter_isbase) {
            kactioncollection_eventfilter_isbase = false;
            return KActionCollection::eventFilter(watched, event);
        } else if (kactioncollection_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kactioncollection_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KActionCollection::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactioncollection_timerevent_isbase) {
            kactioncollection_timerevent_isbase = false;
            KActionCollection::timerEvent(event);
        } else if (kactioncollection_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kactioncollection_timerevent_callback(this, cbval1);
        } else {
            KActionCollection::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactioncollection_childevent_isbase) {
            kactioncollection_childevent_isbase = false;
            KActionCollection::childEvent(event);
        } else if (kactioncollection_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kactioncollection_childevent_callback(this, cbval1);
        } else {
            KActionCollection::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactioncollection_customevent_isbase) {
            kactioncollection_customevent_isbase = false;
            KActionCollection::customEvent(event);
        } else if (kactioncollection_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kactioncollection_customevent_callback(this, cbval1);
        } else {
            KActionCollection::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactioncollection_disconnectnotify_isbase) {
            kactioncollection_disconnectnotify_isbase = false;
            KActionCollection::disconnectNotify(signal);
        } else if (kactioncollection_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactioncollection_disconnectnotify_callback(this, cbval1);
        } else {
            KActionCollection::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactioncollection_sender_isbase) {
            kactioncollection_sender_isbase = false;
            return KActionCollection::sender();
        } else if (kactioncollection_sender_callback != nullptr) {
            QObject* callback_ret = kactioncollection_sender_callback();
            return callback_ret;
        } else {
            return KActionCollection::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactioncollection_sendersignalindex_isbase) {
            kactioncollection_sendersignalindex_isbase = false;
            return KActionCollection::senderSignalIndex();
        } else if (kactioncollection_sendersignalindex_callback != nullptr) {
            int callback_ret = kactioncollection_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KActionCollection::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactioncollection_receivers_isbase) {
            kactioncollection_receivers_isbase = false;
            return KActionCollection::receivers(signal);
        } else if (kactioncollection_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kactioncollection_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KActionCollection::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactioncollection_issignalconnected_isbase) {
            kactioncollection_issignalconnected_isbase = false;
            return KActionCollection::isSignalConnected(signal);
        } else if (kactioncollection_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kactioncollection_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionCollection::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KActionCollection_ConnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_QBaseConnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_SlotActionTriggered(KActionCollection* self);
    friend void KActionCollection_QBaseSlotActionTriggered(KActionCollection* self);
    friend void KActionCollection_TimerEvent(KActionCollection* self, QTimerEvent* event);
    friend void KActionCollection_QBaseTimerEvent(KActionCollection* self, QTimerEvent* event);
    friend void KActionCollection_ChildEvent(KActionCollection* self, QChildEvent* event);
    friend void KActionCollection_QBaseChildEvent(KActionCollection* self, QChildEvent* event);
    friend void KActionCollection_CustomEvent(KActionCollection* self, QEvent* event);
    friend void KActionCollection_QBaseCustomEvent(KActionCollection* self, QEvent* event);
    friend void KActionCollection_DisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_QBaseDisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend QObject* KActionCollection_Sender(const KActionCollection* self);
    friend QObject* KActionCollection_QBaseSender(const KActionCollection* self);
    friend int KActionCollection_SenderSignalIndex(const KActionCollection* self);
    friend int KActionCollection_QBaseSenderSignalIndex(const KActionCollection* self);
    friend int KActionCollection_Receivers(const KActionCollection* self, const char* signal);
    friend int KActionCollection_QBaseReceivers(const KActionCollection* self, const char* signal);
    friend bool KActionCollection_IsSignalConnected(const KActionCollection* self, const QMetaMethod* signal);
    friend bool KActionCollection_QBaseIsSignalConnected(const KActionCollection* self, const QMetaMethod* signal);
};

#endif
