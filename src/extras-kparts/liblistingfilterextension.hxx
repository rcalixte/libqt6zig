#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALLISTINGFILTEREXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALLISTINGFILTEREXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ListingFilterExtension so that we can call protected methods
class VirtualKPartsListingFilterExtension : public KParts::ListingFilterExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsListingFilterExtension = true;

    // Virtual class public types (including callbacks)
    using KParts__ListingFilterExtension_Metacall_Callback = int (*)(KParts__ListingFilterExtension*, int, int, void**);
    using KParts__ListingFilterExtension_SupportedFilterModes_Callback = int (*)();
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
    using KParts__ListingFilterExtension_Sender_Callback = QObject* (*)();
    using KParts__ListingFilterExtension_SenderSignalIndex_Callback = int (*)();
    using KParts__ListingFilterExtension_Receivers_Callback = int (*)(const KParts__ListingFilterExtension*, const char*);
    using KParts__ListingFilterExtension_IsSignalConnected_Callback = bool (*)(const KParts__ListingFilterExtension*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KParts__ListingFilterExtension_Sender_Callback kparts__listingfilterextension_sender_callback = nullptr;
    KParts__ListingFilterExtension_SenderSignalIndex_Callback kparts__listingfilterextension_sendersignalindex_callback = nullptr;
    KParts__ListingFilterExtension_Receivers_Callback kparts__listingfilterextension_receivers_callback = nullptr;
    KParts__ListingFilterExtension_IsSignalConnected_Callback kparts__listingfilterextension_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kparts__listingfilterextension_metacall_isbase = false;
    mutable bool kparts__listingfilterextension_supportedfiltermodes_isbase = false;
    mutable bool kparts__listingfilterextension_supportsmultiplefilters_isbase = false;
    mutable bool kparts__listingfilterextension_filter_isbase = false;
    mutable bool kparts__listingfilterextension_setfilter_isbase = false;
    mutable bool kparts__listingfilterextension_event_isbase = false;
    mutable bool kparts__listingfilterextension_eventfilter_isbase = false;
    mutable bool kparts__listingfilterextension_timerevent_isbase = false;
    mutable bool kparts__listingfilterextension_childevent_isbase = false;
    mutable bool kparts__listingfilterextension_customevent_isbase = false;
    mutable bool kparts__listingfilterextension_connectnotify_isbase = false;
    mutable bool kparts__listingfilterextension_disconnectnotify_isbase = false;
    mutable bool kparts__listingfilterextension_sender_isbase = false;
    mutable bool kparts__listingfilterextension_sendersignalindex_isbase = false;
    mutable bool kparts__listingfilterextension_receivers_isbase = false;
    mutable bool kparts__listingfilterextension_issignalconnected_isbase = false;

  public:
    VirtualKPartsListingFilterExtension(KParts::ReadOnlyPart* parent) : KParts::ListingFilterExtension(parent) {};

    ~VirtualKPartsListingFilterExtension() {
        kparts__listingfilterextension_metacall_callback = nullptr;
        kparts__listingfilterextension_supportedfiltermodes_callback = nullptr;
        kparts__listingfilterextension_supportsmultiplefilters_callback = nullptr;
        kparts__listingfilterextension_filter_callback = nullptr;
        kparts__listingfilterextension_setfilter_callback = nullptr;
        kparts__listingfilterextension_event_callback = nullptr;
        kparts__listingfilterextension_eventfilter_callback = nullptr;
        kparts__listingfilterextension_timerevent_callback = nullptr;
        kparts__listingfilterextension_childevent_callback = nullptr;
        kparts__listingfilterextension_customevent_callback = nullptr;
        kparts__listingfilterextension_connectnotify_callback = nullptr;
        kparts__listingfilterextension_disconnectnotify_callback = nullptr;
        kparts__listingfilterextension_sender_callback = nullptr;
        kparts__listingfilterextension_sendersignalindex_callback = nullptr;
        kparts__listingfilterextension_receivers_callback = nullptr;
        kparts__listingfilterextension_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__ListingFilterExtension_Metacall_Callback(KParts__ListingFilterExtension_Metacall_Callback cb) { kparts__listingfilterextension_metacall_callback = cb; }
    inline void setKParts__ListingFilterExtension_SupportedFilterModes_Callback(KParts__ListingFilterExtension_SupportedFilterModes_Callback cb) { kparts__listingfilterextension_supportedfiltermodes_callback = cb; }
    inline void setKParts__ListingFilterExtension_SupportsMultipleFilters_Callback(KParts__ListingFilterExtension_SupportsMultipleFilters_Callback cb) { kparts__listingfilterextension_supportsmultiplefilters_callback = cb; }
    inline void setKParts__ListingFilterExtension_Filter_Callback(KParts__ListingFilterExtension_Filter_Callback cb) { kparts__listingfilterextension_filter_callback = cb; }
    inline void setKParts__ListingFilterExtension_SetFilter_Callback(KParts__ListingFilterExtension_SetFilter_Callback cb) { kparts__listingfilterextension_setfilter_callback = cb; }
    inline void setKParts__ListingFilterExtension_Event_Callback(KParts__ListingFilterExtension_Event_Callback cb) { kparts__listingfilterextension_event_callback = cb; }
    inline void setKParts__ListingFilterExtension_EventFilter_Callback(KParts__ListingFilterExtension_EventFilter_Callback cb) { kparts__listingfilterextension_eventfilter_callback = cb; }
    inline void setKParts__ListingFilterExtension_TimerEvent_Callback(KParts__ListingFilterExtension_TimerEvent_Callback cb) { kparts__listingfilterextension_timerevent_callback = cb; }
    inline void setKParts__ListingFilterExtension_ChildEvent_Callback(KParts__ListingFilterExtension_ChildEvent_Callback cb) { kparts__listingfilterextension_childevent_callback = cb; }
    inline void setKParts__ListingFilterExtension_CustomEvent_Callback(KParts__ListingFilterExtension_CustomEvent_Callback cb) { kparts__listingfilterextension_customevent_callback = cb; }
    inline void setKParts__ListingFilterExtension_ConnectNotify_Callback(KParts__ListingFilterExtension_ConnectNotify_Callback cb) { kparts__listingfilterextension_connectnotify_callback = cb; }
    inline void setKParts__ListingFilterExtension_DisconnectNotify_Callback(KParts__ListingFilterExtension_DisconnectNotify_Callback cb) { kparts__listingfilterextension_disconnectnotify_callback = cb; }
    inline void setKParts__ListingFilterExtension_Sender_Callback(KParts__ListingFilterExtension_Sender_Callback cb) { kparts__listingfilterextension_sender_callback = cb; }
    inline void setKParts__ListingFilterExtension_SenderSignalIndex_Callback(KParts__ListingFilterExtension_SenderSignalIndex_Callback cb) { kparts__listingfilterextension_sendersignalindex_callback = cb; }
    inline void setKParts__ListingFilterExtension_Receivers_Callback(KParts__ListingFilterExtension_Receivers_Callback cb) { kparts__listingfilterextension_receivers_callback = cb; }
    inline void setKParts__ListingFilterExtension_IsSignalConnected_Callback(KParts__ListingFilterExtension_IsSignalConnected_Callback cb) { kparts__listingfilterextension_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKParts__ListingFilterExtension_Metacall_IsBase(bool value) const { kparts__listingfilterextension_metacall_isbase = value; }
    inline void setKParts__ListingFilterExtension_SupportedFilterModes_IsBase(bool value) const { kparts__listingfilterextension_supportedfiltermodes_isbase = value; }
    inline void setKParts__ListingFilterExtension_SupportsMultipleFilters_IsBase(bool value) const { kparts__listingfilterextension_supportsmultiplefilters_isbase = value; }
    inline void setKParts__ListingFilterExtension_Filter_IsBase(bool value) const { kparts__listingfilterextension_filter_isbase = value; }
    inline void setKParts__ListingFilterExtension_SetFilter_IsBase(bool value) const { kparts__listingfilterextension_setfilter_isbase = value; }
    inline void setKParts__ListingFilterExtension_Event_IsBase(bool value) const { kparts__listingfilterextension_event_isbase = value; }
    inline void setKParts__ListingFilterExtension_EventFilter_IsBase(bool value) const { kparts__listingfilterextension_eventfilter_isbase = value; }
    inline void setKParts__ListingFilterExtension_TimerEvent_IsBase(bool value) const { kparts__listingfilterextension_timerevent_isbase = value; }
    inline void setKParts__ListingFilterExtension_ChildEvent_IsBase(bool value) const { kparts__listingfilterextension_childevent_isbase = value; }
    inline void setKParts__ListingFilterExtension_CustomEvent_IsBase(bool value) const { kparts__listingfilterextension_customevent_isbase = value; }
    inline void setKParts__ListingFilterExtension_ConnectNotify_IsBase(bool value) const { kparts__listingfilterextension_connectnotify_isbase = value; }
    inline void setKParts__ListingFilterExtension_DisconnectNotify_IsBase(bool value) const { kparts__listingfilterextension_disconnectnotify_isbase = value; }
    inline void setKParts__ListingFilterExtension_Sender_IsBase(bool value) const { kparts__listingfilterextension_sender_isbase = value; }
    inline void setKParts__ListingFilterExtension_SenderSignalIndex_IsBase(bool value) const { kparts__listingfilterextension_sendersignalindex_isbase = value; }
    inline void setKParts__ListingFilterExtension_Receivers_IsBase(bool value) const { kparts__listingfilterextension_receivers_isbase = value; }
    inline void setKParts__ListingFilterExtension_IsSignalConnected_IsBase(bool value) const { kparts__listingfilterextension_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__listingfilterextension_metacall_isbase) {
            kparts__listingfilterextension_metacall_isbase = false;
            return KParts__ListingFilterExtension::qt_metacall(param1, param2, param3);
        } else if (kparts__listingfilterextension_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__listingfilterextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ListingFilterExtension::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::ListingFilterExtension::FilterModes supportedFilterModes() const override {
        if (kparts__listingfilterextension_supportedfiltermodes_isbase) {
            kparts__listingfilterextension_supportedfiltermodes_isbase = false;
            return KParts__ListingFilterExtension::supportedFilterModes();
        } else if (kparts__listingfilterextension_supportedfiltermodes_callback != nullptr) {
            int callback_ret = kparts__listingfilterextension_supportedfiltermodes_callback();
            return static_cast<KParts::ListingFilterExtension::FilterModes>(callback_ret);
        } else {
            return KParts__ListingFilterExtension::supportedFilterModes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsMultipleFilters(KParts::ListingFilterExtension::FilterMode mode) const override {
        if (kparts__listingfilterextension_supportsmultiplefilters_isbase) {
            kparts__listingfilterextension_supportsmultiplefilters_isbase = false;
            return KParts__ListingFilterExtension::supportsMultipleFilters(mode);
        } else if (kparts__listingfilterextension_supportsmultiplefilters_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kparts__listingfilterextension_supportsmultiplefilters_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ListingFilterExtension::supportsMultipleFilters(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant filter(KParts::ListingFilterExtension::FilterMode mode) const override {
        if (kparts__listingfilterextension_filter_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            QVariant* callback_ret = kparts__listingfilterextension_filter_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFilter(KParts::ListingFilterExtension::FilterMode mode, const QVariant& filter) override {
        if (kparts__listingfilterextension_setfilter_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);
            const QVariant& filter_ret = filter;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&filter_ret);

            kparts__listingfilterextension_setfilter_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__listingfilterextension_event_isbase) {
            kparts__listingfilterextension_event_isbase = false;
            return KParts__ListingFilterExtension::event(event);
        } else if (kparts__listingfilterextension_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__listingfilterextension_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ListingFilterExtension::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__listingfilterextension_eventfilter_isbase) {
            kparts__listingfilterextension_eventfilter_isbase = false;
            return KParts__ListingFilterExtension::eventFilter(watched, event);
        } else if (kparts__listingfilterextension_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kparts__listingfilterextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__ListingFilterExtension::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__listingfilterextension_timerevent_isbase) {
            kparts__listingfilterextension_timerevent_isbase = false;
            KParts__ListingFilterExtension::timerEvent(event);
        } else if (kparts__listingfilterextension_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__listingfilterextension_timerevent_callback(this, cbval1);
        } else {
            KParts__ListingFilterExtension::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__listingfilterextension_childevent_isbase) {
            kparts__listingfilterextension_childevent_isbase = false;
            KParts__ListingFilterExtension::childEvent(event);
        } else if (kparts__listingfilterextension_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__listingfilterextension_childevent_callback(this, cbval1);
        } else {
            KParts__ListingFilterExtension::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__listingfilterextension_customevent_isbase) {
            kparts__listingfilterextension_customevent_isbase = false;
            KParts__ListingFilterExtension::customEvent(event);
        } else if (kparts__listingfilterextension_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__listingfilterextension_customevent_callback(this, cbval1);
        } else {
            KParts__ListingFilterExtension::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__listingfilterextension_connectnotify_isbase) {
            kparts__listingfilterextension_connectnotify_isbase = false;
            KParts__ListingFilterExtension::connectNotify(signal);
        } else if (kparts__listingfilterextension_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__listingfilterextension_connectnotify_callback(this, cbval1);
        } else {
            KParts__ListingFilterExtension::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__listingfilterextension_disconnectnotify_isbase) {
            kparts__listingfilterextension_disconnectnotify_isbase = false;
            KParts__ListingFilterExtension::disconnectNotify(signal);
        } else if (kparts__listingfilterextension_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__listingfilterextension_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__ListingFilterExtension::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__listingfilterextension_sender_isbase) {
            kparts__listingfilterextension_sender_isbase = false;
            return KParts__ListingFilterExtension::sender();
        } else if (kparts__listingfilterextension_sender_callback != nullptr) {
            QObject* callback_ret = kparts__listingfilterextension_sender_callback();
            return callback_ret;
        } else {
            return KParts__ListingFilterExtension::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__listingfilterextension_sendersignalindex_isbase) {
            kparts__listingfilterextension_sendersignalindex_isbase = false;
            return KParts__ListingFilterExtension::senderSignalIndex();
        } else if (kparts__listingfilterextension_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__listingfilterextension_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ListingFilterExtension::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__listingfilterextension_receivers_isbase) {
            kparts__listingfilterextension_receivers_isbase = false;
            return KParts__ListingFilterExtension::receivers(signal);
        } else if (kparts__listingfilterextension_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__listingfilterextension_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ListingFilterExtension::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__listingfilterextension_issignalconnected_isbase) {
            kparts__listingfilterextension_issignalconnected_isbase = false;
            return KParts__ListingFilterExtension::isSignalConnected(signal);
        } else if (kparts__listingfilterextension_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__listingfilterextension_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ListingFilterExtension::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KParts__ListingFilterExtension_TimerEvent(KParts::ListingFilterExtension* self, QTimerEvent* event);
    friend void KParts__ListingFilterExtension_QBaseTimerEvent(KParts::ListingFilterExtension* self, QTimerEvent* event);
    friend void KParts__ListingFilterExtension_ChildEvent(KParts::ListingFilterExtension* self, QChildEvent* event);
    friend void KParts__ListingFilterExtension_QBaseChildEvent(KParts::ListingFilterExtension* self, QChildEvent* event);
    friend void KParts__ListingFilterExtension_CustomEvent(KParts::ListingFilterExtension* self, QEvent* event);
    friend void KParts__ListingFilterExtension_QBaseCustomEvent(KParts::ListingFilterExtension* self, QEvent* event);
    friend void KParts__ListingFilterExtension_ConnectNotify(KParts::ListingFilterExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingFilterExtension_QBaseConnectNotify(KParts::ListingFilterExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingFilterExtension_DisconnectNotify(KParts::ListingFilterExtension* self, const QMetaMethod* signal);
    friend void KParts__ListingFilterExtension_QBaseDisconnectNotify(KParts::ListingFilterExtension* self, const QMetaMethod* signal);
    friend QObject* KParts__ListingFilterExtension_Sender(const KParts::ListingFilterExtension* self);
    friend QObject* KParts__ListingFilterExtension_QBaseSender(const KParts::ListingFilterExtension* self);
    friend int KParts__ListingFilterExtension_SenderSignalIndex(const KParts::ListingFilterExtension* self);
    friend int KParts__ListingFilterExtension_QBaseSenderSignalIndex(const KParts::ListingFilterExtension* self);
    friend int KParts__ListingFilterExtension_Receivers(const KParts::ListingFilterExtension* self, const char* signal);
    friend int KParts__ListingFilterExtension_QBaseReceivers(const KParts::ListingFilterExtension* self, const char* signal);
    friend bool KParts__ListingFilterExtension_IsSignalConnected(const KParts::ListingFilterExtension* self, const QMetaMethod* signal);
    friend bool KParts__ListingFilterExtension_QBaseIsSignalConnected(const KParts::ListingFilterExtension* self, const QMetaMethod* signal);
};

#endif
