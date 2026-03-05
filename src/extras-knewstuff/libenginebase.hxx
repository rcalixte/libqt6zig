#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALENGINEBASE_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALENGINEBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::EngineBase so that we can call protected methods
class VirtualKNSCoreEngineBase final : public KNSCore::EngineBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSCoreEngineBase = true;

    // Virtual class public types (including callbacks)
    using KNSCore__EngineBase_MetaObject_Callback = QMetaObject* (*)();
    using KNSCore__EngineBase_Metacast_Callback = void* (*)(KNSCore__EngineBase*, const char*);
    using KNSCore__EngineBase_Metacall_Callback = int (*)(KNSCore__EngineBase*, int, int, void**);
    using KNSCore__EngineBase_Init_Callback = bool (*)(KNSCore__EngineBase*, const char*);
    using KNSCore__EngineBase_UpdateStatus_Callback = void (*)();
    using KNSCore__EngineBase_Event_Callback = bool (*)(KNSCore__EngineBase*, QEvent*);
    using KNSCore__EngineBase_EventFilter_Callback = bool (*)(KNSCore__EngineBase*, QObject*, QEvent*);
    using KNSCore__EngineBase_TimerEvent_Callback = void (*)(KNSCore__EngineBase*, QTimerEvent*);
    using KNSCore__EngineBase_ChildEvent_Callback = void (*)(KNSCore__EngineBase*, QChildEvent*);
    using KNSCore__EngineBase_CustomEvent_Callback = void (*)(KNSCore__EngineBase*, QEvent*);
    using KNSCore__EngineBase_ConnectNotify_Callback = void (*)(KNSCore__EngineBase*, QMetaMethod*);
    using KNSCore__EngineBase_DisconnectNotify_Callback = void (*)(KNSCore__EngineBase*, QMetaMethod*);
    using KNSCore__EngineBase_Sender_Callback = QObject* (*)();
    using KNSCore__EngineBase_SenderSignalIndex_Callback = int (*)();
    using KNSCore__EngineBase_Receivers_Callback = int (*)(const KNSCore__EngineBase*, const char*);
    using KNSCore__EngineBase_IsSignalConnected_Callback = bool (*)(const KNSCore__EngineBase*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSCore__EngineBase_MetaObject_Callback knscore__enginebase_metaobject_callback = nullptr;
    KNSCore__EngineBase_Metacast_Callback knscore__enginebase_metacast_callback = nullptr;
    KNSCore__EngineBase_Metacall_Callback knscore__enginebase_metacall_callback = nullptr;
    KNSCore__EngineBase_Init_Callback knscore__enginebase_init_callback = nullptr;
    KNSCore__EngineBase_UpdateStatus_Callback knscore__enginebase_updatestatus_callback = nullptr;
    KNSCore__EngineBase_Event_Callback knscore__enginebase_event_callback = nullptr;
    KNSCore__EngineBase_EventFilter_Callback knscore__enginebase_eventfilter_callback = nullptr;
    KNSCore__EngineBase_TimerEvent_Callback knscore__enginebase_timerevent_callback = nullptr;
    KNSCore__EngineBase_ChildEvent_Callback knscore__enginebase_childevent_callback = nullptr;
    KNSCore__EngineBase_CustomEvent_Callback knscore__enginebase_customevent_callback = nullptr;
    KNSCore__EngineBase_ConnectNotify_Callback knscore__enginebase_connectnotify_callback = nullptr;
    KNSCore__EngineBase_DisconnectNotify_Callback knscore__enginebase_disconnectnotify_callback = nullptr;
    KNSCore__EngineBase_Sender_Callback knscore__enginebase_sender_callback = nullptr;
    KNSCore__EngineBase_SenderSignalIndex_Callback knscore__enginebase_sendersignalindex_callback = nullptr;
    KNSCore__EngineBase_Receivers_Callback knscore__enginebase_receivers_callback = nullptr;
    KNSCore__EngineBase_IsSignalConnected_Callback knscore__enginebase_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knscore__enginebase_metaobject_isbase = false;
    mutable bool knscore__enginebase_metacast_isbase = false;
    mutable bool knscore__enginebase_metacall_isbase = false;
    mutable bool knscore__enginebase_init_isbase = false;
    mutable bool knscore__enginebase_updatestatus_isbase = false;
    mutable bool knscore__enginebase_event_isbase = false;
    mutable bool knscore__enginebase_eventfilter_isbase = false;
    mutable bool knscore__enginebase_timerevent_isbase = false;
    mutable bool knscore__enginebase_childevent_isbase = false;
    mutable bool knscore__enginebase_customevent_isbase = false;
    mutable bool knscore__enginebase_connectnotify_isbase = false;
    mutable bool knscore__enginebase_disconnectnotify_isbase = false;
    mutable bool knscore__enginebase_sender_isbase = false;
    mutable bool knscore__enginebase_sendersignalindex_isbase = false;
    mutable bool knscore__enginebase_receivers_isbase = false;
    mutable bool knscore__enginebase_issignalconnected_isbase = false;

  public:
    VirtualKNSCoreEngineBase() : KNSCore::EngineBase() {};
    VirtualKNSCoreEngineBase(QObject* parent) : KNSCore::EngineBase(parent) {};

    // Callback setters
    inline void setKNSCore__EngineBase_MetaObject_Callback(KNSCore__EngineBase_MetaObject_Callback cb) { knscore__enginebase_metaobject_callback = cb; }
    inline void setKNSCore__EngineBase_Metacast_Callback(KNSCore__EngineBase_Metacast_Callback cb) { knscore__enginebase_metacast_callback = cb; }
    inline void setKNSCore__EngineBase_Metacall_Callback(KNSCore__EngineBase_Metacall_Callback cb) { knscore__enginebase_metacall_callback = cb; }
    inline void setKNSCore__EngineBase_Init_Callback(KNSCore__EngineBase_Init_Callback cb) { knscore__enginebase_init_callback = cb; }
    inline void setKNSCore__EngineBase_UpdateStatus_Callback(KNSCore__EngineBase_UpdateStatus_Callback cb) { knscore__enginebase_updatestatus_callback = cb; }
    inline void setKNSCore__EngineBase_Event_Callback(KNSCore__EngineBase_Event_Callback cb) { knscore__enginebase_event_callback = cb; }
    inline void setKNSCore__EngineBase_EventFilter_Callback(KNSCore__EngineBase_EventFilter_Callback cb) { knscore__enginebase_eventfilter_callback = cb; }
    inline void setKNSCore__EngineBase_TimerEvent_Callback(KNSCore__EngineBase_TimerEvent_Callback cb) { knscore__enginebase_timerevent_callback = cb; }
    inline void setKNSCore__EngineBase_ChildEvent_Callback(KNSCore__EngineBase_ChildEvent_Callback cb) { knscore__enginebase_childevent_callback = cb; }
    inline void setKNSCore__EngineBase_CustomEvent_Callback(KNSCore__EngineBase_CustomEvent_Callback cb) { knscore__enginebase_customevent_callback = cb; }
    inline void setKNSCore__EngineBase_ConnectNotify_Callback(KNSCore__EngineBase_ConnectNotify_Callback cb) { knscore__enginebase_connectnotify_callback = cb; }
    inline void setKNSCore__EngineBase_DisconnectNotify_Callback(KNSCore__EngineBase_DisconnectNotify_Callback cb) { knscore__enginebase_disconnectnotify_callback = cb; }
    inline void setKNSCore__EngineBase_Sender_Callback(KNSCore__EngineBase_Sender_Callback cb) { knscore__enginebase_sender_callback = cb; }
    inline void setKNSCore__EngineBase_SenderSignalIndex_Callback(KNSCore__EngineBase_SenderSignalIndex_Callback cb) { knscore__enginebase_sendersignalindex_callback = cb; }
    inline void setKNSCore__EngineBase_Receivers_Callback(KNSCore__EngineBase_Receivers_Callback cb) { knscore__enginebase_receivers_callback = cb; }
    inline void setKNSCore__EngineBase_IsSignalConnected_Callback(KNSCore__EngineBase_IsSignalConnected_Callback cb) { knscore__enginebase_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSCore__EngineBase_MetaObject_IsBase(bool value) const { knscore__enginebase_metaobject_isbase = value; }
    inline void setKNSCore__EngineBase_Metacast_IsBase(bool value) const { knscore__enginebase_metacast_isbase = value; }
    inline void setKNSCore__EngineBase_Metacall_IsBase(bool value) const { knscore__enginebase_metacall_isbase = value; }
    inline void setKNSCore__EngineBase_Init_IsBase(bool value) const { knscore__enginebase_init_isbase = value; }
    inline void setKNSCore__EngineBase_UpdateStatus_IsBase(bool value) const { knscore__enginebase_updatestatus_isbase = value; }
    inline void setKNSCore__EngineBase_Event_IsBase(bool value) const { knscore__enginebase_event_isbase = value; }
    inline void setKNSCore__EngineBase_EventFilter_IsBase(bool value) const { knscore__enginebase_eventfilter_isbase = value; }
    inline void setKNSCore__EngineBase_TimerEvent_IsBase(bool value) const { knscore__enginebase_timerevent_isbase = value; }
    inline void setKNSCore__EngineBase_ChildEvent_IsBase(bool value) const { knscore__enginebase_childevent_isbase = value; }
    inline void setKNSCore__EngineBase_CustomEvent_IsBase(bool value) const { knscore__enginebase_customevent_isbase = value; }
    inline void setKNSCore__EngineBase_ConnectNotify_IsBase(bool value) const { knscore__enginebase_connectnotify_isbase = value; }
    inline void setKNSCore__EngineBase_DisconnectNotify_IsBase(bool value) const { knscore__enginebase_disconnectnotify_isbase = value; }
    inline void setKNSCore__EngineBase_Sender_IsBase(bool value) const { knscore__enginebase_sender_isbase = value; }
    inline void setKNSCore__EngineBase_SenderSignalIndex_IsBase(bool value) const { knscore__enginebase_sendersignalindex_isbase = value; }
    inline void setKNSCore__EngineBase_Receivers_IsBase(bool value) const { knscore__enginebase_receivers_isbase = value; }
    inline void setKNSCore__EngineBase_IsSignalConnected_IsBase(bool value) const { knscore__enginebase_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__enginebase_metaobject_isbase) {
            knscore__enginebase_metaobject_isbase = false;
            return KNSCore__EngineBase::metaObject();
        }
        auto metaobject_cb = knscore__enginebase_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNSCore__EngineBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__enginebase_metacast_isbase) {
            knscore__enginebase_metacast_isbase = false;
            return KNSCore__EngineBase::qt_metacast(param1);
        }
        auto metacast_cb = knscore__enginebase_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__EngineBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__enginebase_metacall_isbase) {
            knscore__enginebase_metacall_isbase = false;
            return KNSCore__EngineBase::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knscore__enginebase_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__EngineBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool init(const QString& configfile) override {
        if (knscore__enginebase_init_isbase) {
            knscore__enginebase_init_isbase = false;
            return KNSCore__EngineBase::init(configfile);
        }
        auto init_cb = knscore__enginebase_init_callback;
        if (init_cb) {
            const QString configfile_ret = configfile;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray configfile_b = configfile_ret.toUtf8();
            auto configfile_str_len = configfile_b.length();
            const char* configfile_str = static_cast<const char*>(malloc(configfile_str_len + 1));
            memcpy((void*)configfile_str, configfile_b.data(), configfile_str_len);
            ((char*)configfile_str)[configfile_str_len] = '\0';
            const char* cbval1 = configfile_str;

            bool callback_ret = init_cb(this, cbval1);
            libqt_free(configfile_str);
            return callback_ret;
        }
        return KNSCore__EngineBase::init(configfile);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateStatus() override {
        if (knscore__enginebase_updatestatus_isbase) {
            knscore__enginebase_updatestatus_isbase = false;
            KNSCore__EngineBase::updateStatus();
            return;
        }
        auto updatestatus_cb = knscore__enginebase_updatestatus_callback;
        if (updatestatus_cb) {
            updatestatus_cb();
            return;
        }
        KNSCore__EngineBase::updateStatus();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__enginebase_event_isbase) {
            knscore__enginebase_event_isbase = false;
            return KNSCore__EngineBase::event(event);
        }
        auto event_cb = knscore__enginebase_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__EngineBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__enginebase_eventfilter_isbase) {
            knscore__enginebase_eventfilter_isbase = false;
            return KNSCore__EngineBase::eventFilter(watched, event);
        }
        auto eventfilter_cb = knscore__enginebase_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__EngineBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__enginebase_timerevent_isbase) {
            knscore__enginebase_timerevent_isbase = false;
            KNSCore__EngineBase::timerEvent(event);
            return;
        }
        auto timerevent_cb = knscore__enginebase_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNSCore__EngineBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__enginebase_childevent_isbase) {
            knscore__enginebase_childevent_isbase = false;
            KNSCore__EngineBase::childEvent(event);
            return;
        }
        auto childevent_cb = knscore__enginebase_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNSCore__EngineBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__enginebase_customevent_isbase) {
            knscore__enginebase_customevent_isbase = false;
            KNSCore__EngineBase::customEvent(event);
            return;
        }
        auto customevent_cb = knscore__enginebase_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNSCore__EngineBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__enginebase_connectnotify_isbase) {
            knscore__enginebase_connectnotify_isbase = false;
            KNSCore__EngineBase::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knscore__enginebase_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNSCore__EngineBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__enginebase_disconnectnotify_isbase) {
            knscore__enginebase_disconnectnotify_isbase = false;
            KNSCore__EngineBase::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knscore__enginebase_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNSCore__EngineBase::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knscore__enginebase_sender_isbase) {
            knscore__enginebase_sender_isbase = false;
            return KNSCore__EngineBase::sender();
        }
        auto sender_cb = knscore__enginebase_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNSCore__EngineBase::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knscore__enginebase_sendersignalindex_isbase) {
            knscore__enginebase_sendersignalindex_isbase = false;
            return KNSCore__EngineBase::senderSignalIndex();
        }
        auto sendersignalindex_cb = knscore__enginebase_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSCore__EngineBase::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knscore__enginebase_receivers_isbase) {
            knscore__enginebase_receivers_isbase = false;
            return KNSCore__EngineBase::receivers(signal);
        }
        auto receivers_cb = knscore__enginebase_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__EngineBase::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knscore__enginebase_issignalconnected_isbase) {
            knscore__enginebase_issignalconnected_isbase = false;
            return KNSCore__EngineBase::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knscore__enginebase_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__EngineBase::isSignalConnected(signal);
    }

    // Friend functions
    friend void KNSCore__EngineBase_UpdateStatus(KNSCore::EngineBase* self);
    friend void KNSCore__EngineBase_SuperUpdateStatus(KNSCore::EngineBase* self);
    friend void KNSCore__EngineBase_TimerEvent(KNSCore::EngineBase* self, QTimerEvent* event);
    friend void KNSCore__EngineBase_SuperTimerEvent(KNSCore::EngineBase* self, QTimerEvent* event);
    friend void KNSCore__EngineBase_ChildEvent(KNSCore::EngineBase* self, QChildEvent* event);
    friend void KNSCore__EngineBase_SuperChildEvent(KNSCore::EngineBase* self, QChildEvent* event);
    friend void KNSCore__EngineBase_CustomEvent(KNSCore::EngineBase* self, QEvent* event);
    friend void KNSCore__EngineBase_SuperCustomEvent(KNSCore::EngineBase* self, QEvent* event);
    friend void KNSCore__EngineBase_ConnectNotify(KNSCore::EngineBase* self, const QMetaMethod* signal);
    friend void KNSCore__EngineBase_SuperConnectNotify(KNSCore::EngineBase* self, const QMetaMethod* signal);
    friend void KNSCore__EngineBase_DisconnectNotify(KNSCore::EngineBase* self, const QMetaMethod* signal);
    friend void KNSCore__EngineBase_SuperDisconnectNotify(KNSCore::EngineBase* self, const QMetaMethod* signal);
    friend QObject* KNSCore__EngineBase_Sender(const KNSCore::EngineBase* self);
    friend QObject* KNSCore__EngineBase_SuperSender(const KNSCore::EngineBase* self);
    friend int KNSCore__EngineBase_SenderSignalIndex(const KNSCore::EngineBase* self);
    friend int KNSCore__EngineBase_SuperSenderSignalIndex(const KNSCore::EngineBase* self);
    friend int KNSCore__EngineBase_Receivers(const KNSCore::EngineBase* self, const char* signal);
    friend int KNSCore__EngineBase_SuperReceivers(const KNSCore::EngineBase* self, const char* signal);
    friend bool KNSCore__EngineBase_IsSignalConnected(const KNSCore::EngineBase* self, const QMetaMethod* signal);
    friend bool KNSCore__EngineBase_SuperIsSignalConnected(const KNSCore::EngineBase* self, const QMetaMethod* signal);
};

#endif
