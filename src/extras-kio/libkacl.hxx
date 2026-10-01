#pragma once
#ifndef EXTRAS_KIO_LIBKACL_HXX
#define EXTRAS_KIO_LIBKACL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KACL
class VirtualKACL final : public KACL {
  public:
    // Virtual class public types (including callbacks and access types)
    using KACL_VirtualHook_Callback = void (*)(KACL*, int, void*);

    // Instance callback storage
    KACL_VirtualHook_Callback kacl_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KACL {
        using KACL::virtual_hook;
    };

    VirtualKACL(const QString& aclString) : KACL(aclString) {};
    VirtualKACL(const KACL& rhs) : KACL(rhs) {};
    VirtualKACL(mode_t basicPermissions) : KACL(basicPermissions) {};
    VirtualKACL() : KACL() {};

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kacl_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kacl_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KACL::virtual_hook(id, data);
    }

    // Friend functions
    friend void KACL_SuperVirtualHook(KACL* self, int id, void* data);
};

#endif
