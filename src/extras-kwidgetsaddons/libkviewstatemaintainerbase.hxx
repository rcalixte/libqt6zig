#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKVIEWSTATEMAINTAINERBASE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKVIEWSTATEMAINTAINERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KViewStateMaintainerBase so that we can call protected methods
class VirtualKViewStateMaintainerBase : public KViewStateMaintainerBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKViewStateMaintainerBase = true;

    // Virtual class public types (including callbacks)
    using KViewStateMaintainerBase_Metacall_Callback = int (*)(KViewStateMaintainerBase*, int, int, void**);
    using KViewStateMaintainerBase_SaveState_Callback = void (*)();
    using KViewStateMaintainerBase_RestoreState_Callback = void (*)();
    using KViewStateMaintainerBase_Event_Callback = bool (*)(KViewStateMaintainerBase*, QEvent*);
    using KViewStateMaintainerBase_EventFilter_Callback = bool (*)(KViewStateMaintainerBase*, QObject*, QEvent*);
    using KViewStateMaintainerBase_TimerEvent_Callback = void (*)(KViewStateMaintainerBase*, QTimerEvent*);
    using KViewStateMaintainerBase_ChildEvent_Callback = void (*)(KViewStateMaintainerBase*, QChildEvent*);
    using KViewStateMaintainerBase_CustomEvent_Callback = void (*)(KViewStateMaintainerBase*, QEvent*);
    using KViewStateMaintainerBase_ConnectNotify_Callback = void (*)(KViewStateMaintainerBase*, QMetaMethod*);
    using KViewStateMaintainerBase_DisconnectNotify_Callback = void (*)(KViewStateMaintainerBase*, QMetaMethod*);
    using KViewStateMaintainerBase_Sender_Callback = QObject* (*)();
    using KViewStateMaintainerBase_SenderSignalIndex_Callback = int (*)();
    using KViewStateMaintainerBase_Receivers_Callback = int (*)(const KViewStateMaintainerBase*, const char*);
    using KViewStateMaintainerBase_IsSignalConnected_Callback = bool (*)(const KViewStateMaintainerBase*, QMetaMethod*);

  protected:
    // Instance callback storage
    KViewStateMaintainerBase_Metacall_Callback kviewstatemaintainerbase_metacall_callback = nullptr;
    KViewStateMaintainerBase_SaveState_Callback kviewstatemaintainerbase_savestate_callback = nullptr;
    KViewStateMaintainerBase_RestoreState_Callback kviewstatemaintainerbase_restorestate_callback = nullptr;
    KViewStateMaintainerBase_Event_Callback kviewstatemaintainerbase_event_callback = nullptr;
    KViewStateMaintainerBase_EventFilter_Callback kviewstatemaintainerbase_eventfilter_callback = nullptr;
    KViewStateMaintainerBase_TimerEvent_Callback kviewstatemaintainerbase_timerevent_callback = nullptr;
    KViewStateMaintainerBase_ChildEvent_Callback kviewstatemaintainerbase_childevent_callback = nullptr;
    KViewStateMaintainerBase_CustomEvent_Callback kviewstatemaintainerbase_customevent_callback = nullptr;
    KViewStateMaintainerBase_ConnectNotify_Callback kviewstatemaintainerbase_connectnotify_callback = nullptr;
    KViewStateMaintainerBase_DisconnectNotify_Callback kviewstatemaintainerbase_disconnectnotify_callback = nullptr;
    KViewStateMaintainerBase_Sender_Callback kviewstatemaintainerbase_sender_callback = nullptr;
    KViewStateMaintainerBase_SenderSignalIndex_Callback kviewstatemaintainerbase_sendersignalindex_callback = nullptr;
    KViewStateMaintainerBase_Receivers_Callback kviewstatemaintainerbase_receivers_callback = nullptr;
    KViewStateMaintainerBase_IsSignalConnected_Callback kviewstatemaintainerbase_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kviewstatemaintainerbase_metacall_isbase = false;
    mutable bool kviewstatemaintainerbase_savestate_isbase = false;
    mutable bool kviewstatemaintainerbase_restorestate_isbase = false;
    mutable bool kviewstatemaintainerbase_event_isbase = false;
    mutable bool kviewstatemaintainerbase_eventfilter_isbase = false;
    mutable bool kviewstatemaintainerbase_timerevent_isbase = false;
    mutable bool kviewstatemaintainerbase_childevent_isbase = false;
    mutable bool kviewstatemaintainerbase_customevent_isbase = false;
    mutable bool kviewstatemaintainerbase_connectnotify_isbase = false;
    mutable bool kviewstatemaintainerbase_disconnectnotify_isbase = false;
    mutable bool kviewstatemaintainerbase_sender_isbase = false;
    mutable bool kviewstatemaintainerbase_sendersignalindex_isbase = false;
    mutable bool kviewstatemaintainerbase_receivers_isbase = false;
    mutable bool kviewstatemaintainerbase_issignalconnected_isbase = false;

  public:
    VirtualKViewStateMaintainerBase() : KViewStateMaintainerBase() {};
    VirtualKViewStateMaintainerBase(QObject* parent) : KViewStateMaintainerBase(parent) {};

    ~VirtualKViewStateMaintainerBase() {
        kviewstatemaintainerbase_metacall_callback = nullptr;
        kviewstatemaintainerbase_savestate_callback = nullptr;
        kviewstatemaintainerbase_restorestate_callback = nullptr;
        kviewstatemaintainerbase_event_callback = nullptr;
        kviewstatemaintainerbase_eventfilter_callback = nullptr;
        kviewstatemaintainerbase_timerevent_callback = nullptr;
        kviewstatemaintainerbase_childevent_callback = nullptr;
        kviewstatemaintainerbase_customevent_callback = nullptr;
        kviewstatemaintainerbase_connectnotify_callback = nullptr;
        kviewstatemaintainerbase_disconnectnotify_callback = nullptr;
        kviewstatemaintainerbase_sender_callback = nullptr;
        kviewstatemaintainerbase_sendersignalindex_callback = nullptr;
        kviewstatemaintainerbase_receivers_callback = nullptr;
        kviewstatemaintainerbase_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKViewStateMaintainerBase_Metacall_Callback(KViewStateMaintainerBase_Metacall_Callback cb) { kviewstatemaintainerbase_metacall_callback = cb; }
    inline void setKViewStateMaintainerBase_SaveState_Callback(KViewStateMaintainerBase_SaveState_Callback cb) { kviewstatemaintainerbase_savestate_callback = cb; }
    inline void setKViewStateMaintainerBase_RestoreState_Callback(KViewStateMaintainerBase_RestoreState_Callback cb) { kviewstatemaintainerbase_restorestate_callback = cb; }
    inline void setKViewStateMaintainerBase_Event_Callback(KViewStateMaintainerBase_Event_Callback cb) { kviewstatemaintainerbase_event_callback = cb; }
    inline void setKViewStateMaintainerBase_EventFilter_Callback(KViewStateMaintainerBase_EventFilter_Callback cb) { kviewstatemaintainerbase_eventfilter_callback = cb; }
    inline void setKViewStateMaintainerBase_TimerEvent_Callback(KViewStateMaintainerBase_TimerEvent_Callback cb) { kviewstatemaintainerbase_timerevent_callback = cb; }
    inline void setKViewStateMaintainerBase_ChildEvent_Callback(KViewStateMaintainerBase_ChildEvent_Callback cb) { kviewstatemaintainerbase_childevent_callback = cb; }
    inline void setKViewStateMaintainerBase_CustomEvent_Callback(KViewStateMaintainerBase_CustomEvent_Callback cb) { kviewstatemaintainerbase_customevent_callback = cb; }
    inline void setKViewStateMaintainerBase_ConnectNotify_Callback(KViewStateMaintainerBase_ConnectNotify_Callback cb) { kviewstatemaintainerbase_connectnotify_callback = cb; }
    inline void setKViewStateMaintainerBase_DisconnectNotify_Callback(KViewStateMaintainerBase_DisconnectNotify_Callback cb) { kviewstatemaintainerbase_disconnectnotify_callback = cb; }
    inline void setKViewStateMaintainerBase_Sender_Callback(KViewStateMaintainerBase_Sender_Callback cb) { kviewstatemaintainerbase_sender_callback = cb; }
    inline void setKViewStateMaintainerBase_SenderSignalIndex_Callback(KViewStateMaintainerBase_SenderSignalIndex_Callback cb) { kviewstatemaintainerbase_sendersignalindex_callback = cb; }
    inline void setKViewStateMaintainerBase_Receivers_Callback(KViewStateMaintainerBase_Receivers_Callback cb) { kviewstatemaintainerbase_receivers_callback = cb; }
    inline void setKViewStateMaintainerBase_IsSignalConnected_Callback(KViewStateMaintainerBase_IsSignalConnected_Callback cb) { kviewstatemaintainerbase_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKViewStateMaintainerBase_Metacall_IsBase(bool value) const { kviewstatemaintainerbase_metacall_isbase = value; }
    inline void setKViewStateMaintainerBase_SaveState_IsBase(bool value) const { kviewstatemaintainerbase_savestate_isbase = value; }
    inline void setKViewStateMaintainerBase_RestoreState_IsBase(bool value) const { kviewstatemaintainerbase_restorestate_isbase = value; }
    inline void setKViewStateMaintainerBase_Event_IsBase(bool value) const { kviewstatemaintainerbase_event_isbase = value; }
    inline void setKViewStateMaintainerBase_EventFilter_IsBase(bool value) const { kviewstatemaintainerbase_eventfilter_isbase = value; }
    inline void setKViewStateMaintainerBase_TimerEvent_IsBase(bool value) const { kviewstatemaintainerbase_timerevent_isbase = value; }
    inline void setKViewStateMaintainerBase_ChildEvent_IsBase(bool value) const { kviewstatemaintainerbase_childevent_isbase = value; }
    inline void setKViewStateMaintainerBase_CustomEvent_IsBase(bool value) const { kviewstatemaintainerbase_customevent_isbase = value; }
    inline void setKViewStateMaintainerBase_ConnectNotify_IsBase(bool value) const { kviewstatemaintainerbase_connectnotify_isbase = value; }
    inline void setKViewStateMaintainerBase_DisconnectNotify_IsBase(bool value) const { kviewstatemaintainerbase_disconnectnotify_isbase = value; }
    inline void setKViewStateMaintainerBase_Sender_IsBase(bool value) const { kviewstatemaintainerbase_sender_isbase = value; }
    inline void setKViewStateMaintainerBase_SenderSignalIndex_IsBase(bool value) const { kviewstatemaintainerbase_sendersignalindex_isbase = value; }
    inline void setKViewStateMaintainerBase_Receivers_IsBase(bool value) const { kviewstatemaintainerbase_receivers_isbase = value; }
    inline void setKViewStateMaintainerBase_IsSignalConnected_IsBase(bool value) const { kviewstatemaintainerbase_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kviewstatemaintainerbase_metacall_isbase) {
            kviewstatemaintainerbase_metacall_isbase = false;
            return KViewStateMaintainerBase::qt_metacall(param1, param2, param3);
        } else if (kviewstatemaintainerbase_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kviewstatemaintainerbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KViewStateMaintainerBase::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveState() override {
        if (kviewstatemaintainerbase_savestate_callback != nullptr) {
            kviewstatemaintainerbase_savestate_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void restoreState() override {
        if (kviewstatemaintainerbase_restorestate_callback != nullptr) {
            kviewstatemaintainerbase_restorestate_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kviewstatemaintainerbase_event_isbase) {
            kviewstatemaintainerbase_event_isbase = false;
            return KViewStateMaintainerBase::event(event);
        } else if (kviewstatemaintainerbase_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kviewstatemaintainerbase_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KViewStateMaintainerBase::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kviewstatemaintainerbase_eventfilter_isbase) {
            kviewstatemaintainerbase_eventfilter_isbase = false;
            return KViewStateMaintainerBase::eventFilter(watched, event);
        } else if (kviewstatemaintainerbase_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kviewstatemaintainerbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KViewStateMaintainerBase::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kviewstatemaintainerbase_timerevent_isbase) {
            kviewstatemaintainerbase_timerevent_isbase = false;
            KViewStateMaintainerBase::timerEvent(event);
        } else if (kviewstatemaintainerbase_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kviewstatemaintainerbase_timerevent_callback(this, cbval1);
        } else {
            KViewStateMaintainerBase::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kviewstatemaintainerbase_childevent_isbase) {
            kviewstatemaintainerbase_childevent_isbase = false;
            KViewStateMaintainerBase::childEvent(event);
        } else if (kviewstatemaintainerbase_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kviewstatemaintainerbase_childevent_callback(this, cbval1);
        } else {
            KViewStateMaintainerBase::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kviewstatemaintainerbase_customevent_isbase) {
            kviewstatemaintainerbase_customevent_isbase = false;
            KViewStateMaintainerBase::customEvent(event);
        } else if (kviewstatemaintainerbase_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kviewstatemaintainerbase_customevent_callback(this, cbval1);
        } else {
            KViewStateMaintainerBase::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kviewstatemaintainerbase_connectnotify_isbase) {
            kviewstatemaintainerbase_connectnotify_isbase = false;
            KViewStateMaintainerBase::connectNotify(signal);
        } else if (kviewstatemaintainerbase_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kviewstatemaintainerbase_connectnotify_callback(this, cbval1);
        } else {
            KViewStateMaintainerBase::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kviewstatemaintainerbase_disconnectnotify_isbase) {
            kviewstatemaintainerbase_disconnectnotify_isbase = false;
            KViewStateMaintainerBase::disconnectNotify(signal);
        } else if (kviewstatemaintainerbase_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kviewstatemaintainerbase_disconnectnotify_callback(this, cbval1);
        } else {
            KViewStateMaintainerBase::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kviewstatemaintainerbase_sender_isbase) {
            kviewstatemaintainerbase_sender_isbase = false;
            return KViewStateMaintainerBase::sender();
        } else if (kviewstatemaintainerbase_sender_callback != nullptr) {
            QObject* callback_ret = kviewstatemaintainerbase_sender_callback();
            return callback_ret;
        } else {
            return KViewStateMaintainerBase::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kviewstatemaintainerbase_sendersignalindex_isbase) {
            kviewstatemaintainerbase_sendersignalindex_isbase = false;
            return KViewStateMaintainerBase::senderSignalIndex();
        } else if (kviewstatemaintainerbase_sendersignalindex_callback != nullptr) {
            int callback_ret = kviewstatemaintainerbase_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KViewStateMaintainerBase::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kviewstatemaintainerbase_receivers_isbase) {
            kviewstatemaintainerbase_receivers_isbase = false;
            return KViewStateMaintainerBase::receivers(signal);
        } else if (kviewstatemaintainerbase_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kviewstatemaintainerbase_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KViewStateMaintainerBase::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kviewstatemaintainerbase_issignalconnected_isbase) {
            kviewstatemaintainerbase_issignalconnected_isbase = false;
            return KViewStateMaintainerBase::isSignalConnected(signal);
        } else if (kviewstatemaintainerbase_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kviewstatemaintainerbase_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KViewStateMaintainerBase::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KViewStateMaintainerBase_TimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
    friend void KViewStateMaintainerBase_QBaseTimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event);
    friend void KViewStateMaintainerBase_ChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
    friend void KViewStateMaintainerBase_QBaseChildEvent(KViewStateMaintainerBase* self, QChildEvent* event);
    friend void KViewStateMaintainerBase_CustomEvent(KViewStateMaintainerBase* self, QEvent* event);
    friend void KViewStateMaintainerBase_QBaseCustomEvent(KViewStateMaintainerBase* self, QEvent* event);
    friend void KViewStateMaintainerBase_ConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
    friend void KViewStateMaintainerBase_QBaseConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
    friend void KViewStateMaintainerBase_DisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
    friend void KViewStateMaintainerBase_QBaseDisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal);
    friend QObject* KViewStateMaintainerBase_Sender(const KViewStateMaintainerBase* self);
    friend QObject* KViewStateMaintainerBase_QBaseSender(const KViewStateMaintainerBase* self);
    friend int KViewStateMaintainerBase_SenderSignalIndex(const KViewStateMaintainerBase* self);
    friend int KViewStateMaintainerBase_QBaseSenderSignalIndex(const KViewStateMaintainerBase* self);
    friend int KViewStateMaintainerBase_Receivers(const KViewStateMaintainerBase* self, const char* signal);
    friend int KViewStateMaintainerBase_QBaseReceivers(const KViewStateMaintainerBase* self, const char* signal);
    friend bool KViewStateMaintainerBase_IsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal);
    friend bool KViewStateMaintainerBase_QBaseIsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal);
};

#endif
