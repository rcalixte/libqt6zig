#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLUMNRESIZER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLUMNRESIZER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColumnResizer so that we can call protected methods
class VirtualKColumnResizer final : public KColumnResizer {

  public:
    // Virtual class boolean flag
    bool isVirtualKColumnResizer = true;

    // Virtual class public types (including callbacks)
    using KColumnResizer_Metacall_Callback = int (*)(KColumnResizer*, int, int, void**);
    using KColumnResizer_EventFilter_Callback = bool (*)(KColumnResizer*, QObject*, QEvent*);
    using KColumnResizer_Event_Callback = bool (*)(KColumnResizer*, QEvent*);
    using KColumnResizer_TimerEvent_Callback = void (*)(KColumnResizer*, QTimerEvent*);
    using KColumnResizer_ChildEvent_Callback = void (*)(KColumnResizer*, QChildEvent*);
    using KColumnResizer_CustomEvent_Callback = void (*)(KColumnResizer*, QEvent*);
    using KColumnResizer_ConnectNotify_Callback = void (*)(KColumnResizer*, QMetaMethod*);
    using KColumnResizer_DisconnectNotify_Callback = void (*)(KColumnResizer*, QMetaMethod*);
    using KColumnResizer_Sender_Callback = QObject* (*)();
    using KColumnResizer_SenderSignalIndex_Callback = int (*)();
    using KColumnResizer_Receivers_Callback = int (*)(const KColumnResizer*, const char*);
    using KColumnResizer_IsSignalConnected_Callback = bool (*)(const KColumnResizer*, QMetaMethod*);

  protected:
    // Instance callback storage
    KColumnResizer_Metacall_Callback kcolumnresizer_metacall_callback = nullptr;
    KColumnResizer_EventFilter_Callback kcolumnresizer_eventfilter_callback = nullptr;
    KColumnResizer_Event_Callback kcolumnresizer_event_callback = nullptr;
    KColumnResizer_TimerEvent_Callback kcolumnresizer_timerevent_callback = nullptr;
    KColumnResizer_ChildEvent_Callback kcolumnresizer_childevent_callback = nullptr;
    KColumnResizer_CustomEvent_Callback kcolumnresizer_customevent_callback = nullptr;
    KColumnResizer_ConnectNotify_Callback kcolumnresizer_connectnotify_callback = nullptr;
    KColumnResizer_DisconnectNotify_Callback kcolumnresizer_disconnectnotify_callback = nullptr;
    KColumnResizer_Sender_Callback kcolumnresizer_sender_callback = nullptr;
    KColumnResizer_SenderSignalIndex_Callback kcolumnresizer_sendersignalindex_callback = nullptr;
    KColumnResizer_Receivers_Callback kcolumnresizer_receivers_callback = nullptr;
    KColumnResizer_IsSignalConnected_Callback kcolumnresizer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcolumnresizer_metacall_isbase = false;
    mutable bool kcolumnresizer_eventfilter_isbase = false;
    mutable bool kcolumnresizer_event_isbase = false;
    mutable bool kcolumnresizer_timerevent_isbase = false;
    mutable bool kcolumnresizer_childevent_isbase = false;
    mutable bool kcolumnresizer_customevent_isbase = false;
    mutable bool kcolumnresizer_connectnotify_isbase = false;
    mutable bool kcolumnresizer_disconnectnotify_isbase = false;
    mutable bool kcolumnresizer_sender_isbase = false;
    mutable bool kcolumnresizer_sendersignalindex_isbase = false;
    mutable bool kcolumnresizer_receivers_isbase = false;
    mutable bool kcolumnresizer_issignalconnected_isbase = false;

  public:
    VirtualKColumnResizer() : KColumnResizer() {};
    VirtualKColumnResizer(QObject* parent) : KColumnResizer(parent) {};

    ~VirtualKColumnResizer() {
        kcolumnresizer_metacall_callback = nullptr;
        kcolumnresizer_eventfilter_callback = nullptr;
        kcolumnresizer_event_callback = nullptr;
        kcolumnresizer_timerevent_callback = nullptr;
        kcolumnresizer_childevent_callback = nullptr;
        kcolumnresizer_customevent_callback = nullptr;
        kcolumnresizer_connectnotify_callback = nullptr;
        kcolumnresizer_disconnectnotify_callback = nullptr;
        kcolumnresizer_sender_callback = nullptr;
        kcolumnresizer_sendersignalindex_callback = nullptr;
        kcolumnresizer_receivers_callback = nullptr;
        kcolumnresizer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKColumnResizer_Metacall_Callback(KColumnResizer_Metacall_Callback cb) { kcolumnresizer_metacall_callback = cb; }
    inline void setKColumnResizer_EventFilter_Callback(KColumnResizer_EventFilter_Callback cb) { kcolumnresizer_eventfilter_callback = cb; }
    inline void setKColumnResizer_Event_Callback(KColumnResizer_Event_Callback cb) { kcolumnresizer_event_callback = cb; }
    inline void setKColumnResizer_TimerEvent_Callback(KColumnResizer_TimerEvent_Callback cb) { kcolumnresizer_timerevent_callback = cb; }
    inline void setKColumnResizer_ChildEvent_Callback(KColumnResizer_ChildEvent_Callback cb) { kcolumnresizer_childevent_callback = cb; }
    inline void setKColumnResizer_CustomEvent_Callback(KColumnResizer_CustomEvent_Callback cb) { kcolumnresizer_customevent_callback = cb; }
    inline void setKColumnResizer_ConnectNotify_Callback(KColumnResizer_ConnectNotify_Callback cb) { kcolumnresizer_connectnotify_callback = cb; }
    inline void setKColumnResizer_DisconnectNotify_Callback(KColumnResizer_DisconnectNotify_Callback cb) { kcolumnresizer_disconnectnotify_callback = cb; }
    inline void setKColumnResizer_Sender_Callback(KColumnResizer_Sender_Callback cb) { kcolumnresizer_sender_callback = cb; }
    inline void setKColumnResizer_SenderSignalIndex_Callback(KColumnResizer_SenderSignalIndex_Callback cb) { kcolumnresizer_sendersignalindex_callback = cb; }
    inline void setKColumnResizer_Receivers_Callback(KColumnResizer_Receivers_Callback cb) { kcolumnresizer_receivers_callback = cb; }
    inline void setKColumnResizer_IsSignalConnected_Callback(KColumnResizer_IsSignalConnected_Callback cb) { kcolumnresizer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKColumnResizer_Metacall_IsBase(bool value) const { kcolumnresizer_metacall_isbase = value; }
    inline void setKColumnResizer_EventFilter_IsBase(bool value) const { kcolumnresizer_eventfilter_isbase = value; }
    inline void setKColumnResizer_Event_IsBase(bool value) const { kcolumnresizer_event_isbase = value; }
    inline void setKColumnResizer_TimerEvent_IsBase(bool value) const { kcolumnresizer_timerevent_isbase = value; }
    inline void setKColumnResizer_ChildEvent_IsBase(bool value) const { kcolumnresizer_childevent_isbase = value; }
    inline void setKColumnResizer_CustomEvent_IsBase(bool value) const { kcolumnresizer_customevent_isbase = value; }
    inline void setKColumnResizer_ConnectNotify_IsBase(bool value) const { kcolumnresizer_connectnotify_isbase = value; }
    inline void setKColumnResizer_DisconnectNotify_IsBase(bool value) const { kcolumnresizer_disconnectnotify_isbase = value; }
    inline void setKColumnResizer_Sender_IsBase(bool value) const { kcolumnresizer_sender_isbase = value; }
    inline void setKColumnResizer_SenderSignalIndex_IsBase(bool value) const { kcolumnresizer_sendersignalindex_isbase = value; }
    inline void setKColumnResizer_Receivers_IsBase(bool value) const { kcolumnresizer_receivers_isbase = value; }
    inline void setKColumnResizer_IsSignalConnected_IsBase(bool value) const { kcolumnresizer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolumnresizer_metacall_isbase) {
            kcolumnresizer_metacall_isbase = false;
            return KColumnResizer::qt_metacall(param1, param2, param3);
        } else if (kcolumnresizer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcolumnresizer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KColumnResizer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* event) override {
        if (kcolumnresizer_eventfilter_isbase) {
            kcolumnresizer_eventfilter_isbase = false;
            return KColumnResizer::eventFilter(param1, event);
        } else if (kcolumnresizer_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = event;

            bool callback_ret = kcolumnresizer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KColumnResizer::eventFilter(param1, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolumnresizer_event_isbase) {
            kcolumnresizer_event_isbase = false;
            return KColumnResizer::event(event);
        } else if (kcolumnresizer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcolumnresizer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnResizer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolumnresizer_timerevent_isbase) {
            kcolumnresizer_timerevent_isbase = false;
            KColumnResizer::timerEvent(event);
        } else if (kcolumnresizer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcolumnresizer_timerevent_callback(this, cbval1);
        } else {
            KColumnResizer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolumnresizer_childevent_isbase) {
            kcolumnresizer_childevent_isbase = false;
            KColumnResizer::childEvent(event);
        } else if (kcolumnresizer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcolumnresizer_childevent_callback(this, cbval1);
        } else {
            KColumnResizer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolumnresizer_customevent_isbase) {
            kcolumnresizer_customevent_isbase = false;
            KColumnResizer::customEvent(event);
        } else if (kcolumnresizer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolumnresizer_customevent_callback(this, cbval1);
        } else {
            KColumnResizer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolumnresizer_connectnotify_isbase) {
            kcolumnresizer_connectnotify_isbase = false;
            KColumnResizer::connectNotify(signal);
        } else if (kcolumnresizer_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolumnresizer_connectnotify_callback(this, cbval1);
        } else {
            KColumnResizer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolumnresizer_disconnectnotify_isbase) {
            kcolumnresizer_disconnectnotify_isbase = false;
            KColumnResizer::disconnectNotify(signal);
        } else if (kcolumnresizer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolumnresizer_disconnectnotify_callback(this, cbval1);
        } else {
            KColumnResizer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolumnresizer_sender_isbase) {
            kcolumnresizer_sender_isbase = false;
            return KColumnResizer::sender();
        } else if (kcolumnresizer_sender_callback != nullptr) {
            QObject* callback_ret = kcolumnresizer_sender_callback();
            return callback_ret;
        } else {
            return KColumnResizer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolumnresizer_sendersignalindex_isbase) {
            kcolumnresizer_sendersignalindex_isbase = false;
            return KColumnResizer::senderSignalIndex();
        } else if (kcolumnresizer_sendersignalindex_callback != nullptr) {
            int callback_ret = kcolumnresizer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColumnResizer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolumnresizer_receivers_isbase) {
            kcolumnresizer_receivers_isbase = false;
            return KColumnResizer::receivers(signal);
        } else if (kcolumnresizer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcolumnresizer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColumnResizer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolumnresizer_issignalconnected_isbase) {
            kcolumnresizer_issignalconnected_isbase = false;
            return KColumnResizer::isSignalConnected(signal);
        } else if (kcolumnresizer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcolumnresizer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnResizer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KColumnResizer_EventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
    friend bool KColumnResizer_QBaseEventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
    friend void KColumnResizer_TimerEvent(KColumnResizer* self, QTimerEvent* event);
    friend void KColumnResizer_QBaseTimerEvent(KColumnResizer* self, QTimerEvent* event);
    friend void KColumnResizer_ChildEvent(KColumnResizer* self, QChildEvent* event);
    friend void KColumnResizer_QBaseChildEvent(KColumnResizer* self, QChildEvent* event);
    friend void KColumnResizer_CustomEvent(KColumnResizer* self, QEvent* event);
    friend void KColumnResizer_QBaseCustomEvent(KColumnResizer* self, QEvent* event);
    friend void KColumnResizer_ConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_QBaseConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_DisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_QBaseDisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend QObject* KColumnResizer_Sender(const KColumnResizer* self);
    friend QObject* KColumnResizer_QBaseSender(const KColumnResizer* self);
    friend int KColumnResizer_SenderSignalIndex(const KColumnResizer* self);
    friend int KColumnResizer_QBaseSenderSignalIndex(const KColumnResizer* self);
    friend int KColumnResizer_Receivers(const KColumnResizer* self, const char* signal);
    friend int KColumnResizer_QBaseReceivers(const KColumnResizer* self, const char* signal);
    friend bool KColumnResizer_IsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal);
    friend bool KColumnResizer_QBaseIsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal);
};

#endif
