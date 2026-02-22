#pragma once
#ifndef SRCC_LIBVIRTUALQXMLSTREAM_H
#define SRCC_LIBVIRTUALQXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QXmlStreamEntityResolver so that we can call protected methods
class VirtualQXmlStreamEntityResolver final : public QXmlStreamEntityResolver {

  public:
    // Virtual class boolean flag
    bool isVirtualQXmlStreamEntityResolver = true;

    // Virtual class public types (including callbacks)
    using QXmlStreamEntityResolver_ResolveEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, const char*, const char*);
    using QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback = const char* (*)(QXmlStreamEntityResolver*, const char*);

  protected:
    // Instance callback storage
    QXmlStreamEntityResolver_ResolveEntity_Callback qxmlstreamentityresolver_resolveentity_callback = nullptr;
    QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback qxmlstreamentityresolver_resolveundeclaredentity_callback = nullptr;

    // Instance base flags
    mutable bool qxmlstreamentityresolver_resolveentity_isbase = false;
    mutable bool qxmlstreamentityresolver_resolveundeclaredentity_isbase = false;

  public:
    VirtualQXmlStreamEntityResolver() : QXmlStreamEntityResolver() {};

    ~VirtualQXmlStreamEntityResolver() {
        qxmlstreamentityresolver_resolveentity_callback = nullptr;
        qxmlstreamentityresolver_resolveundeclaredentity_callback = nullptr;
    }

    // Callback setters
    inline void setQXmlStreamEntityResolver_ResolveEntity_Callback(QXmlStreamEntityResolver_ResolveEntity_Callback cb) { qxmlstreamentityresolver_resolveentity_callback = cb; }
    inline void setQXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback(QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback cb) { qxmlstreamentityresolver_resolveundeclaredentity_callback = cb; }

    // Base flag setters
    inline void setQXmlStreamEntityResolver_ResolveEntity_IsBase(bool value) const { qxmlstreamentityresolver_resolveentity_isbase = value; }
    inline void setQXmlStreamEntityResolver_ResolveUndeclaredEntity_IsBase(bool value) const { qxmlstreamentityresolver_resolveundeclaredentity_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString resolveEntity(const QString& publicId, const QString& systemId) override {
        if (qxmlstreamentityresolver_resolveentity_isbase) {
            qxmlstreamentityresolver_resolveentity_isbase = false;
            return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
        } else if (qxmlstreamentityresolver_resolveentity_callback != nullptr) {
            const QString publicId_ret = publicId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray publicId_b = publicId_ret.toUtf8();
            auto publicId_str_len = publicId_b.length();
            const char* publicId_str = static_cast<const char*>(malloc(publicId_str_len + 1));
            memcpy((void*)publicId_str, publicId_b.data(), publicId_str_len);
            ((char*)publicId_str)[publicId_str_len] = '\0';
            const char* cbval1 = publicId_str;
            const QString systemId_ret = systemId;
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
        } else {
            return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString resolveUndeclaredEntity(const QString& name) override {
        if (qxmlstreamentityresolver_resolveundeclaredentity_isbase) {
            qxmlstreamentityresolver_resolveundeclaredentity_isbase = false;
            return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
        } else if (qxmlstreamentityresolver_resolveundeclaredentity_callback != nullptr) {
            const QString name_ret = name;
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
        } else {
            return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
        }
    }
};

#endif
