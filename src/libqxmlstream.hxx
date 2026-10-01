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
    using QXmlStreamEntityResolver_ResolveEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, const char*, const char*);
    using QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, const char*);

    // Instance callback storage
    QXmlStreamEntityResolver_ResolveEntity_Callback qxmlstreamentityresolver_resolveentity_callback = nullptr;
    QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback qxmlstreamentityresolver_resolveundeclaredentity_callback = nullptr;

    VirtualQXmlStreamEntityResolver() : QXmlStreamEntityResolver() {};

    // Virtual method for C ABI access and custom callback
    virtual QString resolveEntity(const QString& publicId, const QString& systemId) override {
        if (qxmlstreamentityresolver_resolveentity_callback) {
            const auto publicId_ret = publicId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray publicId_b = publicId_ret.toUtf8();
            auto publicId_str_len = publicId_b.length();
            const char* publicId_str = static_cast<const char*>(malloc(publicId_str_len + 1));
            memcpy((void*)publicId_str, publicId_b.data(), publicId_str_len);
            ((char*)publicId_str)[publicId_str_len] = '\0';
            const char* cbval1 = publicId_str;
            const auto systemId_ret = systemId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray systemId_b = systemId_ret.toUtf8();
            auto systemId_str_len = systemId_b.length();
            const char* systemId_str = static_cast<const char*>(malloc(systemId_str_len + 1));
            memcpy((void*)systemId_str, systemId_b.data(), systemId_str_len);
            ((char*)systemId_str)[systemId_str_len] = '\0';
            const char* cbval2 = systemId_str;
            const char* callback_ret = qxmlstreamentityresolver_resolveentity_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(publicId_str);
            libqt_free(systemId_str);
            return callback_ret_QString;
        }
        return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
    }

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
