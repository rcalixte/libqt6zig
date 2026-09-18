#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBUNITS_HXX
#define EXTRAS_KIRIGAMI_LIBUNITS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::IconSizes so that we can call protected methods
class VirtualKirigamiPlatformIconSizes final : public Kirigami::Platform::IconSizes {

  public:
    // Virtual class boolean flag
    bool isVirtualKirigamiPlatformIconSizes = true;

    // Virtual class public types (including callbacks)
    using Kirigami__Platform__IconSizes_MetaObject_Callback = QMetaObject* (*)();
    using Kirigami__Platform__IconSizes_Metacast_Callback = void* (*)(Kirigami__Platform__IconSizes*, const char*);
    using Kirigami__Platform__IconSizes_Metacall_Callback = int (*)(Kirigami__Platform__IconSizes*, int, int, void**);
    using Kirigami__Platform__IconSizes_Event_Callback = bool (*)(Kirigami__Platform__IconSizes*, QEvent*);
    using Kirigami__Platform__IconSizes_EventFilter_Callback = bool (*)(Kirigami__Platform__IconSizes*, QObject*, QEvent*);
    using Kirigami__Platform__IconSizes_TimerEvent_Callback = void (*)(Kirigami__Platform__IconSizes*, QTimerEvent*);
    using Kirigami__Platform__IconSizes_ChildEvent_Callback = void (*)(Kirigami__Platform__IconSizes*, QChildEvent*);
    using Kirigami__Platform__IconSizes_CustomEvent_Callback = void (*)(Kirigami__Platform__IconSizes*, QEvent*);
    using Kirigami__Platform__IconSizes_ConnectNotify_Callback = void (*)(Kirigami__Platform__IconSizes*, QMetaMethod*);
    using Kirigami__Platform__IconSizes_DisconnectNotify_Callback = void (*)(Kirigami__Platform__IconSizes*, QMetaMethod*);
    using Kirigami__Platform__IconSizes_Sender_Callback = QObject* (*)();
    using Kirigami__Platform__IconSizes_SenderSignalIndex_Callback = int (*)();
    using Kirigami__Platform__IconSizes_Receivers_Callback = int (*)(const Kirigami__Platform__IconSizes*, const char*);
    using Kirigami__Platform__IconSizes_IsSignalConnected_Callback = bool (*)(const Kirigami__Platform__IconSizes*, QMetaMethod*);

  protected:
    // Instance callback storage
    Kirigami__Platform__IconSizes_MetaObject_Callback kirigami__platform__iconsizes_metaobject_callback = nullptr;
    Kirigami__Platform__IconSizes_Metacast_Callback kirigami__platform__iconsizes_metacast_callback = nullptr;
    Kirigami__Platform__IconSizes_Metacall_Callback kirigami__platform__iconsizes_metacall_callback = nullptr;
    Kirigami__Platform__IconSizes_Event_Callback kirigami__platform__iconsizes_event_callback = nullptr;
    Kirigami__Platform__IconSizes_EventFilter_Callback kirigami__platform__iconsizes_eventfilter_callback = nullptr;
    Kirigami__Platform__IconSizes_TimerEvent_Callback kirigami__platform__iconsizes_timerevent_callback = nullptr;
    Kirigami__Platform__IconSizes_ChildEvent_Callback kirigami__platform__iconsizes_childevent_callback = nullptr;
    Kirigami__Platform__IconSizes_CustomEvent_Callback kirigami__platform__iconsizes_customevent_callback = nullptr;
    Kirigami__Platform__IconSizes_ConnectNotify_Callback kirigami__platform__iconsizes_connectnotify_callback = nullptr;
    Kirigami__Platform__IconSizes_DisconnectNotify_Callback kirigami__platform__iconsizes_disconnectnotify_callback = nullptr;
    Kirigami__Platform__IconSizes_Sender_Callback kirigami__platform__iconsizes_sender_callback = nullptr;
    Kirigami__Platform__IconSizes_SenderSignalIndex_Callback kirigami__platform__iconsizes_sendersignalindex_callback = nullptr;
    Kirigami__Platform__IconSizes_Receivers_Callback kirigami__platform__iconsizes_receivers_callback = nullptr;
    Kirigami__Platform__IconSizes_IsSignalConnected_Callback kirigami__platform__iconsizes_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kirigami__platform__iconsizes_metaobject_isbase = false;
    mutable bool kirigami__platform__iconsizes_metacast_isbase = false;
    mutable bool kirigami__platform__iconsizes_metacall_isbase = false;
    mutable bool kirigami__platform__iconsizes_event_isbase = false;
    mutable bool kirigami__platform__iconsizes_eventfilter_isbase = false;
    mutable bool kirigami__platform__iconsizes_timerevent_isbase = false;
    mutable bool kirigami__platform__iconsizes_childevent_isbase = false;
    mutable bool kirigami__platform__iconsizes_customevent_isbase = false;
    mutable bool kirigami__platform__iconsizes_connectnotify_isbase = false;
    mutable bool kirigami__platform__iconsizes_disconnectnotify_isbase = false;
    mutable bool kirigami__platform__iconsizes_sender_isbase = false;
    mutable bool kirigami__platform__iconsizes_sendersignalindex_isbase = false;
    mutable bool kirigami__platform__iconsizes_receivers_isbase = false;
    mutable bool kirigami__platform__iconsizes_issignalconnected_isbase = false;

  public:
    VirtualKirigamiPlatformIconSizes(Kirigami::Platform::Units* units) : Kirigami::Platform::IconSizes(units) {};

    // Callback setters
    inline void setKirigami__Platform__IconSizes_MetaObject_Callback(Kirigami__Platform__IconSizes_MetaObject_Callback cb) { kirigami__platform__iconsizes_metaobject_callback = cb; }
    inline void setKirigami__Platform__IconSizes_Metacast_Callback(Kirigami__Platform__IconSizes_Metacast_Callback cb) { kirigami__platform__iconsizes_metacast_callback = cb; }
    inline void setKirigami__Platform__IconSizes_Metacall_Callback(Kirigami__Platform__IconSizes_Metacall_Callback cb) { kirigami__platform__iconsizes_metacall_callback = cb; }
    inline void setKirigami__Platform__IconSizes_Event_Callback(Kirigami__Platform__IconSizes_Event_Callback cb) { kirigami__platform__iconsizes_event_callback = cb; }
    inline void setKirigami__Platform__IconSizes_EventFilter_Callback(Kirigami__Platform__IconSizes_EventFilter_Callback cb) { kirigami__platform__iconsizes_eventfilter_callback = cb; }
    inline void setKirigami__Platform__IconSizes_TimerEvent_Callback(Kirigami__Platform__IconSizes_TimerEvent_Callback cb) { kirigami__platform__iconsizes_timerevent_callback = cb; }
    inline void setKirigami__Platform__IconSizes_ChildEvent_Callback(Kirigami__Platform__IconSizes_ChildEvent_Callback cb) { kirigami__platform__iconsizes_childevent_callback = cb; }
    inline void setKirigami__Platform__IconSizes_CustomEvent_Callback(Kirigami__Platform__IconSizes_CustomEvent_Callback cb) { kirigami__platform__iconsizes_customevent_callback = cb; }
    inline void setKirigami__Platform__IconSizes_ConnectNotify_Callback(Kirigami__Platform__IconSizes_ConnectNotify_Callback cb) { kirigami__platform__iconsizes_connectnotify_callback = cb; }
    inline void setKirigami__Platform__IconSizes_DisconnectNotify_Callback(Kirigami__Platform__IconSizes_DisconnectNotify_Callback cb) { kirigami__platform__iconsizes_disconnectnotify_callback = cb; }
    inline void setKirigami__Platform__IconSizes_Sender_Callback(Kirigami__Platform__IconSizes_Sender_Callback cb) { kirigami__platform__iconsizes_sender_callback = cb; }
    inline void setKirigami__Platform__IconSizes_SenderSignalIndex_Callback(Kirigami__Platform__IconSizes_SenderSignalIndex_Callback cb) { kirigami__platform__iconsizes_sendersignalindex_callback = cb; }
    inline void setKirigami__Platform__IconSizes_Receivers_Callback(Kirigami__Platform__IconSizes_Receivers_Callback cb) { kirigami__platform__iconsizes_receivers_callback = cb; }
    inline void setKirigami__Platform__IconSizes_IsSignalConnected_Callback(Kirigami__Platform__IconSizes_IsSignalConnected_Callback cb) { kirigami__platform__iconsizes_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKirigami__Platform__IconSizes_MetaObject_IsBase(bool value) const { kirigami__platform__iconsizes_metaobject_isbase = value; }
    inline void setKirigami__Platform__IconSizes_Metacast_IsBase(bool value) const { kirigami__platform__iconsizes_metacast_isbase = value; }
    inline void setKirigami__Platform__IconSizes_Metacall_IsBase(bool value) const { kirigami__platform__iconsizes_metacall_isbase = value; }
    inline void setKirigami__Platform__IconSizes_Event_IsBase(bool value) const { kirigami__platform__iconsizes_event_isbase = value; }
    inline void setKirigami__Platform__IconSizes_EventFilter_IsBase(bool value) const { kirigami__platform__iconsizes_eventfilter_isbase = value; }
    inline void setKirigami__Platform__IconSizes_TimerEvent_IsBase(bool value) const { kirigami__platform__iconsizes_timerevent_isbase = value; }
    inline void setKirigami__Platform__IconSizes_ChildEvent_IsBase(bool value) const { kirigami__platform__iconsizes_childevent_isbase = value; }
    inline void setKirigami__Platform__IconSizes_CustomEvent_IsBase(bool value) const { kirigami__platform__iconsizes_customevent_isbase = value; }
    inline void setKirigami__Platform__IconSizes_ConnectNotify_IsBase(bool value) const { kirigami__platform__iconsizes_connectnotify_isbase = value; }
    inline void setKirigami__Platform__IconSizes_DisconnectNotify_IsBase(bool value) const { kirigami__platform__iconsizes_disconnectnotify_isbase = value; }
    inline void setKirigami__Platform__IconSizes_Sender_IsBase(bool value) const { kirigami__platform__iconsizes_sender_isbase = value; }
    inline void setKirigami__Platform__IconSizes_SenderSignalIndex_IsBase(bool value) const { kirigami__platform__iconsizes_sendersignalindex_isbase = value; }
    inline void setKirigami__Platform__IconSizes_Receivers_IsBase(bool value) const { kirigami__platform__iconsizes_receivers_isbase = value; }
    inline void setKirigami__Platform__IconSizes_IsSignalConnected_IsBase(bool value) const { kirigami__platform__iconsizes_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__iconsizes_metaobject_isbase) {
            kirigami__platform__iconsizes_metaobject_isbase = false;
            return Kirigami__Platform__IconSizes::metaObject();
        }
        auto metaobject_cb = kirigami__platform__iconsizes_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__iconsizes_metacast_isbase) {
            kirigami__platform__iconsizes_metacast_isbase = false;
            return Kirigami__Platform__IconSizes::qt_metacast(param1);
        }
        auto metacast_cb = kirigami__platform__iconsizes_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__iconsizes_metacall_isbase) {
            kirigami__platform__iconsizes_metacall_isbase = false;
            return Kirigami__Platform__IconSizes::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kirigami__platform__iconsizes_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__IconSizes::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__iconsizes_event_isbase) {
            kirigami__platform__iconsizes_event_isbase = false;
            return Kirigami__Platform__IconSizes::event(event);
        }
        auto event_cb = kirigami__platform__iconsizes_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__iconsizes_eventfilter_isbase) {
            kirigami__platform__iconsizes_eventfilter_isbase = false;
            return Kirigami__Platform__IconSizes::eventFilter(watched, event);
        }
        auto eventfilter_cb = kirigami__platform__iconsizes_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__iconsizes_timerevent_isbase) {
            kirigami__platform__iconsizes_timerevent_isbase = false;
            Kirigami__Platform__IconSizes::timerEvent(event);
            return;
        }
        auto timerevent_cb = kirigami__platform__iconsizes_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__iconsizes_childevent_isbase) {
            kirigami__platform__iconsizes_childevent_isbase = false;
            Kirigami__Platform__IconSizes::childEvent(event);
            return;
        }
        auto childevent_cb = kirigami__platform__iconsizes_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__iconsizes_customevent_isbase) {
            kirigami__platform__iconsizes_customevent_isbase = false;
            Kirigami__Platform__IconSizes::customEvent(event);
            return;
        }
        auto customevent_cb = kirigami__platform__iconsizes_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__iconsizes_connectnotify_isbase) {
            kirigami__platform__iconsizes_connectnotify_isbase = false;
            Kirigami__Platform__IconSizes::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kirigami__platform__iconsizes_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__iconsizes_disconnectnotify_isbase) {
            kirigami__platform__iconsizes_disconnectnotify_isbase = false;
            Kirigami__Platform__IconSizes::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kirigami__platform__iconsizes_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__IconSizes::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kirigami__platform__iconsizes_sender_isbase) {
            kirigami__platform__iconsizes_sender_isbase = false;
            return Kirigami__Platform__IconSizes::sender();
        }
        auto sender_cb = kirigami__platform__iconsizes_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kirigami__platform__iconsizes_sendersignalindex_isbase) {
            kirigami__platform__iconsizes_sendersignalindex_isbase = false;
            return Kirigami__Platform__IconSizes::senderSignalIndex();
        }
        auto sendersignalindex_cb = kirigami__platform__iconsizes_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__IconSizes::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kirigami__platform__iconsizes_receivers_isbase) {
            kirigami__platform__iconsizes_receivers_isbase = false;
            return Kirigami__Platform__IconSizes::receivers(signal);
        }
        auto receivers_cb = kirigami__platform__iconsizes_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__IconSizes::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kirigami__platform__iconsizes_issignalconnected_isbase) {
            kirigami__platform__iconsizes_issignalconnected_isbase = false;
            return Kirigami__Platform__IconSizes::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kirigami__platform__iconsizes_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__IconSizes::isSignalConnected(signal);
    }

    // Friend functions
    friend void Kirigami__Platform__IconSizes_TimerEvent(Kirigami::Platform::IconSizes* self, QTimerEvent* event);
    friend void Kirigami__Platform__IconSizes_SuperTimerEvent(Kirigami::Platform::IconSizes* self, QTimerEvent* event);
    friend void Kirigami__Platform__IconSizes_ChildEvent(Kirigami::Platform::IconSizes* self, QChildEvent* event);
    friend void Kirigami__Platform__IconSizes_SuperChildEvent(Kirigami::Platform::IconSizes* self, QChildEvent* event);
    friend void Kirigami__Platform__IconSizes_CustomEvent(Kirigami::Platform::IconSizes* self, QEvent* event);
    friend void Kirigami__Platform__IconSizes_SuperCustomEvent(Kirigami::Platform::IconSizes* self, QEvent* event);
    friend void Kirigami__Platform__IconSizes_ConnectNotify(Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__IconSizes_SuperConnectNotify(Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__IconSizes_DisconnectNotify(Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__IconSizes_SuperDisconnectNotify(Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
    friend QObject* Kirigami__Platform__IconSizes_Sender(const Kirigami::Platform::IconSizes* self);
    friend QObject* Kirigami__Platform__IconSizes_SuperSender(const Kirigami::Platform::IconSizes* self);
    friend int Kirigami__Platform__IconSizes_SenderSignalIndex(const Kirigami::Platform::IconSizes* self);
    friend int Kirigami__Platform__IconSizes_SuperSenderSignalIndex(const Kirigami::Platform::IconSizes* self);
    friend int Kirigami__Platform__IconSizes_Receivers(const Kirigami::Platform::IconSizes* self, const char* signal);
    friend int Kirigami__Platform__IconSizes_SuperReceivers(const Kirigami::Platform::IconSizes* self, const char* signal);
    friend bool Kirigami__Platform__IconSizes_IsSignalConnected(const Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
    friend bool Kirigami__Platform__IconSizes_SuperIsSignalConnected(const Kirigami::Platform::IconSizes* self, const QMetaMethod* signal);
};

#endif
