#pragma once
#ifndef QUICK_LIBQSGMATERIAL_HXX
#define QUICK_LIBQSGMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGMaterial
class VirtualQSGMaterial : public QSGMaterial {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGMaterial_Type_Callback = QSGMaterialType* (*)(const QSGMaterial*);
    using QSGMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGMaterial*, int);
    using QSGMaterial_Compare_Callback = int (*)(const QSGMaterial*, QSGMaterial*);

    // Instance callback storage
    QSGMaterial_Type_Callback qsgmaterial_type_callback = nullptr;
    QSGMaterial_CreateShader_Callback qsgmaterial_createshader_callback = nullptr;
    QSGMaterial_Compare_Callback qsgmaterial_compare_callback = nullptr;

    VirtualQSGMaterial() : QSGMaterial() {};

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgmaterial_type_callback) {
            QSGMaterialType* callback_ret = qsgmaterial_type_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGMaterial::type called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgmaterial_createshader_callback) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = qsgmaterial_createshader_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGMaterial::createShader called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgmaterial_compare_callback) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = qsgmaterial_compare_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGMaterial::compare(other);
    }
};

#endif
