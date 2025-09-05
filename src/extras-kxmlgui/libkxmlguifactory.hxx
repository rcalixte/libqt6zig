#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUIFACTORY_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUIFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMLGUIFactory so that we can call protected methods
class VirtualKXMLGUIFactory final : public KXMLGUIFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualKXMLGUIFactory = true;

    // Virtual class public types (including callbacks)
    using KXMLGUIFactory_Metacall_Callback = int (*)(KXMLGUIFactory*, int, int, void**);
    using KXMLGUIFactory_Event_Callback = bool (*)(KXMLGUIFactory*, QEvent*);
    using KXMLGUIFactory_EventFilter_Callback = bool (*)(KXMLGUIFactory*, QObject*, QEvent*);
    using KXMLGUIFactory_TimerEvent_Callback = void (*)(KXMLGUIFactory*, QTimerEvent*);
    using KXMLGUIFactory_ChildEvent_Callback = void (*)(KXMLGUIFactory*, QChildEvent*);
    using KXMLGUIFactory_CustomEvent_Callback = void (*)(KXMLGUIFactory*, QEvent*);
    using KXMLGUIFactory_ConnectNotify_Callback = void (*)(KXMLGUIFactory*, QMetaMethod*);
    using KXMLGUIFactory_DisconnectNotify_Callback = void (*)(KXMLGUIFactory*, QMetaMethod*);
    using KXMLGUIFactory_Sender_Callback = QObject* (*)();
    using KXMLGUIFactory_SenderSignalIndex_Callback = int (*)();
    using KXMLGUIFactory_Receivers_Callback = int (*)(const KXMLGUIFactory*, const char*);
    using KXMLGUIFactory_IsSignalConnected_Callback = bool (*)(const KXMLGUIFactory*, QMetaMethod*);

  protected:
    // Instance callback storage
    KXMLGUIFactory_Metacall_Callback kxmlguifactory_metacall_callback = nullptr;
    KXMLGUIFactory_Event_Callback kxmlguifactory_event_callback = nullptr;
    KXMLGUIFactory_EventFilter_Callback kxmlguifactory_eventfilter_callback = nullptr;
    KXMLGUIFactory_TimerEvent_Callback kxmlguifactory_timerevent_callback = nullptr;
    KXMLGUIFactory_ChildEvent_Callback kxmlguifactory_childevent_callback = nullptr;
    KXMLGUIFactory_CustomEvent_Callback kxmlguifactory_customevent_callback = nullptr;
    KXMLGUIFactory_ConnectNotify_Callback kxmlguifactory_connectnotify_callback = nullptr;
    KXMLGUIFactory_DisconnectNotify_Callback kxmlguifactory_disconnectnotify_callback = nullptr;
    KXMLGUIFactory_Sender_Callback kxmlguifactory_sender_callback = nullptr;
    KXMLGUIFactory_SenderSignalIndex_Callback kxmlguifactory_sendersignalindex_callback = nullptr;
    KXMLGUIFactory_Receivers_Callback kxmlguifactory_receivers_callback = nullptr;
    KXMLGUIFactory_IsSignalConnected_Callback kxmlguifactory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kxmlguifactory_metacall_isbase = false;
    mutable bool kxmlguifactory_event_isbase = false;
    mutable bool kxmlguifactory_eventfilter_isbase = false;
    mutable bool kxmlguifactory_timerevent_isbase = false;
    mutable bool kxmlguifactory_childevent_isbase = false;
    mutable bool kxmlguifactory_customevent_isbase = false;
    mutable bool kxmlguifactory_connectnotify_isbase = false;
    mutable bool kxmlguifactory_disconnectnotify_isbase = false;
    mutable bool kxmlguifactory_sender_isbase = false;
    mutable bool kxmlguifactory_sendersignalindex_isbase = false;
    mutable bool kxmlguifactory_receivers_isbase = false;
    mutable bool kxmlguifactory_issignalconnected_isbase = false;

  public:
    VirtualKXMLGUIFactory(KXMLGUIBuilder* builder) : KXMLGUIFactory(builder) {};
    VirtualKXMLGUIFactory(KXMLGUIBuilder* builder, QObject* parent) : KXMLGUIFactory(builder, parent) {};

    ~VirtualKXMLGUIFactory() {
        kxmlguifactory_metacall_callback = nullptr;
        kxmlguifactory_event_callback = nullptr;
        kxmlguifactory_eventfilter_callback = nullptr;
        kxmlguifactory_timerevent_callback = nullptr;
        kxmlguifactory_childevent_callback = nullptr;
        kxmlguifactory_customevent_callback = nullptr;
        kxmlguifactory_connectnotify_callback = nullptr;
        kxmlguifactory_disconnectnotify_callback = nullptr;
        kxmlguifactory_sender_callback = nullptr;
        kxmlguifactory_sendersignalindex_callback = nullptr;
        kxmlguifactory_receivers_callback = nullptr;
        kxmlguifactory_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKXMLGUIFactory_Metacall_Callback(KXMLGUIFactory_Metacall_Callback cb) { kxmlguifactory_metacall_callback = cb; }
    inline void setKXMLGUIFactory_Event_Callback(KXMLGUIFactory_Event_Callback cb) { kxmlguifactory_event_callback = cb; }
    inline void setKXMLGUIFactory_EventFilter_Callback(KXMLGUIFactory_EventFilter_Callback cb) { kxmlguifactory_eventfilter_callback = cb; }
    inline void setKXMLGUIFactory_TimerEvent_Callback(KXMLGUIFactory_TimerEvent_Callback cb) { kxmlguifactory_timerevent_callback = cb; }
    inline void setKXMLGUIFactory_ChildEvent_Callback(KXMLGUIFactory_ChildEvent_Callback cb) { kxmlguifactory_childevent_callback = cb; }
    inline void setKXMLGUIFactory_CustomEvent_Callback(KXMLGUIFactory_CustomEvent_Callback cb) { kxmlguifactory_customevent_callback = cb; }
    inline void setKXMLGUIFactory_ConnectNotify_Callback(KXMLGUIFactory_ConnectNotify_Callback cb) { kxmlguifactory_connectnotify_callback = cb; }
    inline void setKXMLGUIFactory_DisconnectNotify_Callback(KXMLGUIFactory_DisconnectNotify_Callback cb) { kxmlguifactory_disconnectnotify_callback = cb; }
    inline void setKXMLGUIFactory_Sender_Callback(KXMLGUIFactory_Sender_Callback cb) { kxmlguifactory_sender_callback = cb; }
    inline void setKXMLGUIFactory_SenderSignalIndex_Callback(KXMLGUIFactory_SenderSignalIndex_Callback cb) { kxmlguifactory_sendersignalindex_callback = cb; }
    inline void setKXMLGUIFactory_Receivers_Callback(KXMLGUIFactory_Receivers_Callback cb) { kxmlguifactory_receivers_callback = cb; }
    inline void setKXMLGUIFactory_IsSignalConnected_Callback(KXMLGUIFactory_IsSignalConnected_Callback cb) { kxmlguifactory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKXMLGUIFactory_Metacall_IsBase(bool value) const { kxmlguifactory_metacall_isbase = value; }
    inline void setKXMLGUIFactory_Event_IsBase(bool value) const { kxmlguifactory_event_isbase = value; }
    inline void setKXMLGUIFactory_EventFilter_IsBase(bool value) const { kxmlguifactory_eventfilter_isbase = value; }
    inline void setKXMLGUIFactory_TimerEvent_IsBase(bool value) const { kxmlguifactory_timerevent_isbase = value; }
    inline void setKXMLGUIFactory_ChildEvent_IsBase(bool value) const { kxmlguifactory_childevent_isbase = value; }
    inline void setKXMLGUIFactory_CustomEvent_IsBase(bool value) const { kxmlguifactory_customevent_isbase = value; }
    inline void setKXMLGUIFactory_ConnectNotify_IsBase(bool value) const { kxmlguifactory_connectnotify_isbase = value; }
    inline void setKXMLGUIFactory_DisconnectNotify_IsBase(bool value) const { kxmlguifactory_disconnectnotify_isbase = value; }
    inline void setKXMLGUIFactory_Sender_IsBase(bool value) const { kxmlguifactory_sender_isbase = value; }
    inline void setKXMLGUIFactory_SenderSignalIndex_IsBase(bool value) const { kxmlguifactory_sendersignalindex_isbase = value; }
    inline void setKXMLGUIFactory_Receivers_IsBase(bool value) const { kxmlguifactory_receivers_isbase = value; }
    inline void setKXMLGUIFactory_IsSignalConnected_IsBase(bool value) const { kxmlguifactory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmlguifactory_metacall_isbase) {
            kxmlguifactory_metacall_isbase = false;
            return KXMLGUIFactory::qt_metacall(param1, param2, param3);
        } else if (kxmlguifactory_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kxmlguifactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KXMLGUIFactory::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmlguifactory_event_isbase) {
            kxmlguifactory_event_isbase = false;
            return KXMLGUIFactory::event(event);
        } else if (kxmlguifactory_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kxmlguifactory_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXMLGUIFactory::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmlguifactory_eventfilter_isbase) {
            kxmlguifactory_eventfilter_isbase = false;
            return KXMLGUIFactory::eventFilter(watched, event);
        } else if (kxmlguifactory_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kxmlguifactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KXMLGUIFactory::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmlguifactory_timerevent_isbase) {
            kxmlguifactory_timerevent_isbase = false;
            KXMLGUIFactory::timerEvent(event);
        } else if (kxmlguifactory_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kxmlguifactory_timerevent_callback(this, cbval1);
        } else {
            KXMLGUIFactory::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmlguifactory_childevent_isbase) {
            kxmlguifactory_childevent_isbase = false;
            KXMLGUIFactory::childEvent(event);
        } else if (kxmlguifactory_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kxmlguifactory_childevent_callback(this, cbval1);
        } else {
            KXMLGUIFactory::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmlguifactory_customevent_isbase) {
            kxmlguifactory_customevent_isbase = false;
            KXMLGUIFactory::customEvent(event);
        } else if (kxmlguifactory_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kxmlguifactory_customevent_callback(this, cbval1);
        } else {
            KXMLGUIFactory::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmlguifactory_connectnotify_isbase) {
            kxmlguifactory_connectnotify_isbase = false;
            KXMLGUIFactory::connectNotify(signal);
        } else if (kxmlguifactory_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kxmlguifactory_connectnotify_callback(this, cbval1);
        } else {
            KXMLGUIFactory::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmlguifactory_disconnectnotify_isbase) {
            kxmlguifactory_disconnectnotify_isbase = false;
            KXMLGUIFactory::disconnectNotify(signal);
        } else if (kxmlguifactory_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kxmlguifactory_disconnectnotify_callback(this, cbval1);
        } else {
            KXMLGUIFactory::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kxmlguifactory_sender_isbase) {
            kxmlguifactory_sender_isbase = false;
            return KXMLGUIFactory::sender();
        } else if (kxmlguifactory_sender_callback != nullptr) {
            QObject* callback_ret = kxmlguifactory_sender_callback();
            return callback_ret;
        } else {
            return KXMLGUIFactory::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kxmlguifactory_sendersignalindex_isbase) {
            kxmlguifactory_sendersignalindex_isbase = false;
            return KXMLGUIFactory::senderSignalIndex();
        } else if (kxmlguifactory_sendersignalindex_callback != nullptr) {
            int callback_ret = kxmlguifactory_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KXMLGUIFactory::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kxmlguifactory_receivers_isbase) {
            kxmlguifactory_receivers_isbase = false;
            return KXMLGUIFactory::receivers(signal);
        } else if (kxmlguifactory_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kxmlguifactory_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KXMLGUIFactory::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kxmlguifactory_issignalconnected_isbase) {
            kxmlguifactory_issignalconnected_isbase = false;
            return KXMLGUIFactory::isSignalConnected(signal);
        } else if (kxmlguifactory_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kxmlguifactory_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXMLGUIFactory::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KXMLGUIFactory_TimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
    friend void KXMLGUIFactory_QBaseTimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
    friend void KXMLGUIFactory_ChildEvent(KXMLGUIFactory* self, QChildEvent* event);
    friend void KXMLGUIFactory_QBaseChildEvent(KXMLGUIFactory* self, QChildEvent* event);
    friend void KXMLGUIFactory_CustomEvent(KXMLGUIFactory* self, QEvent* event);
    friend void KXMLGUIFactory_QBaseCustomEvent(KXMLGUIFactory* self, QEvent* event);
    friend void KXMLGUIFactory_ConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_QBaseConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_DisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_QBaseDisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend QObject* KXMLGUIFactory_Sender(const KXMLGUIFactory* self);
    friend QObject* KXMLGUIFactory_QBaseSender(const KXMLGUIFactory* self);
    friend int KXMLGUIFactory_SenderSignalIndex(const KXMLGUIFactory* self);
    friend int KXMLGUIFactory_QBaseSenderSignalIndex(const KXMLGUIFactory* self);
    friend int KXMLGUIFactory_Receivers(const KXMLGUIFactory* self, const char* signal);
    friend int KXMLGUIFactory_QBaseReceivers(const KXMLGUIFactory* self, const char* signal);
    friend bool KXMLGUIFactory_IsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal);
    friend bool KXMLGUIFactory_QBaseIsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal);
};

#endif
