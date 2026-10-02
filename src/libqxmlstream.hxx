#pragma once
#ifndef LIBQXMLSTREAM_HXX
#define LIBQXMLSTREAM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QXmlStreamEntityResolver
class VirtualQXmlStreamEntityResolver final : public QXmlStreamEntityResolver {
  public:
    // Virtual class public types (including callbacks and access types)
    using QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, const char*);

    // Instance callback storage
    QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback qxmlstreamentityresolver_resolveundeclaredentity_callback = nullptr;

    VirtualQXmlStreamEntityResolver() : QXmlStreamEntityResolver() {};

    // Virtual method for C ABI access and custom callback
    virtual QString resolveUndeclaredEntity(const QString& name) override {
        if (qxmlstreamentityresolver_resolveundeclaredentity_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const char* callback_ret = qxmlstreamentityresolver_resolveundeclaredentity_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(name_str);
            return callback_ret_QString;
        }
        return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
    }
};

#endif
