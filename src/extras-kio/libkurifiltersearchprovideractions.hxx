#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURIFILTERSEARCHPROVIDERACTIONS_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURIFILTERSEARCHPROVIDERACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::KUriFilterSearchProviderActions so that we can call protected methods
class VirtualKIOKUriFilterSearchProviderActions final : public KIO::KUriFilterSearchProviderActions {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOKUriFilterSearchProviderActions = true;

    // Virtual class public types (including callbacks)
    using KIO__KUriFilterSearchProviderActions_MetaObject_Callback = QMetaObject* (*)();
    using KIO__KUriFilterSearchProviderActions_Metacast_Callback = void* (*)(KIO__KUriFilterSearchProviderActions*, const char*);
    using KIO__KUriFilterSearchProviderActions_Metacall_Callback = int (*)(KIO__KUriFilterSearchProviderActions*, int, int, void**);
    using KIO__KUriFilterSearchProviderActions_Event_Callback = bool (*)(KIO__KUriFilterSearchProviderActions*, QEvent*);
    using KIO__KUriFilterSearchProviderActions_EventFilter_Callback = bool (*)(KIO__KUriFilterSearchProviderActions*, QObject*, QEvent*);
    using KIO__KUriFilterSearchProviderActions_TimerEvent_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QTimerEvent*);
    using KIO__KUriFilterSearchProviderActions_ChildEvent_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QChildEvent*);
    using KIO__KUriFilterSearchProviderActions_CustomEvent_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QEvent*);
    using KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QMetaMethod*);
    using KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QMetaMethod*);
    using KIO__KUriFilterSearchProviderActions_Sender_Callback = QObject* (*)();
    using KIO__KUriFilterSearchProviderActions_SenderSignalIndex_Callback = int (*)();
    using KIO__KUriFilterSearchProviderActions_Receivers_Callback = int (*)(const KIO__KUriFilterSearchProviderActions*, const char*);
    using KIO__KUriFilterSearchProviderActions_IsSignalConnected_Callback = bool (*)(const KIO__KUriFilterSearchProviderActions*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__KUriFilterSearchProviderActions_MetaObject_Callback kio__kurifiltersearchprovideractions_metaobject_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Metacast_Callback kio__kurifiltersearchprovideractions_metacast_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Metacall_Callback kio__kurifiltersearchprovideractions_metacall_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Event_Callback kio__kurifiltersearchprovideractions_event_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_EventFilter_Callback kio__kurifiltersearchprovideractions_eventfilter_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_TimerEvent_Callback kio__kurifiltersearchprovideractions_timerevent_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_ChildEvent_Callback kio__kurifiltersearchprovideractions_childevent_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_CustomEvent_Callback kio__kurifiltersearchprovideractions_customevent_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback kio__kurifiltersearchprovideractions_connectnotify_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback kio__kurifiltersearchprovideractions_disconnectnotify_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Sender_Callback kio__kurifiltersearchprovideractions_sender_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_SenderSignalIndex_Callback kio__kurifiltersearchprovideractions_sendersignalindex_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Receivers_Callback kio__kurifiltersearchprovideractions_receivers_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_IsSignalConnected_Callback kio__kurifiltersearchprovideractions_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__kurifiltersearchprovideractions_metaobject_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_metacast_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_metacall_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_event_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_eventfilter_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_timerevent_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_childevent_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_customevent_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_connectnotify_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_disconnectnotify_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_sender_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_sendersignalindex_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_receivers_isbase = false;
    mutable bool kio__kurifiltersearchprovideractions_issignalconnected_isbase = false;

  public:
    VirtualKIOKUriFilterSearchProviderActions() : KIO::KUriFilterSearchProviderActions() {};
    VirtualKIOKUriFilterSearchProviderActions(QObject* parent) : KIO::KUriFilterSearchProviderActions(parent) {};

    // Callback setters
    inline void setKIO__KUriFilterSearchProviderActions_MetaObject_Callback(KIO__KUriFilterSearchProviderActions_MetaObject_Callback cb) { kio__kurifiltersearchprovideractions_metaobject_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_Metacast_Callback(KIO__KUriFilterSearchProviderActions_Metacast_Callback cb) { kio__kurifiltersearchprovideractions_metacast_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_Metacall_Callback(KIO__KUriFilterSearchProviderActions_Metacall_Callback cb) { kio__kurifiltersearchprovideractions_metacall_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_Event_Callback(KIO__KUriFilterSearchProviderActions_Event_Callback cb) { kio__kurifiltersearchprovideractions_event_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_EventFilter_Callback(KIO__KUriFilterSearchProviderActions_EventFilter_Callback cb) { kio__kurifiltersearchprovideractions_eventfilter_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_TimerEvent_Callback(KIO__KUriFilterSearchProviderActions_TimerEvent_Callback cb) { kio__kurifiltersearchprovideractions_timerevent_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_ChildEvent_Callback(KIO__KUriFilterSearchProviderActions_ChildEvent_Callback cb) { kio__kurifiltersearchprovideractions_childevent_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_CustomEvent_Callback(KIO__KUriFilterSearchProviderActions_CustomEvent_Callback cb) { kio__kurifiltersearchprovideractions_customevent_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_ConnectNotify_Callback(KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback cb) { kio__kurifiltersearchprovideractions_connectnotify_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback(KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback cb) { kio__kurifiltersearchprovideractions_disconnectnotify_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_Sender_Callback(KIO__KUriFilterSearchProviderActions_Sender_Callback cb) { kio__kurifiltersearchprovideractions_sender_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_SenderSignalIndex_Callback(KIO__KUriFilterSearchProviderActions_SenderSignalIndex_Callback cb) { kio__kurifiltersearchprovideractions_sendersignalindex_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_Receivers_Callback(KIO__KUriFilterSearchProviderActions_Receivers_Callback cb) { kio__kurifiltersearchprovideractions_receivers_callback = cb; }
    inline void setKIO__KUriFilterSearchProviderActions_IsSignalConnected_Callback(KIO__KUriFilterSearchProviderActions_IsSignalConnected_Callback cb) { kio__kurifiltersearchprovideractions_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__KUriFilterSearchProviderActions_MetaObject_IsBase(bool value) const { kio__kurifiltersearchprovideractions_metaobject_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_Metacast_IsBase(bool value) const { kio__kurifiltersearchprovideractions_metacast_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_Metacall_IsBase(bool value) const { kio__kurifiltersearchprovideractions_metacall_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_Event_IsBase(bool value) const { kio__kurifiltersearchprovideractions_event_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_EventFilter_IsBase(bool value) const { kio__kurifiltersearchprovideractions_eventfilter_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_TimerEvent_IsBase(bool value) const { kio__kurifiltersearchprovideractions_timerevent_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_ChildEvent_IsBase(bool value) const { kio__kurifiltersearchprovideractions_childevent_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_CustomEvent_IsBase(bool value) const { kio__kurifiltersearchprovideractions_customevent_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_ConnectNotify_IsBase(bool value) const { kio__kurifiltersearchprovideractions_connectnotify_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_DisconnectNotify_IsBase(bool value) const { kio__kurifiltersearchprovideractions_disconnectnotify_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_Sender_IsBase(bool value) const { kio__kurifiltersearchprovideractions_sender_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_SenderSignalIndex_IsBase(bool value) const { kio__kurifiltersearchprovideractions_sendersignalindex_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_Receivers_IsBase(bool value) const { kio__kurifiltersearchprovideractions_receivers_isbase = value; }
    inline void setKIO__KUriFilterSearchProviderActions_IsSignalConnected_IsBase(bool value) const { kio__kurifiltersearchprovideractions_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__kurifiltersearchprovideractions_metaobject_isbase) {
            kio__kurifiltersearchprovideractions_metaobject_isbase = false;
            return KIO__KUriFilterSearchProviderActions::metaObject();
        }
        auto metaobject_cb = kio__kurifiltersearchprovideractions_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__kurifiltersearchprovideractions_metacast_isbase) {
            kio__kurifiltersearchprovideractions_metacast_isbase = false;
            return KIO__KUriFilterSearchProviderActions::qt_metacast(param1);
        }
        auto metacast_cb = kio__kurifiltersearchprovideractions_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__kurifiltersearchprovideractions_metacall_isbase) {
            kio__kurifiltersearchprovideractions_metacall_isbase = false;
            return KIO__KUriFilterSearchProviderActions::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kio__kurifiltersearchprovideractions_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__KUriFilterSearchProviderActions::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__kurifiltersearchprovideractions_event_isbase) {
            kio__kurifiltersearchprovideractions_event_isbase = false;
            return KIO__KUriFilterSearchProviderActions::event(event);
        }
        auto event_cb = kio__kurifiltersearchprovideractions_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__kurifiltersearchprovideractions_eventfilter_isbase) {
            kio__kurifiltersearchprovideractions_eventfilter_isbase = false;
            return KIO__KUriFilterSearchProviderActions::eventFilter(watched, event);
        }
        auto eventfilter_cb = kio__kurifiltersearchprovideractions_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__kurifiltersearchprovideractions_timerevent_isbase) {
            kio__kurifiltersearchprovideractions_timerevent_isbase = false;
            KIO__KUriFilterSearchProviderActions::timerEvent(event);
            return;
        }
        auto timerevent_cb = kio__kurifiltersearchprovideractions_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__kurifiltersearchprovideractions_childevent_isbase) {
            kio__kurifiltersearchprovideractions_childevent_isbase = false;
            KIO__KUriFilterSearchProviderActions::childEvent(event);
            return;
        }
        auto childevent_cb = kio__kurifiltersearchprovideractions_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__kurifiltersearchprovideractions_customevent_isbase) {
            kio__kurifiltersearchprovideractions_customevent_isbase = false;
            KIO__KUriFilterSearchProviderActions::customEvent(event);
            return;
        }
        auto customevent_cb = kio__kurifiltersearchprovideractions_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__kurifiltersearchprovideractions_connectnotify_isbase) {
            kio__kurifiltersearchprovideractions_connectnotify_isbase = false;
            KIO__KUriFilterSearchProviderActions::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kio__kurifiltersearchprovideractions_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__kurifiltersearchprovideractions_disconnectnotify_isbase) {
            kio__kurifiltersearchprovideractions_disconnectnotify_isbase = false;
            KIO__KUriFilterSearchProviderActions::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kio__kurifiltersearchprovideractions_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__kurifiltersearchprovideractions_sender_isbase) {
            kio__kurifiltersearchprovideractions_sender_isbase = false;
            return KIO__KUriFilterSearchProviderActions::sender();
        }
        auto sender_cb = kio__kurifiltersearchprovideractions_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__kurifiltersearchprovideractions_sendersignalindex_isbase) {
            kio__kurifiltersearchprovideractions_sendersignalindex_isbase = false;
            return KIO__KUriFilterSearchProviderActions::senderSignalIndex();
        }
        auto sendersignalindex_cb = kio__kurifiltersearchprovideractions_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KIO__KUriFilterSearchProviderActions::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__kurifiltersearchprovideractions_receivers_isbase) {
            kio__kurifiltersearchprovideractions_receivers_isbase = false;
            return KIO__KUriFilterSearchProviderActions::receivers(signal);
        }
        auto receivers_cb = kio__kurifiltersearchprovideractions_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__KUriFilterSearchProviderActions::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__kurifiltersearchprovideractions_issignalconnected_isbase) {
            kio__kurifiltersearchprovideractions_issignalconnected_isbase = false;
            return KIO__KUriFilterSearchProviderActions::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kio__kurifiltersearchprovideractions_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::isSignalConnected(signal);
    }

    // Friend functions
    friend void KIO__KUriFilterSearchProviderActions_TimerEvent(KIO::KUriFilterSearchProviderActions* self, QTimerEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_SuperTimerEvent(KIO::KUriFilterSearchProviderActions* self, QTimerEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_ChildEvent(KIO::KUriFilterSearchProviderActions* self, QChildEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_SuperChildEvent(KIO::KUriFilterSearchProviderActions* self, QChildEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_CustomEvent(KIO::KUriFilterSearchProviderActions* self, QEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_SuperCustomEvent(KIO::KUriFilterSearchProviderActions* self, QEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_ConnectNotify(KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
    friend void KIO__KUriFilterSearchProviderActions_SuperConnectNotify(KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
    friend void KIO__KUriFilterSearchProviderActions_DisconnectNotify(KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
    friend void KIO__KUriFilterSearchProviderActions_SuperDisconnectNotify(KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
    friend QObject* KIO__KUriFilterSearchProviderActions_Sender(const KIO::KUriFilterSearchProviderActions* self);
    friend QObject* KIO__KUriFilterSearchProviderActions_SuperSender(const KIO::KUriFilterSearchProviderActions* self);
    friend int KIO__KUriFilterSearchProviderActions_SenderSignalIndex(const KIO::KUriFilterSearchProviderActions* self);
    friend int KIO__KUriFilterSearchProviderActions_SuperSenderSignalIndex(const KIO::KUriFilterSearchProviderActions* self);
    friend int KIO__KUriFilterSearchProviderActions_Receivers(const KIO::KUriFilterSearchProviderActions* self, const char* signal);
    friend int KIO__KUriFilterSearchProviderActions_SuperReceivers(const KIO::KUriFilterSearchProviderActions* self, const char* signal);
    friend bool KIO__KUriFilterSearchProviderActions_IsSignalConnected(const KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
    friend bool KIO__KUriFilterSearchProviderActions_SuperIsSignalConnected(const KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
};

#endif
