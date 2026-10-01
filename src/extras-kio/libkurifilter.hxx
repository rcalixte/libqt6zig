#pragma once
#ifndef EXTRAS_KIO_LIBKURIFILTER_HXX
#define EXTRAS_KIO_LIBKURIFILTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUriFilterSearchProvider
class VirtualKUriFilterSearchProvider final : public KUriFilterSearchProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUriFilterSearchProvider_IconName_Callback = const char* (*)(const KUriFilterSearchProvider*);
    using KUriFilterSearchProvider::setDesktopEntryName;
    using KUriFilterSearchProvider::setIconName;
    using KUriFilterSearchProvider::setKeys;
    using KUriFilterSearchProvider::setName;

    // Instance callback storage
    KUriFilterSearchProvider_IconName_Callback kurifiltersearchprovider_iconname_callback = nullptr;

    VirtualKUriFilterSearchProvider() : KUriFilterSearchProvider() {};
    VirtualKUriFilterSearchProvider(const KUriFilterSearchProvider& param1) : KUriFilterSearchProvider(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() const override {
        if (kurifiltersearchprovider_iconname_callback) {
            const char* callback_ret = kurifiltersearchprovider_iconname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KUriFilterSearchProvider::iconName();
    }
};

#endif
