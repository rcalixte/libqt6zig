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
    using KModelIndexProxyMapper_MetaObject_Callback = QMetaObject* (*)();
    using KModelIndexProxyMapper_Metacast_Callback = void* (*)(KModelIndexProxyMapper*, const char*);
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
    KModelIndexProxyMapper_MetaObject_Callback kmodelindexproxymapper_metaobject_callback = nullptr;
    KModelIndexProxyMapper_Metacast_Callback kmodelindexproxymapper_metacast_callback = nullptr;
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
    mutable bool kmodelindexproxymapper_metaobject_isbase = false;
    mutable bool kmodelindexproxymapper_metacast_isbase = false;
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

    // Callback setters
    inline void setKModelIndexProxyMapper_MetaObject_Callback(KModelIndexProxyMapper_MetaObject_Callback cb) { kmodelindexproxymapper_metaobject_callback = cb; }
    inline void setKModelIndexProxyMapper_Metacast_Callback(KModelIndexProxyMapper_Metacast_Callback cb) { kmodelindexproxymapper_metacast_callback = cb; }
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
    inline void setKModelIndexProxyMapper_MetaObject_IsBase(bool value) const { kmodelindexproxymapper_metaobject_isbase = value; }
    inline void setKModelIndexProxyMapper_Metacast_IsBase(bool value) const { kmodelindexproxymapper_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kmodelindexproxymapper_metaobject_isbase) {
            kmodelindexproxymapper_metaobject_isbase = false;
            return KModelIndexProxyMapper::metaObject();
        }
        auto metaobject_cb = kmodelindexproxymapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KModelIndexProxyMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmodelindexproxymapper_metacast_isbase) {
            kmodelindexproxymapper_metacast_isbase = false;
            return KModelIndexProxyMapper::qt_metacast(param1);
        }
        auto metacast_cb = kmodelindexproxymapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KModelIndexProxyMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodelindexproxymapper_metacall_isbase) {
            kmodelindexproxymapper_metacall_isbase = false;
            return KModelIndexProxyMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kmodelindexproxymapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KModelIndexProxyMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodelindexproxymapper_event_isbase) {
            kmodelindexproxymapper_event_isbase = false;
            return KModelIndexProxyMapper::event(event);
        }
        auto event_cb = kmodelindexproxymapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KModelIndexProxyMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodelindexproxymapper_eventfilter_isbase) {
            kmodelindexproxymapper_eventfilter_isbase = false;
            return KModelIndexProxyMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = kmodelindexproxymapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModelIndexProxyMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodelindexproxymapper_timerevent_isbase) {
            kmodelindexproxymapper_timerevent_isbase = false;
            KModelIndexProxyMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = kmodelindexproxymapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodelindexproxymapper_childevent_isbase) {
            kmodelindexproxymapper_childevent_isbase = false;
            KModelIndexProxyMapper::childEvent(event);
            return;
        }
        auto childevent_cb = kmodelindexproxymapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodelindexproxymapper_customevent_isbase) {
            kmodelindexproxymapper_customevent_isbase = false;
            KModelIndexProxyMapper::customEvent(event);
            return;
        }
        auto customevent_cb = kmodelindexproxymapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodelindexproxymapper_connectnotify_isbase) {
            kmodelindexproxymapper_connectnotify_isbase = false;
            KModelIndexProxyMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kmodelindexproxymapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodelindexproxymapper_disconnectnotify_isbase) {
            kmodelindexproxymapper_disconnectnotify_isbase = false;
            KModelIndexProxyMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kmodelindexproxymapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmodelindexproxymapper_sender_isbase) {
            kmodelindexproxymapper_sender_isbase = false;
            return KModelIndexProxyMapper::sender();
        }
        auto sender_cb = kmodelindexproxymapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KModelIndexProxyMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmodelindexproxymapper_sendersignalindex_isbase) {
            kmodelindexproxymapper_sendersignalindex_isbase = false;
            return KModelIndexProxyMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = kmodelindexproxymapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KModelIndexProxyMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmodelindexproxymapper_receivers_isbase) {
            kmodelindexproxymapper_receivers_isbase = false;
            return KModelIndexProxyMapper::receivers(signal);
        }
        auto receivers_cb = kmodelindexproxymapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KModelIndexProxyMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmodelindexproxymapper_issignalconnected_isbase) {
            kmodelindexproxymapper_issignalconnected_isbase = false;
            return KModelIndexProxyMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kmodelindexproxymapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KModelIndexProxyMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void KModelIndexProxyMapper_TimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
    friend void KModelIndexProxyMapper_SuperTimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
    friend void KModelIndexProxyMapper_ChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
    friend void KModelIndexProxyMapper_SuperChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
    friend void KModelIndexProxyMapper_CustomEvent(KModelIndexProxyMapper* self, QEvent* event);
    friend void KModelIndexProxyMapper_SuperCustomEvent(KModelIndexProxyMapper* self, QEvent* event);
    friend void KModelIndexProxyMapper_ConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_SuperConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_DisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_SuperDisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend QObject* KModelIndexProxyMapper_Sender(const KModelIndexProxyMapper* self);
    friend QObject* KModelIndexProxyMapper_SuperSender(const KModelIndexProxyMapper* self);
    friend int KModelIndexProxyMapper_SenderSignalIndex(const KModelIndexProxyMapper* self);
    friend int KModelIndexProxyMapper_SuperSenderSignalIndex(const KModelIndexProxyMapper* self);
    friend int KModelIndexProxyMapper_Receivers(const KModelIndexProxyMapper* self, const char* signal);
    friend int KModelIndexProxyMapper_SuperReceivers(const KModelIndexProxyMapper* self, const char* signal);
    friend bool KModelIndexProxyMapper_IsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend bool KModelIndexProxyMapper_SuperIsSignalConnected(const KModelIndexProxyMapper* self, const QMetaMethod* signal);
};

#endif
