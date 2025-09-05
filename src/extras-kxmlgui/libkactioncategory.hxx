#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKACTIONCATEGORY_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKACTIONCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionCategory so that we can call protected methods
class VirtualKActionCategory final : public KActionCategory {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionCategory = true;

    // Virtual class public types (including callbacks)
    using KActionCategory_Metacall_Callback = int (*)(KActionCategory*, int, int, void**);
    using KActionCategory_Event_Callback = bool (*)(KActionCategory*, QEvent*);
    using KActionCategory_EventFilter_Callback = bool (*)(KActionCategory*, QObject*, QEvent*);
    using KActionCategory_TimerEvent_Callback = void (*)(KActionCategory*, QTimerEvent*);
    using KActionCategory_ChildEvent_Callback = void (*)(KActionCategory*, QChildEvent*);
    using KActionCategory_CustomEvent_Callback = void (*)(KActionCategory*, QEvent*);
    using KActionCategory_ConnectNotify_Callback = void (*)(KActionCategory*, QMetaMethod*);
    using KActionCategory_DisconnectNotify_Callback = void (*)(KActionCategory*, QMetaMethod*);
    using KActionCategory_Sender_Callback = QObject* (*)();
    using KActionCategory_SenderSignalIndex_Callback = int (*)();
    using KActionCategory_Receivers_Callback = int (*)(const KActionCategory*, const char*);
    using KActionCategory_IsSignalConnected_Callback = bool (*)(const KActionCategory*, QMetaMethod*);

  protected:
    // Instance callback storage
    KActionCategory_Metacall_Callback kactioncategory_metacall_callback = nullptr;
    KActionCategory_Event_Callback kactioncategory_event_callback = nullptr;
    KActionCategory_EventFilter_Callback kactioncategory_eventfilter_callback = nullptr;
    KActionCategory_TimerEvent_Callback kactioncategory_timerevent_callback = nullptr;
    KActionCategory_ChildEvent_Callback kactioncategory_childevent_callback = nullptr;
    KActionCategory_CustomEvent_Callback kactioncategory_customevent_callback = nullptr;
    KActionCategory_ConnectNotify_Callback kactioncategory_connectnotify_callback = nullptr;
    KActionCategory_DisconnectNotify_Callback kactioncategory_disconnectnotify_callback = nullptr;
    KActionCategory_Sender_Callback kactioncategory_sender_callback = nullptr;
    KActionCategory_SenderSignalIndex_Callback kactioncategory_sendersignalindex_callback = nullptr;
    KActionCategory_Receivers_Callback kactioncategory_receivers_callback = nullptr;
    KActionCategory_IsSignalConnected_Callback kactioncategory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kactioncategory_metacall_isbase = false;
    mutable bool kactioncategory_event_isbase = false;
    mutable bool kactioncategory_eventfilter_isbase = false;
    mutable bool kactioncategory_timerevent_isbase = false;
    mutable bool kactioncategory_childevent_isbase = false;
    mutable bool kactioncategory_customevent_isbase = false;
    mutable bool kactioncategory_connectnotify_isbase = false;
    mutable bool kactioncategory_disconnectnotify_isbase = false;
    mutable bool kactioncategory_sender_isbase = false;
    mutable bool kactioncategory_sendersignalindex_isbase = false;
    mutable bool kactioncategory_receivers_isbase = false;
    mutable bool kactioncategory_issignalconnected_isbase = false;

  public:
    VirtualKActionCategory(const QString& text) : KActionCategory(text) {};
    VirtualKActionCategory(const QString& text, KActionCollection* parent) : KActionCategory(text, parent) {};

    ~VirtualKActionCategory() {
        kactioncategory_metacall_callback = nullptr;
        kactioncategory_event_callback = nullptr;
        kactioncategory_eventfilter_callback = nullptr;
        kactioncategory_timerevent_callback = nullptr;
        kactioncategory_childevent_callback = nullptr;
        kactioncategory_customevent_callback = nullptr;
        kactioncategory_connectnotify_callback = nullptr;
        kactioncategory_disconnectnotify_callback = nullptr;
        kactioncategory_sender_callback = nullptr;
        kactioncategory_sendersignalindex_callback = nullptr;
        kactioncategory_receivers_callback = nullptr;
        kactioncategory_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKActionCategory_Metacall_Callback(KActionCategory_Metacall_Callback cb) { kactioncategory_metacall_callback = cb; }
    inline void setKActionCategory_Event_Callback(KActionCategory_Event_Callback cb) { kactioncategory_event_callback = cb; }
    inline void setKActionCategory_EventFilter_Callback(KActionCategory_EventFilter_Callback cb) { kactioncategory_eventfilter_callback = cb; }
    inline void setKActionCategory_TimerEvent_Callback(KActionCategory_TimerEvent_Callback cb) { kactioncategory_timerevent_callback = cb; }
    inline void setKActionCategory_ChildEvent_Callback(KActionCategory_ChildEvent_Callback cb) { kactioncategory_childevent_callback = cb; }
    inline void setKActionCategory_CustomEvent_Callback(KActionCategory_CustomEvent_Callback cb) { kactioncategory_customevent_callback = cb; }
    inline void setKActionCategory_ConnectNotify_Callback(KActionCategory_ConnectNotify_Callback cb) { kactioncategory_connectnotify_callback = cb; }
    inline void setKActionCategory_DisconnectNotify_Callback(KActionCategory_DisconnectNotify_Callback cb) { kactioncategory_disconnectnotify_callback = cb; }
    inline void setKActionCategory_Sender_Callback(KActionCategory_Sender_Callback cb) { kactioncategory_sender_callback = cb; }
    inline void setKActionCategory_SenderSignalIndex_Callback(KActionCategory_SenderSignalIndex_Callback cb) { kactioncategory_sendersignalindex_callback = cb; }
    inline void setKActionCategory_Receivers_Callback(KActionCategory_Receivers_Callback cb) { kactioncategory_receivers_callback = cb; }
    inline void setKActionCategory_IsSignalConnected_Callback(KActionCategory_IsSignalConnected_Callback cb) { kactioncategory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKActionCategory_Metacall_IsBase(bool value) const { kactioncategory_metacall_isbase = value; }
    inline void setKActionCategory_Event_IsBase(bool value) const { kactioncategory_event_isbase = value; }
    inline void setKActionCategory_EventFilter_IsBase(bool value) const { kactioncategory_eventfilter_isbase = value; }
    inline void setKActionCategory_TimerEvent_IsBase(bool value) const { kactioncategory_timerevent_isbase = value; }
    inline void setKActionCategory_ChildEvent_IsBase(bool value) const { kactioncategory_childevent_isbase = value; }
    inline void setKActionCategory_CustomEvent_IsBase(bool value) const { kactioncategory_customevent_isbase = value; }
    inline void setKActionCategory_ConnectNotify_IsBase(bool value) const { kactioncategory_connectnotify_isbase = value; }
    inline void setKActionCategory_DisconnectNotify_IsBase(bool value) const { kactioncategory_disconnectnotify_isbase = value; }
    inline void setKActionCategory_Sender_IsBase(bool value) const { kactioncategory_sender_isbase = value; }
    inline void setKActionCategory_SenderSignalIndex_IsBase(bool value) const { kactioncategory_sendersignalindex_isbase = value; }
    inline void setKActionCategory_Receivers_IsBase(bool value) const { kactioncategory_receivers_isbase = value; }
    inline void setKActionCategory_IsSignalConnected_IsBase(bool value) const { kactioncategory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactioncategory_metacall_isbase) {
            kactioncategory_metacall_isbase = false;
            return KActionCategory::qt_metacall(param1, param2, param3);
        } else if (kactioncategory_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kactioncategory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KActionCategory::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactioncategory_event_isbase) {
            kactioncategory_event_isbase = false;
            return KActionCategory::event(event);
        } else if (kactioncategory_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kactioncategory_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionCategory::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kactioncategory_eventfilter_isbase) {
            kactioncategory_eventfilter_isbase = false;
            return KActionCategory::eventFilter(watched, event);
        } else if (kactioncategory_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kactioncategory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KActionCategory::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactioncategory_timerevent_isbase) {
            kactioncategory_timerevent_isbase = false;
            KActionCategory::timerEvent(event);
        } else if (kactioncategory_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kactioncategory_timerevent_callback(this, cbval1);
        } else {
            KActionCategory::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactioncategory_childevent_isbase) {
            kactioncategory_childevent_isbase = false;
            KActionCategory::childEvent(event);
        } else if (kactioncategory_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kactioncategory_childevent_callback(this, cbval1);
        } else {
            KActionCategory::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactioncategory_customevent_isbase) {
            kactioncategory_customevent_isbase = false;
            KActionCategory::customEvent(event);
        } else if (kactioncategory_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kactioncategory_customevent_callback(this, cbval1);
        } else {
            KActionCategory::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactioncategory_connectnotify_isbase) {
            kactioncategory_connectnotify_isbase = false;
            KActionCategory::connectNotify(signal);
        } else if (kactioncategory_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactioncategory_connectnotify_callback(this, cbval1);
        } else {
            KActionCategory::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactioncategory_disconnectnotify_isbase) {
            kactioncategory_disconnectnotify_isbase = false;
            KActionCategory::disconnectNotify(signal);
        } else if (kactioncategory_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactioncategory_disconnectnotify_callback(this, cbval1);
        } else {
            KActionCategory::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactioncategory_sender_isbase) {
            kactioncategory_sender_isbase = false;
            return KActionCategory::sender();
        } else if (kactioncategory_sender_callback != nullptr) {
            QObject* callback_ret = kactioncategory_sender_callback();
            return callback_ret;
        } else {
            return KActionCategory::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactioncategory_sendersignalindex_isbase) {
            kactioncategory_sendersignalindex_isbase = false;
            return KActionCategory::senderSignalIndex();
        } else if (kactioncategory_sendersignalindex_callback != nullptr) {
            int callback_ret = kactioncategory_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KActionCategory::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactioncategory_receivers_isbase) {
            kactioncategory_receivers_isbase = false;
            return KActionCategory::receivers(signal);
        } else if (kactioncategory_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kactioncategory_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KActionCategory::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactioncategory_issignalconnected_isbase) {
            kactioncategory_issignalconnected_isbase = false;
            return KActionCategory::isSignalConnected(signal);
        } else if (kactioncategory_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kactioncategory_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionCategory::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KActionCategory_TimerEvent(KActionCategory* self, QTimerEvent* event);
    friend void KActionCategory_QBaseTimerEvent(KActionCategory* self, QTimerEvent* event);
    friend void KActionCategory_ChildEvent(KActionCategory* self, QChildEvent* event);
    friend void KActionCategory_QBaseChildEvent(KActionCategory* self, QChildEvent* event);
    friend void KActionCategory_CustomEvent(KActionCategory* self, QEvent* event);
    friend void KActionCategory_QBaseCustomEvent(KActionCategory* self, QEvent* event);
    friend void KActionCategory_ConnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_QBaseConnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_DisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_QBaseDisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend QObject* KActionCategory_Sender(const KActionCategory* self);
    friend QObject* KActionCategory_QBaseSender(const KActionCategory* self);
    friend int KActionCategory_SenderSignalIndex(const KActionCategory* self);
    friend int KActionCategory_QBaseSenderSignalIndex(const KActionCategory* self);
    friend int KActionCategory_Receivers(const KActionCategory* self, const char* signal);
    friend int KActionCategory_QBaseReceivers(const KActionCategory* self, const char* signal);
    friend bool KActionCategory_IsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
    friend bool KActionCategory_QBaseIsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
};

#endif
