#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEC_LIBVIRTUALKCOLORSCHEMEMANAGER_H
#define SRC_EXTRAS_KCOLORSCHEMEC_LIBVIRTUALKCOLORSCHEMEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorSchemeManager so that we can call protected methods
class VirtualKColorSchemeManager final : public KColorSchemeManager {

  public:
    // Virtual class boolean flag
    bool isVirtualKColorSchemeManager = true;

    // Virtual class public types (including callbacks)
    using KColorSchemeManager_Metacall_Callback = int (*)(KColorSchemeManager*, int, int, void**);
    using KColorSchemeManager_Event_Callback = bool (*)(KColorSchemeManager*, QEvent*);
    using KColorSchemeManager_EventFilter_Callback = bool (*)(KColorSchemeManager*, QObject*, QEvent*);
    using KColorSchemeManager_TimerEvent_Callback = void (*)(KColorSchemeManager*, QTimerEvent*);
    using KColorSchemeManager_ChildEvent_Callback = void (*)(KColorSchemeManager*, QChildEvent*);
    using KColorSchemeManager_CustomEvent_Callback = void (*)(KColorSchemeManager*, QEvent*);
    using KColorSchemeManager_ConnectNotify_Callback = void (*)(KColorSchemeManager*, QMetaMethod*);
    using KColorSchemeManager_DisconnectNotify_Callback = void (*)(KColorSchemeManager*, QMetaMethod*);
    using KColorSchemeManager_Sender_Callback = QObject* (*)();
    using KColorSchemeManager_SenderSignalIndex_Callback = int (*)();
    using KColorSchemeManager_Receivers_Callback = int (*)(const KColorSchemeManager*, const char*);
    using KColorSchemeManager_IsSignalConnected_Callback = bool (*)(const KColorSchemeManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    KColorSchemeManager_Metacall_Callback kcolorschememanager_metacall_callback = nullptr;
    KColorSchemeManager_Event_Callback kcolorschememanager_event_callback = nullptr;
    KColorSchemeManager_EventFilter_Callback kcolorschememanager_eventfilter_callback = nullptr;
    KColorSchemeManager_TimerEvent_Callback kcolorschememanager_timerevent_callback = nullptr;
    KColorSchemeManager_ChildEvent_Callback kcolorschememanager_childevent_callback = nullptr;
    KColorSchemeManager_CustomEvent_Callback kcolorschememanager_customevent_callback = nullptr;
    KColorSchemeManager_ConnectNotify_Callback kcolorschememanager_connectnotify_callback = nullptr;
    KColorSchemeManager_DisconnectNotify_Callback kcolorschememanager_disconnectnotify_callback = nullptr;
    KColorSchemeManager_Sender_Callback kcolorschememanager_sender_callback = nullptr;
    KColorSchemeManager_SenderSignalIndex_Callback kcolorschememanager_sendersignalindex_callback = nullptr;
    KColorSchemeManager_Receivers_Callback kcolorschememanager_receivers_callback = nullptr;
    KColorSchemeManager_IsSignalConnected_Callback kcolorschememanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcolorschememanager_metacall_isbase = false;
    mutable bool kcolorschememanager_event_isbase = false;
    mutable bool kcolorschememanager_eventfilter_isbase = false;
    mutable bool kcolorschememanager_timerevent_isbase = false;
    mutable bool kcolorschememanager_childevent_isbase = false;
    mutable bool kcolorschememanager_customevent_isbase = false;
    mutable bool kcolorschememanager_connectnotify_isbase = false;
    mutable bool kcolorschememanager_disconnectnotify_isbase = false;
    mutable bool kcolorschememanager_sender_isbase = false;
    mutable bool kcolorschememanager_sendersignalindex_isbase = false;
    mutable bool kcolorschememanager_receivers_isbase = false;
    mutable bool kcolorschememanager_issignalconnected_isbase = false;

  public:
    VirtualKColorSchemeManager() : KColorSchemeManager() {};
    VirtualKColorSchemeManager(QObject* parent) : KColorSchemeManager(parent) {};

    ~VirtualKColorSchemeManager() {
        kcolorschememanager_metacall_callback = nullptr;
        kcolorschememanager_event_callback = nullptr;
        kcolorschememanager_eventfilter_callback = nullptr;
        kcolorschememanager_timerevent_callback = nullptr;
        kcolorschememanager_childevent_callback = nullptr;
        kcolorschememanager_customevent_callback = nullptr;
        kcolorschememanager_connectnotify_callback = nullptr;
        kcolorschememanager_disconnectnotify_callback = nullptr;
        kcolorschememanager_sender_callback = nullptr;
        kcolorschememanager_sendersignalindex_callback = nullptr;
        kcolorschememanager_receivers_callback = nullptr;
        kcolorschememanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKColorSchemeManager_Metacall_Callback(KColorSchemeManager_Metacall_Callback cb) { kcolorschememanager_metacall_callback = cb; }
    inline void setKColorSchemeManager_Event_Callback(KColorSchemeManager_Event_Callback cb) { kcolorschememanager_event_callback = cb; }
    inline void setKColorSchemeManager_EventFilter_Callback(KColorSchemeManager_EventFilter_Callback cb) { kcolorschememanager_eventfilter_callback = cb; }
    inline void setKColorSchemeManager_TimerEvent_Callback(KColorSchemeManager_TimerEvent_Callback cb) { kcolorschememanager_timerevent_callback = cb; }
    inline void setKColorSchemeManager_ChildEvent_Callback(KColorSchemeManager_ChildEvent_Callback cb) { kcolorschememanager_childevent_callback = cb; }
    inline void setKColorSchemeManager_CustomEvent_Callback(KColorSchemeManager_CustomEvent_Callback cb) { kcolorschememanager_customevent_callback = cb; }
    inline void setKColorSchemeManager_ConnectNotify_Callback(KColorSchemeManager_ConnectNotify_Callback cb) { kcolorschememanager_connectnotify_callback = cb; }
    inline void setKColorSchemeManager_DisconnectNotify_Callback(KColorSchemeManager_DisconnectNotify_Callback cb) { kcolorschememanager_disconnectnotify_callback = cb; }
    inline void setKColorSchemeManager_Sender_Callback(KColorSchemeManager_Sender_Callback cb) { kcolorschememanager_sender_callback = cb; }
    inline void setKColorSchemeManager_SenderSignalIndex_Callback(KColorSchemeManager_SenderSignalIndex_Callback cb) { kcolorschememanager_sendersignalindex_callback = cb; }
    inline void setKColorSchemeManager_Receivers_Callback(KColorSchemeManager_Receivers_Callback cb) { kcolorschememanager_receivers_callback = cb; }
    inline void setKColorSchemeManager_IsSignalConnected_Callback(KColorSchemeManager_IsSignalConnected_Callback cb) { kcolorschememanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKColorSchemeManager_Metacall_IsBase(bool value) const { kcolorschememanager_metacall_isbase = value; }
    inline void setKColorSchemeManager_Event_IsBase(bool value) const { kcolorschememanager_event_isbase = value; }
    inline void setKColorSchemeManager_EventFilter_IsBase(bool value) const { kcolorschememanager_eventfilter_isbase = value; }
    inline void setKColorSchemeManager_TimerEvent_IsBase(bool value) const { kcolorschememanager_timerevent_isbase = value; }
    inline void setKColorSchemeManager_ChildEvent_IsBase(bool value) const { kcolorschememanager_childevent_isbase = value; }
    inline void setKColorSchemeManager_CustomEvent_IsBase(bool value) const { kcolorschememanager_customevent_isbase = value; }
    inline void setKColorSchemeManager_ConnectNotify_IsBase(bool value) const { kcolorschememanager_connectnotify_isbase = value; }
    inline void setKColorSchemeManager_DisconnectNotify_IsBase(bool value) const { kcolorschememanager_disconnectnotify_isbase = value; }
    inline void setKColorSchemeManager_Sender_IsBase(bool value) const { kcolorschememanager_sender_isbase = value; }
    inline void setKColorSchemeManager_SenderSignalIndex_IsBase(bool value) const { kcolorschememanager_sendersignalindex_isbase = value; }
    inline void setKColorSchemeManager_Receivers_IsBase(bool value) const { kcolorschememanager_receivers_isbase = value; }
    inline void setKColorSchemeManager_IsSignalConnected_IsBase(bool value) const { kcolorschememanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorschememanager_metacall_isbase) {
            kcolorschememanager_metacall_isbase = false;
            return KColorSchemeManager::qt_metacall(param1, param2, param3);
        } else if (kcolorschememanager_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcolorschememanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KColorSchemeManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorschememanager_event_isbase) {
            kcolorschememanager_event_isbase = false;
            return KColorSchemeManager::event(event);
        } else if (kcolorschememanager_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcolorschememanager_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorSchemeManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorschememanager_eventfilter_isbase) {
            kcolorschememanager_eventfilter_isbase = false;
            return KColorSchemeManager::eventFilter(watched, event);
        } else if (kcolorschememanager_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcolorschememanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KColorSchemeManager::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorschememanager_timerevent_isbase) {
            kcolorschememanager_timerevent_isbase = false;
            KColorSchemeManager::timerEvent(event);
        } else if (kcolorschememanager_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcolorschememanager_timerevent_callback(this, cbval1);
        } else {
            KColorSchemeManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorschememanager_childevent_isbase) {
            kcolorschememanager_childevent_isbase = false;
            KColorSchemeManager::childEvent(event);
        } else if (kcolorschememanager_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcolorschememanager_childevent_callback(this, cbval1);
        } else {
            KColorSchemeManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorschememanager_customevent_isbase) {
            kcolorschememanager_customevent_isbase = false;
            KColorSchemeManager::customEvent(event);
        } else if (kcolorschememanager_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolorschememanager_customevent_callback(this, cbval1);
        } else {
            KColorSchemeManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorschememanager_connectnotify_isbase) {
            kcolorschememanager_connectnotify_isbase = false;
            KColorSchemeManager::connectNotify(signal);
        } else if (kcolorschememanager_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolorschememanager_connectnotify_callback(this, cbval1);
        } else {
            KColorSchemeManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorschememanager_disconnectnotify_isbase) {
            kcolorschememanager_disconnectnotify_isbase = false;
            KColorSchemeManager::disconnectNotify(signal);
        } else if (kcolorschememanager_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolorschememanager_disconnectnotify_callback(this, cbval1);
        } else {
            KColorSchemeManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorschememanager_sender_isbase) {
            kcolorschememanager_sender_isbase = false;
            return KColorSchemeManager::sender();
        } else if (kcolorschememanager_sender_callback != nullptr) {
            QObject* callback_ret = kcolorschememanager_sender_callback();
            return callback_ret;
        } else {
            return KColorSchemeManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorschememanager_sendersignalindex_isbase) {
            kcolorschememanager_sendersignalindex_isbase = false;
            return KColorSchemeManager::senderSignalIndex();
        } else if (kcolorschememanager_sendersignalindex_callback != nullptr) {
            int callback_ret = kcolorschememanager_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColorSchemeManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorschememanager_receivers_isbase) {
            kcolorschememanager_receivers_isbase = false;
            return KColorSchemeManager::receivers(signal);
        } else if (kcolorschememanager_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcolorschememanager_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorSchemeManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorschememanager_issignalconnected_isbase) {
            kcolorschememanager_issignalconnected_isbase = false;
            return KColorSchemeManager::isSignalConnected(signal);
        } else if (kcolorschememanager_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcolorschememanager_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorSchemeManager::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KColorSchemeManager_TimerEvent(KColorSchemeManager* self, QTimerEvent* event);
    friend void KColorSchemeManager_QBaseTimerEvent(KColorSchemeManager* self, QTimerEvent* event);
    friend void KColorSchemeManager_ChildEvent(KColorSchemeManager* self, QChildEvent* event);
    friend void KColorSchemeManager_QBaseChildEvent(KColorSchemeManager* self, QChildEvent* event);
    friend void KColorSchemeManager_CustomEvent(KColorSchemeManager* self, QEvent* event);
    friend void KColorSchemeManager_QBaseCustomEvent(KColorSchemeManager* self, QEvent* event);
    friend void KColorSchemeManager_ConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
    friend void KColorSchemeManager_QBaseConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
    friend void KColorSchemeManager_DisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
    friend void KColorSchemeManager_QBaseDisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal);
    friend QObject* KColorSchemeManager_Sender(const KColorSchemeManager* self);
    friend QObject* KColorSchemeManager_QBaseSender(const KColorSchemeManager* self);
    friend int KColorSchemeManager_SenderSignalIndex(const KColorSchemeManager* self);
    friend int KColorSchemeManager_QBaseSenderSignalIndex(const KColorSchemeManager* self);
    friend int KColorSchemeManager_Receivers(const KColorSchemeManager* self, const char* signal);
    friend int KColorSchemeManager_QBaseReceivers(const KColorSchemeManager* self, const char* signal);
    friend bool KColorSchemeManager_IsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal);
    friend bool KColorSchemeManager_QBaseIsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal);
};

#endif
