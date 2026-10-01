#pragma once
#ifndef QUICK_LIBQSGFLATCOLORMATERIAL_HXX
#define QUICK_LIBQSGFLATCOLORMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGFlatColorMaterial
class VirtualQSGFlatColorMaterial final : public QSGFlatColorMaterial {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGFlatColorMaterial_Type_Callback = QSGMaterialType* (*)(const QSGFlatColorMaterial*);
    using QSGFlatColorMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGFlatColorMaterial*, int);
    using QSGFlatColorMaterial_Compare_Callback = int (*)(const QSGFlatColorMaterial*, QSGMaterial*);

    // Instance callback storage
    QSGFlatColorMaterial_Type_Callback qsgflatcolormaterial_type_callback = nullptr;
    QSGFlatColorMaterial_CreateShader_Callback qsgflatcolormaterial_createshader_callback = nullptr;
    QSGFlatColorMaterial_Compare_Callback qsgflatcolormaterial_compare_callback = nullptr;

    VirtualQSGFlatColorMaterial() : QSGFlatColorMaterial() {};

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgflatcolormaterial_type_callback) {
            QSGMaterialType* callback_ret = qsgflatcolormaterial_type_callback(this);
            return callback_ret;
        }
        return QSGFlatColorMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgflatcolormaterial_createshader_callback) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = qsgflatcolormaterial_createshader_callback(this, cbval1);
            return callback_ret;
        }
        return QSGFlatColorMaterial::createShader(renderMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgflatcolormaterial_compare_callback) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = qsgflatcolormaterial_compare_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGFlatColorMaterial::compare(other);
    }
};

#endif
