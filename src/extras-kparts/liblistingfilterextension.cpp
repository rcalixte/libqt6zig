#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ListingFilterExtension
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <listingfilterextension.h>
#include "liblistingfilterextension.h"
#include "liblistingfilterextension.hxx"

KParts__ListingFilterExtension* KParts__ListingFilterExtension_new(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsListingFilterExtension(parent);
}

QMetaObject* KParts__ListingFilterExtension_MetaObject(const KParts__ListingFilterExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__ListingFilterExtension_Metacast(KParts__ListingFilterExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__ListingFilterExtension_Metacall(KParts__ListingFilterExtension* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__ListingFilterExtension_Tr(const char* s) {
    auto _ret = KParts::ListingFilterExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KParts__ListingFilterExtension* KParts__ListingFilterExtension_ChildObject(QObject* obj) {
    return KParts::ListingFilterExtension::childObject(obj);
}

int KParts__ListingFilterExtension_SupportedFilterModes(const KParts__ListingFilterExtension* self) {
    return static_cast<int>(self->supportedFilterModes());
}

bool KParts__ListingFilterExtension_SupportsMultipleFilters(const KParts__ListingFilterExtension* self, int mode) {
    return self->supportsMultipleFilters(static_cast<KParts::ListingFilterExtension::FilterMode>(mode));
}

QVariant* KParts__ListingFilterExtension_Filter(const KParts__ListingFilterExtension* self, int mode) {
    return new QVariant(self->filter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode)));
}

void KParts__ListingFilterExtension_SetFilter(KParts__ListingFilterExtension* self, int mode, const QVariant* filter) {
    self->setFilter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode), *filter);
}

libqt_string KParts__ListingFilterExtension_Tr2(const char* s, const char* c) {
    auto _ret = KParts::ListingFilterExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__ListingFilterExtension_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::ListingFilterExtension::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* KParts__ListingFilterExtension_SuperMetaObject(const KParts__ListingFilterExtension* self) {
    return (QMetaObject*)self->KParts::ListingFilterExtension::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnMetaObject(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self)))
        vkpartslistingfilterextension->kparts__listingfilterextension_metaobject_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__ListingFilterExtension_SuperMetacast(KParts__ListingFilterExtension* self, const char* param1) {
    return self->KParts::ListingFilterExtension::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnMetacast(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_metacast_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__ListingFilterExtension_SuperMetacall(KParts__ListingFilterExtension* self, int param1, int param2, void** param3) {
    return self->KParts::ListingFilterExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnMetacall(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_metacall_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Metacall_Callback>(slot);
}

// Base class handler implementation
int KParts__ListingFilterExtension_SuperSupportedFilterModes(const KParts__ListingFilterExtension* self) {
    return static_cast<int>(self->KParts::ListingFilterExtension::supportedFilterModes());
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSupportedFilterModes(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self)))
        vkpartslistingfilterextension->kparts__listingfilterextension_supportedfiltermodes_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SupportedFilterModes_Callback>(slot);
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperSupportsMultipleFilters(const KParts__ListingFilterExtension* self, int mode) {
    return self->KParts::ListingFilterExtension::supportsMultipleFilters(static_cast<KParts::ListingFilterExtension::FilterMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSupportsMultipleFilters(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self)))
        vkpartslistingfilterextension->kparts__listingfilterextension_supportsmultiplefilters_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SupportsMultipleFilters_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnFilter(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self)))
        vkpartslistingfilterextension->kparts__listingfilterextension_filter_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Filter_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSetFilter(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_setfilter_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SetFilter_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ListingFilterExtension_Event(KParts__ListingFilterExtension* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperEvent(KParts__ListingFilterExtension* self, QEvent* event) {
    return self->KParts::ListingFilterExtension::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_event_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Event_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ListingFilterExtension_EventFilter(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperEventFilter(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event) {
    return self->KParts::ListingFilterExtension::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnEventFilter(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_eventfilter_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingFilterExtension_TimerEvent(KParts__ListingFilterExtension* self, QTimerEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension) {
        vkpartslistingfilterextension->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperTimerEvent(KParts__ListingFilterExtension* self, QTimerEvent* event) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self)) {
        vkpartslistingfilterextension->KParts::ListingFilterExtension::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnTimerEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_timerevent_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingFilterExtension_ChildEvent(KParts__ListingFilterExtension* self, QChildEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension) {
        vkpartslistingfilterextension->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperChildEvent(KParts__ListingFilterExtension* self, QChildEvent* event) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self)) {
        vkpartslistingfilterextension->KParts::ListingFilterExtension::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnChildEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_childevent_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingFilterExtension_CustomEvent(KParts__ListingFilterExtension* self, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension) {
        vkpartslistingfilterextension->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperCustomEvent(KParts__ListingFilterExtension* self, QEvent* event) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self)) {
        vkpartslistingfilterextension->KParts::ListingFilterExtension::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnCustomEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_customevent_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingFilterExtension_ConnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension) {
        vkpartslistingfilterextension->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperConnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self)) {
        vkpartslistingfilterextension->KParts::ListingFilterExtension::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnConnectNotify(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_connectnotify_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__ListingFilterExtension_DisconnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension) {
        vkpartslistingfilterextension->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperDisconnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self)) {
        vkpartslistingfilterextension->KParts::ListingFilterExtension::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ListingFilterExtension::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnDisconnectNotify(KParts__ListingFilterExtension* self, intptr_t slot) {
    if (auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self))
        vkpartslistingfilterextension->kparts__listingfilterextension_disconnectnotify_callback = reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KParts__ListingFilterExtension_Sender(const KParts__ListingFilterExtension* self) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self))) {
        return vkpartslistingfilterextension->VirtualKPartsListingFilterExtension::sender();
    } else
        qFatal("Error: Protected method KParts::ListingFilterExtension::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ListingFilterExtension_SenderSignalIndex(const KParts__ListingFilterExtension* self) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self))) {
        return vkpartslistingfilterextension->VirtualKPartsListingFilterExtension::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::ListingFilterExtension::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ListingFilterExtension_Receivers(const KParts__ListingFilterExtension* self, const char* signal) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self))) {
        return vkpartslistingfilterextension->VirtualKPartsListingFilterExtension::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::ListingFilterExtension::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__ListingFilterExtension_IsSignalConnected(const KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    if (auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self))) {
        return vkpartslistingfilterextension->VirtualKPartsListingFilterExtension::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::ListingFilterExtension::isSignalConnected called without a directly constructed type");
}

void KParts__ListingFilterExtension_Delete(KParts__ListingFilterExtension* self) {
    delete self;
}
