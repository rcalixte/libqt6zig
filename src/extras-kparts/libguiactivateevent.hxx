#pragma once
#ifndef EXTRAS_KPARTS_LIBGUIACTIVATEEVENT_HXX
#define EXTRAS_KPARTS_LIBGUIACTIVATEEVENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::GUIActivateEvent
class VirtualKPartsGUIActivateEvent final : public KParts::GUIActivateEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__GUIActivateEvent_SetAccepted_Callback = void (*)(KParts__GUIActivateEvent*, bool);
    using KParts__GUIActivateEvent_Clone_Callback = QEvent* (*)(const KParts__GUIActivateEvent*);

    // Instance callback storage
    KParts__GUIActivateEvent_SetAccepted_Callback kparts__guiactivateevent_setaccepted_callback = nullptr;
    KParts__GUIActivateEvent_Clone_Callback kparts__guiactivateevent_clone_callback = nullptr;

    VirtualKPartsGUIActivateEvent(bool activated) : KParts::GUIActivateEvent(activated) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kparts__guiactivateevent_setaccepted_callback) {
            bool cbval1 = accepted;
            kparts__guiactivateevent_setaccepted_callback(this, cbval1);
            return;
        }
        KParts__GUIActivateEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kparts__guiactivateevent_clone_callback) {
            QEvent* callback_ret = kparts__guiactivateevent_clone_callback(this);
            return callback_ret;
        }
        return KParts__GUIActivateEvent::clone();
    }
};

#endif
