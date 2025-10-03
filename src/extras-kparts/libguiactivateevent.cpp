#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent
#include <QEvent>
#include <guiactivateevent.h>
#include "libguiactivateevent.h"
#include "libguiactivateevent.hxx"

KParts__GUIActivateEvent* KParts__GUIActivateEvent_new(bool activated) {
    return new VirtualKPartsGUIActivateEvent(activated);
}

bool KParts__GUIActivateEvent_Activated(const KParts__GUIActivateEvent* self) {
    return self->activated();
}

bool KParts__GUIActivateEvent_Test(const QEvent* event) {
    return KParts::GUIActivateEvent::test(event);
}

// Derived class handler implementation
void KParts__GUIActivateEvent_SetAccepted(KParts__GUIActivateEvent* self, bool accepted) {
    auto* vkpartsguiactivateevent = dynamic_cast<VirtualKPartsGUIActivateEvent*>(self);
    if (vkpartsguiactivateevent && vkpartsguiactivateevent->isVirtualKPartsGUIActivateEvent) {
        vkpartsguiactivateevent->setAccepted(accepted);
    } else {
        self->KParts::GUIActivateEvent::setAccepted(accepted);
    }
}

// Base class handler implementation
void KParts__GUIActivateEvent_QBaseSetAccepted(KParts__GUIActivateEvent* self, bool accepted) {
    auto* vkpartsguiactivateevent = dynamic_cast<VirtualKPartsGUIActivateEvent*>(self);
    if (vkpartsguiactivateevent && vkpartsguiactivateevent->isVirtualKPartsGUIActivateEvent) {
        vkpartsguiactivateevent->setKParts__GUIActivateEvent_SetAccepted_IsBase(true);
        vkpartsguiactivateevent->setAccepted(accepted);
    } else {
        self->KParts::GUIActivateEvent::setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__GUIActivateEvent_OnSetAccepted(KParts__GUIActivateEvent* self, intptr_t slot) {
    auto* vkpartsguiactivateevent = dynamic_cast<VirtualKPartsGUIActivateEvent*>(self);
    if (vkpartsguiactivateevent && vkpartsguiactivateevent->isVirtualKPartsGUIActivateEvent) {
        vkpartsguiactivateevent->setKParts__GUIActivateEvent_SetAccepted_Callback(reinterpret_cast<VirtualKPartsGUIActivateEvent::KParts__GUIActivateEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* KParts__GUIActivateEvent_Clone(const KParts__GUIActivateEvent* self) {
    auto* vkpartsguiactivateevent = const_cast<VirtualKPartsGUIActivateEvent*>(dynamic_cast<const VirtualKPartsGUIActivateEvent*>(self));
    if (vkpartsguiactivateevent && vkpartsguiactivateevent->isVirtualKPartsGUIActivateEvent) {
        return vkpartsguiactivateevent->clone();
    } else {
        return self->KParts::GUIActivateEvent::clone();
    }
}

// Base class handler implementation
QEvent* KParts__GUIActivateEvent_QBaseClone(const KParts__GUIActivateEvent* self) {
    auto* vkpartsguiactivateevent = const_cast<VirtualKPartsGUIActivateEvent*>(dynamic_cast<const VirtualKPartsGUIActivateEvent*>(self));
    if (vkpartsguiactivateevent && vkpartsguiactivateevent->isVirtualKPartsGUIActivateEvent) {
        vkpartsguiactivateevent->setKParts__GUIActivateEvent_Clone_IsBase(true);
        return vkpartsguiactivateevent->clone();
    } else {
        return self->KParts::GUIActivateEvent::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__GUIActivateEvent_OnClone(const KParts__GUIActivateEvent* self, intptr_t slot) {
    auto* vkpartsguiactivateevent = const_cast<VirtualKPartsGUIActivateEvent*>(dynamic_cast<const VirtualKPartsGUIActivateEvent*>(self));
    if (vkpartsguiactivateevent && vkpartsguiactivateevent->isVirtualKPartsGUIActivateEvent) {
        vkpartsguiactivateevent->setKParts__GUIActivateEvent_Clone_Callback(reinterpret_cast<VirtualKPartsGUIActivateEvent::KParts__GUIActivateEvent_Clone_Callback>(slot));
    }
}

void KParts__GUIActivateEvent_Delete(KParts__GUIActivateEvent* self) {
    delete self;
}
