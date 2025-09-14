#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKXMESSAGES_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKXMESSAGES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMessages so that we can call protected methods
class VirtualKXMessages final : public KXMessages {

  public:
    // Virtual class boolean flag
    bool isVirtualKXMessages = true;

    // Virtual class public types (including callbacks)
    using KXMessages_Metacall_Callback = int (*)(KXMessages*, int, int, void**);
    using KXMessages_Event_Callback = bool (*)(KXMessages*, QEvent*);
    using KXMessages_EventFilter_Callback = bool (*)(KXMessages*, QObject*, QEvent*);
    using KXMessages_TimerEvent_Callback = void (*)(KXMessages*, QTimerEvent*);
    using KXMessages_ChildEvent_Callback = void (*)(KXMessages*, QChildEvent*);
    using KXMessages_CustomEvent_Callback = void (*)(KXMessages*, QEvent*);
    using KXMessages_ConnectNotify_Callback = void (*)(KXMessages*, QMetaMethod*);
    using KXMessages_DisconnectNotify_Callback = void (*)(KXMessages*, QMetaMethod*);
    using KXMessages_Sender_Callback = QObject* (*)();
    using KXMessages_SenderSignalIndex_Callback = int (*)();
    using KXMessages_Receivers_Callback = int (*)(const KXMessages*, const char*);
    using KXMessages_IsSignalConnected_Callback = bool (*)(const KXMessages*, QMetaMethod*);

  protected:
    // Instance callback storage
    KXMessages_Metacall_Callback kxmessages_metacall_callback = nullptr;
    KXMessages_Event_Callback kxmessages_event_callback = nullptr;
    KXMessages_EventFilter_Callback kxmessages_eventfilter_callback = nullptr;
    KXMessages_TimerEvent_Callback kxmessages_timerevent_callback = nullptr;
    KXMessages_ChildEvent_Callback kxmessages_childevent_callback = nullptr;
    KXMessages_CustomEvent_Callback kxmessages_customevent_callback = nullptr;
    KXMessages_ConnectNotify_Callback kxmessages_connectnotify_callback = nullptr;
    KXMessages_DisconnectNotify_Callback kxmessages_disconnectnotify_callback = nullptr;
    KXMessages_Sender_Callback kxmessages_sender_callback = nullptr;
    KXMessages_SenderSignalIndex_Callback kxmessages_sendersignalindex_callback = nullptr;
    KXMessages_Receivers_Callback kxmessages_receivers_callback = nullptr;
    KXMessages_IsSignalConnected_Callback kxmessages_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kxmessages_metacall_isbase = false;
    mutable bool kxmessages_event_isbase = false;
    mutable bool kxmessages_eventfilter_isbase = false;
    mutable bool kxmessages_timerevent_isbase = false;
    mutable bool kxmessages_childevent_isbase = false;
    mutable bool kxmessages_customevent_isbase = false;
    mutable bool kxmessages_connectnotify_isbase = false;
    mutable bool kxmessages_disconnectnotify_isbase = false;
    mutable bool kxmessages_sender_isbase = false;
    mutable bool kxmessages_sendersignalindex_isbase = false;
    mutable bool kxmessages_receivers_isbase = false;
    mutable bool kxmessages_issignalconnected_isbase = false;

  public:
    VirtualKXMessages() : KXMessages() {};
    VirtualKXMessages(const char* accept_broadcast) : KXMessages(accept_broadcast) {};
    VirtualKXMessages(const char* accept_broadcast, QObject* parent) : KXMessages(accept_broadcast, parent) {};

    ~VirtualKXMessages() {
        kxmessages_metacall_callback = nullptr;
        kxmessages_event_callback = nullptr;
        kxmessages_eventfilter_callback = nullptr;
        kxmessages_timerevent_callback = nullptr;
        kxmessages_childevent_callback = nullptr;
        kxmessages_customevent_callback = nullptr;
        kxmessages_connectnotify_callback = nullptr;
        kxmessages_disconnectnotify_callback = nullptr;
        kxmessages_sender_callback = nullptr;
        kxmessages_sendersignalindex_callback = nullptr;
        kxmessages_receivers_callback = nullptr;
        kxmessages_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKXMessages_Metacall_Callback(KXMessages_Metacall_Callback cb) { kxmessages_metacall_callback = cb; }
    inline void setKXMessages_Event_Callback(KXMessages_Event_Callback cb) { kxmessages_event_callback = cb; }
    inline void setKXMessages_EventFilter_Callback(KXMessages_EventFilter_Callback cb) { kxmessages_eventfilter_callback = cb; }
    inline void setKXMessages_TimerEvent_Callback(KXMessages_TimerEvent_Callback cb) { kxmessages_timerevent_callback = cb; }
    inline void setKXMessages_ChildEvent_Callback(KXMessages_ChildEvent_Callback cb) { kxmessages_childevent_callback = cb; }
    inline void setKXMessages_CustomEvent_Callback(KXMessages_CustomEvent_Callback cb) { kxmessages_customevent_callback = cb; }
    inline void setKXMessages_ConnectNotify_Callback(KXMessages_ConnectNotify_Callback cb) { kxmessages_connectnotify_callback = cb; }
    inline void setKXMessages_DisconnectNotify_Callback(KXMessages_DisconnectNotify_Callback cb) { kxmessages_disconnectnotify_callback = cb; }
    inline void setKXMessages_Sender_Callback(KXMessages_Sender_Callback cb) { kxmessages_sender_callback = cb; }
    inline void setKXMessages_SenderSignalIndex_Callback(KXMessages_SenderSignalIndex_Callback cb) { kxmessages_sendersignalindex_callback = cb; }
    inline void setKXMessages_Receivers_Callback(KXMessages_Receivers_Callback cb) { kxmessages_receivers_callback = cb; }
    inline void setKXMessages_IsSignalConnected_Callback(KXMessages_IsSignalConnected_Callback cb) { kxmessages_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKXMessages_Metacall_IsBase(bool value) const { kxmessages_metacall_isbase = value; }
    inline void setKXMessages_Event_IsBase(bool value) const { kxmessages_event_isbase = value; }
    inline void setKXMessages_EventFilter_IsBase(bool value) const { kxmessages_eventfilter_isbase = value; }
    inline void setKXMessages_TimerEvent_IsBase(bool value) const { kxmessages_timerevent_isbase = value; }
    inline void setKXMessages_ChildEvent_IsBase(bool value) const { kxmessages_childevent_isbase = value; }
    inline void setKXMessages_CustomEvent_IsBase(bool value) const { kxmessages_customevent_isbase = value; }
    inline void setKXMessages_ConnectNotify_IsBase(bool value) const { kxmessages_connectnotify_isbase = value; }
    inline void setKXMessages_DisconnectNotify_IsBase(bool value) const { kxmessages_disconnectnotify_isbase = value; }
    inline void setKXMessages_Sender_IsBase(bool value) const { kxmessages_sender_isbase = value; }
    inline void setKXMessages_SenderSignalIndex_IsBase(bool value) const { kxmessages_sendersignalindex_isbase = value; }
    inline void setKXMessages_Receivers_IsBase(bool value) const { kxmessages_receivers_isbase = value; }
    inline void setKXMessages_IsSignalConnected_IsBase(bool value) const { kxmessages_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmessages_metacall_isbase) {
            kxmessages_metacall_isbase = false;
            return KXMessages::qt_metacall(param1, param2, param3);
        } else if (kxmessages_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kxmessages_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KXMessages::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmessages_event_isbase) {
            kxmessages_event_isbase = false;
            return KXMessages::event(event);
        } else if (kxmessages_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kxmessages_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXMessages::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmessages_eventfilter_isbase) {
            kxmessages_eventfilter_isbase = false;
            return KXMessages::eventFilter(watched, event);
        } else if (kxmessages_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kxmessages_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KXMessages::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmessages_timerevent_isbase) {
            kxmessages_timerevent_isbase = false;
            KXMessages::timerEvent(event);
        } else if (kxmessages_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kxmessages_timerevent_callback(this, cbval1);
        } else {
            KXMessages::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmessages_childevent_isbase) {
            kxmessages_childevent_isbase = false;
            KXMessages::childEvent(event);
        } else if (kxmessages_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kxmessages_childevent_callback(this, cbval1);
        } else {
            KXMessages::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmessages_customevent_isbase) {
            kxmessages_customevent_isbase = false;
            KXMessages::customEvent(event);
        } else if (kxmessages_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kxmessages_customevent_callback(this, cbval1);
        } else {
            KXMessages::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmessages_connectnotify_isbase) {
            kxmessages_connectnotify_isbase = false;
            KXMessages::connectNotify(signal);
        } else if (kxmessages_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kxmessages_connectnotify_callback(this, cbval1);
        } else {
            KXMessages::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmessages_disconnectnotify_isbase) {
            kxmessages_disconnectnotify_isbase = false;
            KXMessages::disconnectNotify(signal);
        } else if (kxmessages_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kxmessages_disconnectnotify_callback(this, cbval1);
        } else {
            KXMessages::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kxmessages_sender_isbase) {
            kxmessages_sender_isbase = false;
            return KXMessages::sender();
        } else if (kxmessages_sender_callback != nullptr) {
            QObject* callback_ret = kxmessages_sender_callback();
            return callback_ret;
        } else {
            return KXMessages::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kxmessages_sendersignalindex_isbase) {
            kxmessages_sendersignalindex_isbase = false;
            return KXMessages::senderSignalIndex();
        } else if (kxmessages_sendersignalindex_callback != nullptr) {
            int callback_ret = kxmessages_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KXMessages::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kxmessages_receivers_isbase) {
            kxmessages_receivers_isbase = false;
            return KXMessages::receivers(signal);
        } else if (kxmessages_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kxmessages_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KXMessages::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kxmessages_issignalconnected_isbase) {
            kxmessages_issignalconnected_isbase = false;
            return KXMessages::isSignalConnected(signal);
        } else if (kxmessages_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kxmessages_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXMessages::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KXMessages_TimerEvent(KXMessages* self, QTimerEvent* event);
    friend void KXMessages_QBaseTimerEvent(KXMessages* self, QTimerEvent* event);
    friend void KXMessages_ChildEvent(KXMessages* self, QChildEvent* event);
    friend void KXMessages_QBaseChildEvent(KXMessages* self, QChildEvent* event);
    friend void KXMessages_CustomEvent(KXMessages* self, QEvent* event);
    friend void KXMessages_QBaseCustomEvent(KXMessages* self, QEvent* event);
    friend void KXMessages_ConnectNotify(KXMessages* self, const QMetaMethod* signal);
    friend void KXMessages_QBaseConnectNotify(KXMessages* self, const QMetaMethod* signal);
    friend void KXMessages_DisconnectNotify(KXMessages* self, const QMetaMethod* signal);
    friend void KXMessages_QBaseDisconnectNotify(KXMessages* self, const QMetaMethod* signal);
    friend QObject* KXMessages_Sender(const KXMessages* self);
    friend QObject* KXMessages_QBaseSender(const KXMessages* self);
    friend int KXMessages_SenderSignalIndex(const KXMessages* self);
    friend int KXMessages_QBaseSenderSignalIndex(const KXMessages* self);
    friend int KXMessages_Receivers(const KXMessages* self, const char* signal);
    friend int KXMessages_QBaseReceivers(const KXMessages* self, const char* signal);
    friend bool KXMessages_IsSignalConnected(const KXMessages* self, const QMetaMethod* signal);
    friend bool KXMessages_QBaseIsSignalConnected(const KXMessages* self, const QMetaMethod* signal);
};

#endif
