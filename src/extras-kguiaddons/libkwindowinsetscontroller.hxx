#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKWINDOWINSETSCONTROLLER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKWINDOWINSETSCONTROLLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowInsetsController so that we can call protected methods
class VirtualKWindowInsetsController final : public KWindowInsetsController {

  public:
    // Virtual class boolean flag
    bool isVirtualKWindowInsetsController = true;

    // Virtual class public types (including callbacks)
    using KWindowInsetsController_MetaObject_Callback = QMetaObject* (*)();
    using KWindowInsetsController_Metacast_Callback = void* (*)(KWindowInsetsController*, const char*);
    using KWindowInsetsController_Metacall_Callback = int (*)(KWindowInsetsController*, int, int, void**);
    using KWindowInsetsController_Event_Callback = bool (*)(KWindowInsetsController*, QEvent*);
    using KWindowInsetsController_EventFilter_Callback = bool (*)(KWindowInsetsController*, QObject*, QEvent*);
    using KWindowInsetsController_TimerEvent_Callback = void (*)(KWindowInsetsController*, QTimerEvent*);
    using KWindowInsetsController_ChildEvent_Callback = void (*)(KWindowInsetsController*, QChildEvent*);
    using KWindowInsetsController_CustomEvent_Callback = void (*)(KWindowInsetsController*, QEvent*);
    using KWindowInsetsController_ConnectNotify_Callback = void (*)(KWindowInsetsController*, QMetaMethod*);
    using KWindowInsetsController_DisconnectNotify_Callback = void (*)(KWindowInsetsController*, QMetaMethod*);
    using KWindowInsetsController_Sender_Callback = QObject* (*)();
    using KWindowInsetsController_SenderSignalIndex_Callback = int (*)();
    using KWindowInsetsController_Receivers_Callback = int (*)(const KWindowInsetsController*, const char*);
    using KWindowInsetsController_IsSignalConnected_Callback = bool (*)(const KWindowInsetsController*, QMetaMethod*);

  protected:
    // Instance callback storage
    KWindowInsetsController_MetaObject_Callback kwindowinsetscontroller_metaobject_callback = nullptr;
    KWindowInsetsController_Metacast_Callback kwindowinsetscontroller_metacast_callback = nullptr;
    KWindowInsetsController_Metacall_Callback kwindowinsetscontroller_metacall_callback = nullptr;
    KWindowInsetsController_Event_Callback kwindowinsetscontroller_event_callback = nullptr;
    KWindowInsetsController_EventFilter_Callback kwindowinsetscontroller_eventfilter_callback = nullptr;
    KWindowInsetsController_TimerEvent_Callback kwindowinsetscontroller_timerevent_callback = nullptr;
    KWindowInsetsController_ChildEvent_Callback kwindowinsetscontroller_childevent_callback = nullptr;
    KWindowInsetsController_CustomEvent_Callback kwindowinsetscontroller_customevent_callback = nullptr;
    KWindowInsetsController_ConnectNotify_Callback kwindowinsetscontroller_connectnotify_callback = nullptr;
    KWindowInsetsController_DisconnectNotify_Callback kwindowinsetscontroller_disconnectnotify_callback = nullptr;
    KWindowInsetsController_Sender_Callback kwindowinsetscontroller_sender_callback = nullptr;
    KWindowInsetsController_SenderSignalIndex_Callback kwindowinsetscontroller_sendersignalindex_callback = nullptr;
    KWindowInsetsController_Receivers_Callback kwindowinsetscontroller_receivers_callback = nullptr;
    KWindowInsetsController_IsSignalConnected_Callback kwindowinsetscontroller_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwindowinsetscontroller_metaobject_isbase = false;
    mutable bool kwindowinsetscontroller_metacast_isbase = false;
    mutable bool kwindowinsetscontroller_metacall_isbase = false;
    mutable bool kwindowinsetscontroller_event_isbase = false;
    mutable bool kwindowinsetscontroller_eventfilter_isbase = false;
    mutable bool kwindowinsetscontroller_timerevent_isbase = false;
    mutable bool kwindowinsetscontroller_childevent_isbase = false;
    mutable bool kwindowinsetscontroller_customevent_isbase = false;
    mutable bool kwindowinsetscontroller_connectnotify_isbase = false;
    mutable bool kwindowinsetscontroller_disconnectnotify_isbase = false;
    mutable bool kwindowinsetscontroller_sender_isbase = false;
    mutable bool kwindowinsetscontroller_sendersignalindex_isbase = false;
    mutable bool kwindowinsetscontroller_receivers_isbase = false;
    mutable bool kwindowinsetscontroller_issignalconnected_isbase = false;

  public:
    VirtualKWindowInsetsController() : KWindowInsetsController() {};
    VirtualKWindowInsetsController(QObject* parent) : KWindowInsetsController(parent) {};

    // Callback setters
    inline void setKWindowInsetsController_MetaObject_Callback(KWindowInsetsController_MetaObject_Callback cb) { kwindowinsetscontroller_metaobject_callback = cb; }
    inline void setKWindowInsetsController_Metacast_Callback(KWindowInsetsController_Metacast_Callback cb) { kwindowinsetscontroller_metacast_callback = cb; }
    inline void setKWindowInsetsController_Metacall_Callback(KWindowInsetsController_Metacall_Callback cb) { kwindowinsetscontroller_metacall_callback = cb; }
    inline void setKWindowInsetsController_Event_Callback(KWindowInsetsController_Event_Callback cb) { kwindowinsetscontroller_event_callback = cb; }
    inline void setKWindowInsetsController_EventFilter_Callback(KWindowInsetsController_EventFilter_Callback cb) { kwindowinsetscontroller_eventfilter_callback = cb; }
    inline void setKWindowInsetsController_TimerEvent_Callback(KWindowInsetsController_TimerEvent_Callback cb) { kwindowinsetscontroller_timerevent_callback = cb; }
    inline void setKWindowInsetsController_ChildEvent_Callback(KWindowInsetsController_ChildEvent_Callback cb) { kwindowinsetscontroller_childevent_callback = cb; }
    inline void setKWindowInsetsController_CustomEvent_Callback(KWindowInsetsController_CustomEvent_Callback cb) { kwindowinsetscontroller_customevent_callback = cb; }
    inline void setKWindowInsetsController_ConnectNotify_Callback(KWindowInsetsController_ConnectNotify_Callback cb) { kwindowinsetscontroller_connectnotify_callback = cb; }
    inline void setKWindowInsetsController_DisconnectNotify_Callback(KWindowInsetsController_DisconnectNotify_Callback cb) { kwindowinsetscontroller_disconnectnotify_callback = cb; }
    inline void setKWindowInsetsController_Sender_Callback(KWindowInsetsController_Sender_Callback cb) { kwindowinsetscontroller_sender_callback = cb; }
    inline void setKWindowInsetsController_SenderSignalIndex_Callback(KWindowInsetsController_SenderSignalIndex_Callback cb) { kwindowinsetscontroller_sendersignalindex_callback = cb; }
    inline void setKWindowInsetsController_Receivers_Callback(KWindowInsetsController_Receivers_Callback cb) { kwindowinsetscontroller_receivers_callback = cb; }
    inline void setKWindowInsetsController_IsSignalConnected_Callback(KWindowInsetsController_IsSignalConnected_Callback cb) { kwindowinsetscontroller_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWindowInsetsController_MetaObject_IsBase(bool value) const { kwindowinsetscontroller_metaobject_isbase = value; }
    inline void setKWindowInsetsController_Metacast_IsBase(bool value) const { kwindowinsetscontroller_metacast_isbase = value; }
    inline void setKWindowInsetsController_Metacall_IsBase(bool value) const { kwindowinsetscontroller_metacall_isbase = value; }
    inline void setKWindowInsetsController_Event_IsBase(bool value) const { kwindowinsetscontroller_event_isbase = value; }
    inline void setKWindowInsetsController_EventFilter_IsBase(bool value) const { kwindowinsetscontroller_eventfilter_isbase = value; }
    inline void setKWindowInsetsController_TimerEvent_IsBase(bool value) const { kwindowinsetscontroller_timerevent_isbase = value; }
    inline void setKWindowInsetsController_ChildEvent_IsBase(bool value) const { kwindowinsetscontroller_childevent_isbase = value; }
    inline void setKWindowInsetsController_CustomEvent_IsBase(bool value) const { kwindowinsetscontroller_customevent_isbase = value; }
    inline void setKWindowInsetsController_ConnectNotify_IsBase(bool value) const { kwindowinsetscontroller_connectnotify_isbase = value; }
    inline void setKWindowInsetsController_DisconnectNotify_IsBase(bool value) const { kwindowinsetscontroller_disconnectnotify_isbase = value; }
    inline void setKWindowInsetsController_Sender_IsBase(bool value) const { kwindowinsetscontroller_sender_isbase = value; }
    inline void setKWindowInsetsController_SenderSignalIndex_IsBase(bool value) const { kwindowinsetscontroller_sendersignalindex_isbase = value; }
    inline void setKWindowInsetsController_Receivers_IsBase(bool value) const { kwindowinsetscontroller_receivers_isbase = value; }
    inline void setKWindowInsetsController_IsSignalConnected_IsBase(bool value) const { kwindowinsetscontroller_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwindowinsetscontroller_metaobject_isbase) {
            kwindowinsetscontroller_metaobject_isbase = false;
            return KWindowInsetsController::metaObject();
        }
        auto metaobject_cb = kwindowinsetscontroller_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KWindowInsetsController::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwindowinsetscontroller_metacast_isbase) {
            kwindowinsetscontroller_metacast_isbase = false;
            return KWindowInsetsController::qt_metacast(param1);
        }
        auto metacast_cb = kwindowinsetscontroller_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KWindowInsetsController::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowinsetscontroller_metacall_isbase) {
            kwindowinsetscontroller_metacall_isbase = false;
            return KWindowInsetsController::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kwindowinsetscontroller_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWindowInsetsController::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowinsetscontroller_event_isbase) {
            kwindowinsetscontroller_event_isbase = false;
            return KWindowInsetsController::event(event);
        }
        auto event_cb = kwindowinsetscontroller_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KWindowInsetsController::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwindowinsetscontroller_eventfilter_isbase) {
            kwindowinsetscontroller_eventfilter_isbase = false;
            return KWindowInsetsController::eventFilter(watched, event);
        }
        auto eventfilter_cb = kwindowinsetscontroller_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KWindowInsetsController::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwindowinsetscontroller_timerevent_isbase) {
            kwindowinsetscontroller_timerevent_isbase = false;
            KWindowInsetsController::timerEvent(event);
            return;
        }
        auto timerevent_cb = kwindowinsetscontroller_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KWindowInsetsController::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowinsetscontroller_childevent_isbase) {
            kwindowinsetscontroller_childevent_isbase = false;
            KWindowInsetsController::childEvent(event);
            return;
        }
        auto childevent_cb = kwindowinsetscontroller_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KWindowInsetsController::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowinsetscontroller_customevent_isbase) {
            kwindowinsetscontroller_customevent_isbase = false;
            KWindowInsetsController::customEvent(event);
            return;
        }
        auto customevent_cb = kwindowinsetscontroller_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KWindowInsetsController::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowinsetscontroller_connectnotify_isbase) {
            kwindowinsetscontroller_connectnotify_isbase = false;
            KWindowInsetsController::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kwindowinsetscontroller_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KWindowInsetsController::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowinsetscontroller_disconnectnotify_isbase) {
            kwindowinsetscontroller_disconnectnotify_isbase = false;
            KWindowInsetsController::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kwindowinsetscontroller_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KWindowInsetsController::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwindowinsetscontroller_sender_isbase) {
            kwindowinsetscontroller_sender_isbase = false;
            return KWindowInsetsController::sender();
        }
        auto sender_cb = kwindowinsetscontroller_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KWindowInsetsController::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwindowinsetscontroller_sendersignalindex_isbase) {
            kwindowinsetscontroller_sendersignalindex_isbase = false;
            return KWindowInsetsController::senderSignalIndex();
        }
        auto sendersignalindex_cb = kwindowinsetscontroller_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KWindowInsetsController::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwindowinsetscontroller_receivers_isbase) {
            kwindowinsetscontroller_receivers_isbase = false;
            return KWindowInsetsController::receivers(signal);
        }
        auto receivers_cb = kwindowinsetscontroller_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KWindowInsetsController::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwindowinsetscontroller_issignalconnected_isbase) {
            kwindowinsetscontroller_issignalconnected_isbase = false;
            return KWindowInsetsController::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kwindowinsetscontroller_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KWindowInsetsController::isSignalConnected(signal);
    }

    // Friend functions
    friend void KWindowInsetsController_TimerEvent(KWindowInsetsController* self, QTimerEvent* event);
    friend void KWindowInsetsController_SuperTimerEvent(KWindowInsetsController* self, QTimerEvent* event);
    friend void KWindowInsetsController_ChildEvent(KWindowInsetsController* self, QChildEvent* event);
    friend void KWindowInsetsController_SuperChildEvent(KWindowInsetsController* self, QChildEvent* event);
    friend void KWindowInsetsController_CustomEvent(KWindowInsetsController* self, QEvent* event);
    friend void KWindowInsetsController_SuperCustomEvent(KWindowInsetsController* self, QEvent* event);
    friend void KWindowInsetsController_ConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_SuperConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_DisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend void KWindowInsetsController_SuperDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
    friend QObject* KWindowInsetsController_Sender(const KWindowInsetsController* self);
    friend QObject* KWindowInsetsController_SuperSender(const KWindowInsetsController* self);
    friend int KWindowInsetsController_SenderSignalIndex(const KWindowInsetsController* self);
    friend int KWindowInsetsController_SuperSenderSignalIndex(const KWindowInsetsController* self);
    friend int KWindowInsetsController_Receivers(const KWindowInsetsController* self, const char* signal);
    friend int KWindowInsetsController_SuperReceivers(const KWindowInsetsController* self, const char* signal);
    friend bool KWindowInsetsController_IsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
    friend bool KWindowInsetsController_SuperIsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
};

#endif
