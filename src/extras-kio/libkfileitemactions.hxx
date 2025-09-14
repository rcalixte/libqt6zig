#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEITEMACTIONS_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEITEMACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileItemActions so that we can call protected methods
class VirtualKFileItemActions final : public KFileItemActions {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileItemActions = true;

    // Virtual class public types (including callbacks)
    using KFileItemActions_Metacall_Callback = int (*)(KFileItemActions*, int, int, void**);
    using KFileItemActions_Event_Callback = bool (*)(KFileItemActions*, QEvent*);
    using KFileItemActions_EventFilter_Callback = bool (*)(KFileItemActions*, QObject*, QEvent*);
    using KFileItemActions_TimerEvent_Callback = void (*)(KFileItemActions*, QTimerEvent*);
    using KFileItemActions_ChildEvent_Callback = void (*)(KFileItemActions*, QChildEvent*);
    using KFileItemActions_CustomEvent_Callback = void (*)(KFileItemActions*, QEvent*);
    using KFileItemActions_ConnectNotify_Callback = void (*)(KFileItemActions*, QMetaMethod*);
    using KFileItemActions_DisconnectNotify_Callback = void (*)(KFileItemActions*, QMetaMethod*);
    using KFileItemActions_Sender_Callback = QObject* (*)();
    using KFileItemActions_SenderSignalIndex_Callback = int (*)();
    using KFileItemActions_Receivers_Callback = int (*)(const KFileItemActions*, const char*);
    using KFileItemActions_IsSignalConnected_Callback = bool (*)(const KFileItemActions*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFileItemActions_Metacall_Callback kfileitemactions_metacall_callback = nullptr;
    KFileItemActions_Event_Callback kfileitemactions_event_callback = nullptr;
    KFileItemActions_EventFilter_Callback kfileitemactions_eventfilter_callback = nullptr;
    KFileItemActions_TimerEvent_Callback kfileitemactions_timerevent_callback = nullptr;
    KFileItemActions_ChildEvent_Callback kfileitemactions_childevent_callback = nullptr;
    KFileItemActions_CustomEvent_Callback kfileitemactions_customevent_callback = nullptr;
    KFileItemActions_ConnectNotify_Callback kfileitemactions_connectnotify_callback = nullptr;
    KFileItemActions_DisconnectNotify_Callback kfileitemactions_disconnectnotify_callback = nullptr;
    KFileItemActions_Sender_Callback kfileitemactions_sender_callback = nullptr;
    KFileItemActions_SenderSignalIndex_Callback kfileitemactions_sendersignalindex_callback = nullptr;
    KFileItemActions_Receivers_Callback kfileitemactions_receivers_callback = nullptr;
    KFileItemActions_IsSignalConnected_Callback kfileitemactions_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfileitemactions_metacall_isbase = false;
    mutable bool kfileitemactions_event_isbase = false;
    mutable bool kfileitemactions_eventfilter_isbase = false;
    mutable bool kfileitemactions_timerevent_isbase = false;
    mutable bool kfileitemactions_childevent_isbase = false;
    mutable bool kfileitemactions_customevent_isbase = false;
    mutable bool kfileitemactions_connectnotify_isbase = false;
    mutable bool kfileitemactions_disconnectnotify_isbase = false;
    mutable bool kfileitemactions_sender_isbase = false;
    mutable bool kfileitemactions_sendersignalindex_isbase = false;
    mutable bool kfileitemactions_receivers_isbase = false;
    mutable bool kfileitemactions_issignalconnected_isbase = false;

  public:
    VirtualKFileItemActions() : KFileItemActions() {};
    VirtualKFileItemActions(QObject* parent) : KFileItemActions(parent) {};

    ~VirtualKFileItemActions() {
        kfileitemactions_metacall_callback = nullptr;
        kfileitemactions_event_callback = nullptr;
        kfileitemactions_eventfilter_callback = nullptr;
        kfileitemactions_timerevent_callback = nullptr;
        kfileitemactions_childevent_callback = nullptr;
        kfileitemactions_customevent_callback = nullptr;
        kfileitemactions_connectnotify_callback = nullptr;
        kfileitemactions_disconnectnotify_callback = nullptr;
        kfileitemactions_sender_callback = nullptr;
        kfileitemactions_sendersignalindex_callback = nullptr;
        kfileitemactions_receivers_callback = nullptr;
        kfileitemactions_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFileItemActions_Metacall_Callback(KFileItemActions_Metacall_Callback cb) { kfileitemactions_metacall_callback = cb; }
    inline void setKFileItemActions_Event_Callback(KFileItemActions_Event_Callback cb) { kfileitemactions_event_callback = cb; }
    inline void setKFileItemActions_EventFilter_Callback(KFileItemActions_EventFilter_Callback cb) { kfileitemactions_eventfilter_callback = cb; }
    inline void setKFileItemActions_TimerEvent_Callback(KFileItemActions_TimerEvent_Callback cb) { kfileitemactions_timerevent_callback = cb; }
    inline void setKFileItemActions_ChildEvent_Callback(KFileItemActions_ChildEvent_Callback cb) { kfileitemactions_childevent_callback = cb; }
    inline void setKFileItemActions_CustomEvent_Callback(KFileItemActions_CustomEvent_Callback cb) { kfileitemactions_customevent_callback = cb; }
    inline void setKFileItemActions_ConnectNotify_Callback(KFileItemActions_ConnectNotify_Callback cb) { kfileitemactions_connectnotify_callback = cb; }
    inline void setKFileItemActions_DisconnectNotify_Callback(KFileItemActions_DisconnectNotify_Callback cb) { kfileitemactions_disconnectnotify_callback = cb; }
    inline void setKFileItemActions_Sender_Callback(KFileItemActions_Sender_Callback cb) { kfileitemactions_sender_callback = cb; }
    inline void setKFileItemActions_SenderSignalIndex_Callback(KFileItemActions_SenderSignalIndex_Callback cb) { kfileitemactions_sendersignalindex_callback = cb; }
    inline void setKFileItemActions_Receivers_Callback(KFileItemActions_Receivers_Callback cb) { kfileitemactions_receivers_callback = cb; }
    inline void setKFileItemActions_IsSignalConnected_Callback(KFileItemActions_IsSignalConnected_Callback cb) { kfileitemactions_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFileItemActions_Metacall_IsBase(bool value) const { kfileitemactions_metacall_isbase = value; }
    inline void setKFileItemActions_Event_IsBase(bool value) const { kfileitemactions_event_isbase = value; }
    inline void setKFileItemActions_EventFilter_IsBase(bool value) const { kfileitemactions_eventfilter_isbase = value; }
    inline void setKFileItemActions_TimerEvent_IsBase(bool value) const { kfileitemactions_timerevent_isbase = value; }
    inline void setKFileItemActions_ChildEvent_IsBase(bool value) const { kfileitemactions_childevent_isbase = value; }
    inline void setKFileItemActions_CustomEvent_IsBase(bool value) const { kfileitemactions_customevent_isbase = value; }
    inline void setKFileItemActions_ConnectNotify_IsBase(bool value) const { kfileitemactions_connectnotify_isbase = value; }
    inline void setKFileItemActions_DisconnectNotify_IsBase(bool value) const { kfileitemactions_disconnectnotify_isbase = value; }
    inline void setKFileItemActions_Sender_IsBase(bool value) const { kfileitemactions_sender_isbase = value; }
    inline void setKFileItemActions_SenderSignalIndex_IsBase(bool value) const { kfileitemactions_sendersignalindex_isbase = value; }
    inline void setKFileItemActions_Receivers_IsBase(bool value) const { kfileitemactions_receivers_isbase = value; }
    inline void setKFileItemActions_IsSignalConnected_IsBase(bool value) const { kfileitemactions_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileitemactions_metacall_isbase) {
            kfileitemactions_metacall_isbase = false;
            return KFileItemActions::qt_metacall(param1, param2, param3);
        } else if (kfileitemactions_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfileitemactions_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFileItemActions::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileitemactions_event_isbase) {
            kfileitemactions_event_isbase = false;
            return KFileItemActions::event(event);
        } else if (kfileitemactions_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfileitemactions_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileItemActions::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfileitemactions_eventfilter_isbase) {
            kfileitemactions_eventfilter_isbase = false;
            return KFileItemActions::eventFilter(watched, event);
        } else if (kfileitemactions_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfileitemactions_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFileItemActions::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileitemactions_timerevent_isbase) {
            kfileitemactions_timerevent_isbase = false;
            KFileItemActions::timerEvent(event);
        } else if (kfileitemactions_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfileitemactions_timerevent_callback(this, cbval1);
        } else {
            KFileItemActions::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileitemactions_childevent_isbase) {
            kfileitemactions_childevent_isbase = false;
            KFileItemActions::childEvent(event);
        } else if (kfileitemactions_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfileitemactions_childevent_callback(this, cbval1);
        } else {
            KFileItemActions::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileitemactions_customevent_isbase) {
            kfileitemactions_customevent_isbase = false;
            KFileItemActions::customEvent(event);
        } else if (kfileitemactions_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileitemactions_customevent_callback(this, cbval1);
        } else {
            KFileItemActions::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileitemactions_connectnotify_isbase) {
            kfileitemactions_connectnotify_isbase = false;
            KFileItemActions::connectNotify(signal);
        } else if (kfileitemactions_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileitemactions_connectnotify_callback(this, cbval1);
        } else {
            KFileItemActions::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileitemactions_disconnectnotify_isbase) {
            kfileitemactions_disconnectnotify_isbase = false;
            KFileItemActions::disconnectNotify(signal);
        } else if (kfileitemactions_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileitemactions_disconnectnotify_callback(this, cbval1);
        } else {
            KFileItemActions::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileitemactions_sender_isbase) {
            kfileitemactions_sender_isbase = false;
            return KFileItemActions::sender();
        } else if (kfileitemactions_sender_callback != nullptr) {
            QObject* callback_ret = kfileitemactions_sender_callback();
            return callback_ret;
        } else {
            return KFileItemActions::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileitemactions_sendersignalindex_isbase) {
            kfileitemactions_sendersignalindex_isbase = false;
            return KFileItemActions::senderSignalIndex();
        } else if (kfileitemactions_sendersignalindex_callback != nullptr) {
            int callback_ret = kfileitemactions_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileItemActions::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileitemactions_receivers_isbase) {
            kfileitemactions_receivers_isbase = false;
            return KFileItemActions::receivers(signal);
        } else if (kfileitemactions_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfileitemactions_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileItemActions::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileitemactions_issignalconnected_isbase) {
            kfileitemactions_issignalconnected_isbase = false;
            return KFileItemActions::isSignalConnected(signal);
        } else if (kfileitemactions_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfileitemactions_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileItemActions::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFileItemActions_TimerEvent(KFileItemActions* self, QTimerEvent* event);
    friend void KFileItemActions_QBaseTimerEvent(KFileItemActions* self, QTimerEvent* event);
    friend void KFileItemActions_ChildEvent(KFileItemActions* self, QChildEvent* event);
    friend void KFileItemActions_QBaseChildEvent(KFileItemActions* self, QChildEvent* event);
    friend void KFileItemActions_CustomEvent(KFileItemActions* self, QEvent* event);
    friend void KFileItemActions_QBaseCustomEvent(KFileItemActions* self, QEvent* event);
    friend void KFileItemActions_ConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_QBaseConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_DisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend void KFileItemActions_QBaseDisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
    friend QObject* KFileItemActions_Sender(const KFileItemActions* self);
    friend QObject* KFileItemActions_QBaseSender(const KFileItemActions* self);
    friend int KFileItemActions_SenderSignalIndex(const KFileItemActions* self);
    friend int KFileItemActions_QBaseSenderSignalIndex(const KFileItemActions* self);
    friend int KFileItemActions_Receivers(const KFileItemActions* self, const char* signal);
    friend int KFileItemActions_QBaseReceivers(const KFileItemActions* self, const char* signal);
    friend bool KFileItemActions_IsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal);
    friend bool KFileItemActions_QBaseIsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal);
};

#endif
