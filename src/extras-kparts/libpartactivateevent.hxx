#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALPARTACTIVATEEVENT_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALPARTACTIVATEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::PartActivateEvent so that we can call protected methods
class VirtualKPartsPartActivateEvent final : public KParts::PartActivateEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsPartActivateEvent = true;

    // Virtual class public types (including callbacks)
    using KParts__PartActivateEvent_SetAccepted_Callback = void (*)(KParts__PartActivateEvent*, bool);
    using KParts__PartActivateEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    KParts__PartActivateEvent_SetAccepted_Callback kparts__partactivateevent_setaccepted_callback = nullptr;
    KParts__PartActivateEvent_Clone_Callback kparts__partactivateevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool kparts__partactivateevent_setaccepted_isbase = false;
    mutable bool kparts__partactivateevent_clone_isbase = false;

  public:
    VirtualKPartsPartActivateEvent(bool activated, KParts::Part* part, QWidget* widget) : KParts::PartActivateEvent(activated, part, widget) {};

    ~VirtualKPartsPartActivateEvent() {
        kparts__partactivateevent_setaccepted_callback = nullptr;
        kparts__partactivateevent_clone_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__PartActivateEvent_SetAccepted_Callback(KParts__PartActivateEvent_SetAccepted_Callback cb) { kparts__partactivateevent_setaccepted_callback = cb; }
    inline void setKParts__PartActivateEvent_Clone_Callback(KParts__PartActivateEvent_Clone_Callback cb) { kparts__partactivateevent_clone_callback = cb; }

    // Base flag setters
    inline void setKParts__PartActivateEvent_SetAccepted_IsBase(bool value) const { kparts__partactivateevent_setaccepted_isbase = value; }
    inline void setKParts__PartActivateEvent_Clone_IsBase(bool value) const { kparts__partactivateevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kparts__partactivateevent_setaccepted_isbase) {
            kparts__partactivateevent_setaccepted_isbase = false;
            KParts__PartActivateEvent::setAccepted(accepted);
        } else if (kparts__partactivateevent_setaccepted_callback != nullptr) {
            bool cbval1 = accepted;

            kparts__partactivateevent_setaccepted_callback(this, cbval1);
        } else {
            KParts__PartActivateEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kparts__partactivateevent_clone_isbase) {
            kparts__partactivateevent_clone_isbase = false;
            return KParts__PartActivateEvent::clone();
        } else if (kparts__partactivateevent_clone_callback != nullptr) {
            QEvent* callback_ret = kparts__partactivateevent_clone_callback();
            return callback_ret;
        } else {
            return KParts__PartActivateEvent::clone();
        }
    }
};

#endif
