#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKDIRLISTER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKDIRLISTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirLister so that we can call protected methods
class VirtualKDirLister final : public KDirLister {

  public:
    // Virtual class boolean flag
    bool isVirtualKDirLister = true;

    // Virtual class public types (including callbacks)
    using KDirLister_Metacall_Callback = int (*)(KDirLister*, int, int, void**);
    using KDirLister_JobStarted_Callback = void (*)(KDirLister*, KIO__ListJob*);
    using KDirLister_Event_Callback = bool (*)(KDirLister*, QEvent*);
    using KDirLister_EventFilter_Callback = bool (*)(KDirLister*, QObject*, QEvent*);
    using KDirLister_TimerEvent_Callback = void (*)(KDirLister*, QTimerEvent*);
    using KDirLister_ChildEvent_Callback = void (*)(KDirLister*, QChildEvent*);
    using KDirLister_CustomEvent_Callback = void (*)(KDirLister*, QEvent*);
    using KDirLister_ConnectNotify_Callback = void (*)(KDirLister*, QMetaMethod*);
    using KDirLister_DisconnectNotify_Callback = void (*)(KDirLister*, QMetaMethod*);
    using KDirLister_Sender_Callback = QObject* (*)();
    using KDirLister_SenderSignalIndex_Callback = int (*)();
    using KDirLister_Receivers_Callback = int (*)(const KDirLister*, const char*);
    using KDirLister_IsSignalConnected_Callback = bool (*)(const KDirLister*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDirLister_Metacall_Callback kdirlister_metacall_callback = nullptr;
    KDirLister_JobStarted_Callback kdirlister_jobstarted_callback = nullptr;
    KDirLister_Event_Callback kdirlister_event_callback = nullptr;
    KDirLister_EventFilter_Callback kdirlister_eventfilter_callback = nullptr;
    KDirLister_TimerEvent_Callback kdirlister_timerevent_callback = nullptr;
    KDirLister_ChildEvent_Callback kdirlister_childevent_callback = nullptr;
    KDirLister_CustomEvent_Callback kdirlister_customevent_callback = nullptr;
    KDirLister_ConnectNotify_Callback kdirlister_connectnotify_callback = nullptr;
    KDirLister_DisconnectNotify_Callback kdirlister_disconnectnotify_callback = nullptr;
    KDirLister_Sender_Callback kdirlister_sender_callback = nullptr;
    KDirLister_SenderSignalIndex_Callback kdirlister_sendersignalindex_callback = nullptr;
    KDirLister_Receivers_Callback kdirlister_receivers_callback = nullptr;
    KDirLister_IsSignalConnected_Callback kdirlister_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdirlister_metacall_isbase = false;
    mutable bool kdirlister_jobstarted_isbase = false;
    mutable bool kdirlister_event_isbase = false;
    mutable bool kdirlister_eventfilter_isbase = false;
    mutable bool kdirlister_timerevent_isbase = false;
    mutable bool kdirlister_childevent_isbase = false;
    mutable bool kdirlister_customevent_isbase = false;
    mutable bool kdirlister_connectnotify_isbase = false;
    mutable bool kdirlister_disconnectnotify_isbase = false;
    mutable bool kdirlister_sender_isbase = false;
    mutable bool kdirlister_sendersignalindex_isbase = false;
    mutable bool kdirlister_receivers_isbase = false;
    mutable bool kdirlister_issignalconnected_isbase = false;

  public:
    VirtualKDirLister() : KDirLister() {};
    VirtualKDirLister(QObject* parent) : KDirLister(parent) {};

    ~VirtualKDirLister() {
        kdirlister_metacall_callback = nullptr;
        kdirlister_jobstarted_callback = nullptr;
        kdirlister_event_callback = nullptr;
        kdirlister_eventfilter_callback = nullptr;
        kdirlister_timerevent_callback = nullptr;
        kdirlister_childevent_callback = nullptr;
        kdirlister_customevent_callback = nullptr;
        kdirlister_connectnotify_callback = nullptr;
        kdirlister_disconnectnotify_callback = nullptr;
        kdirlister_sender_callback = nullptr;
        kdirlister_sendersignalindex_callback = nullptr;
        kdirlister_receivers_callback = nullptr;
        kdirlister_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDirLister_Metacall_Callback(KDirLister_Metacall_Callback cb) { kdirlister_metacall_callback = cb; }
    inline void setKDirLister_JobStarted_Callback(KDirLister_JobStarted_Callback cb) { kdirlister_jobstarted_callback = cb; }
    inline void setKDirLister_Event_Callback(KDirLister_Event_Callback cb) { kdirlister_event_callback = cb; }
    inline void setKDirLister_EventFilter_Callback(KDirLister_EventFilter_Callback cb) { kdirlister_eventfilter_callback = cb; }
    inline void setKDirLister_TimerEvent_Callback(KDirLister_TimerEvent_Callback cb) { kdirlister_timerevent_callback = cb; }
    inline void setKDirLister_ChildEvent_Callback(KDirLister_ChildEvent_Callback cb) { kdirlister_childevent_callback = cb; }
    inline void setKDirLister_CustomEvent_Callback(KDirLister_CustomEvent_Callback cb) { kdirlister_customevent_callback = cb; }
    inline void setKDirLister_ConnectNotify_Callback(KDirLister_ConnectNotify_Callback cb) { kdirlister_connectnotify_callback = cb; }
    inline void setKDirLister_DisconnectNotify_Callback(KDirLister_DisconnectNotify_Callback cb) { kdirlister_disconnectnotify_callback = cb; }
    inline void setKDirLister_Sender_Callback(KDirLister_Sender_Callback cb) { kdirlister_sender_callback = cb; }
    inline void setKDirLister_SenderSignalIndex_Callback(KDirLister_SenderSignalIndex_Callback cb) { kdirlister_sendersignalindex_callback = cb; }
    inline void setKDirLister_Receivers_Callback(KDirLister_Receivers_Callback cb) { kdirlister_receivers_callback = cb; }
    inline void setKDirLister_IsSignalConnected_Callback(KDirLister_IsSignalConnected_Callback cb) { kdirlister_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDirLister_Metacall_IsBase(bool value) const { kdirlister_metacall_isbase = value; }
    inline void setKDirLister_JobStarted_IsBase(bool value) const { kdirlister_jobstarted_isbase = value; }
    inline void setKDirLister_Event_IsBase(bool value) const { kdirlister_event_isbase = value; }
    inline void setKDirLister_EventFilter_IsBase(bool value) const { kdirlister_eventfilter_isbase = value; }
    inline void setKDirLister_TimerEvent_IsBase(bool value) const { kdirlister_timerevent_isbase = value; }
    inline void setKDirLister_ChildEvent_IsBase(bool value) const { kdirlister_childevent_isbase = value; }
    inline void setKDirLister_CustomEvent_IsBase(bool value) const { kdirlister_customevent_isbase = value; }
    inline void setKDirLister_ConnectNotify_IsBase(bool value) const { kdirlister_connectnotify_isbase = value; }
    inline void setKDirLister_DisconnectNotify_IsBase(bool value) const { kdirlister_disconnectnotify_isbase = value; }
    inline void setKDirLister_Sender_IsBase(bool value) const { kdirlister_sender_isbase = value; }
    inline void setKDirLister_SenderSignalIndex_IsBase(bool value) const { kdirlister_sendersignalindex_isbase = value; }
    inline void setKDirLister_Receivers_IsBase(bool value) const { kdirlister_receivers_isbase = value; }
    inline void setKDirLister_IsSignalConnected_IsBase(bool value) const { kdirlister_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirlister_metacall_isbase) {
            kdirlister_metacall_isbase = false;
            return KDirLister::qt_metacall(param1, param2, param3);
        } else if (kdirlister_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdirlister_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDirLister::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void jobStarted(KIO::ListJob* param1) override {
        if (kdirlister_jobstarted_isbase) {
            kdirlister_jobstarted_isbase = false;
            KDirLister::jobStarted(param1);
        } else if (kdirlister_jobstarted_callback != nullptr) {
            KIO__ListJob* cbval1 = param1;

            kdirlister_jobstarted_callback(this, cbval1);
        } else {
            KDirLister::jobStarted(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirlister_event_isbase) {
            kdirlister_event_isbase = false;
            return KDirLister::event(event);
        } else if (kdirlister_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdirlister_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirLister::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirlister_eventfilter_isbase) {
            kdirlister_eventfilter_isbase = false;
            return KDirLister::eventFilter(watched, event);
        } else if (kdirlister_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdirlister_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirLister::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirlister_timerevent_isbase) {
            kdirlister_timerevent_isbase = false;
            KDirLister::timerEvent(event);
        } else if (kdirlister_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdirlister_timerevent_callback(this, cbval1);
        } else {
            KDirLister::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirlister_childevent_isbase) {
            kdirlister_childevent_isbase = false;
            KDirLister::childEvent(event);
        } else if (kdirlister_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdirlister_childevent_callback(this, cbval1);
        } else {
            KDirLister::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirlister_customevent_isbase) {
            kdirlister_customevent_isbase = false;
            KDirLister::customEvent(event);
        } else if (kdirlister_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdirlister_customevent_callback(this, cbval1);
        } else {
            KDirLister::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirlister_connectnotify_isbase) {
            kdirlister_connectnotify_isbase = false;
            KDirLister::connectNotify(signal);
        } else if (kdirlister_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirlister_connectnotify_callback(this, cbval1);
        } else {
            KDirLister::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirlister_disconnectnotify_isbase) {
            kdirlister_disconnectnotify_isbase = false;
            KDirLister::disconnectNotify(signal);
        } else if (kdirlister_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirlister_disconnectnotify_callback(this, cbval1);
        } else {
            KDirLister::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdirlister_sender_isbase) {
            kdirlister_sender_isbase = false;
            return KDirLister::sender();
        } else if (kdirlister_sender_callback != nullptr) {
            QObject* callback_ret = kdirlister_sender_callback();
            return callback_ret;
        } else {
            return KDirLister::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdirlister_sendersignalindex_isbase) {
            kdirlister_sendersignalindex_isbase = false;
            return KDirLister::senderSignalIndex();
        } else if (kdirlister_sendersignalindex_callback != nullptr) {
            int callback_ret = kdirlister_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDirLister::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdirlister_receivers_isbase) {
            kdirlister_receivers_isbase = false;
            return KDirLister::receivers(signal);
        } else if (kdirlister_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdirlister_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirLister::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdirlister_issignalconnected_isbase) {
            kdirlister_issignalconnected_isbase = false;
            return KDirLister::isSignalConnected(signal);
        } else if (kdirlister_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdirlister_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirLister::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KDirLister_JobStarted(KDirLister* self, KIO__ListJob* param1);
    friend void KDirLister_QBaseJobStarted(KDirLister* self, KIO__ListJob* param1);
    friend void KDirLister_TimerEvent(KDirLister* self, QTimerEvent* event);
    friend void KDirLister_QBaseTimerEvent(KDirLister* self, QTimerEvent* event);
    friend void KDirLister_ChildEvent(KDirLister* self, QChildEvent* event);
    friend void KDirLister_QBaseChildEvent(KDirLister* self, QChildEvent* event);
    friend void KDirLister_CustomEvent(KDirLister* self, QEvent* event);
    friend void KDirLister_QBaseCustomEvent(KDirLister* self, QEvent* event);
    friend void KDirLister_ConnectNotify(KDirLister* self, const QMetaMethod* signal);
    friend void KDirLister_QBaseConnectNotify(KDirLister* self, const QMetaMethod* signal);
    friend void KDirLister_DisconnectNotify(KDirLister* self, const QMetaMethod* signal);
    friend void KDirLister_QBaseDisconnectNotify(KDirLister* self, const QMetaMethod* signal);
    friend QObject* KDirLister_Sender(const KDirLister* self);
    friend QObject* KDirLister_QBaseSender(const KDirLister* self);
    friend int KDirLister_SenderSignalIndex(const KDirLister* self);
    friend int KDirLister_QBaseSenderSignalIndex(const KDirLister* self);
    friend int KDirLister_Receivers(const KDirLister* self, const char* signal);
    friend int KDirLister_QBaseReceivers(const KDirLister* self, const char* signal);
    friend bool KDirLister_IsSignalConnected(const KDirLister* self, const QMetaMethod* signal);
    friend bool KDirLister_QBaseIsSignalConnected(const KDirLister* self, const QMetaMethod* signal);
};

#endif
