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
    using KColumnResizer_MetaObject_Callback = QMetaObject* (*)();
    using KColumnResizer_Metacast_Callback = void* (*)(KColumnResizer*, const char*);
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
    KColumnResizer_MetaObject_Callback kcolumnresizer_metaobject_callback = nullptr;
    KColumnResizer_Metacast_Callback kcolumnresizer_metacast_callback = nullptr;
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
    mutable bool kcolumnresizer_metaobject_isbase = false;
    mutable bool kcolumnresizer_metacast_isbase = false;
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

    // Callback setters
    inline void setKColumnResizer_MetaObject_Callback(KColumnResizer_MetaObject_Callback cb) { kcolumnresizer_metaobject_callback = cb; }
    inline void setKColumnResizer_Metacast_Callback(KColumnResizer_Metacast_Callback cb) { kcolumnresizer_metacast_callback = cb; }
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
    inline void setKColumnResizer_MetaObject_IsBase(bool value) const { kcolumnresizer_metaobject_isbase = value; }
    inline void setKColumnResizer_Metacast_IsBase(bool value) const { kcolumnresizer_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kcolumnresizer_metaobject_isbase) {
            kcolumnresizer_metaobject_isbase = false;
            return KColumnResizer::metaObject();
        }
        auto metaobject_cb = kcolumnresizer_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KColumnResizer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolumnresizer_metacast_isbase) {
            kcolumnresizer_metacast_isbase = false;
            return KColumnResizer::qt_metacast(param1);
        }
        auto metacast_cb = kcolumnresizer_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KColumnResizer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolumnresizer_metacall_isbase) {
            kcolumnresizer_metacall_isbase = false;
            return KColumnResizer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcolumnresizer_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColumnResizer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* event) override {
        if (kcolumnresizer_eventfilter_isbase) {
            kcolumnresizer_eventfilter_isbase = false;
            return KColumnResizer::eventFilter(param1, event);
        }
        auto eventfilter_cb = kcolumnresizer_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColumnResizer::eventFilter(param1, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolumnresizer_event_isbase) {
            kcolumnresizer_event_isbase = false;
            return KColumnResizer::event(event);
        }
        auto event_cb = kcolumnresizer_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KColumnResizer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolumnresizer_timerevent_isbase) {
            kcolumnresizer_timerevent_isbase = false;
            KColumnResizer::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcolumnresizer_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KColumnResizer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolumnresizer_childevent_isbase) {
            kcolumnresizer_childevent_isbase = false;
            KColumnResizer::childEvent(event);
            return;
        }
        auto childevent_cb = kcolumnresizer_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KColumnResizer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolumnresizer_customevent_isbase) {
            kcolumnresizer_customevent_isbase = false;
            KColumnResizer::customEvent(event);
            return;
        }
        auto customevent_cb = kcolumnresizer_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KColumnResizer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolumnresizer_connectnotify_isbase) {
            kcolumnresizer_connectnotify_isbase = false;
            KColumnResizer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcolumnresizer_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KColumnResizer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolumnresizer_disconnectnotify_isbase) {
            kcolumnresizer_disconnectnotify_isbase = false;
            KColumnResizer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcolumnresizer_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KColumnResizer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolumnresizer_sender_isbase) {
            kcolumnresizer_sender_isbase = false;
            return KColumnResizer::sender();
        }
        auto sender_cb = kcolumnresizer_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KColumnResizer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolumnresizer_sendersignalindex_isbase) {
            kcolumnresizer_sendersignalindex_isbase = false;
            return KColumnResizer::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcolumnresizer_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KColumnResizer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolumnresizer_receivers_isbase) {
            kcolumnresizer_receivers_isbase = false;
            return KColumnResizer::receivers(signal);
        }
        auto receivers_cb = kcolumnresizer_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColumnResizer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolumnresizer_issignalconnected_isbase) {
            kcolumnresizer_issignalconnected_isbase = false;
            return KColumnResizer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcolumnresizer_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KColumnResizer::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KColumnResizer_EventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
    friend bool KColumnResizer_SuperEventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
    friend void KColumnResizer_TimerEvent(KColumnResizer* self, QTimerEvent* event);
    friend void KColumnResizer_SuperTimerEvent(KColumnResizer* self, QTimerEvent* event);
    friend void KColumnResizer_ChildEvent(KColumnResizer* self, QChildEvent* event);
    friend void KColumnResizer_SuperChildEvent(KColumnResizer* self, QChildEvent* event);
    friend void KColumnResizer_CustomEvent(KColumnResizer* self, QEvent* event);
    friend void KColumnResizer_SuperCustomEvent(KColumnResizer* self, QEvent* event);
    friend void KColumnResizer_ConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_SuperConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_DisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_SuperDisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend QObject* KColumnResizer_Sender(const KColumnResizer* self);
    friend QObject* KColumnResizer_SuperSender(const KColumnResizer* self);
    friend int KColumnResizer_SenderSignalIndex(const KColumnResizer* self);
    friend int KColumnResizer_SuperSenderSignalIndex(const KColumnResizer* self);
    friend int KColumnResizer_Receivers(const KColumnResizer* self, const char* signal);
    friend int KColumnResizer_SuperReceivers(const KColumnResizer* self, const char* signal);
    friend bool KColumnResizer_IsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal);
    friend bool KColumnResizer_SuperIsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal);
};

#endif
