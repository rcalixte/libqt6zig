#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKTOGGLETOOLBARACTION_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKTOGGLETOOLBARACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToggleToolBarAction so that we can call protected methods
class VirtualKToggleToolBarAction final : public KToggleToolBarAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToggleToolBarAction = true;

    // Virtual class public types (including callbacks)
    using KToggleToolBarAction_Metacall_Callback = int (*)(KToggleToolBarAction*, int, int, void**);
    using KToggleToolBarAction_EventFilter_Callback = bool (*)(KToggleToolBarAction*, QObject*, QEvent*);
    using KToggleToolBarAction_Event_Callback = bool (*)(KToggleToolBarAction*, QEvent*);
    using KToggleToolBarAction_TimerEvent_Callback = void (*)(KToggleToolBarAction*, QTimerEvent*);
    using KToggleToolBarAction_ChildEvent_Callback = void (*)(KToggleToolBarAction*, QChildEvent*);
    using KToggleToolBarAction_CustomEvent_Callback = void (*)(KToggleToolBarAction*, QEvent*);
    using KToggleToolBarAction_ConnectNotify_Callback = void (*)(KToggleToolBarAction*, QMetaMethod*);
    using KToggleToolBarAction_DisconnectNotify_Callback = void (*)(KToggleToolBarAction*, QMetaMethod*);
    using KToggleToolBarAction_Sender_Callback = QObject* (*)();
    using KToggleToolBarAction_SenderSignalIndex_Callback = int (*)();
    using KToggleToolBarAction_Receivers_Callback = int (*)(const KToggleToolBarAction*, const char*);
    using KToggleToolBarAction_IsSignalConnected_Callback = bool (*)(const KToggleToolBarAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToggleToolBarAction_Metacall_Callback ktoggletoolbaraction_metacall_callback = nullptr;
    KToggleToolBarAction_EventFilter_Callback ktoggletoolbaraction_eventfilter_callback = nullptr;
    KToggleToolBarAction_Event_Callback ktoggletoolbaraction_event_callback = nullptr;
    KToggleToolBarAction_TimerEvent_Callback ktoggletoolbaraction_timerevent_callback = nullptr;
    KToggleToolBarAction_ChildEvent_Callback ktoggletoolbaraction_childevent_callback = nullptr;
    KToggleToolBarAction_CustomEvent_Callback ktoggletoolbaraction_customevent_callback = nullptr;
    KToggleToolBarAction_ConnectNotify_Callback ktoggletoolbaraction_connectnotify_callback = nullptr;
    KToggleToolBarAction_DisconnectNotify_Callback ktoggletoolbaraction_disconnectnotify_callback = nullptr;
    KToggleToolBarAction_Sender_Callback ktoggletoolbaraction_sender_callback = nullptr;
    KToggleToolBarAction_SenderSignalIndex_Callback ktoggletoolbaraction_sendersignalindex_callback = nullptr;
    KToggleToolBarAction_Receivers_Callback ktoggletoolbaraction_receivers_callback = nullptr;
    KToggleToolBarAction_IsSignalConnected_Callback ktoggletoolbaraction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktoggletoolbaraction_metacall_isbase = false;
    mutable bool ktoggletoolbaraction_eventfilter_isbase = false;
    mutable bool ktoggletoolbaraction_event_isbase = false;
    mutable bool ktoggletoolbaraction_timerevent_isbase = false;
    mutable bool ktoggletoolbaraction_childevent_isbase = false;
    mutable bool ktoggletoolbaraction_customevent_isbase = false;
    mutable bool ktoggletoolbaraction_connectnotify_isbase = false;
    mutable bool ktoggletoolbaraction_disconnectnotify_isbase = false;
    mutable bool ktoggletoolbaraction_sender_isbase = false;
    mutable bool ktoggletoolbaraction_sendersignalindex_isbase = false;
    mutable bool ktoggletoolbaraction_receivers_isbase = false;
    mutable bool ktoggletoolbaraction_issignalconnected_isbase = false;

  public:
    VirtualKToggleToolBarAction(KToolBar* toolBar, const QString& text, QObject* parent) : KToggleToolBarAction(toolBar, text, parent) {};

    ~VirtualKToggleToolBarAction() {
        ktoggletoolbaraction_metacall_callback = nullptr;
        ktoggletoolbaraction_eventfilter_callback = nullptr;
        ktoggletoolbaraction_event_callback = nullptr;
        ktoggletoolbaraction_timerevent_callback = nullptr;
        ktoggletoolbaraction_childevent_callback = nullptr;
        ktoggletoolbaraction_customevent_callback = nullptr;
        ktoggletoolbaraction_connectnotify_callback = nullptr;
        ktoggletoolbaraction_disconnectnotify_callback = nullptr;
        ktoggletoolbaraction_sender_callback = nullptr;
        ktoggletoolbaraction_sendersignalindex_callback = nullptr;
        ktoggletoolbaraction_receivers_callback = nullptr;
        ktoggletoolbaraction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKToggleToolBarAction_Metacall_Callback(KToggleToolBarAction_Metacall_Callback cb) { ktoggletoolbaraction_metacall_callback = cb; }
    inline void setKToggleToolBarAction_EventFilter_Callback(KToggleToolBarAction_EventFilter_Callback cb) { ktoggletoolbaraction_eventfilter_callback = cb; }
    inline void setKToggleToolBarAction_Event_Callback(KToggleToolBarAction_Event_Callback cb) { ktoggletoolbaraction_event_callback = cb; }
    inline void setKToggleToolBarAction_TimerEvent_Callback(KToggleToolBarAction_TimerEvent_Callback cb) { ktoggletoolbaraction_timerevent_callback = cb; }
    inline void setKToggleToolBarAction_ChildEvent_Callback(KToggleToolBarAction_ChildEvent_Callback cb) { ktoggletoolbaraction_childevent_callback = cb; }
    inline void setKToggleToolBarAction_CustomEvent_Callback(KToggleToolBarAction_CustomEvent_Callback cb) { ktoggletoolbaraction_customevent_callback = cb; }
    inline void setKToggleToolBarAction_ConnectNotify_Callback(KToggleToolBarAction_ConnectNotify_Callback cb) { ktoggletoolbaraction_connectnotify_callback = cb; }
    inline void setKToggleToolBarAction_DisconnectNotify_Callback(KToggleToolBarAction_DisconnectNotify_Callback cb) { ktoggletoolbaraction_disconnectnotify_callback = cb; }
    inline void setKToggleToolBarAction_Sender_Callback(KToggleToolBarAction_Sender_Callback cb) { ktoggletoolbaraction_sender_callback = cb; }
    inline void setKToggleToolBarAction_SenderSignalIndex_Callback(KToggleToolBarAction_SenderSignalIndex_Callback cb) { ktoggletoolbaraction_sendersignalindex_callback = cb; }
    inline void setKToggleToolBarAction_Receivers_Callback(KToggleToolBarAction_Receivers_Callback cb) { ktoggletoolbaraction_receivers_callback = cb; }
    inline void setKToggleToolBarAction_IsSignalConnected_Callback(KToggleToolBarAction_IsSignalConnected_Callback cb) { ktoggletoolbaraction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToggleToolBarAction_Metacall_IsBase(bool value) const { ktoggletoolbaraction_metacall_isbase = value; }
    inline void setKToggleToolBarAction_EventFilter_IsBase(bool value) const { ktoggletoolbaraction_eventfilter_isbase = value; }
    inline void setKToggleToolBarAction_Event_IsBase(bool value) const { ktoggletoolbaraction_event_isbase = value; }
    inline void setKToggleToolBarAction_TimerEvent_IsBase(bool value) const { ktoggletoolbaraction_timerevent_isbase = value; }
    inline void setKToggleToolBarAction_ChildEvent_IsBase(bool value) const { ktoggletoolbaraction_childevent_isbase = value; }
    inline void setKToggleToolBarAction_CustomEvent_IsBase(bool value) const { ktoggletoolbaraction_customevent_isbase = value; }
    inline void setKToggleToolBarAction_ConnectNotify_IsBase(bool value) const { ktoggletoolbaraction_connectnotify_isbase = value; }
    inline void setKToggleToolBarAction_DisconnectNotify_IsBase(bool value) const { ktoggletoolbaraction_disconnectnotify_isbase = value; }
    inline void setKToggleToolBarAction_Sender_IsBase(bool value) const { ktoggletoolbaraction_sender_isbase = value; }
    inline void setKToggleToolBarAction_SenderSignalIndex_IsBase(bool value) const { ktoggletoolbaraction_sendersignalindex_isbase = value; }
    inline void setKToggleToolBarAction_Receivers_IsBase(bool value) const { ktoggletoolbaraction_receivers_isbase = value; }
    inline void setKToggleToolBarAction_IsSignalConnected_IsBase(bool value) const { ktoggletoolbaraction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoggletoolbaraction_metacall_isbase) {
            ktoggletoolbaraction_metacall_isbase = false;
            return KToggleToolBarAction::qt_metacall(param1, param2, param3);
        } else if (ktoggletoolbaraction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktoggletoolbaraction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToggleToolBarAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoggletoolbaraction_eventfilter_isbase) {
            ktoggletoolbaraction_eventfilter_isbase = false;
            return KToggleToolBarAction::eventFilter(watched, event);
        } else if (ktoggletoolbaraction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktoggletoolbaraction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToggleToolBarAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoggletoolbaraction_event_isbase) {
            ktoggletoolbaraction_event_isbase = false;
            return KToggleToolBarAction::event(param1);
        } else if (ktoggletoolbaraction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktoggletoolbaraction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToggleToolBarAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoggletoolbaraction_timerevent_isbase) {
            ktoggletoolbaraction_timerevent_isbase = false;
            KToggleToolBarAction::timerEvent(event);
        } else if (ktoggletoolbaraction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktoggletoolbaraction_timerevent_callback(this, cbval1);
        } else {
            KToggleToolBarAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoggletoolbaraction_childevent_isbase) {
            ktoggletoolbaraction_childevent_isbase = false;
            KToggleToolBarAction::childEvent(event);
        } else if (ktoggletoolbaraction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktoggletoolbaraction_childevent_callback(this, cbval1);
        } else {
            KToggleToolBarAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoggletoolbaraction_customevent_isbase) {
            ktoggletoolbaraction_customevent_isbase = false;
            KToggleToolBarAction::customEvent(event);
        } else if (ktoggletoolbaraction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoggletoolbaraction_customevent_callback(this, cbval1);
        } else {
            KToggleToolBarAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoggletoolbaraction_connectnotify_isbase) {
            ktoggletoolbaraction_connectnotify_isbase = false;
            KToggleToolBarAction::connectNotify(signal);
        } else if (ktoggletoolbaraction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoggletoolbaraction_connectnotify_callback(this, cbval1);
        } else {
            KToggleToolBarAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoggletoolbaraction_disconnectnotify_isbase) {
            ktoggletoolbaraction_disconnectnotify_isbase = false;
            KToggleToolBarAction::disconnectNotify(signal);
        } else if (ktoggletoolbaraction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoggletoolbaraction_disconnectnotify_callback(this, cbval1);
        } else {
            KToggleToolBarAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoggletoolbaraction_sender_isbase) {
            ktoggletoolbaraction_sender_isbase = false;
            return KToggleToolBarAction::sender();
        } else if (ktoggletoolbaraction_sender_callback != nullptr) {
            QObject* callback_ret = ktoggletoolbaraction_sender_callback();
            return callback_ret;
        } else {
            return KToggleToolBarAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoggletoolbaraction_sendersignalindex_isbase) {
            ktoggletoolbaraction_sendersignalindex_isbase = false;
            return KToggleToolBarAction::senderSignalIndex();
        } else if (ktoggletoolbaraction_sendersignalindex_callback != nullptr) {
            int callback_ret = ktoggletoolbaraction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToggleToolBarAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoggletoolbaraction_receivers_isbase) {
            ktoggletoolbaraction_receivers_isbase = false;
            return KToggleToolBarAction::receivers(signal);
        } else if (ktoggletoolbaraction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktoggletoolbaraction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToggleToolBarAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoggletoolbaraction_issignalconnected_isbase) {
            ktoggletoolbaraction_issignalconnected_isbase = false;
            return KToggleToolBarAction::isSignalConnected(signal);
        } else if (ktoggletoolbaraction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktoggletoolbaraction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToggleToolBarAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KToggleToolBarAction_Event(KToggleToolBarAction* self, QEvent* param1);
    friend bool KToggleToolBarAction_QBaseEvent(KToggleToolBarAction* self, QEvent* param1);
    friend void KToggleToolBarAction_TimerEvent(KToggleToolBarAction* self, QTimerEvent* event);
    friend void KToggleToolBarAction_QBaseTimerEvent(KToggleToolBarAction* self, QTimerEvent* event);
    friend void KToggleToolBarAction_ChildEvent(KToggleToolBarAction* self, QChildEvent* event);
    friend void KToggleToolBarAction_QBaseChildEvent(KToggleToolBarAction* self, QChildEvent* event);
    friend void KToggleToolBarAction_CustomEvent(KToggleToolBarAction* self, QEvent* event);
    friend void KToggleToolBarAction_QBaseCustomEvent(KToggleToolBarAction* self, QEvent* event);
    friend void KToggleToolBarAction_ConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
    friend void KToggleToolBarAction_QBaseConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
    friend void KToggleToolBarAction_DisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
    friend void KToggleToolBarAction_QBaseDisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal);
    friend QObject* KToggleToolBarAction_Sender(const KToggleToolBarAction* self);
    friend QObject* KToggleToolBarAction_QBaseSender(const KToggleToolBarAction* self);
    friend int KToggleToolBarAction_SenderSignalIndex(const KToggleToolBarAction* self);
    friend int KToggleToolBarAction_QBaseSenderSignalIndex(const KToggleToolBarAction* self);
    friend int KToggleToolBarAction_Receivers(const KToggleToolBarAction* self, const char* signal);
    friend int KToggleToolBarAction_QBaseReceivers(const KToggleToolBarAction* self, const char* signal);
    friend bool KToggleToolBarAction_IsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal);
    friend bool KToggleToolBarAction_QBaseIsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal);
};

#endif
