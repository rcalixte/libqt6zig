#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKDIRWATCH_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKDIRWATCH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirWatch so that we can call protected methods
class VirtualKDirWatch final : public KDirWatch {

  public:
    // Virtual class boolean flag
    bool isVirtualKDirWatch = true;

    // Virtual class public types (including callbacks)
    using KDirWatch_Metacall_Callback = int (*)(KDirWatch*, int, int, void**);
    using KDirWatch_Event_Callback = bool (*)(KDirWatch*, QEvent*);
    using KDirWatch_EventFilter_Callback = bool (*)(KDirWatch*, QObject*, QEvent*);
    using KDirWatch_TimerEvent_Callback = void (*)(KDirWatch*, QTimerEvent*);
    using KDirWatch_ChildEvent_Callback = void (*)(KDirWatch*, QChildEvent*);
    using KDirWatch_CustomEvent_Callback = void (*)(KDirWatch*, QEvent*);
    using KDirWatch_ConnectNotify_Callback = void (*)(KDirWatch*, QMetaMethod*);
    using KDirWatch_DisconnectNotify_Callback = void (*)(KDirWatch*, QMetaMethod*);
    using KDirWatch_Sender_Callback = QObject* (*)();
    using KDirWatch_SenderSignalIndex_Callback = int (*)();
    using KDirWatch_Receivers_Callback = int (*)(const KDirWatch*, const char*);
    using KDirWatch_IsSignalConnected_Callback = bool (*)(const KDirWatch*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDirWatch_Metacall_Callback kdirwatch_metacall_callback = nullptr;
    KDirWatch_Event_Callback kdirwatch_event_callback = nullptr;
    KDirWatch_EventFilter_Callback kdirwatch_eventfilter_callback = nullptr;
    KDirWatch_TimerEvent_Callback kdirwatch_timerevent_callback = nullptr;
    KDirWatch_ChildEvent_Callback kdirwatch_childevent_callback = nullptr;
    KDirWatch_CustomEvent_Callback kdirwatch_customevent_callback = nullptr;
    KDirWatch_ConnectNotify_Callback kdirwatch_connectnotify_callback = nullptr;
    KDirWatch_DisconnectNotify_Callback kdirwatch_disconnectnotify_callback = nullptr;
    KDirWatch_Sender_Callback kdirwatch_sender_callback = nullptr;
    KDirWatch_SenderSignalIndex_Callback kdirwatch_sendersignalindex_callback = nullptr;
    KDirWatch_Receivers_Callback kdirwatch_receivers_callback = nullptr;
    KDirWatch_IsSignalConnected_Callback kdirwatch_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdirwatch_metacall_isbase = false;
    mutable bool kdirwatch_event_isbase = false;
    mutable bool kdirwatch_eventfilter_isbase = false;
    mutable bool kdirwatch_timerevent_isbase = false;
    mutable bool kdirwatch_childevent_isbase = false;
    mutable bool kdirwatch_customevent_isbase = false;
    mutable bool kdirwatch_connectnotify_isbase = false;
    mutable bool kdirwatch_disconnectnotify_isbase = false;
    mutable bool kdirwatch_sender_isbase = false;
    mutable bool kdirwatch_sendersignalindex_isbase = false;
    mutable bool kdirwatch_receivers_isbase = false;
    mutable bool kdirwatch_issignalconnected_isbase = false;

  public:
    VirtualKDirWatch() : KDirWatch() {};
    VirtualKDirWatch(QObject* parent) : KDirWatch(parent) {};

    ~VirtualKDirWatch() {
        kdirwatch_metacall_callback = nullptr;
        kdirwatch_event_callback = nullptr;
        kdirwatch_eventfilter_callback = nullptr;
        kdirwatch_timerevent_callback = nullptr;
        kdirwatch_childevent_callback = nullptr;
        kdirwatch_customevent_callback = nullptr;
        kdirwatch_connectnotify_callback = nullptr;
        kdirwatch_disconnectnotify_callback = nullptr;
        kdirwatch_sender_callback = nullptr;
        kdirwatch_sendersignalindex_callback = nullptr;
        kdirwatch_receivers_callback = nullptr;
        kdirwatch_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDirWatch_Metacall_Callback(KDirWatch_Metacall_Callback cb) { kdirwatch_metacall_callback = cb; }
    inline void setKDirWatch_Event_Callback(KDirWatch_Event_Callback cb) { kdirwatch_event_callback = cb; }
    inline void setKDirWatch_EventFilter_Callback(KDirWatch_EventFilter_Callback cb) { kdirwatch_eventfilter_callback = cb; }
    inline void setKDirWatch_TimerEvent_Callback(KDirWatch_TimerEvent_Callback cb) { kdirwatch_timerevent_callback = cb; }
    inline void setKDirWatch_ChildEvent_Callback(KDirWatch_ChildEvent_Callback cb) { kdirwatch_childevent_callback = cb; }
    inline void setKDirWatch_CustomEvent_Callback(KDirWatch_CustomEvent_Callback cb) { kdirwatch_customevent_callback = cb; }
    inline void setKDirWatch_ConnectNotify_Callback(KDirWatch_ConnectNotify_Callback cb) { kdirwatch_connectnotify_callback = cb; }
    inline void setKDirWatch_DisconnectNotify_Callback(KDirWatch_DisconnectNotify_Callback cb) { kdirwatch_disconnectnotify_callback = cb; }
    inline void setKDirWatch_Sender_Callback(KDirWatch_Sender_Callback cb) { kdirwatch_sender_callback = cb; }
    inline void setKDirWatch_SenderSignalIndex_Callback(KDirWatch_SenderSignalIndex_Callback cb) { kdirwatch_sendersignalindex_callback = cb; }
    inline void setKDirWatch_Receivers_Callback(KDirWatch_Receivers_Callback cb) { kdirwatch_receivers_callback = cb; }
    inline void setKDirWatch_IsSignalConnected_Callback(KDirWatch_IsSignalConnected_Callback cb) { kdirwatch_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDirWatch_Metacall_IsBase(bool value) const { kdirwatch_metacall_isbase = value; }
    inline void setKDirWatch_Event_IsBase(bool value) const { kdirwatch_event_isbase = value; }
    inline void setKDirWatch_EventFilter_IsBase(bool value) const { kdirwatch_eventfilter_isbase = value; }
    inline void setKDirWatch_TimerEvent_IsBase(bool value) const { kdirwatch_timerevent_isbase = value; }
    inline void setKDirWatch_ChildEvent_IsBase(bool value) const { kdirwatch_childevent_isbase = value; }
    inline void setKDirWatch_CustomEvent_IsBase(bool value) const { kdirwatch_customevent_isbase = value; }
    inline void setKDirWatch_ConnectNotify_IsBase(bool value) const { kdirwatch_connectnotify_isbase = value; }
    inline void setKDirWatch_DisconnectNotify_IsBase(bool value) const { kdirwatch_disconnectnotify_isbase = value; }
    inline void setKDirWatch_Sender_IsBase(bool value) const { kdirwatch_sender_isbase = value; }
    inline void setKDirWatch_SenderSignalIndex_IsBase(bool value) const { kdirwatch_sendersignalindex_isbase = value; }
    inline void setKDirWatch_Receivers_IsBase(bool value) const { kdirwatch_receivers_isbase = value; }
    inline void setKDirWatch_IsSignalConnected_IsBase(bool value) const { kdirwatch_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirwatch_metacall_isbase) {
            kdirwatch_metacall_isbase = false;
            return KDirWatch::qt_metacall(param1, param2, param3);
        } else if (kdirwatch_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdirwatch_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDirWatch::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirwatch_event_isbase) {
            kdirwatch_event_isbase = false;
            return KDirWatch::event(event);
        } else if (kdirwatch_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdirwatch_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirWatch::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirwatch_eventfilter_isbase) {
            kdirwatch_eventfilter_isbase = false;
            return KDirWatch::eventFilter(watched, event);
        } else if (kdirwatch_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdirwatch_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirWatch::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirwatch_timerevent_isbase) {
            kdirwatch_timerevent_isbase = false;
            KDirWatch::timerEvent(event);
        } else if (kdirwatch_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdirwatch_timerevent_callback(this, cbval1);
        } else {
            KDirWatch::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirwatch_childevent_isbase) {
            kdirwatch_childevent_isbase = false;
            KDirWatch::childEvent(event);
        } else if (kdirwatch_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdirwatch_childevent_callback(this, cbval1);
        } else {
            KDirWatch::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirwatch_customevent_isbase) {
            kdirwatch_customevent_isbase = false;
            KDirWatch::customEvent(event);
        } else if (kdirwatch_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdirwatch_customevent_callback(this, cbval1);
        } else {
            KDirWatch::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirwatch_connectnotify_isbase) {
            kdirwatch_connectnotify_isbase = false;
            KDirWatch::connectNotify(signal);
        } else if (kdirwatch_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirwatch_connectnotify_callback(this, cbval1);
        } else {
            KDirWatch::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirwatch_disconnectnotify_isbase) {
            kdirwatch_disconnectnotify_isbase = false;
            KDirWatch::disconnectNotify(signal);
        } else if (kdirwatch_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirwatch_disconnectnotify_callback(this, cbval1);
        } else {
            KDirWatch::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdirwatch_sender_isbase) {
            kdirwatch_sender_isbase = false;
            return KDirWatch::sender();
        } else if (kdirwatch_sender_callback != nullptr) {
            QObject* callback_ret = kdirwatch_sender_callback();
            return callback_ret;
        } else {
            return KDirWatch::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdirwatch_sendersignalindex_isbase) {
            kdirwatch_sendersignalindex_isbase = false;
            return KDirWatch::senderSignalIndex();
        } else if (kdirwatch_sendersignalindex_callback != nullptr) {
            int callback_ret = kdirwatch_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDirWatch::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdirwatch_receivers_isbase) {
            kdirwatch_receivers_isbase = false;
            return KDirWatch::receivers(signal);
        } else if (kdirwatch_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdirwatch_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirWatch::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdirwatch_issignalconnected_isbase) {
            kdirwatch_issignalconnected_isbase = false;
            return KDirWatch::isSignalConnected(signal);
        } else if (kdirwatch_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdirwatch_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirWatch::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KDirWatch_TimerEvent(KDirWatch* self, QTimerEvent* event);
    friend void KDirWatch_QBaseTimerEvent(KDirWatch* self, QTimerEvent* event);
    friend void KDirWatch_ChildEvent(KDirWatch* self, QChildEvent* event);
    friend void KDirWatch_QBaseChildEvent(KDirWatch* self, QChildEvent* event);
    friend void KDirWatch_CustomEvent(KDirWatch* self, QEvent* event);
    friend void KDirWatch_QBaseCustomEvent(KDirWatch* self, QEvent* event);
    friend void KDirWatch_ConnectNotify(KDirWatch* self, const QMetaMethod* signal);
    friend void KDirWatch_QBaseConnectNotify(KDirWatch* self, const QMetaMethod* signal);
    friend void KDirWatch_DisconnectNotify(KDirWatch* self, const QMetaMethod* signal);
    friend void KDirWatch_QBaseDisconnectNotify(KDirWatch* self, const QMetaMethod* signal);
    friend QObject* KDirWatch_Sender(const KDirWatch* self);
    friend QObject* KDirWatch_QBaseSender(const KDirWatch* self);
    friend int KDirWatch_SenderSignalIndex(const KDirWatch* self);
    friend int KDirWatch_QBaseSenderSignalIndex(const KDirWatch* self);
    friend int KDirWatch_Receivers(const KDirWatch* self, const char* signal);
    friend int KDirWatch_QBaseReceivers(const KDirWatch* self, const char* signal);
    friend bool KDirWatch_IsSignalConnected(const KDirWatch* self, const QMetaMethod* signal);
    friend bool KDirWatch_QBaseIsSignalConnected(const KDirWatch* self, const QMetaMethod* signal);
};

#endif
