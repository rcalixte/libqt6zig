#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKSELECTIONWATCHER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKSELECTIONWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectionWatcher so that we can call protected methods
class VirtualKSelectionWatcher final : public KSelectionWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualKSelectionWatcher = true;

    // Virtual class public types (including callbacks)
    using KSelectionWatcher_Metacall_Callback = int (*)(KSelectionWatcher*, int, int, void**);
    using KSelectionWatcher_Event_Callback = bool (*)(KSelectionWatcher*, QEvent*);
    using KSelectionWatcher_EventFilter_Callback = bool (*)(KSelectionWatcher*, QObject*, QEvent*);
    using KSelectionWatcher_TimerEvent_Callback = void (*)(KSelectionWatcher*, QTimerEvent*);
    using KSelectionWatcher_ChildEvent_Callback = void (*)(KSelectionWatcher*, QChildEvent*);
    using KSelectionWatcher_CustomEvent_Callback = void (*)(KSelectionWatcher*, QEvent*);
    using KSelectionWatcher_ConnectNotify_Callback = void (*)(KSelectionWatcher*, QMetaMethod*);
    using KSelectionWatcher_DisconnectNotify_Callback = void (*)(KSelectionWatcher*, QMetaMethod*);
    using KSelectionWatcher_Sender_Callback = QObject* (*)();
    using KSelectionWatcher_SenderSignalIndex_Callback = int (*)();
    using KSelectionWatcher_Receivers_Callback = int (*)(const KSelectionWatcher*, const char*);
    using KSelectionWatcher_IsSignalConnected_Callback = bool (*)(const KSelectionWatcher*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSelectionWatcher_Metacall_Callback kselectionwatcher_metacall_callback = nullptr;
    KSelectionWatcher_Event_Callback kselectionwatcher_event_callback = nullptr;
    KSelectionWatcher_EventFilter_Callback kselectionwatcher_eventfilter_callback = nullptr;
    KSelectionWatcher_TimerEvent_Callback kselectionwatcher_timerevent_callback = nullptr;
    KSelectionWatcher_ChildEvent_Callback kselectionwatcher_childevent_callback = nullptr;
    KSelectionWatcher_CustomEvent_Callback kselectionwatcher_customevent_callback = nullptr;
    KSelectionWatcher_ConnectNotify_Callback kselectionwatcher_connectnotify_callback = nullptr;
    KSelectionWatcher_DisconnectNotify_Callback kselectionwatcher_disconnectnotify_callback = nullptr;
    KSelectionWatcher_Sender_Callback kselectionwatcher_sender_callback = nullptr;
    KSelectionWatcher_SenderSignalIndex_Callback kselectionwatcher_sendersignalindex_callback = nullptr;
    KSelectionWatcher_Receivers_Callback kselectionwatcher_receivers_callback = nullptr;
    KSelectionWatcher_IsSignalConnected_Callback kselectionwatcher_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kselectionwatcher_metacall_isbase = false;
    mutable bool kselectionwatcher_event_isbase = false;
    mutable bool kselectionwatcher_eventfilter_isbase = false;
    mutable bool kselectionwatcher_timerevent_isbase = false;
    mutable bool kselectionwatcher_childevent_isbase = false;
    mutable bool kselectionwatcher_customevent_isbase = false;
    mutable bool kselectionwatcher_connectnotify_isbase = false;
    mutable bool kselectionwatcher_disconnectnotify_isbase = false;
    mutable bool kselectionwatcher_sender_isbase = false;
    mutable bool kselectionwatcher_sendersignalindex_isbase = false;
    mutable bool kselectionwatcher_receivers_isbase = false;
    mutable bool kselectionwatcher_issignalconnected_isbase = false;

  public:
    VirtualKSelectionWatcher(const char* selection) : KSelectionWatcher(selection) {};
    VirtualKSelectionWatcher(const char* selection, int screen) : KSelectionWatcher(selection, screen) {};
    VirtualKSelectionWatcher(const char* selection, int screen, QObject* parent) : KSelectionWatcher(selection, screen, parent) {};

    ~VirtualKSelectionWatcher() {
        kselectionwatcher_metacall_callback = nullptr;
        kselectionwatcher_event_callback = nullptr;
        kselectionwatcher_eventfilter_callback = nullptr;
        kselectionwatcher_timerevent_callback = nullptr;
        kselectionwatcher_childevent_callback = nullptr;
        kselectionwatcher_customevent_callback = nullptr;
        kselectionwatcher_connectnotify_callback = nullptr;
        kselectionwatcher_disconnectnotify_callback = nullptr;
        kselectionwatcher_sender_callback = nullptr;
        kselectionwatcher_sendersignalindex_callback = nullptr;
        kselectionwatcher_receivers_callback = nullptr;
        kselectionwatcher_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSelectionWatcher_Metacall_Callback(KSelectionWatcher_Metacall_Callback cb) { kselectionwatcher_metacall_callback = cb; }
    inline void setKSelectionWatcher_Event_Callback(KSelectionWatcher_Event_Callback cb) { kselectionwatcher_event_callback = cb; }
    inline void setKSelectionWatcher_EventFilter_Callback(KSelectionWatcher_EventFilter_Callback cb) { kselectionwatcher_eventfilter_callback = cb; }
    inline void setKSelectionWatcher_TimerEvent_Callback(KSelectionWatcher_TimerEvent_Callback cb) { kselectionwatcher_timerevent_callback = cb; }
    inline void setKSelectionWatcher_ChildEvent_Callback(KSelectionWatcher_ChildEvent_Callback cb) { kselectionwatcher_childevent_callback = cb; }
    inline void setKSelectionWatcher_CustomEvent_Callback(KSelectionWatcher_CustomEvent_Callback cb) { kselectionwatcher_customevent_callback = cb; }
    inline void setKSelectionWatcher_ConnectNotify_Callback(KSelectionWatcher_ConnectNotify_Callback cb) { kselectionwatcher_connectnotify_callback = cb; }
    inline void setKSelectionWatcher_DisconnectNotify_Callback(KSelectionWatcher_DisconnectNotify_Callback cb) { kselectionwatcher_disconnectnotify_callback = cb; }
    inline void setKSelectionWatcher_Sender_Callback(KSelectionWatcher_Sender_Callback cb) { kselectionwatcher_sender_callback = cb; }
    inline void setKSelectionWatcher_SenderSignalIndex_Callback(KSelectionWatcher_SenderSignalIndex_Callback cb) { kselectionwatcher_sendersignalindex_callback = cb; }
    inline void setKSelectionWatcher_Receivers_Callback(KSelectionWatcher_Receivers_Callback cb) { kselectionwatcher_receivers_callback = cb; }
    inline void setKSelectionWatcher_IsSignalConnected_Callback(KSelectionWatcher_IsSignalConnected_Callback cb) { kselectionwatcher_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSelectionWatcher_Metacall_IsBase(bool value) const { kselectionwatcher_metacall_isbase = value; }
    inline void setKSelectionWatcher_Event_IsBase(bool value) const { kselectionwatcher_event_isbase = value; }
    inline void setKSelectionWatcher_EventFilter_IsBase(bool value) const { kselectionwatcher_eventfilter_isbase = value; }
    inline void setKSelectionWatcher_TimerEvent_IsBase(bool value) const { kselectionwatcher_timerevent_isbase = value; }
    inline void setKSelectionWatcher_ChildEvent_IsBase(bool value) const { kselectionwatcher_childevent_isbase = value; }
    inline void setKSelectionWatcher_CustomEvent_IsBase(bool value) const { kselectionwatcher_customevent_isbase = value; }
    inline void setKSelectionWatcher_ConnectNotify_IsBase(bool value) const { kselectionwatcher_connectnotify_isbase = value; }
    inline void setKSelectionWatcher_DisconnectNotify_IsBase(bool value) const { kselectionwatcher_disconnectnotify_isbase = value; }
    inline void setKSelectionWatcher_Sender_IsBase(bool value) const { kselectionwatcher_sender_isbase = value; }
    inline void setKSelectionWatcher_SenderSignalIndex_IsBase(bool value) const { kselectionwatcher_sendersignalindex_isbase = value; }
    inline void setKSelectionWatcher_Receivers_IsBase(bool value) const { kselectionwatcher_receivers_isbase = value; }
    inline void setKSelectionWatcher_IsSignalConnected_IsBase(bool value) const { kselectionwatcher_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectionwatcher_metacall_isbase) {
            kselectionwatcher_metacall_isbase = false;
            return KSelectionWatcher::qt_metacall(param1, param2, param3);
        } else if (kselectionwatcher_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kselectionwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionWatcher::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectionwatcher_event_isbase) {
            kselectionwatcher_event_isbase = false;
            return KSelectionWatcher::event(event);
        } else if (kselectionwatcher_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kselectionwatcher_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionWatcher::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectionwatcher_eventfilter_isbase) {
            kselectionwatcher_eventfilter_isbase = false;
            return KSelectionWatcher::eventFilter(watched, event);
        } else if (kselectionwatcher_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kselectionwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSelectionWatcher::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectionwatcher_timerevent_isbase) {
            kselectionwatcher_timerevent_isbase = false;
            KSelectionWatcher::timerEvent(event);
        } else if (kselectionwatcher_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kselectionwatcher_timerevent_callback(this, cbval1);
        } else {
            KSelectionWatcher::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectionwatcher_childevent_isbase) {
            kselectionwatcher_childevent_isbase = false;
            KSelectionWatcher::childEvent(event);
        } else if (kselectionwatcher_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kselectionwatcher_childevent_callback(this, cbval1);
        } else {
            KSelectionWatcher::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectionwatcher_customevent_isbase) {
            kselectionwatcher_customevent_isbase = false;
            KSelectionWatcher::customEvent(event);
        } else if (kselectionwatcher_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kselectionwatcher_customevent_callback(this, cbval1);
        } else {
            KSelectionWatcher::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectionwatcher_connectnotify_isbase) {
            kselectionwatcher_connectnotify_isbase = false;
            KSelectionWatcher::connectNotify(signal);
        } else if (kselectionwatcher_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kselectionwatcher_connectnotify_callback(this, cbval1);
        } else {
            KSelectionWatcher::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectionwatcher_disconnectnotify_isbase) {
            kselectionwatcher_disconnectnotify_isbase = false;
            KSelectionWatcher::disconnectNotify(signal);
        } else if (kselectionwatcher_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kselectionwatcher_disconnectnotify_callback(this, cbval1);
        } else {
            KSelectionWatcher::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kselectionwatcher_sender_isbase) {
            kselectionwatcher_sender_isbase = false;
            return KSelectionWatcher::sender();
        } else if (kselectionwatcher_sender_callback != nullptr) {
            QObject* callback_ret = kselectionwatcher_sender_callback();
            return callback_ret;
        } else {
            return KSelectionWatcher::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kselectionwatcher_sendersignalindex_isbase) {
            kselectionwatcher_sendersignalindex_isbase = false;
            return KSelectionWatcher::senderSignalIndex();
        } else if (kselectionwatcher_sendersignalindex_callback != nullptr) {
            int callback_ret = kselectionwatcher_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionWatcher::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kselectionwatcher_receivers_isbase) {
            kselectionwatcher_receivers_isbase = false;
            return KSelectionWatcher::receivers(signal);
        } else if (kselectionwatcher_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kselectionwatcher_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionWatcher::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kselectionwatcher_issignalconnected_isbase) {
            kselectionwatcher_issignalconnected_isbase = false;
            return KSelectionWatcher::isSignalConnected(signal);
        } else if (kselectionwatcher_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kselectionwatcher_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionWatcher::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSelectionWatcher_TimerEvent(KSelectionWatcher* self, QTimerEvent* event);
    friend void KSelectionWatcher_QBaseTimerEvent(KSelectionWatcher* self, QTimerEvent* event);
    friend void KSelectionWatcher_ChildEvent(KSelectionWatcher* self, QChildEvent* event);
    friend void KSelectionWatcher_QBaseChildEvent(KSelectionWatcher* self, QChildEvent* event);
    friend void KSelectionWatcher_CustomEvent(KSelectionWatcher* self, QEvent* event);
    friend void KSelectionWatcher_QBaseCustomEvent(KSelectionWatcher* self, QEvent* event);
    friend void KSelectionWatcher_ConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
    friend void KSelectionWatcher_QBaseConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
    friend void KSelectionWatcher_DisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
    friend void KSelectionWatcher_QBaseDisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
    friend QObject* KSelectionWatcher_Sender(const KSelectionWatcher* self);
    friend QObject* KSelectionWatcher_QBaseSender(const KSelectionWatcher* self);
    friend int KSelectionWatcher_SenderSignalIndex(const KSelectionWatcher* self);
    friend int KSelectionWatcher_QBaseSenderSignalIndex(const KSelectionWatcher* self);
    friend int KSelectionWatcher_Receivers(const KSelectionWatcher* self, const char* signal);
    friend int KSelectionWatcher_QBaseReceivers(const KSelectionWatcher* self, const char* signal);
    friend bool KSelectionWatcher_IsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal);
    friend bool KSelectionWatcher_QBaseIsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal);
};

#endif
