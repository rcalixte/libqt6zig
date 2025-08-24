#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDUALACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDUALACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDualAction so that we can call protected methods
class VirtualKDualAction final : public KDualAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKDualAction = true;

    // Virtual class public types (including callbacks)
    using KDualAction_Metacall_Callback = int (*)(KDualAction*, int, int, void**);
    using KDualAction_Event_Callback = bool (*)(KDualAction*, QEvent*);
    using KDualAction_EventFilter_Callback = bool (*)(KDualAction*, QObject*, QEvent*);
    using KDualAction_TimerEvent_Callback = void (*)(KDualAction*, QTimerEvent*);
    using KDualAction_ChildEvent_Callback = void (*)(KDualAction*, QChildEvent*);
    using KDualAction_CustomEvent_Callback = void (*)(KDualAction*, QEvent*);
    using KDualAction_ConnectNotify_Callback = void (*)(KDualAction*, QMetaMethod*);
    using KDualAction_DisconnectNotify_Callback = void (*)(KDualAction*, QMetaMethod*);
    using KDualAction_Sender_Callback = QObject* (*)();
    using KDualAction_SenderSignalIndex_Callback = int (*)();
    using KDualAction_Receivers_Callback = int (*)(const KDualAction*, const char*);
    using KDualAction_IsSignalConnected_Callback = bool (*)(const KDualAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDualAction_Metacall_Callback kdualaction_metacall_callback = nullptr;
    KDualAction_Event_Callback kdualaction_event_callback = nullptr;
    KDualAction_EventFilter_Callback kdualaction_eventfilter_callback = nullptr;
    KDualAction_TimerEvent_Callback kdualaction_timerevent_callback = nullptr;
    KDualAction_ChildEvent_Callback kdualaction_childevent_callback = nullptr;
    KDualAction_CustomEvent_Callback kdualaction_customevent_callback = nullptr;
    KDualAction_ConnectNotify_Callback kdualaction_connectnotify_callback = nullptr;
    KDualAction_DisconnectNotify_Callback kdualaction_disconnectnotify_callback = nullptr;
    KDualAction_Sender_Callback kdualaction_sender_callback = nullptr;
    KDualAction_SenderSignalIndex_Callback kdualaction_sendersignalindex_callback = nullptr;
    KDualAction_Receivers_Callback kdualaction_receivers_callback = nullptr;
    KDualAction_IsSignalConnected_Callback kdualaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdualaction_metacall_isbase = false;
    mutable bool kdualaction_event_isbase = false;
    mutable bool kdualaction_eventfilter_isbase = false;
    mutable bool kdualaction_timerevent_isbase = false;
    mutable bool kdualaction_childevent_isbase = false;
    mutable bool kdualaction_customevent_isbase = false;
    mutable bool kdualaction_connectnotify_isbase = false;
    mutable bool kdualaction_disconnectnotify_isbase = false;
    mutable bool kdualaction_sender_isbase = false;
    mutable bool kdualaction_sendersignalindex_isbase = false;
    mutable bool kdualaction_receivers_isbase = false;
    mutable bool kdualaction_issignalconnected_isbase = false;

  public:
    VirtualKDualAction(QObject* parent) : KDualAction(parent) {};
    VirtualKDualAction(const QString& inactiveText, const QString& activeText, QObject* parent) : KDualAction(inactiveText, activeText, parent) {};

    ~VirtualKDualAction() {
        kdualaction_metacall_callback = nullptr;
        kdualaction_event_callback = nullptr;
        kdualaction_eventfilter_callback = nullptr;
        kdualaction_timerevent_callback = nullptr;
        kdualaction_childevent_callback = nullptr;
        kdualaction_customevent_callback = nullptr;
        kdualaction_connectnotify_callback = nullptr;
        kdualaction_disconnectnotify_callback = nullptr;
        kdualaction_sender_callback = nullptr;
        kdualaction_sendersignalindex_callback = nullptr;
        kdualaction_receivers_callback = nullptr;
        kdualaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDualAction_Metacall_Callback(KDualAction_Metacall_Callback cb) { kdualaction_metacall_callback = cb; }
    inline void setKDualAction_Event_Callback(KDualAction_Event_Callback cb) { kdualaction_event_callback = cb; }
    inline void setKDualAction_EventFilter_Callback(KDualAction_EventFilter_Callback cb) { kdualaction_eventfilter_callback = cb; }
    inline void setKDualAction_TimerEvent_Callback(KDualAction_TimerEvent_Callback cb) { kdualaction_timerevent_callback = cb; }
    inline void setKDualAction_ChildEvent_Callback(KDualAction_ChildEvent_Callback cb) { kdualaction_childevent_callback = cb; }
    inline void setKDualAction_CustomEvent_Callback(KDualAction_CustomEvent_Callback cb) { kdualaction_customevent_callback = cb; }
    inline void setKDualAction_ConnectNotify_Callback(KDualAction_ConnectNotify_Callback cb) { kdualaction_connectnotify_callback = cb; }
    inline void setKDualAction_DisconnectNotify_Callback(KDualAction_DisconnectNotify_Callback cb) { kdualaction_disconnectnotify_callback = cb; }
    inline void setKDualAction_Sender_Callback(KDualAction_Sender_Callback cb) { kdualaction_sender_callback = cb; }
    inline void setKDualAction_SenderSignalIndex_Callback(KDualAction_SenderSignalIndex_Callback cb) { kdualaction_sendersignalindex_callback = cb; }
    inline void setKDualAction_Receivers_Callback(KDualAction_Receivers_Callback cb) { kdualaction_receivers_callback = cb; }
    inline void setKDualAction_IsSignalConnected_Callback(KDualAction_IsSignalConnected_Callback cb) { kdualaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDualAction_Metacall_IsBase(bool value) const { kdualaction_metacall_isbase = value; }
    inline void setKDualAction_Event_IsBase(bool value) const { kdualaction_event_isbase = value; }
    inline void setKDualAction_EventFilter_IsBase(bool value) const { kdualaction_eventfilter_isbase = value; }
    inline void setKDualAction_TimerEvent_IsBase(bool value) const { kdualaction_timerevent_isbase = value; }
    inline void setKDualAction_ChildEvent_IsBase(bool value) const { kdualaction_childevent_isbase = value; }
    inline void setKDualAction_CustomEvent_IsBase(bool value) const { kdualaction_customevent_isbase = value; }
    inline void setKDualAction_ConnectNotify_IsBase(bool value) const { kdualaction_connectnotify_isbase = value; }
    inline void setKDualAction_DisconnectNotify_IsBase(bool value) const { kdualaction_disconnectnotify_isbase = value; }
    inline void setKDualAction_Sender_IsBase(bool value) const { kdualaction_sender_isbase = value; }
    inline void setKDualAction_SenderSignalIndex_IsBase(bool value) const { kdualaction_sendersignalindex_isbase = value; }
    inline void setKDualAction_Receivers_IsBase(bool value) const { kdualaction_receivers_isbase = value; }
    inline void setKDualAction_IsSignalConnected_IsBase(bool value) const { kdualaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdualaction_metacall_isbase) {
            kdualaction_metacall_isbase = false;
            return KDualAction::qt_metacall(param1, param2, param3);
        } else if (kdualaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdualaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDualAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kdualaction_event_isbase) {
            kdualaction_event_isbase = false;
            return KDualAction::event(param1);
        } else if (kdualaction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kdualaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDualAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdualaction_eventfilter_isbase) {
            kdualaction_eventfilter_isbase = false;
            return KDualAction::eventFilter(watched, event);
        } else if (kdualaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdualaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDualAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdualaction_timerevent_isbase) {
            kdualaction_timerevent_isbase = false;
            KDualAction::timerEvent(event);
        } else if (kdualaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdualaction_timerevent_callback(this, cbval1);
        } else {
            KDualAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdualaction_childevent_isbase) {
            kdualaction_childevent_isbase = false;
            KDualAction::childEvent(event);
        } else if (kdualaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdualaction_childevent_callback(this, cbval1);
        } else {
            KDualAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdualaction_customevent_isbase) {
            kdualaction_customevent_isbase = false;
            KDualAction::customEvent(event);
        } else if (kdualaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdualaction_customevent_callback(this, cbval1);
        } else {
            KDualAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdualaction_connectnotify_isbase) {
            kdualaction_connectnotify_isbase = false;
            KDualAction::connectNotify(signal);
        } else if (kdualaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdualaction_connectnotify_callback(this, cbval1);
        } else {
            KDualAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdualaction_disconnectnotify_isbase) {
            kdualaction_disconnectnotify_isbase = false;
            KDualAction::disconnectNotify(signal);
        } else if (kdualaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdualaction_disconnectnotify_callback(this, cbval1);
        } else {
            KDualAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdualaction_sender_isbase) {
            kdualaction_sender_isbase = false;
            return KDualAction::sender();
        } else if (kdualaction_sender_callback != nullptr) {
            QObject* callback_ret = kdualaction_sender_callback();
            return callback_ret;
        } else {
            return KDualAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdualaction_sendersignalindex_isbase) {
            kdualaction_sendersignalindex_isbase = false;
            return KDualAction::senderSignalIndex();
        } else if (kdualaction_sendersignalindex_callback != nullptr) {
            int callback_ret = kdualaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDualAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdualaction_receivers_isbase) {
            kdualaction_receivers_isbase = false;
            return KDualAction::receivers(signal);
        } else if (kdualaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdualaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDualAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdualaction_issignalconnected_isbase) {
            kdualaction_issignalconnected_isbase = false;
            return KDualAction::isSignalConnected(signal);
        } else if (kdualaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdualaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDualAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KDualAction_Event(KDualAction* self, QEvent* param1);
    friend bool KDualAction_QBaseEvent(KDualAction* self, QEvent* param1);
    friend void KDualAction_TimerEvent(KDualAction* self, QTimerEvent* event);
    friend void KDualAction_QBaseTimerEvent(KDualAction* self, QTimerEvent* event);
    friend void KDualAction_ChildEvent(KDualAction* self, QChildEvent* event);
    friend void KDualAction_QBaseChildEvent(KDualAction* self, QChildEvent* event);
    friend void KDualAction_CustomEvent(KDualAction* self, QEvent* event);
    friend void KDualAction_QBaseCustomEvent(KDualAction* self, QEvent* event);
    friend void KDualAction_ConnectNotify(KDualAction* self, const QMetaMethod* signal);
    friend void KDualAction_QBaseConnectNotify(KDualAction* self, const QMetaMethod* signal);
    friend void KDualAction_DisconnectNotify(KDualAction* self, const QMetaMethod* signal);
    friend void KDualAction_QBaseDisconnectNotify(KDualAction* self, const QMetaMethod* signal);
    friend QObject* KDualAction_Sender(const KDualAction* self);
    friend QObject* KDualAction_QBaseSender(const KDualAction* self);
    friend int KDualAction_SenderSignalIndex(const KDualAction* self);
    friend int KDualAction_QBaseSenderSignalIndex(const KDualAction* self);
    friend int KDualAction_Receivers(const KDualAction* self, const char* signal);
    friend int KDualAction_QBaseReceivers(const KDualAction* self, const char* signal);
    friend bool KDualAction_IsSignalConnected(const KDualAction* self, const QMetaMethod* signal);
    friend bool KDualAction_QBaseIsSignalConnected(const KDualAction* self, const QMetaMethod* signal);
};

#endif
