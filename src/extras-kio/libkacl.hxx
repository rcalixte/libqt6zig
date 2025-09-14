#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKACL_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKACL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KACL so that we can call protected methods
class VirtualKACL final : public KACL {

  public:
    // Virtual class boolean flag
    bool isVirtualKACL = true;

    // Virtual class public types (including callbacks)
    using KACL_VirtualHook_Callback = void (*)(KACL*, int, void*);

  protected:
    // Instance callback storage
    KACL_VirtualHook_Callback kacl_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool kacl_virtualhook_isbase = false;

  public:
    VirtualKACL(const QString& aclString) : KACL(aclString) {};
    VirtualKACL(const KACL& rhs) : KACL(rhs) {};
    VirtualKACL(mode_t basicPermissions) : KACL(basicPermissions) {};
    VirtualKACL() : KACL() {};

    ~VirtualKACL() {
        kacl_virtualhook_callback = nullptr;
    }

    // Callback setters
    inline void setKACL_VirtualHook_Callback(KACL_VirtualHook_Callback cb) { kacl_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKACL_VirtualHook_IsBase(bool value) const { kacl_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kacl_virtualhook_isbase) {
            kacl_virtualhook_isbase = false;
            KACL::virtual_hook(id, data);
        } else if (kacl_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kacl_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KACL::virtual_hook(id, data);
        }
    }

    // Friend functions
    friend void KACL_VirtualHook(KACL* self, int id, void* data);
    friend void KACL_QBaseVirtualHook(KACL* self, int id, void* data);
};

#endif
