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
    using KSycoca_MetaObject_Callback = QMetaObject* (*)();
    using KSycoca_Metacast_Callback = void* (*)(KSycoca*, const char*);
    using KSycoca_Metacall_Callback = int (*)(KSycoca*, int, int, void**);
    using KSycoca_IsBuilding_Callback = bool (*)();
    using KSycoca_ConnectNotify_Callback = void (*)(KSycoca*, QMetaMethod*);
    using KSycoca_Event_Callback = bool (*)(KSycoca*, QEvent*);
    using KSycoca_EventFilter_Callback = bool (*)(KSycoca*, QObject*, QEvent*);
    using KSycoca_TimerEvent_Callback = void (*)(KSycoca*, QTimerEvent*);
    using KSycoca_ChildEvent_Callback = void (*)(KSycoca*, QChildEvent*);
    using KSycoca_CustomEvent_Callback = void (*)(KSycoca*, QEvent*);
    using KSycoca_DisconnectNotify_Callback = void (*)(KSycoca*, QMetaMethod*);
    using KSycoca_Sender_Callback = QObject* (*)();
    using KSycoca_SenderSignalIndex_Callback = int (*)();
    using KSycoca_Receivers_Callback = int (*)(const KSycoca*, const char*);
    using KSycoca_IsSignalConnected_Callback = bool (*)(const KSycoca*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSycoca_MetaObject_Callback ksycoca_metaobject_callback = nullptr;
    KSycoca_Metacast_Callback ksycoca_metacast_callback = nullptr;
    KSycoca_Metacall_Callback ksycoca_metacall_callback = nullptr;
    KSycoca_IsBuilding_Callback ksycoca_isbuilding_callback = nullptr;
    KSycoca_ConnectNotify_Callback ksycoca_connectnotify_callback = nullptr;
    KSycoca_Event_Callback ksycoca_event_callback = nullptr;
    KSycoca_EventFilter_Callback ksycoca_eventfilter_callback = nullptr;
    KSycoca_TimerEvent_Callback ksycoca_timerevent_callback = nullptr;
    KSycoca_ChildEvent_Callback ksycoca_childevent_callback = nullptr;
    KSycoca_CustomEvent_Callback ksycoca_customevent_callback = nullptr;
    KSycoca_DisconnectNotify_Callback ksycoca_disconnectnotify_callback = nullptr;
    KSycoca_Sender_Callback ksycoca_sender_callback = nullptr;
    KSycoca_SenderSignalIndex_Callback ksycoca_sendersignalindex_callback = nullptr;
    KSycoca_Receivers_Callback ksycoca_receivers_callback = nullptr;
    KSycoca_IsSignalConnected_Callback ksycoca_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksycoca_metaobject_isbase = false;
    mutable bool ksycoca_metacast_isbase = false;
    mutable bool ksycoca_metacall_isbase = false;
    mutable bool ksycoca_isbuilding_isbase = false;
    mutable bool ksycoca_connectnotify_isbase = false;
    mutable bool ksycoca_event_isbase = false;
    mutable bool ksycoca_eventfilter_isbase = false;
    mutable bool ksycoca_timerevent_isbase = false;
    mutable bool ksycoca_childevent_isbase = false;
    mutable bool ksycoca_customevent_isbase = false;
    mutable bool ksycoca_disconnectnotify_isbase = false;
    mutable bool ksycoca_sender_isbase = false;
    mutable bool ksycoca_sendersignalindex_isbase = false;
    mutable bool ksycoca_receivers_isbase = false;
    mutable bool ksycoca_issignalconnected_isbase = false;

  public:
    VirtualKSycoca() : KSycoca() {};

    // Callback setters
    inline void setKSycoca_MetaObject_Callback(KSycoca_MetaObject_Callback cb) { ksycoca_metaobject_callback = cb; }
    inline void setKSycoca_Metacast_Callback(KSycoca_Metacast_Callback cb) { ksycoca_metacast_callback = cb; }
    inline void setKSycoca_Metacall_Callback(KSycoca_Metacall_Callback cb) { ksycoca_metacall_callback = cb; }
    inline void setKSycoca_IsBuilding_Callback(KSycoca_IsBuilding_Callback cb) { ksycoca_isbuilding_callback = cb; }
    inline void setKSycoca_ConnectNotify_Callback(KSycoca_ConnectNotify_Callback cb) { ksycoca_connectnotify_callback = cb; }
    inline void setKSycoca_Event_Callback(KSycoca_Event_Callback cb) { ksycoca_event_callback = cb; }
    inline void setKSycoca_EventFilter_Callback(KSycoca_EventFilter_Callback cb) { ksycoca_eventfilter_callback = cb; }
    inline void setKSycoca_TimerEvent_Callback(KSycoca_TimerEvent_Callback cb) { ksycoca_timerevent_callback = cb; }
    inline void setKSycoca_ChildEvent_Callback(KSycoca_ChildEvent_Callback cb) { ksycoca_childevent_callback = cb; }
    inline void setKSycoca_CustomEvent_Callback(KSycoca_CustomEvent_Callback cb) { ksycoca_customevent_callback = cb; }
    inline void setKSycoca_DisconnectNotify_Callback(KSycoca_DisconnectNotify_Callback cb) { ksycoca_disconnectnotify_callback = cb; }
    inline void setKSycoca_Sender_Callback(KSycoca_Sender_Callback cb) { ksycoca_sender_callback = cb; }
    inline void setKSycoca_SenderSignalIndex_Callback(KSycoca_SenderSignalIndex_Callback cb) { ksycoca_sendersignalindex_callback = cb; }
    inline void setKSycoca_Receivers_Callback(KSycoca_Receivers_Callback cb) { ksycoca_receivers_callback = cb; }
    inline void setKSycoca_IsSignalConnected_Callback(KSycoca_IsSignalConnected_Callback cb) { ksycoca_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSycoca_MetaObject_IsBase(bool value) const { ksycoca_metaobject_isbase = value; }
    inline void setKSycoca_Metacast_IsBase(bool value) const { ksycoca_metacast_isbase = value; }
    inline void setKSycoca_Metacall_IsBase(bool value) const { ksycoca_metacall_isbase = value; }
    inline void setKSycoca_IsBuilding_IsBase(bool value) const { ksycoca_isbuilding_isbase = value; }
    inline void setKSycoca_ConnectNotify_IsBase(bool value) const { ksycoca_connectnotify_isbase = value; }
    inline void setKSycoca_Event_IsBase(bool value) const { ksycoca_event_isbase = value; }
    inline void setKSycoca_EventFilter_IsBase(bool value) const { ksycoca_eventfilter_isbase = value; }
    inline void setKSycoca_TimerEvent_IsBase(bool value) const { ksycoca_timerevent_isbase = value; }
    inline void setKSycoca_ChildEvent_IsBase(bool value) const { ksycoca_childevent_isbase = value; }
    inline void setKSycoca_CustomEvent_IsBase(bool value) const { ksycoca_customevent_isbase = value; }
    inline void setKSycoca_DisconnectNotify_IsBase(bool value) const { ksycoca_disconnectnotify_isbase = value; }
    inline void setKSycoca_Sender_IsBase(bool value) const { ksycoca_sender_isbase = value; }
    inline void setKSycoca_SenderSignalIndex_IsBase(bool value) const { ksycoca_sendersignalindex_isbase = value; }
    inline void setKSycoca_Receivers_IsBase(bool value) const { ksycoca_receivers_isbase = value; }
    inline void setKSycoca_IsSignalConnected_IsBase(bool value) const { ksycoca_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksycoca_metaobject_isbase) {
            ksycoca_metaobject_isbase = false;
            return KSycoca::metaObject();
        }
        auto metaobject_cb = ksycoca_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSycoca::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksycoca_metacast_isbase) {
            ksycoca_metacast_isbase = false;
            return KSycoca::qt_metacast(param1);
        }
        auto metacast_cb = ksycoca_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSycoca::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksycoca_metacall_isbase) {
            ksycoca_metacall_isbase = false;
            return KSycoca::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ksycoca_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSycoca::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBuilding() override {
        if (ksycoca_isbuilding_isbase) {
            ksycoca_isbuilding_isbase = false;
            return KSycoca::isBuilding();
        }
        auto isbuilding_cb = ksycoca_isbuilding_callback;
        if (isbuilding_cb) {
            bool callback_ret = isbuilding_cb();
            return callback_ret;
        }
        return KSycoca::isBuilding();
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksycoca_connectnotify_isbase) {
            ksycoca_connectnotify_isbase = false;
            KSycoca::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ksycoca_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSycoca::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksycoca_event_isbase) {
            ksycoca_event_isbase = false;
            return KSycoca::event(event);
        }
        auto event_cb = ksycoca_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSycoca::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksycoca_eventfilter_isbase) {
            ksycoca_eventfilter_isbase = false;
            return KSycoca::eventFilter(watched, event);
        }
        auto eventfilter_cb = ksycoca_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSycoca::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksycoca_timerevent_isbase) {
            ksycoca_timerevent_isbase = false;
            KSycoca::timerEvent(event);
            return;
        }
        auto timerevent_cb = ksycoca_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KSycoca::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksycoca_childevent_isbase) {
            ksycoca_childevent_isbase = false;
            KSycoca::childEvent(event);
            return;
        }
        auto childevent_cb = ksycoca_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSycoca::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksycoca_customevent_isbase) {
            ksycoca_customevent_isbase = false;
            KSycoca::customEvent(event);
            return;
        }
        auto customevent_cb = ksycoca_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSycoca::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksycoca_disconnectnotify_isbase) {
            ksycoca_disconnectnotify_isbase = false;
            KSycoca::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ksycoca_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSycoca::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksycoca_sender_isbase) {
            ksycoca_sender_isbase = false;
            return KSycoca::sender();
        }
        auto sender_cb = ksycoca_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSycoca::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksycoca_sendersignalindex_isbase) {
            ksycoca_sendersignalindex_isbase = false;
            return KSycoca::senderSignalIndex();
        }
        auto sendersignalindex_cb = ksycoca_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSycoca::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksycoca_receivers_isbase) {
            ksycoca_receivers_isbase = false;
            return KSycoca::receivers(signal);
        }
        auto receivers_cb = ksycoca_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSycoca::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksycoca_issignalconnected_isbase) {
            ksycoca_issignalconnected_isbase = false;
            return KSycoca::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ksycoca_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSycoca::isSignalConnected(signal);
    }

    // Friend functions
    friend void KSycoca_ConnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_SuperConnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_TimerEvent(KSycoca* self, QTimerEvent* event);
    friend void KSycoca_SuperTimerEvent(KSycoca* self, QTimerEvent* event);
    friend void KSycoca_ChildEvent(KSycoca* self, QChildEvent* event);
    friend void KSycoca_SuperChildEvent(KSycoca* self, QChildEvent* event);
    friend void KSycoca_CustomEvent(KSycoca* self, QEvent* event);
    friend void KSycoca_SuperCustomEvent(KSycoca* self, QEvent* event);
    friend void KSycoca_DisconnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend void KSycoca_SuperDisconnectNotify(KSycoca* self, const QMetaMethod* signal);
    friend QObject* KSycoca_Sender(const KSycoca* self);
    friend QObject* KSycoca_SuperSender(const KSycoca* self);
    friend int KSycoca_SenderSignalIndex(const KSycoca* self);
    friend int KSycoca_SuperSenderSignalIndex(const KSycoca* self);
    friend int KSycoca_Receivers(const KSycoca* self, const char* signal);
    friend int KSycoca_SuperReceivers(const KSycoca* self, const char* signal);
    friend bool KSycoca_IsSignalConnected(const KSycoca* self, const QMetaMethod* signal);
    friend bool KSycoca_SuperIsSignalConnected(const KSycoca* self, const QMetaMethod* signal);
};

#endif
