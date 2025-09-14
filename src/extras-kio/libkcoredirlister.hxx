#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKCOREDIRLISTER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKCOREDIRLISTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCoreDirLister so that we can call protected methods
class VirtualKCoreDirLister final : public KCoreDirLister {

  public:
    // Virtual class boolean flag
    bool isVirtualKCoreDirLister = true;

    // Virtual class public types (including callbacks)
    using KCoreDirLister_Metacall_Callback = int (*)(KCoreDirLister*, int, int, void**);
    using KCoreDirLister_JobStarted_Callback = void (*)(KCoreDirLister*, KIO__ListJob*);
    using KCoreDirLister_Event_Callback = bool (*)(KCoreDirLister*, QEvent*);
    using KCoreDirLister_EventFilter_Callback = bool (*)(KCoreDirLister*, QObject*, QEvent*);
    using KCoreDirLister_TimerEvent_Callback = void (*)(KCoreDirLister*, QTimerEvent*);
    using KCoreDirLister_ChildEvent_Callback = void (*)(KCoreDirLister*, QChildEvent*);
    using KCoreDirLister_CustomEvent_Callback = void (*)(KCoreDirLister*, QEvent*);
    using KCoreDirLister_ConnectNotify_Callback = void (*)(KCoreDirLister*, QMetaMethod*);
    using KCoreDirLister_DisconnectNotify_Callback = void (*)(KCoreDirLister*, QMetaMethod*);
    using KCoreDirLister_Sender_Callback = QObject* (*)();
    using KCoreDirLister_SenderSignalIndex_Callback = int (*)();
    using KCoreDirLister_Receivers_Callback = int (*)(const KCoreDirLister*, const char*);
    using KCoreDirLister_IsSignalConnected_Callback = bool (*)(const KCoreDirLister*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCoreDirLister_Metacall_Callback kcoredirlister_metacall_callback = nullptr;
    KCoreDirLister_JobStarted_Callback kcoredirlister_jobstarted_callback = nullptr;
    KCoreDirLister_Event_Callback kcoredirlister_event_callback = nullptr;
    KCoreDirLister_EventFilter_Callback kcoredirlister_eventfilter_callback = nullptr;
    KCoreDirLister_TimerEvent_Callback kcoredirlister_timerevent_callback = nullptr;
    KCoreDirLister_ChildEvent_Callback kcoredirlister_childevent_callback = nullptr;
    KCoreDirLister_CustomEvent_Callback kcoredirlister_customevent_callback = nullptr;
    KCoreDirLister_ConnectNotify_Callback kcoredirlister_connectnotify_callback = nullptr;
    KCoreDirLister_DisconnectNotify_Callback kcoredirlister_disconnectnotify_callback = nullptr;
    KCoreDirLister_Sender_Callback kcoredirlister_sender_callback = nullptr;
    KCoreDirLister_SenderSignalIndex_Callback kcoredirlister_sendersignalindex_callback = nullptr;
    KCoreDirLister_Receivers_Callback kcoredirlister_receivers_callback = nullptr;
    KCoreDirLister_IsSignalConnected_Callback kcoredirlister_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcoredirlister_metacall_isbase = false;
    mutable bool kcoredirlister_jobstarted_isbase = false;
    mutable bool kcoredirlister_event_isbase = false;
    mutable bool kcoredirlister_eventfilter_isbase = false;
    mutable bool kcoredirlister_timerevent_isbase = false;
    mutable bool kcoredirlister_childevent_isbase = false;
    mutable bool kcoredirlister_customevent_isbase = false;
    mutable bool kcoredirlister_connectnotify_isbase = false;
    mutable bool kcoredirlister_disconnectnotify_isbase = false;
    mutable bool kcoredirlister_sender_isbase = false;
    mutable bool kcoredirlister_sendersignalindex_isbase = false;
    mutable bool kcoredirlister_receivers_isbase = false;
    mutable bool kcoredirlister_issignalconnected_isbase = false;

  public:
    VirtualKCoreDirLister() : KCoreDirLister() {};
    VirtualKCoreDirLister(QObject* parent) : KCoreDirLister(parent) {};

    ~VirtualKCoreDirLister() {
        kcoredirlister_metacall_callback = nullptr;
        kcoredirlister_jobstarted_callback = nullptr;
        kcoredirlister_event_callback = nullptr;
        kcoredirlister_eventfilter_callback = nullptr;
        kcoredirlister_timerevent_callback = nullptr;
        kcoredirlister_childevent_callback = nullptr;
        kcoredirlister_customevent_callback = nullptr;
        kcoredirlister_connectnotify_callback = nullptr;
        kcoredirlister_disconnectnotify_callback = nullptr;
        kcoredirlister_sender_callback = nullptr;
        kcoredirlister_sendersignalindex_callback = nullptr;
        kcoredirlister_receivers_callback = nullptr;
        kcoredirlister_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCoreDirLister_Metacall_Callback(KCoreDirLister_Metacall_Callback cb) { kcoredirlister_metacall_callback = cb; }
    inline void setKCoreDirLister_JobStarted_Callback(KCoreDirLister_JobStarted_Callback cb) { kcoredirlister_jobstarted_callback = cb; }
    inline void setKCoreDirLister_Event_Callback(KCoreDirLister_Event_Callback cb) { kcoredirlister_event_callback = cb; }
    inline void setKCoreDirLister_EventFilter_Callback(KCoreDirLister_EventFilter_Callback cb) { kcoredirlister_eventfilter_callback = cb; }
    inline void setKCoreDirLister_TimerEvent_Callback(KCoreDirLister_TimerEvent_Callback cb) { kcoredirlister_timerevent_callback = cb; }
    inline void setKCoreDirLister_ChildEvent_Callback(KCoreDirLister_ChildEvent_Callback cb) { kcoredirlister_childevent_callback = cb; }
    inline void setKCoreDirLister_CustomEvent_Callback(KCoreDirLister_CustomEvent_Callback cb) { kcoredirlister_customevent_callback = cb; }
    inline void setKCoreDirLister_ConnectNotify_Callback(KCoreDirLister_ConnectNotify_Callback cb) { kcoredirlister_connectnotify_callback = cb; }
    inline void setKCoreDirLister_DisconnectNotify_Callback(KCoreDirLister_DisconnectNotify_Callback cb) { kcoredirlister_disconnectnotify_callback = cb; }
    inline void setKCoreDirLister_Sender_Callback(KCoreDirLister_Sender_Callback cb) { kcoredirlister_sender_callback = cb; }
    inline void setKCoreDirLister_SenderSignalIndex_Callback(KCoreDirLister_SenderSignalIndex_Callback cb) { kcoredirlister_sendersignalindex_callback = cb; }
    inline void setKCoreDirLister_Receivers_Callback(KCoreDirLister_Receivers_Callback cb) { kcoredirlister_receivers_callback = cb; }
    inline void setKCoreDirLister_IsSignalConnected_Callback(KCoreDirLister_IsSignalConnected_Callback cb) { kcoredirlister_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCoreDirLister_Metacall_IsBase(bool value) const { kcoredirlister_metacall_isbase = value; }
    inline void setKCoreDirLister_JobStarted_IsBase(bool value) const { kcoredirlister_jobstarted_isbase = value; }
    inline void setKCoreDirLister_Event_IsBase(bool value) const { kcoredirlister_event_isbase = value; }
    inline void setKCoreDirLister_EventFilter_IsBase(bool value) const { kcoredirlister_eventfilter_isbase = value; }
    inline void setKCoreDirLister_TimerEvent_IsBase(bool value) const { kcoredirlister_timerevent_isbase = value; }
    inline void setKCoreDirLister_ChildEvent_IsBase(bool value) const { kcoredirlister_childevent_isbase = value; }
    inline void setKCoreDirLister_CustomEvent_IsBase(bool value) const { kcoredirlister_customevent_isbase = value; }
    inline void setKCoreDirLister_ConnectNotify_IsBase(bool value) const { kcoredirlister_connectnotify_isbase = value; }
    inline void setKCoreDirLister_DisconnectNotify_IsBase(bool value) const { kcoredirlister_disconnectnotify_isbase = value; }
    inline void setKCoreDirLister_Sender_IsBase(bool value) const { kcoredirlister_sender_isbase = value; }
    inline void setKCoreDirLister_SenderSignalIndex_IsBase(bool value) const { kcoredirlister_sendersignalindex_isbase = value; }
    inline void setKCoreDirLister_Receivers_IsBase(bool value) const { kcoredirlister_receivers_isbase = value; }
    inline void setKCoreDirLister_IsSignalConnected_IsBase(bool value) const { kcoredirlister_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoredirlister_metacall_isbase) {
            kcoredirlister_metacall_isbase = false;
            return KCoreDirLister::qt_metacall(param1, param2, param3);
        } else if (kcoredirlister_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcoredirlister_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCoreDirLister::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void jobStarted(KIO::ListJob* param1) override {
        if (kcoredirlister_jobstarted_isbase) {
            kcoredirlister_jobstarted_isbase = false;
            KCoreDirLister::jobStarted(param1);
        } else if (kcoredirlister_jobstarted_callback != nullptr) {
            KIO__ListJob* cbval1 = param1;

            kcoredirlister_jobstarted_callback(this, cbval1);
        } else {
            KCoreDirLister::jobStarted(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoredirlister_event_isbase) {
            kcoredirlister_event_isbase = false;
            return KCoreDirLister::event(event);
        } else if (kcoredirlister_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcoredirlister_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreDirLister::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoredirlister_eventfilter_isbase) {
            kcoredirlister_eventfilter_isbase = false;
            return KCoreDirLister::eventFilter(watched, event);
        } else if (kcoredirlister_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcoredirlister_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCoreDirLister::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoredirlister_timerevent_isbase) {
            kcoredirlister_timerevent_isbase = false;
            KCoreDirLister::timerEvent(event);
        } else if (kcoredirlister_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcoredirlister_timerevent_callback(this, cbval1);
        } else {
            KCoreDirLister::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoredirlister_childevent_isbase) {
            kcoredirlister_childevent_isbase = false;
            KCoreDirLister::childEvent(event);
        } else if (kcoredirlister_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcoredirlister_childevent_callback(this, cbval1);
        } else {
            KCoreDirLister::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoredirlister_customevent_isbase) {
            kcoredirlister_customevent_isbase = false;
            KCoreDirLister::customEvent(event);
        } else if (kcoredirlister_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcoredirlister_customevent_callback(this, cbval1);
        } else {
            KCoreDirLister::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoredirlister_connectnotify_isbase) {
            kcoredirlister_connectnotify_isbase = false;
            KCoreDirLister::connectNotify(signal);
        } else if (kcoredirlister_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcoredirlister_connectnotify_callback(this, cbval1);
        } else {
            KCoreDirLister::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoredirlister_disconnectnotify_isbase) {
            kcoredirlister_disconnectnotify_isbase = false;
            KCoreDirLister::disconnectNotify(signal);
        } else if (kcoredirlister_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcoredirlister_disconnectnotify_callback(this, cbval1);
        } else {
            KCoreDirLister::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcoredirlister_sender_isbase) {
            kcoredirlister_sender_isbase = false;
            return KCoreDirLister::sender();
        } else if (kcoredirlister_sender_callback != nullptr) {
            QObject* callback_ret = kcoredirlister_sender_callback();
            return callback_ret;
        } else {
            return KCoreDirLister::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcoredirlister_sendersignalindex_isbase) {
            kcoredirlister_sendersignalindex_isbase = false;
            return KCoreDirLister::senderSignalIndex();
        } else if (kcoredirlister_sendersignalindex_callback != nullptr) {
            int callback_ret = kcoredirlister_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCoreDirLister::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcoredirlister_receivers_isbase) {
            kcoredirlister_receivers_isbase = false;
            return KCoreDirLister::receivers(signal);
        } else if (kcoredirlister_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcoredirlister_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCoreDirLister::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcoredirlister_issignalconnected_isbase) {
            kcoredirlister_issignalconnected_isbase = false;
            return KCoreDirLister::isSignalConnected(signal);
        } else if (kcoredirlister_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcoredirlister_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCoreDirLister::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KCoreDirLister_JobStarted(KCoreDirLister* self, KIO__ListJob* param1);
    friend void KCoreDirLister_QBaseJobStarted(KCoreDirLister* self, KIO__ListJob* param1);
    friend void KCoreDirLister_TimerEvent(KCoreDirLister* self, QTimerEvent* event);
    friend void KCoreDirLister_QBaseTimerEvent(KCoreDirLister* self, QTimerEvent* event);
    friend void KCoreDirLister_ChildEvent(KCoreDirLister* self, QChildEvent* event);
    friend void KCoreDirLister_QBaseChildEvent(KCoreDirLister* self, QChildEvent* event);
    friend void KCoreDirLister_CustomEvent(KCoreDirLister* self, QEvent* event);
    friend void KCoreDirLister_QBaseCustomEvent(KCoreDirLister* self, QEvent* event);
    friend void KCoreDirLister_ConnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
    friend void KCoreDirLister_QBaseConnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
    friend void KCoreDirLister_DisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
    friend void KCoreDirLister_QBaseDisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
    friend QObject* KCoreDirLister_Sender(const KCoreDirLister* self);
    friend QObject* KCoreDirLister_QBaseSender(const KCoreDirLister* self);
    friend int KCoreDirLister_SenderSignalIndex(const KCoreDirLister* self);
    friend int KCoreDirLister_QBaseSenderSignalIndex(const KCoreDirLister* self);
    friend int KCoreDirLister_Receivers(const KCoreDirLister* self, const char* signal);
    friend int KCoreDirLister_QBaseReceivers(const KCoreDirLister* self, const char* signal);
    friend bool KCoreDirLister_IsSignalConnected(const KCoreDirLister* self, const QMetaMethod* signal);
    friend bool KCoreDirLister_QBaseIsSignalConnected(const KCoreDirLister* self, const QMetaMethod* signal);
};

#endif
