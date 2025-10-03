#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALGUIACTIVATEEVENT_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALGUIACTIVATEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::GUIActivateEvent so that we can call protected methods
class VirtualKPartsGUIActivateEvent final : public KParts::GUIActivateEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsGUIActivateEvent = true;

    // Virtual class public types (including callbacks)
    using KParts__GUIActivateEvent_SetAccepted_Callback = void (*)(KParts__GUIActivateEvent*, bool);
    using KParts__GUIActivateEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    KParts__GUIActivateEvent_SetAccepted_Callback kparts__guiactivateevent_setaccepted_callback = nullptr;
    KParts__GUIActivateEvent_Clone_Callback kparts__guiactivateevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool kparts__guiactivateevent_setaccepted_isbase = false;
    mutable bool kparts__guiactivateevent_clone_isbase = false;

  public:
    VirtualKPartsGUIActivateEvent(bool activated) : KParts::GUIActivateEvent(activated) {};

    ~VirtualKPartsGUIActivateEvent() {
        kparts__guiactivateevent_setaccepted_callback = nullptr;
        kparts__guiactivateevent_clone_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__GUIActivateEvent_SetAccepted_Callback(KParts__GUIActivateEvent_SetAccepted_Callback cb) { kparts__guiactivateevent_setaccepted_callback = cb; }
    inline void setKParts__GUIActivateEvent_Clone_Callback(KParts__GUIActivateEvent_Clone_Callback cb) { kparts__guiactivateevent_clone_callback = cb; }

    // Base flag setters
    inline void setKParts__GUIActivateEvent_SetAccepted_IsBase(bool value) const { kparts__guiactivateevent_setaccepted_isbase = value; }
    inline void setKParts__GUIActivateEvent_Clone_IsBase(bool value) const { kparts__guiactivateevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kparts__guiactivateevent_setaccepted_isbase) {
            kparts__guiactivateevent_setaccepted_isbase = false;
            KParts__GUIActivateEvent::setAccepted(accepted);
        } else if (kparts__guiactivateevent_setaccepted_callback != nullptr) {
            bool cbval1 = accepted;

            kparts__guiactivateevent_setaccepted_callback(this, cbval1);
        } else {
            KParts__GUIActivateEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kparts__guiactivateevent_clone_isbase) {
            kparts__guiactivateevent_clone_isbase = false;
            return KParts__GUIActivateEvent::clone();
        } else if (kparts__guiactivateevent_clone_callback != nullptr) {
            QEvent* callback_ret = kparts__guiactivateevent_clone_callback();
            return callback_ret;
        } else {
            return KParts__GUIActivateEvent::clone();
        }
    }
};

#endif
