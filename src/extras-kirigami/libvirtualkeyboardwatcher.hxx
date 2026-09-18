#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBVIRTUALKEYBOARDWATCHER_HXX
#define EXTRAS_KIRIGAMI_LIBVIRTUALKEYBOARDWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::VirtualKeyboardWatcher so that we can call protected methods
class VirtualKirigamiPlatformVirtualKeyboardWatcher final : public Kirigami::Platform::VirtualKeyboardWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualKirigamiPlatformVirtualKeyboardWatcher = true;

    // Virtual class public types (including callbacks)
    using Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback = QMetaObject* (*)();
    using Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback = void* (*)(Kirigami__Platform__VirtualKeyboardWatcher*, const char*);
    using Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback = int (*)(Kirigami__Platform__VirtualKeyboardWatcher*, int, int, void**);
    using Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback = bool (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback = bool (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QObject*, QEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QTimerEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QChildEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QEvent*);
    using Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QMetaMethod*);
    using Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback = void (*)(Kirigami__Platform__VirtualKeyboardWatcher*, QMetaMethod*);
    using Kirigami__Platform__VirtualKeyboardWatcher_Sender_Callback = QObject* (*)();
    using Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_Callback = int (*)();
    using Kirigami__Platform__VirtualKeyboardWatcher_Receivers_Callback = int (*)(const Kirigami__Platform__VirtualKeyboardWatcher*, const char*);
    using Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_Callback = bool (*)(const Kirigami__Platform__VirtualKeyboardWatcher*, QMetaMethod*);

  protected:
    // Instance callback storage
    Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback kirigami__platform__virtualkeyboardwatcher_metaobject_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback kirigami__platform__virtualkeyboardwatcher_metacast_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback kirigami__platform__virtualkeyboardwatcher_metacall_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback kirigami__platform__virtualkeyboardwatcher_event_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback kirigami__platform__virtualkeyboardwatcher_eventfilter_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback kirigami__platform__virtualkeyboardwatcher_timerevent_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback kirigami__platform__virtualkeyboardwatcher_childevent_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback kirigami__platform__virtualkeyboardwatcher_customevent_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback kirigami__platform__virtualkeyboardwatcher_connectnotify_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Sender_Callback kirigami__platform__virtualkeyboardwatcher_sender_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_Callback kirigami__platform__virtualkeyboardwatcher_sendersignalindex_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_Receivers_Callback kirigami__platform__virtualkeyboardwatcher_receivers_callback = nullptr;
    Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_Callback kirigami__platform__virtualkeyboardwatcher_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kirigami__platform__virtualkeyboardwatcher_metaobject_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_metacast_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_metacall_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_event_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_eventfilter_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_timerevent_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_childevent_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_customevent_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_connectnotify_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_disconnectnotify_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_sender_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_sendersignalindex_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_receivers_isbase = false;
    mutable bool kirigami__platform__virtualkeyboardwatcher_issignalconnected_isbase = false;

  public:
    VirtualKirigamiPlatformVirtualKeyboardWatcher() : Kirigami::Platform::VirtualKeyboardWatcher() {};
    VirtualKirigamiPlatformVirtualKeyboardWatcher(QObject* parent) : Kirigami::Platform::VirtualKeyboardWatcher(parent) {};

    // Callback setters
    inline void setKirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback(Kirigami__Platform__VirtualKeyboardWatcher_MetaObject_Callback cb) { kirigami__platform__virtualkeyboardwatcher_metaobject_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback(Kirigami__Platform__VirtualKeyboardWatcher_Metacast_Callback cb) { kirigami__platform__virtualkeyboardwatcher_metacast_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback(Kirigami__Platform__VirtualKeyboardWatcher_Metacall_Callback cb) { kirigami__platform__virtualkeyboardwatcher_metacall_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Event_Callback(Kirigami__Platform__VirtualKeyboardWatcher_Event_Callback cb) { kirigami__platform__virtualkeyboardwatcher_event_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback(Kirigami__Platform__VirtualKeyboardWatcher_EventFilter_Callback cb) { kirigami__platform__virtualkeyboardwatcher_eventfilter_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback(Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent_Callback cb) { kirigami__platform__virtualkeyboardwatcher_timerevent_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback(Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent_Callback cb) { kirigami__platform__virtualkeyboardwatcher_childevent_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback(Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent_Callback cb) { kirigami__platform__virtualkeyboardwatcher_customevent_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback(Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_Callback cb) { kirigami__platform__virtualkeyboardwatcher_connectnotify_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback(Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_Callback cb) { kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Sender_Callback(Kirigami__Platform__VirtualKeyboardWatcher_Sender_Callback cb) { kirigami__platform__virtualkeyboardwatcher_sender_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_Callback(Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_Callback cb) { kirigami__platform__virtualkeyboardwatcher_sendersignalindex_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Receivers_Callback(Kirigami__Platform__VirtualKeyboardWatcher_Receivers_Callback cb) { kirigami__platform__virtualkeyboardwatcher_receivers_callback = cb; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_Callback(Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_Callback cb) { kirigami__platform__virtualkeyboardwatcher_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKirigami__Platform__VirtualKeyboardWatcher_MetaObject_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_metaobject_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Metacast_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_metacast_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Metacall_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_metacall_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Event_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_event_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_EventFilter_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_eventfilter_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_TimerEvent_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_timerevent_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_ChildEvent_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_childevent_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_CustomEvent_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_customevent_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_ConnectNotify_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_connectnotify_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_disconnectnotify_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Sender_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_sender_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_sendersignalindex_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_Receivers_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_receivers_isbase = value; }
    inline void setKirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected_IsBase(bool value) const { kirigami__platform__virtualkeyboardwatcher_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__virtualkeyboardwatcher_metaobject_isbase) {
            kirigami__platform__virtualkeyboardwatcher_metaobject_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::metaObject();
        }
        auto metaobject_cb = kirigami__platform__virtualkeyboardwatcher_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__virtualkeyboardwatcher_metacast_isbase) {
            kirigami__platform__virtualkeyboardwatcher_metacast_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::qt_metacast(param1);
        }
        auto metacast_cb = kirigami__platform__virtualkeyboardwatcher_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__virtualkeyboardwatcher_metacall_isbase) {
            kirigami__platform__virtualkeyboardwatcher_metacall_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kirigami__platform__virtualkeyboardwatcher_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_event_isbase) {
            kirigami__platform__virtualkeyboardwatcher_event_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::event(event);
        }
        auto event_cb = kirigami__platform__virtualkeyboardwatcher_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_eventfilter_isbase) {
            kirigami__platform__virtualkeyboardwatcher_eventfilter_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::eventFilter(watched, event);
        }
        auto eventfilter_cb = kirigami__platform__virtualkeyboardwatcher_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_timerevent_isbase) {
            kirigami__platform__virtualkeyboardwatcher_timerevent_isbase = false;
            Kirigami__Platform__VirtualKeyboardWatcher::timerEvent(event);
            return;
        }
        auto timerevent_cb = kirigami__platform__virtualkeyboardwatcher_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_childevent_isbase) {
            kirigami__platform__virtualkeyboardwatcher_childevent_isbase = false;
            Kirigami__Platform__VirtualKeyboardWatcher::childEvent(event);
            return;
        }
        auto childevent_cb = kirigami__platform__virtualkeyboardwatcher_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__virtualkeyboardwatcher_customevent_isbase) {
            kirigami__platform__virtualkeyboardwatcher_customevent_isbase = false;
            Kirigami__Platform__VirtualKeyboardWatcher::customEvent(event);
            return;
        }
        auto customevent_cb = kirigami__platform__virtualkeyboardwatcher_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__virtualkeyboardwatcher_connectnotify_isbase) {
            kirigami__platform__virtualkeyboardwatcher_connectnotify_isbase = false;
            Kirigami__Platform__VirtualKeyboardWatcher::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kirigami__platform__virtualkeyboardwatcher_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__virtualkeyboardwatcher_disconnectnotify_isbase) {
            kirigami__platform__virtualkeyboardwatcher_disconnectnotify_isbase = false;
            Kirigami__Platform__VirtualKeyboardWatcher::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kirigami__platform__virtualkeyboardwatcher_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__VirtualKeyboardWatcher::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kirigami__platform__virtualkeyboardwatcher_sender_isbase) {
            kirigami__platform__virtualkeyboardwatcher_sender_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::sender();
        }
        auto sender_cb = kirigami__platform__virtualkeyboardwatcher_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kirigami__platform__virtualkeyboardwatcher_sendersignalindex_isbase) {
            kirigami__platform__virtualkeyboardwatcher_sendersignalindex_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::senderSignalIndex();
        }
        auto sendersignalindex_cb = kirigami__platform__virtualkeyboardwatcher_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kirigami__platform__virtualkeyboardwatcher_receivers_isbase) {
            kirigami__platform__virtualkeyboardwatcher_receivers_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::receivers(signal);
        }
        auto receivers_cb = kirigami__platform__virtualkeyboardwatcher_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kirigami__platform__virtualkeyboardwatcher_issignalconnected_isbase) {
            kirigami__platform__virtualkeyboardwatcher_issignalconnected_isbase = false;
            return Kirigami__Platform__VirtualKeyboardWatcher::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kirigami__platform__virtualkeyboardwatcher_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__VirtualKeyboardWatcher::isSignalConnected(signal);
    }

    // Friend functions
    friend void Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QTimerEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperTimerEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QTimerEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QChildEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperChildEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QChildEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperCustomEvent(Kirigami::Platform::VirtualKeyboardWatcher* self, QEvent* event);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify(Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperConnectNotify(Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify(Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__VirtualKeyboardWatcher_SuperDisconnectNotify(Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
    friend QObject* Kirigami__Platform__VirtualKeyboardWatcher_Sender(const Kirigami::Platform::VirtualKeyboardWatcher* self);
    friend QObject* Kirigami__Platform__VirtualKeyboardWatcher_SuperSender(const Kirigami::Platform::VirtualKeyboardWatcher* self);
    friend int Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex(const Kirigami::Platform::VirtualKeyboardWatcher* self);
    friend int Kirigami__Platform__VirtualKeyboardWatcher_SuperSenderSignalIndex(const Kirigami::Platform::VirtualKeyboardWatcher* self);
    friend int Kirigami__Platform__VirtualKeyboardWatcher_Receivers(const Kirigami::Platform::VirtualKeyboardWatcher* self, const char* signal);
    friend int Kirigami__Platform__VirtualKeyboardWatcher_SuperReceivers(const Kirigami::Platform::VirtualKeyboardWatcher* self, const char* signal);
    friend bool Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected(const Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
    friend bool Kirigami__Platform__VirtualKeyboardWatcher_SuperIsSignalConnected(const Kirigami::Platform::VirtualKeyboardWatcher* self, const QMetaMethod* signal);
};

#endif
