#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBTABLETMODEWATCHER_HXX
#define EXTRAS_KIRIGAMI_LIBTABLETMODEWATCHER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::TabletModeChangedEvent
class VirtualKirigamiPlatformTabletModeChangedEvent final : public Kirigami::Platform::TabletModeChangedEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using Kirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback = void (*)(Kirigami__Platform__TabletModeChangedEvent*, bool);
    using Kirigami__Platform__TabletModeChangedEvent_Clone_Callback = QEvent* (*)(const Kirigami__Platform__TabletModeChangedEvent*);

    // Instance callback storage
    Kirigami__Platform__TabletModeChangedEvent_SetAccepted_Callback kirigami__platform__tabletmodechangedevent_setaccepted_callback = nullptr;
    Kirigami__Platform__TabletModeChangedEvent_Clone_Callback kirigami__platform__tabletmodechangedevent_clone_callback = nullptr;

    VirtualKirigamiPlatformTabletModeChangedEvent(bool tablet) : Kirigami::Platform::TabletModeChangedEvent(tablet) {};
    VirtualKirigamiPlatformTabletModeChangedEvent(const Kirigami::Platform::TabletModeChangedEvent& param1) : Kirigami::Platform::TabletModeChangedEvent(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kirigami__platform__tabletmodechangedevent_setaccepted_callback) {
            bool cbval1 = accepted;
            kirigami__platform__tabletmodechangedevent_setaccepted_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__TabletModeChangedEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kirigami__platform__tabletmodechangedevent_clone_callback) {
            QEvent* callback_ret = kirigami__platform__tabletmodechangedevent_clone_callback(this);
            return callback_ret;
        }
        return Kirigami__Platform__TabletModeChangedEvent::clone();
    }
};

#endif
