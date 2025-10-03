#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALLISTINGNOTIFICATIONEXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALLISTINGNOTIFICATIONEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ListingNotificationExtension so that we can call protected methods
class VirtualKPartsListingNotificationExtension final : public KParts::ListingNotificationExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsListingNotificationExtension = true;

    // Virtual class public types (including callbacks)
    using KParts__ListingNotificationExtension_Metacall_Callback = int (*)(KParts__ListingNotificationExtension*, int, int, void**);
    using KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback = int (*)();
    using KParts__ListingNotificationExtension_Event_Callback = bool (*)(KParts__ListingNotificationExtension*, QEvent*);
    using KParts__ListingNotificationExtension_EventFilter_Callback = bool (*)(KParts__ListingNotificationExtension*, QObject*, QEvent*);
    using KParts__ListingNotificationExtension_TimerEvent_Callback = void (*)(KParts__ListingNotificationExtension*, QTimerEvent*);
    using KParts__ListingNotificationExtension_ChildEvent_Callback = void (*)(KParts__ListingNotificationExtension*, QChildEvent*);
    using KParts__ListingNotificationExtension_CustomEvent_Callback = void (*)(KParts__ListingNotificationExtension*, QEvent*);
    using KParts__ListingNotificationExtension_ConnectNotify_Callback = void (*)(KParts__ListingNotificationExtension*, QMetaMethod*);
    using KParts__ListingNotificationExtension_DisconnectNotify_Callback = void (*)(KParts__ListingNotificationExtension*, QMetaMethod*);
    using KParts__ListingNotificationExtension_Sender_Callback = QObject* (*)();
    using KParts__ListingNotificationExtension_SenderSignalIndex_Callback = int (*)();
    using KParts__ListingNotificationExtension_Receivers_Callback = int (*)(const KParts__ListingNotificationExtension*, const char*);
    using KParts__ListingNotificationExtension_IsSignalConnected_Callback = bool (*)(const KParts__ListingNotificationExtension*, QMetaMethod*);

  protected:
    // Instance callback storage
    KParts__ListingNotificationExtension_Metacall_Callback kparts__listingnotificationextension_metacall_callback = nullptr;
    KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback kparts__listingnotificationextension_supportednotificationeventtypes_callback = nullptr;
    KParts__ListingNotificationExtension_Event_Callback kparts__listingnotificationextension_event_callback = nullptr;
    KParts__ListingNotificationExtension_EventFilter_Callback kparts__listingnotificationextension_eventfilter_callback = nullptr;
    KParts__ListingNotificationExtension_TimerEvent_Callback kparts__listingnotificationextension_timerevent_callback = nullptr;
    KParts__ListingNotificationExtension_ChildEvent_Callback kparts__listingnotificationextension_childevent_callback = nullptr;
    KParts__ListingNotificationExtension_CustomEvent_Callback kparts__listingnotificationextension_customevent_callback = nullptr;
    KParts__ListingNotificationExtension_ConnectNotify_Callback kparts__listingnotificationextension_connectnotify_callback = nullptr;
    KParts__ListingNotificationExtension_DisconnectNotify_Callback kparts__listingnotificationextension_disconnectnotify_callback = nullptr;
    KParts__ListingNotificationExtension_Sender_Callback kparts__listingnotificationextension_sender_callback = nullptr;
    KParts__ListingNotificationExtension_SenderSignalIndex_Callback kparts__listingnotificationextension_sendersignalindex_callback = nullptr;
    KParts__ListingNotificationExtension_Receivers_Callback kparts__listingnotificationextension_receivers_callback = nullptr;
    KParts__ListingNotificationExtension_IsSignalConnected_Callback kparts__listingnotificationextension_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kparts__listingnotificationextension_metacall_isbase = false;
    mutable bool kparts__listingnotificationextension_supportednotificationeventtypes_isbase = false;
    mutable bool kparts__listingnotificationextension_event_isbase = false;
    mutable bool kparts__listingnotificationextension_eventfilter_isbase = false;
    mutable bool kparts__listingnotificationextension_timerevent_isbase = false;
    mutable bool kparts__listingnotificationextension_childevent_isbase = false;
    mutable bool kparts__listingnotificationextension_customevent_isbase = false;
    mutable bool kparts__listingnotificationextension_connectnotify_isbase = false;
    mutable bool kparts__listingnotificationextension_disconnectnotify_isbase = false;
    mutable bool kparts__listingnotificationextension_sender_isbase = false;
    mutable bool kparts__listingnotificationextension_sendersignalindex_isbase = false;
    mutable bool kparts__listingnotificationextension_receivers_isbase = false;
    mutable bool kparts__listingnotificationextension_issignalconnected_isbase = false;

  public:
    VirtualKPartsListingNotificationExtension(KParts::ReadOnlyPart* parent) : KParts::ListingNotificationExtension(parent) {};

    ~VirtualKPartsListingNotificationExtension() {
        kparts__listingnotificationextension_metacall_callback = nullptr;
        kparts__listingnotificationextension_supportednotificationeventtypes_callback = nullptr;
        kparts__listingnotificationextension_event_callback = nullptr;
        kparts__listingnotificationextension_eventfilter_callback = nullptr;
        kparts__listingnotificationextension_timerevent_callback = nullptr;
        kparts__listingnotificationextension_childevent_callback = nullptr;
        kparts__listingnotificationextension_customevent_callback = nullptr;
        kparts__listingnotificationextension_connectnotify_callback = nullptr;
        kparts__listingnotificationextension_disconnectnotify_callback = nullptr;
        kparts__listingnotificationextension_sender_callback = nullptr;
        kparts__listingnotificationextension_sendersignalindex_callback = nullptr;
        kparts__listingnotificationextension_receivers_callback = nullptr;
        kparts__listingnotificationextension_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__ListingNotificationExtension_Metacall_Callback(KParts__ListingNotificationExtension_Metacall_Callback cb) { kparts__listingnotificationextension_metacall_callback = cb; }
    inline void setKParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback(KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback cb) { kparts__listingnotificationextension_supportednotificationeventtypes_callback = cb; }
    inline void setKParts__ListingNotificationExtension_Event_Callback(KParts__ListingNotificationExtension_Event_Callback cb) { kparts__listingnotificationextension_event_callback = cb; }
    inline void setKParts__ListingNotificationExtension_EventFilter_Callback(KParts__ListingNotificationExtension_EventFilter_Callback cb) { kparts__listingnotificationextension_eventfilter_callback = cb; }
    inline void setKParts__ListingNotificationExtension_TimerEvent_Callback(KParts__ListingNotificationExtension_TimerEvent_Callback cb) { kparts__listingnotificationextension_timerevent_callback = cb; }
    inline void setKParts__ListingNotificationExtension_ChildEvent_Callback(KParts__ListingNotificationExtension_ChildEvent_Callback cb) { kparts__listingnotificationextension_childevent_callback = cb; }
    inline void setKParts__ListingNotificationExtension_CustomEvent_Callback(KParts__ListingNotificationExtension_CustomEvent_Callback cb) { kparts__listingnotificationextension_customevent_callback = cb; }
    inline void setKParts__ListingNotificationExtension_ConnectNotify_Callback(KParts__ListingNotificationExtension_ConnectNotify_Callback cb) { kparts__listingnotificationextension_connectnotify_callback = cb; }
    inline void setKParts__ListingNotificationExtension_DisconnectNotify_Callback(KParts__ListingNotificationExtension_DisconnectNotify_Callback cb) { kparts__listingnotificationextension_disconnectnotify_callback = cb; }
    inline void setKParts__ListingNotificationExtension_Sender_Callback(KParts__ListingNotificationExtension_Sender_Callback cb) { kparts__listingnotificationextension_sender_callback = cb; }
    inline void setKParts__ListingNotificationExtension_SenderSignalIndex_Callback(KParts__ListingNotificationExtension_SenderSignalIndex_Callback cb) { kparts__listingnotificationextension_sendersignalindex_callback = cb; }
    inline void setKParts__ListingNotificationExtension_Receivers_Callback(KParts__ListingNotificationExtension_Receivers_Callback cb) { kparts__listingnotificationextension_receivers_callback = cb; }
    inline void setKParts__ListingNotificationExtension_IsSignalConnected_Callback(KParts__ListingNotificationExtension_IsSignalConnected_Callback cb) { kparts__listingnotificationextension_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKParts__ListingNotificationExtension_Metacall_IsBase(bool value) const { kparts__listingnotificationextension_metacall_isbase = value; }
    inline void setKParts__ListingNotificationExtension_SupportedNotificationEventTypes_IsBase(bool value) const { kparts__listingnotificationextension_supportednotificationeventtypes_isbase = value; }
    inline void setKParts__ListingNotificationExtension_Event_IsBase(bool value) const { kparts__listingnotificationextension_event_isbase = value; }
    inline void setKParts__ListingNotificationExtension_EventFilter_IsBase(bool value) const { kparts__listingnotificationextension_eventfilter_isbase = value; }
    inline void setKParts__ListingNotificationExtension_TimerEvent_IsBase(bool value) const { kparts__listingnotificationextension_timerevent_isbase = value; }
    inline void setKParts__ListingNotificationExtension_ChildEvent_IsBase(bool value) const { kparts__listingnotificationextension_childevent_isbase = value; }
    inline void setKParts__ListingNotificationExtension_CustomEvent_IsBase(bool value) const { kparts__listingnotificationextension_customevent_isbase = value; }
    inline void setKParts__ListingNotificationExtension_ConnectNotify_IsBase(bool value) const { kparts__listingnotificationextension_connectnotify_isbase = value; }
    inline void setKParts__ListingNotificationExtension_DisconnectNotify_IsBase(bool value) const { kparts__listingnotificationextension_disconnectnotify_isbase = value; }
    inline void setKParts__ListingNotificationExtension_Sender_IsBase(bool value) const { kparts__listingnotificationextension_sender_isbase = value; }
    inline void setKParts__ListingNotificationExtension_SenderSignalIndex_IsBase(bool value) const { kparts__listingnotificationextension_sendersignalindex_isbase = value; }
    inline void setKParts__ListingNotificationExtension_Receivers_IsBase(bool value) const { kparts__listingnotificationextension_receivers_isbase = value; }
    inline void setKParts__ListingNotificationExtension_IsSignalConnected_IsBase(bool value) const { kparts__listingnotificationextension_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__listingnotificationextension_metacall_isbase) {
            kparts__listingnotificationextension_metacall_isbase = false;
            return KParts__ListingNotificationExtension::qt_metacall(param1, param2, param3);
        } else if (kparts__listingnotificationextension_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__listingnotificationextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ListingNotificationExtension::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::ListingNotificationExtension::NotificationEventTypes supportedNotificationEventTypes() const override {
        if (kparts__listingnotificationextension_supportednotificationeventtypes_isbase) {
            kparts__listingnotificationextension_supportednotificationeventtypes_isbase = false;
            return KParts__ListingNotificationExtension::supportedNotificationEventTypes();
        } else if (kparts__listingnotificationextension_supportednotificationeventtypes_callback != nullptr) {
            int callback_ret = kparts__listingnotificationextension_supportednotificationeventtypes_callback();
            return static_cast<KParts::ListingNotificationExtension::NotificationEventTypes>(callback_ret);
        } else {
            return KParts__ListingNotificationExtension::supportedNotificationEventTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__listingnotificationextension_event_isbase) {
            kparts__listingnotificationextension_event_isbase = false;
            return KParts__ListingNotificationExtension::event(event);
        } else if (kparts__listingnotificationextension_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__listingnotificationextension_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ListingNotificationExtension::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__listingnotificationextension_eventfilter_isbase) {
            kparts__listingnotificationextension_eventfilter_isbase = false;
            return KParts__ListingNotificationExtension::eventFilter(watched, event);
        } else if (kparts__listingnotificationextension_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kparts__listingnotificationextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__ListingNotificationExtension::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__listingnotificationextension_timerevent_isbase) {
            kparts__listingnotificationextension_timerevent_isbase = false;
            KParts__ListingNotificationExtension::timerEvent(event);
        } else if (kparts__listingnotificationextension_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__listingnotificationextension_timerevent_callback(this, cbval1);
        } else {
            KParts__ListingNotificationExtension::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__listingnotificationextension_childevent_isbase) {
            kparts__listingnotificationextension_childevent_isbase = false;
            KParts__ListingNotificationExtension::childEvent(event);
        } else if (kparts__listingnotificationextension_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__listingnotificationextension_childevent_callback(this, cbval1);
        } else {
            KParts__ListingNotificationExtension::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__listingnotificationextension_customevent_isbase) {
            kparts__listingnotificationextension_customevent_isbase = false;
            KParts__ListingNotificationExtension::customEvent(event);
        } else if (kparts__listingnotificationextension_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__listingnotificationextension_customevent_callback(this, cbval1);
        } else {
            KParts__ListingNotificationExtension::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__listingnotificationextension_connectnotify_isbase) {
            kparts__listingnotificationextension_connectnotify_isbase = false;
            KParts__ListingNotificationExtension::connectNotify(signal);
        } else if (kparts__listingnotificationextension_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__listingnotificationextension_connectnotify_callback(this, cbval1);
        } else {
            KParts__ListingNotificationExtension::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__listingnotificationextension_disconnectnotify_isbase) {
            kparts__listingnotificationextension_disconnectnotify_isbase = false;
            KParts__ListingNotificationExtension::disconnectNotify(signal);
        } else if (kparts__listingnotificationextension_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__listingnotificationextension_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__ListingNotificationExtension::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__listingnotificationextension_sender_isbase) {
            kparts__listingnotificationextension_sender_isbase = false;
            return KParts__ListingNotificationExtension::sender();
        } else if (kparts__listingnotificationextension_sender_callback != nullptr) {
            QObject* callback_ret = kparts__listingnotificationextension_sender_callback();
            return callback_ret;
        } else {
            return KParts__ListingNotificationExtension::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__listingnotificationextension_sendersignalindex_isbase) {
            kparts__listingnotificationextension_sendersignalindex_isbase = false;
            return KParts__ListingNotificationExtension::senderSignalIndex();
        } else if (kparts__listingnotificationextension_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__listingnotificationextension_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ListingNotificationExtension::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__listingnotificationextension_receivers_isbase) {
            kparts__listingnotificationextension_receivers_isbase = false;
            return KParts__ListingNotificationExtension::receivers(signal);
        } else if (kparts__listingnotificationextension_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__listingnotificationextension_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ListingNotificationExtension::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__listingnotificationextension_issignalconnected_isbase) {
            kparts__listingnotificationextension_issignalconnected_isbase = false;
            return KParts__ListingNotificationExtension::isSignalConnected(signal);
        } else if (kparts__listingnotificationextension_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__listingnotificationextension_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ListingNotificationExtension::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KParts__ListingNotificationExtension_TimerEvent(KParts::ListingNotificationExtension* self, QTimerEvent* event);
    friend void KParts__ListingNotificationExtension_QBaseTimerEvent(KParts::ListingNotificationExtension* self, QTimerEvent* event);
    friend void KParts__ListingNotificationExtension_ChildEvent(KParts::ListingNotificationExtension* self, QChildEvent* event);
    friend void KParts__ListingNotificationExtension_QBaseChildEvent(KParts::ListingNotificationExtension* self, QChildEvent* event);
    friend void KParts__ListingNotificationExtension_CustomEvent(KParts::ListingNotificationExtension* self, QEvent* event);
    friend void KParts__ListingNotificationExtension_QBaseCustomEvent(KParts::ListingNotificationExtension* self, QEvent* event);
    friend void KParts__ListingNotificationExtension_ConnectNotify(KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingNotificationExtension_QBaseConnectNotify(KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingNotificationExtension_DisconnectNotify(KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingNotificationExtension_QBaseDisconnectNotify(KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
    friend QObject* KParts__ListingNotificationExtension_Sender(const KParts::ListingNotificationExtension* self);
    friend QObject* KParts__ListingNotificationExtension_QBaseSender(const KParts::ListingNotificationExtension* self);
    friend int KParts__ListingNotificationExtension_SenderSignalIndex(const KParts::ListingNotificationExtension* self);
    friend int KParts__ListingNotificationExtension_QBaseSenderSignalIndex(const KParts::ListingNotificationExtension* self);
    friend int KParts__ListingNotificationExtension_Receivers(const KParts::ListingNotificationExtension* self, const char* signal);
    friend int KParts__ListingNotificationExtension_QBaseReceivers(const KParts::ListingNotificationExtension* self, const char* signal);
    friend bool KParts__ListingNotificationExtension_IsSignalConnected(const KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
    friend bool KParts__ListingNotificationExtension_QBaseIsSignalConnected(const KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
};

#endif
