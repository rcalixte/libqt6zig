#pragma once
#ifndef EXTRAS_SOLID_LIBDEVICENOTIFIER_HXX
#define EXTRAS_SOLID_LIBDEVICENOTIFIER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Solid::DeviceNotifier so that we can call protected methods
class VirtualSolidDeviceNotifier final : public Solid::DeviceNotifier {

  public:
    // Virtual class boolean flag
    bool isVirtualSolidDeviceNotifier = true;

    // Virtual class public types (including callbacks)
    using Solid__DeviceNotifier_MetaObject_Callback = QMetaObject* (*)();
    using Solid__DeviceNotifier_Metacast_Callback = void* (*)(Solid__DeviceNotifier*, const char*);
    using Solid__DeviceNotifier_Metacall_Callback = int (*)(Solid__DeviceNotifier*, int, int, void**);
    using Solid__DeviceNotifier_Event_Callback = bool (*)(Solid__DeviceNotifier*, QEvent*);
    using Solid__DeviceNotifier_EventFilter_Callback = bool (*)(Solid__DeviceNotifier*, QObject*, QEvent*);
    using Solid__DeviceNotifier_TimerEvent_Callback = void (*)(Solid__DeviceNotifier*, QTimerEvent*);
    using Solid__DeviceNotifier_ChildEvent_Callback = void (*)(Solid__DeviceNotifier*, QChildEvent*);
    using Solid__DeviceNotifier_CustomEvent_Callback = void (*)(Solid__DeviceNotifier*, QEvent*);
    using Solid__DeviceNotifier_ConnectNotify_Callback = void (*)(Solid__DeviceNotifier*, QMetaMethod*);
    using Solid__DeviceNotifier_DisconnectNotify_Callback = void (*)(Solid__DeviceNotifier*, QMetaMethod*);
    using Solid__DeviceNotifier_Sender_Callback = QObject* (*)();
    using Solid__DeviceNotifier_SenderSignalIndex_Callback = int (*)();
    using Solid__DeviceNotifier_Receivers_Callback = int (*)(const Solid__DeviceNotifier*, const char*);
    using Solid__DeviceNotifier_IsSignalConnected_Callback = bool (*)(const Solid__DeviceNotifier*, QMetaMethod*);

  protected:
    // Instance callback storage
    Solid__DeviceNotifier_MetaObject_Callback solid__devicenotifier_metaobject_callback = nullptr;
    Solid__DeviceNotifier_Metacast_Callback solid__devicenotifier_metacast_callback = nullptr;
    Solid__DeviceNotifier_Metacall_Callback solid__devicenotifier_metacall_callback = nullptr;
    Solid__DeviceNotifier_Event_Callback solid__devicenotifier_event_callback = nullptr;
    Solid__DeviceNotifier_EventFilter_Callback solid__devicenotifier_eventfilter_callback = nullptr;
    Solid__DeviceNotifier_TimerEvent_Callback solid__devicenotifier_timerevent_callback = nullptr;
    Solid__DeviceNotifier_ChildEvent_Callback solid__devicenotifier_childevent_callback = nullptr;
    Solid__DeviceNotifier_CustomEvent_Callback solid__devicenotifier_customevent_callback = nullptr;
    Solid__DeviceNotifier_ConnectNotify_Callback solid__devicenotifier_connectnotify_callback = nullptr;
    Solid__DeviceNotifier_DisconnectNotify_Callback solid__devicenotifier_disconnectnotify_callback = nullptr;
    Solid__DeviceNotifier_Sender_Callback solid__devicenotifier_sender_callback = nullptr;
    Solid__DeviceNotifier_SenderSignalIndex_Callback solid__devicenotifier_sendersignalindex_callback = nullptr;
    Solid__DeviceNotifier_Receivers_Callback solid__devicenotifier_receivers_callback = nullptr;
    Solid__DeviceNotifier_IsSignalConnected_Callback solid__devicenotifier_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool solid__devicenotifier_metaobject_isbase = false;
    mutable bool solid__devicenotifier_metacast_isbase = false;
    mutable bool solid__devicenotifier_metacall_isbase = false;
    mutable bool solid__devicenotifier_event_isbase = false;
    mutable bool solid__devicenotifier_eventfilter_isbase = false;
    mutable bool solid__devicenotifier_timerevent_isbase = false;
    mutable bool solid__devicenotifier_childevent_isbase = false;
    mutable bool solid__devicenotifier_customevent_isbase = false;
    mutable bool solid__devicenotifier_connectnotify_isbase = false;
    mutable bool solid__devicenotifier_disconnectnotify_isbase = false;
    mutable bool solid__devicenotifier_sender_isbase = false;
    mutable bool solid__devicenotifier_sendersignalindex_isbase = false;
    mutable bool solid__devicenotifier_receivers_isbase = false;
    mutable bool solid__devicenotifier_issignalconnected_isbase = false;

  public:
    VirtualSolidDeviceNotifier() : Solid::DeviceNotifier() {};

    // Callback setters
    inline void setSolid__DeviceNotifier_MetaObject_Callback(Solid__DeviceNotifier_MetaObject_Callback cb) { solid__devicenotifier_metaobject_callback = cb; }
    inline void setSolid__DeviceNotifier_Metacast_Callback(Solid__DeviceNotifier_Metacast_Callback cb) { solid__devicenotifier_metacast_callback = cb; }
    inline void setSolid__DeviceNotifier_Metacall_Callback(Solid__DeviceNotifier_Metacall_Callback cb) { solid__devicenotifier_metacall_callback = cb; }
    inline void setSolid__DeviceNotifier_Event_Callback(Solid__DeviceNotifier_Event_Callback cb) { solid__devicenotifier_event_callback = cb; }
    inline void setSolid__DeviceNotifier_EventFilter_Callback(Solid__DeviceNotifier_EventFilter_Callback cb) { solid__devicenotifier_eventfilter_callback = cb; }
    inline void setSolid__DeviceNotifier_TimerEvent_Callback(Solid__DeviceNotifier_TimerEvent_Callback cb) { solid__devicenotifier_timerevent_callback = cb; }
    inline void setSolid__DeviceNotifier_ChildEvent_Callback(Solid__DeviceNotifier_ChildEvent_Callback cb) { solid__devicenotifier_childevent_callback = cb; }
    inline void setSolid__DeviceNotifier_CustomEvent_Callback(Solid__DeviceNotifier_CustomEvent_Callback cb) { solid__devicenotifier_customevent_callback = cb; }
    inline void setSolid__DeviceNotifier_ConnectNotify_Callback(Solid__DeviceNotifier_ConnectNotify_Callback cb) { solid__devicenotifier_connectnotify_callback = cb; }
    inline void setSolid__DeviceNotifier_DisconnectNotify_Callback(Solid__DeviceNotifier_DisconnectNotify_Callback cb) { solid__devicenotifier_disconnectnotify_callback = cb; }
    inline void setSolid__DeviceNotifier_Sender_Callback(Solid__DeviceNotifier_Sender_Callback cb) { solid__devicenotifier_sender_callback = cb; }
    inline void setSolid__DeviceNotifier_SenderSignalIndex_Callback(Solid__DeviceNotifier_SenderSignalIndex_Callback cb) { solid__devicenotifier_sendersignalindex_callback = cb; }
    inline void setSolid__DeviceNotifier_Receivers_Callback(Solid__DeviceNotifier_Receivers_Callback cb) { solid__devicenotifier_receivers_callback = cb; }
    inline void setSolid__DeviceNotifier_IsSignalConnected_Callback(Solid__DeviceNotifier_IsSignalConnected_Callback cb) { solid__devicenotifier_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setSolid__DeviceNotifier_MetaObject_IsBase(bool value) const { solid__devicenotifier_metaobject_isbase = value; }
    inline void setSolid__DeviceNotifier_Metacast_IsBase(bool value) const { solid__devicenotifier_metacast_isbase = value; }
    inline void setSolid__DeviceNotifier_Metacall_IsBase(bool value) const { solid__devicenotifier_metacall_isbase = value; }
    inline void setSolid__DeviceNotifier_Event_IsBase(bool value) const { solid__devicenotifier_event_isbase = value; }
    inline void setSolid__DeviceNotifier_EventFilter_IsBase(bool value) const { solid__devicenotifier_eventfilter_isbase = value; }
    inline void setSolid__DeviceNotifier_TimerEvent_IsBase(bool value) const { solid__devicenotifier_timerevent_isbase = value; }
    inline void setSolid__DeviceNotifier_ChildEvent_IsBase(bool value) const { solid__devicenotifier_childevent_isbase = value; }
    inline void setSolid__DeviceNotifier_CustomEvent_IsBase(bool value) const { solid__devicenotifier_customevent_isbase = value; }
    inline void setSolid__DeviceNotifier_ConnectNotify_IsBase(bool value) const { solid__devicenotifier_connectnotify_isbase = value; }
    inline void setSolid__DeviceNotifier_DisconnectNotify_IsBase(bool value) const { solid__devicenotifier_disconnectnotify_isbase = value; }
    inline void setSolid__DeviceNotifier_Sender_IsBase(bool value) const { solid__devicenotifier_sender_isbase = value; }
    inline void setSolid__DeviceNotifier_SenderSignalIndex_IsBase(bool value) const { solid__devicenotifier_sendersignalindex_isbase = value; }
    inline void setSolid__DeviceNotifier_Receivers_IsBase(bool value) const { solid__devicenotifier_receivers_isbase = value; }
    inline void setSolid__DeviceNotifier_IsSignalConnected_IsBase(bool value) const { solid__devicenotifier_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (solid__devicenotifier_metaobject_isbase) {
            solid__devicenotifier_metaobject_isbase = false;
            return Solid__DeviceNotifier::metaObject();
        }
        auto metaobject_cb = solid__devicenotifier_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Solid__DeviceNotifier::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (solid__devicenotifier_metacast_isbase) {
            solid__devicenotifier_metacast_isbase = false;
            return Solid__DeviceNotifier::qt_metacast(param1);
        }
        auto metacast_cb = solid__devicenotifier_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Solid__DeviceNotifier::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (solid__devicenotifier_metacall_isbase) {
            solid__devicenotifier_metacall_isbase = false;
            return Solid__DeviceNotifier::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = solid__devicenotifier_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Solid__DeviceNotifier::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (solid__devicenotifier_event_isbase) {
            solid__devicenotifier_event_isbase = false;
            return Solid__DeviceNotifier::event(event);
        }
        auto event_cb = solid__devicenotifier_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Solid__DeviceNotifier::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (solid__devicenotifier_eventfilter_isbase) {
            solid__devicenotifier_eventfilter_isbase = false;
            return Solid__DeviceNotifier::eventFilter(watched, event);
        }
        auto eventfilter_cb = solid__devicenotifier_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Solid__DeviceNotifier::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (solid__devicenotifier_timerevent_isbase) {
            solid__devicenotifier_timerevent_isbase = false;
            Solid__DeviceNotifier::timerEvent(event);
            return;
        }
        auto timerevent_cb = solid__devicenotifier_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (solid__devicenotifier_childevent_isbase) {
            solid__devicenotifier_childevent_isbase = false;
            Solid__DeviceNotifier::childEvent(event);
            return;
        }
        auto childevent_cb = solid__devicenotifier_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (solid__devicenotifier_customevent_isbase) {
            solid__devicenotifier_customevent_isbase = false;
            Solid__DeviceNotifier::customEvent(event);
            return;
        }
        auto customevent_cb = solid__devicenotifier_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (solid__devicenotifier_connectnotify_isbase) {
            solid__devicenotifier_connectnotify_isbase = false;
            Solid__DeviceNotifier::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = solid__devicenotifier_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (solid__devicenotifier_disconnectnotify_isbase) {
            solid__devicenotifier_disconnectnotify_isbase = false;
            Solid__DeviceNotifier::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = solid__devicenotifier_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        Solid__DeviceNotifier::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (solid__devicenotifier_sender_isbase) {
            solid__devicenotifier_sender_isbase = false;
            return Solid__DeviceNotifier::sender();
        }
        auto sender_cb = solid__devicenotifier_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Solid__DeviceNotifier::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (solid__devicenotifier_sendersignalindex_isbase) {
            solid__devicenotifier_sendersignalindex_isbase = false;
            return Solid__DeviceNotifier::senderSignalIndex();
        }
        auto sendersignalindex_cb = solid__devicenotifier_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Solid__DeviceNotifier::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (solid__devicenotifier_receivers_isbase) {
            solid__devicenotifier_receivers_isbase = false;
            return Solid__DeviceNotifier::receivers(signal);
        }
        auto receivers_cb = solid__devicenotifier_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Solid__DeviceNotifier::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (solid__devicenotifier_issignalconnected_isbase) {
            solid__devicenotifier_issignalconnected_isbase = false;
            return Solid__DeviceNotifier::isSignalConnected(signal);
        }
        auto issignalconnected_cb = solid__devicenotifier_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Solid__DeviceNotifier::isSignalConnected(signal);
    }

    // Friend functions
    friend void Solid__DeviceNotifier_TimerEvent(Solid::DeviceNotifier* self, QTimerEvent* event);
    friend void Solid__DeviceNotifier_SuperTimerEvent(Solid::DeviceNotifier* self, QTimerEvent* event);
    friend void Solid__DeviceNotifier_ChildEvent(Solid::DeviceNotifier* self, QChildEvent* event);
    friend void Solid__DeviceNotifier_SuperChildEvent(Solid::DeviceNotifier* self, QChildEvent* event);
    friend void Solid__DeviceNotifier_CustomEvent(Solid::DeviceNotifier* self, QEvent* event);
    friend void Solid__DeviceNotifier_SuperCustomEvent(Solid::DeviceNotifier* self, QEvent* event);
    friend void Solid__DeviceNotifier_ConnectNotify(Solid::DeviceNotifier* self, const QMetaMethod* signal);
    friend void Solid__DeviceNotifier_SuperConnectNotify(Solid::DeviceNotifier* self, const QMetaMethod* signal);
    friend void Solid__DeviceNotifier_DisconnectNotify(Solid::DeviceNotifier* self, const QMetaMethod* signal);
    friend void Solid__DeviceNotifier_SuperDisconnectNotify(Solid::DeviceNotifier* self, const QMetaMethod* signal);
    friend QObject* Solid__DeviceNotifier_Sender(const Solid::DeviceNotifier* self);
    friend QObject* Solid__DeviceNotifier_SuperSender(const Solid::DeviceNotifier* self);
    friend int Solid__DeviceNotifier_SenderSignalIndex(const Solid::DeviceNotifier* self);
    friend int Solid__DeviceNotifier_SuperSenderSignalIndex(const Solid::DeviceNotifier* self);
    friend int Solid__DeviceNotifier_Receivers(const Solid::DeviceNotifier* self, const char* signal);
    friend int Solid__DeviceNotifier_SuperReceivers(const Solid::DeviceNotifier* self, const char* signal);
    friend bool Solid__DeviceNotifier_IsSignalConnected(const Solid::DeviceNotifier* self, const QMetaMethod* signal);
    friend bool Solid__DeviceNotifier_SuperIsSignalConnected(const Solid::DeviceNotifier* self, const QMetaMethod* signal);
};

#endif
