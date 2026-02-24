#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ListingFilterExtension
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <listingfilterextension.h>
#include "liblistingfilterextension.h"
#include "liblistingfilterextension.hxx"

KParts__ListingFilterExtension* KParts__ListingFilterExtension_new(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsListingFilterExtension(parent);
}

QMetaObject* KParts__ListingFilterExtension_MetaObject(const KParts__ListingFilterExtension* self) {
    auto* vkparts__listingfilterextension = dynamic_cast<const VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKPartsListingFilterExtension*)self)->metaObject();
    }
}

void* KParts__ListingFilterExtension_Metacast(KParts__ListingFilterExtension* self, const char* param1) {
    auto* vkparts__listingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->qt_metacast(param1);
    }
}

int KParts__ListingFilterExtension_Metacall(KParts__ListingFilterExtension* self, int param1, int param2, void** param3) {
    auto* vkparts__listingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

KParts__ListingFilterExtension* KParts__ListingFilterExtension_ChildObject(QObject* obj) {
    return KParts::ListingFilterExtension::childObject(obj);
}

int KParts__ListingFilterExtension_SupportedFilterModes(const KParts__ListingFilterExtension* self) {
    auto* vkparts__listingfilterextension = dynamic_cast<const VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        return static_cast<int>(self->supportedFilterModes());
    } else {
        return static_cast<int>(((VirtualKPartsListingFilterExtension*)self)->supportedFilterModes());
    }
}

bool KParts__ListingFilterExtension_SupportsMultipleFilters(const KParts__ListingFilterExtension* self, int mode) {
    auto* vkparts__listingfilterextension = dynamic_cast<const VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        return self->supportsMultipleFilters(static_cast<KParts::ListingFilterExtension::FilterMode>(mode));
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->supportsMultipleFilters(static_cast<KParts::ListingFilterExtension::FilterMode>(mode));
    }
}

QVariant* KParts__ListingFilterExtension_Filter(const KParts__ListingFilterExtension* self, int mode) {
    auto* vkparts__listingfilterextension = dynamic_cast<const VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        return new QVariant(vkparts__listingfilterextension->filter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode)));
    } else {
        return new QVariant(((VirtualKPartsListingFilterExtension*)self)->filter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode)));
    }
}

void KParts__ListingFilterExtension_SetFilter(KParts__ListingFilterExtension* self, int mode, const QVariant* filter) {
    auto* vkparts__listingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkparts__listingfilterextension && vkparts__listingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkparts__listingfilterextension->setFilter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode), *filter);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->setFilter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode), *filter);
    }
}

// Base class handler implementation
QMetaObject* KParts__ListingFilterExtension_SuperMetaObject(const KParts__ListingFilterExtension* self) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_MetaObject_IsBase(true);
        return (QMetaObject*)vkpartslistingfilterextension->metaObject();
    } else {
        return (QMetaObject*)self->KParts::ListingFilterExtension::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnMetaObject(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_MetaObject_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KParts__ListingFilterExtension_SuperMetacast(KParts__ListingFilterExtension* self, const char* param1) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Metacast_IsBase(true);
        return vkpartslistingfilterextension->qt_metacast(param1);
    } else {
        return self->KParts::ListingFilterExtension::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnMetacast(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Metacast_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__ListingFilterExtension_SuperMetacall(KParts__ListingFilterExtension* self, int param1, int param2, void** param3) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Metacall_IsBase(true);
        return vkpartslistingfilterextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::ListingFilterExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnMetacall(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Metacall_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__ListingFilterExtension_SuperSupportedFilterModes(const KParts__ListingFilterExtension* self) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SupportedFilterModes_IsBase(true);
        return static_cast<int>(vkpartslistingfilterextension->supportedFilterModes());
    } else {
        return static_cast<int>(self->KParts::ListingFilterExtension::supportedFilterModes());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSupportedFilterModes(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SupportedFilterModes_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SupportedFilterModes_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperSupportsMultipleFilters(const KParts__ListingFilterExtension* self, int mode) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SupportsMultipleFilters_IsBase(true);
        return vkpartslistingfilterextension->supportsMultipleFilters(static_cast<KParts::ListingFilterExtension::FilterMode>(mode));
    } else {
        return self->KParts::ListingFilterExtension::supportsMultipleFilters(static_cast<KParts::ListingFilterExtension::FilterMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSupportsMultipleFilters(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SupportsMultipleFilters_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SupportsMultipleFilters_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KParts__ListingFilterExtension_SuperFilter(const KParts__ListingFilterExtension* self, int mode) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Filter_IsBase(true);
        return new QVariant(vkpartslistingfilterextension->filter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode)));
    } else {
        return new QVariant(((VirtualKPartsListingFilterExtension*)self)->filter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode)));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnFilter(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Filter_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Filter_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperSetFilter(KParts__ListingFilterExtension* self, int mode, const QVariant* filter) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SetFilter_IsBase(true);
        vkpartslistingfilterextension->setFilter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode), *filter);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->setFilter(static_cast<KParts::ListingFilterExtension::FilterMode>(mode), *filter);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSetFilter(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SetFilter_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SetFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ListingFilterExtension_Event(KParts__ListingFilterExtension* self, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        return vkpartslistingfilterextension->event(event);
    } else {
        return self->KParts::ListingFilterExtension::event(event);
    }
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperEvent(KParts__ListingFilterExtension* self, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Event_IsBase(true);
        return vkpartslistingfilterextension->event(event);
    } else {
        return self->KParts::ListingFilterExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Event_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ListingFilterExtension_EventFilter(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        return vkpartslistingfilterextension->eventFilter(watched, event);
    } else {
        return self->KParts::ListingFilterExtension::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperEventFilter(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_EventFilter_IsBase(true);
        return vkpartslistingfilterextension->eventFilter(watched, event);
    } else {
        return self->KParts::ListingFilterExtension::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnEventFilter(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_EventFilter_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingFilterExtension_TimerEvent(KParts__ListingFilterExtension* self, QTimerEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->timerEvent(event);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperTimerEvent(KParts__ListingFilterExtension* self, QTimerEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_TimerEvent_IsBase(true);
        vkpartslistingfilterextension->timerEvent(event);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnTimerEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_TimerEvent_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingFilterExtension_ChildEvent(KParts__ListingFilterExtension* self, QChildEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->childEvent(event);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperChildEvent(KParts__ListingFilterExtension* self, QChildEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_ChildEvent_IsBase(true);
        vkpartslistingfilterextension->childEvent(event);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnChildEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_ChildEvent_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingFilterExtension_CustomEvent(KParts__ListingFilterExtension* self, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->customEvent(event);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperCustomEvent(KParts__ListingFilterExtension* self, QEvent* event) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_CustomEvent_IsBase(true);
        vkpartslistingfilterextension->customEvent(event);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnCustomEvent(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_CustomEvent_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingFilterExtension_ConnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperConnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_ConnectNotify_IsBase(true);
        vkpartslistingfilterextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnConnectNotify(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ListingFilterExtension_DisconnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ListingFilterExtension_SuperDisconnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_DisconnectNotify_IsBase(true);
        vkpartslistingfilterextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsListingFilterExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnDisconnectNotify(KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = dynamic_cast<VirtualKPartsListingFilterExtension*>(self);
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__ListingFilterExtension_Sender(const KParts__ListingFilterExtension* self) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        return vkpartslistingfilterextension->sender();
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__ListingFilterExtension_SuperSender(const KParts__ListingFilterExtension* self) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Sender_IsBase(true);
        return vkpartslistingfilterextension->sender();
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSender(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Sender_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ListingFilterExtension_SenderSignalIndex(const KParts__ListingFilterExtension* self) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        return vkpartslistingfilterextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__ListingFilterExtension_SuperSenderSignalIndex(const KParts__ListingFilterExtension* self) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SenderSignalIndex_IsBase(true);
        return vkpartslistingfilterextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnSenderSignalIndex(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ListingFilterExtension_Receivers(const KParts__ListingFilterExtension* self, const char* signal) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        return vkpartslistingfilterextension->receivers(signal);
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__ListingFilterExtension_SuperReceivers(const KParts__ListingFilterExtension* self, const char* signal) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Receivers_IsBase(true);
        return vkpartslistingfilterextension->receivers(signal);
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnReceivers(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_Receivers_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ListingFilterExtension_IsSignalConnected(const KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        return vkpartslistingfilterextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__ListingFilterExtension_SuperIsSignalConnected(const KParts__ListingFilterExtension* self, const QMetaMethod* signal) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_IsSignalConnected_IsBase(true);
        return vkpartslistingfilterextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsListingFilterExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ListingFilterExtension_OnIsSignalConnected(const KParts__ListingFilterExtension* self, intptr_t slot) {
    auto* vkpartslistingfilterextension = const_cast<VirtualKPartsListingFilterExtension*>(dynamic_cast<const VirtualKPartsListingFilterExtension*>(self));
    if (vkpartslistingfilterextension && vkpartslistingfilterextension->isVirtualKPartsListingFilterExtension) {
        vkpartslistingfilterextension->setKParts__ListingFilterExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsListingFilterExtension::KParts__ListingFilterExtension_IsSignalConnected_Callback>(slot));
    }
}

void KParts__ListingFilterExtension_Delete(KParts__ListingFilterExtension* self) {
    delete self;
}
