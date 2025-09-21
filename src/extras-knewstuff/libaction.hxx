#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALACTION_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Action so that we can call protected methods
class VirtualKNSWidgetsAction final : public KNSWidgets::Action {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSWidgetsAction = true;

    // Virtual class public types (including callbacks)
    using KNSWidgets__Action_Metacall_Callback = int (*)(KNSWidgets__Action*, int, int, void**);
    using KNSWidgets__Action_Event_Callback = bool (*)(KNSWidgets__Action*, QEvent*);
    using KNSWidgets__Action_EventFilter_Callback = bool (*)(KNSWidgets__Action*, QObject*, QEvent*);
    using KNSWidgets__Action_TimerEvent_Callback = void (*)(KNSWidgets__Action*, QTimerEvent*);
    using KNSWidgets__Action_ChildEvent_Callback = void (*)(KNSWidgets__Action*, QChildEvent*);
    using KNSWidgets__Action_CustomEvent_Callback = void (*)(KNSWidgets__Action*, QEvent*);
    using KNSWidgets__Action_ConnectNotify_Callback = void (*)(KNSWidgets__Action*, QMetaMethod*);
    using KNSWidgets__Action_DisconnectNotify_Callback = void (*)(KNSWidgets__Action*, QMetaMethod*);
    using KNSWidgets__Action_Sender_Callback = QObject* (*)();
    using KNSWidgets__Action_SenderSignalIndex_Callback = int (*)();
    using KNSWidgets__Action_Receivers_Callback = int (*)(const KNSWidgets__Action*, const char*);
    using KNSWidgets__Action_IsSignalConnected_Callback = bool (*)(const KNSWidgets__Action*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSWidgets__Action_Metacall_Callback knswidgets__action_metacall_callback = nullptr;
    KNSWidgets__Action_Event_Callback knswidgets__action_event_callback = nullptr;
    KNSWidgets__Action_EventFilter_Callback knswidgets__action_eventfilter_callback = nullptr;
    KNSWidgets__Action_TimerEvent_Callback knswidgets__action_timerevent_callback = nullptr;
    KNSWidgets__Action_ChildEvent_Callback knswidgets__action_childevent_callback = nullptr;
    KNSWidgets__Action_CustomEvent_Callback knswidgets__action_customevent_callback = nullptr;
    KNSWidgets__Action_ConnectNotify_Callback knswidgets__action_connectnotify_callback = nullptr;
    KNSWidgets__Action_DisconnectNotify_Callback knswidgets__action_disconnectnotify_callback = nullptr;
    KNSWidgets__Action_Sender_Callback knswidgets__action_sender_callback = nullptr;
    KNSWidgets__Action_SenderSignalIndex_Callback knswidgets__action_sendersignalindex_callback = nullptr;
    KNSWidgets__Action_Receivers_Callback knswidgets__action_receivers_callback = nullptr;
    KNSWidgets__Action_IsSignalConnected_Callback knswidgets__action_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knswidgets__action_metacall_isbase = false;
    mutable bool knswidgets__action_event_isbase = false;
    mutable bool knswidgets__action_eventfilter_isbase = false;
    mutable bool knswidgets__action_timerevent_isbase = false;
    mutable bool knswidgets__action_childevent_isbase = false;
    mutable bool knswidgets__action_customevent_isbase = false;
    mutable bool knswidgets__action_connectnotify_isbase = false;
    mutable bool knswidgets__action_disconnectnotify_isbase = false;
    mutable bool knswidgets__action_sender_isbase = false;
    mutable bool knswidgets__action_sendersignalindex_isbase = false;
    mutable bool knswidgets__action_receivers_isbase = false;
    mutable bool knswidgets__action_issignalconnected_isbase = false;

  public:
    VirtualKNSWidgetsAction(const QString& text, const QString& configFile, QObject* parent) : KNSWidgets::Action(text, configFile, parent) {};

    ~VirtualKNSWidgetsAction() {
        knswidgets__action_metacall_callback = nullptr;
        knswidgets__action_event_callback = nullptr;
        knswidgets__action_eventfilter_callback = nullptr;
        knswidgets__action_timerevent_callback = nullptr;
        knswidgets__action_childevent_callback = nullptr;
        knswidgets__action_customevent_callback = nullptr;
        knswidgets__action_connectnotify_callback = nullptr;
        knswidgets__action_disconnectnotify_callback = nullptr;
        knswidgets__action_sender_callback = nullptr;
        knswidgets__action_sendersignalindex_callback = nullptr;
        knswidgets__action_receivers_callback = nullptr;
        knswidgets__action_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNSWidgets__Action_Metacall_Callback(KNSWidgets__Action_Metacall_Callback cb) { knswidgets__action_metacall_callback = cb; }
    inline void setKNSWidgets__Action_Event_Callback(KNSWidgets__Action_Event_Callback cb) { knswidgets__action_event_callback = cb; }
    inline void setKNSWidgets__Action_EventFilter_Callback(KNSWidgets__Action_EventFilter_Callback cb) { knswidgets__action_eventfilter_callback = cb; }
    inline void setKNSWidgets__Action_TimerEvent_Callback(KNSWidgets__Action_TimerEvent_Callback cb) { knswidgets__action_timerevent_callback = cb; }
    inline void setKNSWidgets__Action_ChildEvent_Callback(KNSWidgets__Action_ChildEvent_Callback cb) { knswidgets__action_childevent_callback = cb; }
    inline void setKNSWidgets__Action_CustomEvent_Callback(KNSWidgets__Action_CustomEvent_Callback cb) { knswidgets__action_customevent_callback = cb; }
    inline void setKNSWidgets__Action_ConnectNotify_Callback(KNSWidgets__Action_ConnectNotify_Callback cb) { knswidgets__action_connectnotify_callback = cb; }
    inline void setKNSWidgets__Action_DisconnectNotify_Callback(KNSWidgets__Action_DisconnectNotify_Callback cb) { knswidgets__action_disconnectnotify_callback = cb; }
    inline void setKNSWidgets__Action_Sender_Callback(KNSWidgets__Action_Sender_Callback cb) { knswidgets__action_sender_callback = cb; }
    inline void setKNSWidgets__Action_SenderSignalIndex_Callback(KNSWidgets__Action_SenderSignalIndex_Callback cb) { knswidgets__action_sendersignalindex_callback = cb; }
    inline void setKNSWidgets__Action_Receivers_Callback(KNSWidgets__Action_Receivers_Callback cb) { knswidgets__action_receivers_callback = cb; }
    inline void setKNSWidgets__Action_IsSignalConnected_Callback(KNSWidgets__Action_IsSignalConnected_Callback cb) { knswidgets__action_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSWidgets__Action_Metacall_IsBase(bool value) const { knswidgets__action_metacall_isbase = value; }
    inline void setKNSWidgets__Action_Event_IsBase(bool value) const { knswidgets__action_event_isbase = value; }
    inline void setKNSWidgets__Action_EventFilter_IsBase(bool value) const { knswidgets__action_eventfilter_isbase = value; }
    inline void setKNSWidgets__Action_TimerEvent_IsBase(bool value) const { knswidgets__action_timerevent_isbase = value; }
    inline void setKNSWidgets__Action_ChildEvent_IsBase(bool value) const { knswidgets__action_childevent_isbase = value; }
    inline void setKNSWidgets__Action_CustomEvent_IsBase(bool value) const { knswidgets__action_customevent_isbase = value; }
    inline void setKNSWidgets__Action_ConnectNotify_IsBase(bool value) const { knswidgets__action_connectnotify_isbase = value; }
    inline void setKNSWidgets__Action_DisconnectNotify_IsBase(bool value) const { knswidgets__action_disconnectnotify_isbase = value; }
    inline void setKNSWidgets__Action_Sender_IsBase(bool value) const { knswidgets__action_sender_isbase = value; }
    inline void setKNSWidgets__Action_SenderSignalIndex_IsBase(bool value) const { knswidgets__action_sendersignalindex_isbase = value; }
    inline void setKNSWidgets__Action_Receivers_IsBase(bool value) const { knswidgets__action_receivers_isbase = value; }
    inline void setKNSWidgets__Action_IsSignalConnected_IsBase(bool value) const { knswidgets__action_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__action_metacall_isbase) {
            knswidgets__action_metacall_isbase = false;
            return KNSWidgets__Action::qt_metacall(param1, param2, param3);
        } else if (knswidgets__action_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knswidgets__action_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Action::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (knswidgets__action_event_isbase) {
            knswidgets__action_event_isbase = false;
            return KNSWidgets__Action::event(param1);
        } else if (knswidgets__action_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = knswidgets__action_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Action::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knswidgets__action_eventfilter_isbase) {
            knswidgets__action_eventfilter_isbase = false;
            return KNSWidgets__Action::eventFilter(watched, event);
        } else if (knswidgets__action_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knswidgets__action_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNSWidgets__Action::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knswidgets__action_timerevent_isbase) {
            knswidgets__action_timerevent_isbase = false;
            KNSWidgets__Action::timerEvent(event);
        } else if (knswidgets__action_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knswidgets__action_timerevent_callback(this, cbval1);
        } else {
            KNSWidgets__Action::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__action_childevent_isbase) {
            knswidgets__action_childevent_isbase = false;
            KNSWidgets__Action::childEvent(event);
        } else if (knswidgets__action_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knswidgets__action_childevent_callback(this, cbval1);
        } else {
            KNSWidgets__Action::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__action_customevent_isbase) {
            knswidgets__action_customevent_isbase = false;
            KNSWidgets__Action::customEvent(event);
        } else if (knswidgets__action_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knswidgets__action_customevent_callback(this, cbval1);
        } else {
            KNSWidgets__Action::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__action_connectnotify_isbase) {
            knswidgets__action_connectnotify_isbase = false;
            KNSWidgets__Action::connectNotify(signal);
        } else if (knswidgets__action_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knswidgets__action_connectnotify_callback(this, cbval1);
        } else {
            KNSWidgets__Action::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__action_disconnectnotify_isbase) {
            knswidgets__action_disconnectnotify_isbase = false;
            KNSWidgets__Action::disconnectNotify(signal);
        } else if (knswidgets__action_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knswidgets__action_disconnectnotify_callback(this, cbval1);
        } else {
            KNSWidgets__Action::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knswidgets__action_sender_isbase) {
            knswidgets__action_sender_isbase = false;
            return KNSWidgets__Action::sender();
        } else if (knswidgets__action_sender_callback != nullptr) {
            QObject* callback_ret = knswidgets__action_sender_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Action::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knswidgets__action_sendersignalindex_isbase) {
            knswidgets__action_sendersignalindex_isbase = false;
            return KNSWidgets__Action::senderSignalIndex();
        } else if (knswidgets__action_sendersignalindex_callback != nullptr) {
            int callback_ret = knswidgets__action_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Action::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knswidgets__action_receivers_isbase) {
            knswidgets__action_receivers_isbase = false;
            return KNSWidgets__Action::receivers(signal);
        } else if (knswidgets__action_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knswidgets__action_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Action::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knswidgets__action_issignalconnected_isbase) {
            knswidgets__action_issignalconnected_isbase = false;
            return KNSWidgets__Action::isSignalConnected(signal);
        } else if (knswidgets__action_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knswidgets__action_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Action::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KNSWidgets__Action_Event(KNSWidgets::Action* self, QEvent* param1);
    friend bool KNSWidgets__Action_QBaseEvent(KNSWidgets::Action* self, QEvent* param1);
    friend void KNSWidgets__Action_TimerEvent(KNSWidgets::Action* self, QTimerEvent* event);
    friend void KNSWidgets__Action_QBaseTimerEvent(KNSWidgets::Action* self, QTimerEvent* event);
    friend void KNSWidgets__Action_ChildEvent(KNSWidgets::Action* self, QChildEvent* event);
    friend void KNSWidgets__Action_QBaseChildEvent(KNSWidgets::Action* self, QChildEvent* event);
    friend void KNSWidgets__Action_CustomEvent(KNSWidgets::Action* self, QEvent* event);
    friend void KNSWidgets__Action_QBaseCustomEvent(KNSWidgets::Action* self, QEvent* event);
    friend void KNSWidgets__Action_ConnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_QBaseConnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_DisconnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_QBaseDisconnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend QObject* KNSWidgets__Action_Sender(const KNSWidgets::Action* self);
    friend QObject* KNSWidgets__Action_QBaseSender(const KNSWidgets::Action* self);
    friend int KNSWidgets__Action_SenderSignalIndex(const KNSWidgets::Action* self);
    friend int KNSWidgets__Action_QBaseSenderSignalIndex(const KNSWidgets::Action* self);
    friend int KNSWidgets__Action_Receivers(const KNSWidgets::Action* self, const char* signal);
    friend int KNSWidgets__Action_QBaseReceivers(const KNSWidgets::Action* self, const char* signal);
    friend bool KNSWidgets__Action_IsSignalConnected(const KNSWidgets::Action* self, const QMetaMethod* signal);
    friend bool KNSWidgets__Action_QBaseIsSignalConnected(const KNSWidgets::Action* self, const QMetaMethod* signal);
};

#endif
