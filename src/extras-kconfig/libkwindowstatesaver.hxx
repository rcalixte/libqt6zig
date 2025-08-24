#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKWINDOWSTATESAVER_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKWINDOWSTATESAVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowStateSaver so that we can call protected methods
class VirtualKWindowStateSaver final : public KWindowStateSaver {

  public:
    // Virtual class boolean flag
    bool isVirtualKWindowStateSaver = true;

    // Virtual class public types (including callbacks)
    using KWindowStateSaver_Metacall_Callback = int (*)(KWindowStateSaver*, int, int, void**);
    using KWindowStateSaver_Event_Callback = bool (*)(KWindowStateSaver*, QEvent*);
    using KWindowStateSaver_ChildEvent_Callback = void (*)(KWindowStateSaver*, QChildEvent*);
    using KWindowStateSaver_CustomEvent_Callback = void (*)(KWindowStateSaver*, QEvent*);
    using KWindowStateSaver_ConnectNotify_Callback = void (*)(KWindowStateSaver*, QMetaMethod*);
    using KWindowStateSaver_DisconnectNotify_Callback = void (*)(KWindowStateSaver*, QMetaMethod*);
    using KWindowStateSaver_Sender_Callback = QObject* (*)();
    using KWindowStateSaver_SenderSignalIndex_Callback = int (*)();
    using KWindowStateSaver_Receivers_Callback = int (*)(const KWindowStateSaver*, const char*);
    using KWindowStateSaver_IsSignalConnected_Callback = bool (*)(const KWindowStateSaver*, QMetaMethod*);

  protected:
    // Instance callback storage
    KWindowStateSaver_Metacall_Callback kwindowstatesaver_metacall_callback = nullptr;
    KWindowStateSaver_Event_Callback kwindowstatesaver_event_callback = nullptr;
    KWindowStateSaver_ChildEvent_Callback kwindowstatesaver_childevent_callback = nullptr;
    KWindowStateSaver_CustomEvent_Callback kwindowstatesaver_customevent_callback = nullptr;
    KWindowStateSaver_ConnectNotify_Callback kwindowstatesaver_connectnotify_callback = nullptr;
    KWindowStateSaver_DisconnectNotify_Callback kwindowstatesaver_disconnectnotify_callback = nullptr;
    KWindowStateSaver_Sender_Callback kwindowstatesaver_sender_callback = nullptr;
    KWindowStateSaver_SenderSignalIndex_Callback kwindowstatesaver_sendersignalindex_callback = nullptr;
    KWindowStateSaver_Receivers_Callback kwindowstatesaver_receivers_callback = nullptr;
    KWindowStateSaver_IsSignalConnected_Callback kwindowstatesaver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwindowstatesaver_metacall_isbase = false;
    mutable bool kwindowstatesaver_event_isbase = false;
    mutable bool kwindowstatesaver_childevent_isbase = false;
    mutable bool kwindowstatesaver_customevent_isbase = false;
    mutable bool kwindowstatesaver_connectnotify_isbase = false;
    mutable bool kwindowstatesaver_disconnectnotify_isbase = false;
    mutable bool kwindowstatesaver_sender_isbase = false;
    mutable bool kwindowstatesaver_sendersignalindex_isbase = false;
    mutable bool kwindowstatesaver_receivers_isbase = false;
    mutable bool kwindowstatesaver_issignalconnected_isbase = false;

  public:
    VirtualKWindowStateSaver(QWindow* window, const KConfigGroup& configGroup) : KWindowStateSaver(window, configGroup) {};
    VirtualKWindowStateSaver(QWindow* window, const QString& configGroupName) : KWindowStateSaver(window, configGroupName) {};

    ~VirtualKWindowStateSaver() {
        kwindowstatesaver_metacall_callback = nullptr;
        kwindowstatesaver_event_callback = nullptr;
        kwindowstatesaver_childevent_callback = nullptr;
        kwindowstatesaver_customevent_callback = nullptr;
        kwindowstatesaver_connectnotify_callback = nullptr;
        kwindowstatesaver_disconnectnotify_callback = nullptr;
        kwindowstatesaver_sender_callback = nullptr;
        kwindowstatesaver_sendersignalindex_callback = nullptr;
        kwindowstatesaver_receivers_callback = nullptr;
        kwindowstatesaver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKWindowStateSaver_Metacall_Callback(KWindowStateSaver_Metacall_Callback cb) { kwindowstatesaver_metacall_callback = cb; }
    inline void setKWindowStateSaver_Event_Callback(KWindowStateSaver_Event_Callback cb) { kwindowstatesaver_event_callback = cb; }
    inline void setKWindowStateSaver_ChildEvent_Callback(KWindowStateSaver_ChildEvent_Callback cb) { kwindowstatesaver_childevent_callback = cb; }
    inline void setKWindowStateSaver_CustomEvent_Callback(KWindowStateSaver_CustomEvent_Callback cb) { kwindowstatesaver_customevent_callback = cb; }
    inline void setKWindowStateSaver_ConnectNotify_Callback(KWindowStateSaver_ConnectNotify_Callback cb) { kwindowstatesaver_connectnotify_callback = cb; }
    inline void setKWindowStateSaver_DisconnectNotify_Callback(KWindowStateSaver_DisconnectNotify_Callback cb) { kwindowstatesaver_disconnectnotify_callback = cb; }
    inline void setKWindowStateSaver_Sender_Callback(KWindowStateSaver_Sender_Callback cb) { kwindowstatesaver_sender_callback = cb; }
    inline void setKWindowStateSaver_SenderSignalIndex_Callback(KWindowStateSaver_SenderSignalIndex_Callback cb) { kwindowstatesaver_sendersignalindex_callback = cb; }
    inline void setKWindowStateSaver_Receivers_Callback(KWindowStateSaver_Receivers_Callback cb) { kwindowstatesaver_receivers_callback = cb; }
    inline void setKWindowStateSaver_IsSignalConnected_Callback(KWindowStateSaver_IsSignalConnected_Callback cb) { kwindowstatesaver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWindowStateSaver_Metacall_IsBase(bool value) const { kwindowstatesaver_metacall_isbase = value; }
    inline void setKWindowStateSaver_Event_IsBase(bool value) const { kwindowstatesaver_event_isbase = value; }
    inline void setKWindowStateSaver_ChildEvent_IsBase(bool value) const { kwindowstatesaver_childevent_isbase = value; }
    inline void setKWindowStateSaver_CustomEvent_IsBase(bool value) const { kwindowstatesaver_customevent_isbase = value; }
    inline void setKWindowStateSaver_ConnectNotify_IsBase(bool value) const { kwindowstatesaver_connectnotify_isbase = value; }
    inline void setKWindowStateSaver_DisconnectNotify_IsBase(bool value) const { kwindowstatesaver_disconnectnotify_isbase = value; }
    inline void setKWindowStateSaver_Sender_IsBase(bool value) const { kwindowstatesaver_sender_isbase = value; }
    inline void setKWindowStateSaver_SenderSignalIndex_IsBase(bool value) const { kwindowstatesaver_sendersignalindex_isbase = value; }
    inline void setKWindowStateSaver_Receivers_IsBase(bool value) const { kwindowstatesaver_receivers_isbase = value; }
    inline void setKWindowStateSaver_IsSignalConnected_IsBase(bool value) const { kwindowstatesaver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowstatesaver_metacall_isbase) {
            kwindowstatesaver_metacall_isbase = false;
            return KWindowStateSaver::qt_metacall(param1, param2, param3);
        } else if (kwindowstatesaver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kwindowstatesaver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWindowStateSaver::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowstatesaver_event_isbase) {
            kwindowstatesaver_event_isbase = false;
            return KWindowStateSaver::event(event);
        } else if (kwindowstatesaver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kwindowstatesaver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWindowStateSaver::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowstatesaver_childevent_isbase) {
            kwindowstatesaver_childevent_isbase = false;
            KWindowStateSaver::childEvent(event);
        } else if (kwindowstatesaver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kwindowstatesaver_childevent_callback(this, cbval1);
        } else {
            KWindowStateSaver::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowstatesaver_customevent_isbase) {
            kwindowstatesaver_customevent_isbase = false;
            KWindowStateSaver::customEvent(event);
        } else if (kwindowstatesaver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kwindowstatesaver_customevent_callback(this, cbval1);
        } else {
            KWindowStateSaver::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowstatesaver_connectnotify_isbase) {
            kwindowstatesaver_connectnotify_isbase = false;
            KWindowStateSaver::connectNotify(signal);
        } else if (kwindowstatesaver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwindowstatesaver_connectnotify_callback(this, cbval1);
        } else {
            KWindowStateSaver::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowstatesaver_disconnectnotify_isbase) {
            kwindowstatesaver_disconnectnotify_isbase = false;
            KWindowStateSaver::disconnectNotify(signal);
        } else if (kwindowstatesaver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwindowstatesaver_disconnectnotify_callback(this, cbval1);
        } else {
            KWindowStateSaver::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwindowstatesaver_sender_isbase) {
            kwindowstatesaver_sender_isbase = false;
            return KWindowStateSaver::sender();
        } else if (kwindowstatesaver_sender_callback != nullptr) {
            QObject* callback_ret = kwindowstatesaver_sender_callback();
            return callback_ret;
        } else {
            return KWindowStateSaver::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwindowstatesaver_sendersignalindex_isbase) {
            kwindowstatesaver_sendersignalindex_isbase = false;
            return KWindowStateSaver::senderSignalIndex();
        } else if (kwindowstatesaver_sendersignalindex_callback != nullptr) {
            int callback_ret = kwindowstatesaver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KWindowStateSaver::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwindowstatesaver_receivers_isbase) {
            kwindowstatesaver_receivers_isbase = false;
            return KWindowStateSaver::receivers(signal);
        } else if (kwindowstatesaver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kwindowstatesaver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KWindowStateSaver::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwindowstatesaver_issignalconnected_isbase) {
            kwindowstatesaver_issignalconnected_isbase = false;
            return KWindowStateSaver::isSignalConnected(signal);
        } else if (kwindowstatesaver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kwindowstatesaver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWindowStateSaver::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KWindowStateSaver_ChildEvent(KWindowStateSaver* self, QChildEvent* event);
    friend void KWindowStateSaver_QBaseChildEvent(KWindowStateSaver* self, QChildEvent* event);
    friend void KWindowStateSaver_CustomEvent(KWindowStateSaver* self, QEvent* event);
    friend void KWindowStateSaver_QBaseCustomEvent(KWindowStateSaver* self, QEvent* event);
    friend void KWindowStateSaver_ConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_QBaseConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_DisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_QBaseDisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend QObject* KWindowStateSaver_Sender(const KWindowStateSaver* self);
    friend QObject* KWindowStateSaver_QBaseSender(const KWindowStateSaver* self);
    friend int KWindowStateSaver_SenderSignalIndex(const KWindowStateSaver* self);
    friend int KWindowStateSaver_QBaseSenderSignalIndex(const KWindowStateSaver* self);
    friend int KWindowStateSaver_Receivers(const KWindowStateSaver* self, const char* signal);
    friend int KWindowStateSaver_QBaseReceivers(const KWindowStateSaver* self, const char* signal);
    friend bool KWindowStateSaver_IsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal);
    friend bool KWindowStateSaver_QBaseIsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal);
};

#endif
