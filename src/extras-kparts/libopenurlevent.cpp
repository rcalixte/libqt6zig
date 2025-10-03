#include <KParts/OpenUrlArguments>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__OpenUrlEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QEvent>
#include <QUrl>
#include <openurlevent.h>
#include "libopenurlevent.h"
#include "libopenurlevent.hxx"

KParts__OpenUrlEvent* KParts__OpenUrlEvent_new(KParts__ReadOnlyPart* part, const QUrl* url) {
    return new VirtualKPartsOpenUrlEvent(part, *url);
}

KParts__OpenUrlEvent* KParts__OpenUrlEvent_new2(KParts__ReadOnlyPart* part, const QUrl* url, const KParts__OpenUrlArguments* args) {
    return new VirtualKPartsOpenUrlEvent(part, *url, *args);
}

KParts__ReadOnlyPart* KParts__OpenUrlEvent_Part(const KParts__OpenUrlEvent* self) {
    return self->part();
}

QUrl* KParts__OpenUrlEvent_Url(const KParts__OpenUrlEvent* self) {
    return new QUrl(self->url());
}

KParts__OpenUrlArguments* KParts__OpenUrlEvent_Arguments(const KParts__OpenUrlEvent* self) {
    return new KParts::OpenUrlArguments(self->arguments());
}

bool KParts__OpenUrlEvent_Test(const QEvent* event) {
    return KParts::OpenUrlEvent::test(event);
}

// Derived class handler implementation
void KParts__OpenUrlEvent_SetAccepted(KParts__OpenUrlEvent* self, bool accepted) {
    auto* vkpartsopenurlevent = dynamic_cast<VirtualKPartsOpenUrlEvent*>(self);
    if (vkpartsopenurlevent && vkpartsopenurlevent->isVirtualKPartsOpenUrlEvent) {
        vkpartsopenurlevent->setAccepted(accepted);
    } else {
        self->KParts::OpenUrlEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void KParts__OpenUrlEvent_QBaseSetAccepted(KParts__OpenUrlEvent* self, bool accepted) {
    auto* vkpartsopenurlevent = dynamic_cast<VirtualKPartsOpenUrlEvent*>(self);
    if (vkpartsopenurlevent && vkpartsopenurlevent->isVirtualKPartsOpenUrlEvent) {
        vkpartsopenurlevent->setKParts__OpenUrlEvent_SetAccepted_IsBase(true);
        vkpartsopenurlevent->setAccepted(accepted);
    } else {
        self->KParts::OpenUrlEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__OpenUrlEvent_OnSetAccepted(KParts__OpenUrlEvent* self, intptr_t slot) {
    auto* vkpartsopenurlevent = dynamic_cast<VirtualKPartsOpenUrlEvent*>(self);
    if (vkpartsopenurlevent && vkpartsopenurlevent->isVirtualKPartsOpenUrlEvent) {
        vkpartsopenurlevent->setKParts__OpenUrlEvent_SetAccepted_Callback(reinterpret_cast<VirtualKPartsOpenUrlEvent::KParts__OpenUrlEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* KParts__OpenUrlEvent_Clone(const KParts__OpenUrlEvent* self) {
    auto* vkpartsopenurlevent = const_cast<VirtualKPartsOpenUrlEvent*>(dynamic_cast<const VirtualKPartsOpenUrlEvent*>(self));
    if (vkpartsopenurlevent && vkpartsopenurlevent->isVirtualKPartsOpenUrlEvent) {
        return vkpartsopenurlevent->clone();
    } else {
        return self->KParts::OpenUrlEvent::clone();
    }
}

// Base class handler implementation
QEvent* KParts__OpenUrlEvent_QBaseClone(const KParts__OpenUrlEvent* self) {
    auto* vkpartsopenurlevent = const_cast<VirtualKPartsOpenUrlEvent*>(dynamic_cast<const VirtualKPartsOpenUrlEvent*>(self));
    if (vkpartsopenurlevent && vkpartsopenurlevent->isVirtualKPartsOpenUrlEvent) {
        vkpartsopenurlevent->setKParts__OpenUrlEvent_Clone_IsBase(true);
        return vkpartsopenurlevent->clone();
    } else {
        return self->KParts::OpenUrlEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__OpenUrlEvent_OnClone(const KParts__OpenUrlEvent* self, intptr_t slot) {
    auto* vkpartsopenurlevent = const_cast<VirtualKPartsOpenUrlEvent*>(dynamic_cast<const VirtualKPartsOpenUrlEvent*>(self));
    if (vkpartsopenurlevent && vkpartsopenurlevent->isVirtualKPartsOpenUrlEvent) {
        vkpartsopenurlevent->setKParts__OpenUrlEvent_Clone_Callback(reinterpret_cast<VirtualKPartsOpenUrlEvent::KParts__OpenUrlEvent_Clone_Callback>(slot));
    }
}

void KParts__OpenUrlEvent_Delete(KParts__OpenUrlEvent* self) {
    delete self;
}
