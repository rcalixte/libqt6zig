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
    using KXMLGUIFactory_MetaObject_Callback = QMetaObject* (*)();
    using KXMLGUIFactory_Metacast_Callback = void* (*)(KXMLGUIFactory*, const char*);
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
    KXMLGUIFactory_MetaObject_Callback kxmlguifactory_metaobject_callback = nullptr;
    KXMLGUIFactory_Metacast_Callback kxmlguifactory_metacast_callback = nullptr;
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
    mutable bool kxmlguifactory_metaobject_isbase = false;
    mutable bool kxmlguifactory_metacast_isbase = false;
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

    // Callback setters
    inline void setKXMLGUIFactory_MetaObject_Callback(KXMLGUIFactory_MetaObject_Callback cb) { kxmlguifactory_metaobject_callback = cb; }
    inline void setKXMLGUIFactory_Metacast_Callback(KXMLGUIFactory_Metacast_Callback cb) { kxmlguifactory_metacast_callback = cb; }
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
    inline void setKXMLGUIFactory_MetaObject_IsBase(bool value) const { kxmlguifactory_metaobject_isbase = value; }
    inline void setKXMLGUIFactory_Metacast_IsBase(bool value) const { kxmlguifactory_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kxmlguifactory_metaobject_isbase) {
            kxmlguifactory_metaobject_isbase = false;
            return KXMLGUIFactory::metaObject();
        }
        auto metaobject_cb = kxmlguifactory_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KXMLGUIFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kxmlguifactory_metacast_isbase) {
            kxmlguifactory_metacast_isbase = false;
            return KXMLGUIFactory::qt_metacast(param1);
        }
        auto metacast_cb = kxmlguifactory_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KXMLGUIFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmlguifactory_metacall_isbase) {
            kxmlguifactory_metacall_isbase = false;
            return KXMLGUIFactory::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kxmlguifactory_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KXMLGUIFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmlguifactory_event_isbase) {
            kxmlguifactory_event_isbase = false;
            return KXMLGUIFactory::event(event);
        }
        auto event_cb = kxmlguifactory_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KXMLGUIFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmlguifactory_eventfilter_isbase) {
            kxmlguifactory_eventfilter_isbase = false;
            return KXMLGUIFactory::eventFilter(watched, event);
        }
        auto eventfilter_cb = kxmlguifactory_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KXMLGUIFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmlguifactory_timerevent_isbase) {
            kxmlguifactory_timerevent_isbase = false;
            KXMLGUIFactory::timerEvent(event);
            return;
        }
        auto timerevent_cb = kxmlguifactory_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KXMLGUIFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmlguifactory_childevent_isbase) {
            kxmlguifactory_childevent_isbase = false;
            KXMLGUIFactory::childEvent(event);
            return;
        }
        auto childevent_cb = kxmlguifactory_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KXMLGUIFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmlguifactory_customevent_isbase) {
            kxmlguifactory_customevent_isbase = false;
            KXMLGUIFactory::customEvent(event);
            return;
        }
        auto customevent_cb = kxmlguifactory_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KXMLGUIFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmlguifactory_connectnotify_isbase) {
            kxmlguifactory_connectnotify_isbase = false;
            KXMLGUIFactory::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kxmlguifactory_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KXMLGUIFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmlguifactory_disconnectnotify_isbase) {
            kxmlguifactory_disconnectnotify_isbase = false;
            KXMLGUIFactory::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kxmlguifactory_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KXMLGUIFactory::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kxmlguifactory_sender_isbase) {
            kxmlguifactory_sender_isbase = false;
            return KXMLGUIFactory::sender();
        }
        auto sender_cb = kxmlguifactory_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KXMLGUIFactory::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kxmlguifactory_sendersignalindex_isbase) {
            kxmlguifactory_sendersignalindex_isbase = false;
            return KXMLGUIFactory::senderSignalIndex();
        }
        auto sendersignalindex_cb = kxmlguifactory_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KXMLGUIFactory::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kxmlguifactory_receivers_isbase) {
            kxmlguifactory_receivers_isbase = false;
            return KXMLGUIFactory::receivers(signal);
        }
        auto receivers_cb = kxmlguifactory_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXMLGUIFactory::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kxmlguifactory_issignalconnected_isbase) {
            kxmlguifactory_issignalconnected_isbase = false;
            return KXMLGUIFactory::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kxmlguifactory_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KXMLGUIFactory::isSignalConnected(signal);
    }

    // Friend functions
    friend void KXMLGUIFactory_TimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
    friend void KXMLGUIFactory_SuperTimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
    friend void KXMLGUIFactory_ChildEvent(KXMLGUIFactory* self, QChildEvent* event);
    friend void KXMLGUIFactory_SuperChildEvent(KXMLGUIFactory* self, QChildEvent* event);
    friend void KXMLGUIFactory_CustomEvent(KXMLGUIFactory* self, QEvent* event);
    friend void KXMLGUIFactory_SuperCustomEvent(KXMLGUIFactory* self, QEvent* event);
    friend void KXMLGUIFactory_ConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_SuperConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_DisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_SuperDisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend QObject* KXMLGUIFactory_Sender(const KXMLGUIFactory* self);
    friend QObject* KXMLGUIFactory_SuperSender(const KXMLGUIFactory* self);
    friend int KXMLGUIFactory_SenderSignalIndex(const KXMLGUIFactory* self);
    friend int KXMLGUIFactory_SuperSenderSignalIndex(const KXMLGUIFactory* self);
    friend int KXMLGUIFactory_Receivers(const KXMLGUIFactory* self, const char* signal);
    friend int KXMLGUIFactory_SuperReceivers(const KXMLGUIFactory* self, const char* signal);
    friend bool KXMLGUIFactory_IsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal);
    friend bool KXMLGUIFactory_SuperIsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal);
};

#endif
