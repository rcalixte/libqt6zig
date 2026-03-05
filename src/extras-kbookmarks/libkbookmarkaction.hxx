#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKACTION_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkAction so that we can call protected methods
class VirtualKBookmarkAction final : public KBookmarkAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkAction = true;

    // Virtual class public types (including callbacks)
    using KBookmarkAction_MetaObject_Callback = QMetaObject* (*)();
    using KBookmarkAction_Metacast_Callback = void* (*)(KBookmarkAction*, const char*);
    using KBookmarkAction_Metacall_Callback = int (*)(KBookmarkAction*, int, int, void**);
    using KBookmarkAction_Event_Callback = bool (*)(KBookmarkAction*, QEvent*);
    using KBookmarkAction_EventFilter_Callback = bool (*)(KBookmarkAction*, QObject*, QEvent*);
    using KBookmarkAction_TimerEvent_Callback = void (*)(KBookmarkAction*, QTimerEvent*);
    using KBookmarkAction_ChildEvent_Callback = void (*)(KBookmarkAction*, QChildEvent*);
    using KBookmarkAction_CustomEvent_Callback = void (*)(KBookmarkAction*, QEvent*);
    using KBookmarkAction_ConnectNotify_Callback = void (*)(KBookmarkAction*, QMetaMethod*);
    using KBookmarkAction_DisconnectNotify_Callback = void (*)(KBookmarkAction*, QMetaMethod*);
    using KBookmarkAction_Sender_Callback = QObject* (*)();
    using KBookmarkAction_SenderSignalIndex_Callback = int (*)();
    using KBookmarkAction_Receivers_Callback = int (*)(const KBookmarkAction*, const char*);
    using KBookmarkAction_IsSignalConnected_Callback = bool (*)(const KBookmarkAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KBookmarkAction_MetaObject_Callback kbookmarkaction_metaobject_callback = nullptr;
    KBookmarkAction_Metacast_Callback kbookmarkaction_metacast_callback = nullptr;
    KBookmarkAction_Metacall_Callback kbookmarkaction_metacall_callback = nullptr;
    KBookmarkAction_Event_Callback kbookmarkaction_event_callback = nullptr;
    KBookmarkAction_EventFilter_Callback kbookmarkaction_eventfilter_callback = nullptr;
    KBookmarkAction_TimerEvent_Callback kbookmarkaction_timerevent_callback = nullptr;
    KBookmarkAction_ChildEvent_Callback kbookmarkaction_childevent_callback = nullptr;
    KBookmarkAction_CustomEvent_Callback kbookmarkaction_customevent_callback = nullptr;
    KBookmarkAction_ConnectNotify_Callback kbookmarkaction_connectnotify_callback = nullptr;
    KBookmarkAction_DisconnectNotify_Callback kbookmarkaction_disconnectnotify_callback = nullptr;
    KBookmarkAction_Sender_Callback kbookmarkaction_sender_callback = nullptr;
    KBookmarkAction_SenderSignalIndex_Callback kbookmarkaction_sendersignalindex_callback = nullptr;
    KBookmarkAction_Receivers_Callback kbookmarkaction_receivers_callback = nullptr;
    KBookmarkAction_IsSignalConnected_Callback kbookmarkaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkaction_metaobject_isbase = false;
    mutable bool kbookmarkaction_metacast_isbase = false;
    mutable bool kbookmarkaction_metacall_isbase = false;
    mutable bool kbookmarkaction_event_isbase = false;
    mutable bool kbookmarkaction_eventfilter_isbase = false;
    mutable bool kbookmarkaction_timerevent_isbase = false;
    mutable bool kbookmarkaction_childevent_isbase = false;
    mutable bool kbookmarkaction_customevent_isbase = false;
    mutable bool kbookmarkaction_connectnotify_isbase = false;
    mutable bool kbookmarkaction_disconnectnotify_isbase = false;
    mutable bool kbookmarkaction_sender_isbase = false;
    mutable bool kbookmarkaction_sendersignalindex_isbase = false;
    mutable bool kbookmarkaction_receivers_isbase = false;
    mutable bool kbookmarkaction_issignalconnected_isbase = false;

  public:
    VirtualKBookmarkAction(const KBookmark& bk, KBookmarkOwner* owner, QObject* parent) : KBookmarkAction(bk, owner, parent) {};

    // Callback setters
    inline void setKBookmarkAction_MetaObject_Callback(KBookmarkAction_MetaObject_Callback cb) { kbookmarkaction_metaobject_callback = cb; }
    inline void setKBookmarkAction_Metacast_Callback(KBookmarkAction_Metacast_Callback cb) { kbookmarkaction_metacast_callback = cb; }
    inline void setKBookmarkAction_Metacall_Callback(KBookmarkAction_Metacall_Callback cb) { kbookmarkaction_metacall_callback = cb; }
    inline void setKBookmarkAction_Event_Callback(KBookmarkAction_Event_Callback cb) { kbookmarkaction_event_callback = cb; }
    inline void setKBookmarkAction_EventFilter_Callback(KBookmarkAction_EventFilter_Callback cb) { kbookmarkaction_eventfilter_callback = cb; }
    inline void setKBookmarkAction_TimerEvent_Callback(KBookmarkAction_TimerEvent_Callback cb) { kbookmarkaction_timerevent_callback = cb; }
    inline void setKBookmarkAction_ChildEvent_Callback(KBookmarkAction_ChildEvent_Callback cb) { kbookmarkaction_childevent_callback = cb; }
    inline void setKBookmarkAction_CustomEvent_Callback(KBookmarkAction_CustomEvent_Callback cb) { kbookmarkaction_customevent_callback = cb; }
    inline void setKBookmarkAction_ConnectNotify_Callback(KBookmarkAction_ConnectNotify_Callback cb) { kbookmarkaction_connectnotify_callback = cb; }
    inline void setKBookmarkAction_DisconnectNotify_Callback(KBookmarkAction_DisconnectNotify_Callback cb) { kbookmarkaction_disconnectnotify_callback = cb; }
    inline void setKBookmarkAction_Sender_Callback(KBookmarkAction_Sender_Callback cb) { kbookmarkaction_sender_callback = cb; }
    inline void setKBookmarkAction_SenderSignalIndex_Callback(KBookmarkAction_SenderSignalIndex_Callback cb) { kbookmarkaction_sendersignalindex_callback = cb; }
    inline void setKBookmarkAction_Receivers_Callback(KBookmarkAction_Receivers_Callback cb) { kbookmarkaction_receivers_callback = cb; }
    inline void setKBookmarkAction_IsSignalConnected_Callback(KBookmarkAction_IsSignalConnected_Callback cb) { kbookmarkaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKBookmarkAction_MetaObject_IsBase(bool value) const { kbookmarkaction_metaobject_isbase = value; }
    inline void setKBookmarkAction_Metacast_IsBase(bool value) const { kbookmarkaction_metacast_isbase = value; }
    inline void setKBookmarkAction_Metacall_IsBase(bool value) const { kbookmarkaction_metacall_isbase = value; }
    inline void setKBookmarkAction_Event_IsBase(bool value) const { kbookmarkaction_event_isbase = value; }
    inline void setKBookmarkAction_EventFilter_IsBase(bool value) const { kbookmarkaction_eventfilter_isbase = value; }
    inline void setKBookmarkAction_TimerEvent_IsBase(bool value) const { kbookmarkaction_timerevent_isbase = value; }
    inline void setKBookmarkAction_ChildEvent_IsBase(bool value) const { kbookmarkaction_childevent_isbase = value; }
    inline void setKBookmarkAction_CustomEvent_IsBase(bool value) const { kbookmarkaction_customevent_isbase = value; }
    inline void setKBookmarkAction_ConnectNotify_IsBase(bool value) const { kbookmarkaction_connectnotify_isbase = value; }
    inline void setKBookmarkAction_DisconnectNotify_IsBase(bool value) const { kbookmarkaction_disconnectnotify_isbase = value; }
    inline void setKBookmarkAction_Sender_IsBase(bool value) const { kbookmarkaction_sender_isbase = value; }
    inline void setKBookmarkAction_SenderSignalIndex_IsBase(bool value) const { kbookmarkaction_sendersignalindex_isbase = value; }
    inline void setKBookmarkAction_Receivers_IsBase(bool value) const { kbookmarkaction_receivers_isbase = value; }
    inline void setKBookmarkAction_IsSignalConnected_IsBase(bool value) const { kbookmarkaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkaction_metaobject_isbase) {
            kbookmarkaction_metaobject_isbase = false;
            return KBookmarkAction::metaObject();
        }
        auto metaobject_cb = kbookmarkaction_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KBookmarkAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkaction_metacast_isbase) {
            kbookmarkaction_metacast_isbase = false;
            return KBookmarkAction::qt_metacast(param1);
        }
        auto metacast_cb = kbookmarkaction_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkaction_metacall_isbase) {
            kbookmarkaction_metacall_isbase = false;
            return KBookmarkAction::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kbookmarkaction_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkaction_event_isbase) {
            kbookmarkaction_event_isbase = false;
            return KBookmarkAction::event(param1);
        }
        auto event_cb = kbookmarkaction_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkaction_eventfilter_isbase) {
            kbookmarkaction_eventfilter_isbase = false;
            return KBookmarkAction::eventFilter(watched, event);
        }
        auto eventfilter_cb = kbookmarkaction_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkaction_timerevent_isbase) {
            kbookmarkaction_timerevent_isbase = false;
            KBookmarkAction::timerEvent(event);
            return;
        }
        auto timerevent_cb = kbookmarkaction_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KBookmarkAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkaction_childevent_isbase) {
            kbookmarkaction_childevent_isbase = false;
            KBookmarkAction::childEvent(event);
            return;
        }
        auto childevent_cb = kbookmarkaction_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KBookmarkAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkaction_customevent_isbase) {
            kbookmarkaction_customevent_isbase = false;
            KBookmarkAction::customEvent(event);
            return;
        }
        auto customevent_cb = kbookmarkaction_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KBookmarkAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkaction_connectnotify_isbase) {
            kbookmarkaction_connectnotify_isbase = false;
            KBookmarkAction::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kbookmarkaction_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KBookmarkAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkaction_disconnectnotify_isbase) {
            kbookmarkaction_disconnectnotify_isbase = false;
            KBookmarkAction::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kbookmarkaction_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KBookmarkAction::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkaction_sender_isbase) {
            kbookmarkaction_sender_isbase = false;
            return KBookmarkAction::sender();
        }
        auto sender_cb = kbookmarkaction_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KBookmarkAction::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkaction_sendersignalindex_isbase) {
            kbookmarkaction_sendersignalindex_isbase = false;
            return KBookmarkAction::senderSignalIndex();
        }
        auto sendersignalindex_cb = kbookmarkaction_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KBookmarkAction::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkaction_receivers_isbase) {
            kbookmarkaction_receivers_isbase = false;
            return KBookmarkAction::receivers(signal);
        }
        auto receivers_cb = kbookmarkaction_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkAction::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkaction_issignalconnected_isbase) {
            kbookmarkaction_issignalconnected_isbase = false;
            return KBookmarkAction::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kbookmarkaction_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkAction::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KBookmarkAction_Event(KBookmarkAction* self, QEvent* param1);
    friend bool KBookmarkAction_SuperEvent(KBookmarkAction* self, QEvent* param1);
    friend void KBookmarkAction_TimerEvent(KBookmarkAction* self, QTimerEvent* event);
    friend void KBookmarkAction_SuperTimerEvent(KBookmarkAction* self, QTimerEvent* event);
    friend void KBookmarkAction_ChildEvent(KBookmarkAction* self, QChildEvent* event);
    friend void KBookmarkAction_SuperChildEvent(KBookmarkAction* self, QChildEvent* event);
    friend void KBookmarkAction_CustomEvent(KBookmarkAction* self, QEvent* event);
    friend void KBookmarkAction_SuperCustomEvent(KBookmarkAction* self, QEvent* event);
    friend void KBookmarkAction_ConnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
    friend void KBookmarkAction_SuperConnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
    friend void KBookmarkAction_DisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
    friend void KBookmarkAction_SuperDisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
    friend QObject* KBookmarkAction_Sender(const KBookmarkAction* self);
    friend QObject* KBookmarkAction_SuperSender(const KBookmarkAction* self);
    friend int KBookmarkAction_SenderSignalIndex(const KBookmarkAction* self);
    friend int KBookmarkAction_SuperSenderSignalIndex(const KBookmarkAction* self);
    friend int KBookmarkAction_Receivers(const KBookmarkAction* self, const char* signal);
    friend int KBookmarkAction_SuperReceivers(const KBookmarkAction* self, const char* signal);
    friend bool KBookmarkAction_IsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal);
    friend bool KBookmarkAction_SuperIsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal);
};

#endif
