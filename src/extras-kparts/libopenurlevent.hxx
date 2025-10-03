#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALOPENURLEVENT_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALOPENURLEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::OpenUrlEvent so that we can call protected methods
class VirtualKPartsOpenUrlEvent final : public KParts::OpenUrlEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsOpenUrlEvent = true;

    // Virtual class public types (including callbacks)
    using KParts__OpenUrlEvent_SetAccepted_Callback = void (*)(KParts__OpenUrlEvent*, bool);
    using KParts__OpenUrlEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    KParts__OpenUrlEvent_SetAccepted_Callback kparts__openurlevent_setaccepted_callback = nullptr;
    KParts__OpenUrlEvent_Clone_Callback kparts__openurlevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool kparts__openurlevent_setaccepted_isbase = false;
    mutable bool kparts__openurlevent_clone_isbase = false;

  public:
    VirtualKPartsOpenUrlEvent(KParts::ReadOnlyPart* part, const QUrl& url) : KParts::OpenUrlEvent(part, url) {};
    VirtualKPartsOpenUrlEvent(KParts::ReadOnlyPart* part, const QUrl& url, const KParts::OpenUrlArguments& args) : KParts::OpenUrlEvent(part, url, args) {};

    ~VirtualKPartsOpenUrlEvent() {
        kparts__openurlevent_setaccepted_callback = nullptr;
        kparts__openurlevent_clone_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__OpenUrlEvent_SetAccepted_Callback(KParts__OpenUrlEvent_SetAccepted_Callback cb) { kparts__openurlevent_setaccepted_callback = cb; }
    inline void setKParts__OpenUrlEvent_Clone_Callback(KParts__OpenUrlEvent_Clone_Callback cb) { kparts__openurlevent_clone_callback = cb; }

    // Base flag setters
    inline void setKParts__OpenUrlEvent_SetAccepted_IsBase(bool value) const { kparts__openurlevent_setaccepted_isbase = value; }
    inline void setKParts__OpenUrlEvent_Clone_IsBase(bool value) const { kparts__openurlevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (kparts__openurlevent_setaccepted_isbase) {
            kparts__openurlevent_setaccepted_isbase = false;
            KParts__OpenUrlEvent::setAccepted(accepted);
        } else if (kparts__openurlevent_setaccepted_callback != nullptr) {
            bool cbval1 = accepted;

            kparts__openurlevent_setaccepted_callback(this, cbval1);
        } else {
            KParts__OpenUrlEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (kparts__openurlevent_clone_isbase) {
            kparts__openurlevent_clone_isbase = false;
            return KParts__OpenUrlEvent::clone();
        } else if (kparts__openurlevent_clone_callback != nullptr) {
            QEvent* callback_ret = kparts__openurlevent_clone_callback();
            return callback_ret;
        } else {
            return KParts__OpenUrlEvent::clone();
        }
    }
};

#endif
