#pragma once
#ifndef QUICK_LIBQSGTEXTUREMATERIAL_HXX
#define QUICK_LIBQSGTEXTUREMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGOpaqueTextureMaterial so that we can call protected methods
class VirtualQSGOpaqueTextureMaterial final : public QSGOpaqueTextureMaterial {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGOpaqueTextureMaterial = true;

    // Virtual class public types (including callbacks)
    using QSGOpaqueTextureMaterial_Type_Callback = QSGMaterialType* (*)();
    using QSGOpaqueTextureMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGOpaqueTextureMaterial*, int);
    using QSGOpaqueTextureMaterial_Compare_Callback = int (*)(const QSGOpaqueTextureMaterial*, QSGMaterial*);

  protected:
    // Instance callback storage
    QSGOpaqueTextureMaterial_Type_Callback qsgopaquetexturematerial_type_callback = nullptr;
    QSGOpaqueTextureMaterial_CreateShader_Callback qsgopaquetexturematerial_createshader_callback = nullptr;
    QSGOpaqueTextureMaterial_Compare_Callback qsgopaquetexturematerial_compare_callback = nullptr;

    // Instance base flags
    mutable bool qsgopaquetexturematerial_type_isbase = false;
    mutable bool qsgopaquetexturematerial_createshader_isbase = false;
    mutable bool qsgopaquetexturematerial_compare_isbase = false;

  public:
    VirtualQSGOpaqueTextureMaterial() : QSGOpaqueTextureMaterial() {};

    // Callback setters
    inline void setQSGOpaqueTextureMaterial_Type_Callback(QSGOpaqueTextureMaterial_Type_Callback cb) { qsgopaquetexturematerial_type_callback = cb; }
    inline void setQSGOpaqueTextureMaterial_CreateShader_Callback(QSGOpaqueTextureMaterial_CreateShader_Callback cb) { qsgopaquetexturematerial_createshader_callback = cb; }
    inline void setQSGOpaqueTextureMaterial_Compare_Callback(QSGOpaqueTextureMaterial_Compare_Callback cb) { qsgopaquetexturematerial_compare_callback = cb; }

    // Base flag setters
    inline void setQSGOpaqueTextureMaterial_Type_IsBase(bool value) const { qsgopaquetexturematerial_type_isbase = value; }
    inline void setQSGOpaqueTextureMaterial_CreateShader_IsBase(bool value) const { qsgopaquetexturematerial_createshader_isbase = value; }
    inline void setQSGOpaqueTextureMaterial_Compare_IsBase(bool value) const { qsgopaquetexturematerial_compare_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgopaquetexturematerial_type_isbase) {
            qsgopaquetexturematerial_type_isbase = false;
            return QSGOpaqueTextureMaterial::type();
        }
        auto type_cb = qsgopaquetexturematerial_type_callback;
        if (type_cb) {
            QSGMaterialType* callback_ret = type_cb();
            return callback_ret;
        }
        return QSGOpaqueTextureMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgopaquetexturematerial_createshader_isbase) {
            qsgopaquetexturematerial_createshader_isbase = false;
            return QSGOpaqueTextureMaterial::createShader(renderMode);
        }
        auto createshader_cb = qsgopaquetexturematerial_createshader_callback;
        if (createshader_cb) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = createshader_cb(this, cbval1);
            return callback_ret;
        }
        return QSGOpaqueTextureMaterial::createShader(renderMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgopaquetexturematerial_compare_isbase) {
            qsgopaquetexturematerial_compare_isbase = false;
            return QSGOpaqueTextureMaterial::compare(other);
        }
        auto compare_cb = qsgopaquetexturematerial_compare_callback;
        if (compare_cb) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = compare_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
};

// This class is a subclass of QSGTextureMaterial so that we can call protected methods
class VirtualQSGTextureMaterial final : public QSGTextureMaterial {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGTextureMaterial = true;

    // Virtual class public types (including callbacks)
    using QSGTextureMaterial_Type_Callback = QSGMaterialType* (*)();
    using QSGTextureMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGTextureMaterial*, int);
    using QSGTextureMaterial_Compare_Callback = int (*)(const QSGTextureMaterial*, QSGMaterial*);

  protected:
    // Instance callback storage
    QSGTextureMaterial_Type_Callback qsgtexturematerial_type_callback = nullptr;
    QSGTextureMaterial_CreateShader_Callback qsgtexturematerial_createshader_callback = nullptr;
    QSGTextureMaterial_Compare_Callback qsgtexturematerial_compare_callback = nullptr;

    // Instance base flags
    mutable bool qsgtexturematerial_type_isbase = false;
    mutable bool qsgtexturematerial_createshader_isbase = false;
    mutable bool qsgtexturematerial_compare_isbase = false;

  public:
    VirtualQSGTextureMaterial() : QSGTextureMaterial() {};

    // Callback setters
    inline void setQSGTextureMaterial_Type_Callback(QSGTextureMaterial_Type_Callback cb) { qsgtexturematerial_type_callback = cb; }
    inline void setQSGTextureMaterial_CreateShader_Callback(QSGTextureMaterial_CreateShader_Callback cb) { qsgtexturematerial_createshader_callback = cb; }
    inline void setQSGTextureMaterial_Compare_Callback(QSGTextureMaterial_Compare_Callback cb) { qsgtexturematerial_compare_callback = cb; }

    // Base flag setters
    inline void setQSGTextureMaterial_Type_IsBase(bool value) const { qsgtexturematerial_type_isbase = value; }
    inline void setQSGTextureMaterial_CreateShader_IsBase(bool value) const { qsgtexturematerial_createshader_isbase = value; }
    inline void setQSGTextureMaterial_Compare_IsBase(bool value) const { qsgtexturematerial_compare_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgtexturematerial_type_isbase) {
            qsgtexturematerial_type_isbase = false;
            return QSGTextureMaterial::type();
        }
        auto type_cb = qsgtexturematerial_type_callback;
        if (type_cb) {
            QSGMaterialType* callback_ret = type_cb();
            return callback_ret;
        }
        return QSGTextureMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgtexturematerial_createshader_isbase) {
            qsgtexturematerial_createshader_isbase = false;
            return QSGTextureMaterial::createShader(renderMode);
        }
        auto createshader_cb = qsgtexturematerial_createshader_callback;
        if (createshader_cb) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = createshader_cb(this, cbval1);
            return callback_ret;
        }
        return QSGTextureMaterial::createShader(renderMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgtexturematerial_compare_isbase) {
            qsgtexturematerial_compare_isbase = false;
            return QSGTextureMaterial::compare(other);
        }
        auto compare_cb = qsgtexturematerial_compare_callback;
        if (compare_cb) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = compare_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGTextureMaterial::compare(other);
    }
};

#endif
