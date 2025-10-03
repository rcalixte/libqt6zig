#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALSTATUSBAREXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALSTATUSBAREXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::StatusBarExtension so that we can call protected methods
class VirtualKPartsStatusBarExtension final : public KParts::StatusBarExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsStatusBarExtension = true;

    // Virtual class public types (including callbacks)
    using KParts__StatusBarExtension_Metacall_Callback = int (*)(KParts__StatusBarExtension*, int, int, void**);
    using KParts__StatusBarExtension_EventFilter_Callback = bool (*)(KParts__StatusBarExtension*, QObject*, QEvent*);
    using KParts__StatusBarExtension_Event_Callback = bool (*)(KParts__StatusBarExtension*, QEvent*);
    using KParts__StatusBarExtension_TimerEvent_Callback = void (*)(KParts__StatusBarExtension*, QTimerEvent*);
    using KParts__StatusBarExtension_ChildEvent_Callback = void (*)(KParts__StatusBarExtension*, QChildEvent*);
    using KParts__StatusBarExtension_CustomEvent_Callback = void (*)(KParts__StatusBarExtension*, QEvent*);
    using KParts__StatusBarExtension_ConnectNotify_Callback = void (*)(KParts__StatusBarExtension*, QMetaMethod*);
    using KParts__StatusBarExtension_DisconnectNotify_Callback = void (*)(KParts__StatusBarExtension*, QMetaMethod*);
    using KParts__StatusBarExtension_Sender_Callback = QObject* (*)();
    using KParts__StatusBarExtension_SenderSignalIndex_Callback = int (*)();
    using KParts__StatusBarExtension_Receivers_Callback = int (*)(const KParts__StatusBarExtension*, const char*);
    using KParts__StatusBarExtension_IsSignalConnected_Callback = bool (*)(const KParts__StatusBarExtension*, QMetaMethod*);

  protected:
    // Instance callback storage
    KParts__StatusBarExtension_Metacall_Callback kparts__statusbarextension_metacall_callback = nullptr;
    KParts__StatusBarExtension_EventFilter_Callback kparts__statusbarextension_eventfilter_callback = nullptr;
    KParts__StatusBarExtension_Event_Callback kparts__statusbarextension_event_callback = nullptr;
    KParts__StatusBarExtension_TimerEvent_Callback kparts__statusbarextension_timerevent_callback = nullptr;
    KParts__StatusBarExtension_ChildEvent_Callback kparts__statusbarextension_childevent_callback = nullptr;
    KParts__StatusBarExtension_CustomEvent_Callback kparts__statusbarextension_customevent_callback = nullptr;
    KParts__StatusBarExtension_ConnectNotify_Callback kparts__statusbarextension_connectnotify_callback = nullptr;
    KParts__StatusBarExtension_DisconnectNotify_Callback kparts__statusbarextension_disconnectnotify_callback = nullptr;
    KParts__StatusBarExtension_Sender_Callback kparts__statusbarextension_sender_callback = nullptr;
    KParts__StatusBarExtension_SenderSignalIndex_Callback kparts__statusbarextension_sendersignalindex_callback = nullptr;
    KParts__StatusBarExtension_Receivers_Callback kparts__statusbarextension_receivers_callback = nullptr;
    KParts__StatusBarExtension_IsSignalConnected_Callback kparts__statusbarextension_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kparts__statusbarextension_metacall_isbase = false;
    mutable bool kparts__statusbarextension_eventfilter_isbase = false;
    mutable bool kparts__statusbarextension_event_isbase = false;
    mutable bool kparts__statusbarextension_timerevent_isbase = false;
    mutable bool kparts__statusbarextension_childevent_isbase = false;
    mutable bool kparts__statusbarextension_customevent_isbase = false;
    mutable bool kparts__statusbarextension_connectnotify_isbase = false;
    mutable bool kparts__statusbarextension_disconnectnotify_isbase = false;
    mutable bool kparts__statusbarextension_sender_isbase = false;
    mutable bool kparts__statusbarextension_sendersignalindex_isbase = false;
    mutable bool kparts__statusbarextension_receivers_isbase = false;
    mutable bool kparts__statusbarextension_issignalconnected_isbase = false;

  public:
    VirtualKPartsStatusBarExtension(KParts::Part* parent) : KParts::StatusBarExtension(parent) {};
    VirtualKPartsStatusBarExtension(KParts::ReadOnlyPart* parent) : KParts::StatusBarExtension(parent) {};

    ~VirtualKPartsStatusBarExtension() {
        kparts__statusbarextension_metacall_callback = nullptr;
        kparts__statusbarextension_eventfilter_callback = nullptr;
        kparts__statusbarextension_event_callback = nullptr;
        kparts__statusbarextension_timerevent_callback = nullptr;
        kparts__statusbarextension_childevent_callback = nullptr;
        kparts__statusbarextension_customevent_callback = nullptr;
        kparts__statusbarextension_connectnotify_callback = nullptr;
        kparts__statusbarextension_disconnectnotify_callback = nullptr;
        kparts__statusbarextension_sender_callback = nullptr;
        kparts__statusbarextension_sendersignalindex_callback = nullptr;
        kparts__statusbarextension_receivers_callback = nullptr;
        kparts__statusbarextension_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__StatusBarExtension_Metacall_Callback(KParts__StatusBarExtension_Metacall_Callback cb) { kparts__statusbarextension_metacall_callback = cb; }
    inline void setKParts__StatusBarExtension_EventFilter_Callback(KParts__StatusBarExtension_EventFilter_Callback cb) { kparts__statusbarextension_eventfilter_callback = cb; }
    inline void setKParts__StatusBarExtension_Event_Callback(KParts__StatusBarExtension_Event_Callback cb) { kparts__statusbarextension_event_callback = cb; }
    inline void setKParts__StatusBarExtension_TimerEvent_Callback(KParts__StatusBarExtension_TimerEvent_Callback cb) { kparts__statusbarextension_timerevent_callback = cb; }
    inline void setKParts__StatusBarExtension_ChildEvent_Callback(KParts__StatusBarExtension_ChildEvent_Callback cb) { kparts__statusbarextension_childevent_callback = cb; }
    inline void setKParts__StatusBarExtension_CustomEvent_Callback(KParts__StatusBarExtension_CustomEvent_Callback cb) { kparts__statusbarextension_customevent_callback = cb; }
    inline void setKParts__StatusBarExtension_ConnectNotify_Callback(KParts__StatusBarExtension_ConnectNotify_Callback cb) { kparts__statusbarextension_connectnotify_callback = cb; }
    inline void setKParts__StatusBarExtension_DisconnectNotify_Callback(KParts__StatusBarExtension_DisconnectNotify_Callback cb) { kparts__statusbarextension_disconnectnotify_callback = cb; }
    inline void setKParts__StatusBarExtension_Sender_Callback(KParts__StatusBarExtension_Sender_Callback cb) { kparts__statusbarextension_sender_callback = cb; }
    inline void setKParts__StatusBarExtension_SenderSignalIndex_Callback(KParts__StatusBarExtension_SenderSignalIndex_Callback cb) { kparts__statusbarextension_sendersignalindex_callback = cb; }
    inline void setKParts__StatusBarExtension_Receivers_Callback(KParts__StatusBarExtension_Receivers_Callback cb) { kparts__statusbarextension_receivers_callback = cb; }
    inline void setKParts__StatusBarExtension_IsSignalConnected_Callback(KParts__StatusBarExtension_IsSignalConnected_Callback cb) { kparts__statusbarextension_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKParts__StatusBarExtension_Metacall_IsBase(bool value) const { kparts__statusbarextension_metacall_isbase = value; }
    inline void setKParts__StatusBarExtension_EventFilter_IsBase(bool value) const { kparts__statusbarextension_eventfilter_isbase = value; }
    inline void setKParts__StatusBarExtension_Event_IsBase(bool value) const { kparts__statusbarextension_event_isbase = value; }
    inline void setKParts__StatusBarExtension_TimerEvent_IsBase(bool value) const { kparts__statusbarextension_timerevent_isbase = value; }
    inline void setKParts__StatusBarExtension_ChildEvent_IsBase(bool value) const { kparts__statusbarextension_childevent_isbase = value; }
    inline void setKParts__StatusBarExtension_CustomEvent_IsBase(bool value) const { kparts__statusbarextension_customevent_isbase = value; }
    inline void setKParts__StatusBarExtension_ConnectNotify_IsBase(bool value) const { kparts__statusbarextension_connectnotify_isbase = value; }
    inline void setKParts__StatusBarExtension_DisconnectNotify_IsBase(bool value) const { kparts__statusbarextension_disconnectnotify_isbase = value; }
    inline void setKParts__StatusBarExtension_Sender_IsBase(bool value) const { kparts__statusbarextension_sender_isbase = value; }
    inline void setKParts__StatusBarExtension_SenderSignalIndex_IsBase(bool value) const { kparts__statusbarextension_sendersignalindex_isbase = value; }
    inline void setKParts__StatusBarExtension_Receivers_IsBase(bool value) const { kparts__statusbarextension_receivers_isbase = value; }
    inline void setKParts__StatusBarExtension_IsSignalConnected_IsBase(bool value) const { kparts__statusbarextension_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__statusbarextension_metacall_isbase) {
            kparts__statusbarextension_metacall_isbase = false;
            return KParts__StatusBarExtension::qt_metacall(param1, param2, param3);
        } else if (kparts__statusbarextension_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__statusbarextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__StatusBarExtension::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* ev) override {
        if (kparts__statusbarextension_eventfilter_isbase) {
            kparts__statusbarextension_eventfilter_isbase = false;
            return KParts__StatusBarExtension::eventFilter(watched, ev);
        } else if (kparts__statusbarextension_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = ev;

            bool callback_ret = kparts__statusbarextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__StatusBarExtension::eventFilter(watched, ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__statusbarextension_event_isbase) {
            kparts__statusbarextension_event_isbase = false;
            return KParts__StatusBarExtension::event(event);
        } else if (kparts__statusbarextension_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__statusbarextension_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__StatusBarExtension::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__statusbarextension_timerevent_isbase) {
            kparts__statusbarextension_timerevent_isbase = false;
            KParts__StatusBarExtension::timerEvent(event);
        } else if (kparts__statusbarextension_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__statusbarextension_timerevent_callback(this, cbval1);
        } else {
            KParts__StatusBarExtension::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__statusbarextension_childevent_isbase) {
            kparts__statusbarextension_childevent_isbase = false;
            KParts__StatusBarExtension::childEvent(event);
        } else if (kparts__statusbarextension_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__statusbarextension_childevent_callback(this, cbval1);
        } else {
            KParts__StatusBarExtension::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__statusbarextension_customevent_isbase) {
            kparts__statusbarextension_customevent_isbase = false;
            KParts__StatusBarExtension::customEvent(event);
        } else if (kparts__statusbarextension_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__statusbarextension_customevent_callback(this, cbval1);
        } else {
            KParts__StatusBarExtension::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__statusbarextension_connectnotify_isbase) {
            kparts__statusbarextension_connectnotify_isbase = false;
            KParts__StatusBarExtension::connectNotify(signal);
        } else if (kparts__statusbarextension_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__statusbarextension_connectnotify_callback(this, cbval1);
        } else {
            KParts__StatusBarExtension::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__statusbarextension_disconnectnotify_isbase) {
            kparts__statusbarextension_disconnectnotify_isbase = false;
            KParts__StatusBarExtension::disconnectNotify(signal);
        } else if (kparts__statusbarextension_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__statusbarextension_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__StatusBarExtension::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__statusbarextension_sender_isbase) {
            kparts__statusbarextension_sender_isbase = false;
            return KParts__StatusBarExtension::sender();
        } else if (kparts__statusbarextension_sender_callback != nullptr) {
            QObject* callback_ret = kparts__statusbarextension_sender_callback();
            return callback_ret;
        } else {
            return KParts__StatusBarExtension::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__statusbarextension_sendersignalindex_isbase) {
            kparts__statusbarextension_sendersignalindex_isbase = false;
            return KParts__StatusBarExtension::senderSignalIndex();
        } else if (kparts__statusbarextension_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__statusbarextension_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__StatusBarExtension::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__statusbarextension_receivers_isbase) {
            kparts__statusbarextension_receivers_isbase = false;
            return KParts__StatusBarExtension::receivers(signal);
        } else if (kparts__statusbarextension_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__statusbarextension_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__StatusBarExtension::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__statusbarextension_issignalconnected_isbase) {
            kparts__statusbarextension_issignalconnected_isbase = false;
            return KParts__StatusBarExtension::isSignalConnected(signal);
        } else if (kparts__statusbarextension_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__statusbarextension_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__StatusBarExtension::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KParts__StatusBarExtension_TimerEvent(KParts::StatusBarExtension* self, QTimerEvent* event);
    friend void KParts__StatusBarExtension_QBaseTimerEvent(KParts::StatusBarExtension* self, QTimerEvent* event);
    friend void KParts__StatusBarExtension_ChildEvent(KParts::StatusBarExtension* self, QChildEvent* event);
    friend void KParts__StatusBarExtension_QBaseChildEvent(KParts::StatusBarExtension* self, QChildEvent* event);
    friend void KParts__StatusBarExtension_CustomEvent(KParts::StatusBarExtension* self, QEvent* event);
    friend void KParts__StatusBarExtension_QBaseCustomEvent(KParts::StatusBarExtension* self, QEvent* event);
    friend void KParts__StatusBarExtension_ConnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_QBaseConnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_DisconnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_QBaseDisconnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend QObject* KParts__StatusBarExtension_Sender(const KParts::StatusBarExtension* self);
    friend QObject* KParts__StatusBarExtension_QBaseSender(const KParts::StatusBarExtension* self);
    friend int KParts__StatusBarExtension_SenderSignalIndex(const KParts::StatusBarExtension* self);
    friend int KParts__StatusBarExtension_QBaseSenderSignalIndex(const KParts::StatusBarExtension* self);
    friend int KParts__StatusBarExtension_Receivers(const KParts::StatusBarExtension* self, const char* signal);
    friend int KParts__StatusBarExtension_QBaseReceivers(const KParts::StatusBarExtension* self, const char* signal);
    friend bool KParts__StatusBarExtension_IsSignalConnected(const KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend bool KParts__StatusBarExtension_QBaseIsSignalConnected(const KParts::StatusBarExtension* self, const QMetaMethod* signal);
};

#endif
