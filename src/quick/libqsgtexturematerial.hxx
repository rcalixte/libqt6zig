#pragma once
#ifndef QUICK_LIBQSGTEXTUREMATERIAL_HXX
#define QUICK_LIBQSGTEXTUREMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGOpaqueTextureMaterial
class VirtualQSGOpaqueTextureMaterial final : public QSGOpaqueTextureMaterial {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGOpaqueTextureMaterial_Type_Callback = QSGMaterialType* (*)(const QSGOpaqueTextureMaterial*);
    using QSGOpaqueTextureMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGOpaqueTextureMaterial*, int);
    using QSGOpaqueTextureMaterial_Compare_Callback = int (*)(const QSGOpaqueTextureMaterial*, QSGMaterial*);

    // Instance callback storage
    QSGOpaqueTextureMaterial_Type_Callback qsgopaquetexturematerial_type_callback = nullptr;
    QSGOpaqueTextureMaterial_CreateShader_Callback qsgopaquetexturematerial_createshader_callback = nullptr;
    QSGOpaqueTextureMaterial_Compare_Callback qsgopaquetexturematerial_compare_callback = nullptr;

    VirtualQSGOpaqueTextureMaterial() : QSGOpaqueTextureMaterial() {};

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgopaquetexturematerial_type_callback) {
            QSGMaterialType* callback_ret = qsgopaquetexturematerial_type_callback(this);
            return callback_ret;
        }
        return QSGOpaqueTextureMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgopaquetexturematerial_createshader_callback) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = qsgopaquetexturematerial_createshader_callback(this, cbval1);
            return callback_ret;
        }
        return QSGOpaqueTextureMaterial::createShader(renderMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgopaquetexturematerial_compare_callback) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = qsgopaquetexturematerial_compare_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
};

// This class is a subclass of QSGTextureMaterial
class VirtualQSGTextureMaterial final : public QSGTextureMaterial {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGTextureMaterial_Type_Callback = QSGMaterialType* (*)(const QSGTextureMaterial*);
    using QSGTextureMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGTextureMaterial*, int);
    using QSGTextureMaterial_Compare_Callback = int (*)(const QSGTextureMaterial*, QSGMaterial*);

    // Instance callback storage
    QSGTextureMaterial_Type_Callback qsgtexturematerial_type_callback = nullptr;
    QSGTextureMaterial_CreateShader_Callback qsgtexturematerial_createshader_callback = nullptr;
    QSGTextureMaterial_Compare_Callback qsgtexturematerial_compare_callback = nullptr;

    VirtualQSGTextureMaterial() : QSGTextureMaterial() {};

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgtexturematerial_type_callback) {
            QSGMaterialType* callback_ret = qsgtexturematerial_type_callback(this);
            return callback_ret;
        }
        return QSGTextureMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgtexturematerial_createshader_callback) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = qsgtexturematerial_createshader_callback(this, cbval1);
            return callback_ret;
        }
        return QSGTextureMaterial::createShader(renderMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgtexturematerial_compare_callback) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = qsgtexturematerial_compare_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGTextureMaterial::compare(other);
    }
};

#endif
