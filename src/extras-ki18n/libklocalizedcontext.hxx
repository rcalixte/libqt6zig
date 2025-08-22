#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDCONTEXT_H
#define SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedContext so that we can call protected methods
class VirtualKLocalizedContext final : public KLocalizedContext {

  public:
    // Virtual class boolean flag
    bool isVirtualKLocalizedContext = true;

    // Virtual class public types (including callbacks)
    using KLocalizedContext_Metacall_Callback = int (*)(KLocalizedContext*, int, int, void**);
    using KLocalizedContext_Event_Callback = bool (*)(KLocalizedContext*, QEvent*);
    using KLocalizedContext_EventFilter_Callback = bool (*)(KLocalizedContext*, QObject*, QEvent*);
    using KLocalizedContext_TimerEvent_Callback = void (*)(KLocalizedContext*, QTimerEvent*);
    using KLocalizedContext_ChildEvent_Callback = void (*)(KLocalizedContext*, QChildEvent*);
    using KLocalizedContext_CustomEvent_Callback = void (*)(KLocalizedContext*, QEvent*);
    using KLocalizedContext_ConnectNotify_Callback = void (*)(KLocalizedContext*, QMetaMethod*);
    using KLocalizedContext_DisconnectNotify_Callback = void (*)(KLocalizedContext*, QMetaMethod*);
    using KLocalizedContext_Sender_Callback = QObject* (*)();
    using KLocalizedContext_SenderSignalIndex_Callback = int (*)();
    using KLocalizedContext_Receivers_Callback = int (*)(const KLocalizedContext*, const char*);
    using KLocalizedContext_IsSignalConnected_Callback = bool (*)(const KLocalizedContext*, QMetaMethod*);

  protected:
    // Instance callback storage
    KLocalizedContext_Metacall_Callback klocalizedcontext_metacall_callback = nullptr;
    KLocalizedContext_Event_Callback klocalizedcontext_event_callback = nullptr;
    KLocalizedContext_EventFilter_Callback klocalizedcontext_eventfilter_callback = nullptr;
    KLocalizedContext_TimerEvent_Callback klocalizedcontext_timerevent_callback = nullptr;
    KLocalizedContext_ChildEvent_Callback klocalizedcontext_childevent_callback = nullptr;
    KLocalizedContext_CustomEvent_Callback klocalizedcontext_customevent_callback = nullptr;
    KLocalizedContext_ConnectNotify_Callback klocalizedcontext_connectnotify_callback = nullptr;
    KLocalizedContext_DisconnectNotify_Callback klocalizedcontext_disconnectnotify_callback = nullptr;
    KLocalizedContext_Sender_Callback klocalizedcontext_sender_callback = nullptr;
    KLocalizedContext_SenderSignalIndex_Callback klocalizedcontext_sendersignalindex_callback = nullptr;
    KLocalizedContext_Receivers_Callback klocalizedcontext_receivers_callback = nullptr;
    KLocalizedContext_IsSignalConnected_Callback klocalizedcontext_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klocalizedcontext_metacall_isbase = false;
    mutable bool klocalizedcontext_event_isbase = false;
    mutable bool klocalizedcontext_eventfilter_isbase = false;
    mutable bool klocalizedcontext_timerevent_isbase = false;
    mutable bool klocalizedcontext_childevent_isbase = false;
    mutable bool klocalizedcontext_customevent_isbase = false;
    mutable bool klocalizedcontext_connectnotify_isbase = false;
    mutable bool klocalizedcontext_disconnectnotify_isbase = false;
    mutable bool klocalizedcontext_sender_isbase = false;
    mutable bool klocalizedcontext_sendersignalindex_isbase = false;
    mutable bool klocalizedcontext_receivers_isbase = false;
    mutable bool klocalizedcontext_issignalconnected_isbase = false;

  public:
    VirtualKLocalizedContext() : KLocalizedContext() {};
    VirtualKLocalizedContext(QObject* parent) : KLocalizedContext(parent) {};

    ~VirtualKLocalizedContext() {
        klocalizedcontext_metacall_callback = nullptr;
        klocalizedcontext_event_callback = nullptr;
        klocalizedcontext_eventfilter_callback = nullptr;
        klocalizedcontext_timerevent_callback = nullptr;
        klocalizedcontext_childevent_callback = nullptr;
        klocalizedcontext_customevent_callback = nullptr;
        klocalizedcontext_connectnotify_callback = nullptr;
        klocalizedcontext_disconnectnotify_callback = nullptr;
        klocalizedcontext_sender_callback = nullptr;
        klocalizedcontext_sendersignalindex_callback = nullptr;
        klocalizedcontext_receivers_callback = nullptr;
        klocalizedcontext_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKLocalizedContext_Metacall_Callback(KLocalizedContext_Metacall_Callback cb) { klocalizedcontext_metacall_callback = cb; }
    inline void setKLocalizedContext_Event_Callback(KLocalizedContext_Event_Callback cb) { klocalizedcontext_event_callback = cb; }
    inline void setKLocalizedContext_EventFilter_Callback(KLocalizedContext_EventFilter_Callback cb) { klocalizedcontext_eventfilter_callback = cb; }
    inline void setKLocalizedContext_TimerEvent_Callback(KLocalizedContext_TimerEvent_Callback cb) { klocalizedcontext_timerevent_callback = cb; }
    inline void setKLocalizedContext_ChildEvent_Callback(KLocalizedContext_ChildEvent_Callback cb) { klocalizedcontext_childevent_callback = cb; }
    inline void setKLocalizedContext_CustomEvent_Callback(KLocalizedContext_CustomEvent_Callback cb) { klocalizedcontext_customevent_callback = cb; }
    inline void setKLocalizedContext_ConnectNotify_Callback(KLocalizedContext_ConnectNotify_Callback cb) { klocalizedcontext_connectnotify_callback = cb; }
    inline void setKLocalizedContext_DisconnectNotify_Callback(KLocalizedContext_DisconnectNotify_Callback cb) { klocalizedcontext_disconnectnotify_callback = cb; }
    inline void setKLocalizedContext_Sender_Callback(KLocalizedContext_Sender_Callback cb) { klocalizedcontext_sender_callback = cb; }
    inline void setKLocalizedContext_SenderSignalIndex_Callback(KLocalizedContext_SenderSignalIndex_Callback cb) { klocalizedcontext_sendersignalindex_callback = cb; }
    inline void setKLocalizedContext_Receivers_Callback(KLocalizedContext_Receivers_Callback cb) { klocalizedcontext_receivers_callback = cb; }
    inline void setKLocalizedContext_IsSignalConnected_Callback(KLocalizedContext_IsSignalConnected_Callback cb) { klocalizedcontext_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKLocalizedContext_Metacall_IsBase(bool value) const { klocalizedcontext_metacall_isbase = value; }
    inline void setKLocalizedContext_Event_IsBase(bool value) const { klocalizedcontext_event_isbase = value; }
    inline void setKLocalizedContext_EventFilter_IsBase(bool value) const { klocalizedcontext_eventfilter_isbase = value; }
    inline void setKLocalizedContext_TimerEvent_IsBase(bool value) const { klocalizedcontext_timerevent_isbase = value; }
    inline void setKLocalizedContext_ChildEvent_IsBase(bool value) const { klocalizedcontext_childevent_isbase = value; }
    inline void setKLocalizedContext_CustomEvent_IsBase(bool value) const { klocalizedcontext_customevent_isbase = value; }
    inline void setKLocalizedContext_ConnectNotify_IsBase(bool value) const { klocalizedcontext_connectnotify_isbase = value; }
    inline void setKLocalizedContext_DisconnectNotify_IsBase(bool value) const { klocalizedcontext_disconnectnotify_isbase = value; }
    inline void setKLocalizedContext_Sender_IsBase(bool value) const { klocalizedcontext_sender_isbase = value; }
    inline void setKLocalizedContext_SenderSignalIndex_IsBase(bool value) const { klocalizedcontext_sendersignalindex_isbase = value; }
    inline void setKLocalizedContext_Receivers_IsBase(bool value) const { klocalizedcontext_receivers_isbase = value; }
    inline void setKLocalizedContext_IsSignalConnected_IsBase(bool value) const { klocalizedcontext_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedcontext_metacall_isbase) {
            klocalizedcontext_metacall_isbase = false;
            return KLocalizedContext::qt_metacall(param1, param2, param3);
        } else if (klocalizedcontext_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klocalizedcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedContext::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedcontext_event_isbase) {
            klocalizedcontext_event_isbase = false;
            return KLocalizedContext::event(event);
        } else if (klocalizedcontext_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klocalizedcontext_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLocalizedContext::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klocalizedcontext_eventfilter_isbase) {
            klocalizedcontext_eventfilter_isbase = false;
            return KLocalizedContext::eventFilter(watched, event);
        } else if (klocalizedcontext_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klocalizedcontext_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KLocalizedContext::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedcontext_timerevent_isbase) {
            klocalizedcontext_timerevent_isbase = false;
            KLocalizedContext::timerEvent(event);
        } else if (klocalizedcontext_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            klocalizedcontext_timerevent_callback(this, cbval1);
        } else {
            KLocalizedContext::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedcontext_childevent_isbase) {
            klocalizedcontext_childevent_isbase = false;
            KLocalizedContext::childEvent(event);
        } else if (klocalizedcontext_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klocalizedcontext_childevent_callback(this, cbval1);
        } else {
            KLocalizedContext::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedcontext_customevent_isbase) {
            klocalizedcontext_customevent_isbase = false;
            KLocalizedContext::customEvent(event);
        } else if (klocalizedcontext_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klocalizedcontext_customevent_callback(this, cbval1);
        } else {
            KLocalizedContext::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedcontext_connectnotify_isbase) {
            klocalizedcontext_connectnotify_isbase = false;
            KLocalizedContext::connectNotify(signal);
        } else if (klocalizedcontext_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klocalizedcontext_connectnotify_callback(this, cbval1);
        } else {
            KLocalizedContext::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedcontext_disconnectnotify_isbase) {
            klocalizedcontext_disconnectnotify_isbase = false;
            KLocalizedContext::disconnectNotify(signal);
        } else if (klocalizedcontext_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klocalizedcontext_disconnectnotify_callback(this, cbval1);
        } else {
            KLocalizedContext::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klocalizedcontext_sender_isbase) {
            klocalizedcontext_sender_isbase = false;
            return KLocalizedContext::sender();
        } else if (klocalizedcontext_sender_callback != nullptr) {
            QObject* callback_ret = klocalizedcontext_sender_callback();
            return callback_ret;
        } else {
            return KLocalizedContext::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klocalizedcontext_sendersignalindex_isbase) {
            klocalizedcontext_sendersignalindex_isbase = false;
            return KLocalizedContext::senderSignalIndex();
        } else if (klocalizedcontext_sendersignalindex_callback != nullptr) {
            int callback_ret = klocalizedcontext_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedContext::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klocalizedcontext_receivers_isbase) {
            klocalizedcontext_receivers_isbase = false;
            return KLocalizedContext::receivers(signal);
        } else if (klocalizedcontext_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klocalizedcontext_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedContext::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klocalizedcontext_issignalconnected_isbase) {
            klocalizedcontext_issignalconnected_isbase = false;
            return KLocalizedContext::isSignalConnected(signal);
        } else if (klocalizedcontext_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klocalizedcontext_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLocalizedContext::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KLocalizedContext_TimerEvent(KLocalizedContext* self, QTimerEvent* event);
    friend void KLocalizedContext_QBaseTimerEvent(KLocalizedContext* self, QTimerEvent* event);
    friend void KLocalizedContext_ChildEvent(KLocalizedContext* self, QChildEvent* event);
    friend void KLocalizedContext_QBaseChildEvent(KLocalizedContext* self, QChildEvent* event);
    friend void KLocalizedContext_CustomEvent(KLocalizedContext* self, QEvent* event);
    friend void KLocalizedContext_QBaseCustomEvent(KLocalizedContext* self, QEvent* event);
    friend void KLocalizedContext_ConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_QBaseConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_DisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend void KLocalizedContext_QBaseDisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
    friend QObject* KLocalizedContext_Sender(const KLocalizedContext* self);
    friend QObject* KLocalizedContext_QBaseSender(const KLocalizedContext* self);
    friend int KLocalizedContext_SenderSignalIndex(const KLocalizedContext* self);
    friend int KLocalizedContext_QBaseSenderSignalIndex(const KLocalizedContext* self);
    friend int KLocalizedContext_Receivers(const KLocalizedContext* self, const char* signal);
    friend int KLocalizedContext_QBaseReceivers(const KLocalizedContext* self, const char* signal);
    friend bool KLocalizedContext_IsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal);
    friend bool KLocalizedContext_QBaseIsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal);
};

#endif
