#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBVIRTUALPOPPLER_FORM_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBVIRTUALPOPPLER_FORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Poppler::AsyncObject so that we can call protected methods
class VirtualPopplerAsyncObject final : public Poppler::AsyncObject {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerAsyncObject = true;

    // Virtual class public types (including callbacks)
    using Poppler__AsyncObject_MetaObject_Callback = QMetaObject* (*)();
    using Poppler__AsyncObject_Metacast_Callback = void* (*)(Poppler__AsyncObject*, const char*);
    using Poppler__AsyncObject_Metacall_Callback = int (*)(Poppler__AsyncObject*, int, int, void**);
    using Poppler__AsyncObject_Event_Callback = bool (*)(Poppler__AsyncObject*, QEvent*);
    using Poppler__AsyncObject_EventFilter_Callback = bool (*)(Poppler__AsyncObject*, QObject*, QEvent*);
    using Poppler__AsyncObject_TimerEvent_Callback = void (*)(Poppler__AsyncObject*, QTimerEvent*);
    using Poppler__AsyncObject_ChildEvent_Callback = void (*)(Poppler__AsyncObject*, QChildEvent*);
    using Poppler__AsyncObject_CustomEvent_Callback = void (*)(Poppler__AsyncObject*, QEvent*);
    using Poppler__AsyncObject_ConnectNotify_Callback = void (*)(Poppler__AsyncObject*, QMetaMethod*);
    using Poppler__AsyncObject_DisconnectNotify_Callback = void (*)(Poppler__AsyncObject*, QMetaMethod*);
    using Poppler__AsyncObject_Sender_Callback = QObject* (*)();
    using Poppler__AsyncObject_SenderSignalIndex_Callback = int (*)();
    using Poppler__AsyncObject_Receivers_Callback = int (*)(const Poppler__AsyncObject*, const char*);
    using Poppler__AsyncObject_IsSignalConnected_Callback = bool (*)(const Poppler__AsyncObject*, QMetaMethod*);

  protected:
    // Instance callback storage
    Poppler__AsyncObject_MetaObject_Callback poppler__asyncobject_metaobject_callback = nullptr;
    Poppler__AsyncObject_Metacast_Callback poppler__asyncobject_metacast_callback = nullptr;
    Poppler__AsyncObject_Metacall_Callback poppler__asyncobject_metacall_callback = nullptr;
    Poppler__AsyncObject_Event_Callback poppler__asyncobject_event_callback = nullptr;
    Poppler__AsyncObject_EventFilter_Callback poppler__asyncobject_eventfilter_callback = nullptr;
    Poppler__AsyncObject_TimerEvent_Callback poppler__asyncobject_timerevent_callback = nullptr;
    Poppler__AsyncObject_ChildEvent_Callback poppler__asyncobject_childevent_callback = nullptr;
    Poppler__AsyncObject_CustomEvent_Callback poppler__asyncobject_customevent_callback = nullptr;
    Poppler__AsyncObject_ConnectNotify_Callback poppler__asyncobject_connectnotify_callback = nullptr;
    Poppler__AsyncObject_DisconnectNotify_Callback poppler__asyncobject_disconnectnotify_callback = nullptr;
    Poppler__AsyncObject_Sender_Callback poppler__asyncobject_sender_callback = nullptr;
    Poppler__AsyncObject_SenderSignalIndex_Callback poppler__asyncobject_sendersignalindex_callback = nullptr;
    Poppler__AsyncObject_Receivers_Callback poppler__asyncobject_receivers_callback = nullptr;
    Poppler__AsyncObject_IsSignalConnected_Callback poppler__asyncobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool poppler__asyncobject_metaobject_isbase = false;
    mutable bool poppler__asyncobject_metacast_isbase = false;
    mutable bool poppler__asyncobject_metacall_isbase = false;
    mutable bool poppler__asyncobject_event_isbase = false;
    mutable bool poppler__asyncobject_eventfilter_isbase = false;
    mutable bool poppler__asyncobject_timerevent_isbase = false;
    mutable bool poppler__asyncobject_childevent_isbase = false;
    mutable bool poppler__asyncobject_customevent_isbase = false;
    mutable bool poppler__asyncobject_connectnotify_isbase = false;
    mutable bool poppler__asyncobject_disconnectnotify_isbase = false;
    mutable bool poppler__asyncobject_sender_isbase = false;
    mutable bool poppler__asyncobject_sendersignalindex_isbase = false;
    mutable bool poppler__asyncobject_receivers_isbase = false;
    mutable bool poppler__asyncobject_issignalconnected_isbase = false;

  public:
    VirtualPopplerAsyncObject() : Poppler::AsyncObject() {};

    // Callback setters
    inline void setPoppler__AsyncObject_MetaObject_Callback(Poppler__AsyncObject_MetaObject_Callback cb) { poppler__asyncobject_metaobject_callback = cb; }
    inline void setPoppler__AsyncObject_Metacast_Callback(Poppler__AsyncObject_Metacast_Callback cb) { poppler__asyncobject_metacast_callback = cb; }
    inline void setPoppler__AsyncObject_Metacall_Callback(Poppler__AsyncObject_Metacall_Callback cb) { poppler__asyncobject_metacall_callback = cb; }
    inline void setPoppler__AsyncObject_Event_Callback(Poppler__AsyncObject_Event_Callback cb) { poppler__asyncobject_event_callback = cb; }
    inline void setPoppler__AsyncObject_EventFilter_Callback(Poppler__AsyncObject_EventFilter_Callback cb) { poppler__asyncobject_eventfilter_callback = cb; }
    inline void setPoppler__AsyncObject_TimerEvent_Callback(Poppler__AsyncObject_TimerEvent_Callback cb) { poppler__asyncobject_timerevent_callback = cb; }
    inline void setPoppler__AsyncObject_ChildEvent_Callback(Poppler__AsyncObject_ChildEvent_Callback cb) { poppler__asyncobject_childevent_callback = cb; }
    inline void setPoppler__AsyncObject_CustomEvent_Callback(Poppler__AsyncObject_CustomEvent_Callback cb) { poppler__asyncobject_customevent_callback = cb; }
    inline void setPoppler__AsyncObject_ConnectNotify_Callback(Poppler__AsyncObject_ConnectNotify_Callback cb) { poppler__asyncobject_connectnotify_callback = cb; }
    inline void setPoppler__AsyncObject_DisconnectNotify_Callback(Poppler__AsyncObject_DisconnectNotify_Callback cb) { poppler__asyncobject_disconnectnotify_callback = cb; }
    inline void setPoppler__AsyncObject_Sender_Callback(Poppler__AsyncObject_Sender_Callback cb) { poppler__asyncobject_sender_callback = cb; }
    inline void setPoppler__AsyncObject_SenderSignalIndex_Callback(Poppler__AsyncObject_SenderSignalIndex_Callback cb) { poppler__asyncobject_sendersignalindex_callback = cb; }
    inline void setPoppler__AsyncObject_Receivers_Callback(Poppler__AsyncObject_Receivers_Callback cb) { poppler__asyncobject_receivers_callback = cb; }
    inline void setPoppler__AsyncObject_IsSignalConnected_Callback(Poppler__AsyncObject_IsSignalConnected_Callback cb) { poppler__asyncobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setPoppler__AsyncObject_MetaObject_IsBase(bool value) const { poppler__asyncobject_metaobject_isbase = value; }
    inline void setPoppler__AsyncObject_Metacast_IsBase(bool value) const { poppler__asyncobject_metacast_isbase = value; }
    inline void setPoppler__AsyncObject_Metacall_IsBase(bool value) const { poppler__asyncobject_metacall_isbase = value; }
    inline void setPoppler__AsyncObject_Event_IsBase(bool value) const { poppler__asyncobject_event_isbase = value; }
    inline void setPoppler__AsyncObject_EventFilter_IsBase(bool value) const { poppler__asyncobject_eventfilter_isbase = value; }
    inline void setPoppler__AsyncObject_TimerEvent_IsBase(bool value) const { poppler__asyncobject_timerevent_isbase = value; }
    inline void setPoppler__AsyncObject_ChildEvent_IsBase(bool value) const { poppler__asyncobject_childevent_isbase = value; }
    inline void setPoppler__AsyncObject_CustomEvent_IsBase(bool value) const { poppler__asyncobject_customevent_isbase = value; }
    inline void setPoppler__AsyncObject_ConnectNotify_IsBase(bool value) const { poppler__asyncobject_connectnotify_isbase = value; }
    inline void setPoppler__AsyncObject_DisconnectNotify_IsBase(bool value) const { poppler__asyncobject_disconnectnotify_isbase = value; }
    inline void setPoppler__AsyncObject_Sender_IsBase(bool value) const { poppler__asyncobject_sender_isbase = value; }
    inline void setPoppler__AsyncObject_SenderSignalIndex_IsBase(bool value) const { poppler__asyncobject_sendersignalindex_isbase = value; }
    inline void setPoppler__AsyncObject_Receivers_IsBase(bool value) const { poppler__asyncobject_receivers_isbase = value; }
    inline void setPoppler__AsyncObject_IsSignalConnected_IsBase(bool value) const { poppler__asyncobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (poppler__asyncobject_metaobject_isbase) {
            poppler__asyncobject_metaobject_isbase = false;
            return Poppler__AsyncObject::metaObject();
        }
        auto metaobject_cb = poppler__asyncobject_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Poppler__AsyncObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (poppler__asyncobject_metacast_isbase) {
            poppler__asyncobject_metacast_isbase = false;
            return Poppler__AsyncObject::qt_metacast(param1);
        }
        auto metacast_cb = poppler__asyncobject_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Poppler__AsyncObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (poppler__asyncobject_metacall_isbase) {
            poppler__asyncobject_metacall_isbase = false;
            return Poppler__AsyncObject::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = poppler__asyncobject_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Poppler__AsyncObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (poppler__asyncobject_event_isbase) {
            poppler__asyncobject_event_isbase = false;
            return Poppler__AsyncObject::event(event);
        }
        auto event_cb = poppler__asyncobject_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Poppler__AsyncObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (poppler__asyncobject_eventfilter_isbase) {
            poppler__asyncobject_eventfilter_isbase = false;
            return Poppler__AsyncObject::eventFilter(watched, event);
        }
        auto eventfilter_cb = poppler__asyncobject_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Poppler__AsyncObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (poppler__asyncobject_timerevent_isbase) {
            poppler__asyncobject_timerevent_isbase = false;
            Poppler__AsyncObject::timerEvent(event);
            return;
        }
        auto timerevent_cb = poppler__asyncobject_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Poppler__AsyncObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (poppler__asyncobject_childevent_isbase) {
            poppler__asyncobject_childevent_isbase = false;
            Poppler__AsyncObject::childEvent(event);
            return;
        }
        auto childevent_cb = poppler__asyncobject_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Poppler__AsyncObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (poppler__asyncobject_customevent_isbase) {
            poppler__asyncobject_customevent_isbase = false;
            Poppler__AsyncObject::customEvent(event);
            return;
        }
        auto customevent_cb = poppler__asyncobject_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Poppler__AsyncObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (poppler__asyncobject_connectnotify_isbase) {
            poppler__asyncobject_connectnotify_isbase = false;
            Poppler__AsyncObject::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = poppler__asyncobject_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Poppler__AsyncObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (poppler__asyncobject_disconnectnotify_isbase) {
            poppler__asyncobject_disconnectnotify_isbase = false;
            Poppler__AsyncObject::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = poppler__asyncobject_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Poppler__AsyncObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (poppler__asyncobject_sender_isbase) {
            poppler__asyncobject_sender_isbase = false;
            return Poppler__AsyncObject::sender();
        }
        auto sender_cb = poppler__asyncobject_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Poppler__AsyncObject::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (poppler__asyncobject_sendersignalindex_isbase) {
            poppler__asyncobject_sendersignalindex_isbase = false;
            return Poppler__AsyncObject::senderSignalIndex();
        }
        auto sendersignalindex_cb = poppler__asyncobject_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Poppler__AsyncObject::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (poppler__asyncobject_receivers_isbase) {
            poppler__asyncobject_receivers_isbase = false;
            return Poppler__AsyncObject::receivers(signal);
        }
        auto receivers_cb = poppler__asyncobject_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Poppler__AsyncObject::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (poppler__asyncobject_issignalconnected_isbase) {
            poppler__asyncobject_issignalconnected_isbase = false;
            return Poppler__AsyncObject::isSignalConnected(signal);
        }
        auto issignalconnected_cb = poppler__asyncobject_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Poppler__AsyncObject::isSignalConnected(signal);
    }

    // Friend functions
    friend void Poppler__AsyncObject_TimerEvent(Poppler::AsyncObject* self, QTimerEvent* event);
    friend void Poppler__AsyncObject_SuperTimerEvent(Poppler::AsyncObject* self, QTimerEvent* event);
    friend void Poppler__AsyncObject_ChildEvent(Poppler::AsyncObject* self, QChildEvent* event);
    friend void Poppler__AsyncObject_SuperChildEvent(Poppler::AsyncObject* self, QChildEvent* event);
    friend void Poppler__AsyncObject_CustomEvent(Poppler::AsyncObject* self, QEvent* event);
    friend void Poppler__AsyncObject_SuperCustomEvent(Poppler::AsyncObject* self, QEvent* event);
    friend void Poppler__AsyncObject_ConnectNotify(Poppler::AsyncObject* self, const QMetaMethod* signal);
    friend void Poppler__AsyncObject_SuperConnectNotify(Poppler::AsyncObject* self, const QMetaMethod* signal);
    friend void Poppler__AsyncObject_DisconnectNotify(Poppler::AsyncObject* self, const QMetaMethod* signal);
    friend void Poppler__AsyncObject_SuperDisconnectNotify(Poppler::AsyncObject* self, const QMetaMethod* signal);
    friend QObject* Poppler__AsyncObject_Sender(const Poppler::AsyncObject* self);
    friend QObject* Poppler__AsyncObject_SuperSender(const Poppler::AsyncObject* self);
    friend int Poppler__AsyncObject_SenderSignalIndex(const Poppler::AsyncObject* self);
    friend int Poppler__AsyncObject_SuperSenderSignalIndex(const Poppler::AsyncObject* self);
    friend int Poppler__AsyncObject_Receivers(const Poppler::AsyncObject* self, const char* signal);
    friend int Poppler__AsyncObject_SuperReceivers(const Poppler::AsyncObject* self, const char* signal);
    friend bool Poppler__AsyncObject_IsSignalConnected(const Poppler::AsyncObject* self, const QMetaMethod* signal);
    friend bool Poppler__AsyncObject_SuperIsSignalConnected(const Poppler::AsyncObject* self, const QMetaMethod* signal);
};

#endif
