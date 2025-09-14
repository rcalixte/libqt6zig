#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKCOREURLNAVIGATOR_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKCOREURLNAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCoreUrlNavigator so that we can call protected methods
class VirtualKCoreUrlNavigator final : public KCoreUrlNavigator {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreUrlNavigator = true;

    // Virtual class public types (including callbacks)
    using KCoreUrlNavigator_Metacall_Callback = int (*)(KCoreUrlNavigator*, int, int, void**);
    using KCoreUrlNavigator_Event_Callback = bool (*)(KCoreUrlNavigator*, QEvent*);
    using KCoreUrlNavigator_EventFilter_Callback = bool (*)(KCoreUrlNavigator*, QObject*, QEvent*);
    using KCoreUrlNavigator_TimerEvent_Callback = void (*)(KCoreUrlNavigator*, QTimerEvent*);
    using KCoreUrlNavigator_ChildEvent_Callback = void (*)(KCoreUrlNavigator*, QChildEvent*);
    using KCoreUrlNavigator_CustomEvent_Callback = void (*)(KCoreUrlNavigator*, QEvent*);
    using KCoreUrlNavigator_ConnectNotify_Callback = void (*)(KCoreUrlNavigator*, QMetaMethod*);
    using KCoreUrlNavigator_DisconnectNotify_Callback = void (*)(KCoreUrlNavigator*, QMetaMethod*);
    using KCoreUrlNavigator_Sender_Callback = QObject* (*)();
    using KCoreUrlNavigator_SenderSignalIndex_Callback = int (*)();
    using KCoreUrlNavigator_Receivers_Callback = int (*)(const KCoreUrlNavigator*, const char*);
    using KCoreUrlNavigator_IsSignalConnected_Callback = bool (*)(const KCoreUrlNavigator*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCoreUrlNavigator_Metacall_Callback kcoreurlnavigator_metacall_callback = nullptr;
    KCoreUrlNavigator_Event_Callback kcoreurlnavigator_event_callback = nullptr;
    KCoreUrlNavigator_EventFilter_Callback kcoreurlnavigator_eventfilter_callback = nullptr;
    KCoreUrlNavigator_TimerEvent_Callback kcoreurlnavigator_timerevent_callback = nullptr;
    KCoreUrlNavigator_ChildEvent_Callback kcoreurlnavigator_childevent_callback = nullptr;
    KCoreUrlNavigator_CustomEvent_Callback kcoreurlnavigator_customevent_callback = nullptr;
    KCoreUrlNavigator_ConnectNotify_Callback kcoreurlnavigator_connectnotify_callback = nullptr;
    KCoreUrlNavigator_DisconnectNotify_Callback kcoreurlnavigator_disconnectnotify_callback = nullptr;
    KCoreUrlNavigator_Sender_Callback kcoreurlnavigator_sender_callback = nullptr;
    KCoreUrlNavigator_SenderSignalIndex_Callback kcoreurlnavigator_sendersignalindex_callback = nullptr;
    KCoreUrlNavigator_Receivers_Callback kcoreurlnavigator_receivers_callback = nullptr;
    KCoreUrlNavigator_IsSignalConnected_Callback kcoreurlnavigator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcoreurlnavigator_metacall_isbase = false;
    mutable bool kcoreurlnavigator_event_isbase = false;
    mutable bool kcoreurlnavigator_eventfilter_isbase = false;
    mutable bool kcoreurlnavigator_timerevent_isbase = false;
    mutable bool kcoreurlnavigator_childevent_isbase = false;
    mutable bool kcoreurlnavigator_customevent_isbase = false;
    mutable bool kcoreurlnavigator_connectnotify_isbase = false;
    mutable bool kcoreurlnavigator_disconnectnotify_isbase = false;
    mutable bool kcoreurlnavigator_sender_isbase = false;
    mutable bool kcoreurlnavigator_sendersignalindex_isbase = false;
    mutable bool kcoreurlnavigator_receivers_isbase = false;
    mutable bool kcoreurlnavigator_issignalconnected_isbase = false;

  public:
    VirtualKCoreUrlNavigator() : KCoreUrlNavigator() {};
    VirtualKCoreUrlNavigator(const QUrl& url) : KCoreUrlNavigator(url) {};
    VirtualKCoreUrlNavigator(const QUrl& url, QObject* parent) : KCoreUrlNavigator(url, parent) {};

    ~VirtualKCoreUrlNavigator() {
        kcoreurlnavigator_metacall_callback = nullptr;
        kcoreurlnavigator_event_callback = nullptr;
        kcoreurlnavigator_eventfilter_callback = nullptr;
        kcoreurlnavigator_timerevent_callback = nullptr;
        kcoreurlnavigator_childevent_callback = nullptr;
        kcoreurlnavigator_customevent_callback = nullptr;
        kcoreurlnavigator_connectnotify_callback = nullptr;
        kcoreurlnavigator_disconnectnotify_callback = nullptr;
        kcoreurlnavigator_sender_callback = nullptr;
        kcoreurlnavigator_sendersignalindex_callback = nullptr;
        kcoreurlnavigator_receivers_callback = nullptr;
        kcoreurlnavigator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreUrlNavigator_Metacall_Callback(KCoreUrlNavigator_Metacall_Callback cb) { kcoreurlnavigator_metacall_callback = cb; }
    inline void setKCoreUrlNavigator_Event_Callback(KCoreUrlNavigator_Event_Callback cb) { kcoreurlnavigator_event_callback = cb; }
    inline void setKCoreUrlNavigator_EventFilter_Callback(KCoreUrlNavigator_EventFilter_Callback cb) { kcoreurlnavigator_eventfilter_callback = cb; }
    inline void setKCoreUrlNavigator_TimerEvent_Callback(KCoreUrlNavigator_TimerEvent_Callback cb) { kcoreurlnavigator_timerevent_callback = cb; }
    inline void setKCoreUrlNavigator_ChildEvent_Callback(KCoreUrlNavigator_ChildEvent_Callback cb) { kcoreurlnavigator_childevent_callback = cb; }
    inline void setKCoreUrlNavigator_CustomEvent_Callback(KCoreUrlNavigator_CustomEvent_Callback cb) { kcoreurlnavigator_customevent_callback = cb; }
    inline void setKCoreUrlNavigator_ConnectNotify_Callback(KCoreUrlNavigator_ConnectNotify_Callback cb) { kcoreurlnavigator_connectnotify_callback = cb; }
    inline void setKCoreUrlNavigator_DisconnectNotify_Callback(KCoreUrlNavigator_DisconnectNotify_Callback cb) { kcoreurlnavigator_disconnectnotify_callback = cb; }
    inline void setKCoreUrlNavigator_Sender_Callback(KCoreUrlNavigator_Sender_Callback cb) { kcoreurlnavigator_sender_callback = cb; }
    inline void setKCoreUrlNavigator_SenderSignalIndex_Callback(KCoreUrlNavigator_SenderSignalIndex_Callback cb) { kcoreurlnavigator_sendersignalindex_callback = cb; }
    inline void setKCoreUrlNavigator_Receivers_Callback(KCoreUrlNavigator_Receivers_Callback cb) { kcoreurlnavigator_receivers_callback = cb; }
    inline void setKCoreUrlNavigator_IsSignalConnected_Callback(KCoreUrlNavigator_IsSignalConnected_Callback cb) { kcoreurlnavigator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCoreUrlNavigator_Metacall_IsBase(bool value) const { kcoreurlnavigator_metacall_isbase = value; }
    inline void setKCoreUrlNavigator_Event_IsBase(bool value) const { kcoreurlnavigator_event_isbase = value; }
    inline void setKCoreUrlNavigator_EventFilter_IsBase(bool value) const { kcoreurlnavigator_eventfilter_isbase = value; }
    inline void setKCoreUrlNavigator_TimerEvent_IsBase(bool value) const { kcoreurlnavigator_timerevent_isbase = value; }
    inline void setKCoreUrlNavigator_ChildEvent_IsBase(bool value) const { kcoreurlnavigator_childevent_isbase = value; }
    inline void setKCoreUrlNavigator_CustomEvent_IsBase(bool value) const { kcoreurlnavigator_customevent_isbase = value; }
    inline void setKCoreUrlNavigator_ConnectNotify_IsBase(bool value) const { kcoreurlnavigator_connectnotify_isbase = value; }
    inline void setKCoreUrlNavigator_DisconnectNotify_IsBase(bool value) const { kcoreurlnavigator_disconnectnotify_isbase = value; }
    inline void setKCoreUrlNavigator_Sender_IsBase(bool value) const { kcoreurlnavigator_sender_isbase = value; }
    inline void setKCoreUrlNavigator_SenderSignalIndex_IsBase(bool value) const { kcoreurlnavigator_sendersignalindex_isbase = value; }
    inline void setKCoreUrlNavigator_Receivers_IsBase(bool value) const { kcoreurlnavigator_receivers_isbase = value; }
    inline void setKCoreUrlNavigator_IsSignalConnected_IsBase(bool value) const { kcoreurlnavigator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoreurlnavigator_metacall_isbase) {
            kcoreurlnavigator_metacall_isbase = false;
            return KCoreUrlNavigator::qt_metacall(param1, param2, param3);
        } else if (kcoreurlnavigator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcoreurlnavigator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCoreUrlNavigator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoreurlnavigator_event_isbase) {
            kcoreurlnavigator_event_isbase = false;
            return KCoreUrlNavigator::event(event);
        } else if (kcoreurlnavigator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcoreurlnavigator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreUrlNavigator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoreurlnavigator_eventfilter_isbase) {
            kcoreurlnavigator_eventfilter_isbase = false;
            return KCoreUrlNavigator::eventFilter(watched, event);
        } else if (kcoreurlnavigator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcoreurlnavigator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCoreUrlNavigator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoreurlnavigator_timerevent_isbase) {
            kcoreurlnavigator_timerevent_isbase = false;
            KCoreUrlNavigator::timerEvent(event);
        } else if (kcoreurlnavigator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcoreurlnavigator_timerevent_callback(this, cbval1);
        } else {
            KCoreUrlNavigator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoreurlnavigator_childevent_isbase) {
            kcoreurlnavigator_childevent_isbase = false;
            KCoreUrlNavigator::childEvent(event);
        } else if (kcoreurlnavigator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcoreurlnavigator_childevent_callback(this, cbval1);
        } else {
            KCoreUrlNavigator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoreurlnavigator_customevent_isbase) {
            kcoreurlnavigator_customevent_isbase = false;
            KCoreUrlNavigator::customEvent(event);
        } else if (kcoreurlnavigator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcoreurlnavigator_customevent_callback(this, cbval1);
        } else {
            KCoreUrlNavigator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoreurlnavigator_connectnotify_isbase) {
            kcoreurlnavigator_connectnotify_isbase = false;
            KCoreUrlNavigator::connectNotify(signal);
        } else if (kcoreurlnavigator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcoreurlnavigator_connectnotify_callback(this, cbval1);
        } else {
            KCoreUrlNavigator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoreurlnavigator_disconnectnotify_isbase) {
            kcoreurlnavigator_disconnectnotify_isbase = false;
            KCoreUrlNavigator::disconnectNotify(signal);
        } else if (kcoreurlnavigator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcoreurlnavigator_disconnectnotify_callback(this, cbval1);
        } else {
            KCoreUrlNavigator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcoreurlnavigator_sender_isbase) {
            kcoreurlnavigator_sender_isbase = false;
            return KCoreUrlNavigator::sender();
        } else if (kcoreurlnavigator_sender_callback != nullptr) {
            QObject* callback_ret = kcoreurlnavigator_sender_callback();
            return callback_ret;
        } else {
            return KCoreUrlNavigator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcoreurlnavigator_sendersignalindex_isbase) {
            kcoreurlnavigator_sendersignalindex_isbase = false;
            return KCoreUrlNavigator::senderSignalIndex();
        } else if (kcoreurlnavigator_sendersignalindex_callback != nullptr) {
            int callback_ret = kcoreurlnavigator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCoreUrlNavigator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcoreurlnavigator_receivers_isbase) {
            kcoreurlnavigator_receivers_isbase = false;
            return KCoreUrlNavigator::receivers(signal);
        } else if (kcoreurlnavigator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcoreurlnavigator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCoreUrlNavigator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcoreurlnavigator_issignalconnected_isbase) {
            kcoreurlnavigator_issignalconnected_isbase = false;
            return KCoreUrlNavigator::isSignalConnected(signal);
        } else if (kcoreurlnavigator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcoreurlnavigator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreUrlNavigator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KCoreUrlNavigator_TimerEvent(KCoreUrlNavigator* self, QTimerEvent* event);
    friend void KCoreUrlNavigator_QBaseTimerEvent(KCoreUrlNavigator* self, QTimerEvent* event);
    friend void KCoreUrlNavigator_ChildEvent(KCoreUrlNavigator* self, QChildEvent* event);
    friend void KCoreUrlNavigator_QBaseChildEvent(KCoreUrlNavigator* self, QChildEvent* event);
    friend void KCoreUrlNavigator_CustomEvent(KCoreUrlNavigator* self, QEvent* event);
    friend void KCoreUrlNavigator_QBaseCustomEvent(KCoreUrlNavigator* self, QEvent* event);
    friend void KCoreUrlNavigator_ConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
    friend void KCoreUrlNavigator_QBaseConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
    friend void KCoreUrlNavigator_DisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
    friend void KCoreUrlNavigator_QBaseDisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
    friend QObject* KCoreUrlNavigator_Sender(const KCoreUrlNavigator* self);
    friend QObject* KCoreUrlNavigator_QBaseSender(const KCoreUrlNavigator* self);
    friend int KCoreUrlNavigator_SenderSignalIndex(const KCoreUrlNavigator* self);
    friend int KCoreUrlNavigator_QBaseSenderSignalIndex(const KCoreUrlNavigator* self);
    friend int KCoreUrlNavigator_Receivers(const KCoreUrlNavigator* self, const char* signal);
    friend int KCoreUrlNavigator_QBaseReceivers(const KCoreUrlNavigator* self, const char* signal);
    friend bool KCoreUrlNavigator_IsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal);
    friend bool KCoreUrlNavigator_QBaseIsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal);
};

#endif
