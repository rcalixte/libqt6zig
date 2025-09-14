#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBVIRTUALKNOTIFICATIONREPLYACTION_H
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBVIRTUALKNOTIFICATIONREPLYACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNotificationReplyAction so that we can call protected methods
class VirtualKNotificationReplyAction final : public KNotificationReplyAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKNotificationReplyAction = true;

    // Virtual class public types (including callbacks)
    using KNotificationReplyAction_Metacall_Callback = int (*)(KNotificationReplyAction*, int, int, void**);
    using KNotificationReplyAction_Event_Callback = bool (*)(KNotificationReplyAction*, QEvent*);
    using KNotificationReplyAction_EventFilter_Callback = bool (*)(KNotificationReplyAction*, QObject*, QEvent*);
    using KNotificationReplyAction_TimerEvent_Callback = void (*)(KNotificationReplyAction*, QTimerEvent*);
    using KNotificationReplyAction_ChildEvent_Callback = void (*)(KNotificationReplyAction*, QChildEvent*);
    using KNotificationReplyAction_CustomEvent_Callback = void (*)(KNotificationReplyAction*, QEvent*);
    using KNotificationReplyAction_ConnectNotify_Callback = void (*)(KNotificationReplyAction*, QMetaMethod*);
    using KNotificationReplyAction_DisconnectNotify_Callback = void (*)(KNotificationReplyAction*, QMetaMethod*);
    using KNotificationReplyAction_Sender_Callback = QObject* (*)();
    using KNotificationReplyAction_SenderSignalIndex_Callback = int (*)();
    using KNotificationReplyAction_Receivers_Callback = int (*)(const KNotificationReplyAction*, const char*);
    using KNotificationReplyAction_IsSignalConnected_Callback = bool (*)(const KNotificationReplyAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNotificationReplyAction_Metacall_Callback knotificationreplyaction_metacall_callback = nullptr;
    KNotificationReplyAction_Event_Callback knotificationreplyaction_event_callback = nullptr;
    KNotificationReplyAction_EventFilter_Callback knotificationreplyaction_eventfilter_callback = nullptr;
    KNotificationReplyAction_TimerEvent_Callback knotificationreplyaction_timerevent_callback = nullptr;
    KNotificationReplyAction_ChildEvent_Callback knotificationreplyaction_childevent_callback = nullptr;
    KNotificationReplyAction_CustomEvent_Callback knotificationreplyaction_customevent_callback = nullptr;
    KNotificationReplyAction_ConnectNotify_Callback knotificationreplyaction_connectnotify_callback = nullptr;
    KNotificationReplyAction_DisconnectNotify_Callback knotificationreplyaction_disconnectnotify_callback = nullptr;
    KNotificationReplyAction_Sender_Callback knotificationreplyaction_sender_callback = nullptr;
    KNotificationReplyAction_SenderSignalIndex_Callback knotificationreplyaction_sendersignalindex_callback = nullptr;
    KNotificationReplyAction_Receivers_Callback knotificationreplyaction_receivers_callback = nullptr;
    KNotificationReplyAction_IsSignalConnected_Callback knotificationreplyaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knotificationreplyaction_metacall_isbase = false;
    mutable bool knotificationreplyaction_event_isbase = false;
    mutable bool knotificationreplyaction_eventfilter_isbase = false;
    mutable bool knotificationreplyaction_timerevent_isbase = false;
    mutable bool knotificationreplyaction_childevent_isbase = false;
    mutable bool knotificationreplyaction_customevent_isbase = false;
    mutable bool knotificationreplyaction_connectnotify_isbase = false;
    mutable bool knotificationreplyaction_disconnectnotify_isbase = false;
    mutable bool knotificationreplyaction_sender_isbase = false;
    mutable bool knotificationreplyaction_sendersignalindex_isbase = false;
    mutable bool knotificationreplyaction_receivers_isbase = false;
    mutable bool knotificationreplyaction_issignalconnected_isbase = false;

  public:
    VirtualKNotificationReplyAction(const QString& label) : KNotificationReplyAction(label) {};

    ~VirtualKNotificationReplyAction() {
        knotificationreplyaction_metacall_callback = nullptr;
        knotificationreplyaction_event_callback = nullptr;
        knotificationreplyaction_eventfilter_callback = nullptr;
        knotificationreplyaction_timerevent_callback = nullptr;
        knotificationreplyaction_childevent_callback = nullptr;
        knotificationreplyaction_customevent_callback = nullptr;
        knotificationreplyaction_connectnotify_callback = nullptr;
        knotificationreplyaction_disconnectnotify_callback = nullptr;
        knotificationreplyaction_sender_callback = nullptr;
        knotificationreplyaction_sendersignalindex_callback = nullptr;
        knotificationreplyaction_receivers_callback = nullptr;
        knotificationreplyaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNotificationReplyAction_Metacall_Callback(KNotificationReplyAction_Metacall_Callback cb) { knotificationreplyaction_metacall_callback = cb; }
    inline void setKNotificationReplyAction_Event_Callback(KNotificationReplyAction_Event_Callback cb) { knotificationreplyaction_event_callback = cb; }
    inline void setKNotificationReplyAction_EventFilter_Callback(KNotificationReplyAction_EventFilter_Callback cb) { knotificationreplyaction_eventfilter_callback = cb; }
    inline void setKNotificationReplyAction_TimerEvent_Callback(KNotificationReplyAction_TimerEvent_Callback cb) { knotificationreplyaction_timerevent_callback = cb; }
    inline void setKNotificationReplyAction_ChildEvent_Callback(KNotificationReplyAction_ChildEvent_Callback cb) { knotificationreplyaction_childevent_callback = cb; }
    inline void setKNotificationReplyAction_CustomEvent_Callback(KNotificationReplyAction_CustomEvent_Callback cb) { knotificationreplyaction_customevent_callback = cb; }
    inline void setKNotificationReplyAction_ConnectNotify_Callback(KNotificationReplyAction_ConnectNotify_Callback cb) { knotificationreplyaction_connectnotify_callback = cb; }
    inline void setKNotificationReplyAction_DisconnectNotify_Callback(KNotificationReplyAction_DisconnectNotify_Callback cb) { knotificationreplyaction_disconnectnotify_callback = cb; }
    inline void setKNotificationReplyAction_Sender_Callback(KNotificationReplyAction_Sender_Callback cb) { knotificationreplyaction_sender_callback = cb; }
    inline void setKNotificationReplyAction_SenderSignalIndex_Callback(KNotificationReplyAction_SenderSignalIndex_Callback cb) { knotificationreplyaction_sendersignalindex_callback = cb; }
    inline void setKNotificationReplyAction_Receivers_Callback(KNotificationReplyAction_Receivers_Callback cb) { knotificationreplyaction_receivers_callback = cb; }
    inline void setKNotificationReplyAction_IsSignalConnected_Callback(KNotificationReplyAction_IsSignalConnected_Callback cb) { knotificationreplyaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNotificationReplyAction_Metacall_IsBase(bool value) const { knotificationreplyaction_metacall_isbase = value; }
    inline void setKNotificationReplyAction_Event_IsBase(bool value) const { knotificationreplyaction_event_isbase = value; }
    inline void setKNotificationReplyAction_EventFilter_IsBase(bool value) const { knotificationreplyaction_eventfilter_isbase = value; }
    inline void setKNotificationReplyAction_TimerEvent_IsBase(bool value) const { knotificationreplyaction_timerevent_isbase = value; }
    inline void setKNotificationReplyAction_ChildEvent_IsBase(bool value) const { knotificationreplyaction_childevent_isbase = value; }
    inline void setKNotificationReplyAction_CustomEvent_IsBase(bool value) const { knotificationreplyaction_customevent_isbase = value; }
    inline void setKNotificationReplyAction_ConnectNotify_IsBase(bool value) const { knotificationreplyaction_connectnotify_isbase = value; }
    inline void setKNotificationReplyAction_DisconnectNotify_IsBase(bool value) const { knotificationreplyaction_disconnectnotify_isbase = value; }
    inline void setKNotificationReplyAction_Sender_IsBase(bool value) const { knotificationreplyaction_sender_isbase = value; }
    inline void setKNotificationReplyAction_SenderSignalIndex_IsBase(bool value) const { knotificationreplyaction_sendersignalindex_isbase = value; }
    inline void setKNotificationReplyAction_Receivers_IsBase(bool value) const { knotificationreplyaction_receivers_isbase = value; }
    inline void setKNotificationReplyAction_IsSignalConnected_IsBase(bool value) const { knotificationreplyaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotificationreplyaction_metacall_isbase) {
            knotificationreplyaction_metacall_isbase = false;
            return KNotificationReplyAction::qt_metacall(param1, param2, param3);
        } else if (knotificationreplyaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knotificationreplyaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationReplyAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotificationreplyaction_event_isbase) {
            knotificationreplyaction_event_isbase = false;
            return KNotificationReplyAction::event(event);
        } else if (knotificationreplyaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knotificationreplyaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationReplyAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotificationreplyaction_eventfilter_isbase) {
            knotificationreplyaction_eventfilter_isbase = false;
            return KNotificationReplyAction::eventFilter(watched, event);
        } else if (knotificationreplyaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knotificationreplyaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNotificationReplyAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotificationreplyaction_timerevent_isbase) {
            knotificationreplyaction_timerevent_isbase = false;
            KNotificationReplyAction::timerEvent(event);
        } else if (knotificationreplyaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knotificationreplyaction_timerevent_callback(this, cbval1);
        } else {
            KNotificationReplyAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotificationreplyaction_childevent_isbase) {
            knotificationreplyaction_childevent_isbase = false;
            KNotificationReplyAction::childEvent(event);
        } else if (knotificationreplyaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knotificationreplyaction_childevent_callback(this, cbval1);
        } else {
            KNotificationReplyAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotificationreplyaction_customevent_isbase) {
            knotificationreplyaction_customevent_isbase = false;
            KNotificationReplyAction::customEvent(event);
        } else if (knotificationreplyaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knotificationreplyaction_customevent_callback(this, cbval1);
        } else {
            KNotificationReplyAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotificationreplyaction_connectnotify_isbase) {
            knotificationreplyaction_connectnotify_isbase = false;
            KNotificationReplyAction::connectNotify(signal);
        } else if (knotificationreplyaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotificationreplyaction_connectnotify_callback(this, cbval1);
        } else {
            KNotificationReplyAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotificationreplyaction_disconnectnotify_isbase) {
            knotificationreplyaction_disconnectnotify_isbase = false;
            KNotificationReplyAction::disconnectNotify(signal);
        } else if (knotificationreplyaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotificationreplyaction_disconnectnotify_callback(this, cbval1);
        } else {
            KNotificationReplyAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knotificationreplyaction_sender_isbase) {
            knotificationreplyaction_sender_isbase = false;
            return KNotificationReplyAction::sender();
        } else if (knotificationreplyaction_sender_callback != nullptr) {
            QObject* callback_ret = knotificationreplyaction_sender_callback();
            return callback_ret;
        } else {
            return KNotificationReplyAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knotificationreplyaction_sendersignalindex_isbase) {
            knotificationreplyaction_sendersignalindex_isbase = false;
            return KNotificationReplyAction::senderSignalIndex();
        } else if (knotificationreplyaction_sendersignalindex_callback != nullptr) {
            int callback_ret = knotificationreplyaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationReplyAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knotificationreplyaction_receivers_isbase) {
            knotificationreplyaction_receivers_isbase = false;
            return KNotificationReplyAction::receivers(signal);
        } else if (knotificationreplyaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knotificationreplyaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationReplyAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knotificationreplyaction_issignalconnected_isbase) {
            knotificationreplyaction_issignalconnected_isbase = false;
            return KNotificationReplyAction::isSignalConnected(signal);
        } else if (knotificationreplyaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knotificationreplyaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationReplyAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNotificationReplyAction_TimerEvent(KNotificationReplyAction* self, QTimerEvent* event);
    friend void KNotificationReplyAction_QBaseTimerEvent(KNotificationReplyAction* self, QTimerEvent* event);
    friend void KNotificationReplyAction_ChildEvent(KNotificationReplyAction* self, QChildEvent* event);
    friend void KNotificationReplyAction_QBaseChildEvent(KNotificationReplyAction* self, QChildEvent* event);
    friend void KNotificationReplyAction_CustomEvent(KNotificationReplyAction* self, QEvent* event);
    friend void KNotificationReplyAction_QBaseCustomEvent(KNotificationReplyAction* self, QEvent* event);
    friend void KNotificationReplyAction_ConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
    friend void KNotificationReplyAction_QBaseConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
    friend void KNotificationReplyAction_DisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
    friend void KNotificationReplyAction_QBaseDisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal);
    friend QObject* KNotificationReplyAction_Sender(const KNotificationReplyAction* self);
    friend QObject* KNotificationReplyAction_QBaseSender(const KNotificationReplyAction* self);
    friend int KNotificationReplyAction_SenderSignalIndex(const KNotificationReplyAction* self);
    friend int KNotificationReplyAction_QBaseSenderSignalIndex(const KNotificationReplyAction* self);
    friend int KNotificationReplyAction_Receivers(const KNotificationReplyAction* self, const char* signal);
    friend int KNotificationReplyAction_QBaseReceivers(const KNotificationReplyAction* self, const char* signal);
    friend bool KNotificationReplyAction_IsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal);
    friend bool KNotificationReplyAction_QBaseIsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal);
};

#endif
