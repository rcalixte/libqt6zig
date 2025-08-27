#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKMODIFIERKEYINFO_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKMODIFIERKEYINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KModifierKeyInfo so that we can call protected methods
class VirtualKModifierKeyInfo final : public KModifierKeyInfo {

  public:
    // Virtual class boolean flag
    bool isVirtualKModifierKeyInfo = true;

    // Virtual class public types (including callbacks)
    using KModifierKeyInfo_Metacall_Callback = int (*)(KModifierKeyInfo*, int, int, void**);
    using KModifierKeyInfo_Event_Callback = bool (*)(KModifierKeyInfo*, QEvent*);
    using KModifierKeyInfo_EventFilter_Callback = bool (*)(KModifierKeyInfo*, QObject*, QEvent*);
    using KModifierKeyInfo_TimerEvent_Callback = void (*)(KModifierKeyInfo*, QTimerEvent*);
    using KModifierKeyInfo_ChildEvent_Callback = void (*)(KModifierKeyInfo*, QChildEvent*);
    using KModifierKeyInfo_CustomEvent_Callback = void (*)(KModifierKeyInfo*, QEvent*);
    using KModifierKeyInfo_ConnectNotify_Callback = void (*)(KModifierKeyInfo*, QMetaMethod*);
    using KModifierKeyInfo_DisconnectNotify_Callback = void (*)(KModifierKeyInfo*, QMetaMethod*);
    using KModifierKeyInfo_Sender_Callback = QObject* (*)();
    using KModifierKeyInfo_SenderSignalIndex_Callback = int (*)();
    using KModifierKeyInfo_Receivers_Callback = int (*)(const KModifierKeyInfo*, const char*);
    using KModifierKeyInfo_IsSignalConnected_Callback = bool (*)(const KModifierKeyInfo*, QMetaMethod*);

  protected:
    // Instance callback storage
    KModifierKeyInfo_Metacall_Callback kmodifierkeyinfo_metacall_callback = nullptr;
    KModifierKeyInfo_Event_Callback kmodifierkeyinfo_event_callback = nullptr;
    KModifierKeyInfo_EventFilter_Callback kmodifierkeyinfo_eventfilter_callback = nullptr;
    KModifierKeyInfo_TimerEvent_Callback kmodifierkeyinfo_timerevent_callback = nullptr;
    KModifierKeyInfo_ChildEvent_Callback kmodifierkeyinfo_childevent_callback = nullptr;
    KModifierKeyInfo_CustomEvent_Callback kmodifierkeyinfo_customevent_callback = nullptr;
    KModifierKeyInfo_ConnectNotify_Callback kmodifierkeyinfo_connectnotify_callback = nullptr;
    KModifierKeyInfo_DisconnectNotify_Callback kmodifierkeyinfo_disconnectnotify_callback = nullptr;
    KModifierKeyInfo_Sender_Callback kmodifierkeyinfo_sender_callback = nullptr;
    KModifierKeyInfo_SenderSignalIndex_Callback kmodifierkeyinfo_sendersignalindex_callback = nullptr;
    KModifierKeyInfo_Receivers_Callback kmodifierkeyinfo_receivers_callback = nullptr;
    KModifierKeyInfo_IsSignalConnected_Callback kmodifierkeyinfo_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kmodifierkeyinfo_metacall_isbase = false;
    mutable bool kmodifierkeyinfo_event_isbase = false;
    mutable bool kmodifierkeyinfo_eventfilter_isbase = false;
    mutable bool kmodifierkeyinfo_timerevent_isbase = false;
    mutable bool kmodifierkeyinfo_childevent_isbase = false;
    mutable bool kmodifierkeyinfo_customevent_isbase = false;
    mutable bool kmodifierkeyinfo_connectnotify_isbase = false;
    mutable bool kmodifierkeyinfo_disconnectnotify_isbase = false;
    mutable bool kmodifierkeyinfo_sender_isbase = false;
    mutable bool kmodifierkeyinfo_sendersignalindex_isbase = false;
    mutable bool kmodifierkeyinfo_receivers_isbase = false;
    mutable bool kmodifierkeyinfo_issignalconnected_isbase = false;

  public:
    VirtualKModifierKeyInfo() : KModifierKeyInfo() {};
    VirtualKModifierKeyInfo(QObject* parent) : KModifierKeyInfo(parent) {};

    ~VirtualKModifierKeyInfo() {
        kmodifierkeyinfo_metacall_callback = nullptr;
        kmodifierkeyinfo_event_callback = nullptr;
        kmodifierkeyinfo_eventfilter_callback = nullptr;
        kmodifierkeyinfo_timerevent_callback = nullptr;
        kmodifierkeyinfo_childevent_callback = nullptr;
        kmodifierkeyinfo_customevent_callback = nullptr;
        kmodifierkeyinfo_connectnotify_callback = nullptr;
        kmodifierkeyinfo_disconnectnotify_callback = nullptr;
        kmodifierkeyinfo_sender_callback = nullptr;
        kmodifierkeyinfo_sendersignalindex_callback = nullptr;
        kmodifierkeyinfo_receivers_callback = nullptr;
        kmodifierkeyinfo_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKModifierKeyInfo_Metacall_Callback(KModifierKeyInfo_Metacall_Callback cb) { kmodifierkeyinfo_metacall_callback = cb; }
    inline void setKModifierKeyInfo_Event_Callback(KModifierKeyInfo_Event_Callback cb) { kmodifierkeyinfo_event_callback = cb; }
    inline void setKModifierKeyInfo_EventFilter_Callback(KModifierKeyInfo_EventFilter_Callback cb) { kmodifierkeyinfo_eventfilter_callback = cb; }
    inline void setKModifierKeyInfo_TimerEvent_Callback(KModifierKeyInfo_TimerEvent_Callback cb) { kmodifierkeyinfo_timerevent_callback = cb; }
    inline void setKModifierKeyInfo_ChildEvent_Callback(KModifierKeyInfo_ChildEvent_Callback cb) { kmodifierkeyinfo_childevent_callback = cb; }
    inline void setKModifierKeyInfo_CustomEvent_Callback(KModifierKeyInfo_CustomEvent_Callback cb) { kmodifierkeyinfo_customevent_callback = cb; }
    inline void setKModifierKeyInfo_ConnectNotify_Callback(KModifierKeyInfo_ConnectNotify_Callback cb) { kmodifierkeyinfo_connectnotify_callback = cb; }
    inline void setKModifierKeyInfo_DisconnectNotify_Callback(KModifierKeyInfo_DisconnectNotify_Callback cb) { kmodifierkeyinfo_disconnectnotify_callback = cb; }
    inline void setKModifierKeyInfo_Sender_Callback(KModifierKeyInfo_Sender_Callback cb) { kmodifierkeyinfo_sender_callback = cb; }
    inline void setKModifierKeyInfo_SenderSignalIndex_Callback(KModifierKeyInfo_SenderSignalIndex_Callback cb) { kmodifierkeyinfo_sendersignalindex_callback = cb; }
    inline void setKModifierKeyInfo_Receivers_Callback(KModifierKeyInfo_Receivers_Callback cb) { kmodifierkeyinfo_receivers_callback = cb; }
    inline void setKModifierKeyInfo_IsSignalConnected_Callback(KModifierKeyInfo_IsSignalConnected_Callback cb) { kmodifierkeyinfo_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKModifierKeyInfo_Metacall_IsBase(bool value) const { kmodifierkeyinfo_metacall_isbase = value; }
    inline void setKModifierKeyInfo_Event_IsBase(bool value) const { kmodifierkeyinfo_event_isbase = value; }
    inline void setKModifierKeyInfo_EventFilter_IsBase(bool value) const { kmodifierkeyinfo_eventfilter_isbase = value; }
    inline void setKModifierKeyInfo_TimerEvent_IsBase(bool value) const { kmodifierkeyinfo_timerevent_isbase = value; }
    inline void setKModifierKeyInfo_ChildEvent_IsBase(bool value) const { kmodifierkeyinfo_childevent_isbase = value; }
    inline void setKModifierKeyInfo_CustomEvent_IsBase(bool value) const { kmodifierkeyinfo_customevent_isbase = value; }
    inline void setKModifierKeyInfo_ConnectNotify_IsBase(bool value) const { kmodifierkeyinfo_connectnotify_isbase = value; }
    inline void setKModifierKeyInfo_DisconnectNotify_IsBase(bool value) const { kmodifierkeyinfo_disconnectnotify_isbase = value; }
    inline void setKModifierKeyInfo_Sender_IsBase(bool value) const { kmodifierkeyinfo_sender_isbase = value; }
    inline void setKModifierKeyInfo_SenderSignalIndex_IsBase(bool value) const { kmodifierkeyinfo_sendersignalindex_isbase = value; }
    inline void setKModifierKeyInfo_Receivers_IsBase(bool value) const { kmodifierkeyinfo_receivers_isbase = value; }
    inline void setKModifierKeyInfo_IsSignalConnected_IsBase(bool value) const { kmodifierkeyinfo_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodifierkeyinfo_metacall_isbase) {
            kmodifierkeyinfo_metacall_isbase = false;
            return KModifierKeyInfo::qt_metacall(param1, param2, param3);
        } else if (kmodifierkeyinfo_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kmodifierkeyinfo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KModifierKeyInfo::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodifierkeyinfo_event_isbase) {
            kmodifierkeyinfo_event_isbase = false;
            return KModifierKeyInfo::event(event);
        } else if (kmodifierkeyinfo_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kmodifierkeyinfo_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KModifierKeyInfo::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodifierkeyinfo_eventfilter_isbase) {
            kmodifierkeyinfo_eventfilter_isbase = false;
            return KModifierKeyInfo::eventFilter(watched, event);
        } else if (kmodifierkeyinfo_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kmodifierkeyinfo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KModifierKeyInfo::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodifierkeyinfo_timerevent_isbase) {
            kmodifierkeyinfo_timerevent_isbase = false;
            KModifierKeyInfo::timerEvent(event);
        } else if (kmodifierkeyinfo_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kmodifierkeyinfo_timerevent_callback(this, cbval1);
        } else {
            KModifierKeyInfo::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodifierkeyinfo_childevent_isbase) {
            kmodifierkeyinfo_childevent_isbase = false;
            KModifierKeyInfo::childEvent(event);
        } else if (kmodifierkeyinfo_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kmodifierkeyinfo_childevent_callback(this, cbval1);
        } else {
            KModifierKeyInfo::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodifierkeyinfo_customevent_isbase) {
            kmodifierkeyinfo_customevent_isbase = false;
            KModifierKeyInfo::customEvent(event);
        } else if (kmodifierkeyinfo_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmodifierkeyinfo_customevent_callback(this, cbval1);
        } else {
            KModifierKeyInfo::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfo_connectnotify_isbase) {
            kmodifierkeyinfo_connectnotify_isbase = false;
            KModifierKeyInfo::connectNotify(signal);
        } else if (kmodifierkeyinfo_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmodifierkeyinfo_connectnotify_callback(this, cbval1);
        } else {
            KModifierKeyInfo::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfo_disconnectnotify_isbase) {
            kmodifierkeyinfo_disconnectnotify_isbase = false;
            KModifierKeyInfo::disconnectNotify(signal);
        } else if (kmodifierkeyinfo_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmodifierkeyinfo_disconnectnotify_callback(this, cbval1);
        } else {
            KModifierKeyInfo::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmodifierkeyinfo_sender_isbase) {
            kmodifierkeyinfo_sender_isbase = false;
            return KModifierKeyInfo::sender();
        } else if (kmodifierkeyinfo_sender_callback != nullptr) {
            QObject* callback_ret = kmodifierkeyinfo_sender_callback();
            return callback_ret;
        } else {
            return KModifierKeyInfo::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmodifierkeyinfo_sendersignalindex_isbase) {
            kmodifierkeyinfo_sendersignalindex_isbase = false;
            return KModifierKeyInfo::senderSignalIndex();
        } else if (kmodifierkeyinfo_sendersignalindex_callback != nullptr) {
            int callback_ret = kmodifierkeyinfo_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KModifierKeyInfo::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmodifierkeyinfo_receivers_isbase) {
            kmodifierkeyinfo_receivers_isbase = false;
            return KModifierKeyInfo::receivers(signal);
        } else if (kmodifierkeyinfo_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kmodifierkeyinfo_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KModifierKeyInfo::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmodifierkeyinfo_issignalconnected_isbase) {
            kmodifierkeyinfo_issignalconnected_isbase = false;
            return KModifierKeyInfo::isSignalConnected(signal);
        } else if (kmodifierkeyinfo_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kmodifierkeyinfo_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KModifierKeyInfo::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KModifierKeyInfo_TimerEvent(KModifierKeyInfo* self, QTimerEvent* event);
    friend void KModifierKeyInfo_QBaseTimerEvent(KModifierKeyInfo* self, QTimerEvent* event);
    friend void KModifierKeyInfo_ChildEvent(KModifierKeyInfo* self, QChildEvent* event);
    friend void KModifierKeyInfo_QBaseChildEvent(KModifierKeyInfo* self, QChildEvent* event);
    friend void KModifierKeyInfo_CustomEvent(KModifierKeyInfo* self, QEvent* event);
    friend void KModifierKeyInfo_QBaseCustomEvent(KModifierKeyInfo* self, QEvent* event);
    friend void KModifierKeyInfo_ConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
    friend void KModifierKeyInfo_QBaseConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
    friend void KModifierKeyInfo_DisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
    friend void KModifierKeyInfo_QBaseDisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
    friend QObject* KModifierKeyInfo_Sender(const KModifierKeyInfo* self);
    friend QObject* KModifierKeyInfo_QBaseSender(const KModifierKeyInfo* self);
    friend int KModifierKeyInfo_SenderSignalIndex(const KModifierKeyInfo* self);
    friend int KModifierKeyInfo_QBaseSenderSignalIndex(const KModifierKeyInfo* self);
    friend int KModifierKeyInfo_Receivers(const KModifierKeyInfo* self, const char* signal);
    friend int KModifierKeyInfo_QBaseReceivers(const KModifierKeyInfo* self, const char* signal);
    friend bool KModifierKeyInfo_IsSignalConnected(const KModifierKeyInfo* self, const QMetaMethod* signal);
    friend bool KModifierKeyInfo_QBaseIsSignalConnected(const KModifierKeyInfo* self, const QMetaMethod* signal);
};

#endif
