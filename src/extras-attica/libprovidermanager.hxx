#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBVIRTUALPROVIDERMANAGER_H
#define SRC_EXTRAS_ATTICAC_LIBVIRTUALPROVIDERMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Attica::ProviderManager so that we can call protected methods
class VirtualAtticaProviderManager final : public Attica::ProviderManager {

  public:
    // Virtual class boolean flag
    bool isVirtualAtticaProviderManager = true;

    // Virtual class public types (including callbacks)
    using Attica__ProviderManager_Metacall_Callback = int (*)(Attica__ProviderManager*, int, int, void**);
    using Attica__ProviderManager_Event_Callback = bool (*)(Attica__ProviderManager*, QEvent*);
    using Attica__ProviderManager_EventFilter_Callback = bool (*)(Attica__ProviderManager*, QObject*, QEvent*);
    using Attica__ProviderManager_TimerEvent_Callback = void (*)(Attica__ProviderManager*, QTimerEvent*);
    using Attica__ProviderManager_ChildEvent_Callback = void (*)(Attica__ProviderManager*, QChildEvent*);
    using Attica__ProviderManager_CustomEvent_Callback = void (*)(Attica__ProviderManager*, QEvent*);
    using Attica__ProviderManager_ConnectNotify_Callback = void (*)(Attica__ProviderManager*, QMetaMethod*);
    using Attica__ProviderManager_DisconnectNotify_Callback = void (*)(Attica__ProviderManager*, QMetaMethod*);
    using Attica__ProviderManager_Sender_Callback = QObject* (*)();
    using Attica__ProviderManager_SenderSignalIndex_Callback = int (*)();
    using Attica__ProviderManager_Receivers_Callback = int (*)(const Attica__ProviderManager*, const char*);
    using Attica__ProviderManager_IsSignalConnected_Callback = bool (*)(const Attica__ProviderManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    Attica__ProviderManager_Metacall_Callback attica__providermanager_metacall_callback = nullptr;
    Attica__ProviderManager_Event_Callback attica__providermanager_event_callback = nullptr;
    Attica__ProviderManager_EventFilter_Callback attica__providermanager_eventfilter_callback = nullptr;
    Attica__ProviderManager_TimerEvent_Callback attica__providermanager_timerevent_callback = nullptr;
    Attica__ProviderManager_ChildEvent_Callback attica__providermanager_childevent_callback = nullptr;
    Attica__ProviderManager_CustomEvent_Callback attica__providermanager_customevent_callback = nullptr;
    Attica__ProviderManager_ConnectNotify_Callback attica__providermanager_connectnotify_callback = nullptr;
    Attica__ProviderManager_DisconnectNotify_Callback attica__providermanager_disconnectnotify_callback = nullptr;
    Attica__ProviderManager_Sender_Callback attica__providermanager_sender_callback = nullptr;
    Attica__ProviderManager_SenderSignalIndex_Callback attica__providermanager_sendersignalindex_callback = nullptr;
    Attica__ProviderManager_Receivers_Callback attica__providermanager_receivers_callback = nullptr;
    Attica__ProviderManager_IsSignalConnected_Callback attica__providermanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool attica__providermanager_metacall_isbase = false;
    mutable bool attica__providermanager_event_isbase = false;
    mutable bool attica__providermanager_eventfilter_isbase = false;
    mutable bool attica__providermanager_timerevent_isbase = false;
    mutable bool attica__providermanager_childevent_isbase = false;
    mutable bool attica__providermanager_customevent_isbase = false;
    mutable bool attica__providermanager_connectnotify_isbase = false;
    mutable bool attica__providermanager_disconnectnotify_isbase = false;
    mutable bool attica__providermanager_sender_isbase = false;
    mutable bool attica__providermanager_sendersignalindex_isbase = false;
    mutable bool attica__providermanager_receivers_isbase = false;
    mutable bool attica__providermanager_issignalconnected_isbase = false;

  public:
    VirtualAtticaProviderManager() : Attica::ProviderManager() {};
    VirtualAtticaProviderManager(const Attica::ProviderManager::ProviderFlags& flags) : Attica::ProviderManager(flags) {};

    ~VirtualAtticaProviderManager() {
        attica__providermanager_metacall_callback = nullptr;
        attica__providermanager_event_callback = nullptr;
        attica__providermanager_eventfilter_callback = nullptr;
        attica__providermanager_timerevent_callback = nullptr;
        attica__providermanager_childevent_callback = nullptr;
        attica__providermanager_customevent_callback = nullptr;
        attica__providermanager_connectnotify_callback = nullptr;
        attica__providermanager_disconnectnotify_callback = nullptr;
        attica__providermanager_sender_callback = nullptr;
        attica__providermanager_sendersignalindex_callback = nullptr;
        attica__providermanager_receivers_callback = nullptr;
        attica__providermanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setAttica__ProviderManager_Metacall_Callback(Attica__ProviderManager_Metacall_Callback cb) { attica__providermanager_metacall_callback = cb; }
    inline void setAttica__ProviderManager_Event_Callback(Attica__ProviderManager_Event_Callback cb) { attica__providermanager_event_callback = cb; }
    inline void setAttica__ProviderManager_EventFilter_Callback(Attica__ProviderManager_EventFilter_Callback cb) { attica__providermanager_eventfilter_callback = cb; }
    inline void setAttica__ProviderManager_TimerEvent_Callback(Attica__ProviderManager_TimerEvent_Callback cb) { attica__providermanager_timerevent_callback = cb; }
    inline void setAttica__ProviderManager_ChildEvent_Callback(Attica__ProviderManager_ChildEvent_Callback cb) { attica__providermanager_childevent_callback = cb; }
    inline void setAttica__ProviderManager_CustomEvent_Callback(Attica__ProviderManager_CustomEvent_Callback cb) { attica__providermanager_customevent_callback = cb; }
    inline void setAttica__ProviderManager_ConnectNotify_Callback(Attica__ProviderManager_ConnectNotify_Callback cb) { attica__providermanager_connectnotify_callback = cb; }
    inline void setAttica__ProviderManager_DisconnectNotify_Callback(Attica__ProviderManager_DisconnectNotify_Callback cb) { attica__providermanager_disconnectnotify_callback = cb; }
    inline void setAttica__ProviderManager_Sender_Callback(Attica__ProviderManager_Sender_Callback cb) { attica__providermanager_sender_callback = cb; }
    inline void setAttica__ProviderManager_SenderSignalIndex_Callback(Attica__ProviderManager_SenderSignalIndex_Callback cb) { attica__providermanager_sendersignalindex_callback = cb; }
    inline void setAttica__ProviderManager_Receivers_Callback(Attica__ProviderManager_Receivers_Callback cb) { attica__providermanager_receivers_callback = cb; }
    inline void setAttica__ProviderManager_IsSignalConnected_Callback(Attica__ProviderManager_IsSignalConnected_Callback cb) { attica__providermanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setAttica__ProviderManager_Metacall_IsBase(bool value) const { attica__providermanager_metacall_isbase = value; }
    inline void setAttica__ProviderManager_Event_IsBase(bool value) const { attica__providermanager_event_isbase = value; }
    inline void setAttica__ProviderManager_EventFilter_IsBase(bool value) const { attica__providermanager_eventfilter_isbase = value; }
    inline void setAttica__ProviderManager_TimerEvent_IsBase(bool value) const { attica__providermanager_timerevent_isbase = value; }
    inline void setAttica__ProviderManager_ChildEvent_IsBase(bool value) const { attica__providermanager_childevent_isbase = value; }
    inline void setAttica__ProviderManager_CustomEvent_IsBase(bool value) const { attica__providermanager_customevent_isbase = value; }
    inline void setAttica__ProviderManager_ConnectNotify_IsBase(bool value) const { attica__providermanager_connectnotify_isbase = value; }
    inline void setAttica__ProviderManager_DisconnectNotify_IsBase(bool value) const { attica__providermanager_disconnectnotify_isbase = value; }
    inline void setAttica__ProviderManager_Sender_IsBase(bool value) const { attica__providermanager_sender_isbase = value; }
    inline void setAttica__ProviderManager_SenderSignalIndex_IsBase(bool value) const { attica__providermanager_sendersignalindex_isbase = value; }
    inline void setAttica__ProviderManager_Receivers_IsBase(bool value) const { attica__providermanager_receivers_isbase = value; }
    inline void setAttica__ProviderManager_IsSignalConnected_IsBase(bool value) const { attica__providermanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (attica__providermanager_metacall_isbase) {
            attica__providermanager_metacall_isbase = false;
            return Attica__ProviderManager::qt_metacall(param1, param2, param3);
        } else if (attica__providermanager_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = attica__providermanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Attica__ProviderManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (attica__providermanager_event_isbase) {
            attica__providermanager_event_isbase = false;
            return Attica__ProviderManager::event(event);
        } else if (attica__providermanager_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = attica__providermanager_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Attica__ProviderManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (attica__providermanager_eventfilter_isbase) {
            attica__providermanager_eventfilter_isbase = false;
            return Attica__ProviderManager::eventFilter(watched, event);
        } else if (attica__providermanager_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = attica__providermanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Attica__ProviderManager::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (attica__providermanager_timerevent_isbase) {
            attica__providermanager_timerevent_isbase = false;
            Attica__ProviderManager::timerEvent(event);
        } else if (attica__providermanager_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            attica__providermanager_timerevent_callback(this, cbval1);
        } else {
            Attica__ProviderManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (attica__providermanager_childevent_isbase) {
            attica__providermanager_childevent_isbase = false;
            Attica__ProviderManager::childEvent(event);
        } else if (attica__providermanager_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            attica__providermanager_childevent_callback(this, cbval1);
        } else {
            Attica__ProviderManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (attica__providermanager_customevent_isbase) {
            attica__providermanager_customevent_isbase = false;
            Attica__ProviderManager::customEvent(event);
        } else if (attica__providermanager_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            attica__providermanager_customevent_callback(this, cbval1);
        } else {
            Attica__ProviderManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (attica__providermanager_connectnotify_isbase) {
            attica__providermanager_connectnotify_isbase = false;
            Attica__ProviderManager::connectNotify(signal);
        } else if (attica__providermanager_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            attica__providermanager_connectnotify_callback(this, cbval1);
        } else {
            Attica__ProviderManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (attica__providermanager_disconnectnotify_isbase) {
            attica__providermanager_disconnectnotify_isbase = false;
            Attica__ProviderManager::disconnectNotify(signal);
        } else if (attica__providermanager_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            attica__providermanager_disconnectnotify_callback(this, cbval1);
        } else {
            Attica__ProviderManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (attica__providermanager_sender_isbase) {
            attica__providermanager_sender_isbase = false;
            return Attica__ProviderManager::sender();
        } else if (attica__providermanager_sender_callback != nullptr) {
            QObject* callback_ret = attica__providermanager_sender_callback();
            return callback_ret;
        } else {
            return Attica__ProviderManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (attica__providermanager_sendersignalindex_isbase) {
            attica__providermanager_sendersignalindex_isbase = false;
            return Attica__ProviderManager::senderSignalIndex();
        } else if (attica__providermanager_sendersignalindex_callback != nullptr) {
            int callback_ret = attica__providermanager_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Attica__ProviderManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (attica__providermanager_receivers_isbase) {
            attica__providermanager_receivers_isbase = false;
            return Attica__ProviderManager::receivers(signal);
        } else if (attica__providermanager_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = attica__providermanager_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Attica__ProviderManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (attica__providermanager_issignalconnected_isbase) {
            attica__providermanager_issignalconnected_isbase = false;
            return Attica__ProviderManager::isSignalConnected(signal);
        } else if (attica__providermanager_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = attica__providermanager_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Attica__ProviderManager::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Attica__ProviderManager_TimerEvent(Attica::ProviderManager* self, QTimerEvent* event);
    friend void Attica__ProviderManager_QBaseTimerEvent(Attica::ProviderManager* self, QTimerEvent* event);
    friend void Attica__ProviderManager_ChildEvent(Attica::ProviderManager* self, QChildEvent* event);
    friend void Attica__ProviderManager_QBaseChildEvent(Attica::ProviderManager* self, QChildEvent* event);
    friend void Attica__ProviderManager_CustomEvent(Attica::ProviderManager* self, QEvent* event);
    friend void Attica__ProviderManager_QBaseCustomEvent(Attica::ProviderManager* self, QEvent* event);
    friend void Attica__ProviderManager_ConnectNotify(Attica::ProviderManager* self, const QMetaMethod* signal);
    friend void Attica__ProviderManager_QBaseConnectNotify(Attica::ProviderManager* self, const QMetaMethod* signal);
    friend void Attica__ProviderManager_DisconnectNotify(Attica::ProviderManager* self, const QMetaMethod* signal);
    friend void Attica__ProviderManager_QBaseDisconnectNotify(Attica::ProviderManager* self, const QMetaMethod* signal);
    friend QObject* Attica__ProviderManager_Sender(const Attica::ProviderManager* self);
    friend QObject* Attica__ProviderManager_QBaseSender(const Attica::ProviderManager* self);
    friend int Attica__ProviderManager_SenderSignalIndex(const Attica::ProviderManager* self);
    friend int Attica__ProviderManager_QBaseSenderSignalIndex(const Attica::ProviderManager* self);
    friend int Attica__ProviderManager_Receivers(const Attica::ProviderManager* self, const char* signal);
    friend int Attica__ProviderManager_QBaseReceivers(const Attica::ProviderManager* self, const char* signal);
    friend bool Attica__ProviderManager_IsSignalConnected(const Attica::ProviderManager* self, const QMetaMethod* signal);
    friend bool Attica__ProviderManager_QBaseIsSignalConnected(const Attica::ProviderManager* self, const QMetaMethod* signal);
};

#endif
