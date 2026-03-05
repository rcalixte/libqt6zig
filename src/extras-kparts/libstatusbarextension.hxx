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
    using KParts__StatusBarExtension_MetaObject_Callback = QMetaObject* (*)();
    using KParts__StatusBarExtension_Metacast_Callback = void* (*)(KParts__StatusBarExtension*, const char*);
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
    KParts__StatusBarExtension_MetaObject_Callback kparts__statusbarextension_metaobject_callback = nullptr;
    KParts__StatusBarExtension_Metacast_Callback kparts__statusbarextension_metacast_callback = nullptr;
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
    mutable bool kparts__statusbarextension_metaobject_isbase = false;
    mutable bool kparts__statusbarextension_metacast_isbase = false;
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

    // Callback setters
    inline void setKParts__StatusBarExtension_MetaObject_Callback(KParts__StatusBarExtension_MetaObject_Callback cb) { kparts__statusbarextension_metaobject_callback = cb; }
    inline void setKParts__StatusBarExtension_Metacast_Callback(KParts__StatusBarExtension_Metacast_Callback cb) { kparts__statusbarextension_metacast_callback = cb; }
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
    inline void setKParts__StatusBarExtension_MetaObject_IsBase(bool value) const { kparts__statusbarextension_metaobject_isbase = value; }
    inline void setKParts__StatusBarExtension_Metacast_IsBase(bool value) const { kparts__statusbarextension_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kparts__statusbarextension_metaobject_isbase) {
            kparts__statusbarextension_metaobject_isbase = false;
            return KParts__StatusBarExtension::metaObject();
        }
        auto metaobject_cb = kparts__statusbarextension_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KParts__StatusBarExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__statusbarextension_metacast_isbase) {
            kparts__statusbarextension_metacast_isbase = false;
            return KParts__StatusBarExtension::qt_metacast(param1);
        }
        auto metacast_cb = kparts__statusbarextension_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__StatusBarExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__statusbarextension_metacall_isbase) {
            kparts__statusbarextension_metacall_isbase = false;
            return KParts__StatusBarExtension::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kparts__statusbarextension_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__StatusBarExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* ev) override {
        if (kparts__statusbarextension_eventfilter_isbase) {
            kparts__statusbarextension_eventfilter_isbase = false;
            return KParts__StatusBarExtension::eventFilter(watched, ev);
        }
        auto eventfilter_cb = kparts__statusbarextension_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = ev;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__StatusBarExtension::eventFilter(watched, ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__statusbarextension_event_isbase) {
            kparts__statusbarextension_event_isbase = false;
            return KParts__StatusBarExtension::event(event);
        }
        auto event_cb = kparts__statusbarextension_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__StatusBarExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__statusbarextension_timerevent_isbase) {
            kparts__statusbarextension_timerevent_isbase = false;
            KParts__StatusBarExtension::timerEvent(event);
            return;
        }
        auto timerevent_cb = kparts__statusbarextension_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__statusbarextension_childevent_isbase) {
            kparts__statusbarextension_childevent_isbase = false;
            KParts__StatusBarExtension::childEvent(event);
            return;
        }
        auto childevent_cb = kparts__statusbarextension_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__statusbarextension_customevent_isbase) {
            kparts__statusbarextension_customevent_isbase = false;
            KParts__StatusBarExtension::customEvent(event);
            return;
        }
        auto customevent_cb = kparts__statusbarextension_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__statusbarextension_connectnotify_isbase) {
            kparts__statusbarextension_connectnotify_isbase = false;
            KParts__StatusBarExtension::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kparts__statusbarextension_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__statusbarextension_disconnectnotify_isbase) {
            kparts__statusbarextension_disconnectnotify_isbase = false;
            KParts__StatusBarExtension::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kparts__statusbarextension_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KParts__StatusBarExtension::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__statusbarextension_sender_isbase) {
            kparts__statusbarextension_sender_isbase = false;
            return KParts__StatusBarExtension::sender();
        }
        auto sender_cb = kparts__statusbarextension_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KParts__StatusBarExtension::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__statusbarextension_sendersignalindex_isbase) {
            kparts__statusbarextension_sendersignalindex_isbase = false;
            return KParts__StatusBarExtension::senderSignalIndex();
        }
        auto sendersignalindex_cb = kparts__statusbarextension_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KParts__StatusBarExtension::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__statusbarextension_receivers_isbase) {
            kparts__statusbarextension_receivers_isbase = false;
            return KParts__StatusBarExtension::receivers(signal);
        }
        auto receivers_cb = kparts__statusbarextension_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KParts__StatusBarExtension::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__statusbarextension_issignalconnected_isbase) {
            kparts__statusbarextension_issignalconnected_isbase = false;
            return KParts__StatusBarExtension::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kparts__statusbarextension_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__StatusBarExtension::isSignalConnected(signal);
    }

    // Friend functions
    friend void KParts__StatusBarExtension_TimerEvent(KParts::StatusBarExtension* self, QTimerEvent* event);
    friend void KParts__StatusBarExtension_SuperTimerEvent(KParts::StatusBarExtension* self, QTimerEvent* event);
    friend void KParts__StatusBarExtension_ChildEvent(KParts::StatusBarExtension* self, QChildEvent* event);
    friend void KParts__StatusBarExtension_SuperChildEvent(KParts::StatusBarExtension* self, QChildEvent* event);
    friend void KParts__StatusBarExtension_CustomEvent(KParts::StatusBarExtension* self, QEvent* event);
    friend void KParts__StatusBarExtension_SuperCustomEvent(KParts::StatusBarExtension* self, QEvent* event);
    friend void KParts__StatusBarExtension_ConnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_SuperConnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_DisconnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend void KParts__StatusBarExtension_SuperDisconnectNotify(KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend QObject* KParts__StatusBarExtension_Sender(const KParts::StatusBarExtension* self);
    friend QObject* KParts__StatusBarExtension_SuperSender(const KParts::StatusBarExtension* self);
    friend int KParts__StatusBarExtension_SenderSignalIndex(const KParts::StatusBarExtension* self);
    friend int KParts__StatusBarExtension_SuperSenderSignalIndex(const KParts::StatusBarExtension* self);
    friend int KParts__StatusBarExtension_Receivers(const KParts::StatusBarExtension* self, const char* signal);
    friend int KParts__StatusBarExtension_SuperReceivers(const KParts::StatusBarExtension* self, const char* signal);
    friend bool KParts__StatusBarExtension_IsSignalConnected(const KParts::StatusBarExtension* self, const QMetaMethod* signal);
    friend bool KParts__StatusBarExtension_SuperIsSignalConnected(const KParts::StatusBarExtension* self, const QMetaMethod* signal);
};

#endif
