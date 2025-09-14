#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBVIRTUALKNOTIFICATION_H
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBVIRTUALKNOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNotificationAction so that we can call protected methods
class VirtualKNotificationAction final : public KNotificationAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKNotificationAction = true;

    // Virtual class public types (including callbacks)
    using KNotificationAction_Metacall_Callback = int (*)(KNotificationAction*, int, int, void**);
    using KNotificationAction_Event_Callback = bool (*)(KNotificationAction*, QEvent*);
    using KNotificationAction_EventFilter_Callback = bool (*)(KNotificationAction*, QObject*, QEvent*);
    using KNotificationAction_TimerEvent_Callback = void (*)(KNotificationAction*, QTimerEvent*);
    using KNotificationAction_ChildEvent_Callback = void (*)(KNotificationAction*, QChildEvent*);
    using KNotificationAction_CustomEvent_Callback = void (*)(KNotificationAction*, QEvent*);
    using KNotificationAction_ConnectNotify_Callback = void (*)(KNotificationAction*, QMetaMethod*);
    using KNotificationAction_DisconnectNotify_Callback = void (*)(KNotificationAction*, QMetaMethod*);
    using KNotificationAction_Sender_Callback = QObject* (*)();
    using KNotificationAction_SenderSignalIndex_Callback = int (*)();
    using KNotificationAction_Receivers_Callback = int (*)(const KNotificationAction*, const char*);
    using KNotificationAction_IsSignalConnected_Callback = bool (*)(const KNotificationAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNotificationAction_Metacall_Callback knotificationaction_metacall_callback = nullptr;
    KNotificationAction_Event_Callback knotificationaction_event_callback = nullptr;
    KNotificationAction_EventFilter_Callback knotificationaction_eventfilter_callback = nullptr;
    KNotificationAction_TimerEvent_Callback knotificationaction_timerevent_callback = nullptr;
    KNotificationAction_ChildEvent_Callback knotificationaction_childevent_callback = nullptr;
    KNotificationAction_CustomEvent_Callback knotificationaction_customevent_callback = nullptr;
    KNotificationAction_ConnectNotify_Callback knotificationaction_connectnotify_callback = nullptr;
    KNotificationAction_DisconnectNotify_Callback knotificationaction_disconnectnotify_callback = nullptr;
    KNotificationAction_Sender_Callback knotificationaction_sender_callback = nullptr;
    KNotificationAction_SenderSignalIndex_Callback knotificationaction_sendersignalindex_callback = nullptr;
    KNotificationAction_Receivers_Callback knotificationaction_receivers_callback = nullptr;
    KNotificationAction_IsSignalConnected_Callback knotificationaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knotificationaction_metacall_isbase = false;
    mutable bool knotificationaction_event_isbase = false;
    mutable bool knotificationaction_eventfilter_isbase = false;
    mutable bool knotificationaction_timerevent_isbase = false;
    mutable bool knotificationaction_childevent_isbase = false;
    mutable bool knotificationaction_customevent_isbase = false;
    mutable bool knotificationaction_connectnotify_isbase = false;
    mutable bool knotificationaction_disconnectnotify_isbase = false;
    mutable bool knotificationaction_sender_isbase = false;
    mutable bool knotificationaction_sendersignalindex_isbase = false;
    mutable bool knotificationaction_receivers_isbase = false;
    mutable bool knotificationaction_issignalconnected_isbase = false;

  public:
    VirtualKNotificationAction() : KNotificationAction() {};
    VirtualKNotificationAction(const QString& label) : KNotificationAction(label) {};
    VirtualKNotificationAction(QObject* parent) : KNotificationAction(parent) {};

    ~VirtualKNotificationAction() {
        knotificationaction_metacall_callback = nullptr;
        knotificationaction_event_callback = nullptr;
        knotificationaction_eventfilter_callback = nullptr;
        knotificationaction_timerevent_callback = nullptr;
        knotificationaction_childevent_callback = nullptr;
        knotificationaction_customevent_callback = nullptr;
        knotificationaction_connectnotify_callback = nullptr;
        knotificationaction_disconnectnotify_callback = nullptr;
        knotificationaction_sender_callback = nullptr;
        knotificationaction_sendersignalindex_callback = nullptr;
        knotificationaction_receivers_callback = nullptr;
        knotificationaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNotificationAction_Metacall_Callback(KNotificationAction_Metacall_Callback cb) { knotificationaction_metacall_callback = cb; }
    inline void setKNotificationAction_Event_Callback(KNotificationAction_Event_Callback cb) { knotificationaction_event_callback = cb; }
    inline void setKNotificationAction_EventFilter_Callback(KNotificationAction_EventFilter_Callback cb) { knotificationaction_eventfilter_callback = cb; }
    inline void setKNotificationAction_TimerEvent_Callback(KNotificationAction_TimerEvent_Callback cb) { knotificationaction_timerevent_callback = cb; }
    inline void setKNotificationAction_ChildEvent_Callback(KNotificationAction_ChildEvent_Callback cb) { knotificationaction_childevent_callback = cb; }
    inline void setKNotificationAction_CustomEvent_Callback(KNotificationAction_CustomEvent_Callback cb) { knotificationaction_customevent_callback = cb; }
    inline void setKNotificationAction_ConnectNotify_Callback(KNotificationAction_ConnectNotify_Callback cb) { knotificationaction_connectnotify_callback = cb; }
    inline void setKNotificationAction_DisconnectNotify_Callback(KNotificationAction_DisconnectNotify_Callback cb) { knotificationaction_disconnectnotify_callback = cb; }
    inline void setKNotificationAction_Sender_Callback(KNotificationAction_Sender_Callback cb) { knotificationaction_sender_callback = cb; }
    inline void setKNotificationAction_SenderSignalIndex_Callback(KNotificationAction_SenderSignalIndex_Callback cb) { knotificationaction_sendersignalindex_callback = cb; }
    inline void setKNotificationAction_Receivers_Callback(KNotificationAction_Receivers_Callback cb) { knotificationaction_receivers_callback = cb; }
    inline void setKNotificationAction_IsSignalConnected_Callback(KNotificationAction_IsSignalConnected_Callback cb) { knotificationaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNotificationAction_Metacall_IsBase(bool value) const { knotificationaction_metacall_isbase = value; }
    inline void setKNotificationAction_Event_IsBase(bool value) const { knotificationaction_event_isbase = value; }
    inline void setKNotificationAction_EventFilter_IsBase(bool value) const { knotificationaction_eventfilter_isbase = value; }
    inline void setKNotificationAction_TimerEvent_IsBase(bool value) const { knotificationaction_timerevent_isbase = value; }
    inline void setKNotificationAction_ChildEvent_IsBase(bool value) const { knotificationaction_childevent_isbase = value; }
    inline void setKNotificationAction_CustomEvent_IsBase(bool value) const { knotificationaction_customevent_isbase = value; }
    inline void setKNotificationAction_ConnectNotify_IsBase(bool value) const { knotificationaction_connectnotify_isbase = value; }
    inline void setKNotificationAction_DisconnectNotify_IsBase(bool value) const { knotificationaction_disconnectnotify_isbase = value; }
    inline void setKNotificationAction_Sender_IsBase(bool value) const { knotificationaction_sender_isbase = value; }
    inline void setKNotificationAction_SenderSignalIndex_IsBase(bool value) const { knotificationaction_sendersignalindex_isbase = value; }
    inline void setKNotificationAction_Receivers_IsBase(bool value) const { knotificationaction_receivers_isbase = value; }
    inline void setKNotificationAction_IsSignalConnected_IsBase(bool value) const { knotificationaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotificationaction_metacall_isbase) {
            knotificationaction_metacall_isbase = false;
            return KNotificationAction::qt_metacall(param1, param2, param3);
        } else if (knotificationaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knotificationaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotificationaction_event_isbase) {
            knotificationaction_event_isbase = false;
            return KNotificationAction::event(event);
        } else if (knotificationaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knotificationaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotificationaction_eventfilter_isbase) {
            knotificationaction_eventfilter_isbase = false;
            return KNotificationAction::eventFilter(watched, event);
        } else if (knotificationaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knotificationaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNotificationAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotificationaction_timerevent_isbase) {
            knotificationaction_timerevent_isbase = false;
            KNotificationAction::timerEvent(event);
        } else if (knotificationaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knotificationaction_timerevent_callback(this, cbval1);
        } else {
            KNotificationAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotificationaction_childevent_isbase) {
            knotificationaction_childevent_isbase = false;
            KNotificationAction::childEvent(event);
        } else if (knotificationaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knotificationaction_childevent_callback(this, cbval1);
        } else {
            KNotificationAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotificationaction_customevent_isbase) {
            knotificationaction_customevent_isbase = false;
            KNotificationAction::customEvent(event);
        } else if (knotificationaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knotificationaction_customevent_callback(this, cbval1);
        } else {
            KNotificationAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotificationaction_connectnotify_isbase) {
            knotificationaction_connectnotify_isbase = false;
            KNotificationAction::connectNotify(signal);
        } else if (knotificationaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotificationaction_connectnotify_callback(this, cbval1);
        } else {
            KNotificationAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotificationaction_disconnectnotify_isbase) {
            knotificationaction_disconnectnotify_isbase = false;
            KNotificationAction::disconnectNotify(signal);
        } else if (knotificationaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotificationaction_disconnectnotify_callback(this, cbval1);
        } else {
            KNotificationAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knotificationaction_sender_isbase) {
            knotificationaction_sender_isbase = false;
            return KNotificationAction::sender();
        } else if (knotificationaction_sender_callback != nullptr) {
            QObject* callback_ret = knotificationaction_sender_callback();
            return callback_ret;
        } else {
            return KNotificationAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knotificationaction_sendersignalindex_isbase) {
            knotificationaction_sendersignalindex_isbase = false;
            return KNotificationAction::senderSignalIndex();
        } else if (knotificationaction_sendersignalindex_callback != nullptr) {
            int callback_ret = knotificationaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knotificationaction_receivers_isbase) {
            knotificationaction_receivers_isbase = false;
            return KNotificationAction::receivers(signal);
        } else if (knotificationaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knotificationaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knotificationaction_issignalconnected_isbase) {
            knotificationaction_issignalconnected_isbase = false;
            return KNotificationAction::isSignalConnected(signal);
        } else if (knotificationaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knotificationaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNotificationAction_TimerEvent(KNotificationAction* self, QTimerEvent* event);
    friend void KNotificationAction_QBaseTimerEvent(KNotificationAction* self, QTimerEvent* event);
    friend void KNotificationAction_ChildEvent(KNotificationAction* self, QChildEvent* event);
    friend void KNotificationAction_QBaseChildEvent(KNotificationAction* self, QChildEvent* event);
    friend void KNotificationAction_CustomEvent(KNotificationAction* self, QEvent* event);
    friend void KNotificationAction_QBaseCustomEvent(KNotificationAction* self, QEvent* event);
    friend void KNotificationAction_ConnectNotify(KNotificationAction* self, const QMetaMethod* signal);
    friend void KNotificationAction_QBaseConnectNotify(KNotificationAction* self, const QMetaMethod* signal);
    friend void KNotificationAction_DisconnectNotify(KNotificationAction* self, const QMetaMethod* signal);
    friend void KNotificationAction_QBaseDisconnectNotify(KNotificationAction* self, const QMetaMethod* signal);
    friend QObject* KNotificationAction_Sender(const KNotificationAction* self);
    friend QObject* KNotificationAction_QBaseSender(const KNotificationAction* self);
    friend int KNotificationAction_SenderSignalIndex(const KNotificationAction* self);
    friend int KNotificationAction_QBaseSenderSignalIndex(const KNotificationAction* self);
    friend int KNotificationAction_Receivers(const KNotificationAction* self, const char* signal);
    friend int KNotificationAction_QBaseReceivers(const KNotificationAction* self, const char* signal);
    friend bool KNotificationAction_IsSignalConnected(const KNotificationAction* self, const QMetaMethod* signal);
    friend bool KNotificationAction_QBaseIsSignalConnected(const KNotificationAction* self, const QMetaMethod* signal);
};

// This class is a subclass of KNotification so that we can call protected methods
class VirtualKNotification final : public KNotification {

  public:
    // Virtual class boolean flag
    bool isVirtualKNotification = true;

    // Virtual class public types (including callbacks)
    using KNotification_Metacall_Callback = int (*)(KNotification*, int, int, void**);
    using KNotification_Event_Callback = bool (*)(KNotification*, QEvent*);
    using KNotification_EventFilter_Callback = bool (*)(KNotification*, QObject*, QEvent*);
    using KNotification_TimerEvent_Callback = void (*)(KNotification*, QTimerEvent*);
    using KNotification_ChildEvent_Callback = void (*)(KNotification*, QChildEvent*);
    using KNotification_CustomEvent_Callback = void (*)(KNotification*, QEvent*);
    using KNotification_ConnectNotify_Callback = void (*)(KNotification*, QMetaMethod*);
    using KNotification_DisconnectNotify_Callback = void (*)(KNotification*, QMetaMethod*);
    using KNotification_Sender_Callback = QObject* (*)();
    using KNotification_SenderSignalIndex_Callback = int (*)();
    using KNotification_Receivers_Callback = int (*)(const KNotification*, const char*);
    using KNotification_IsSignalConnected_Callback = bool (*)(const KNotification*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNotification_Metacall_Callback knotification_metacall_callback = nullptr;
    KNotification_Event_Callback knotification_event_callback = nullptr;
    KNotification_EventFilter_Callback knotification_eventfilter_callback = nullptr;
    KNotification_TimerEvent_Callback knotification_timerevent_callback = nullptr;
    KNotification_ChildEvent_Callback knotification_childevent_callback = nullptr;
    KNotification_CustomEvent_Callback knotification_customevent_callback = nullptr;
    KNotification_ConnectNotify_Callback knotification_connectnotify_callback = nullptr;
    KNotification_DisconnectNotify_Callback knotification_disconnectnotify_callback = nullptr;
    KNotification_Sender_Callback knotification_sender_callback = nullptr;
    KNotification_SenderSignalIndex_Callback knotification_sendersignalindex_callback = nullptr;
    KNotification_Receivers_Callback knotification_receivers_callback = nullptr;
    KNotification_IsSignalConnected_Callback knotification_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knotification_metacall_isbase = false;
    mutable bool knotification_event_isbase = false;
    mutable bool knotification_eventfilter_isbase = false;
    mutable bool knotification_timerevent_isbase = false;
    mutable bool knotification_childevent_isbase = false;
    mutable bool knotification_customevent_isbase = false;
    mutable bool knotification_connectnotify_isbase = false;
    mutable bool knotification_disconnectnotify_isbase = false;
    mutable bool knotification_sender_isbase = false;
    mutable bool knotification_sendersignalindex_isbase = false;
    mutable bool knotification_receivers_isbase = false;
    mutable bool knotification_issignalconnected_isbase = false;

  public:
    VirtualKNotification(const QString& eventId) : KNotification(eventId) {};
    VirtualKNotification(const QString& eventId, KNotification::NotificationFlags flags) : KNotification(eventId, flags) {};
    VirtualKNotification(const QString& eventId, KNotification::NotificationFlags flags, QObject* parent) : KNotification(eventId, flags, parent) {};

    ~VirtualKNotification() {
        knotification_metacall_callback = nullptr;
        knotification_event_callback = nullptr;
        knotification_eventfilter_callback = nullptr;
        knotification_timerevent_callback = nullptr;
        knotification_childevent_callback = nullptr;
        knotification_customevent_callback = nullptr;
        knotification_connectnotify_callback = nullptr;
        knotification_disconnectnotify_callback = nullptr;
        knotification_sender_callback = nullptr;
        knotification_sendersignalindex_callback = nullptr;
        knotification_receivers_callback = nullptr;
        knotification_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNotification_Metacall_Callback(KNotification_Metacall_Callback cb) { knotification_metacall_callback = cb; }
    inline void setKNotification_Event_Callback(KNotification_Event_Callback cb) { knotification_event_callback = cb; }
    inline void setKNotification_EventFilter_Callback(KNotification_EventFilter_Callback cb) { knotification_eventfilter_callback = cb; }
    inline void setKNotification_TimerEvent_Callback(KNotification_TimerEvent_Callback cb) { knotification_timerevent_callback = cb; }
    inline void setKNotification_ChildEvent_Callback(KNotification_ChildEvent_Callback cb) { knotification_childevent_callback = cb; }
    inline void setKNotification_CustomEvent_Callback(KNotification_CustomEvent_Callback cb) { knotification_customevent_callback = cb; }
    inline void setKNotification_ConnectNotify_Callback(KNotification_ConnectNotify_Callback cb) { knotification_connectnotify_callback = cb; }
    inline void setKNotification_DisconnectNotify_Callback(KNotification_DisconnectNotify_Callback cb) { knotification_disconnectnotify_callback = cb; }
    inline void setKNotification_Sender_Callback(KNotification_Sender_Callback cb) { knotification_sender_callback = cb; }
    inline void setKNotification_SenderSignalIndex_Callback(KNotification_SenderSignalIndex_Callback cb) { knotification_sendersignalindex_callback = cb; }
    inline void setKNotification_Receivers_Callback(KNotification_Receivers_Callback cb) { knotification_receivers_callback = cb; }
    inline void setKNotification_IsSignalConnected_Callback(KNotification_IsSignalConnected_Callback cb) { knotification_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNotification_Metacall_IsBase(bool value) const { knotification_metacall_isbase = value; }
    inline void setKNotification_Event_IsBase(bool value) const { knotification_event_isbase = value; }
    inline void setKNotification_EventFilter_IsBase(bool value) const { knotification_eventfilter_isbase = value; }
    inline void setKNotification_TimerEvent_IsBase(bool value) const { knotification_timerevent_isbase = value; }
    inline void setKNotification_ChildEvent_IsBase(bool value) const { knotification_childevent_isbase = value; }
    inline void setKNotification_CustomEvent_IsBase(bool value) const { knotification_customevent_isbase = value; }
    inline void setKNotification_ConnectNotify_IsBase(bool value) const { knotification_connectnotify_isbase = value; }
    inline void setKNotification_DisconnectNotify_IsBase(bool value) const { knotification_disconnectnotify_isbase = value; }
    inline void setKNotification_Sender_IsBase(bool value) const { knotification_sender_isbase = value; }
    inline void setKNotification_SenderSignalIndex_IsBase(bool value) const { knotification_sendersignalindex_isbase = value; }
    inline void setKNotification_Receivers_IsBase(bool value) const { knotification_receivers_isbase = value; }
    inline void setKNotification_IsSignalConnected_IsBase(bool value) const { knotification_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotification_metacall_isbase) {
            knotification_metacall_isbase = false;
            return KNotification::qt_metacall(param1, param2, param3);
        } else if (knotification_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knotification_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNotification::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotification_event_isbase) {
            knotification_event_isbase = false;
            return KNotification::event(event);
        } else if (knotification_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knotification_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotification::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotification_eventfilter_isbase) {
            knotification_eventfilter_isbase = false;
            return KNotification::eventFilter(watched, event);
        } else if (knotification_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knotification_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNotification::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotification_timerevent_isbase) {
            knotification_timerevent_isbase = false;
            KNotification::timerEvent(event);
        } else if (knotification_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knotification_timerevent_callback(this, cbval1);
        } else {
            KNotification::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotification_childevent_isbase) {
            knotification_childevent_isbase = false;
            KNotification::childEvent(event);
        } else if (knotification_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knotification_childevent_callback(this, cbval1);
        } else {
            KNotification::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotification_customevent_isbase) {
            knotification_customevent_isbase = false;
            KNotification::customEvent(event);
        } else if (knotification_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knotification_customevent_callback(this, cbval1);
        } else {
            KNotification::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotification_connectnotify_isbase) {
            knotification_connectnotify_isbase = false;
            KNotification::connectNotify(signal);
        } else if (knotification_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotification_connectnotify_callback(this, cbval1);
        } else {
            KNotification::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotification_disconnectnotify_isbase) {
            knotification_disconnectnotify_isbase = false;
            KNotification::disconnectNotify(signal);
        } else if (knotification_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotification_disconnectnotify_callback(this, cbval1);
        } else {
            KNotification::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knotification_sender_isbase) {
            knotification_sender_isbase = false;
            return KNotification::sender();
        } else if (knotification_sender_callback != nullptr) {
            QObject* callback_ret = knotification_sender_callback();
            return callback_ret;
        } else {
            return KNotification::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knotification_sendersignalindex_isbase) {
            knotification_sendersignalindex_isbase = false;
            return KNotification::senderSignalIndex();
        } else if (knotification_sendersignalindex_callback != nullptr) {
            int callback_ret = knotification_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNotification::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knotification_receivers_isbase) {
            knotification_receivers_isbase = false;
            return KNotification::receivers(signal);
        } else if (knotification_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knotification_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNotification::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knotification_issignalconnected_isbase) {
            knotification_issignalconnected_isbase = false;
            return KNotification::isSignalConnected(signal);
        } else if (knotification_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knotification_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotification::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNotification_TimerEvent(KNotification* self, QTimerEvent* event);
    friend void KNotification_QBaseTimerEvent(KNotification* self, QTimerEvent* event);
    friend void KNotification_ChildEvent(KNotification* self, QChildEvent* event);
    friend void KNotification_QBaseChildEvent(KNotification* self, QChildEvent* event);
    friend void KNotification_CustomEvent(KNotification* self, QEvent* event);
    friend void KNotification_QBaseCustomEvent(KNotification* self, QEvent* event);
    friend void KNotification_ConnectNotify(KNotification* self, const QMetaMethod* signal);
    friend void KNotification_QBaseConnectNotify(KNotification* self, const QMetaMethod* signal);
    friend void KNotification_DisconnectNotify(KNotification* self, const QMetaMethod* signal);
    friend void KNotification_QBaseDisconnectNotify(KNotification* self, const QMetaMethod* signal);
    friend QObject* KNotification_Sender(const KNotification* self);
    friend QObject* KNotification_QBaseSender(const KNotification* self);
    friend int KNotification_SenderSignalIndex(const KNotification* self);
    friend int KNotification_QBaseSenderSignalIndex(const KNotification* self);
    friend int KNotification_Receivers(const KNotification* self, const char* signal);
    friend int KNotification_QBaseReceivers(const KNotification* self, const char* signal);
    friend bool KNotification_IsSignalConnected(const KNotification* self, const QMetaMethod* signal);
    friend bool KNotification_QBaseIsSignalConnected(const KNotification* self, const QMetaMethod* signal);
};

#endif
