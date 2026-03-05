#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALFILEINFOEXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALFILEINFOEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::FileInfoExtension so that we can call protected methods
class VirtualKPartsFileInfoExtension : public KParts::FileInfoExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsFileInfoExtension = true;

    // Virtual class public types (including callbacks)
    using KParts__FileInfoExtension_MetaObject_Callback = QMetaObject* (*)();
    using KParts__FileInfoExtension_Metacast_Callback = void* (*)(KParts__FileInfoExtension*, const char*);
    using KParts__FileInfoExtension_Metacall_Callback = int (*)(KParts__FileInfoExtension*, int, int, void**);
    using KParts__FileInfoExtension_HasSelection_Callback = bool (*)();
    using KParts__FileInfoExtension_SupportedQueryModes_Callback = int (*)();
    using KParts__FileInfoExtension_QueryFor_Callback = KFileItemList* (*)(const KParts__FileInfoExtension*, int);
    using KParts__FileInfoExtension_Event_Callback = bool (*)(KParts__FileInfoExtension*, QEvent*);
    using KParts__FileInfoExtension_EventFilter_Callback = bool (*)(KParts__FileInfoExtension*, QObject*, QEvent*);
    using KParts__FileInfoExtension_TimerEvent_Callback = void (*)(KParts__FileInfoExtension*, QTimerEvent*);
    using KParts__FileInfoExtension_ChildEvent_Callback = void (*)(KParts__FileInfoExtension*, QChildEvent*);
    using KParts__FileInfoExtension_CustomEvent_Callback = void (*)(KParts__FileInfoExtension*, QEvent*);
    using KParts__FileInfoExtension_ConnectNotify_Callback = void (*)(KParts__FileInfoExtension*, QMetaMethod*);
    using KParts__FileInfoExtension_DisconnectNotify_Callback = void (*)(KParts__FileInfoExtension*, QMetaMethod*);
    using KParts__FileInfoExtension_Sender_Callback = QObject* (*)();
    using KParts__FileInfoExtension_SenderSignalIndex_Callback = int (*)();
    using KParts__FileInfoExtension_Receivers_Callback = int (*)(const KParts__FileInfoExtension*, const char*);
    using KParts__FileInfoExtension_IsSignalConnected_Callback = bool (*)(const KParts__FileInfoExtension*, QMetaMethod*);

  protected:
    // Instance callback storage
    KParts__FileInfoExtension_MetaObject_Callback kparts__fileinfoextension_metaobject_callback = nullptr;
    KParts__FileInfoExtension_Metacast_Callback kparts__fileinfoextension_metacast_callback = nullptr;
    KParts__FileInfoExtension_Metacall_Callback kparts__fileinfoextension_metacall_callback = nullptr;
    KParts__FileInfoExtension_HasSelection_Callback kparts__fileinfoextension_hasselection_callback = nullptr;
    KParts__FileInfoExtension_SupportedQueryModes_Callback kparts__fileinfoextension_supportedquerymodes_callback = nullptr;
    KParts__FileInfoExtension_QueryFor_Callback kparts__fileinfoextension_queryfor_callback = nullptr;
    KParts__FileInfoExtension_Event_Callback kparts__fileinfoextension_event_callback = nullptr;
    KParts__FileInfoExtension_EventFilter_Callback kparts__fileinfoextension_eventfilter_callback = nullptr;
    KParts__FileInfoExtension_TimerEvent_Callback kparts__fileinfoextension_timerevent_callback = nullptr;
    KParts__FileInfoExtension_ChildEvent_Callback kparts__fileinfoextension_childevent_callback = nullptr;
    KParts__FileInfoExtension_CustomEvent_Callback kparts__fileinfoextension_customevent_callback = nullptr;
    KParts__FileInfoExtension_ConnectNotify_Callback kparts__fileinfoextension_connectnotify_callback = nullptr;
    KParts__FileInfoExtension_DisconnectNotify_Callback kparts__fileinfoextension_disconnectnotify_callback = nullptr;
    KParts__FileInfoExtension_Sender_Callback kparts__fileinfoextension_sender_callback = nullptr;
    KParts__FileInfoExtension_SenderSignalIndex_Callback kparts__fileinfoextension_sendersignalindex_callback = nullptr;
    KParts__FileInfoExtension_Receivers_Callback kparts__fileinfoextension_receivers_callback = nullptr;
    KParts__FileInfoExtension_IsSignalConnected_Callback kparts__fileinfoextension_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kparts__fileinfoextension_metaobject_isbase = false;
    mutable bool kparts__fileinfoextension_metacast_isbase = false;
    mutable bool kparts__fileinfoextension_metacall_isbase = false;
    mutable bool kparts__fileinfoextension_hasselection_isbase = false;
    mutable bool kparts__fileinfoextension_supportedquerymodes_isbase = false;
    mutable bool kparts__fileinfoextension_queryfor_isbase = false;
    mutable bool kparts__fileinfoextension_event_isbase = false;
    mutable bool kparts__fileinfoextension_eventfilter_isbase = false;
    mutable bool kparts__fileinfoextension_timerevent_isbase = false;
    mutable bool kparts__fileinfoextension_childevent_isbase = false;
    mutable bool kparts__fileinfoextension_customevent_isbase = false;
    mutable bool kparts__fileinfoextension_connectnotify_isbase = false;
    mutable bool kparts__fileinfoextension_disconnectnotify_isbase = false;
    mutable bool kparts__fileinfoextension_sender_isbase = false;
    mutable bool kparts__fileinfoextension_sendersignalindex_isbase = false;
    mutable bool kparts__fileinfoextension_receivers_isbase = false;
    mutable bool kparts__fileinfoextension_issignalconnected_isbase = false;

  public:
    VirtualKPartsFileInfoExtension(KParts::ReadOnlyPart* parent) : KParts::FileInfoExtension(parent) {};

    // Callback setters
    inline void setKParts__FileInfoExtension_MetaObject_Callback(KParts__FileInfoExtension_MetaObject_Callback cb) { kparts__fileinfoextension_metaobject_callback = cb; }
    inline void setKParts__FileInfoExtension_Metacast_Callback(KParts__FileInfoExtension_Metacast_Callback cb) { kparts__fileinfoextension_metacast_callback = cb; }
    inline void setKParts__FileInfoExtension_Metacall_Callback(KParts__FileInfoExtension_Metacall_Callback cb) { kparts__fileinfoextension_metacall_callback = cb; }
    inline void setKParts__FileInfoExtension_HasSelection_Callback(KParts__FileInfoExtension_HasSelection_Callback cb) { kparts__fileinfoextension_hasselection_callback = cb; }
    inline void setKParts__FileInfoExtension_SupportedQueryModes_Callback(KParts__FileInfoExtension_SupportedQueryModes_Callback cb) { kparts__fileinfoextension_supportedquerymodes_callback = cb; }
    inline void setKParts__FileInfoExtension_QueryFor_Callback(KParts__FileInfoExtension_QueryFor_Callback cb) { kparts__fileinfoextension_queryfor_callback = cb; }
    inline void setKParts__FileInfoExtension_Event_Callback(KParts__FileInfoExtension_Event_Callback cb) { kparts__fileinfoextension_event_callback = cb; }
    inline void setKParts__FileInfoExtension_EventFilter_Callback(KParts__FileInfoExtension_EventFilter_Callback cb) { kparts__fileinfoextension_eventfilter_callback = cb; }
    inline void setKParts__FileInfoExtension_TimerEvent_Callback(KParts__FileInfoExtension_TimerEvent_Callback cb) { kparts__fileinfoextension_timerevent_callback = cb; }
    inline void setKParts__FileInfoExtension_ChildEvent_Callback(KParts__FileInfoExtension_ChildEvent_Callback cb) { kparts__fileinfoextension_childevent_callback = cb; }
    inline void setKParts__FileInfoExtension_CustomEvent_Callback(KParts__FileInfoExtension_CustomEvent_Callback cb) { kparts__fileinfoextension_customevent_callback = cb; }
    inline void setKParts__FileInfoExtension_ConnectNotify_Callback(KParts__FileInfoExtension_ConnectNotify_Callback cb) { kparts__fileinfoextension_connectnotify_callback = cb; }
    inline void setKParts__FileInfoExtension_DisconnectNotify_Callback(KParts__FileInfoExtension_DisconnectNotify_Callback cb) { kparts__fileinfoextension_disconnectnotify_callback = cb; }
    inline void setKParts__FileInfoExtension_Sender_Callback(KParts__FileInfoExtension_Sender_Callback cb) { kparts__fileinfoextension_sender_callback = cb; }
    inline void setKParts__FileInfoExtension_SenderSignalIndex_Callback(KParts__FileInfoExtension_SenderSignalIndex_Callback cb) { kparts__fileinfoextension_sendersignalindex_callback = cb; }
    inline void setKParts__FileInfoExtension_Receivers_Callback(KParts__FileInfoExtension_Receivers_Callback cb) { kparts__fileinfoextension_receivers_callback = cb; }
    inline void setKParts__FileInfoExtension_IsSignalConnected_Callback(KParts__FileInfoExtension_IsSignalConnected_Callback cb) { kparts__fileinfoextension_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKParts__FileInfoExtension_MetaObject_IsBase(bool value) const { kparts__fileinfoextension_metaobject_isbase = value; }
    inline void setKParts__FileInfoExtension_Metacast_IsBase(bool value) const { kparts__fileinfoextension_metacast_isbase = value; }
    inline void setKParts__FileInfoExtension_Metacall_IsBase(bool value) const { kparts__fileinfoextension_metacall_isbase = value; }
    inline void setKParts__FileInfoExtension_HasSelection_IsBase(bool value) const { kparts__fileinfoextension_hasselection_isbase = value; }
    inline void setKParts__FileInfoExtension_SupportedQueryModes_IsBase(bool value) const { kparts__fileinfoextension_supportedquerymodes_isbase = value; }
    inline void setKParts__FileInfoExtension_QueryFor_IsBase(bool value) const { kparts__fileinfoextension_queryfor_isbase = value; }
    inline void setKParts__FileInfoExtension_Event_IsBase(bool value) const { kparts__fileinfoextension_event_isbase = value; }
    inline void setKParts__FileInfoExtension_EventFilter_IsBase(bool value) const { kparts__fileinfoextension_eventfilter_isbase = value; }
    inline void setKParts__FileInfoExtension_TimerEvent_IsBase(bool value) const { kparts__fileinfoextension_timerevent_isbase = value; }
    inline void setKParts__FileInfoExtension_ChildEvent_IsBase(bool value) const { kparts__fileinfoextension_childevent_isbase = value; }
    inline void setKParts__FileInfoExtension_CustomEvent_IsBase(bool value) const { kparts__fileinfoextension_customevent_isbase = value; }
    inline void setKParts__FileInfoExtension_ConnectNotify_IsBase(bool value) const { kparts__fileinfoextension_connectnotify_isbase = value; }
    inline void setKParts__FileInfoExtension_DisconnectNotify_IsBase(bool value) const { kparts__fileinfoextension_disconnectnotify_isbase = value; }
    inline void setKParts__FileInfoExtension_Sender_IsBase(bool value) const { kparts__fileinfoextension_sender_isbase = value; }
    inline void setKParts__FileInfoExtension_SenderSignalIndex_IsBase(bool value) const { kparts__fileinfoextension_sendersignalindex_isbase = value; }
    inline void setKParts__FileInfoExtension_Receivers_IsBase(bool value) const { kparts__fileinfoextension_receivers_isbase = value; }
    inline void setKParts__FileInfoExtension_IsSignalConnected_IsBase(bool value) const { kparts__fileinfoextension_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__fileinfoextension_metaobject_isbase) {
            kparts__fileinfoextension_metaobject_isbase = false;
            return KParts__FileInfoExtension::metaObject();
        }
        auto metaobject_cb = kparts__fileinfoextension_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KParts__FileInfoExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__fileinfoextension_metacast_isbase) {
            kparts__fileinfoextension_metacast_isbase = false;
            return KParts__FileInfoExtension::qt_metacast(param1);
        }
        auto metacast_cb = kparts__fileinfoextension_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__FileInfoExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__fileinfoextension_metacall_isbase) {
            kparts__fileinfoextension_metacall_isbase = false;
            return KParts__FileInfoExtension::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kparts__fileinfoextension_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__FileInfoExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasSelection() const override {
        if (kparts__fileinfoextension_hasselection_isbase) {
            kparts__fileinfoextension_hasselection_isbase = false;
            return KParts__FileInfoExtension::hasSelection();
        }
        auto hasselection_cb = kparts__fileinfoextension_hasselection_callback;
        if (hasselection_cb) {
            bool callback_ret = hasselection_cb();
            return callback_ret;
        }
        return KParts__FileInfoExtension::hasSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::FileInfoExtension::QueryModes supportedQueryModes() const override {
        if (kparts__fileinfoextension_supportedquerymodes_isbase) {
            kparts__fileinfoextension_supportedquerymodes_isbase = false;
            return KParts__FileInfoExtension::supportedQueryModes();
        }
        auto supportedquerymodes_cb = kparts__fileinfoextension_supportedquerymodes_callback;
        if (supportedquerymodes_cb) {
            int callback_ret = supportedquerymodes_cb();
            return static_cast<KParts::FileInfoExtension::QueryModes>(callback_ret);
        }
        return KParts__FileInfoExtension::supportedQueryModes();
    }

    // Virtual method for C ABI access and custom callback
    virtual KFileItemList queryFor(KParts::FileInfoExtension::QueryMode mode) const override {
        auto queryfor_cb = kparts__fileinfoextension_queryfor_callback;
        if (queryfor_cb) {
            int cbval1 = static_cast<int>(mode);

            KFileItemList* callback_ret = queryfor_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__fileinfoextension_event_isbase) {
            kparts__fileinfoextension_event_isbase = false;
            return KParts__FileInfoExtension::event(event);
        }
        auto event_cb = kparts__fileinfoextension_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__FileInfoExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__fileinfoextension_eventfilter_isbase) {
            kparts__fileinfoextension_eventfilter_isbase = false;
            return KParts__FileInfoExtension::eventFilter(watched, event);
        }
        auto eventfilter_cb = kparts__fileinfoextension_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__FileInfoExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__fileinfoextension_timerevent_isbase) {
            kparts__fileinfoextension_timerevent_isbase = false;
            KParts__FileInfoExtension::timerEvent(event);
            return;
        }
        auto timerevent_cb = kparts__fileinfoextension_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__fileinfoextension_childevent_isbase) {
            kparts__fileinfoextension_childevent_isbase = false;
            KParts__FileInfoExtension::childEvent(event);
            return;
        }
        auto childevent_cb = kparts__fileinfoextension_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__fileinfoextension_customevent_isbase) {
            kparts__fileinfoextension_customevent_isbase = false;
            KParts__FileInfoExtension::customEvent(event);
            return;
        }
        auto customevent_cb = kparts__fileinfoextension_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__fileinfoextension_connectnotify_isbase) {
            kparts__fileinfoextension_connectnotify_isbase = false;
            KParts__FileInfoExtension::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kparts__fileinfoextension_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__fileinfoextension_disconnectnotify_isbase) {
            kparts__fileinfoextension_disconnectnotify_isbase = false;
            KParts__FileInfoExtension::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kparts__fileinfoextension_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__fileinfoextension_sender_isbase) {
            kparts__fileinfoextension_sender_isbase = false;
            return KParts__FileInfoExtension::sender();
        }
        auto sender_cb = kparts__fileinfoextension_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KParts__FileInfoExtension::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__fileinfoextension_sendersignalindex_isbase) {
            kparts__fileinfoextension_sendersignalindex_isbase = false;
            return KParts__FileInfoExtension::senderSignalIndex();
        }
        auto sendersignalindex_cb = kparts__fileinfoextension_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KParts__FileInfoExtension::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__fileinfoextension_receivers_isbase) {
            kparts__fileinfoextension_receivers_isbase = false;
            return KParts__FileInfoExtension::receivers(signal);
        }
        auto receivers_cb = kparts__fileinfoextension_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KParts__FileInfoExtension::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__fileinfoextension_issignalconnected_isbase) {
            kparts__fileinfoextension_issignalconnected_isbase = false;
            return KParts__FileInfoExtension::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kparts__fileinfoextension_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__FileInfoExtension::isSignalConnected(signal);
    }

    // Friend functions
    friend void KParts__FileInfoExtension_TimerEvent(KParts::FileInfoExtension* self, QTimerEvent* event);
    friend void KParts__FileInfoExtension_SuperTimerEvent(KParts::FileInfoExtension* self, QTimerEvent* event);
    friend void KParts__FileInfoExtension_ChildEvent(KParts::FileInfoExtension* self, QChildEvent* event);
    friend void KParts__FileInfoExtension_SuperChildEvent(KParts::FileInfoExtension* self, QChildEvent* event);
    friend void KParts__FileInfoExtension_CustomEvent(KParts::FileInfoExtension* self, QEvent* event);
    friend void KParts__FileInfoExtension_SuperCustomEvent(KParts::FileInfoExtension* self, QEvent* event);
    friend void KParts__FileInfoExtension_ConnectNotify(KParts::FileInfoExtension* self, const QMetaMethod* signal);
    friend void KParts__FileInfoExtension_SuperConnectNotify(KParts::FileInfoExtension* self, const QMetaMethod* signal);
    friend void KParts__FileInfoExtension_DisconnectNotify(KParts::FileInfoExtension* self, const QMetaMethod* signal);
    friend void KParts__FileInfoExtension_SuperDisconnectNotify(KParts::FileInfoExtension* self, const QMetaMethod* signal);
    friend QObject* KParts__FileInfoExtension_Sender(const KParts::FileInfoExtension* self);
    friend QObject* KParts__FileInfoExtension_SuperSender(const KParts::FileInfoExtension* self);
    friend int KParts__FileInfoExtension_SenderSignalIndex(const KParts::FileInfoExtension* self);
    friend int KParts__FileInfoExtension_SuperSenderSignalIndex(const KParts::FileInfoExtension* self);
    friend int KParts__FileInfoExtension_Receivers(const KParts::FileInfoExtension* self, const char* signal);
    friend int KParts__FileInfoExtension_SuperReceivers(const KParts::FileInfoExtension* self, const char* signal);
    friend bool KParts__FileInfoExtension_IsSignalConnected(const KParts::FileInfoExtension* self, const QMetaMethod* signal);
    friend bool KParts__FileInfoExtension_SuperIsSignalConnected(const KParts::FileInfoExtension* self, const QMetaMethod* signal);
};

#endif
