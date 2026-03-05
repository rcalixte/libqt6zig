#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALACTION_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Action so that we can call protected methods
class VirtualKNSWidgetsAction final : public KNSWidgets::Action {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSWidgetsAction = true;

    // Virtual class public types (including callbacks)
    using KNSWidgets__Action_MetaObject_Callback = QMetaObject* (*)();
    using KNSWidgets__Action_Metacast_Callback = void* (*)(KNSWidgets__Action*, const char*);
    using KNSWidgets__Action_Metacall_Callback = int (*)(KNSWidgets__Action*, int, int, void**);
    using KNSWidgets__Action_Event_Callback = bool (*)(KNSWidgets__Action*, QEvent*);
    using KNSWidgets__Action_EventFilter_Callback = bool (*)(KNSWidgets__Action*, QObject*, QEvent*);
    using KNSWidgets__Action_TimerEvent_Callback = void (*)(KNSWidgets__Action*, QTimerEvent*);
    using KNSWidgets__Action_ChildEvent_Callback = void (*)(KNSWidgets__Action*, QChildEvent*);
    using KNSWidgets__Action_CustomEvent_Callback = void (*)(KNSWidgets__Action*, QEvent*);
    using KNSWidgets__Action_ConnectNotify_Callback = void (*)(KNSWidgets__Action*, QMetaMethod*);
    using KNSWidgets__Action_DisconnectNotify_Callback = void (*)(KNSWidgets__Action*, QMetaMethod*);
    using KNSWidgets__Action_Sender_Callback = QObject* (*)();
    using KNSWidgets__Action_SenderSignalIndex_Callback = int (*)();
    using KNSWidgets__Action_Receivers_Callback = int (*)(const KNSWidgets__Action*, const char*);
    using KNSWidgets__Action_IsSignalConnected_Callback = bool (*)(const KNSWidgets__Action*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSWidgets__Action_MetaObject_Callback knswidgets__action_metaobject_callback = nullptr;
    KNSWidgets__Action_Metacast_Callback knswidgets__action_metacast_callback = nullptr;
    KNSWidgets__Action_Metacall_Callback knswidgets__action_metacall_callback = nullptr;
    KNSWidgets__Action_Event_Callback knswidgets__action_event_callback = nullptr;
    KNSWidgets__Action_EventFilter_Callback knswidgets__action_eventfilter_callback = nullptr;
    KNSWidgets__Action_TimerEvent_Callback knswidgets__action_timerevent_callback = nullptr;
    KNSWidgets__Action_ChildEvent_Callback knswidgets__action_childevent_callback = nullptr;
    KNSWidgets__Action_CustomEvent_Callback knswidgets__action_customevent_callback = nullptr;
    KNSWidgets__Action_ConnectNotify_Callback knswidgets__action_connectnotify_callback = nullptr;
    KNSWidgets__Action_DisconnectNotify_Callback knswidgets__action_disconnectnotify_callback = nullptr;
    KNSWidgets__Action_Sender_Callback knswidgets__action_sender_callback = nullptr;
    KNSWidgets__Action_SenderSignalIndex_Callback knswidgets__action_sendersignalindex_callback = nullptr;
    KNSWidgets__Action_Receivers_Callback knswidgets__action_receivers_callback = nullptr;
    KNSWidgets__Action_IsSignalConnected_Callback knswidgets__action_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knswidgets__action_metaobject_isbase = false;
    mutable bool knswidgets__action_metacast_isbase = false;
    mutable bool knswidgets__action_metacall_isbase = false;
    mutable bool knswidgets__action_event_isbase = false;
    mutable bool knswidgets__action_eventfilter_isbase = false;
    mutable bool knswidgets__action_timerevent_isbase = false;
    mutable bool knswidgets__action_childevent_isbase = false;
    mutable bool knswidgets__action_customevent_isbase = false;
    mutable bool knswidgets__action_connectnotify_isbase = false;
    mutable bool knswidgets__action_disconnectnotify_isbase = false;
    mutable bool knswidgets__action_sender_isbase = false;
    mutable bool knswidgets__action_sendersignalindex_isbase = false;
    mutable bool knswidgets__action_receivers_isbase = false;
    mutable bool knswidgets__action_issignalconnected_isbase = false;

  public:
    VirtualKNSWidgetsAction(const QString& text, const QString& configFile, QObject* parent) : KNSWidgets::Action(text, configFile, parent) {};

    // Callback setters
    inline void setKNSWidgets__Action_MetaObject_Callback(KNSWidgets__Action_MetaObject_Callback cb) { knswidgets__action_metaobject_callback = cb; }
    inline void setKNSWidgets__Action_Metacast_Callback(KNSWidgets__Action_Metacast_Callback cb) { knswidgets__action_metacast_callback = cb; }
    inline void setKNSWidgets__Action_Metacall_Callback(KNSWidgets__Action_Metacall_Callback cb) { knswidgets__action_metacall_callback = cb; }
    inline void setKNSWidgets__Action_Event_Callback(KNSWidgets__Action_Event_Callback cb) { knswidgets__action_event_callback = cb; }
    inline void setKNSWidgets__Action_EventFilter_Callback(KNSWidgets__Action_EventFilter_Callback cb) { knswidgets__action_eventfilter_callback = cb; }
    inline void setKNSWidgets__Action_TimerEvent_Callback(KNSWidgets__Action_TimerEvent_Callback cb) { knswidgets__action_timerevent_callback = cb; }
    inline void setKNSWidgets__Action_ChildEvent_Callback(KNSWidgets__Action_ChildEvent_Callback cb) { knswidgets__action_childevent_callback = cb; }
    inline void setKNSWidgets__Action_CustomEvent_Callback(KNSWidgets__Action_CustomEvent_Callback cb) { knswidgets__action_customevent_callback = cb; }
    inline void setKNSWidgets__Action_ConnectNotify_Callback(KNSWidgets__Action_ConnectNotify_Callback cb) { knswidgets__action_connectnotify_callback = cb; }
    inline void setKNSWidgets__Action_DisconnectNotify_Callback(KNSWidgets__Action_DisconnectNotify_Callback cb) { knswidgets__action_disconnectnotify_callback = cb; }
    inline void setKNSWidgets__Action_Sender_Callback(KNSWidgets__Action_Sender_Callback cb) { knswidgets__action_sender_callback = cb; }
    inline void setKNSWidgets__Action_SenderSignalIndex_Callback(KNSWidgets__Action_SenderSignalIndex_Callback cb) { knswidgets__action_sendersignalindex_callback = cb; }
    inline void setKNSWidgets__Action_Receivers_Callback(KNSWidgets__Action_Receivers_Callback cb) { knswidgets__action_receivers_callback = cb; }
    inline void setKNSWidgets__Action_IsSignalConnected_Callback(KNSWidgets__Action_IsSignalConnected_Callback cb) { knswidgets__action_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSWidgets__Action_MetaObject_IsBase(bool value) const { knswidgets__action_metaobject_isbase = value; }
    inline void setKNSWidgets__Action_Metacast_IsBase(bool value) const { knswidgets__action_metacast_isbase = value; }
    inline void setKNSWidgets__Action_Metacall_IsBase(bool value) const { knswidgets__action_metacall_isbase = value; }
    inline void setKNSWidgets__Action_Event_IsBase(bool value) const { knswidgets__action_event_isbase = value; }
    inline void setKNSWidgets__Action_EventFilter_IsBase(bool value) const { knswidgets__action_eventfilter_isbase = value; }
    inline void setKNSWidgets__Action_TimerEvent_IsBase(bool value) const { knswidgets__action_timerevent_isbase = value; }
    inline void setKNSWidgets__Action_ChildEvent_IsBase(bool value) const { knswidgets__action_childevent_isbase = value; }
    inline void setKNSWidgets__Action_CustomEvent_IsBase(bool value) const { knswidgets__action_customevent_isbase = value; }
    inline void setKNSWidgets__Action_ConnectNotify_IsBase(bool value) const { knswidgets__action_connectnotify_isbase = value; }
    inline void setKNSWidgets__Action_DisconnectNotify_IsBase(bool value) const { knswidgets__action_disconnectnotify_isbase = value; }
    inline void setKNSWidgets__Action_Sender_IsBase(bool value) const { knswidgets__action_sender_isbase = value; }
    inline void setKNSWidgets__Action_SenderSignalIndex_IsBase(bool value) const { knswidgets__action_sendersignalindex_isbase = value; }
    inline void setKNSWidgets__Action_Receivers_IsBase(bool value) const { knswidgets__action_receivers_isbase = value; }
    inline void setKNSWidgets__Action_IsSignalConnected_IsBase(bool value) const { knswidgets__action_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knswidgets__action_metaobject_isbase) {
            knswidgets__action_metaobject_isbase = false;
            return KNSWidgets__Action::metaObject();
        }
        auto metaobject_cb = knswidgets__action_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNSWidgets__Action::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knswidgets__action_metacast_isbase) {
            knswidgets__action_metacast_isbase = false;
            return KNSWidgets__Action::qt_metacast(param1);
        }
        auto metacast_cb = knswidgets__action_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Action::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__action_metacall_isbase) {
            knswidgets__action_metacall_isbase = false;
            return KNSWidgets__Action::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knswidgets__action_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Action::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (knswidgets__action_event_isbase) {
            knswidgets__action_event_isbase = false;
            return KNSWidgets__Action::event(param1);
        }
        auto event_cb = knswidgets__action_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Action::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knswidgets__action_eventfilter_isbase) {
            knswidgets__action_eventfilter_isbase = false;
            return KNSWidgets__Action::eventFilter(watched, event);
        }
        auto eventfilter_cb = knswidgets__action_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSWidgets__Action::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knswidgets__action_timerevent_isbase) {
            knswidgets__action_timerevent_isbase = false;
            KNSWidgets__Action::timerEvent(event);
            return;
        }
        auto timerevent_cb = knswidgets__action_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Action::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__action_childevent_isbase) {
            knswidgets__action_childevent_isbase = false;
            KNSWidgets__Action::childEvent(event);
            return;
        }
        auto childevent_cb = knswidgets__action_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Action::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__action_customevent_isbase) {
            knswidgets__action_customevent_isbase = false;
            KNSWidgets__Action::customEvent(event);
            return;
        }
        auto customevent_cb = knswidgets__action_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Action::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__action_connectnotify_isbase) {
            knswidgets__action_connectnotify_isbase = false;
            KNSWidgets__Action::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knswidgets__action_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNSWidgets__Action::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__action_disconnectnotify_isbase) {
            knswidgets__action_disconnectnotify_isbase = false;
            KNSWidgets__Action::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knswidgets__action_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNSWidgets__Action::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knswidgets__action_sender_isbase) {
            knswidgets__action_sender_isbase = false;
            return KNSWidgets__Action::sender();
        }
        auto sender_cb = knswidgets__action_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNSWidgets__Action::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knswidgets__action_sendersignalindex_isbase) {
            knswidgets__action_sendersignalindex_isbase = false;
            return KNSWidgets__Action::senderSignalIndex();
        }
        auto sendersignalindex_cb = knswidgets__action_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Action::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knswidgets__action_receivers_isbase) {
            knswidgets__action_receivers_isbase = false;
            return KNSWidgets__Action::receivers(signal);
        }
        auto receivers_cb = knswidgets__action_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Action::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knswidgets__action_issignalconnected_isbase) {
            knswidgets__action_issignalconnected_isbase = false;
            return KNSWidgets__Action::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knswidgets__action_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Action::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KNSWidgets__Action_Event(KNSWidgets::Action* self, QEvent* param1);
    friend bool KNSWidgets__Action_SuperEvent(KNSWidgets::Action* self, QEvent* param1);
    friend void KNSWidgets__Action_TimerEvent(KNSWidgets::Action* self, QTimerEvent* event);
    friend void KNSWidgets__Action_SuperTimerEvent(KNSWidgets::Action* self, QTimerEvent* event);
    friend void KNSWidgets__Action_ChildEvent(KNSWidgets::Action* self, QChildEvent* event);
    friend void KNSWidgets__Action_SuperChildEvent(KNSWidgets::Action* self, QChildEvent* event);
    friend void KNSWidgets__Action_CustomEvent(KNSWidgets::Action* self, QEvent* event);
    friend void KNSWidgets__Action_SuperCustomEvent(KNSWidgets::Action* self, QEvent* event);
    friend void KNSWidgets__Action_ConnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_SuperConnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_DisconnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend void KNSWidgets__Action_SuperDisconnectNotify(KNSWidgets::Action* self, const QMetaMethod* signal);
    friend QObject* KNSWidgets__Action_Sender(const KNSWidgets::Action* self);
    friend QObject* KNSWidgets__Action_SuperSender(const KNSWidgets::Action* self);
    friend int KNSWidgets__Action_SenderSignalIndex(const KNSWidgets::Action* self);
    friend int KNSWidgets__Action_SuperSenderSignalIndex(const KNSWidgets::Action* self);
    friend int KNSWidgets__Action_Receivers(const KNSWidgets::Action* self, const char* signal);
    friend int KNSWidgets__Action_SuperReceivers(const KNSWidgets::Action* self, const char* signal);
    friend bool KNSWidgets__Action_IsSignalConnected(const KNSWidgets::Action* self, const QMetaMethod* signal);
    friend bool KNSWidgets__Action_SuperIsSignalConnected(const KNSWidgets::Action* self, const QMetaMethod* signal);
};

#endif
