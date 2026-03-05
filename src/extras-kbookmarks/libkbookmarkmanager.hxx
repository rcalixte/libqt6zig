#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKMANAGER_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkManager so that we can call protected methods
class VirtualKBookmarkManager final : public KBookmarkManager {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkManager = true;

    // Virtual class public types (including callbacks)
    using KBookmarkManager_MetaObject_Callback = QMetaObject* (*)();
    using KBookmarkManager_Metacast_Callback = void* (*)(KBookmarkManager*, const char*);
    using KBookmarkManager_Metacall_Callback = int (*)(KBookmarkManager*, int, int, void**);
    using KBookmarkManager_Event_Callback = bool (*)(KBookmarkManager*, QEvent*);
    using KBookmarkManager_EventFilter_Callback = bool (*)(KBookmarkManager*, QObject*, QEvent*);
    using KBookmarkManager_TimerEvent_Callback = void (*)(KBookmarkManager*, QTimerEvent*);
    using KBookmarkManager_ChildEvent_Callback = void (*)(KBookmarkManager*, QChildEvent*);
    using KBookmarkManager_CustomEvent_Callback = void (*)(KBookmarkManager*, QEvent*);
    using KBookmarkManager_ConnectNotify_Callback = void (*)(KBookmarkManager*, QMetaMethod*);
    using KBookmarkManager_DisconnectNotify_Callback = void (*)(KBookmarkManager*, QMetaMethod*);
    using KBookmarkManager_Sender_Callback = QObject* (*)();
    using KBookmarkManager_SenderSignalIndex_Callback = int (*)();
    using KBookmarkManager_Receivers_Callback = int (*)(const KBookmarkManager*, const char*);
    using KBookmarkManager_IsSignalConnected_Callback = bool (*)(const KBookmarkManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    KBookmarkManager_MetaObject_Callback kbookmarkmanager_metaobject_callback = nullptr;
    KBookmarkManager_Metacast_Callback kbookmarkmanager_metacast_callback = nullptr;
    KBookmarkManager_Metacall_Callback kbookmarkmanager_metacall_callback = nullptr;
    KBookmarkManager_Event_Callback kbookmarkmanager_event_callback = nullptr;
    KBookmarkManager_EventFilter_Callback kbookmarkmanager_eventfilter_callback = nullptr;
    KBookmarkManager_TimerEvent_Callback kbookmarkmanager_timerevent_callback = nullptr;
    KBookmarkManager_ChildEvent_Callback kbookmarkmanager_childevent_callback = nullptr;
    KBookmarkManager_CustomEvent_Callback kbookmarkmanager_customevent_callback = nullptr;
    KBookmarkManager_ConnectNotify_Callback kbookmarkmanager_connectnotify_callback = nullptr;
    KBookmarkManager_DisconnectNotify_Callback kbookmarkmanager_disconnectnotify_callback = nullptr;
    KBookmarkManager_Sender_Callback kbookmarkmanager_sender_callback = nullptr;
    KBookmarkManager_SenderSignalIndex_Callback kbookmarkmanager_sendersignalindex_callback = nullptr;
    KBookmarkManager_Receivers_Callback kbookmarkmanager_receivers_callback = nullptr;
    KBookmarkManager_IsSignalConnected_Callback kbookmarkmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkmanager_metaobject_isbase = false;
    mutable bool kbookmarkmanager_metacast_isbase = false;
    mutable bool kbookmarkmanager_metacall_isbase = false;
    mutable bool kbookmarkmanager_event_isbase = false;
    mutable bool kbookmarkmanager_eventfilter_isbase = false;
    mutable bool kbookmarkmanager_timerevent_isbase = false;
    mutable bool kbookmarkmanager_childevent_isbase = false;
    mutable bool kbookmarkmanager_customevent_isbase = false;
    mutable bool kbookmarkmanager_connectnotify_isbase = false;
    mutable bool kbookmarkmanager_disconnectnotify_isbase = false;
    mutable bool kbookmarkmanager_sender_isbase = false;
    mutable bool kbookmarkmanager_sendersignalindex_isbase = false;
    mutable bool kbookmarkmanager_receivers_isbase = false;
    mutable bool kbookmarkmanager_issignalconnected_isbase = false;

  public:
    VirtualKBookmarkManager(const QString& bookmarksFile) : KBookmarkManager(bookmarksFile) {};
    VirtualKBookmarkManager(const QString& bookmarksFile, QObject* parent) : KBookmarkManager(bookmarksFile, parent) {};

    // Callback setters
    inline void setKBookmarkManager_MetaObject_Callback(KBookmarkManager_MetaObject_Callback cb) { kbookmarkmanager_metaobject_callback = cb; }
    inline void setKBookmarkManager_Metacast_Callback(KBookmarkManager_Metacast_Callback cb) { kbookmarkmanager_metacast_callback = cb; }
    inline void setKBookmarkManager_Metacall_Callback(KBookmarkManager_Metacall_Callback cb) { kbookmarkmanager_metacall_callback = cb; }
    inline void setKBookmarkManager_Event_Callback(KBookmarkManager_Event_Callback cb) { kbookmarkmanager_event_callback = cb; }
    inline void setKBookmarkManager_EventFilter_Callback(KBookmarkManager_EventFilter_Callback cb) { kbookmarkmanager_eventfilter_callback = cb; }
    inline void setKBookmarkManager_TimerEvent_Callback(KBookmarkManager_TimerEvent_Callback cb) { kbookmarkmanager_timerevent_callback = cb; }
    inline void setKBookmarkManager_ChildEvent_Callback(KBookmarkManager_ChildEvent_Callback cb) { kbookmarkmanager_childevent_callback = cb; }
    inline void setKBookmarkManager_CustomEvent_Callback(KBookmarkManager_CustomEvent_Callback cb) { kbookmarkmanager_customevent_callback = cb; }
    inline void setKBookmarkManager_ConnectNotify_Callback(KBookmarkManager_ConnectNotify_Callback cb) { kbookmarkmanager_connectnotify_callback = cb; }
    inline void setKBookmarkManager_DisconnectNotify_Callback(KBookmarkManager_DisconnectNotify_Callback cb) { kbookmarkmanager_disconnectnotify_callback = cb; }
    inline void setKBookmarkManager_Sender_Callback(KBookmarkManager_Sender_Callback cb) { kbookmarkmanager_sender_callback = cb; }
    inline void setKBookmarkManager_SenderSignalIndex_Callback(KBookmarkManager_SenderSignalIndex_Callback cb) { kbookmarkmanager_sendersignalindex_callback = cb; }
    inline void setKBookmarkManager_Receivers_Callback(KBookmarkManager_Receivers_Callback cb) { kbookmarkmanager_receivers_callback = cb; }
    inline void setKBookmarkManager_IsSignalConnected_Callback(KBookmarkManager_IsSignalConnected_Callback cb) { kbookmarkmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKBookmarkManager_MetaObject_IsBase(bool value) const { kbookmarkmanager_metaobject_isbase = value; }
    inline void setKBookmarkManager_Metacast_IsBase(bool value) const { kbookmarkmanager_metacast_isbase = value; }
    inline void setKBookmarkManager_Metacall_IsBase(bool value) const { kbookmarkmanager_metacall_isbase = value; }
    inline void setKBookmarkManager_Event_IsBase(bool value) const { kbookmarkmanager_event_isbase = value; }
    inline void setKBookmarkManager_EventFilter_IsBase(bool value) const { kbookmarkmanager_eventfilter_isbase = value; }
    inline void setKBookmarkManager_TimerEvent_IsBase(bool value) const { kbookmarkmanager_timerevent_isbase = value; }
    inline void setKBookmarkManager_ChildEvent_IsBase(bool value) const { kbookmarkmanager_childevent_isbase = value; }
    inline void setKBookmarkManager_CustomEvent_IsBase(bool value) const { kbookmarkmanager_customevent_isbase = value; }
    inline void setKBookmarkManager_ConnectNotify_IsBase(bool value) const { kbookmarkmanager_connectnotify_isbase = value; }
    inline void setKBookmarkManager_DisconnectNotify_IsBase(bool value) const { kbookmarkmanager_disconnectnotify_isbase = value; }
    inline void setKBookmarkManager_Sender_IsBase(bool value) const { kbookmarkmanager_sender_isbase = value; }
    inline void setKBookmarkManager_SenderSignalIndex_IsBase(bool value) const { kbookmarkmanager_sendersignalindex_isbase = value; }
    inline void setKBookmarkManager_Receivers_IsBase(bool value) const { kbookmarkmanager_receivers_isbase = value; }
    inline void setKBookmarkManager_IsSignalConnected_IsBase(bool value) const { kbookmarkmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkmanager_metaobject_isbase) {
            kbookmarkmanager_metaobject_isbase = false;
            return KBookmarkManager::metaObject();
        }
        auto metaobject_cb = kbookmarkmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KBookmarkManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkmanager_metacast_isbase) {
            kbookmarkmanager_metacast_isbase = false;
            return KBookmarkManager::qt_metacast(param1);
        }
        auto metacast_cb = kbookmarkmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkmanager_metacall_isbase) {
            kbookmarkmanager_metacall_isbase = false;
            return KBookmarkManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kbookmarkmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbookmarkmanager_event_isbase) {
            kbookmarkmanager_event_isbase = false;
            return KBookmarkManager::event(event);
        }
        auto event_cb = kbookmarkmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkmanager_eventfilter_isbase) {
            kbookmarkmanager_eventfilter_isbase = false;
            return KBookmarkManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = kbookmarkmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkmanager_timerevent_isbase) {
            kbookmarkmanager_timerevent_isbase = false;
            KBookmarkManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = kbookmarkmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KBookmarkManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkmanager_childevent_isbase) {
            kbookmarkmanager_childevent_isbase = false;
            KBookmarkManager::childEvent(event);
            return;
        }
        auto childevent_cb = kbookmarkmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KBookmarkManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkmanager_customevent_isbase) {
            kbookmarkmanager_customevent_isbase = false;
            KBookmarkManager::customEvent(event);
            return;
        }
        auto customevent_cb = kbookmarkmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KBookmarkManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmanager_connectnotify_isbase) {
            kbookmarkmanager_connectnotify_isbase = false;
            KBookmarkManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kbookmarkmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KBookmarkManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmanager_disconnectnotify_isbase) {
            kbookmarkmanager_disconnectnotify_isbase = false;
            KBookmarkManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kbookmarkmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KBookmarkManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkmanager_sender_isbase) {
            kbookmarkmanager_sender_isbase = false;
            return KBookmarkManager::sender();
        }
        auto sender_cb = kbookmarkmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KBookmarkManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkmanager_sendersignalindex_isbase) {
            kbookmarkmanager_sendersignalindex_isbase = false;
            return KBookmarkManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = kbookmarkmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KBookmarkManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkmanager_receivers_isbase) {
            kbookmarkmanager_receivers_isbase = false;
            return KBookmarkManager::receivers(signal);
        }
        auto receivers_cb = kbookmarkmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkmanager_issignalconnected_isbase) {
            kbookmarkmanager_issignalconnected_isbase = false;
            return KBookmarkManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kbookmarkmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void KBookmarkManager_TimerEvent(KBookmarkManager* self, QTimerEvent* event);
    friend void KBookmarkManager_SuperTimerEvent(KBookmarkManager* self, QTimerEvent* event);
    friend void KBookmarkManager_ChildEvent(KBookmarkManager* self, QChildEvent* event);
    friend void KBookmarkManager_SuperChildEvent(KBookmarkManager* self, QChildEvent* event);
    friend void KBookmarkManager_CustomEvent(KBookmarkManager* self, QEvent* event);
    friend void KBookmarkManager_SuperCustomEvent(KBookmarkManager* self, QEvent* event);
    friend void KBookmarkManager_ConnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
    friend void KBookmarkManager_SuperConnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
    friend void KBookmarkManager_DisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
    friend void KBookmarkManager_SuperDisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
    friend QObject* KBookmarkManager_Sender(const KBookmarkManager* self);
    friend QObject* KBookmarkManager_SuperSender(const KBookmarkManager* self);
    friend int KBookmarkManager_SenderSignalIndex(const KBookmarkManager* self);
    friend int KBookmarkManager_SuperSenderSignalIndex(const KBookmarkManager* self);
    friend int KBookmarkManager_Receivers(const KBookmarkManager* self, const char* signal);
    friend int KBookmarkManager_SuperReceivers(const KBookmarkManager* self, const char* signal);
    friend bool KBookmarkManager_IsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal);
    friend bool KBookmarkManager_SuperIsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal);
};

#endif
