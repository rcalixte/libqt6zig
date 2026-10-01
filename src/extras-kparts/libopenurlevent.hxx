#pragma once
#ifndef EXTRAS_KPARTS_LIBOPENURLEVENT_HXX
#define EXTRAS_KPARTS_LIBOPENURLEVENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::OpenUrlEvent
class VirtualKPartsOpenUrlEvent final : public KParts::OpenUrlEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__OpenUrlEvent_SetAccepted_Callback = void (*)(KParts__OpenUrlEvent*, bool);
    using KParts__OpenUrlEvent_Clone_Callback = QEvent* (*)(const KParts__OpenUrlEvent*);

    // Instance callback storage
    KParts__OpenUrlEvent_SetAccepted_Callback kparts__openurlevent_setaccepted_callback = nullptr;
    KParts__OpenUrlEvent_Clone_Callback kparts__openurlevent_clone_callback = nullptr;

    VirtualKPartsOpenUrlEvent(KParts::ReadOnlyPart* part, const QUrl& url) : KParts::OpenUrlEvent(part, url) {};
    VirtualKPartsOpenUrlEvent(KParts::ReadOnlyPart* part, const QUrl& url, const KParts::OpenUrlArguments& args) : KParts::OpenUrlEvent(part, url, args) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kparts__openurlevent_setaccepted_callback) {
            bool cbval1 = accepted;
            kparts__openurlevent_setaccepted_callback(this, cbval1);
            return;
        }
        KParts__OpenUrlEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kparts__openurlevent_clone_callback) {
            QEvent* callback_ret = kparts__openurlevent_clone_callback(this);
            return callback_ret;
        }
        return KParts__OpenUrlEvent::clone();
    }
};

#endif
