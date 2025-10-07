#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKMODELINDEXPROXYMAPPER_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKMODELINDEXPROXYMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KModelIndexProxyMapper so that we can call protected methods
class VirtualKModelIndexProxyMapper final : public KModelIndexProxyMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualKModelIndexProxyMapper = true;

    // Virtual class public types (including callbacks)
    using KModelIndexProxyMapper_Metacall_Callback = int (*)(KModelIndexProxyMapper*, int, int, void**);
    using KModelIndexProxyMapper_Event_Callback = bool (*)(KModelIndexProxyMapper*, QEvent*);
    using KModelIndexProxyMapper_EventFilter_Callback = bool (*)(KModelIndexProxyMapper*, QObject*, QEvent*);
    using KModelIndexProxyMapper_TimerEvent_Callback = void (*)(KModelIndexProxyMapper*, QTimerEvent*);
    using KModelIndexProxyMapper_ChildEvent_Callback = void (*)(KModelIndexProxyMapper*, QChildEvent*);
    using KModelIndexProxyMapper_CustomEvent_Callback = void (*)(KModelIndexProxyMapper*, QEvent*);
    using KModelIndexProxyMapper_ConnectNotify_Callback = void (*)(KModelIndexProxyMapper*, QMetaMethod*);
    using KModelIndexProxyMapper_DisconnectNotify_Callback = void (*)(KModelIndexProxyMapper*, QMetaMethod*);
    using KModelIndexProxyMapper_Sender_Callback = QObject* (*)();
    using KModelIndexProxyMapper_SenderSignalIndex_Callback = int (*)();
    using KModelIndexProxyMapper_Receivers_Callback = int (*)(const KModelIndexProxyMapper*, const char*);
    using KModelIndexProxyMapper_IsSignalConnected_Callback = bool (*)(const KModelIndexProxyMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    KModelIndexProxyMapper_Metacall_Callback kmodelindexproxymapper_metacall_callback = nullptr;
    KModelIndexProxyMapper_Event_Callback kmodelindexproxymapper_event_callback = nullptr;
    KModelIndexProxyMapper_EventFilter_Callback kmodelindexproxymapper_eventfilter_callback = nullptr;
    KModelIndexProxyMapper_TimerEvent_Callback kmodelindexproxymapper_timerevent_callback = nullptr;
    KModelIndexProxyMapper_ChildEvent_Callback kmodelindexproxymapper_childevent_callback = nullptr;
    KModelIndexProxyMapper_CustomEvent_Callback kmodelindexproxymapper_customevent_callback = nullptr;
    KModelIndexProxyMapper_ConnectNotify_Callback kmodelindexproxymapper_connectnotify_callback = nullptr;
    KModelIndexProxyMapper_DisconnectNotify_Callback kmodelindexproxymapper_disconnectnotify_callback = nullptr;
    KModelIndexProxyMapper_Sender_Callback kmodelindexproxymapper_sender_callback = nullptr;
    KModelIndexProxyMapper_SenderSignalIndex_Callback kmodelindexproxymapper_sendersignalindex_callback = nullptr;
    KModelIndexProxyMapper_Receivers_Callback kmodelindexproxymapper_receivers_callback = nullptr;
    KModelIndexProxyMapper_IsSignalConnected_Callback kmodelindexproxymapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kmodelindexproxymapper_metacall_isbase = false;
    mutable bool kmodelindexproxymapper_event_isbase = false;
    mutable bool kmodelindexproxymapper_eventfilter_isbase = false;
    mutable bool kmodelindexproxymapper_timerevent_isbase = false;
    mutable bool kmodelindexproxymapper_childevent_isbase = false;
    mutable bool kmodelindexproxymapper_customevent_isbase = false;
    mutable bool kmodelindexproxymapper_connectnotify_isbase = false;
    mutable bool kmodelindexproxymapper_disconnectnotify_isbase = false;
    mutable bool kmodelindexproxymapper_sender_isbase = false;
    mutable bool kmodelindexproxymapper_sendersignalindex_isbase = false;
    mutable bool kmodelindexproxymapper_receivers_isbase = false;
    mutable bool kmodelindexproxymapper_issignalconnected_isbase = false;

  public:
    VirtualKModelIndexProxyMapper(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel) : KModelIndexProxyMapper(leftModel, rightModel) {};
    VirtualKModelIndexProxyMapper(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel, QObject* parent) : KModelIndexProxyMapper(leftModel, rightModel, parent) {};

    ~VirtualKModelIndexProxyMapper() {
        kmodelindexproxymapper_metacall_callback = nullptr;
        kmodelindexproxymapper_event_callback = nullptr;
        kmodelindexproxymapper_eventfilter_callback = nullptr;
        kmodelindexproxymapper_timerevent_callback = nullptr;
        kmodelindexproxymapper_childevent_callback = nullptr;
        kmodelindexproxymapper_customevent_callback = nullptr;
        kmodelindexproxymapper_connectnotify_callback = nullptr;
        kmodelindexproxymapper_disconnectnotify_callback = nullptr;
        kmodelindexproxymapper_sender_callback = nullptr;
        kmodelindexproxymapper_sendersignalindex_callback = nullptr;
        kmodelindexproxymapper_receivers_callback = nullptr;
        kmodelindexproxymapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKModelIndexProxyMapper_Metacall_Callback(KModelIndexProxyMapper_Metacall_Callback cb) { kmodelindexproxymapper_metacall_callback = cb; }
    inline void setKModelIndexProxyMapper_Event_Callback(KModelIndexProxyMapper_Event_Callback cb) { kmodelindexproxymapper_event_callback = cb; }
    inline void setKModelIndexProxyMapper_EventFilter_Callback(KModelIndexProxyMapper_EventFilter_Callback cb) { kmodelindexproxymapper_eventfilter_callback = cb; }
    inline void setKModelIndexProxyMapper_TimerEvent_Callback(KModelIndexProxyMapper_TimerEvent_Callback cb) { kmodelindexproxymapper_timerevent_callback = cb; }
    inline void setKModelIndexProxyMapper_ChildEvent_Callback(KModelIndexProxyMapper_ChildEvent_Callback cb) { kmodelindexproxymapper_childevent_callback = cb; }
    inline void setKModelIndexProxyMapper_CustomEvent_Callback(KModelIndexProxyMapper_CustomEvent_Callback cb) { kmodelindexproxymapper_customevent_callback = cb; }
    inline void setKModelIndexProxyMapper_ConnectNotify_Callback(KModelIndexProxyMapper_ConnectNotify_Callback cb) { kmodelindexproxymapper_connectnotify_callback = cb; }
    inline void setKModelIndexProxyMapper_DisconnectNotify_Callback(KModelIndexProxyMapper_DisconnectNotify_Callback cb) { kmodelindexproxymapper_disconnectnotify_callback = cb; }
    inline void setKModelIndexProxyMapper_Sender_Callback(KModelIndexProxyMapper_Sender_Callback cb) { kmodelindexproxymapper_sender_callback = cb; }
    inline void setKModelIndexProxyMapper_SenderSignalIndex_Callback(KModelIndexProxyMapper_SenderSignalIndex_Callback cb) { kmodelindexproxymapper_sendersignalindex_callback = cb; }
    inline void setKModelIndexProxyMapper_Receivers_Callback(KModelIndexProxyMapper_Receivers_Callback cb) { kmodelindexproxymapper_receivers_callback = cb; }
    inline void setKModelIndexProxyMapper_IsSignalConnected_Callback(KModelIndexProxyMapper_IsSignalConnected_Callback cb) { kmodelindexproxymapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKModelIndexProxyMapper_Metacall_IsBase(bool value) const { kmodelindexproxymapper_metacall_isbase = value; }
    inline void setKModelIndexProxyMapper_Event_IsBase(bool value) const { kmodelindexproxymapper_event_isbase = value; }
    inline void setKModelIndexProxyMapper_EventFilter_IsBase(bool value) const { kmodelindexproxymapper_eventfilter_isbase = value; }
    inline void setKModelIndexProxyMapper_TimerEvent_IsBase(bool value) const { kmodelindexproxymapper_timerevent_isbase = value; }
    inline void setKModelIndexProxyMapper_ChildEvent_IsBase(bool value) const { kmodelindexproxymapper_childevent_isbase = value; }
    inline void setKModelIndexProxyMapper_CustomEvent_IsBase(bool value) const { kmodelindexproxymapper_customevent_isbase = value; }
    inline void setKModelIndexProxyMapper_ConnectNotify_IsBase(bool value) const { kmodelindexproxymapper_connectnotify_isbase = value; }
    inline void setKModelIndexProxyMapper_DisconnectNotify_IsBase(bool value) const { kmodelindexproxymapper_disconnectnotify_isbase = value; }
    inline void setKModelIndexProxyMapper_Sender_IsBase(bool value) const { kmodelindexproxymapper_sender_isbase = value; }
    inline void setKModelIndexProxyMapper_SenderSignalIndex_IsBase(bool value) const { kmodelindexproxymapper_sendersignalindex_isbase = value; }
    inline void setKModelIndexProxyMapper_Receivers_IsBase(bool value) const { kmodelindexproxymapper_receivers_isbase = value; }
    inline void setKModelIndexProxyMapper_IsSignalConnected_IsBase(bool value) const { kmodelindexproxymapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodelindexproxymapper_metacall_isbase) {
            kmodelindexproxymapper_metacall_isbase = false;
            return KModelIndexProxyMapper::qt_metacall(param1, param2, param3);
        } else if (kmodelindexproxymapper_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kmodelindexproxymapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KModelIndexProxyMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodelindexproxymapper_event_isbase) {
            kmodelindexproxymapper_event_isbase = false;
            return KModelIndexProxyMapper::event(event);
        } else if (kmodelindexproxymapper_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kmodelindexproxymapper_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KModelIndexProxyMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodelindexproxymapper_eventfilter_isbase) {
            kmodelindexproxymapper_eventfilter_isbase = false;
            return KModelIndexProxyMapper::eventFilter(watched, event);
        } else if (kmodelindexproxymapper_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kmodelindexproxymapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KModelIndexProxyMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodelindexproxymapper_timerevent_isbase) {
            kmodelindexproxymapper_timerevent_isbase = false;
            KModelIndexProxyMapper::timerEvent(event);
        } else if (kmodelindexproxymapper_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kmodelindexproxymapper_timerevent_callback(this, cbval1);
        } else {
            KModelIndexProxyMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodelindexproxymapper_childevent_isbase) {
            kmodelindexproxymapper_childevent_isbase = false;
            KModelIndexProxyMapper::childEvent(event);
        } else if (kmodelindexproxymapper_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kmodelindexproxymapper_childevent_callback(this, cbval1);
        } else {
            KModelIndexProxyMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodelindexproxymapper_customevent_isbase) {
            kmodelindexproxymapper_customevent_isbase = false;
            KModelIndexProxyMapper::customEvent(event);
        } else if (kmodelindexproxymapper_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmodelindexproxymapper_customevent_callback(this, cbval1);
        } else {
            KModelIndexProxyMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodelindexproxymapper_connectnotify_isbase) {
            kmodelindexproxymapper_connectnotify_isbase = false;
            KModelIndexProxyMapper::connectNotify(signal);
        } else if (kmodelindexproxymapper_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmodelindexproxymapper_connectnotify_callback(this, cbval1);
        } else {
            KModelIndexProxyMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodelindexproxymapper_disconnectnotify_isbase) {
            kmodelindexproxymapper_disconnectnotify_isbase = false;
            KModelIndexProxyMapper::disconnectNotify(signal);
        } else if (kmodelindexproxymapper_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmodelindexproxymapper_disconnectnotify_callback(this, cbval1);
        } else {
            KModelIndexProxyMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmodelindexproxymapper_sender_isbase) {
            kmodelindexproxymapper_sender_isbase = false;
            return KModelIndexProxyMapper::sender();
        } else if (kmodelindexproxymapper_sender_callback != nullptr) {
            QObject* callback_ret = kmodelindexproxymapper_sender_callback();
            return callback_ret;
        } else {
            return KModelIndexProxyMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmodelindexproxymapper_sendersignalindex_isbase) {
            kmodelindexproxymapper_sendersignalindex_isbase = false;
            return KModelIndexProxyMapper::senderSignalIndex();
        } else if (kmodelindexproxymapper_sendersignalindex_callback != nullptr) {
            int callback_ret = kmodelindexproxymapper_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KModelIndexProxyMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmodelindexproxymapper_receivers_isbase) {
            kmodelindexproxymapper_receivers_isbase = false;
            return KModelIndexProxyMapper::receivers(signal);
        } else if (kmodelindexproxymapper_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kmodelindexproxymapper_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KModelIndexProxyMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmodelindexproxymapper_issignalconnected_isbase) {
            kmodelindexproxymapper_issignalconnected_isbase = false;
            return KModelIndexProxyMapper::isSignalConnected(signal);
        } else if (kmodelindexproxymapper_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kmodelindexproxymapper_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KModelIndexProxyMapper::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KModelIndexProxyMapper_TimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
    friend void KModelIndexProxyMapper_QBaseTimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
    friend void KModelIndexProxyMapper_ChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
    friend void KModelIndexProxyMapper_QBaseChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
    friend void KModelIndexProxyMapper_CustomEvent(KModelIndexProxyMapper* self, QEvent* event);
    friend void KModelIndexProxyMapper_QBaseCustomEvent(KModelIndexProxyMapper* self, QEvent* event);
    friend void KModelIndexProxyMapper_ConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_QBaseConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_DisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_QBaseDisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend QObject* KModelIndexProxyMapper_Sender(const KModelIndexProxyMapper* self);
    friend QObject* KModelIndexProxyMapper_QBaseSender(const KModelIndexProxyMapper* self);
    friend int KModelIndexProxyMapper_SenderSignalIndex(const KModelIndexProxyMapper* self);
    friend int KModelIndexProxyMapper_QBaseSenderSignalIndex(const KModelIndexProxyMapper* self);
    friend int KModelIndexProxyMapper_Receivers(const KModelIndexProxyMapper* self, const char* signal);
    friend int KModelIndexProxyMapper_QBaseReceivers(const KModelIndexProxyMapper* self, const char* signal);
    friend bool KModelIndexProxyMapper_IsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend bool KModelIndexProxyMapper_QBaseIsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal);
};

#endif
