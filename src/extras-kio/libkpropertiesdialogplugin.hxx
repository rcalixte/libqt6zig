#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKPROPERTIESDIALOGPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKPROPERTIESDIALOGPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPropertiesDialogPlugin so that we can call protected methods
class VirtualKPropertiesDialogPlugin final : public KPropertiesDialogPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKPropertiesDialogPlugin = true;

    // Virtual class public types (including callbacks)
    using KPropertiesDialogPlugin_MetaObject_Callback = QMetaObject* (*)();
    using KPropertiesDialogPlugin_Metacast_Callback = void* (*)(KPropertiesDialogPlugin*, const char*);
    using KPropertiesDialogPlugin_Metacall_Callback = int (*)(KPropertiesDialogPlugin*, int, int, void**);
    using KPropertiesDialogPlugin_ApplyChanges_Callback = void (*)();
    using KPropertiesDialogPlugin_Event_Callback = bool (*)(KPropertiesDialogPlugin*, QEvent*);
    using KPropertiesDialogPlugin_EventFilter_Callback = bool (*)(KPropertiesDialogPlugin*, QObject*, QEvent*);
    using KPropertiesDialogPlugin_TimerEvent_Callback = void (*)(KPropertiesDialogPlugin*, QTimerEvent*);
    using KPropertiesDialogPlugin_ChildEvent_Callback = void (*)(KPropertiesDialogPlugin*, QChildEvent*);
    using KPropertiesDialogPlugin_CustomEvent_Callback = void (*)(KPropertiesDialogPlugin*, QEvent*);
    using KPropertiesDialogPlugin_ConnectNotify_Callback = void (*)(KPropertiesDialogPlugin*, QMetaMethod*);
    using KPropertiesDialogPlugin_DisconnectNotify_Callback = void (*)(KPropertiesDialogPlugin*, QMetaMethod*);
    using KPropertiesDialogPlugin_FontHeight_Callback = int (*)();
    using KPropertiesDialogPlugin_Sender_Callback = QObject* (*)();
    using KPropertiesDialogPlugin_SenderSignalIndex_Callback = int (*)();
    using KPropertiesDialogPlugin_Receivers_Callback = int (*)(const KPropertiesDialogPlugin*, const char*);
    using KPropertiesDialogPlugin_IsSignalConnected_Callback = bool (*)(const KPropertiesDialogPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    KPropertiesDialogPlugin_MetaObject_Callback kpropertiesdialogplugin_metaobject_callback = nullptr;
    KPropertiesDialogPlugin_Metacast_Callback kpropertiesdialogplugin_metacast_callback = nullptr;
    KPropertiesDialogPlugin_Metacall_Callback kpropertiesdialogplugin_metacall_callback = nullptr;
    KPropertiesDialogPlugin_ApplyChanges_Callback kpropertiesdialogplugin_applychanges_callback = nullptr;
    KPropertiesDialogPlugin_Event_Callback kpropertiesdialogplugin_event_callback = nullptr;
    KPropertiesDialogPlugin_EventFilter_Callback kpropertiesdialogplugin_eventfilter_callback = nullptr;
    KPropertiesDialogPlugin_TimerEvent_Callback kpropertiesdialogplugin_timerevent_callback = nullptr;
    KPropertiesDialogPlugin_ChildEvent_Callback kpropertiesdialogplugin_childevent_callback = nullptr;
    KPropertiesDialogPlugin_CustomEvent_Callback kpropertiesdialogplugin_customevent_callback = nullptr;
    KPropertiesDialogPlugin_ConnectNotify_Callback kpropertiesdialogplugin_connectnotify_callback = nullptr;
    KPropertiesDialogPlugin_DisconnectNotify_Callback kpropertiesdialogplugin_disconnectnotify_callback = nullptr;
    KPropertiesDialogPlugin_FontHeight_Callback kpropertiesdialogplugin_fontheight_callback = nullptr;
    KPropertiesDialogPlugin_Sender_Callback kpropertiesdialogplugin_sender_callback = nullptr;
    KPropertiesDialogPlugin_SenderSignalIndex_Callback kpropertiesdialogplugin_sendersignalindex_callback = nullptr;
    KPropertiesDialogPlugin_Receivers_Callback kpropertiesdialogplugin_receivers_callback = nullptr;
    KPropertiesDialogPlugin_IsSignalConnected_Callback kpropertiesdialogplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kpropertiesdialogplugin_metaobject_isbase = false;
    mutable bool kpropertiesdialogplugin_metacast_isbase = false;
    mutable bool kpropertiesdialogplugin_metacall_isbase = false;
    mutable bool kpropertiesdialogplugin_applychanges_isbase = false;
    mutable bool kpropertiesdialogplugin_event_isbase = false;
    mutable bool kpropertiesdialogplugin_eventfilter_isbase = false;
    mutable bool kpropertiesdialogplugin_timerevent_isbase = false;
    mutable bool kpropertiesdialogplugin_childevent_isbase = false;
    mutable bool kpropertiesdialogplugin_customevent_isbase = false;
    mutable bool kpropertiesdialogplugin_connectnotify_isbase = false;
    mutable bool kpropertiesdialogplugin_disconnectnotify_isbase = false;
    mutable bool kpropertiesdialogplugin_fontheight_isbase = false;
    mutable bool kpropertiesdialogplugin_sender_isbase = false;
    mutable bool kpropertiesdialogplugin_sendersignalindex_isbase = false;
    mutable bool kpropertiesdialogplugin_receivers_isbase = false;
    mutable bool kpropertiesdialogplugin_issignalconnected_isbase = false;

  public:
    VirtualKPropertiesDialogPlugin(QObject* parent) : KPropertiesDialogPlugin(parent) {};

    // Callback setters
    inline void setKPropertiesDialogPlugin_MetaObject_Callback(KPropertiesDialogPlugin_MetaObject_Callback cb) { kpropertiesdialogplugin_metaobject_callback = cb; }
    inline void setKPropertiesDialogPlugin_Metacast_Callback(KPropertiesDialogPlugin_Metacast_Callback cb) { kpropertiesdialogplugin_metacast_callback = cb; }
    inline void setKPropertiesDialogPlugin_Metacall_Callback(KPropertiesDialogPlugin_Metacall_Callback cb) { kpropertiesdialogplugin_metacall_callback = cb; }
    inline void setKPropertiesDialogPlugin_ApplyChanges_Callback(KPropertiesDialogPlugin_ApplyChanges_Callback cb) { kpropertiesdialogplugin_applychanges_callback = cb; }
    inline void setKPropertiesDialogPlugin_Event_Callback(KPropertiesDialogPlugin_Event_Callback cb) { kpropertiesdialogplugin_event_callback = cb; }
    inline void setKPropertiesDialogPlugin_EventFilter_Callback(KPropertiesDialogPlugin_EventFilter_Callback cb) { kpropertiesdialogplugin_eventfilter_callback = cb; }
    inline void setKPropertiesDialogPlugin_TimerEvent_Callback(KPropertiesDialogPlugin_TimerEvent_Callback cb) { kpropertiesdialogplugin_timerevent_callback = cb; }
    inline void setKPropertiesDialogPlugin_ChildEvent_Callback(KPropertiesDialogPlugin_ChildEvent_Callback cb) { kpropertiesdialogplugin_childevent_callback = cb; }
    inline void setKPropertiesDialogPlugin_CustomEvent_Callback(KPropertiesDialogPlugin_CustomEvent_Callback cb) { kpropertiesdialogplugin_customevent_callback = cb; }
    inline void setKPropertiesDialogPlugin_ConnectNotify_Callback(KPropertiesDialogPlugin_ConnectNotify_Callback cb) { kpropertiesdialogplugin_connectnotify_callback = cb; }
    inline void setKPropertiesDialogPlugin_DisconnectNotify_Callback(KPropertiesDialogPlugin_DisconnectNotify_Callback cb) { kpropertiesdialogplugin_disconnectnotify_callback = cb; }
    inline void setKPropertiesDialogPlugin_FontHeight_Callback(KPropertiesDialogPlugin_FontHeight_Callback cb) { kpropertiesdialogplugin_fontheight_callback = cb; }
    inline void setKPropertiesDialogPlugin_Sender_Callback(KPropertiesDialogPlugin_Sender_Callback cb) { kpropertiesdialogplugin_sender_callback = cb; }
    inline void setKPropertiesDialogPlugin_SenderSignalIndex_Callback(KPropertiesDialogPlugin_SenderSignalIndex_Callback cb) { kpropertiesdialogplugin_sendersignalindex_callback = cb; }
    inline void setKPropertiesDialogPlugin_Receivers_Callback(KPropertiesDialogPlugin_Receivers_Callback cb) { kpropertiesdialogplugin_receivers_callback = cb; }
    inline void setKPropertiesDialogPlugin_IsSignalConnected_Callback(KPropertiesDialogPlugin_IsSignalConnected_Callback cb) { kpropertiesdialogplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKPropertiesDialogPlugin_MetaObject_IsBase(bool value) const { kpropertiesdialogplugin_metaobject_isbase = value; }
    inline void setKPropertiesDialogPlugin_Metacast_IsBase(bool value) const { kpropertiesdialogplugin_metacast_isbase = value; }
    inline void setKPropertiesDialogPlugin_Metacall_IsBase(bool value) const { kpropertiesdialogplugin_metacall_isbase = value; }
    inline void setKPropertiesDialogPlugin_ApplyChanges_IsBase(bool value) const { kpropertiesdialogplugin_applychanges_isbase = value; }
    inline void setKPropertiesDialogPlugin_Event_IsBase(bool value) const { kpropertiesdialogplugin_event_isbase = value; }
    inline void setKPropertiesDialogPlugin_EventFilter_IsBase(bool value) const { kpropertiesdialogplugin_eventfilter_isbase = value; }
    inline void setKPropertiesDialogPlugin_TimerEvent_IsBase(bool value) const { kpropertiesdialogplugin_timerevent_isbase = value; }
    inline void setKPropertiesDialogPlugin_ChildEvent_IsBase(bool value) const { kpropertiesdialogplugin_childevent_isbase = value; }
    inline void setKPropertiesDialogPlugin_CustomEvent_IsBase(bool value) const { kpropertiesdialogplugin_customevent_isbase = value; }
    inline void setKPropertiesDialogPlugin_ConnectNotify_IsBase(bool value) const { kpropertiesdialogplugin_connectnotify_isbase = value; }
    inline void setKPropertiesDialogPlugin_DisconnectNotify_IsBase(bool value) const { kpropertiesdialogplugin_disconnectnotify_isbase = value; }
    inline void setKPropertiesDialogPlugin_FontHeight_IsBase(bool value) const { kpropertiesdialogplugin_fontheight_isbase = value; }
    inline void setKPropertiesDialogPlugin_Sender_IsBase(bool value) const { kpropertiesdialogplugin_sender_isbase = value; }
    inline void setKPropertiesDialogPlugin_SenderSignalIndex_IsBase(bool value) const { kpropertiesdialogplugin_sendersignalindex_isbase = value; }
    inline void setKPropertiesDialogPlugin_Receivers_IsBase(bool value) const { kpropertiesdialogplugin_receivers_isbase = value; }
    inline void setKPropertiesDialogPlugin_IsSignalConnected_IsBase(bool value) const { kpropertiesdialogplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpropertiesdialogplugin_metaobject_isbase) {
            kpropertiesdialogplugin_metaobject_isbase = false;
            return KPropertiesDialogPlugin::metaObject();
        }
        auto metaobject_cb = kpropertiesdialogplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPropertiesDialogPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpropertiesdialogplugin_metacast_isbase) {
            kpropertiesdialogplugin_metacast_isbase = false;
            return KPropertiesDialogPlugin::qt_metacast(param1);
        }
        auto metacast_cb = kpropertiesdialogplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpropertiesdialogplugin_metacall_isbase) {
            kpropertiesdialogplugin_metacall_isbase = false;
            return KPropertiesDialogPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpropertiesdialogplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialogPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyChanges() override {
        if (kpropertiesdialogplugin_applychanges_isbase) {
            kpropertiesdialogplugin_applychanges_isbase = false;
            KPropertiesDialogPlugin::applyChanges();
            return;
        }
        auto applychanges_cb = kpropertiesdialogplugin_applychanges_callback;
        if (applychanges_cb) {
            applychanges_cb();
            return;
        }
        KPropertiesDialogPlugin::applyChanges();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpropertiesdialogplugin_event_isbase) {
            kpropertiesdialogplugin_event_isbase = false;
            return KPropertiesDialogPlugin::event(event);
        }
        auto event_cb = kpropertiesdialogplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpropertiesdialogplugin_eventfilter_isbase) {
            kpropertiesdialogplugin_eventfilter_isbase = false;
            return KPropertiesDialogPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = kpropertiesdialogplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpropertiesdialogplugin_timerevent_isbase) {
            kpropertiesdialogplugin_timerevent_isbase = false;
            KPropertiesDialogPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpropertiesdialogplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpropertiesdialogplugin_childevent_isbase) {
            kpropertiesdialogplugin_childevent_isbase = false;
            KPropertiesDialogPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = kpropertiesdialogplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpropertiesdialogplugin_customevent_isbase) {
            kpropertiesdialogplugin_customevent_isbase = false;
            KPropertiesDialogPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = kpropertiesdialogplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialogplugin_connectnotify_isbase) {
            kpropertiesdialogplugin_connectnotify_isbase = false;
            KPropertiesDialogPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpropertiesdialogplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialogplugin_disconnectnotify_isbase) {
            kpropertiesdialogplugin_disconnectnotify_isbase = false;
            KPropertiesDialogPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpropertiesdialogplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPropertiesDialogPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int fontHeight() const {
        if (kpropertiesdialogplugin_fontheight_isbase) {
            kpropertiesdialogplugin_fontheight_isbase = false;
            return KPropertiesDialogPlugin::fontHeight();
        }
        auto fontheight_cb = kpropertiesdialogplugin_fontheight_callback;
        if (fontheight_cb) {
            int callback_ret = fontheight_cb();
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialogPlugin::fontHeight();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpropertiesdialogplugin_sender_isbase) {
            kpropertiesdialogplugin_sender_isbase = false;
            return KPropertiesDialogPlugin::sender();
        }
        auto sender_cb = kpropertiesdialogplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPropertiesDialogPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpropertiesdialogplugin_sendersignalindex_isbase) {
            kpropertiesdialogplugin_sendersignalindex_isbase = false;
            return KPropertiesDialogPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpropertiesdialogplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialogPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpropertiesdialogplugin_receivers_isbase) {
            kpropertiesdialogplugin_receivers_isbase = false;
            return KPropertiesDialogPlugin::receivers(signal);
        }
        auto receivers_cb = kpropertiesdialogplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialogPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpropertiesdialogplugin_issignalconnected_isbase) {
            kpropertiesdialogplugin_issignalconnected_isbase = false;
            return KPropertiesDialogPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpropertiesdialogplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialogPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void KPropertiesDialogPlugin_TimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event);
    friend void KPropertiesDialogPlugin_SuperTimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event);
    friend void KPropertiesDialogPlugin_ChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event);
    friend void KPropertiesDialogPlugin_SuperChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event);
    friend void KPropertiesDialogPlugin_CustomEvent(KPropertiesDialogPlugin* self, QEvent* event);
    friend void KPropertiesDialogPlugin_SuperCustomEvent(KPropertiesDialogPlugin* self, QEvent* event);
    friend void KPropertiesDialogPlugin_ConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
    friend void KPropertiesDialogPlugin_SuperConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
    friend void KPropertiesDialogPlugin_DisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
    friend void KPropertiesDialogPlugin_SuperDisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal);
    friend int KPropertiesDialogPlugin_FontHeight(const KPropertiesDialogPlugin* self);
    friend int KPropertiesDialogPlugin_SuperFontHeight(const KPropertiesDialogPlugin* self);
    friend QObject* KPropertiesDialogPlugin_Sender(const KPropertiesDialogPlugin* self);
    friend QObject* KPropertiesDialogPlugin_SuperSender(const KPropertiesDialogPlugin* self);
    friend int KPropertiesDialogPlugin_SenderSignalIndex(const KPropertiesDialogPlugin* self);
    friend int KPropertiesDialogPlugin_SuperSenderSignalIndex(const KPropertiesDialogPlugin* self);
    friend int KPropertiesDialogPlugin_Receivers(const KPropertiesDialogPlugin* self, const char* signal);
    friend int KPropertiesDialogPlugin_SuperReceivers(const KPropertiesDialogPlugin* self, const char* signal);
    friend bool KPropertiesDialogPlugin_IsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal);
    friend bool KPropertiesDialogPlugin_SuperIsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal);
};

#endif
