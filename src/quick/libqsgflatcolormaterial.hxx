#pragma once
#ifndef QUICK_LIBQSGFLATCOLORMATERIAL_HXX
#define QUICK_LIBQSGFLATCOLORMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGFlatColorMaterial so that we can call protected methods
class VirtualQSGFlatColorMaterial final : public QSGFlatColorMaterial {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGFlatColorMaterial = true;

    // Virtual class public types (including callbacks)
    using QSGFlatColorMaterial_Type_Callback = QSGMaterialType* (*)();
    using QSGFlatColorMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGFlatColorMaterial*, int);
    using QSGFlatColorMaterial_Compare_Callback = int (*)(const QSGFlatColorMaterial*, QSGMaterial*);

  protected:
    // Instance callback storage
    QSGFlatColorMaterial_Type_Callback qsgflatcolormaterial_type_callback = nullptr;
    QSGFlatColorMaterial_CreateShader_Callback qsgflatcolormaterial_createshader_callback = nullptr;
    QSGFlatColorMaterial_Compare_Callback qsgflatcolormaterial_compare_callback = nullptr;

    // Instance base flags
    mutable bool qsgflatcolormaterial_type_isbase = false;
    mutable bool qsgflatcolormaterial_createshader_isbase = false;
    mutable bool qsgflatcolormaterial_compare_isbase = false;

  public:
    VirtualQSGFlatColorMaterial() : QSGFlatColorMaterial() {};

    // Callback setters
    inline void setQSGFlatColorMaterial_Type_Callback(QSGFlatColorMaterial_Type_Callback cb) { qsgflatcolormaterial_type_callback = cb; }
    inline void setQSGFlatColorMaterial_CreateShader_Callback(QSGFlatColorMaterial_CreateShader_Callback cb) { qsgflatcolormaterial_createshader_callback = cb; }
    inline void setQSGFlatColorMaterial_Compare_Callback(QSGFlatColorMaterial_Compare_Callback cb) { qsgflatcolormaterial_compare_callback = cb; }

    // Base flag setters
    inline void setQSGFlatColorMaterial_Type_IsBase(bool value) const { qsgflatcolormaterial_type_isbase = value; }
    inline void setQSGFlatColorMaterial_CreateShader_IsBase(bool value) const { qsgflatcolormaterial_createshader_isbase = value; }
    inline void setQSGFlatColorMaterial_Compare_IsBase(bool value) const { qsgflatcolormaterial_compare_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgflatcolormaterial_type_isbase) {
            qsgflatcolormaterial_type_isbase = false;
            return QSGFlatColorMaterial::type();
        }
        auto type_cb = qsgflatcolormaterial_type_callback;
        if (type_cb) {
            QSGMaterialType* callback_ret = type_cb();
            return callback_ret;
        }
        return QSGFlatColorMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgflatcolormaterial_createshader_isbase) {
            qsgflatcolormaterial_createshader_isbase = false;
            return QSGFlatColorMaterial::createShader(renderMode);
        }
        auto createshader_cb = qsgflatcolormaterial_createshader_callback;
        if (createshader_cb) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = createshader_cb(this, cbval1);
            return callback_ret;
        }
        return QSGFlatColorMaterial::createShader(renderMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgflatcolormaterial_compare_isbase) {
            qsgflatcolormaterial_compare_isbase = false;
            return QSGFlatColorMaterial::compare(other);
        }
        auto compare_cb = qsgflatcolormaterial_compare_callback;
        if (compare_cb) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = compare_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGFlatColorMaterial::compare(other);
    }
};

#endif
