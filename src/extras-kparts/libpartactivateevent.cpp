#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent
#include <QEvent>
#include <QWidget>
#include <partactivateevent.h>
#include "libpartactivateevent.h"
#include "libpartactivateevent.hxx"

KParts__PartActivateEvent* KParts__PartActivateEvent_new(bool activated, KParts__Part* part, QWidget* widget) {
    return new VirtualKPartsPartActivateEvent(activated, part, widget);
}

bool KParts__PartActivateEvent_Activated(const KParts__PartActivateEvent* self) {
    return self->activated();
}

KParts__Part* KParts__PartActivateEvent_Part(const KParts__PartActivateEvent* self) {
    return self->part();
}

QWidget* KParts__PartActivateEvent_Widget(const KParts__PartActivateEvent* self) {
    return self->widget();
}

bool KParts__PartActivateEvent_Test(const QEvent* event) {
    return KParts::PartActivateEvent::test(event);
}

// Derived class handler implementation
void KParts__PartActivateEvent_SetAccepted(KParts__PartActivateEvent* self, bool accepted) {
    auto* vkpartspartactivateevent = dynamic_cast<VirtualKPartsPartActivateEvent*>(self);
    if (vkpartspartactivateevent && vkpartspartactivateevent->isVirtualKPartsPartActivateEvent) {
        vkpartspartactivateevent->setAccepted(accepted);
    } else {
        self->KParts::PartActivateEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void KParts__PartActivateEvent_QBaseSetAccepted(KParts__PartActivateEvent* self, bool accepted) {
    auto* vkpartspartactivateevent = dynamic_cast<VirtualKPartsPartActivateEvent*>(self);
    if (vkpartspartactivateevent && vkpartspartactivateevent->isVirtualKPartsPartActivateEvent) {
        vkpartspartactivateevent->setKParts__PartActivateEvent_SetAccepted_IsBase(true);
        vkpartspartactivateevent->setAccepted(accepted);
    } else {
        self->KParts::PartActivateEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartActivateEvent_OnSetAccepted(KParts__PartActivateEvent* self, intptr_t slot) {
    auto* vkpartspartactivateevent = dynamic_cast<VirtualKPartsPartActivateEvent*>(self);
    if (vkpartspartactivateevent && vkpartspartactivateevent->isVirtualKPartsPartActivateEvent) {
        vkpartspartactivateevent->setKParts__PartActivateEvent_SetAccepted_Callback(reinterpret_cast<VirtualKPartsPartActivateEvent::KParts__PartActivateEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* KParts__PartActivateEvent_Clone(const KParts__PartActivateEvent* self) {
    auto* vkpartspartactivateevent = const_cast<VirtualKPartsPartActivateEvent*>(dynamic_cast<const VirtualKPartsPartActivateEvent*>(self));
    if (vkpartspartactivateevent && vkpartspartactivateevent->isVirtualKPartsPartActivateEvent) {
        return vkpartspartactivateevent->clone();
    } else {
        return self->KParts::PartActivateEvent::clone();
    }
}

// Base class handler implementation
QEvent* KParts__PartActivateEvent_QBaseClone(const KParts__PartActivateEvent* self) {
    auto* vkpartspartactivateevent = const_cast<VirtualKPartsPartActivateEvent*>(dynamic_cast<const VirtualKPartsPartActivateEvent*>(self));
    if (vkpartspartactivateevent && vkpartspartactivateevent->isVirtualKPartsPartActivateEvent) {
        vkpartspartactivateevent->setKParts__PartActivateEvent_Clone_IsBase(true);
        return vkpartspartactivateevent->clone();
    } else {
        return self->KParts::PartActivateEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__PartActivateEvent_OnClone(const KParts__PartActivateEvent* self, intptr_t slot) {
    auto* vkpartspartactivateevent = const_cast<VirtualKPartsPartActivateEvent*>(dynamic_cast<const VirtualKPartsPartActivateEvent*>(self));
    if (vkpartspartactivateevent && vkpartspartactivateevent->isVirtualKPartsPartActivateEvent) {
        vkpartspartactivateevent->setKParts__PartActivateEvent_Clone_Callback(reinterpret_cast<VirtualKPartsPartActivateEvent::KParts__PartActivateEvent_Clone_Callback>(slot));
    }
}

void KParts__PartActivateEvent_Delete(KParts__PartActivateEvent* self) {
    delete self;
}
