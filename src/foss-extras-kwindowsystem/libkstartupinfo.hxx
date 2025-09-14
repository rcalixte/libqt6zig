#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKSTARTUPINFO_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKSTARTUPINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KStartupInfo so that we can call protected methods
class VirtualKStartupInfo final : public KStartupInfo {

  public:
    // Virtual class boolean flag
    bool isVirtualKStartupInfo = true;

    // Virtual class public types (including callbacks)
    using KStartupInfo_Metacall_Callback = int (*)(KStartupInfo*, int, int, void**);
    using KStartupInfo_CustomEvent_Callback = void (*)(KStartupInfo*, QEvent*);
    using KStartupInfo_Event_Callback = bool (*)(KStartupInfo*, QEvent*);
    using KStartupInfo_EventFilter_Callback = bool (*)(KStartupInfo*, QObject*, QEvent*);
    using KStartupInfo_TimerEvent_Callback = void (*)(KStartupInfo*, QTimerEvent*);
    using KStartupInfo_ChildEvent_Callback = void (*)(KStartupInfo*, QChildEvent*);
    using KStartupInfo_ConnectNotify_Callback = void (*)(KStartupInfo*, QMetaMethod*);
    using KStartupInfo_DisconnectNotify_Callback = void (*)(KStartupInfo*, QMetaMethod*);
    using KStartupInfo_Sender_Callback = QObject* (*)();
    using KStartupInfo_SenderSignalIndex_Callback = int (*)();
    using KStartupInfo_Receivers_Callback = int (*)(const KStartupInfo*, const char*);
    using KStartupInfo_IsSignalConnected_Callback = bool (*)(const KStartupInfo*, QMetaMethod*);

  protected:
    // Instance callback storage
    KStartupInfo_Metacall_Callback kstartupinfo_metacall_callback = nullptr;
    KStartupInfo_CustomEvent_Callback kstartupinfo_customevent_callback = nullptr;
    KStartupInfo_Event_Callback kstartupinfo_event_callback = nullptr;
    KStartupInfo_EventFilter_Callback kstartupinfo_eventfilter_callback = nullptr;
    KStartupInfo_TimerEvent_Callback kstartupinfo_timerevent_callback = nullptr;
    KStartupInfo_ChildEvent_Callback kstartupinfo_childevent_callback = nullptr;
    KStartupInfo_ConnectNotify_Callback kstartupinfo_connectnotify_callback = nullptr;
    KStartupInfo_DisconnectNotify_Callback kstartupinfo_disconnectnotify_callback = nullptr;
    KStartupInfo_Sender_Callback kstartupinfo_sender_callback = nullptr;
    KStartupInfo_SenderSignalIndex_Callback kstartupinfo_sendersignalindex_callback = nullptr;
    KStartupInfo_Receivers_Callback kstartupinfo_receivers_callback = nullptr;
    KStartupInfo_IsSignalConnected_Callback kstartupinfo_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kstartupinfo_metacall_isbase = false;
    mutable bool kstartupinfo_customevent_isbase = false;
    mutable bool kstartupinfo_event_isbase = false;
    mutable bool kstartupinfo_eventfilter_isbase = false;
    mutable bool kstartupinfo_timerevent_isbase = false;
    mutable bool kstartupinfo_childevent_isbase = false;
    mutable bool kstartupinfo_connectnotify_isbase = false;
    mutable bool kstartupinfo_disconnectnotify_isbase = false;
    mutable bool kstartupinfo_sender_isbase = false;
    mutable bool kstartupinfo_sendersignalindex_isbase = false;
    mutable bool kstartupinfo_receivers_isbase = false;
    mutable bool kstartupinfo_issignalconnected_isbase = false;

  public:
    VirtualKStartupInfo(int flags) : KStartupInfo(flags) {};
    VirtualKStartupInfo(int flags, QObject* parent) : KStartupInfo(flags, parent) {};

    ~VirtualKStartupInfo() {
        kstartupinfo_metacall_callback = nullptr;
        kstartupinfo_customevent_callback = nullptr;
        kstartupinfo_event_callback = nullptr;
        kstartupinfo_eventfilter_callback = nullptr;
        kstartupinfo_timerevent_callback = nullptr;
        kstartupinfo_childevent_callback = nullptr;
        kstartupinfo_connectnotify_callback = nullptr;
        kstartupinfo_disconnectnotify_callback = nullptr;
        kstartupinfo_sender_callback = nullptr;
        kstartupinfo_sendersignalindex_callback = nullptr;
        kstartupinfo_receivers_callback = nullptr;
        kstartupinfo_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKStartupInfo_Metacall_Callback(KStartupInfo_Metacall_Callback cb) { kstartupinfo_metacall_callback = cb; }
    inline void setKStartupInfo_CustomEvent_Callback(KStartupInfo_CustomEvent_Callback cb) { kstartupinfo_customevent_callback = cb; }
    inline void setKStartupInfo_Event_Callback(KStartupInfo_Event_Callback cb) { kstartupinfo_event_callback = cb; }
    inline void setKStartupInfo_EventFilter_Callback(KStartupInfo_EventFilter_Callback cb) { kstartupinfo_eventfilter_callback = cb; }
    inline void setKStartupInfo_TimerEvent_Callback(KStartupInfo_TimerEvent_Callback cb) { kstartupinfo_timerevent_callback = cb; }
    inline void setKStartupInfo_ChildEvent_Callback(KStartupInfo_ChildEvent_Callback cb) { kstartupinfo_childevent_callback = cb; }
    inline void setKStartupInfo_ConnectNotify_Callback(KStartupInfo_ConnectNotify_Callback cb) { kstartupinfo_connectnotify_callback = cb; }
    inline void setKStartupInfo_DisconnectNotify_Callback(KStartupInfo_DisconnectNotify_Callback cb) { kstartupinfo_disconnectnotify_callback = cb; }
    inline void setKStartupInfo_Sender_Callback(KStartupInfo_Sender_Callback cb) { kstartupinfo_sender_callback = cb; }
    inline void setKStartupInfo_SenderSignalIndex_Callback(KStartupInfo_SenderSignalIndex_Callback cb) { kstartupinfo_sendersignalindex_callback = cb; }
    inline void setKStartupInfo_Receivers_Callback(KStartupInfo_Receivers_Callback cb) { kstartupinfo_receivers_callback = cb; }
    inline void setKStartupInfo_IsSignalConnected_Callback(KStartupInfo_IsSignalConnected_Callback cb) { kstartupinfo_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKStartupInfo_Metacall_IsBase(bool value) const { kstartupinfo_metacall_isbase = value; }
    inline void setKStartupInfo_CustomEvent_IsBase(bool value) const { kstartupinfo_customevent_isbase = value; }
    inline void setKStartupInfo_Event_IsBase(bool value) const { kstartupinfo_event_isbase = value; }
    inline void setKStartupInfo_EventFilter_IsBase(bool value) const { kstartupinfo_eventfilter_isbase = value; }
    inline void setKStartupInfo_TimerEvent_IsBase(bool value) const { kstartupinfo_timerevent_isbase = value; }
    inline void setKStartupInfo_ChildEvent_IsBase(bool value) const { kstartupinfo_childevent_isbase = value; }
    inline void setKStartupInfo_ConnectNotify_IsBase(bool value) const { kstartupinfo_connectnotify_isbase = value; }
    inline void setKStartupInfo_DisconnectNotify_IsBase(bool value) const { kstartupinfo_disconnectnotify_isbase = value; }
    inline void setKStartupInfo_Sender_IsBase(bool value) const { kstartupinfo_sender_isbase = value; }
    inline void setKStartupInfo_SenderSignalIndex_IsBase(bool value) const { kstartupinfo_sendersignalindex_isbase = value; }
    inline void setKStartupInfo_Receivers_IsBase(bool value) const { kstartupinfo_receivers_isbase = value; }
    inline void setKStartupInfo_IsSignalConnected_IsBase(bool value) const { kstartupinfo_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kstartupinfo_metacall_isbase) {
            kstartupinfo_metacall_isbase = false;
            return KStartupInfo::qt_metacall(param1, param2, param3);
        } else if (kstartupinfo_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kstartupinfo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KStartupInfo::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* e_P) override {
        if (kstartupinfo_customevent_isbase) {
            kstartupinfo_customevent_isbase = false;
            KStartupInfo::customEvent(e_P);
        } else if (kstartupinfo_customevent_callback != nullptr) {
            QEvent* cbval1 = e_P;

            kstartupinfo_customevent_callback(this, cbval1);
        } else {
            KStartupInfo::customEvent(e_P);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kstartupinfo_event_isbase) {
            kstartupinfo_event_isbase = false;
            return KStartupInfo::event(event);
        } else if (kstartupinfo_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kstartupinfo_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KStartupInfo::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kstartupinfo_eventfilter_isbase) {
            kstartupinfo_eventfilter_isbase = false;
            return KStartupInfo::eventFilter(watched, event);
        } else if (kstartupinfo_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kstartupinfo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KStartupInfo::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kstartupinfo_timerevent_isbase) {
            kstartupinfo_timerevent_isbase = false;
            KStartupInfo::timerEvent(event);
        } else if (kstartupinfo_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kstartupinfo_timerevent_callback(this, cbval1);
        } else {
            KStartupInfo::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kstartupinfo_childevent_isbase) {
            kstartupinfo_childevent_isbase = false;
            KStartupInfo::childEvent(event);
        } else if (kstartupinfo_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kstartupinfo_childevent_callback(this, cbval1);
        } else {
            KStartupInfo::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kstartupinfo_connectnotify_isbase) {
            kstartupinfo_connectnotify_isbase = false;
            KStartupInfo::connectNotify(signal);
        } else if (kstartupinfo_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kstartupinfo_connectnotify_callback(this, cbval1);
        } else {
            KStartupInfo::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kstartupinfo_disconnectnotify_isbase) {
            kstartupinfo_disconnectnotify_isbase = false;
            KStartupInfo::disconnectNotify(signal);
        } else if (kstartupinfo_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kstartupinfo_disconnectnotify_callback(this, cbval1);
        } else {
            KStartupInfo::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kstartupinfo_sender_isbase) {
            kstartupinfo_sender_isbase = false;
            return KStartupInfo::sender();
        } else if (kstartupinfo_sender_callback != nullptr) {
            QObject* callback_ret = kstartupinfo_sender_callback();
            return callback_ret;
        } else {
            return KStartupInfo::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kstartupinfo_sendersignalindex_isbase) {
            kstartupinfo_sendersignalindex_isbase = false;
            return KStartupInfo::senderSignalIndex();
        } else if (kstartupinfo_sendersignalindex_callback != nullptr) {
            int callback_ret = kstartupinfo_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KStartupInfo::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kstartupinfo_receivers_isbase) {
            kstartupinfo_receivers_isbase = false;
            return KStartupInfo::receivers(signal);
        } else if (kstartupinfo_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kstartupinfo_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KStartupInfo::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kstartupinfo_issignalconnected_isbase) {
            kstartupinfo_issignalconnected_isbase = false;
            return KStartupInfo::isSignalConnected(signal);
        } else if (kstartupinfo_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kstartupinfo_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KStartupInfo::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KStartupInfo_CustomEvent(KStartupInfo* self, QEvent* e_P);
    friend void KStartupInfo_QBaseCustomEvent(KStartupInfo* self, QEvent* e_P);
    friend void KStartupInfo_TimerEvent(KStartupInfo* self, QTimerEvent* event);
    friend void KStartupInfo_QBaseTimerEvent(KStartupInfo* self, QTimerEvent* event);
    friend void KStartupInfo_ChildEvent(KStartupInfo* self, QChildEvent* event);
    friend void KStartupInfo_QBaseChildEvent(KStartupInfo* self, QChildEvent* event);
    friend void KStartupInfo_ConnectNotify(KStartupInfo* self, const QMetaMethod* signal);
    friend void KStartupInfo_QBaseConnectNotify(KStartupInfo* self, const QMetaMethod* signal);
    friend void KStartupInfo_DisconnectNotify(KStartupInfo* self, const QMetaMethod* signal);
    friend void KStartupInfo_QBaseDisconnectNotify(KStartupInfo* self, const QMetaMethod* signal);
    friend QObject* KStartupInfo_Sender(const KStartupInfo* self);
    friend QObject* KStartupInfo_QBaseSender(const KStartupInfo* self);
    friend int KStartupInfo_SenderSignalIndex(const KStartupInfo* self);
    friend int KStartupInfo_QBaseSenderSignalIndex(const KStartupInfo* self);
    friend int KStartupInfo_Receivers(const KStartupInfo* self, const char* signal);
    friend int KStartupInfo_QBaseReceivers(const KStartupInfo* self, const char* signal);
    friend bool KStartupInfo_IsSignalConnected(const KStartupInfo* self, const QMetaMethod* signal);
    friend bool KStartupInfo_QBaseIsSignalConnected(const KStartupInfo* self, const QMetaMethod* signal);
};

#endif
