#pragma once
#ifndef EXTRAS_KPARTS_LIBPARTACTIVATEEVENT_HXX
#define EXTRAS_KPARTS_LIBPARTACTIVATEEVENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::PartActivateEvent
class VirtualKPartsPartActivateEvent final : public KParts::PartActivateEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__PartActivateEvent_SetAccepted_Callback = void (*)(KParts__PartActivateEvent*, bool);
    using KParts__PartActivateEvent_Clone_Callback = QEvent* (*)(const KParts__PartActivateEvent*);

    // Instance callback storage
    KParts__PartActivateEvent_SetAccepted_Callback kparts__partactivateevent_setaccepted_callback = nullptr;
    KParts__PartActivateEvent_Clone_Callback kparts__partactivateevent_clone_callback = nullptr;

    VirtualKPartsPartActivateEvent(bool activated, KParts::Part* part, QWidget* widget) : KParts::PartActivateEvent(activated, part, widget) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kparts__partactivateevent_setaccepted_callback) {
            bool cbval1 = accepted;
            kparts__partactivateevent_setaccepted_callback(this, cbval1);
            return;
        }
        KParts__PartActivateEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kparts__partactivateevent_clone_callback) {
            QEvent* callback_ret = kparts__partactivateevent_clone_callback(this);
            return callback_ret;
        }
        return KParts__PartActivateEvent::clone();
    }
};

#endif
