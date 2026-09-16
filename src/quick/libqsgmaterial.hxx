#pragma once
#ifndef QUICK_LIBQSGMATERIAL_HXX
#define QUICK_LIBQSGMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGMaterial so that we can call protected methods
class VirtualQSGMaterial : public QSGMaterial {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGMaterial = true;

    // Virtual class public types (including callbacks)
    using QSGMaterial_Type_Callback = QSGMaterialType* (*)();
    using QSGMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGMaterial*, int);
    using QSGMaterial_Compare_Callback = int (*)(const QSGMaterial*, QSGMaterial*);

  protected:
    // Instance callback storage
    QSGMaterial_Type_Callback qsgmaterial_type_callback = nullptr;
    QSGMaterial_CreateShader_Callback qsgmaterial_createshader_callback = nullptr;
    QSGMaterial_Compare_Callback qsgmaterial_compare_callback = nullptr;

    // Instance base flags
    mutable bool qsgmaterial_type_isbase = false;
    mutable bool qsgmaterial_createshader_isbase = false;
    mutable bool qsgmaterial_compare_isbase = false;

  public:
    VirtualQSGMaterial() : QSGMaterial() {};

    // Callback setters
    inline void setQSGMaterial_Type_Callback(QSGMaterial_Type_Callback cb) { qsgmaterial_type_callback = cb; }
    inline void setQSGMaterial_CreateShader_Callback(QSGMaterial_CreateShader_Callback cb) { qsgmaterial_createshader_callback = cb; }
    inline void setQSGMaterial_Compare_Callback(QSGMaterial_Compare_Callback cb) { qsgmaterial_compare_callback = cb; }

    // Base flag setters
    inline void setQSGMaterial_Type_IsBase(bool value) const { qsgmaterial_type_isbase = value; }
    inline void setQSGMaterial_CreateShader_IsBase(bool value) const { qsgmaterial_createshader_isbase = value; }
    inline void setQSGMaterial_Compare_IsBase(bool value) const { qsgmaterial_compare_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        auto type_cb = qsgmaterial_type_callback;
        if (type_cb) {
            QSGMaterialType* callback_ret = type_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        auto createshader_cb = qsgmaterial_createshader_callback;
        if (createshader_cb) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = createshader_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgmaterial_compare_isbase) {
            qsgmaterial_compare_isbase = false;
            return QSGMaterial::compare(other);
        }
        auto compare_cb = qsgmaterial_compare_callback;
        if (compare_cb) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = compare_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGMaterial::compare(other);
    }
};

#endif
