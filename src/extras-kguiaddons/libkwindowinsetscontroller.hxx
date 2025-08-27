#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKWINDOWINSETSCONTROLLER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKWINDOWINSETSCONTROLLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowInsetsController so that we can call protected methods
class VirtualKWindowInsetsController final : public KWindowInsetsController {

  public:
    // Virtual class boolean flag
    bool isVirtualKWindowInsetsController = true;

    // Virtual class public types (including callbacks)
    using KWindowInsetsController_Metacall_Callback = int (*)(KWindowInsetsController*, int, int, void**);
    using KWindowInsetsController_Event_Callback = bool (*)(KWindowInsetsController*, QEvent*);
    using KWindowInsetsController_EventFilter_Callback = bool (*)(KWindowInsetsController*, QObject*, QEvent*);
    using KWindowInsetsController_TimerEvent_Callback = void (*)(KWindowInsetsController*, QTimerEvent*);
    using KWindowInsetsController_ChildEvent_Callback = void (*)(KWindowInsetsController*, QChildEvent*);
    using KWindowInsetsController_CustomEvent_Callback = void (*)(KWindowInsetsController*, QEvent*);
    using KWindowInsetsController_ConnectNotify_Callback = void (*)(KWindowInsetsController*, QMetaMethod*);
    using KWindowInsetsController_DisconnectNotify_Callback = void (*)(KWindowInsetsController*, QMetaMethod*);
    using KWindowInsetsController_Sender_Callback = QObject* (*)();
    using KWindowInsetsController_SenderSignalIndex_Callback = int (*)();
    using KWindowInsetsController_Receivers_Callback = int (*)(const KWindowInsetsController*, const char*);
    using KWindowInsetsController_IsSignalConnected_Callback = bool (*)(const KWindowInsetsController*, QMetaMethod*);

  protected:
    // Instance callback storage
    KWindowInsetsController_Metacall_Callback kwindowinsetscontroller_metacall_callback = nullptr;
    KWindowInsetsController_Event_Callback kwindowinsetscontroller_event_callback = nullptr;
    KWindowInsetsController_EventFilter_Callback kwindowinsetscontroller_eventfilter_callback = nullptr;
    KWindowInsetsController_TimerEvent_Callback kwindowinsetscontroller_timerevent_callback = nullptr;
    KWindowInsetsController_ChildEvent_Callback kwindowinsetscontroller_childevent_callback = nullptr;
    KWindowInsetsController_CustomEvent_Callback kwindowinsetscontroller_customevent_callback = nullptr;
    KWindowInsetsController_ConnectNotify_Callback kwindowinsetscontroller_connectnotify_callback = nullptr;
    KWindowInsetsController_DisconnectNotify_Callback kwindowinsetscontroller_disconnectnotify_callback = nullptr;
    KWindowInsetsController_Sender_Callback kwindowinsetscontroller_sender_callback = nullptr;
    KWindowInsetsController_SenderSignalIndex_Callback kwindowinsetscontroller_sendersignalindex_callback = nullptr;
    KWindowInsetsController_Receivers_Callback kwindowinsetscontroller_receivers_callback = nullptr;
    KWindowInsetsController_IsSignalConnected_Callback kwindowinsetscontroller_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwindowinsetscontroller_metacall_isbase = false;
    mutable bool kwindowinsetscontroller_event_isbase = false;
    mutable bool kwindowinsetscontroller_eventfilter_isbase = false;
    mutable bool kwindowinsetscontroller_timerevent_isbase = false;
    mutable bool kwindowinsetscontroller_childevent_isbase = false;
    mutable bool kwindowinsetscontroller_customevent_isbase = false;
    mutable bool kwindowinsetscontroller_connectnotify_isbase = false;
    mutable bool kwindowinsetscontroller_disconnectnotify_isbase = false;
    mutable bool kwindowinsetscontroller_sender_isbase = false;
    mutable bool kwindowinsetscontroller_sendersignalindex_isbase = false;
    mutable bool kwindowinsetscontroller_receivers_isbase = false;
    mutable bool kwindowinsetscontroller_issignalconnected_isbase = false;

  public:
    VirtualKWindowInsetsController() : KWindowInsetsController() {};
    VirtualKWindowInsetsController(QObject* parent) : KWindowInsetsController(parent) {};

    ~VirtualKWindowInsetsController() {
        kwindowinsetscontroller_metacall_callback = nullptr;
        kwindowinsetscontroller_event_callback = nullptr;
        kwindowinsetscontroller_eventfilter_callback = nullptr;
        kwindowinsetscontroller_timerevent_callback = nullptr;
        kwindowinsetscontroller_childevent_callback = nullptr;
        kwindowinsetscontroller_customevent_callback = nullptr;
        kwindowinsetscontroller_connectnotify_callback = nullptr;
        kwindowinsetscontroller_disconnectnotify_callback = nullptr;
        kwindowinsetscontroller_sender_callback = nullptr;
        kwindowinsetscontroller_sendersignalindex_callback = nullptr;
        kwindowinsetscontroller_receivers_callback = nullptr;
        kwindowinsetscontroller_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKWindowInsetsController_Metacall_Callback(KWindowInsetsController_Metacall_Callback cb) { kwindowinsetscontroller_metacall_callback = cb; }
    inline void setKWindowInsetsController_Event_Callback(KWindowInsetsController_Event_Callback cb) { kwindowinsetscontroller_event_callback = cb; }
    inline void setKWindowInsetsController_EventFilter_Callback(KWindowInsetsController_EventFilter_Callback cb) { kwindowinsetscontroller_eventfilter_callback = cb; }
    inline void setKWindowInsetsController_TimerEvent_Callback(KWindowInsetsController_TimerEvent_Callback cb) { kwindowinsetscontroller_timerevent_callback = cb; }
    inline void setKWindowInsetsController_ChildEvent_Callback(KWindowInsetsController_ChildEvent_Callback cb) { kwindowinsetscontroller_childevent_callback = cb; }
    inline void setKWindowInsetsController_CustomEvent_Callback(KWindowInsetsController_CustomEvent_Callback cb) { kwindowinsetscontroller_customevent_callback = cb; }
    inline void setKWindowInsetsController_ConnectNotify_Callback(KWindowInsetsController_ConnectNotify_Callback cb) { kwindowinsetscontroller_connectnotify_callback = cb; }
    inline void setKWindowInsetsController_DisconnectNotify_Callback(KWindowInsetsController_DisconnectNotify_Callback cb) { kwindowinsetscontroller_disconnectnotify_callback = cb; }
    inline void setKWindowInsetsController_Sender_Callback(KWindowInsetsController_Sender_Callback cb) { kwindowinsetscontroller_sender_callback = cb; }
    inline void setKWindowInsetsController_SenderSignalIndex_Callback(KWindowInsetsController_SenderSignalIndex_Callback cb) { kwindowinsetscontroller_sendersignalindex_callback = cb; }
    inline void setKWindowInsetsController_Receivers_Callback(KWindowInsetsController_Receivers_Callback cb) { kwindowinsetscontroller_receivers_callback = cb; }
    inline void setKWindowInsetsController_IsSignalConnected_Callback(KWindowInsetsController_IsSignalConnected_Callback cb) { kwindowinsetscontroller_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWindowInsetsController_Metacall_IsBase(bool value) const { kwindowinsetscontroller_metacall_isbase = value; }
    inline void setKWindowInsetsController_Event_IsBase(bool value) const { kwindowinsetscontroller_event_isbase = value; }
    inline void setKWindowInsetsController_EventFilter_IsBase(bool value) const { kwindowinsetscontroller_eventfilter_isbase = value; }
    inline void setKWindowInsetsController_TimerEvent_IsBase(bool value) const { kwindowinsetscontroller_timerevent_isbase = value; }
    inline void setKWindowInsetsController_ChildEvent_IsBase(bool value) const { kwindowinsetscontroller_childevent_isbase = value; }
    inline void setKWindowInsetsController_CustomEvent_IsBase(bool value) const { kwindowinsetscontroller_customevent_isbase = value; }
    inline void setKWindowInsetsController_ConnectNotify_IsBase(bool value) const { kwindowinsetscontroller_connectnotify_isbase = value; }
    inline void setKWindowInsetsController_DisconnectNotify_IsBase(bool value) const { kwindowinsetscontroller_disconnectnotify_isbase = value; }
    inline void setKWindowInsetsController_Sender_IsBase(bool value) const { kwindowinsetscontroller_sender_isbase = value; }
    inline void setKWindowInsetsController_SenderSignalIndex_IsBase(bool value) const { kwindowinsetscontroller_sendersignalindex_isbase = value; }
    inline void setKWindowInsetsController_Receivers_IsBase(bool value) const { kwindowinsetscontroller_receivers_isbase = value; }
    inline void setKWindowInsetsController_IsSignalConnected_IsBase(bool value) const { kwindowinsetscontroller_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowinsetscontroller_metacall_isbase) {
            kwindowinsetscontroller_metacall_isbase = false;
            return KWindowInsetsController::qt_metacall(param1, param2, param3);
        } else if (kwindowinsetscontroller_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kwindowinsetscontroller_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWindowInsetsController::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowinsetscontroller_event_isbase) {
            kwindowinsetscontroller_event_isbase = false;
            return KWindowInsetsController::event(event);
        } else if (kwindowinsetscontroller_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kwindowinsetscontroller_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWindowInsetsController::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwindowinsetscontroller_eventfilter_isbase) {
            kwindowinsetscontroller_eventfilter_isbase = false;
            return KWindowInsetsController::eventFilter(watched, event);
        } else if (kwindowinsetscontroller_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kwindowinsetscontroller_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KWindowInsetsController::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwindowinsetscontroller_timerevent_isbase) {
            kwindowinsetscontroller_timerevent_isbase = false;
            KWindowInsetsController::timerEvent(event);
        } else if (kwindowinsetscontroller_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kwindowinsetscontroller_timerevent_callback(this, cbval1);
        } else {
            KWindowInsetsController::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowinsetscontroller_childevent_isbase) {
            kwindowinsetscontroller_childevent_isbase = false;
            KWindowInsetsController::childEvent(event);
        } else if (kwindowinsetscontroller_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kwindowinsetscontroller_childevent_callback(this, cbval1);
        } else {
            KWindowInsetsController::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowinsetscontroller_customevent_isbase) {
            kwindowinsetscontroller_customevent_isbase = false;
            KWindowInsetsController::customEvent(event);
        } else if (kwindowinsetscontroller_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kwindowinsetscontroller_customevent_callback(this, cbval1);
        } else {
            KWindowInsetsController::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowinsetscontroller_connectnotify_isbase) {
            kwindowinsetscontroller_connectnotify_isbase = false;
            KWindowInsetsController::connectNotify(signal);
        } else if (kwindowinsetscontroller_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwindowinsetscontroller_connectnotify_callback(this, cbval1);
        } else {
            KWindowInsetsController::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowinsetscontroller_disconnectnotify_isbase) {
            kwindowinsetscontroller_disconnectnotify_isbase = false;
            KWindowInsetsController::disconnectNotify(signal);
        } else if (kwindowinsetscontroller_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwindowinsetscontroller_disconnectnotify_callback(this, cbval1);
        } else {
            KWindowInsetsController::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwindowinsetscontroller_sender_isbase) {
            kwindowinsetscontroller_sender_isbase = false;
            return KWindowInsetsController::sender();
        } else if (kwindowinsetscontroller_sender_callback != nullptr) {
            QObject* callback_ret = kwindowinsetscontroller_sender_callback();
            return callback_ret;
        } else {
            return KWindowInsetsController::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwindowinsetscontroller_sendersignalindex_isbase) {
            kwindowinsetscontroller_sendersignalindex_isbase = false;
            return KWindowInsetsController::senderSignalIndex();
        } else if (kwindowinsetscontroller_sendersignalindex_callback != nullptr) {
            int callback_ret = kwindowinsetscontroller_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KWindowInsetsController::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwindowinsetscontroller_receivers_isbase) {
            kwindowinsetscontroller_receivers_isbase = false;
            return KWindowInsetsController::receivers(signal);
        } else if (kwindowinsetscontroller_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kwindowinsetscontroller_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KWindowInsetsController::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwindowinsetscontroller_issignalconnected_isbase) {
            kwindowinsetscontroller_issignalconnected_isbase = false;
            return KWindowInsetsController::isSignalConnected(signal);
        } else if (kwindowinsetscontroller_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kwindowinsetscontroller_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWindowInsetsController::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KWindowInsetsController_TimerEvent(KWindowInsetsController* self, QTimerEvent* event);
    friend void KWindowInsetsController_QBaseTimerEvent(KWindowInsetsController* self, QTimerEvent* event);
    friend void KWindowInsetsController_ChildEvent(KWindowInsetsController* self, QChildEvent* event);
    friend void KWindowInsetsController_QBaseChildEvent(KWindowInsetsController* self, QChildEvent* event);
    friend void KWindowInsetsController_CustomEvent(KWindowInsetsController* self, QEvent* event);
    friend void KWindowInsetsController_QBaseCustomEvent(KWindowInsetsController* self, QEvent* event);
    friend void KWindowInsetsController_ConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_QBaseConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_DisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_QBaseDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend QObject* KWindowInsetsController_Sender(const KWindowInsetsController* self);
    friend QObject* KWindowInsetsController_QBaseSender(const KWindowInsetsController* self);
    friend int KWindowInsetsController_SenderSignalIndex(const KWindowInsetsController* self);
    friend int KWindowInsetsController_QBaseSenderSignalIndex(const KWindowInsetsController* self);
    friend int KWindowInsetsController_Receivers(const KWindowInsetsController* self, const char* signal);
    friend int KWindowInsetsController_QBaseReceivers(const KWindowInsetsController* self, const char* signal);
    friend bool KWindowInsetsController_IsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
    friend bool KWindowInsetsController_QBaseIsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
};

#endif
