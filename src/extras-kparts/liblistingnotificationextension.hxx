#pragma once
#ifndef EXTRAS_KPARTS_LIBLISTINGNOTIFICATIONEXTENSION_HXX
#define EXTRAS_KPARTS_LIBLISTINGNOTIFICATIONEXTENSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ListingNotificationExtension
class VirtualKPartsListingNotificationExtension final : public KParts::ListingNotificationExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__ListingNotificationExtension_MetaObject_Callback = QMetaObject* (*)(const KParts__ListingNotificationExtension*);
    using KParts__ListingNotificationExtension_Metacast_Callback = void* (*)(KParts__ListingNotificationExtension*, const char*);
    using KParts__ListingNotificationExtension_Metacall_Callback = int (*)(KParts__ListingNotificationExtension*, int, int, void**);
    using KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback = int (*)(const KParts__ListingNotificationExtension*);
    using KParts__ListingNotificationExtension_Event_Callback = bool (*)(KParts__ListingNotificationExtension*, QEvent*);
    using KParts__ListingNotificationExtension_EventFilter_Callback = bool (*)(KParts__ListingNotificationExtension*, QObject*, QEvent*);
    using KParts__ListingNotificationExtension_TimerEvent_Callback = void (*)(KParts__ListingNotificationExtension*, QTimerEvent*);
    using KParts__ListingNotificationExtension_ChildEvent_Callback = void (*)(KParts__ListingNotificationExtension*, QChildEvent*);
    using KParts__ListingNotificationExtension_CustomEvent_Callback = void (*)(KParts__ListingNotificationExtension*, QEvent*);
    using KParts__ListingNotificationExtension_ConnectNotify_Callback = void (*)(KParts__ListingNotificationExtension*, QMetaMethod*);
    using KParts__ListingNotificationExtension_DisconnectNotify_Callback = void (*)(KParts__ListingNotificationExtension*, QMetaMethod*);
    using KParts::ListingNotificationExtension::isSignalConnected;
    using KParts::ListingNotificationExtension::receivers;
    using KParts::ListingNotificationExtension::sender;
    using KParts::ListingNotificationExtension::senderSignalIndex;

    // Instance callback storage
    KParts__ListingNotificationExtension_MetaObject_Callback kparts__listingnotificationextension_metaobject_callback = nullptr;
    KParts__ListingNotificationExtension_Metacast_Callback kparts__listingnotificationextension_metacast_callback = nullptr;
    KParts__ListingNotificationExtension_Metacall_Callback kparts__listingnotificationextension_metacall_callback = nullptr;
    KParts__ListingNotificationExtension_SupportedNotificationEventTypes_Callback kparts__listingnotificationextension_supportednotificationeventtypes_callback = nullptr;
    KParts__ListingNotificationExtension_Event_Callback kparts__listingnotificationextension_event_callback = nullptr;
    KParts__ListingNotificationExtension_EventFilter_Callback kparts__listingnotificationextension_eventfilter_callback = nullptr;
    KParts__ListingNotificationExtension_TimerEvent_Callback kparts__listingnotificationextension_timerevent_callback = nullptr;
    KParts__ListingNotificationExtension_ChildEvent_Callback kparts__listingnotificationextension_childevent_callback = nullptr;
    KParts__ListingNotificationExtension_CustomEvent_Callback kparts__listingnotificationextension_customevent_callback = nullptr;
    KParts__ListingNotificationExtension_ConnectNotify_Callback kparts__listingnotificationextension_connectnotify_callback = nullptr;
    KParts__ListingNotificationExtension_DisconnectNotify_Callback kparts__listingnotificationextension_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KParts::ListingNotificationExtension {
        using KParts::ListingNotificationExtension::childEvent;
        using KParts::ListingNotificationExtension::connectNotify;
        using KParts::ListingNotificationExtension::customEvent;
        using KParts::ListingNotificationExtension::disconnectNotify;
        using KParts::ListingNotificationExtension::timerEvent;
    };

    VirtualKPartsListingNotificationExtension(KParts::ReadOnlyPart* parent) : KParts::ListingNotificationExtension(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__listingnotificationextension_metaobject_callback) {
            QMetaObject* callback_ret = kparts__listingnotificationextension_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__ListingNotificationExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__listingnotificationextension_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__listingnotificationextension_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ListingNotificationExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__listingnotificationextension_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__listingnotificationextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__ListingNotificationExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::ListingNotificationExtension::NotificationEventTypes supportedNotificationEventTypes() const override {
        if (kparts__listingnotificationextension_supportednotificationeventtypes_callback) {
            int callback_ret = kparts__listingnotificationextension_supportednotificationeventtypes_callback(this);
            return static_cast<KParts::ListingNotificationExtension::NotificationEventTypes>(callback_ret);
        }
        return KParts__ListingNotificationExtension::supportedNotificationEventTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__listingnotificationextension_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__listingnotificationextension_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ListingNotificationExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__listingnotificationextension_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__listingnotificationextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__ListingNotificationExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__listingnotificationextension_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__listingnotificationextension_timerevent_callback(this, cbval1);
            return;
        }
        KParts__ListingNotificationExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__listingnotificationextension_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__listingnotificationextension_childevent_callback(this, cbval1);
            return;
        }
        KParts__ListingNotificationExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__listingnotificationextension_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__listingnotificationextension_customevent_callback(this, cbval1);
            return;
        }
        KParts__ListingNotificationExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__listingnotificationextension_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__listingnotificationextension_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__ListingNotificationExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__listingnotificationextension_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__listingnotificationextension_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__ListingNotificationExtension::disconnectNotify(signal);
    }

    // Friend functions
    friend void KParts__ListingNotificationExtension_SuperTimerEvent(KParts::ListingNotificationExtension* self, QTimerEvent* event);
    friend void KParts__ListingNotificationExtension_SuperChildEvent(KParts::ListingNotificationExtension* self, QChildEvent* event);
    friend void KParts__ListingNotificationExtension_SuperCustomEvent(KParts::ListingNotificationExtension* self, QEvent* event);
    friend void KParts__ListingNotificationExtension_SuperConnectNotify(KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingNotificationExtension_SuperDisconnectNotify(KParts::ListingNotificationExtension* self, const QMetaMethod* signal);
};

#endif
