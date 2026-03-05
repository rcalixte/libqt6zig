#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKMODIFIERKEYINFOPROVIDER_P_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKMODIFIERKEYINFOPROVIDER_P_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KModifierKeyInfoProvider so that we can call protected methods
class VirtualKModifierKeyInfoProvider final : public KModifierKeyInfoProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualKModifierKeyInfoProvider = true;

    // Virtual class public types (including callbacks)
    using KModifierKeyInfoProvider_MetaObject_Callback = QMetaObject* (*)();
    using KModifierKeyInfoProvider_Metacast_Callback = void* (*)(KModifierKeyInfoProvider*, const char*);
    using KModifierKeyInfoProvider_Metacall_Callback = int (*)(KModifierKeyInfoProvider*, int, int, void**);
    using KModifierKeyInfoProvider_SetKeyLatched_Callback = bool (*)(KModifierKeyInfoProvider*, int, bool);
    using KModifierKeyInfoProvider_SetKeyLocked_Callback = bool (*)(KModifierKeyInfoProvider*, int, bool);
    using KModifierKeyInfoProvider_Event_Callback = bool (*)(KModifierKeyInfoProvider*, QEvent*);
    using KModifierKeyInfoProvider_EventFilter_Callback = bool (*)(KModifierKeyInfoProvider*, QObject*, QEvent*);
    using KModifierKeyInfoProvider_TimerEvent_Callback = void (*)(KModifierKeyInfoProvider*, QTimerEvent*);
    using KModifierKeyInfoProvider_ChildEvent_Callback = void (*)(KModifierKeyInfoProvider*, QChildEvent*);
    using KModifierKeyInfoProvider_CustomEvent_Callback = void (*)(KModifierKeyInfoProvider*, QEvent*);
    using KModifierKeyInfoProvider_ConnectNotify_Callback = void (*)(KModifierKeyInfoProvider*, QMetaMethod*);
    using KModifierKeyInfoProvider_DisconnectNotify_Callback = void (*)(KModifierKeyInfoProvider*, QMetaMethod*);
    using KModifierKeyInfoProvider_StateUpdated_Callback = void (*)(KModifierKeyInfoProvider*, int, int);
    using KModifierKeyInfoProvider_Sender_Callback = QObject* (*)();
    using KModifierKeyInfoProvider_SenderSignalIndex_Callback = int (*)();
    using KModifierKeyInfoProvider_Receivers_Callback = int (*)(const KModifierKeyInfoProvider*, const char*);
    using KModifierKeyInfoProvider_IsSignalConnected_Callback = bool (*)(const KModifierKeyInfoProvider*, QMetaMethod*);

  protected:
    // Instance callback storage
    KModifierKeyInfoProvider_MetaObject_Callback kmodifierkeyinfoprovider_metaobject_callback = nullptr;
    KModifierKeyInfoProvider_Metacast_Callback kmodifierkeyinfoprovider_metacast_callback = nullptr;
    KModifierKeyInfoProvider_Metacall_Callback kmodifierkeyinfoprovider_metacall_callback = nullptr;
    KModifierKeyInfoProvider_SetKeyLatched_Callback kmodifierkeyinfoprovider_setkeylatched_callback = nullptr;
    KModifierKeyInfoProvider_SetKeyLocked_Callback kmodifierkeyinfoprovider_setkeylocked_callback = nullptr;
    KModifierKeyInfoProvider_Event_Callback kmodifierkeyinfoprovider_event_callback = nullptr;
    KModifierKeyInfoProvider_EventFilter_Callback kmodifierkeyinfoprovider_eventfilter_callback = nullptr;
    KModifierKeyInfoProvider_TimerEvent_Callback kmodifierkeyinfoprovider_timerevent_callback = nullptr;
    KModifierKeyInfoProvider_ChildEvent_Callback kmodifierkeyinfoprovider_childevent_callback = nullptr;
    KModifierKeyInfoProvider_CustomEvent_Callback kmodifierkeyinfoprovider_customevent_callback = nullptr;
    KModifierKeyInfoProvider_ConnectNotify_Callback kmodifierkeyinfoprovider_connectnotify_callback = nullptr;
    KModifierKeyInfoProvider_DisconnectNotify_Callback kmodifierkeyinfoprovider_disconnectnotify_callback = nullptr;
    KModifierKeyInfoProvider_StateUpdated_Callback kmodifierkeyinfoprovider_stateupdated_callback = nullptr;
    KModifierKeyInfoProvider_Sender_Callback kmodifierkeyinfoprovider_sender_callback = nullptr;
    KModifierKeyInfoProvider_SenderSignalIndex_Callback kmodifierkeyinfoprovider_sendersignalindex_callback = nullptr;
    KModifierKeyInfoProvider_Receivers_Callback kmodifierkeyinfoprovider_receivers_callback = nullptr;
    KModifierKeyInfoProvider_IsSignalConnected_Callback kmodifierkeyinfoprovider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kmodifierkeyinfoprovider_metaobject_isbase = false;
    mutable bool kmodifierkeyinfoprovider_metacast_isbase = false;
    mutable bool kmodifierkeyinfoprovider_metacall_isbase = false;
    mutable bool kmodifierkeyinfoprovider_setkeylatched_isbase = false;
    mutable bool kmodifierkeyinfoprovider_setkeylocked_isbase = false;
    mutable bool kmodifierkeyinfoprovider_event_isbase = false;
    mutable bool kmodifierkeyinfoprovider_eventfilter_isbase = false;
    mutable bool kmodifierkeyinfoprovider_timerevent_isbase = false;
    mutable bool kmodifierkeyinfoprovider_childevent_isbase = false;
    mutable bool kmodifierkeyinfoprovider_customevent_isbase = false;
    mutable bool kmodifierkeyinfoprovider_connectnotify_isbase = false;
    mutable bool kmodifierkeyinfoprovider_disconnectnotify_isbase = false;
    mutable bool kmodifierkeyinfoprovider_stateupdated_isbase = false;
    mutable bool kmodifierkeyinfoprovider_sender_isbase = false;
    mutable bool kmodifierkeyinfoprovider_sendersignalindex_isbase = false;
    mutable bool kmodifierkeyinfoprovider_receivers_isbase = false;
    mutable bool kmodifierkeyinfoprovider_issignalconnected_isbase = false;

  public:
    VirtualKModifierKeyInfoProvider() : KModifierKeyInfoProvider() {};

    // Callback setters
    inline void setKModifierKeyInfoProvider_MetaObject_Callback(KModifierKeyInfoProvider_MetaObject_Callback cb) { kmodifierkeyinfoprovider_metaobject_callback = cb; }
    inline void setKModifierKeyInfoProvider_Metacast_Callback(KModifierKeyInfoProvider_Metacast_Callback cb) { kmodifierkeyinfoprovider_metacast_callback = cb; }
    inline void setKModifierKeyInfoProvider_Metacall_Callback(KModifierKeyInfoProvider_Metacall_Callback cb) { kmodifierkeyinfoprovider_metacall_callback = cb; }
    inline void setKModifierKeyInfoProvider_SetKeyLatched_Callback(KModifierKeyInfoProvider_SetKeyLatched_Callback cb) { kmodifierkeyinfoprovider_setkeylatched_callback = cb; }
    inline void setKModifierKeyInfoProvider_SetKeyLocked_Callback(KModifierKeyInfoProvider_SetKeyLocked_Callback cb) { kmodifierkeyinfoprovider_setkeylocked_callback = cb; }
    inline void setKModifierKeyInfoProvider_Event_Callback(KModifierKeyInfoProvider_Event_Callback cb) { kmodifierkeyinfoprovider_event_callback = cb; }
    inline void setKModifierKeyInfoProvider_EventFilter_Callback(KModifierKeyInfoProvider_EventFilter_Callback cb) { kmodifierkeyinfoprovider_eventfilter_callback = cb; }
    inline void setKModifierKeyInfoProvider_TimerEvent_Callback(KModifierKeyInfoProvider_TimerEvent_Callback cb) { kmodifierkeyinfoprovider_timerevent_callback = cb; }
    inline void setKModifierKeyInfoProvider_ChildEvent_Callback(KModifierKeyInfoProvider_ChildEvent_Callback cb) { kmodifierkeyinfoprovider_childevent_callback = cb; }
    inline void setKModifierKeyInfoProvider_CustomEvent_Callback(KModifierKeyInfoProvider_CustomEvent_Callback cb) { kmodifierkeyinfoprovider_customevent_callback = cb; }
    inline void setKModifierKeyInfoProvider_ConnectNotify_Callback(KModifierKeyInfoProvider_ConnectNotify_Callback cb) { kmodifierkeyinfoprovider_connectnotify_callback = cb; }
    inline void setKModifierKeyInfoProvider_DisconnectNotify_Callback(KModifierKeyInfoProvider_DisconnectNotify_Callback cb) { kmodifierkeyinfoprovider_disconnectnotify_callback = cb; }
    inline void setKModifierKeyInfoProvider_StateUpdated_Callback(KModifierKeyInfoProvider_StateUpdated_Callback cb) { kmodifierkeyinfoprovider_stateupdated_callback = cb; }
    inline void setKModifierKeyInfoProvider_Sender_Callback(KModifierKeyInfoProvider_Sender_Callback cb) { kmodifierkeyinfoprovider_sender_callback = cb; }
    inline void setKModifierKeyInfoProvider_SenderSignalIndex_Callback(KModifierKeyInfoProvider_SenderSignalIndex_Callback cb) { kmodifierkeyinfoprovider_sendersignalindex_callback = cb; }
    inline void setKModifierKeyInfoProvider_Receivers_Callback(KModifierKeyInfoProvider_Receivers_Callback cb) { kmodifierkeyinfoprovider_receivers_callback = cb; }
    inline void setKModifierKeyInfoProvider_IsSignalConnected_Callback(KModifierKeyInfoProvider_IsSignalConnected_Callback cb) { kmodifierkeyinfoprovider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKModifierKeyInfoProvider_MetaObject_IsBase(bool value) const { kmodifierkeyinfoprovider_metaobject_isbase = value; }
    inline void setKModifierKeyInfoProvider_Metacast_IsBase(bool value) const { kmodifierkeyinfoprovider_metacast_isbase = value; }
    inline void setKModifierKeyInfoProvider_Metacall_IsBase(bool value) const { kmodifierkeyinfoprovider_metacall_isbase = value; }
    inline void setKModifierKeyInfoProvider_SetKeyLatched_IsBase(bool value) const { kmodifierkeyinfoprovider_setkeylatched_isbase = value; }
    inline void setKModifierKeyInfoProvider_SetKeyLocked_IsBase(bool value) const { kmodifierkeyinfoprovider_setkeylocked_isbase = value; }
    inline void setKModifierKeyInfoProvider_Event_IsBase(bool value) const { kmodifierkeyinfoprovider_event_isbase = value; }
    inline void setKModifierKeyInfoProvider_EventFilter_IsBase(bool value) const { kmodifierkeyinfoprovider_eventfilter_isbase = value; }
    inline void setKModifierKeyInfoProvider_TimerEvent_IsBase(bool value) const { kmodifierkeyinfoprovider_timerevent_isbase = value; }
    inline void setKModifierKeyInfoProvider_ChildEvent_IsBase(bool value) const { kmodifierkeyinfoprovider_childevent_isbase = value; }
    inline void setKModifierKeyInfoProvider_CustomEvent_IsBase(bool value) const { kmodifierkeyinfoprovider_customevent_isbase = value; }
    inline void setKModifierKeyInfoProvider_ConnectNotify_IsBase(bool value) const { kmodifierkeyinfoprovider_connectnotify_isbase = value; }
    inline void setKModifierKeyInfoProvider_DisconnectNotify_IsBase(bool value) const { kmodifierkeyinfoprovider_disconnectnotify_isbase = value; }
    inline void setKModifierKeyInfoProvider_StateUpdated_IsBase(bool value) const { kmodifierkeyinfoprovider_stateupdated_isbase = value; }
    inline void setKModifierKeyInfoProvider_Sender_IsBase(bool value) const { kmodifierkeyinfoprovider_sender_isbase = value; }
    inline void setKModifierKeyInfoProvider_SenderSignalIndex_IsBase(bool value) const { kmodifierkeyinfoprovider_sendersignalindex_isbase = value; }
    inline void setKModifierKeyInfoProvider_Receivers_IsBase(bool value) const { kmodifierkeyinfoprovider_receivers_isbase = value; }
    inline void setKModifierKeyInfoProvider_IsSignalConnected_IsBase(bool value) const { kmodifierkeyinfoprovider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmodifierkeyinfoprovider_metaobject_isbase) {
            kmodifierkeyinfoprovider_metaobject_isbase = false;
            return KModifierKeyInfoProvider::metaObject();
        }
        auto metaobject_cb = kmodifierkeyinfoprovider_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KModifierKeyInfoProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmodifierkeyinfoprovider_metacast_isbase) {
            kmodifierkeyinfoprovider_metacast_isbase = false;
            return KModifierKeyInfoProvider::qt_metacast(param1);
        }
        auto metacast_cb = kmodifierkeyinfoprovider_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodifierkeyinfoprovider_metacall_isbase) {
            kmodifierkeyinfoprovider_metacall_isbase = false;
            return KModifierKeyInfoProvider::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kmodifierkeyinfoprovider_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KModifierKeyInfoProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setKeyLatched(Qt::Key key, bool latched) override {
        if (kmodifierkeyinfoprovider_setkeylatched_isbase) {
            kmodifierkeyinfoprovider_setkeylatched_isbase = false;
            return KModifierKeyInfoProvider::setKeyLatched(key, latched);
        }
        auto setkeylatched_cb = kmodifierkeyinfoprovider_setkeylatched_callback;
        if (setkeylatched_cb) {
            int cbval1 = static_cast<int>(key);
            bool cbval2 = latched;

            bool callback_ret = setkeylatched_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::setKeyLatched(key, latched);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setKeyLocked(Qt::Key key, bool locked) override {
        if (kmodifierkeyinfoprovider_setkeylocked_isbase) {
            kmodifierkeyinfoprovider_setkeylocked_isbase = false;
            return KModifierKeyInfoProvider::setKeyLocked(key, locked);
        }
        auto setkeylocked_cb = kmodifierkeyinfoprovider_setkeylocked_callback;
        if (setkeylocked_cb) {
            int cbval1 = static_cast<int>(key);
            bool cbval2 = locked;

            bool callback_ret = setkeylocked_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::setKeyLocked(key, locked);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodifierkeyinfoprovider_event_isbase) {
            kmodifierkeyinfoprovider_event_isbase = false;
            return KModifierKeyInfoProvider::event(event);
        }
        auto event_cb = kmodifierkeyinfoprovider_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodifierkeyinfoprovider_eventfilter_isbase) {
            kmodifierkeyinfoprovider_eventfilter_isbase = false;
            return KModifierKeyInfoProvider::eventFilter(watched, event);
        }
        auto eventfilter_cb = kmodifierkeyinfoprovider_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodifierkeyinfoprovider_timerevent_isbase) {
            kmodifierkeyinfoprovider_timerevent_isbase = false;
            KModifierKeyInfoProvider::timerEvent(event);
            return;
        }
        auto timerevent_cb = kmodifierkeyinfoprovider_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodifierkeyinfoprovider_childevent_isbase) {
            kmodifierkeyinfoprovider_childevent_isbase = false;
            KModifierKeyInfoProvider::childEvent(event);
            return;
        }
        auto childevent_cb = kmodifierkeyinfoprovider_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodifierkeyinfoprovider_customevent_isbase) {
            kmodifierkeyinfoprovider_customevent_isbase = false;
            KModifierKeyInfoProvider::customEvent(event);
            return;
        }
        auto customevent_cb = kmodifierkeyinfoprovider_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfoprovider_connectnotify_isbase) {
            kmodifierkeyinfoprovider_connectnotify_isbase = false;
            KModifierKeyInfoProvider::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kmodifierkeyinfoprovider_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodifierkeyinfoprovider_disconnectnotify_isbase) {
            kmodifierkeyinfoprovider_disconnectnotify_isbase = false;
            KModifierKeyInfoProvider::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kmodifierkeyinfoprovider_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KModifierKeyInfoProvider::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void stateUpdated(Qt::Key key, KModifierKeyInfoProvider::ModifierStates state) {
        if (kmodifierkeyinfoprovider_stateupdated_isbase) {
            kmodifierkeyinfoprovider_stateupdated_isbase = false;
            KModifierKeyInfoProvider::stateUpdated(key, state);
            return;
        }
        auto stateupdated_cb = kmodifierkeyinfoprovider_stateupdated_callback;
        if (stateupdated_cb) {
            int cbval1 = static_cast<int>(key);
            int cbval2 = static_cast<int>(state);

            stateupdated_cb(this, cbval1, cbval2);
            return;
        }
        KModifierKeyInfoProvider::stateUpdated(key, state);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmodifierkeyinfoprovider_sender_isbase) {
            kmodifierkeyinfoprovider_sender_isbase = false;
            return KModifierKeyInfoProvider::sender();
        }
        auto sender_cb = kmodifierkeyinfoprovider_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KModifierKeyInfoProvider::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmodifierkeyinfoprovider_sendersignalindex_isbase) {
            kmodifierkeyinfoprovider_sendersignalindex_isbase = false;
            return KModifierKeyInfoProvider::senderSignalIndex();
        }
        auto sendersignalindex_cb = kmodifierkeyinfoprovider_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KModifierKeyInfoProvider::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmodifierkeyinfoprovider_receivers_isbase) {
            kmodifierkeyinfoprovider_receivers_isbase = false;
            return KModifierKeyInfoProvider::receivers(signal);
        }
        auto receivers_cb = kmodifierkeyinfoprovider_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KModifierKeyInfoProvider::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmodifierkeyinfoprovider_issignalconnected_isbase) {
            kmodifierkeyinfoprovider_issignalconnected_isbase = false;
            return KModifierKeyInfoProvider::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kmodifierkeyinfoprovider_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KModifierKeyInfoProvider::isSignalConnected(signal);
    }

    // Friend functions
    friend void KModifierKeyInfoProvider_TimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event);
    friend void KModifierKeyInfoProvider_SuperTimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event);
    friend void KModifierKeyInfoProvider_ChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event);
    friend void KModifierKeyInfoProvider_SuperChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event);
    friend void KModifierKeyInfoProvider_CustomEvent(KModifierKeyInfoProvider* self, QEvent* event);
    friend void KModifierKeyInfoProvider_SuperCustomEvent(KModifierKeyInfoProvider* self, QEvent* event);
    friend void KModifierKeyInfoProvider_ConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
    friend void KModifierKeyInfoProvider_SuperConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
    friend void KModifierKeyInfoProvider_DisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
    friend void KModifierKeyInfoProvider_SuperDisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
    friend void KModifierKeyInfoProvider_StateUpdated(KModifierKeyInfoProvider* self, int key, int state);
    friend void KModifierKeyInfoProvider_SuperStateUpdated(KModifierKeyInfoProvider* self, int key, int state);
    friend QObject* KModifierKeyInfoProvider_Sender(const KModifierKeyInfoProvider* self);
    friend QObject* KModifierKeyInfoProvider_SuperSender(const KModifierKeyInfoProvider* self);
    friend int KModifierKeyInfoProvider_SenderSignalIndex(const KModifierKeyInfoProvider* self);
    friend int KModifierKeyInfoProvider_SuperSenderSignalIndex(const KModifierKeyInfoProvider* self);
    friend int KModifierKeyInfoProvider_Receivers(const KModifierKeyInfoProvider* self, const char* signal);
    friend int KModifierKeyInfoProvider_SuperReceivers(const KModifierKeyInfoProvider* self, const char* signal);
    friend bool KModifierKeyInfoProvider_IsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal);
    friend bool KModifierKeyInfoProvider_SuperIsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal);
};

#endif
