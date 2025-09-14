#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKWINDOWSHADOW_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKWINDOWSHADOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowShadow so that we can call protected methods
class VirtualKWindowShadow final : public KWindowShadow {

  public:
    // Virtual class boolean flag
    bool isVirtualKWindowShadow = true;

    // Virtual class public types (including callbacks)
    using KWindowShadow_Metacall_Callback = int (*)(KWindowShadow*, int, int, void**);
    using KWindowShadow_Event_Callback = bool (*)(KWindowShadow*, QEvent*);
    using KWindowShadow_EventFilter_Callback = bool (*)(KWindowShadow*, QObject*, QEvent*);
    using KWindowShadow_TimerEvent_Callback = void (*)(KWindowShadow*, QTimerEvent*);
    using KWindowShadow_ChildEvent_Callback = void (*)(KWindowShadow*, QChildEvent*);
    using KWindowShadow_CustomEvent_Callback = void (*)(KWindowShadow*, QEvent*);
    using KWindowShadow_ConnectNotify_Callback = void (*)(KWindowShadow*, QMetaMethod*);
    using KWindowShadow_DisconnectNotify_Callback = void (*)(KWindowShadow*, QMetaMethod*);
    using KWindowShadow_Sender_Callback = QObject* (*)();
    using KWindowShadow_SenderSignalIndex_Callback = int (*)();
    using KWindowShadow_Receivers_Callback = int (*)(const KWindowShadow*, const char*);
    using KWindowShadow_IsSignalConnected_Callback = bool (*)(const KWindowShadow*, QMetaMethod*);

  protected:
    // Instance callback storage
    KWindowShadow_Metacall_Callback kwindowshadow_metacall_callback = nullptr;
    KWindowShadow_Event_Callback kwindowshadow_event_callback = nullptr;
    KWindowShadow_EventFilter_Callback kwindowshadow_eventfilter_callback = nullptr;
    KWindowShadow_TimerEvent_Callback kwindowshadow_timerevent_callback = nullptr;
    KWindowShadow_ChildEvent_Callback kwindowshadow_childevent_callback = nullptr;
    KWindowShadow_CustomEvent_Callback kwindowshadow_customevent_callback = nullptr;
    KWindowShadow_ConnectNotify_Callback kwindowshadow_connectnotify_callback = nullptr;
    KWindowShadow_DisconnectNotify_Callback kwindowshadow_disconnectnotify_callback = nullptr;
    KWindowShadow_Sender_Callback kwindowshadow_sender_callback = nullptr;
    KWindowShadow_SenderSignalIndex_Callback kwindowshadow_sendersignalindex_callback = nullptr;
    KWindowShadow_Receivers_Callback kwindowshadow_receivers_callback = nullptr;
    KWindowShadow_IsSignalConnected_Callback kwindowshadow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwindowshadow_metacall_isbase = false;
    mutable bool kwindowshadow_event_isbase = false;
    mutable bool kwindowshadow_eventfilter_isbase = false;
    mutable bool kwindowshadow_timerevent_isbase = false;
    mutable bool kwindowshadow_childevent_isbase = false;
    mutable bool kwindowshadow_customevent_isbase = false;
    mutable bool kwindowshadow_connectnotify_isbase = false;
    mutable bool kwindowshadow_disconnectnotify_isbase = false;
    mutable bool kwindowshadow_sender_isbase = false;
    mutable bool kwindowshadow_sendersignalindex_isbase = false;
    mutable bool kwindowshadow_receivers_isbase = false;
    mutable bool kwindowshadow_issignalconnected_isbase = false;

  public:
    VirtualKWindowShadow() : KWindowShadow() {};
    VirtualKWindowShadow(QObject* parent) : KWindowShadow(parent) {};

    ~VirtualKWindowShadow() {
        kwindowshadow_metacall_callback = nullptr;
        kwindowshadow_event_callback = nullptr;
        kwindowshadow_eventfilter_callback = nullptr;
        kwindowshadow_timerevent_callback = nullptr;
        kwindowshadow_childevent_callback = nullptr;
        kwindowshadow_customevent_callback = nullptr;
        kwindowshadow_connectnotify_callback = nullptr;
        kwindowshadow_disconnectnotify_callback = nullptr;
        kwindowshadow_sender_callback = nullptr;
        kwindowshadow_sendersignalindex_callback = nullptr;
        kwindowshadow_receivers_callback = nullptr;
        kwindowshadow_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKWindowShadow_Metacall_Callback(KWindowShadow_Metacall_Callback cb) { kwindowshadow_metacall_callback = cb; }
    inline void setKWindowShadow_Event_Callback(KWindowShadow_Event_Callback cb) { kwindowshadow_event_callback = cb; }
    inline void setKWindowShadow_EventFilter_Callback(KWindowShadow_EventFilter_Callback cb) { kwindowshadow_eventfilter_callback = cb; }
    inline void setKWindowShadow_TimerEvent_Callback(KWindowShadow_TimerEvent_Callback cb) { kwindowshadow_timerevent_callback = cb; }
    inline void setKWindowShadow_ChildEvent_Callback(KWindowShadow_ChildEvent_Callback cb) { kwindowshadow_childevent_callback = cb; }
    inline void setKWindowShadow_CustomEvent_Callback(KWindowShadow_CustomEvent_Callback cb) { kwindowshadow_customevent_callback = cb; }
    inline void setKWindowShadow_ConnectNotify_Callback(KWindowShadow_ConnectNotify_Callback cb) { kwindowshadow_connectnotify_callback = cb; }
    inline void setKWindowShadow_DisconnectNotify_Callback(KWindowShadow_DisconnectNotify_Callback cb) { kwindowshadow_disconnectnotify_callback = cb; }
    inline void setKWindowShadow_Sender_Callback(KWindowShadow_Sender_Callback cb) { kwindowshadow_sender_callback = cb; }
    inline void setKWindowShadow_SenderSignalIndex_Callback(KWindowShadow_SenderSignalIndex_Callback cb) { kwindowshadow_sendersignalindex_callback = cb; }
    inline void setKWindowShadow_Receivers_Callback(KWindowShadow_Receivers_Callback cb) { kwindowshadow_receivers_callback = cb; }
    inline void setKWindowShadow_IsSignalConnected_Callback(KWindowShadow_IsSignalConnected_Callback cb) { kwindowshadow_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWindowShadow_Metacall_IsBase(bool value) const { kwindowshadow_metacall_isbase = value; }
    inline void setKWindowShadow_Event_IsBase(bool value) const { kwindowshadow_event_isbase = value; }
    inline void setKWindowShadow_EventFilter_IsBase(bool value) const { kwindowshadow_eventfilter_isbase = value; }
    inline void setKWindowShadow_TimerEvent_IsBase(bool value) const { kwindowshadow_timerevent_isbase = value; }
    inline void setKWindowShadow_ChildEvent_IsBase(bool value) const { kwindowshadow_childevent_isbase = value; }
    inline void setKWindowShadow_CustomEvent_IsBase(bool value) const { kwindowshadow_customevent_isbase = value; }
    inline void setKWindowShadow_ConnectNotify_IsBase(bool value) const { kwindowshadow_connectnotify_isbase = value; }
    inline void setKWindowShadow_DisconnectNotify_IsBase(bool value) const { kwindowshadow_disconnectnotify_isbase = value; }
    inline void setKWindowShadow_Sender_IsBase(bool value) const { kwindowshadow_sender_isbase = value; }
    inline void setKWindowShadow_SenderSignalIndex_IsBase(bool value) const { kwindowshadow_sendersignalindex_isbase = value; }
    inline void setKWindowShadow_Receivers_IsBase(bool value) const { kwindowshadow_receivers_isbase = value; }
    inline void setKWindowShadow_IsSignalConnected_IsBase(bool value) const { kwindowshadow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowshadow_metacall_isbase) {
            kwindowshadow_metacall_isbase = false;
            return KWindowShadow::qt_metacall(param1, param2, param3);
        } else if (kwindowshadow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kwindowshadow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWindowShadow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowshadow_event_isbase) {
            kwindowshadow_event_isbase = false;
            return KWindowShadow::event(event);
        } else if (kwindowshadow_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kwindowshadow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWindowShadow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwindowshadow_eventfilter_isbase) {
            kwindowshadow_eventfilter_isbase = false;
            return KWindowShadow::eventFilter(watched, event);
        } else if (kwindowshadow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kwindowshadow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KWindowShadow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwindowshadow_timerevent_isbase) {
            kwindowshadow_timerevent_isbase = false;
            KWindowShadow::timerEvent(event);
        } else if (kwindowshadow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kwindowshadow_timerevent_callback(this, cbval1);
        } else {
            KWindowShadow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowshadow_childevent_isbase) {
            kwindowshadow_childevent_isbase = false;
            KWindowShadow::childEvent(event);
        } else if (kwindowshadow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kwindowshadow_childevent_callback(this, cbval1);
        } else {
            KWindowShadow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowshadow_customevent_isbase) {
            kwindowshadow_customevent_isbase = false;
            KWindowShadow::customEvent(event);
        } else if (kwindowshadow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kwindowshadow_customevent_callback(this, cbval1);
        } else {
            KWindowShadow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowshadow_connectnotify_isbase) {
            kwindowshadow_connectnotify_isbase = false;
            KWindowShadow::connectNotify(signal);
        } else if (kwindowshadow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwindowshadow_connectnotify_callback(this, cbval1);
        } else {
            KWindowShadow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowshadow_disconnectnotify_isbase) {
            kwindowshadow_disconnectnotify_isbase = false;
            KWindowShadow::disconnectNotify(signal);
        } else if (kwindowshadow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwindowshadow_disconnectnotify_callback(this, cbval1);
        } else {
            KWindowShadow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwindowshadow_sender_isbase) {
            kwindowshadow_sender_isbase = false;
            return KWindowShadow::sender();
        } else if (kwindowshadow_sender_callback != nullptr) {
            QObject* callback_ret = kwindowshadow_sender_callback();
            return callback_ret;
        } else {
            return KWindowShadow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwindowshadow_sendersignalindex_isbase) {
            kwindowshadow_sendersignalindex_isbase = false;
            return KWindowShadow::senderSignalIndex();
        } else if (kwindowshadow_sendersignalindex_callback != nullptr) {
            int callback_ret = kwindowshadow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KWindowShadow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwindowshadow_receivers_isbase) {
            kwindowshadow_receivers_isbase = false;
            return KWindowShadow::receivers(signal);
        } else if (kwindowshadow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kwindowshadow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KWindowShadow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwindowshadow_issignalconnected_isbase) {
            kwindowshadow_issignalconnected_isbase = false;
            return KWindowShadow::isSignalConnected(signal);
        } else if (kwindowshadow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kwindowshadow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWindowShadow::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KWindowShadow_TimerEvent(KWindowShadow* self, QTimerEvent* event);
    friend void KWindowShadow_QBaseTimerEvent(KWindowShadow* self, QTimerEvent* event);
    friend void KWindowShadow_ChildEvent(KWindowShadow* self, QChildEvent* event);
    friend void KWindowShadow_QBaseChildEvent(KWindowShadow* self, QChildEvent* event);
    friend void KWindowShadow_CustomEvent(KWindowShadow* self, QEvent* event);
    friend void KWindowShadow_QBaseCustomEvent(KWindowShadow* self, QEvent* event);
    friend void KWindowShadow_ConnectNotify(KWindowShadow* self, const QMetaMethod* signal);
    friend void KWindowShadow_QBaseConnectNotify(KWindowShadow* self, const QMetaMethod* signal);
    friend void KWindowShadow_DisconnectNotify(KWindowShadow* self, const QMetaMethod* signal);
    friend void KWindowShadow_QBaseDisconnectNotify(KWindowShadow* self, const QMetaMethod* signal);
    friend QObject* KWindowShadow_Sender(const KWindowShadow* self);
    friend QObject* KWindowShadow_QBaseSender(const KWindowShadow* self);
    friend int KWindowShadow_SenderSignalIndex(const KWindowShadow* self);
    friend int KWindowShadow_QBaseSenderSignalIndex(const KWindowShadow* self);
    friend int KWindowShadow_Receivers(const KWindowShadow* self, const char* signal);
    friend int KWindowShadow_QBaseReceivers(const KWindowShadow* self, const char* signal);
    friend bool KWindowShadow_IsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal);
    friend bool KWindowShadow_QBaseIsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal);
};

#endif
