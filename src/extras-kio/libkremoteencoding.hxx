#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKREMOTEENCODING_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKREMOTEENCODING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRemoteEncoding so that we can call protected methods
class VirtualKRemoteEncoding final : public KRemoteEncoding {

  public:
    // Virtual class boolean flag
    bool isVirtualKRemoteEncoding = true;

    // Virtual class public types (including callbacks)
    using KRemoteEncoding_VirtualHook_Callback = void (*)(KRemoteEncoding*, int, void*);

  protected:
    // Instance callback storage
    KRemoteEncoding_VirtualHook_Callback kremoteencoding_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool kremoteencoding_virtualhook_isbase = false;

  public:
    VirtualKRemoteEncoding() : KRemoteEncoding() {};
    VirtualKRemoteEncoding(const char* name) : KRemoteEncoding(name) {};

    ~VirtualKRemoteEncoding() {
        kremoteencoding_virtualhook_callback = nullptr;
    }

    // Callback setters
    inline void setKRemoteEncoding_VirtualHook_Callback(KRemoteEncoding_VirtualHook_Callback cb) { kremoteencoding_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKRemoteEncoding_VirtualHook_IsBase(bool value) const { kremoteencoding_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kremoteencoding_virtualhook_isbase) {
            kremoteencoding_virtualhook_isbase = false;
            KRemoteEncoding::virtual_hook(id, data);
        } else if (kremoteencoding_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kremoteencoding_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KRemoteEncoding::virtual_hook(id, data);
        }
    }

    // Friend functions
    friend void KRemoteEncoding_VirtualHook(KRemoteEncoding* self, int id, void* data);
    friend void KRemoteEncoding_QBaseVirtualHook(KRemoteEncoding* self, int id, void* data);
};

#endif
