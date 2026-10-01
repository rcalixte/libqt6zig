#pragma once
#ifndef EXTRAS_KPARTS_LIBLISTINGFILTEREXTENSION_HXX
#define EXTRAS_KPARTS_LIBLISTINGFILTEREXTENSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ListingFilterExtension
class VirtualKPartsListingFilterExtension : public KParts::ListingFilterExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__ListingFilterExtension_MetaObject_Callback = QMetaObject* (*)(const KParts__ListingFilterExtension*);
    using KParts__ListingFilterExtension_Metacast_Callback = void* (*)(KParts__ListingFilterExtension*, const char*);
    using KParts__ListingFilterExtension_Metacall_Callback = int (*)(KParts__ListingFilterExtension*, int, int, void**);
    using KParts__ListingFilterExtension_SupportedFilterModes_Callback = int (*)(const KParts__ListingFilterExtension*);
    using KParts__ListingFilterExtension_SupportsMultipleFilters_Callback = bool (*)(const KParts__ListingFilterExtension*, int);
    using KParts__ListingFilterExtension_Filter_Callback = QVariant* (*)(const KParts__ListingFilterExtension*, int);
    using KParts__ListingFilterExtension_SetFilter_Callback = void (*)(KParts__ListingFilterExtension*, int, QVariant*);
    using KParts__ListingFilterExtension_Event_Callback = bool (*)(KParts__ListingFilterExtension*, QEvent*);
    using KParts__ListingFilterExtension_EventFilter_Callback = bool (*)(KParts__ListingFilterExtension*, QObject*, QEvent*);
    using KParts__ListingFilterExtension_TimerEvent_Callback = void (*)(KParts__ListingFilterExtension*, QTimerEvent*);
    using KParts__ListingFilterExtension_ChildEvent_Callback = void (*)(KParts__ListingFilterExtension*, QChildEvent*);
    using KParts__ListingFilterExtension_CustomEvent_Callback = void (*)(KParts__ListingFilterExtension*, QEvent*);
    using KParts__ListingFilterExtension_ConnectNotify_Callback = void (*)(KParts__ListingFilterExtension*, QMetaMethod*);
    using KParts__ListingFilterExtension_DisconnectNotify_Callback = void (*)(KParts__ListingFilterExtension*, QMetaMethod*);
    using KParts::ListingFilterExtension::isSignalConnected;
    using KParts::ListingFilterExtension::receivers;
    using KParts::ListingFilterExtension::sender;
    using KParts::ListingFilterExtension::senderSignalIndex;

    // Instance callback storage
    KParts__ListingFilterExtension_MetaObject_Callback kparts__listingfilterextension_metaobject_callback = nullptr;
    KParts__ListingFilterExtension_Metacast_Callback kparts__listingfilterextension_metacast_callback = nullptr;
    KParts__ListingFilterExtension_Metacall_Callback kparts__listingfilterextension_metacall_callback = nullptr;
    KParts__ListingFilterExtension_SupportedFilterModes_Callback kparts__listingfilterextension_supportedfiltermodes_callback = nullptr;
    KParts__ListingFilterExtension_SupportsMultipleFilters_Callback kparts__listingfilterextension_supportsmultiplefilters_callback = nullptr;
    KParts__ListingFilterExtension_Filter_Callback kparts__listingfilterextension_filter_callback = nullptr;
    KParts__ListingFilterExtension_SetFilter_Callback kparts__listingfilterextension_setfilter_callback = nullptr;
    KParts__ListingFilterExtension_Event_Callback kparts__listingfilterextension_event_callback = nullptr;
    KParts__ListingFilterExtension_EventFilter_Callback kparts__listingfilterextension_eventfilter_callback = nullptr;
    KParts__ListingFilterExtension_TimerEvent_Callback kparts__listingfilterextension_timerevent_callback = nullptr;
    KParts__ListingFilterExtension_ChildEvent_Callback kparts__listingfilterextension_childevent_callback = nullptr;
    KParts__ListingFilterExtension_CustomEvent_Callback kparts__listingfilterextension_customevent_callback = nullptr;
    KParts__ListingFilterExtension_ConnectNotify_Callback kparts__listingfilterextension_connectnotify_callback = nullptr;
    KParts__ListingFilterExtension_DisconnectNotify_Callback kparts__listingfilterextension_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KParts::ListingFilterExtension {
        using KParts::ListingFilterExtension::childEvent;
        using KParts::ListingFilterExtension::connectNotify;
        using KParts::ListingFilterExtension::customEvent;
        using KParts::ListingFilterExtension::disconnectNotify;
        using KParts::ListingFilterExtension::timerEvent;
    };

    VirtualKPartsListingFilterExtension(KParts::ReadOnlyPart* parent) : KParts::ListingFilterExtension(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__listingfilterextension_metaobject_callback) {
            QMetaObject* callback_ret = kparts__listingfilterextension_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__ListingFilterExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__listingfilterextension_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__listingfilterextension_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ListingFilterExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__listingfilterextension_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__listingfilterextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__ListingFilterExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::ListingFilterExtension::FilterModes supportedFilterModes() const override {
        if (kparts__listingfilterextension_supportedfiltermodes_callback) {
            int callback_ret = kparts__listingfilterextension_supportedfiltermodes_callback(this);
            return static_cast<KParts::ListingFilterExtension::FilterModes>(callback_ret);
        }
        return KParts__ListingFilterExtension::supportedFilterModes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsMultipleFilters(KParts::ListingFilterExtension::FilterMode mode) const override {
        if (kparts__listingfilterextension_supportsmultiplefilters_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = kparts__listingfilterextension_supportsmultiplefilters_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ListingFilterExtension::supportsMultipleFilters(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant filter(KParts::ListingFilterExtension::FilterMode mode) const override {
        if (kparts__listingfilterextension_filter_callback) {
            int cbval1 = static_cast<int>(mode);
            QVariant* callback_ret = kparts__listingfilterextension_filter_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KParts::ListingFilterExtension::filter called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFilter(KParts::ListingFilterExtension::FilterMode mode, const QVariant& filter) override {
        if (kparts__listingfilterextension_setfilter_callback) {
            int cbval1 = static_cast<int>(mode);
            const QVariant& filter_ret = filter;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&filter_ret);
            kparts__listingfilterextension_setfilter_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KParts::ListingFilterExtension::setFilter called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__listingfilterextension_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__listingfilterextension_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__ListingFilterExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__listingfilterextension_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__listingfilterextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__ListingFilterExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__listingfilterextension_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__listingfilterextension_timerevent_callback(this, cbval1);
            return;
        }
        KParts__ListingFilterExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__listingfilterextension_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__listingfilterextension_childevent_callback(this, cbval1);
            return;
        }
        KParts__ListingFilterExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__listingfilterextension_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__listingfilterextension_customevent_callback(this, cbval1);
            return;
        }
        KParts__ListingFilterExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__listingfilterextension_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__listingfilterextension_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__ListingFilterExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__listingfilterextension_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__listingfilterextension_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__ListingFilterExtension::disconnectNotify(signal);
    }

    // Friend functions
    friend void KParts__ListingFilterExtension_SuperTimerEvent(KParts::ListingFilterExtension* self, QTimerEvent* event);
    friend void KParts__ListingFilterExtension_SuperChildEvent(KParts::ListingFilterExtension* self, QChildEvent* event);
    friend void KParts__ListingFilterExtension_SuperCustomEvent(KParts::ListingFilterExtension* self, QEvent* event);
    friend void KParts__ListingFilterExtension_SuperConnectNotify(KParts::ListingFilterExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingFilterExtension_SuperDisconnectNotify(KParts::ListingFilterExtension* self, const QMetaMethod* signal);
};

#endif
