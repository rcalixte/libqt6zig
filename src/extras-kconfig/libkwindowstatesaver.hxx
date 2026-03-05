#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKWINDOWSTATESAVER_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKWINDOWSTATESAVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWindowStateSaver so that we can call protected methods
class VirtualKWindowStateSaver final : public KWindowStateSaver {

  public:
    // Virtual class boolean flag
    bool isVirtualKWindowStateSaver = true;

    // Virtual class public types (including callbacks)
    using KWindowStateSaver_MetaObject_Callback = QMetaObject* (*)();
    using KWindowStateSaver_Metacast_Callback = void* (*)(KWindowStateSaver*, const char*);
    using KWindowStateSaver_Metacall_Callback = int (*)(KWindowStateSaver*, int, int, void**);
    using KWindowStateSaver_Event_Callback = bool (*)(KWindowStateSaver*, QEvent*);
    using KWindowStateSaver_ChildEvent_Callback = void (*)(KWindowStateSaver*, QChildEvent*);
    using KWindowStateSaver_CustomEvent_Callback = void (*)(KWindowStateSaver*, QEvent*);
    using KWindowStateSaver_ConnectNotify_Callback = void (*)(KWindowStateSaver*, QMetaMethod*);
    using KWindowStateSaver_DisconnectNotify_Callback = void (*)(KWindowStateSaver*, QMetaMethod*);
    using KWindowStateSaver_Sender_Callback = QObject* (*)();
    using KWindowStateSaver_SenderSignalIndex_Callback = int (*)();
    using KWindowStateSaver_Receivers_Callback = int (*)(const KWindowStateSaver*, const char*);
    using KWindowStateSaver_IsSignalConnected_Callback = bool (*)(const KWindowStateSaver*, QMetaMethod*);

  protected:
    // Instance callback storage
    KWindowStateSaver_MetaObject_Callback kwindowstatesaver_metaobject_callback = nullptr;
    KWindowStateSaver_Metacast_Callback kwindowstatesaver_metacast_callback = nullptr;
    KWindowStateSaver_Metacall_Callback kwindowstatesaver_metacall_callback = nullptr;
    KWindowStateSaver_Event_Callback kwindowstatesaver_event_callback = nullptr;
    KWindowStateSaver_ChildEvent_Callback kwindowstatesaver_childevent_callback = nullptr;
    KWindowStateSaver_CustomEvent_Callback kwindowstatesaver_customevent_callback = nullptr;
    KWindowStateSaver_ConnectNotify_Callback kwindowstatesaver_connectnotify_callback = nullptr;
    KWindowStateSaver_DisconnectNotify_Callback kwindowstatesaver_disconnectnotify_callback = nullptr;
    KWindowStateSaver_Sender_Callback kwindowstatesaver_sender_callback = nullptr;
    KWindowStateSaver_SenderSignalIndex_Callback kwindowstatesaver_sendersignalindex_callback = nullptr;
    KWindowStateSaver_Receivers_Callback kwindowstatesaver_receivers_callback = nullptr;
    KWindowStateSaver_IsSignalConnected_Callback kwindowstatesaver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwindowstatesaver_metaobject_isbase = false;
    mutable bool kwindowstatesaver_metacast_isbase = false;
    mutable bool kwindowstatesaver_metacall_isbase = false;
    mutable bool kwindowstatesaver_event_isbase = false;
    mutable bool kwindowstatesaver_childevent_isbase = false;
    mutable bool kwindowstatesaver_customevent_isbase = false;
    mutable bool kwindowstatesaver_connectnotify_isbase = false;
    mutable bool kwindowstatesaver_disconnectnotify_isbase = false;
    mutable bool kwindowstatesaver_sender_isbase = false;
    mutable bool kwindowstatesaver_sendersignalindex_isbase = false;
    mutable bool kwindowstatesaver_receivers_isbase = false;
    mutable bool kwindowstatesaver_issignalconnected_isbase = false;

  public:
    VirtualKWindowStateSaver(QWindow* window, const KConfigGroup& configGroup) : KWindowStateSaver(window, configGroup) {};
    VirtualKWindowStateSaver(QWindow* window, const QString& configGroupName) : KWindowStateSaver(window, configGroupName) {};

    // Callback setters
    inline void setKWindowStateSaver_MetaObject_Callback(KWindowStateSaver_MetaObject_Callback cb) { kwindowstatesaver_metaobject_callback = cb; }
    inline void setKWindowStateSaver_Metacast_Callback(KWindowStateSaver_Metacast_Callback cb) { kwindowstatesaver_metacast_callback = cb; }
    inline void setKWindowStateSaver_Metacall_Callback(KWindowStateSaver_Metacall_Callback cb) { kwindowstatesaver_metacall_callback = cb; }
    inline void setKWindowStateSaver_Event_Callback(KWindowStateSaver_Event_Callback cb) { kwindowstatesaver_event_callback = cb; }
    inline void setKWindowStateSaver_ChildEvent_Callback(KWindowStateSaver_ChildEvent_Callback cb) { kwindowstatesaver_childevent_callback = cb; }
    inline void setKWindowStateSaver_CustomEvent_Callback(KWindowStateSaver_CustomEvent_Callback cb) { kwindowstatesaver_customevent_callback = cb; }
    inline void setKWindowStateSaver_ConnectNotify_Callback(KWindowStateSaver_ConnectNotify_Callback cb) { kwindowstatesaver_connectnotify_callback = cb; }
    inline void setKWindowStateSaver_DisconnectNotify_Callback(KWindowStateSaver_DisconnectNotify_Callback cb) { kwindowstatesaver_disconnectnotify_callback = cb; }
    inline void setKWindowStateSaver_Sender_Callback(KWindowStateSaver_Sender_Callback cb) { kwindowstatesaver_sender_callback = cb; }
    inline void setKWindowStateSaver_SenderSignalIndex_Callback(KWindowStateSaver_SenderSignalIndex_Callback cb) { kwindowstatesaver_sendersignalindex_callback = cb; }
    inline void setKWindowStateSaver_Receivers_Callback(KWindowStateSaver_Receivers_Callback cb) { kwindowstatesaver_receivers_callback = cb; }
    inline void setKWindowStateSaver_IsSignalConnected_Callback(KWindowStateSaver_IsSignalConnected_Callback cb) { kwindowstatesaver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWindowStateSaver_MetaObject_IsBase(bool value) const { kwindowstatesaver_metaobject_isbase = value; }
    inline void setKWindowStateSaver_Metacast_IsBase(bool value) const { kwindowstatesaver_metacast_isbase = value; }
    inline void setKWindowStateSaver_Metacall_IsBase(bool value) const { kwindowstatesaver_metacall_isbase = value; }
    inline void setKWindowStateSaver_Event_IsBase(bool value) const { kwindowstatesaver_event_isbase = value; }
    inline void setKWindowStateSaver_ChildEvent_IsBase(bool value) const { kwindowstatesaver_childevent_isbase = value; }
    inline void setKWindowStateSaver_CustomEvent_IsBase(bool value) const { kwindowstatesaver_customevent_isbase = value; }
    inline void setKWindowStateSaver_ConnectNotify_IsBase(bool value) const { kwindowstatesaver_connectnotify_isbase = value; }
    inline void setKWindowStateSaver_DisconnectNotify_IsBase(bool value) const { kwindowstatesaver_disconnectnotify_isbase = value; }
    inline void setKWindowStateSaver_Sender_IsBase(bool value) const { kwindowstatesaver_sender_isbase = value; }
    inline void setKWindowStateSaver_SenderSignalIndex_IsBase(bool value) const { kwindowstatesaver_sendersignalindex_isbase = value; }
    inline void setKWindowStateSaver_Receivers_IsBase(bool value) const { kwindowstatesaver_receivers_isbase = value; }
    inline void setKWindowStateSaver_IsSignalConnected_IsBase(bool value) const { kwindowstatesaver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kwindowstatesaver_metaobject_isbase) {
            kwindowstatesaver_metaobject_isbase = false;
            return KWindowStateSaver::metaObject();
        }
        auto metaobject_cb = kwindowstatesaver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KWindowStateSaver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kwindowstatesaver_metacast_isbase) {
            kwindowstatesaver_metacast_isbase = false;
            return KWindowStateSaver::qt_metacast(param1);
        }
        auto metacast_cb = kwindowstatesaver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KWindowStateSaver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwindowstatesaver_metacall_isbase) {
            kwindowstatesaver_metacall_isbase = false;
            return KWindowStateSaver::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kwindowstatesaver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KWindowStateSaver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwindowstatesaver_event_isbase) {
            kwindowstatesaver_event_isbase = false;
            return KWindowStateSaver::event(event);
        }
        auto event_cb = kwindowstatesaver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KWindowStateSaver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwindowstatesaver_childevent_isbase) {
            kwindowstatesaver_childevent_isbase = false;
            KWindowStateSaver::childEvent(event);
            return;
        }
        auto childevent_cb = kwindowstatesaver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KWindowStateSaver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwindowstatesaver_customevent_isbase) {
            kwindowstatesaver_customevent_isbase = false;
            KWindowStateSaver::customEvent(event);
            return;
        }
        auto customevent_cb = kwindowstatesaver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KWindowStateSaver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwindowstatesaver_connectnotify_isbase) {
            kwindowstatesaver_connectnotify_isbase = false;
            KWindowStateSaver::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kwindowstatesaver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KWindowStateSaver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwindowstatesaver_disconnectnotify_isbase) {
            kwindowstatesaver_disconnectnotify_isbase = false;
            KWindowStateSaver::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kwindowstatesaver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KWindowStateSaver::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwindowstatesaver_sender_isbase) {
            kwindowstatesaver_sender_isbase = false;
            return KWindowStateSaver::sender();
        }
        auto sender_cb = kwindowstatesaver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KWindowStateSaver::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwindowstatesaver_sendersignalindex_isbase) {
            kwindowstatesaver_sendersignalindex_isbase = false;
            return KWindowStateSaver::senderSignalIndex();
        }
        auto sendersignalindex_cb = kwindowstatesaver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KWindowStateSaver::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwindowstatesaver_receivers_isbase) {
            kwindowstatesaver_receivers_isbase = false;
            return KWindowStateSaver::receivers(signal);
        }
        auto receivers_cb = kwindowstatesaver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KWindowStateSaver::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwindowstatesaver_issignalconnected_isbase) {
            kwindowstatesaver_issignalconnected_isbase = false;
            return KWindowStateSaver::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kwindowstatesaver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KWindowStateSaver::isSignalConnected(signal);
    }

    // Friend functions
    friend void KWindowStateSaver_ChildEvent(KWindowStateSaver* self, QChildEvent* event);
    friend void KWindowStateSaver_SuperChildEvent(KWindowStateSaver* self, QChildEvent* event);
    friend void KWindowStateSaver_CustomEvent(KWindowStateSaver* self, QEvent* event);
    friend void KWindowStateSaver_SuperCustomEvent(KWindowStateSaver* self, QEvent* event);
    friend void KWindowStateSaver_ConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_SuperConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_DisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend void KWindowStateSaver_SuperDisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
    friend QObject* KWindowStateSaver_Sender(const KWindowStateSaver* self);
    friend QObject* KWindowStateSaver_SuperSender(const KWindowStateSaver* self);
    friend int KWindowStateSaver_SenderSignalIndex(const KWindowStateSaver* self);
    friend int KWindowStateSaver_SuperSenderSignalIndex(const KWindowStateSaver* self);
    friend int KWindowStateSaver_Receivers(const KWindowStateSaver* self, const char* signal);
    friend int KWindowStateSaver_SuperReceivers(const KWindowStateSaver* self, const char* signal);
    friend bool KWindowStateSaver_IsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal);
    friend bool KWindowStateSaver_SuperIsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal);
};

#endif
