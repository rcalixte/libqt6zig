#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBTABLETMODEWATCHER_HXX
#define EXTRAS_KIRIGAMI_LIBTABLETMODEWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::TabletModeChangedEvent so that we can call protected methods
class VirtualKirigamiPlatformTabletModeChangedEvent final : public Kirigami::Platform::TabletModeChangedEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualKirigamiPlatformTabletModeChangedEvent = true;

    // Virtual class public types (including callbacks)
    using Kirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback = void (*)(Kirigami__Platform__TabletModeChangedEvent*, bool);
    using Kirigami__Platform__TabletModeChangedEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    Kirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback kirigami__platform__tabletmodechangedevent_setaccepted_callback = nullptr;
    Kirigami__Platform__TabletModeChangedEvent_Clone_Callback kirigami__platform__tabletmodechangedevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool kirigami__platform__tabletmodechangedevent_setaccepted_isbase = false;
    mutable bool kirigami__platform__tabletmodechangedevent_clone_isbase = false;

  public:
    VirtualKirigamiPlatformTabletModeChangedEvent(bool tablet) : Kirigami::Platform::TabletModeChangedEvent(tablet) {};
    VirtualKirigamiPlatformTabletModeChangedEvent(const Kirigami::Platform::TabletModeChangedEvent& param1) : Kirigami::Platform::TabletModeChangedEvent(param1) {};

    // Callback setters
    inline void setKirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback(Kirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback cb) { kirigami__platform__tabletmodechangedevent_setaccepted_callback = cb; }
    inline void setKirigami__Platform__TabletModeChangedEvent_Clone_Callback(Kirigami__Platform__TabletModeChangedEvent_Clone_Callback cb) { kirigami__platform__tabletmodechangedevent_clone_callback = cb; }

    // Base flag setters
    inline void setKirigami__Platform__TabletModeChangedEvent_SetAccepted_IsBase(bool value) const { kirigami__platform__tabletmodechangedevent_setaccepted_isbase = value; }
    inline void setKirigami__Platform__TabletModeChangedEvent_Clone_IsBase(bool value) const { kirigami__platform__tabletmodechangedevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kirigami__platform__tabletmodechangedevent_setaccepted_isbase) {
            kirigami__platform__tabletmodechangedevent_setaccepted_isbase = false;
            Kirigami__Platform__TabletModeChangedEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = kirigami__platform__tabletmodechangedevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;
            setaccepted_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__TabletModeChangedEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kirigami__platform__tabletmodechangedevent_clone_isbase) {
            kirigami__platform__tabletmodechangedevent_clone_isbase = false;
            return Kirigami__Platform__TabletModeChangedEvent::clone();
        }
        auto clone_cb = kirigami__platform__tabletmodechangedevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return Kirigami__Platform__TabletModeChangedEvent::clone();
    }
};

#endif
