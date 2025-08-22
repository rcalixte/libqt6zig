#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDQMLCONTEXT_H
#define SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDQMLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedQmlContext so that we can call protected methods
class VirtualKLocalizedQmlContext final : public KLocalizedQmlContext {

  public:
    // Virtual class boolean flag
    bool isVirtualKLocalizedQmlContext = true;

    // Virtual class public types (including callbacks)
    using KLocalizedQmlContext_Metacall_Callback = int (*)(KLocalizedQmlContext*, int, int, void**);
    using KLocalizedQmlContext_Event_Callback = bool (*)(KLocalizedQmlContext*, QEvent*);
    using KLocalizedQmlContext_TimerEvent_Callback = void (*)(KLocalizedQmlContext*, QTimerEvent*);
    using KLocalizedQmlContext_ChildEvent_Callback = void (*)(KLocalizedQmlContext*, QChildEvent*);
    using KLocalizedQmlContext_CustomEvent_Callback = void (*)(KLocalizedQmlContext*, QEvent*);
    using KLocalizedQmlContext_ConnectNotify_Callback = void (*)(KLocalizedQmlContext*, QMetaMethod*);
    using KLocalizedQmlContext_DisconnectNotify_Callback = void (*)(KLocalizedQmlContext*, QMetaMethod*);
    using KLocalizedQmlContext_Sender_Callback = QObject* (*)();
    using KLocalizedQmlContext_SenderSignalIndex_Callback = int (*)();
    using KLocalizedQmlContext_Receivers_Callback = int (*)(const KLocalizedQmlContext*, const char*);
    using KLocalizedQmlContext_IsSignalConnected_Callback = bool (*)(const KLocalizedQmlContext*, QMetaMethod*);

  protected:
    // Instance callback storage
    KLocalizedQmlContext_Metacall_Callback klocalizedqmlcontext_metacall_callback = nullptr;
    KLocalizedQmlContext_Event_Callback klocalizedqmlcontext_event_callback = nullptr;
    KLocalizedQmlContext_TimerEvent_Callback klocalizedqmlcontext_timerevent_callback = nullptr;
    KLocalizedQmlContext_ChildEvent_Callback klocalizedqmlcontext_childevent_callback = nullptr;
    KLocalizedQmlContext_CustomEvent_Callback klocalizedqmlcontext_customevent_callback = nullptr;
    KLocalizedQmlContext_ConnectNotify_Callback klocalizedqmlcontext_connectnotify_callback = nullptr;
    KLocalizedQmlContext_DisconnectNotify_Callback klocalizedqmlcontext_disconnectnotify_callback = nullptr;
    KLocalizedQmlContext_Sender_Callback klocalizedqmlcontext_sender_callback = nullptr;
    KLocalizedQmlContext_SenderSignalIndex_Callback klocalizedqmlcontext_sendersignalindex_callback = nullptr;
    KLocalizedQmlContext_Receivers_Callback klocalizedqmlcontext_receivers_callback = nullptr;
    KLocalizedQmlContext_IsSignalConnected_Callback klocalizedqmlcontext_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klocalizedqmlcontext_metacall_isbase = false;
    mutable bool klocalizedqmlcontext_event_isbase = false;
    mutable bool klocalizedqmlcontext_timerevent_isbase = false;
    mutable bool klocalizedqmlcontext_childevent_isbase = false;
    mutable bool klocalizedqmlcontext_customevent_isbase = false;
    mutable bool klocalizedqmlcontext_connectnotify_isbase = false;
    mutable bool klocalizedqmlcontext_disconnectnotify_isbase = false;
    mutable bool klocalizedqmlcontext_sender_isbase = false;
    mutable bool klocalizedqmlcontext_sendersignalindex_isbase = false;
    mutable bool klocalizedqmlcontext_receivers_isbase = false;
    mutable bool klocalizedqmlcontext_issignalconnected_isbase = false;

  public:
    VirtualKLocalizedQmlContext() : KLocalizedQmlContext() {};
    VirtualKLocalizedQmlContext(QObject* parent) : KLocalizedQmlContext(parent) {};

    ~VirtualKLocalizedQmlContext() {
        klocalizedqmlcontext_metacall_callback = nullptr;
        klocalizedqmlcontext_event_callback = nullptr;
        klocalizedqmlcontext_timerevent_callback = nullptr;
        klocalizedqmlcontext_childevent_callback = nullptr;
        klocalizedqmlcontext_customevent_callback = nullptr;
        klocalizedqmlcontext_connectnotify_callback = nullptr;
        klocalizedqmlcontext_disconnectnotify_callback = nullptr;
        klocalizedqmlcontext_sender_callback = nullptr;
        klocalizedqmlcontext_sendersignalindex_callback = nullptr;
        klocalizedqmlcontext_receivers_callback = nullptr;
        klocalizedqmlcontext_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKLocalizedQmlContext_Metacall_Callback(KLocalizedQmlContext_Metacall_Callback cb) { klocalizedqmlcontext_metacall_callback = cb; }
    inline void setKLocalizedQmlContext_Event_Callback(KLocalizedQmlContext_Event_Callback cb) { klocalizedqmlcontext_event_callback = cb; }
    inline void setKLocalizedQmlContext_TimerEvent_Callback(KLocalizedQmlContext_TimerEvent_Callback cb) { klocalizedqmlcontext_timerevent_callback = cb; }
    inline void setKLocalizedQmlContext_ChildEvent_Callback(KLocalizedQmlContext_ChildEvent_Callback cb) { klocalizedqmlcontext_childevent_callback = cb; }
    inline void setKLocalizedQmlContext_CustomEvent_Callback(KLocalizedQmlContext_CustomEvent_Callback cb) { klocalizedqmlcontext_customevent_callback = cb; }
    inline void setKLocalizedQmlContext_ConnectNotify_Callback(KLocalizedQmlContext_ConnectNotify_Callback cb) { klocalizedqmlcontext_connectnotify_callback = cb; }
    inline void setKLocalizedQmlContext_DisconnectNotify_Callback(KLocalizedQmlContext_DisconnectNotify_Callback cb) { klocalizedqmlcontext_disconnectnotify_callback = cb; }
    inline void setKLocalizedQmlContext_Sender_Callback(KLocalizedQmlContext_Sender_Callback cb) { klocalizedqmlcontext_sender_callback = cb; }
    inline void setKLocalizedQmlContext_SenderSignalIndex_Callback(KLocalizedQmlContext_SenderSignalIndex_Callback cb) { klocalizedqmlcontext_sendersignalindex_callback = cb; }
    inline void setKLocalizedQmlContext_Receivers_Callback(KLocalizedQmlContext_Receivers_Callback cb) { klocalizedqmlcontext_receivers_callback = cb; }
    inline void setKLocalizedQmlContext_IsSignalConnected_Callback(KLocalizedQmlContext_IsSignalConnected_Callback cb) { klocalizedqmlcontext_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKLocalizedQmlContext_Metacall_IsBase(bool value) const { klocalizedqmlcontext_metacall_isbase = value; }
    inline void setKLocalizedQmlContext_Event_IsBase(bool value) const { klocalizedqmlcontext_event_isbase = value; }
    inline void setKLocalizedQmlContext_TimerEvent_IsBase(bool value) const { klocalizedqmlcontext_timerevent_isbase = value; }
    inline void setKLocalizedQmlContext_ChildEvent_IsBase(bool value) const { klocalizedqmlcontext_childevent_isbase = value; }
    inline void setKLocalizedQmlContext_CustomEvent_IsBase(bool value) const { klocalizedqmlcontext_customevent_isbase = value; }
    inline void setKLocalizedQmlContext_ConnectNotify_IsBase(bool value) const { klocalizedqmlcontext_connectnotify_isbase = value; }
    inline void setKLocalizedQmlContext_DisconnectNotify_IsBase(bool value) const { klocalizedqmlcontext_disconnectnotify_isbase = value; }
    inline void setKLocalizedQmlContext_Sender_IsBase(bool value) const { klocalizedqmlcontext_sender_isbase = value; }
    inline void setKLocalizedQmlContext_SenderSignalIndex_IsBase(bool value) const { klocalizedqmlcontext_sendersignalindex_isbase = value; }
    inline void setKLocalizedQmlContext_Receivers_IsBase(bool value) const { klocalizedqmlcontext_receivers_isbase = value; }
    inline void setKLocalizedQmlContext_IsSignalConnected_IsBase(bool value) const { klocalizedqmlcontext_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedqmlcontext_metacall_isbase) {
            klocalizedqmlcontext_metacall_isbase = false;
            return KLocalizedQmlContext::qt_metacall(param1, param2, param3);
        } else if (klocalizedqmlcontext_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klocalizedqmlcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedQmlContext::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedqmlcontext_event_isbase) {
            klocalizedqmlcontext_event_isbase = false;
            return KLocalizedQmlContext::event(event);
        } else if (klocalizedqmlcontext_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klocalizedqmlcontext_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLocalizedQmlContext::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedqmlcontext_timerevent_isbase) {
            klocalizedqmlcontext_timerevent_isbase = false;
            KLocalizedQmlContext::timerEvent(event);
        } else if (klocalizedqmlcontext_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            klocalizedqmlcontext_timerevent_callback(this, cbval1);
        } else {
            KLocalizedQmlContext::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedqmlcontext_childevent_isbase) {
            klocalizedqmlcontext_childevent_isbase = false;
            KLocalizedQmlContext::childEvent(event);
        } else if (klocalizedqmlcontext_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klocalizedqmlcontext_childevent_callback(this, cbval1);
        } else {
            KLocalizedQmlContext::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedqmlcontext_customevent_isbase) {
            klocalizedqmlcontext_customevent_isbase = false;
            KLocalizedQmlContext::customEvent(event);
        } else if (klocalizedqmlcontext_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klocalizedqmlcontext_customevent_callback(this, cbval1);
        } else {
            KLocalizedQmlContext::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedqmlcontext_connectnotify_isbase) {
            klocalizedqmlcontext_connectnotify_isbase = false;
            KLocalizedQmlContext::connectNotify(signal);
        } else if (klocalizedqmlcontext_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klocalizedqmlcontext_connectnotify_callback(this, cbval1);
        } else {
            KLocalizedQmlContext::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedqmlcontext_disconnectnotify_isbase) {
            klocalizedqmlcontext_disconnectnotify_isbase = false;
            KLocalizedQmlContext::disconnectNotify(signal);
        } else if (klocalizedqmlcontext_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klocalizedqmlcontext_disconnectnotify_callback(this, cbval1);
        } else {
            KLocalizedQmlContext::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klocalizedqmlcontext_sender_isbase) {
            klocalizedqmlcontext_sender_isbase = false;
            return KLocalizedQmlContext::sender();
        } else if (klocalizedqmlcontext_sender_callback != nullptr) {
            QObject* callback_ret = klocalizedqmlcontext_sender_callback();
            return callback_ret;
        } else {
            return KLocalizedQmlContext::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klocalizedqmlcontext_sendersignalindex_isbase) {
            klocalizedqmlcontext_sendersignalindex_isbase = false;
            return KLocalizedQmlContext::senderSignalIndex();
        } else if (klocalizedqmlcontext_sendersignalindex_callback != nullptr) {
            int callback_ret = klocalizedqmlcontext_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedQmlContext::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klocalizedqmlcontext_receivers_isbase) {
            klocalizedqmlcontext_receivers_isbase = false;
            return KLocalizedQmlContext::receivers(signal);
        } else if (klocalizedqmlcontext_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klocalizedqmlcontext_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedQmlContext::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klocalizedqmlcontext_issignalconnected_isbase) {
            klocalizedqmlcontext_issignalconnected_isbase = false;
            return KLocalizedQmlContext::isSignalConnected(signal);
        } else if (klocalizedqmlcontext_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klocalizedqmlcontext_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLocalizedQmlContext::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KLocalizedQmlContext_TimerEvent(KLocalizedQmlContext* self, QTimerEvent* event);
    friend void KLocalizedQmlContext_QBaseTimerEvent(KLocalizedQmlContext* self, QTimerEvent* event);
    friend void KLocalizedQmlContext_ChildEvent(KLocalizedQmlContext* self, QChildEvent* event);
    friend void KLocalizedQmlContext_QBaseChildEvent(KLocalizedQmlContext* self, QChildEvent* event);
    friend void KLocalizedQmlContext_CustomEvent(KLocalizedQmlContext* self, QEvent* event);
    friend void KLocalizedQmlContext_QBaseCustomEvent(KLocalizedQmlContext* self, QEvent* event);
    friend void KLocalizedQmlContext_ConnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal);
    friend void KLocalizedQmlContext_QBaseConnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal);
    friend void KLocalizedQmlContext_DisconnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal);
    friend void KLocalizedQmlContext_QBaseDisconnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal);
    friend QObject* KLocalizedQmlContext_Sender(const KLocalizedQmlContext* self);
    friend QObject* KLocalizedQmlContext_QBaseSender(const KLocalizedQmlContext* self);
    friend int KLocalizedQmlContext_SenderSignalIndex(const KLocalizedQmlContext* self);
    friend int KLocalizedQmlContext_QBaseSenderSignalIndex(const KLocalizedQmlContext* self);
    friend int KLocalizedQmlContext_Receivers(const KLocalizedQmlContext* self, const char* signal);
    friend int KLocalizedQmlContext_QBaseReceivers(const KLocalizedQmlContext* self, const char* signal);
    friend bool KLocalizedQmlContext_IsSignalConnected(const KLocalizedQmlContext* self, const QMetaMethod* signal);
    friend bool KLocalizedQmlContext_QBaseIsSignalConnected(const KLocalizedQmlContext* self, const QMetaMethod* signal);
};

#endif
