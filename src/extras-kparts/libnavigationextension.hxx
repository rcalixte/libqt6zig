#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALNAVIGATIONEXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALNAVIGATIONEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::NavigationExtension so that we can call protected methods
class VirtualKPartsNavigationExtension final : public KParts::NavigationExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsNavigationExtension = true;

    // Virtual class public types (including callbacks)
    using KParts__NavigationExtension_MetaObject_Callback = QMetaObject* (*)();
    using KParts__NavigationExtension_Metacast_Callback = void* (*)(KParts__NavigationExtension*, const char*);
    using KParts__NavigationExtension_Metacall_Callback = int (*)(KParts__NavigationExtension*, int, int, void**);
    using KParts__NavigationExtension_XOffset_Callback = int (*)();
    using KParts__NavigationExtension_YOffset_Callback = int (*)();
    using KParts__NavigationExtension_SaveState_Callback = void (*)(KParts__NavigationExtension*, QDataStream*);
    using KParts__NavigationExtension_RestoreState_Callback = void (*)(KParts__NavigationExtension*, QDataStream*);
    using KParts__NavigationExtension_Event_Callback = bool (*)(KParts__NavigationExtension*, QEvent*);
    using KParts__NavigationExtension_EventFilter_Callback = bool (*)(KParts__NavigationExtension*, QObject*, QEvent*);
    using KParts__NavigationExtension_TimerEvent_Callback = void (*)(KParts__NavigationExtension*, QTimerEvent*);
    using KParts__NavigationExtension_ChildEvent_Callback = void (*)(KParts__NavigationExtension*, QChildEvent*);
    using KParts__NavigationExtension_CustomEvent_Callback = void (*)(KParts__NavigationExtension*, QEvent*);
    using KParts__NavigationExtension_ConnectNotify_Callback = void (*)(KParts__NavigationExtension*, QMetaMethod*);
    using KParts__NavigationExtension_DisconnectNotify_Callback = void (*)(KParts__NavigationExtension*, QMetaMethod*);
    using KParts__NavigationExtension_Sender_Callback = QObject* (*)();
    using KParts__NavigationExtension_SenderSignalIndex_Callback = int (*)();
    using KParts__NavigationExtension_Receivers_Callback = int (*)(const KParts__NavigationExtension*, const char*);
    using KParts__NavigationExtension_IsSignalConnected_Callback = bool (*)(const KParts__NavigationExtension*, QMetaMethod*);

  protected:
    // Instance callback storage
    KParts__NavigationExtension_MetaObject_Callback kparts__navigationextension_metaobject_callback = nullptr;
    KParts__NavigationExtension_Metacast_Callback kparts__navigationextension_metacast_callback = nullptr;
    KParts__NavigationExtension_Metacall_Callback kparts__navigationextension_metacall_callback = nullptr;
    KParts__NavigationExtension_XOffset_Callback kparts__navigationextension_xoffset_callback = nullptr;
    KParts__NavigationExtension_YOffset_Callback kparts__navigationextension_yoffset_callback = nullptr;
    KParts__NavigationExtension_SaveState_Callback kparts__navigationextension_savestate_callback = nullptr;
    KParts__NavigationExtension_RestoreState_Callback kparts__navigationextension_restorestate_callback = nullptr;
    KParts__NavigationExtension_Event_Callback kparts__navigationextension_event_callback = nullptr;
    KParts__NavigationExtension_EventFilter_Callback kparts__navigationextension_eventfilter_callback = nullptr;
    KParts__NavigationExtension_TimerEvent_Callback kparts__navigationextension_timerevent_callback = nullptr;
    KParts__NavigationExtension_ChildEvent_Callback kparts__navigationextension_childevent_callback = nullptr;
    KParts__NavigationExtension_CustomEvent_Callback kparts__navigationextension_customevent_callback = nullptr;
    KParts__NavigationExtension_ConnectNotify_Callback kparts__navigationextension_connectnotify_callback = nullptr;
    KParts__NavigationExtension_DisconnectNotify_Callback kparts__navigationextension_disconnectnotify_callback = nullptr;
    KParts__NavigationExtension_Sender_Callback kparts__navigationextension_sender_callback = nullptr;
    KParts__NavigationExtension_SenderSignalIndex_Callback kparts__navigationextension_sendersignalindex_callback = nullptr;
    KParts__NavigationExtension_Receivers_Callback kparts__navigationextension_receivers_callback = nullptr;
    KParts__NavigationExtension_IsSignalConnected_Callback kparts__navigationextension_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kparts__navigationextension_metaobject_isbase = false;
    mutable bool kparts__navigationextension_metacast_isbase = false;
    mutable bool kparts__navigationextension_metacall_isbase = false;
    mutable bool kparts__navigationextension_xoffset_isbase = false;
    mutable bool kparts__navigationextension_yoffset_isbase = false;
    mutable bool kparts__navigationextension_savestate_isbase = false;
    mutable bool kparts__navigationextension_restorestate_isbase = false;
    mutable bool kparts__navigationextension_event_isbase = false;
    mutable bool kparts__navigationextension_eventfilter_isbase = false;
    mutable bool kparts__navigationextension_timerevent_isbase = false;
    mutable bool kparts__navigationextension_childevent_isbase = false;
    mutable bool kparts__navigationextension_customevent_isbase = false;
    mutable bool kparts__navigationextension_connectnotify_isbase = false;
    mutable bool kparts__navigationextension_disconnectnotify_isbase = false;
    mutable bool kparts__navigationextension_sender_isbase = false;
    mutable bool kparts__navigationextension_sendersignalindex_isbase = false;
    mutable bool kparts__navigationextension_receivers_isbase = false;
    mutable bool kparts__navigationextension_issignalconnected_isbase = false;

  public:
    VirtualKPartsNavigationExtension(KParts::ReadOnlyPart* parent) : KParts::NavigationExtension(parent) {};

    // Callback setters
    inline void setKParts__NavigationExtension_MetaObject_Callback(KParts__NavigationExtension_MetaObject_Callback cb) { kparts__navigationextension_metaobject_callback = cb; }
    inline void setKParts__NavigationExtension_Metacast_Callback(KParts__NavigationExtension_Metacast_Callback cb) { kparts__navigationextension_metacast_callback = cb; }
    inline void setKParts__NavigationExtension_Metacall_Callback(KParts__NavigationExtension_Metacall_Callback cb) { kparts__navigationextension_metacall_callback = cb; }
    inline void setKParts__NavigationExtension_XOffset_Callback(KParts__NavigationExtension_XOffset_Callback cb) { kparts__navigationextension_xoffset_callback = cb; }
    inline void setKParts__NavigationExtension_YOffset_Callback(KParts__NavigationExtension_YOffset_Callback cb) { kparts__navigationextension_yoffset_callback = cb; }
    inline void setKParts__NavigationExtension_SaveState_Callback(KParts__NavigationExtension_SaveState_Callback cb) { kparts__navigationextension_savestate_callback = cb; }
    inline void setKParts__NavigationExtension_RestoreState_Callback(KParts__NavigationExtension_RestoreState_Callback cb) { kparts__navigationextension_restorestate_callback = cb; }
    inline void setKParts__NavigationExtension_Event_Callback(KParts__NavigationExtension_Event_Callback cb) { kparts__navigationextension_event_callback = cb; }
    inline void setKParts__NavigationExtension_EventFilter_Callback(KParts__NavigationExtension_EventFilter_Callback cb) { kparts__navigationextension_eventfilter_callback = cb; }
    inline void setKParts__NavigationExtension_TimerEvent_Callback(KParts__NavigationExtension_TimerEvent_Callback cb) { kparts__navigationextension_timerevent_callback = cb; }
    inline void setKParts__NavigationExtension_ChildEvent_Callback(KParts__NavigationExtension_ChildEvent_Callback cb) { kparts__navigationextension_childevent_callback = cb; }
    inline void setKParts__NavigationExtension_CustomEvent_Callback(KParts__NavigationExtension_CustomEvent_Callback cb) { kparts__navigationextension_customevent_callback = cb; }
    inline void setKParts__NavigationExtension_ConnectNotify_Callback(KParts__NavigationExtension_ConnectNotify_Callback cb) { kparts__navigationextension_connectnotify_callback = cb; }
    inline void setKParts__NavigationExtension_DisconnectNotify_Callback(KParts__NavigationExtension_DisconnectNotify_Callback cb) { kparts__navigationextension_disconnectnotify_callback = cb; }
    inline void setKParts__NavigationExtension_Sender_Callback(KParts__NavigationExtension_Sender_Callback cb) { kparts__navigationextension_sender_callback = cb; }
    inline void setKParts__NavigationExtension_SenderSignalIndex_Callback(KParts__NavigationExtension_SenderSignalIndex_Callback cb) { kparts__navigationextension_sendersignalindex_callback = cb; }
    inline void setKParts__NavigationExtension_Receivers_Callback(KParts__NavigationExtension_Receivers_Callback cb) { kparts__navigationextension_receivers_callback = cb; }
    inline void setKParts__NavigationExtension_IsSignalConnected_Callback(KParts__NavigationExtension_IsSignalConnected_Callback cb) { kparts__navigationextension_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKParts__NavigationExtension_MetaObject_IsBase(bool value) const { kparts__navigationextension_metaobject_isbase = value; }
    inline void setKParts__NavigationExtension_Metacast_IsBase(bool value) const { kparts__navigationextension_metacast_isbase = value; }
    inline void setKParts__NavigationExtension_Metacall_IsBase(bool value) const { kparts__navigationextension_metacall_isbase = value; }
    inline void setKParts__NavigationExtension_XOffset_IsBase(bool value) const { kparts__navigationextension_xoffset_isbase = value; }
    inline void setKParts__NavigationExtension_YOffset_IsBase(bool value) const { kparts__navigationextension_yoffset_isbase = value; }
    inline void setKParts__NavigationExtension_SaveState_IsBase(bool value) const { kparts__navigationextension_savestate_isbase = value; }
    inline void setKParts__NavigationExtension_RestoreState_IsBase(bool value) const { kparts__navigationextension_restorestate_isbase = value; }
    inline void setKParts__NavigationExtension_Event_IsBase(bool value) const { kparts__navigationextension_event_isbase = value; }
    inline void setKParts__NavigationExtension_EventFilter_IsBase(bool value) const { kparts__navigationextension_eventfilter_isbase = value; }
    inline void setKParts__NavigationExtension_TimerEvent_IsBase(bool value) const { kparts__navigationextension_timerevent_isbase = value; }
    inline void setKParts__NavigationExtension_ChildEvent_IsBase(bool value) const { kparts__navigationextension_childevent_isbase = value; }
    inline void setKParts__NavigationExtension_CustomEvent_IsBase(bool value) const { kparts__navigationextension_customevent_isbase = value; }
    inline void setKParts__NavigationExtension_ConnectNotify_IsBase(bool value) const { kparts__navigationextension_connectnotify_isbase = value; }
    inline void setKParts__NavigationExtension_DisconnectNotify_IsBase(bool value) const { kparts__navigationextension_disconnectnotify_isbase = value; }
    inline void setKParts__NavigationExtension_Sender_IsBase(bool value) const { kparts__navigationextension_sender_isbase = value; }
    inline void setKParts__NavigationExtension_SenderSignalIndex_IsBase(bool value) const { kparts__navigationextension_sendersignalindex_isbase = value; }
    inline void setKParts__NavigationExtension_Receivers_IsBase(bool value) const { kparts__navigationextension_receivers_isbase = value; }
    inline void setKParts__NavigationExtension_IsSignalConnected_IsBase(bool value) const { kparts__navigationextension_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__navigationextension_metaobject_isbase) {
            kparts__navigationextension_metaobject_isbase = false;
            return KParts__NavigationExtension::metaObject();
        }
        auto metaobject_cb = kparts__navigationextension_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KParts__NavigationExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__navigationextension_metacast_isbase) {
            kparts__navigationextension_metacast_isbase = false;
            return KParts__NavigationExtension::qt_metacast(param1);
        }
        auto metacast_cb = kparts__navigationextension_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__NavigationExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__navigationextension_metacall_isbase) {
            kparts__navigationextension_metacall_isbase = false;
            return KParts__NavigationExtension::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kparts__navigationextension_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int xOffset() override {
        if (kparts__navigationextension_xoffset_isbase) {
            kparts__navigationextension_xoffset_isbase = false;
            return KParts__NavigationExtension::xOffset();
        }
        auto xoffset_cb = kparts__navigationextension_xoffset_callback;
        if (xoffset_cb) {
            int callback_ret = xoffset_cb();
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::xOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int yOffset() override {
        if (kparts__navigationextension_yoffset_isbase) {
            kparts__navigationextension_yoffset_isbase = false;
            return KParts__NavigationExtension::yOffset();
        }
        auto yoffset_cb = kparts__navigationextension_yoffset_callback;
        if (yoffset_cb) {
            int callback_ret = yoffset_cb();
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::yOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveState(QDataStream& stream) override {
        if (kparts__navigationextension_savestate_isbase) {
            kparts__navigationextension_savestate_isbase = false;
            KParts__NavigationExtension::saveState(stream);
            return;
        }
        auto savestate_cb = kparts__navigationextension_savestate_callback;
        if (savestate_cb) {
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &stream_ret;

            savestate_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::saveState(stream);
    }

    // Virtual method for C ABI access and custom callback
    virtual void restoreState(QDataStream& stream) override {
        if (kparts__navigationextension_restorestate_isbase) {
            kparts__navigationextension_restorestate_isbase = false;
            KParts__NavigationExtension::restoreState(stream);
            return;
        }
        auto restorestate_cb = kparts__navigationextension_restorestate_callback;
        if (restorestate_cb) {
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &stream_ret;

            restorestate_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::restoreState(stream);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__navigationextension_event_isbase) {
            kparts__navigationextension_event_isbase = false;
            return KParts__NavigationExtension::event(event);
        }
        auto event_cb = kparts__navigationextension_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__NavigationExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__navigationextension_eventfilter_isbase) {
            kparts__navigationextension_eventfilter_isbase = false;
            return KParts__NavigationExtension::eventFilter(watched, event);
        }
        auto eventfilter_cb = kparts__navigationextension_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__NavigationExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__navigationextension_timerevent_isbase) {
            kparts__navigationextension_timerevent_isbase = false;
            KParts__NavigationExtension::timerEvent(event);
            return;
        }
        auto timerevent_cb = kparts__navigationextension_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__navigationextension_childevent_isbase) {
            kparts__navigationextension_childevent_isbase = false;
            KParts__NavigationExtension::childEvent(event);
            return;
        }
        auto childevent_cb = kparts__navigationextension_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__navigationextension_customevent_isbase) {
            kparts__navigationextension_customevent_isbase = false;
            KParts__NavigationExtension::customEvent(event);
            return;
        }
        auto customevent_cb = kparts__navigationextension_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__navigationextension_connectnotify_isbase) {
            kparts__navigationextension_connectnotify_isbase = false;
            KParts__NavigationExtension::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kparts__navigationextension_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__navigationextension_disconnectnotify_isbase) {
            kparts__navigationextension_disconnectnotify_isbase = false;
            KParts__NavigationExtension::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kparts__navigationextension_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KParts__NavigationExtension::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__navigationextension_sender_isbase) {
            kparts__navigationextension_sender_isbase = false;
            return KParts__NavigationExtension::sender();
        }
        auto sender_cb = kparts__navigationextension_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KParts__NavigationExtension::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__navigationextension_sendersignalindex_isbase) {
            kparts__navigationextension_sendersignalindex_isbase = false;
            return KParts__NavigationExtension::senderSignalIndex();
        }
        auto sendersignalindex_cb = kparts__navigationextension_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__navigationextension_receivers_isbase) {
            kparts__navigationextension_receivers_isbase = false;
            return KParts__NavigationExtension::receivers(signal);
        }
        auto receivers_cb = kparts__navigationextension_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__navigationextension_issignalconnected_isbase) {
            kparts__navigationextension_issignalconnected_isbase = false;
            return KParts__NavigationExtension::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kparts__navigationextension_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__NavigationExtension::isSignalConnected(signal);
    }

    // Friend functions
    friend void KParts__NavigationExtension_TimerEvent(KParts::NavigationExtension* self, QTimerEvent* event);
    friend void KParts__NavigationExtension_SuperTimerEvent(KParts::NavigationExtension* self, QTimerEvent* event);
    friend void KParts__NavigationExtension_ChildEvent(KParts::NavigationExtension* self, QChildEvent* event);
    friend void KParts__NavigationExtension_SuperChildEvent(KParts::NavigationExtension* self, QChildEvent* event);
    friend void KParts__NavigationExtension_CustomEvent(KParts::NavigationExtension* self, QEvent* event);
    friend void KParts__NavigationExtension_SuperCustomEvent(KParts::NavigationExtension* self, QEvent* event);
    friend void KParts__NavigationExtension_ConnectNotify(KParts::NavigationExtension* self, const QMetaMethod* signal);
    friend void KParts__NavigationExtension_SuperConnectNotify(KParts::NavigationExtension* self, const QMetaMethod* signal);
    friend void KParts__NavigationExtension_DisconnectNotify(KParts::NavigationExtension* self, const QMetaMethod* signal);
    friend void KParts__NavigationExtension_SuperDisconnectNotify(KParts::NavigationExtension* self, const QMetaMethod* signal);
    friend QObject* KParts__NavigationExtension_Sender(const KParts::NavigationExtension* self);
    friend QObject* KParts__NavigationExtension_SuperSender(const KParts::NavigationExtension* self);
    friend int KParts__NavigationExtension_SenderSignalIndex(const KParts::NavigationExtension* self);
    friend int KParts__NavigationExtension_SuperSenderSignalIndex(const KParts::NavigationExtension* self);
    friend int KParts__NavigationExtension_Receivers(const KParts::NavigationExtension* self, const char* signal);
    friend int KParts__NavigationExtension_SuperReceivers(const KParts::NavigationExtension* self, const char* signal);
    friend bool KParts__NavigationExtension_IsSignalConnected(const KParts::NavigationExtension* self, const QMetaMethod* signal);
    friend bool KParts__NavigationExtension_SuperIsSignalConnected(const KParts::NavigationExtension* self, const QMetaMethod* signal);
};

#endif
