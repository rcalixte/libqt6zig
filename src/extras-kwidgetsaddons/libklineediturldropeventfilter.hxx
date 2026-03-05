#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKLINEEDITURLDROPEVENTFILTER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKLINEEDITURLDROPEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLineEditUrlDropEventFilter so that we can call protected methods
class VirtualKLineEditUrlDropEventFilter final : public KLineEditUrlDropEventFilter {

  public:
    // Virtual class boolean flag
    bool isVirtualKLineEditUrlDropEventFilter = true;

    // Virtual class public types (including callbacks)
    using KLineEditUrlDropEventFilter_MetaObject_Callback = QMetaObject* (*)();
    using KLineEditUrlDropEventFilter_Metacast_Callback = void* (*)(KLineEditUrlDropEventFilter*, const char*);
    using KLineEditUrlDropEventFilter_Metacall_Callback = int (*)(KLineEditUrlDropEventFilter*, int, int, void**);
    using KLineEditUrlDropEventFilter_EventFilter_Callback = bool (*)(KLineEditUrlDropEventFilter*, QObject*, QEvent*);
    using KLineEditUrlDropEventFilter_Event_Callback = bool (*)(KLineEditUrlDropEventFilter*, QEvent*);
    using KLineEditUrlDropEventFilter_TimerEvent_Callback = void (*)(KLineEditUrlDropEventFilter*, QTimerEvent*);
    using KLineEditUrlDropEventFilter_ChildEvent_Callback = void (*)(KLineEditUrlDropEventFilter*, QChildEvent*);
    using KLineEditUrlDropEventFilter_CustomEvent_Callback = void (*)(KLineEditUrlDropEventFilter*, QEvent*);
    using KLineEditUrlDropEventFilter_ConnectNotify_Callback = void (*)(KLineEditUrlDropEventFilter*, QMetaMethod*);
    using KLineEditUrlDropEventFilter_DisconnectNotify_Callback = void (*)(KLineEditUrlDropEventFilter*, QMetaMethod*);
    using KLineEditUrlDropEventFilter_Sender_Callback = QObject* (*)();
    using KLineEditUrlDropEventFilter_SenderSignalIndex_Callback = int (*)();
    using KLineEditUrlDropEventFilter_Receivers_Callback = int (*)(const KLineEditUrlDropEventFilter*, const char*);
    using KLineEditUrlDropEventFilter_IsSignalConnected_Callback = bool (*)(const KLineEditUrlDropEventFilter*, QMetaMethod*);

  protected:
    // Instance callback storage
    KLineEditUrlDropEventFilter_MetaObject_Callback klineediturldropeventfilter_metaobject_callback = nullptr;
    KLineEditUrlDropEventFilter_Metacast_Callback klineediturldropeventfilter_metacast_callback = nullptr;
    KLineEditUrlDropEventFilter_Metacall_Callback klineediturldropeventfilter_metacall_callback = nullptr;
    KLineEditUrlDropEventFilter_EventFilter_Callback klineediturldropeventfilter_eventfilter_callback = nullptr;
    KLineEditUrlDropEventFilter_Event_Callback klineediturldropeventfilter_event_callback = nullptr;
    KLineEditUrlDropEventFilter_TimerEvent_Callback klineediturldropeventfilter_timerevent_callback = nullptr;
    KLineEditUrlDropEventFilter_ChildEvent_Callback klineediturldropeventfilter_childevent_callback = nullptr;
    KLineEditUrlDropEventFilter_CustomEvent_Callback klineediturldropeventfilter_customevent_callback = nullptr;
    KLineEditUrlDropEventFilter_ConnectNotify_Callback klineediturldropeventfilter_connectnotify_callback = nullptr;
    KLineEditUrlDropEventFilter_DisconnectNotify_Callback klineediturldropeventfilter_disconnectnotify_callback = nullptr;
    KLineEditUrlDropEventFilter_Sender_Callback klineediturldropeventfilter_sender_callback = nullptr;
    KLineEditUrlDropEventFilter_SenderSignalIndex_Callback klineediturldropeventfilter_sendersignalindex_callback = nullptr;
    KLineEditUrlDropEventFilter_Receivers_Callback klineediturldropeventfilter_receivers_callback = nullptr;
    KLineEditUrlDropEventFilter_IsSignalConnected_Callback klineediturldropeventfilter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klineediturldropeventfilter_metaobject_isbase = false;
    mutable bool klineediturldropeventfilter_metacast_isbase = false;
    mutable bool klineediturldropeventfilter_metacall_isbase = false;
    mutable bool klineediturldropeventfilter_eventfilter_isbase = false;
    mutable bool klineediturldropeventfilter_event_isbase = false;
    mutable bool klineediturldropeventfilter_timerevent_isbase = false;
    mutable bool klineediturldropeventfilter_childevent_isbase = false;
    mutable bool klineediturldropeventfilter_customevent_isbase = false;
    mutable bool klineediturldropeventfilter_connectnotify_isbase = false;
    mutable bool klineediturldropeventfilter_disconnectnotify_isbase = false;
    mutable bool klineediturldropeventfilter_sender_isbase = false;
    mutable bool klineediturldropeventfilter_sendersignalindex_isbase = false;
    mutable bool klineediturldropeventfilter_receivers_isbase = false;
    mutable bool klineediturldropeventfilter_issignalconnected_isbase = false;

  public:
    VirtualKLineEditUrlDropEventFilter() : KLineEditUrlDropEventFilter() {};
    VirtualKLineEditUrlDropEventFilter(QObject* parent) : KLineEditUrlDropEventFilter(parent) {};

    // Callback setters
    inline void setKLineEditUrlDropEventFilter_MetaObject_Callback(KLineEditUrlDropEventFilter_MetaObject_Callback cb) { klineediturldropeventfilter_metaobject_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_Metacast_Callback(KLineEditUrlDropEventFilter_Metacast_Callback cb) { klineediturldropeventfilter_metacast_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_Metacall_Callback(KLineEditUrlDropEventFilter_Metacall_Callback cb) { klineediturldropeventfilter_metacall_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_EventFilter_Callback(KLineEditUrlDropEventFilter_EventFilter_Callback cb) { klineediturldropeventfilter_eventfilter_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_Event_Callback(KLineEditUrlDropEventFilter_Event_Callback cb) { klineediturldropeventfilter_event_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_TimerEvent_Callback(KLineEditUrlDropEventFilter_TimerEvent_Callback cb) { klineediturldropeventfilter_timerevent_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_ChildEvent_Callback(KLineEditUrlDropEventFilter_ChildEvent_Callback cb) { klineediturldropeventfilter_childevent_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_CustomEvent_Callback(KLineEditUrlDropEventFilter_CustomEvent_Callback cb) { klineediturldropeventfilter_customevent_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_ConnectNotify_Callback(KLineEditUrlDropEventFilter_ConnectNotify_Callback cb) { klineediturldropeventfilter_connectnotify_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_DisconnectNotify_Callback(KLineEditUrlDropEventFilter_DisconnectNotify_Callback cb) { klineediturldropeventfilter_disconnectnotify_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_Sender_Callback(KLineEditUrlDropEventFilter_Sender_Callback cb) { klineediturldropeventfilter_sender_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_SenderSignalIndex_Callback(KLineEditUrlDropEventFilter_SenderSignalIndex_Callback cb) { klineediturldropeventfilter_sendersignalindex_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_Receivers_Callback(KLineEditUrlDropEventFilter_Receivers_Callback cb) { klineediturldropeventfilter_receivers_callback = cb; }
    inline void setKLineEditUrlDropEventFilter_IsSignalConnected_Callback(KLineEditUrlDropEventFilter_IsSignalConnected_Callback cb) { klineediturldropeventfilter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKLineEditUrlDropEventFilter_MetaObject_IsBase(bool value) const { klineediturldropeventfilter_metaobject_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_Metacast_IsBase(bool value) const { klineediturldropeventfilter_metacast_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_Metacall_IsBase(bool value) const { klineediturldropeventfilter_metacall_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_EventFilter_IsBase(bool value) const { klineediturldropeventfilter_eventfilter_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_Event_IsBase(bool value) const { klineediturldropeventfilter_event_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_TimerEvent_IsBase(bool value) const { klineediturldropeventfilter_timerevent_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_ChildEvent_IsBase(bool value) const { klineediturldropeventfilter_childevent_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_CustomEvent_IsBase(bool value) const { klineediturldropeventfilter_customevent_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_ConnectNotify_IsBase(bool value) const { klineediturldropeventfilter_connectnotify_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_DisconnectNotify_IsBase(bool value) const { klineediturldropeventfilter_disconnectnotify_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_Sender_IsBase(bool value) const { klineediturldropeventfilter_sender_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_SenderSignalIndex_IsBase(bool value) const { klineediturldropeventfilter_sendersignalindex_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_Receivers_IsBase(bool value) const { klineediturldropeventfilter_receivers_isbase = value; }
    inline void setKLineEditUrlDropEventFilter_IsSignalConnected_IsBase(bool value) const { klineediturldropeventfilter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klineediturldropeventfilter_metaobject_isbase) {
            klineediturldropeventfilter_metaobject_isbase = false;
            return KLineEditUrlDropEventFilter::metaObject();
        }
        auto metaobject_cb = klineediturldropeventfilter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klineediturldropeventfilter_metacast_isbase) {
            klineediturldropeventfilter_metacast_isbase = false;
            return KLineEditUrlDropEventFilter::qt_metacast(param1);
        }
        auto metacast_cb = klineediturldropeventfilter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klineediturldropeventfilter_metacall_isbase) {
            klineediturldropeventfilter_metacall_isbase = false;
            return KLineEditUrlDropEventFilter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = klineediturldropeventfilter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLineEditUrlDropEventFilter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (klineediturldropeventfilter_eventfilter_isbase) {
            klineediturldropeventfilter_eventfilter_isbase = false;
            return KLineEditUrlDropEventFilter::eventFilter(object, event);
        }
        auto eventfilter_cb = klineediturldropeventfilter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klineediturldropeventfilter_event_isbase) {
            klineediturldropeventfilter_event_isbase = false;
            return KLineEditUrlDropEventFilter::event(event);
        }
        auto event_cb = klineediturldropeventfilter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klineediturldropeventfilter_timerevent_isbase) {
            klineediturldropeventfilter_timerevent_isbase = false;
            KLineEditUrlDropEventFilter::timerEvent(event);
            return;
        }
        auto timerevent_cb = klineediturldropeventfilter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klineediturldropeventfilter_childevent_isbase) {
            klineediturldropeventfilter_childevent_isbase = false;
            KLineEditUrlDropEventFilter::childEvent(event);
            return;
        }
        auto childevent_cb = klineediturldropeventfilter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klineediturldropeventfilter_customevent_isbase) {
            klineediturldropeventfilter_customevent_isbase = false;
            KLineEditUrlDropEventFilter::customEvent(event);
            return;
        }
        auto customevent_cb = klineediturldropeventfilter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klineediturldropeventfilter_connectnotify_isbase) {
            klineediturldropeventfilter_connectnotify_isbase = false;
            KLineEditUrlDropEventFilter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = klineediturldropeventfilter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klineediturldropeventfilter_disconnectnotify_isbase) {
            klineediturldropeventfilter_disconnectnotify_isbase = false;
            KLineEditUrlDropEventFilter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = klineediturldropeventfilter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klineediturldropeventfilter_sender_isbase) {
            klineediturldropeventfilter_sender_isbase = false;
            return KLineEditUrlDropEventFilter::sender();
        }
        auto sender_cb = klineediturldropeventfilter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klineediturldropeventfilter_sendersignalindex_isbase) {
            klineediturldropeventfilter_sendersignalindex_isbase = false;
            return KLineEditUrlDropEventFilter::senderSignalIndex();
        }
        auto sendersignalindex_cb = klineediturldropeventfilter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KLineEditUrlDropEventFilter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klineediturldropeventfilter_receivers_isbase) {
            klineediturldropeventfilter_receivers_isbase = false;
            return KLineEditUrlDropEventFilter::receivers(signal);
        }
        auto receivers_cb = klineediturldropeventfilter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLineEditUrlDropEventFilter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klineediturldropeventfilter_issignalconnected_isbase) {
            klineediturldropeventfilter_issignalconnected_isbase = false;
            return KLineEditUrlDropEventFilter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = klineediturldropeventfilter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KLineEditUrlDropEventFilter_EventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
    friend bool KLineEditUrlDropEventFilter_SuperEventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
    friend void KLineEditUrlDropEventFilter_TimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperTimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
    friend void KLineEditUrlDropEventFilter_ChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
    friend void KLineEditUrlDropEventFilter_CustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperCustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
    friend void KLineEditUrlDropEventFilter_ConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
    friend void KLineEditUrlDropEventFilter_SuperConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
    friend void KLineEditUrlDropEventFilter_DisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
    friend void KLineEditUrlDropEventFilter_SuperDisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
    friend QObject* KLineEditUrlDropEventFilter_Sender(const KLineEditUrlDropEventFilter* self);
    friend QObject* KLineEditUrlDropEventFilter_SuperSender(const KLineEditUrlDropEventFilter* self);
    friend int KLineEditUrlDropEventFilter_SenderSignalIndex(const KLineEditUrlDropEventFilter* self);
    friend int KLineEditUrlDropEventFilter_SuperSenderSignalIndex(const KLineEditUrlDropEventFilter* self);
    friend int KLineEditUrlDropEventFilter_Receivers(const KLineEditUrlDropEventFilter* self, const char* signal);
    friend int KLineEditUrlDropEventFilter_SuperReceivers(const KLineEditUrlDropEventFilter* self, const char* signal);
    friend bool KLineEditUrlDropEventFilter_IsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
    friend bool KLineEditUrlDropEventFilter_SuperIsSignalConnected(const KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
};

#endif
