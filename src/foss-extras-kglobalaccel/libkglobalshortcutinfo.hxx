#pragma once
#ifndef SRC_FOSS_EXTRAS_KGLOBALACCELC_LIBVIRTUALKGLOBALSHORTCUTINFO_H
#define SRC_FOSS_EXTRAS_KGLOBALACCELC_LIBVIRTUALKGLOBALSHORTCUTINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KGlobalShortcutInfo so that we can call protected methods
class VirtualKGlobalShortcutInfo final : public KGlobalShortcutInfo {

  public:
    // Virtual class boolean flag
    bool isVirtualKGlobalShortcutInfo = true;

    // Virtual class public types (including callbacks)
    using KGlobalShortcutInfo_Metacall_Callback = int (*)(KGlobalShortcutInfo*, int, int, void**);
    using KGlobalShortcutInfo_Event_Callback = bool (*)(KGlobalShortcutInfo*, QEvent*);
    using KGlobalShortcutInfo_EventFilter_Callback = bool (*)(KGlobalShortcutInfo*, QObject*, QEvent*);
    using KGlobalShortcutInfo_TimerEvent_Callback = void (*)(KGlobalShortcutInfo*, QTimerEvent*);
    using KGlobalShortcutInfo_ChildEvent_Callback = void (*)(KGlobalShortcutInfo*, QChildEvent*);
    using KGlobalShortcutInfo_CustomEvent_Callback = void (*)(KGlobalShortcutInfo*, QEvent*);
    using KGlobalShortcutInfo_ConnectNotify_Callback = void (*)(KGlobalShortcutInfo*, QMetaMethod*);
    using KGlobalShortcutInfo_DisconnectNotify_Callback = void (*)(KGlobalShortcutInfo*, QMetaMethod*);
    using KGlobalShortcutInfo_Sender_Callback = QObject* (*)();
    using KGlobalShortcutInfo_SenderSignalIndex_Callback = int (*)();
    using KGlobalShortcutInfo_Receivers_Callback = int (*)(const KGlobalShortcutInfo*, const char*);
    using KGlobalShortcutInfo_IsSignalConnected_Callback = bool (*)(const KGlobalShortcutInfo*, QMetaMethod*);

  protected:
    // Instance callback storage
    KGlobalShortcutInfo_Metacall_Callback kglobalshortcutinfo_metacall_callback = nullptr;
    KGlobalShortcutInfo_Event_Callback kglobalshortcutinfo_event_callback = nullptr;
    KGlobalShortcutInfo_EventFilter_Callback kglobalshortcutinfo_eventfilter_callback = nullptr;
    KGlobalShortcutInfo_TimerEvent_Callback kglobalshortcutinfo_timerevent_callback = nullptr;
    KGlobalShortcutInfo_ChildEvent_Callback kglobalshortcutinfo_childevent_callback = nullptr;
    KGlobalShortcutInfo_CustomEvent_Callback kglobalshortcutinfo_customevent_callback = nullptr;
    KGlobalShortcutInfo_ConnectNotify_Callback kglobalshortcutinfo_connectnotify_callback = nullptr;
    KGlobalShortcutInfo_DisconnectNotify_Callback kglobalshortcutinfo_disconnectnotify_callback = nullptr;
    KGlobalShortcutInfo_Sender_Callback kglobalshortcutinfo_sender_callback = nullptr;
    KGlobalShortcutInfo_SenderSignalIndex_Callback kglobalshortcutinfo_sendersignalindex_callback = nullptr;
    KGlobalShortcutInfo_Receivers_Callback kglobalshortcutinfo_receivers_callback = nullptr;
    KGlobalShortcutInfo_IsSignalConnected_Callback kglobalshortcutinfo_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kglobalshortcutinfo_metacall_isbase = false;
    mutable bool kglobalshortcutinfo_event_isbase = false;
    mutable bool kglobalshortcutinfo_eventfilter_isbase = false;
    mutable bool kglobalshortcutinfo_timerevent_isbase = false;
    mutable bool kglobalshortcutinfo_childevent_isbase = false;
    mutable bool kglobalshortcutinfo_customevent_isbase = false;
    mutable bool kglobalshortcutinfo_connectnotify_isbase = false;
    mutable bool kglobalshortcutinfo_disconnectnotify_isbase = false;
    mutable bool kglobalshortcutinfo_sender_isbase = false;
    mutable bool kglobalshortcutinfo_sendersignalindex_isbase = false;
    mutable bool kglobalshortcutinfo_receivers_isbase = false;
    mutable bool kglobalshortcutinfo_issignalconnected_isbase = false;

  public:
    VirtualKGlobalShortcutInfo() : KGlobalShortcutInfo() {};
    VirtualKGlobalShortcutInfo(const KGlobalShortcutInfo& rhs) : KGlobalShortcutInfo(rhs) {};

    ~VirtualKGlobalShortcutInfo() {
        kglobalshortcutinfo_metacall_callback = nullptr;
        kglobalshortcutinfo_event_callback = nullptr;
        kglobalshortcutinfo_eventfilter_callback = nullptr;
        kglobalshortcutinfo_timerevent_callback = nullptr;
        kglobalshortcutinfo_childevent_callback = nullptr;
        kglobalshortcutinfo_customevent_callback = nullptr;
        kglobalshortcutinfo_connectnotify_callback = nullptr;
        kglobalshortcutinfo_disconnectnotify_callback = nullptr;
        kglobalshortcutinfo_sender_callback = nullptr;
        kglobalshortcutinfo_sendersignalindex_callback = nullptr;
        kglobalshortcutinfo_receivers_callback = nullptr;
        kglobalshortcutinfo_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKGlobalShortcutInfo_Metacall_Callback(KGlobalShortcutInfo_Metacall_Callback cb) { kglobalshortcutinfo_metacall_callback = cb; }
    inline void setKGlobalShortcutInfo_Event_Callback(KGlobalShortcutInfo_Event_Callback cb) { kglobalshortcutinfo_event_callback = cb; }
    inline void setKGlobalShortcutInfo_EventFilter_Callback(KGlobalShortcutInfo_EventFilter_Callback cb) { kglobalshortcutinfo_eventfilter_callback = cb; }
    inline void setKGlobalShortcutInfo_TimerEvent_Callback(KGlobalShortcutInfo_TimerEvent_Callback cb) { kglobalshortcutinfo_timerevent_callback = cb; }
    inline void setKGlobalShortcutInfo_ChildEvent_Callback(KGlobalShortcutInfo_ChildEvent_Callback cb) { kglobalshortcutinfo_childevent_callback = cb; }
    inline void setKGlobalShortcutInfo_CustomEvent_Callback(KGlobalShortcutInfo_CustomEvent_Callback cb) { kglobalshortcutinfo_customevent_callback = cb; }
    inline void setKGlobalShortcutInfo_ConnectNotify_Callback(KGlobalShortcutInfo_ConnectNotify_Callback cb) { kglobalshortcutinfo_connectnotify_callback = cb; }
    inline void setKGlobalShortcutInfo_DisconnectNotify_Callback(KGlobalShortcutInfo_DisconnectNotify_Callback cb) { kglobalshortcutinfo_disconnectnotify_callback = cb; }
    inline void setKGlobalShortcutInfo_Sender_Callback(KGlobalShortcutInfo_Sender_Callback cb) { kglobalshortcutinfo_sender_callback = cb; }
    inline void setKGlobalShortcutInfo_SenderSignalIndex_Callback(KGlobalShortcutInfo_SenderSignalIndex_Callback cb) { kglobalshortcutinfo_sendersignalindex_callback = cb; }
    inline void setKGlobalShortcutInfo_Receivers_Callback(KGlobalShortcutInfo_Receivers_Callback cb) { kglobalshortcutinfo_receivers_callback = cb; }
    inline void setKGlobalShortcutInfo_IsSignalConnected_Callback(KGlobalShortcutInfo_IsSignalConnected_Callback cb) { kglobalshortcutinfo_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKGlobalShortcutInfo_Metacall_IsBase(bool value) const { kglobalshortcutinfo_metacall_isbase = value; }
    inline void setKGlobalShortcutInfo_Event_IsBase(bool value) const { kglobalshortcutinfo_event_isbase = value; }
    inline void setKGlobalShortcutInfo_EventFilter_IsBase(bool value) const { kglobalshortcutinfo_eventfilter_isbase = value; }
    inline void setKGlobalShortcutInfo_TimerEvent_IsBase(bool value) const { kglobalshortcutinfo_timerevent_isbase = value; }
    inline void setKGlobalShortcutInfo_ChildEvent_IsBase(bool value) const { kglobalshortcutinfo_childevent_isbase = value; }
    inline void setKGlobalShortcutInfo_CustomEvent_IsBase(bool value) const { kglobalshortcutinfo_customevent_isbase = value; }
    inline void setKGlobalShortcutInfo_ConnectNotify_IsBase(bool value) const { kglobalshortcutinfo_connectnotify_isbase = value; }
    inline void setKGlobalShortcutInfo_DisconnectNotify_IsBase(bool value) const { kglobalshortcutinfo_disconnectnotify_isbase = value; }
    inline void setKGlobalShortcutInfo_Sender_IsBase(bool value) const { kglobalshortcutinfo_sender_isbase = value; }
    inline void setKGlobalShortcutInfo_SenderSignalIndex_IsBase(bool value) const { kglobalshortcutinfo_sendersignalindex_isbase = value; }
    inline void setKGlobalShortcutInfo_Receivers_IsBase(bool value) const { kglobalshortcutinfo_receivers_isbase = value; }
    inline void setKGlobalShortcutInfo_IsSignalConnected_IsBase(bool value) const { kglobalshortcutinfo_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kglobalshortcutinfo_metacall_isbase) {
            kglobalshortcutinfo_metacall_isbase = false;
            return KGlobalShortcutInfo::qt_metacall(param1, param2, param3);
        } else if (kglobalshortcutinfo_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kglobalshortcutinfo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KGlobalShortcutInfo::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kglobalshortcutinfo_event_isbase) {
            kglobalshortcutinfo_event_isbase = false;
            return KGlobalShortcutInfo::event(event);
        } else if (kglobalshortcutinfo_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kglobalshortcutinfo_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KGlobalShortcutInfo::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kglobalshortcutinfo_eventfilter_isbase) {
            kglobalshortcutinfo_eventfilter_isbase = false;
            return KGlobalShortcutInfo::eventFilter(watched, event);
        } else if (kglobalshortcutinfo_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kglobalshortcutinfo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KGlobalShortcutInfo::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kglobalshortcutinfo_timerevent_isbase) {
            kglobalshortcutinfo_timerevent_isbase = false;
            KGlobalShortcutInfo::timerEvent(event);
        } else if (kglobalshortcutinfo_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kglobalshortcutinfo_timerevent_callback(this, cbval1);
        } else {
            KGlobalShortcutInfo::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kglobalshortcutinfo_childevent_isbase) {
            kglobalshortcutinfo_childevent_isbase = false;
            KGlobalShortcutInfo::childEvent(event);
        } else if (kglobalshortcutinfo_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kglobalshortcutinfo_childevent_callback(this, cbval1);
        } else {
            KGlobalShortcutInfo::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kglobalshortcutinfo_customevent_isbase) {
            kglobalshortcutinfo_customevent_isbase = false;
            KGlobalShortcutInfo::customEvent(event);
        } else if (kglobalshortcutinfo_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kglobalshortcutinfo_customevent_callback(this, cbval1);
        } else {
            KGlobalShortcutInfo::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kglobalshortcutinfo_connectnotify_isbase) {
            kglobalshortcutinfo_connectnotify_isbase = false;
            KGlobalShortcutInfo::connectNotify(signal);
        } else if (kglobalshortcutinfo_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kglobalshortcutinfo_connectnotify_callback(this, cbval1);
        } else {
            KGlobalShortcutInfo::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kglobalshortcutinfo_disconnectnotify_isbase) {
            kglobalshortcutinfo_disconnectnotify_isbase = false;
            KGlobalShortcutInfo::disconnectNotify(signal);
        } else if (kglobalshortcutinfo_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kglobalshortcutinfo_disconnectnotify_callback(this, cbval1);
        } else {
            KGlobalShortcutInfo::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kglobalshortcutinfo_sender_isbase) {
            kglobalshortcutinfo_sender_isbase = false;
            return KGlobalShortcutInfo::sender();
        } else if (kglobalshortcutinfo_sender_callback != nullptr) {
            QObject* callback_ret = kglobalshortcutinfo_sender_callback();
            return callback_ret;
        } else {
            return KGlobalShortcutInfo::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kglobalshortcutinfo_sendersignalindex_isbase) {
            kglobalshortcutinfo_sendersignalindex_isbase = false;
            return KGlobalShortcutInfo::senderSignalIndex();
        } else if (kglobalshortcutinfo_sendersignalindex_callback != nullptr) {
            int callback_ret = kglobalshortcutinfo_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KGlobalShortcutInfo::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kglobalshortcutinfo_receivers_isbase) {
            kglobalshortcutinfo_receivers_isbase = false;
            return KGlobalShortcutInfo::receivers(signal);
        } else if (kglobalshortcutinfo_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kglobalshortcutinfo_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KGlobalShortcutInfo::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kglobalshortcutinfo_issignalconnected_isbase) {
            kglobalshortcutinfo_issignalconnected_isbase = false;
            return KGlobalShortcutInfo::isSignalConnected(signal);
        } else if (kglobalshortcutinfo_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kglobalshortcutinfo_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KGlobalShortcutInfo::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KGlobalShortcutInfo_TimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event);
    friend void KGlobalShortcutInfo_QBaseTimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event);
    friend void KGlobalShortcutInfo_ChildEvent(KGlobalShortcutInfo* self, QChildEvent* event);
    friend void KGlobalShortcutInfo_QBaseChildEvent(KGlobalShortcutInfo* self, QChildEvent* event);
    friend void KGlobalShortcutInfo_CustomEvent(KGlobalShortcutInfo* self, QEvent* event);
    friend void KGlobalShortcutInfo_QBaseCustomEvent(KGlobalShortcutInfo* self, QEvent* event);
    friend void KGlobalShortcutInfo_ConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
    friend void KGlobalShortcutInfo_QBaseConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
    friend void KGlobalShortcutInfo_DisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
    friend void KGlobalShortcutInfo_QBaseDisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
    friend QObject* KGlobalShortcutInfo_Sender(const KGlobalShortcutInfo* self);
    friend QObject* KGlobalShortcutInfo_QBaseSender(const KGlobalShortcutInfo* self);
    friend int KGlobalShortcutInfo_SenderSignalIndex(const KGlobalShortcutInfo* self);
    friend int KGlobalShortcutInfo_QBaseSenderSignalIndex(const KGlobalShortcutInfo* self);
    friend int KGlobalShortcutInfo_Receivers(const KGlobalShortcutInfo* self, const char* signal);
    friend int KGlobalShortcutInfo_QBaseReceivers(const KGlobalShortcutInfo* self, const char* signal);
    friend bool KGlobalShortcutInfo_IsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal);
    friend bool KGlobalShortcutInfo_QBaseIsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal);
};

#endif
