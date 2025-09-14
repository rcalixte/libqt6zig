#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBVIRTUALKSYCOCA_H
#define SRC_EXTRAS_KSERVICEC_LIBVIRTUALKSYCOCA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSycoca so that we can call protected methods
class VirtualKSycoca final : public KSycoca {

  public:
    // Virtual class boolean flag
    bool isVirtualKSycoca = true;

    // Virtual class public types (including callbacks)
    using KSycoca_Metacall_Callback = int (*)(KSycoca*, int, int, void**);
    using KSycoca_IsBuilding_Callback = bool (*)();
    using KSycoca_ConnectNotify_Callback = void (*)(KSycoca*, QMetaMethod*);
    using KSycoca_Event_Callback = bool (*)(KSycoca*, QEvent*);
    using KSycoca_EventFilter_Callback = bool (*)(KSycoca*, QObject*, QEvent*);
    using KSycoca_TimerEvent_Callback = void (*)(KSycoca*, QTimerEvent*);
    using KSycoca_ChildEvent_Callback = void (*)(KSycoca*, QChildEvent*);
    using KSycoca_CustomEvent_Callback = void (*)(KSycoca*, QEvent*);
    using KSycoca_DisconnectNotify_Callback = void (*)(KSycoca*, QMetaMethod*);
    using KSycoca_Stream_Callback = QDataStream** (*)();
    using KSycoca_Sender_Callback = QObject* (*)();
    using KSycoca_SenderSignalIndex_Callback = int (*)();
    using KSycoca_Receivers_Callback = int (*)(const KSycoca*, const char*);
    using KSycoca_IsSignalConnected_Callback = bool (*)(const KSycoca*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSycoca_Metacall_Callback ksycoca_metacall_callback = nullptr;
    KSycoca_IsBuilding_Callback ksycoca_isbuilding_callback = nullptr;
    KSycoca_ConnectNotify_Callback ksycoca_connectnotify_callback = nullptr;
    KSycoca_Event_Callback ksycoca_event_callback = nullptr;
    KSycoca_EventFilter_Callback ksycoca_eventfilter_callback = nullptr;
    KSycoca_TimerEvent_Callback ksycoca_timerevent_callback = nullptr;
    KSycoca_ChildEvent_Callback ksycoca_childevent_callback = nullptr;
    KSycoca_CustomEvent_Callback ksycoca_customevent_callback = nullptr;
    KSycoca_DisconnectNotify_Callback ksycoca_disconnectnotify_callback = nullptr;
    KSycoca_Stream_Callback ksycoca_stream_callback = nullptr;
    KSycoca_Sender_Callback ksycoca_sender_callback = nullptr;
    KSycoca_SenderSignalIndex_Callback ksycoca_sendersignalindex_callback = nullptr;
    KSycoca_Receivers_Callback ksycoca_receivers_callback = nullptr;
    KSycoca_IsSignalConnected_Callback ksycoca_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksycoca_metacall_isbase = false;
    mutable bool ksycoca_isbuilding_isbase = false;
    mutable bool ksycoca_connectnotify_isbase = false;
    mutable bool ksycoca_event_isbase = false;
    mutable bool ksycoca_eventfilter_isbase = false;
    mutable bool ksycoca_timerevent_isbase = false;
    mutable bool ksycoca_childevent_isbase = false;
    mutable bool ksycoca_customevent_isbase = false;
    mutable bool ksycoca_disconnectnotify_isbase = false;
    mutable bool ksycoca_stream_isbase = false;
    mutable bool ksycoca_sender_isbase = false;
    mutable bool ksycoca_sendersignalindex_isbase = false;
    mutable bool ksycoca_receivers_isbase = false;
    mutable bool ksycoca_issignalconnected_isbase = false;

  public:
    VirtualKSycoca() : KSycoca() {};

    ~VirtualKSycoca() {
        ksycoca_metacall_callback = nullptr;
        ksycoca_isbuilding_callback = nullptr;
        ksycoca_connectnotify_callback = nullptr;
        ksycoca_event_callback = nullptr;
        ksycoca_eventfilter_callback = nullptr;
        ksycoca_timerevent_callback = nullptr;
        ksycoca_childevent_callback = nullptr;
        ksycoca_customevent_callback = nullptr;
        ksycoca_disconnectnotify_callback = nullptr;
        ksycoca_stream_callback = nullptr;
        ksycoca_sender_callback = nullptr;
        ksycoca_sendersignalindex_callback = nullptr;
        ksycoca_receivers_callback = nullptr;
        ksycoca_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSycoca_Metacall_Callback(KSycoca_Metacall_Callback cb) { ksycoca_metacall_callback = cb; }
    inline void setKSycoca_IsBuilding_Callback(KSycoca_IsBuilding_Callback cb) { ksycoca_isbuilding_callback = cb; }
    inline void setKSycoca_ConnectNotify_Callback(KSycoca_ConnectNotify_Callback cb) { ksycoca_connectnotify_callback = cb; }
    inline void setKSycoca_Event_Callback(KSycoca_Event_Callback cb) { ksycoca_event_callback = cb; }
    inline void setKSycoca_EventFilter_Callback(KSycoca_EventFilter_Callback cb) { ksycoca_eventfilter_callback = cb; }
    inline void setKSycoca_TimerEvent_Callback(KSycoca_TimerEvent_Callback cb) { ksycoca_timerevent_callback = cb; }
    inline void setKSycoca_ChildEvent_Callback(KSycoca_ChildEvent_Callback cb) { ksycoca_childevent_callback = cb; }
    inline void setKSycoca_CustomEvent_Callback(KSycoca_CustomEvent_Callback cb) { ksycoca_customevent_callback = cb; }
    inline void setKSycoca_DisconnectNotify_Callback(KSycoca_DisconnectNotify_Callback cb) { ksycoca_disconnectnotify_callback = cb; }
    inline void setKSycoca_Stream_Callback(KSycoca_Stream_Callback cb) { ksycoca_stream_callback = cb; }
    inline void setKSycoca_Sender_Callback(KSycoca_Sender_Callback cb) { ksycoca_sender_callback = cb; }
    inline void setKSycoca_SenderSignalIndex_Callback(KSycoca_SenderSignalIndex_Callback cb) { ksycoca_sendersignalindex_callback = cb; }
    inline void setKSycoca_Receivers_Callback(KSycoca_Receivers_Callback cb) { ksycoca_receivers_callback = cb; }
    inline void setKSycoca_IsSignalConnected_Callback(KSycoca_IsSignalConnected_Callback cb) { ksycoca_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSycoca_Metacall_IsBase(bool value) const { ksycoca_metacall_isbase = value; }
    inline void setKSycoca_IsBuilding_IsBase(bool value) const { ksycoca_isbuilding_isbase = value; }
    inline void setKSycoca_ConnectNotify_IsBase(bool value) const { ksycoca_connectnotify_isbase = value; }
    inline void setKSycoca_Event_IsBase(bool value) const { ksycoca_event_isbase = value; }
    inline void setKSycoca_EventFilter_IsBase(bool value) const { ksycoca_eventfilter_isbase = value; }
    inline void setKSycoca_TimerEvent_IsBase(bool value) const { ksycoca_timerevent_isbase = value; }
    inline void setKSycoca_ChildEvent_IsBase(bool value) const { ksycoca_childevent_isbase = value; }
    inline void setKSycoca_CustomEvent_IsBase(bool value) const { ksycoca_customevent_isbase = value; }
    inline void setKSycoca_DisconnectNotify_IsBase(bool value) const { ksycoca_disconnectnotify_isbase = value; }
    inline void setKSycoca_Stream_IsBase(bool value) const { ksycoca_stream_isbase = value; }
    inline void setKSycoca_Sender_IsBase(bool value) const { ksycoca_sender_isbase = value; }
    inline void setKSycoca_SenderSignalIndex_IsBase(bool value) const { ksycoca_sendersignalindex_isbase = value; }
    inline void setKSycoca_Receivers_IsBase(bool value) const { ksycoca_receivers_isbase = value; }
    inline void setKSycoca_IsSignalConnected_IsBase(bool value) const { ksycoca_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksycoca_metacall_isbase) {
            ksycoca_metacall_isbase = false;
            return KSycoca::qt_metacall(param1, param2, param3);
        } else if (ksycoca_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksycoca_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSycoca::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBuilding() override {
        if (ksycoca_isbuilding_isbase) {
            ksycoca_isbuilding_isbase = false;
            return KSycoca::isBuilding();
        } else if (ksycoca_isbuilding_callback != nullptr) {
            bool callback_ret = ksycoca_isbuilding_callback();
            return callback_ret;
        } else {
            return KSycoca::isBuilding();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksycoca_connectnotify_isbase) {
            ksycoca_connectnotify_isbase = false;
            KSycoca::connectNotify(signal);
        } else if (ksycoca_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksycoca_connectnotify_callback(this, cbval1);
        } else {
            KSycoca::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksycoca_event_isbase) {
            ksycoca_event_isbase = false;
            return KSycoca::event(event);
        } else if (ksycoca_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksycoca_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSycoca::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksycoca_eventfilter_isbase) {
            ksycoca_eventfilter_isbase = false;
            return KSycoca::eventFilter(watched, event);
        } else if (ksycoca_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ksycoca_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSycoca::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksycoca_timerevent_isbase) {
            ksycoca_timerevent_isbase = false;
            KSycoca::timerEvent(event);
        } else if (ksycoca_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksycoca_timerevent_callback(this, cbval1);
        } else {
            KSycoca::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksycoca_childevent_isbase) {
            ksycoca_childevent_isbase = false;
            KSycoca::childEvent(event);
        } else if (ksycoca_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksycoca_childevent_callback(this, cbval1);
        } else {
            KSycoca::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksycoca_customevent_isbase) {
            ksycoca_customevent_isbase = false;
            KSycoca::customEvent(event);
        } else if (ksycoca_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksycoca_customevent_callback(this, cbval1);
        } else {
            KSycoca::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksycoca_disconnectnotify_isbase) {
            ksycoca_disconnectnotify_isbase = false;
            KSycoca::disconnectNotify(signal);
        } else if (ksycoca_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksycoca_disconnectnotify_callback(this, cbval1);
        } else {
            KSycoca::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QDataStream*& stream() {
        if (ksycoca_stream_isbase) {
            ksycoca_stream_isbase = false;
            return KSycoca::stream();
        } else if (ksycoca_stream_callback != nullptr) {
            QDataStream** callback_ret = ksycoca_stream_callback();
            return *callback_ret;
        } else {
            return KSycoca::stream();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksycoca_sender_isbase) {
            ksycoca_sender_isbase = false;
            return KSycoca::sender();
        } else if (ksycoca_sender_callback != nullptr) {
            QObject* callback_ret = ksycoca_sender_callback();
            return callback_ret;
        } else {
            return KSycoca::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksycoca_sendersignalindex_isbase) {
            ksycoca_sendersignalindex_isbase = false;
            return KSycoca::senderSignalIndex();
        } else if (ksycoca_sendersignalindex_callback != nullptr) {
            int callback_ret = ksycoca_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSycoca::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksycoca_receivers_isbase) {
            ksycoca_receivers_isbase = false;
            return KSycoca::receivers(signal);
        } else if (ksycoca_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksycoca_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSycoca::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksycoca_issignalconnected_isbase) {
            ksycoca_issignalconnected_isbase = false;
            return KSycoca::isSignalConnected(signal);
        } else if (ksycoca_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksycoca_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSycoca::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSycoca_ConnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_QBaseConnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_TimerEvent(KSycoca* self, QTimerEvent* event);
    friend void KSycoca_QBaseTimerEvent(KSycoca* self, QTimerEvent* event);
    friend void KSycoca_ChildEvent(KSycoca* self, QChildEvent* event);
    friend void KSycoca_QBaseChildEvent(KSycoca* self, QChildEvent* event);
    friend void KSycoca_CustomEvent(KSycoca* self, QEvent* event);
    friend void KSycoca_QBaseCustomEvent(KSycoca* self, QEvent* event);
    friend void KSycoca_DisconnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_QBaseDisconnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend QDataStream** KSycoca_Stream(KSycoca* self);
    friend QDataStream** KSycoca_QBaseStream(KSycoca* self);
    friend QObject* KSycoca_Sender(const KSycoca* self);
    friend QObject* KSycoca_QBaseSender(const KSycoca* self);
    friend int KSycoca_SenderSignalIndex(const KSycoca* self);
    friend int KSycoca_QBaseSenderSignalIndex(const KSycoca* self);
    friend int KSycoca_Receivers(const KSycoca* self, const char* signal);
    friend int KSycoca_QBaseReceivers(const KSycoca* self, const char* signal);
    friend bool KSycoca_IsSignalConnected(const KSycoca* self, const QMetaMethod* signal);
    friend bool KSycoca_QBaseIsSignalConnected(const KSycoca* self, const QMetaMethod* signal);
};

#endif
