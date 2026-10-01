#pragma once
#ifndef EXTRAS_KIO_LIBKREMOTEENCODING_HXX
#define EXTRAS_KIO_LIBKREMOTEENCODING_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRemoteEncoding
class VirtualKRemoteEncoding final : public KRemoteEncoding {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRemoteEncoding_VirtualHook_Callback = void (*)(KRemoteEncoding*, int, void*);

    // Instance callback storage
    KRemoteEncoding_VirtualHook_Callback kremoteencoding_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KRemoteEncoding {
        using KRemoteEncoding::virtual_hook;
    };

    VirtualKRemoteEncoding() : KRemoteEncoding() {};
    VirtualKRemoteEncoding(const char* name) : KRemoteEncoding(name) {};

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kremoteencoding_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kremoteencoding_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KRemoteEncoding::virtual_hook(id, data);
    }

    // Friend functions
    friend void KRemoteEncoding_SuperVirtualHook(KRemoteEncoding* self, int id, void* data);
};

#endif
