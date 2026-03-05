#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKSELECTIONOWNER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBVIRTUALKSELECTIONOWNER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectionOwner so that we can call protected methods
class VirtualKSelectionOwner final : public KSelectionOwner {

  public:
    // Virtual class boolean flag
    bool isVirtualKSelectionOwner = true;

    // Virtual class public types (including callbacks)
    using KSelectionOwner_MetaObject_Callback = QMetaObject* (*)();
    using KSelectionOwner_Metacast_Callback = void* (*)(KSelectionOwner*, const char*);
    using KSelectionOwner_Metacall_Callback = int (*)(KSelectionOwner*, int, int, void**);
    using KSelectionOwner_TimerEvent_Callback = void (*)(KSelectionOwner*, QTimerEvent*);
    using KSelectionOwner_GetAtoms_Callback = void (*)();
    using KSelectionOwner_Event_Callback = bool (*)(KSelectionOwner*, QEvent*);
    using KSelectionOwner_EventFilter_Callback = bool (*)(KSelectionOwner*, QObject*, QEvent*);
    using KSelectionOwner_ChildEvent_Callback = void (*)(KSelectionOwner*, QChildEvent*);
    using KSelectionOwner_CustomEvent_Callback = void (*)(KSelectionOwner*, QEvent*);
    using KSelectionOwner_ConnectNotify_Callback = void (*)(KSelectionOwner*, QMetaMethod*);
    using KSelectionOwner_DisconnectNotify_Callback = void (*)(KSelectionOwner*, QMetaMethod*);
    using KSelectionOwner_SetData_Callback = void (*)(KSelectionOwner*, uint32_t, uint32_t);
    using KSelectionOwner_Sender_Callback = QObject* (*)();
    using KSelectionOwner_SenderSignalIndex_Callback = int (*)();
    using KSelectionOwner_Receivers_Callback = int (*)(const KSelectionOwner*, const char*);
    using KSelectionOwner_IsSignalConnected_Callback = bool (*)(const KSelectionOwner*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSelectionOwner_MetaObject_Callback kselectionowner_metaobject_callback = nullptr;
    KSelectionOwner_Metacast_Callback kselectionowner_metacast_callback = nullptr;
    KSelectionOwner_Metacall_Callback kselectionowner_metacall_callback = nullptr;
    KSelectionOwner_TimerEvent_Callback kselectionowner_timerevent_callback = nullptr;
    KSelectionOwner_GetAtoms_Callback kselectionowner_getatoms_callback = nullptr;
    KSelectionOwner_Event_Callback kselectionowner_event_callback = nullptr;
    KSelectionOwner_EventFilter_Callback kselectionowner_eventfilter_callback = nullptr;
    KSelectionOwner_ChildEvent_Callback kselectionowner_childevent_callback = nullptr;
    KSelectionOwner_CustomEvent_Callback kselectionowner_customevent_callback = nullptr;
    KSelectionOwner_ConnectNotify_Callback kselectionowner_connectnotify_callback = nullptr;
    KSelectionOwner_DisconnectNotify_Callback kselectionowner_disconnectnotify_callback = nullptr;
    KSelectionOwner_SetData_Callback kselectionowner_setdata_callback = nullptr;
    KSelectionOwner_Sender_Callback kselectionowner_sender_callback = nullptr;
    KSelectionOwner_SenderSignalIndex_Callback kselectionowner_sendersignalindex_callback = nullptr;
    KSelectionOwner_Receivers_Callback kselectionowner_receivers_callback = nullptr;
    KSelectionOwner_IsSignalConnected_Callback kselectionowner_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kselectionowner_metaobject_isbase = false;
    mutable bool kselectionowner_metacast_isbase = false;
    mutable bool kselectionowner_metacall_isbase = false;
    mutable bool kselectionowner_timerevent_isbase = false;
    mutable bool kselectionowner_getatoms_isbase = false;
    mutable bool kselectionowner_event_isbase = false;
    mutable bool kselectionowner_eventfilter_isbase = false;
    mutable bool kselectionowner_childevent_isbase = false;
    mutable bool kselectionowner_customevent_isbase = false;
    mutable bool kselectionowner_connectnotify_isbase = false;
    mutable bool kselectionowner_disconnectnotify_isbase = false;
    mutable bool kselectionowner_setdata_isbase = false;
    mutable bool kselectionowner_sender_isbase = false;
    mutable bool kselectionowner_sendersignalindex_isbase = false;
    mutable bool kselectionowner_receivers_isbase = false;
    mutable bool kselectionowner_issignalconnected_isbase = false;

  public:
    VirtualKSelectionOwner(const char* selection) : KSelectionOwner(selection) {};
    VirtualKSelectionOwner(const char* selection, int screen) : KSelectionOwner(selection, screen) {};
    VirtualKSelectionOwner(const char* selection, int screen, QObject* parent) : KSelectionOwner(selection, screen, parent) {};

    // Callback setters
    inline void setKSelectionOwner_MetaObject_Callback(KSelectionOwner_MetaObject_Callback cb) { kselectionowner_metaobject_callback = cb; }
    inline void setKSelectionOwner_Metacast_Callback(KSelectionOwner_Metacast_Callback cb) { kselectionowner_metacast_callback = cb; }
    inline void setKSelectionOwner_Metacall_Callback(KSelectionOwner_Metacall_Callback cb) { kselectionowner_metacall_callback = cb; }
    inline void setKSelectionOwner_TimerEvent_Callback(KSelectionOwner_TimerEvent_Callback cb) { kselectionowner_timerevent_callback = cb; }
    inline void setKSelectionOwner_GetAtoms_Callback(KSelectionOwner_GetAtoms_Callback cb) { kselectionowner_getatoms_callback = cb; }
    inline void setKSelectionOwner_Event_Callback(KSelectionOwner_Event_Callback cb) { kselectionowner_event_callback = cb; }
    inline void setKSelectionOwner_EventFilter_Callback(KSelectionOwner_EventFilter_Callback cb) { kselectionowner_eventfilter_callback = cb; }
    inline void setKSelectionOwner_ChildEvent_Callback(KSelectionOwner_ChildEvent_Callback cb) { kselectionowner_childevent_callback = cb; }
    inline void setKSelectionOwner_CustomEvent_Callback(KSelectionOwner_CustomEvent_Callback cb) { kselectionowner_customevent_callback = cb; }
    inline void setKSelectionOwner_ConnectNotify_Callback(KSelectionOwner_ConnectNotify_Callback cb) { kselectionowner_connectnotify_callback = cb; }
    inline void setKSelectionOwner_DisconnectNotify_Callback(KSelectionOwner_DisconnectNotify_Callback cb) { kselectionowner_disconnectnotify_callback = cb; }
    inline void setKSelectionOwner_SetData_Callback(KSelectionOwner_SetData_Callback cb) { kselectionowner_setdata_callback = cb; }
    inline void setKSelectionOwner_Sender_Callback(KSelectionOwner_Sender_Callback cb) { kselectionowner_sender_callback = cb; }
    inline void setKSelectionOwner_SenderSignalIndex_Callback(KSelectionOwner_SenderSignalIndex_Callback cb) { kselectionowner_sendersignalindex_callback = cb; }
    inline void setKSelectionOwner_Receivers_Callback(KSelectionOwner_Receivers_Callback cb) { kselectionowner_receivers_callback = cb; }
    inline void setKSelectionOwner_IsSignalConnected_Callback(KSelectionOwner_IsSignalConnected_Callback cb) { kselectionowner_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSelectionOwner_MetaObject_IsBase(bool value) const { kselectionowner_metaobject_isbase = value; }
    inline void setKSelectionOwner_Metacast_IsBase(bool value) const { kselectionowner_metacast_isbase = value; }
    inline void setKSelectionOwner_Metacall_IsBase(bool value) const { kselectionowner_metacall_isbase = value; }
    inline void setKSelectionOwner_TimerEvent_IsBase(bool value) const { kselectionowner_timerevent_isbase = value; }
    inline void setKSelectionOwner_GetAtoms_IsBase(bool value) const { kselectionowner_getatoms_isbase = value; }
    inline void setKSelectionOwner_Event_IsBase(bool value) const { kselectionowner_event_isbase = value; }
    inline void setKSelectionOwner_EventFilter_IsBase(bool value) const { kselectionowner_eventfilter_isbase = value; }
    inline void setKSelectionOwner_ChildEvent_IsBase(bool value) const { kselectionowner_childevent_isbase = value; }
    inline void setKSelectionOwner_CustomEvent_IsBase(bool value) const { kselectionowner_customevent_isbase = value; }
    inline void setKSelectionOwner_ConnectNotify_IsBase(bool value) const { kselectionowner_connectnotify_isbase = value; }
    inline void setKSelectionOwner_DisconnectNotify_IsBase(bool value) const { kselectionowner_disconnectnotify_isbase = value; }
    inline void setKSelectionOwner_SetData_IsBase(bool value) const { kselectionowner_setdata_isbase = value; }
    inline void setKSelectionOwner_Sender_IsBase(bool value) const { kselectionowner_sender_isbase = value; }
    inline void setKSelectionOwner_SenderSignalIndex_IsBase(bool value) const { kselectionowner_sendersignalindex_isbase = value; }
    inline void setKSelectionOwner_Receivers_IsBase(bool value) const { kselectionowner_receivers_isbase = value; }
    inline void setKSelectionOwner_IsSignalConnected_IsBase(bool value) const { kselectionowner_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselectionowner_metaobject_isbase) {
            kselectionowner_metaobject_isbase = false;
            return KSelectionOwner::metaObject();
        }
        auto metaobject_cb = kselectionowner_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSelectionOwner::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselectionowner_metacast_isbase) {
            kselectionowner_metacast_isbase = false;
            return KSelectionOwner::qt_metacast(param1);
        }
        auto metacast_cb = kselectionowner_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSelectionOwner::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectionowner_metacall_isbase) {
            kselectionowner_metacall_isbase = false;
            return KSelectionOwner::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kselectionowner_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelectionOwner::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectionowner_timerevent_isbase) {
            kselectionowner_timerevent_isbase = false;
            KSelectionOwner::timerEvent(event);
            return;
        }
        auto timerevent_cb = kselectionowner_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KSelectionOwner::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getAtoms() override {
        if (kselectionowner_getatoms_isbase) {
            kselectionowner_getatoms_isbase = false;
            KSelectionOwner::getAtoms();
            return;
        }
        auto getatoms_cb = kselectionowner_getatoms_callback;
        if (getatoms_cb) {
            getatoms_cb();
            return;
        }
        KSelectionOwner::getAtoms();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectionowner_event_isbase) {
            kselectionowner_event_isbase = false;
            return KSelectionOwner::event(event);
        }
        auto event_cb = kselectionowner_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSelectionOwner::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectionowner_eventfilter_isbase) {
            kselectionowner_eventfilter_isbase = false;
            return KSelectionOwner::eventFilter(watched, event);
        }
        auto eventfilter_cb = kselectionowner_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelectionOwner::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectionowner_childevent_isbase) {
            kselectionowner_childevent_isbase = false;
            KSelectionOwner::childEvent(event);
            return;
        }
        auto childevent_cb = kselectionowner_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSelectionOwner::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectionowner_customevent_isbase) {
            kselectionowner_customevent_isbase = false;
            KSelectionOwner::customEvent(event);
            return;
        }
        auto customevent_cb = kselectionowner_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSelectionOwner::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectionowner_connectnotify_isbase) {
            kselectionowner_connectnotify_isbase = false;
            KSelectionOwner::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kselectionowner_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSelectionOwner::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectionowner_disconnectnotify_isbase) {
            kselectionowner_disconnectnotify_isbase = false;
            KSelectionOwner::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kselectionowner_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSelectionOwner::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setData(uint32_t extra1, uint32_t extra2) {
        if (kselectionowner_setdata_isbase) {
            kselectionowner_setdata_isbase = false;
            KSelectionOwner::setData(extra1, extra2);
            return;
        }
        auto setdata_cb = kselectionowner_setdata_callback;
        if (setdata_cb) {
            uint32_t cbval1 = extra1;
            uint32_t cbval2 = extra2;

            setdata_cb(this, cbval1, cbval2);
            return;
        }
        KSelectionOwner::setData(extra1, extra2);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kselectionowner_sender_isbase) {
            kselectionowner_sender_isbase = false;
            return KSelectionOwner::sender();
        }
        auto sender_cb = kselectionowner_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSelectionOwner::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kselectionowner_sendersignalindex_isbase) {
            kselectionowner_sendersignalindex_isbase = false;
            return KSelectionOwner::senderSignalIndex();
        }
        auto sendersignalindex_cb = kselectionowner_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSelectionOwner::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kselectionowner_receivers_isbase) {
            kselectionowner_receivers_isbase = false;
            return KSelectionOwner::receivers(signal);
        }
        auto receivers_cb = kselectionowner_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelectionOwner::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kselectionowner_issignalconnected_isbase) {
            kselectionowner_issignalconnected_isbase = false;
            return KSelectionOwner::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kselectionowner_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSelectionOwner::isSignalConnected(signal);
    }

    // Friend functions
    friend void KSelectionOwner_GetAtoms(KSelectionOwner* self);
    friend void KSelectionOwner_SuperGetAtoms(KSelectionOwner* self);
    friend void KSelectionOwner_ChildEvent(KSelectionOwner* self, QChildEvent* event);
    friend void KSelectionOwner_SuperChildEvent(KSelectionOwner* self, QChildEvent* event);
    friend void KSelectionOwner_CustomEvent(KSelectionOwner* self, QEvent* event);
    friend void KSelectionOwner_SuperCustomEvent(KSelectionOwner* self, QEvent* event);
    friend void KSelectionOwner_ConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
    friend void KSelectionOwner_SuperConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
    friend void KSelectionOwner_DisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
    friend void KSelectionOwner_SuperDisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
    friend void KSelectionOwner_SetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2);
    friend void KSelectionOwner_SuperSetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2);
    friend QObject* KSelectionOwner_Sender(const KSelectionOwner* self);
    friend QObject* KSelectionOwner_SuperSender(const KSelectionOwner* self);
    friend int KSelectionOwner_SenderSignalIndex(const KSelectionOwner* self);
    friend int KSelectionOwner_SuperSenderSignalIndex(const KSelectionOwner* self);
    friend int KSelectionOwner_Receivers(const KSelectionOwner* self, const char* signal);
    friend int KSelectionOwner_SuperReceivers(const KSelectionOwner* self, const char* signal);
    friend bool KSelectionOwner_IsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal);
    friend bool KSelectionOwner_SuperIsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal);
};

#endif
