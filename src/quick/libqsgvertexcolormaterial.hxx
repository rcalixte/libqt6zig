#pragma once
#ifndef QUICK_LIBQSGVERTEXCOLORMATERIAL_HXX
#define QUICK_LIBQSGVERTEXCOLORMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGVertexColorMaterial so that we can call protected methods
class VirtualQSGVertexColorMaterial final : public QSGVertexColorMaterial {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGVertexColorMaterial = true;

    // Virtual class public types (including callbacks)
    using QSGVertexColorMaterial_Compare_Callback = int (*)(const QSGVertexColorMaterial*, QSGMaterial*);
    using QSGVertexColorMaterial_Type_Callback = QSGMaterialType* (*)();
    using QSGVertexColorMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGVertexColorMaterial*, int);

  protected:
    // Instance callback storage
    QSGVertexColorMaterial_Compare_Callback qsgvertexcolormaterial_compare_callback = nullptr;
    QSGVertexColorMaterial_Type_Callback qsgvertexcolormaterial_type_callback = nullptr;
    QSGVertexColorMaterial_CreateShader_Callback qsgvertexcolormaterial_createshader_callback = nullptr;

    // Instance base flags
    mutable bool qsgvertexcolormaterial_compare_isbase = false;
    mutable bool qsgvertexcolormaterial_type_isbase = false;
    mutable bool qsgvertexcolormaterial_createshader_isbase = false;

  public:
    VirtualQSGVertexColorMaterial() : QSGVertexColorMaterial() {};

    // Callback setters
    inline void setQSGVertexColorMaterial_Compare_Callback(QSGVertexColorMaterial_Compare_Callback cb) { qsgvertexcolormaterial_compare_callback = cb; }
    inline void setQSGVertexColorMaterial_Type_Callback(QSGVertexColorMaterial_Type_Callback cb) { qsgvertexcolormaterial_type_callback = cb; }
    inline void setQSGVertexColorMaterial_CreateShader_Callback(QSGVertexColorMaterial_CreateShader_Callback cb) { qsgvertexcolormaterial_createshader_callback = cb; }

    // Base flag setters
    inline void setQSGVertexColorMaterial_Compare_IsBase(bool value) const { qsgvertexcolormaterial_compare_isbase = value; }
    inline void setQSGVertexColorMaterial_Type_IsBase(bool value) const { qsgvertexcolormaterial_type_isbase = value; }
    inline void setQSGVertexColorMaterial_CreateShader_IsBase(bool value) const { qsgvertexcolormaterial_createshader_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgvertexcolormaterial_compare_isbase) {
            qsgvertexcolormaterial_compare_isbase = false;
            return QSGVertexColorMaterial::compare(other);
        }
        auto compare_cb = qsgvertexcolormaterial_compare_callback;
        if (compare_cb) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = compare_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGVertexColorMaterial::compare(other);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgvertexcolormaterial_type_isbase) {
            qsgvertexcolormaterial_type_isbase = false;
            return QSGVertexColorMaterial::type();
        }
        auto type_cb = qsgvertexcolormaterial_type_callback;
        if (type_cb) {
            QSGMaterialType* callback_ret = type_cb();
            return callback_ret;
        }
        return QSGVertexColorMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgvertexcolormaterial_createshader_isbase) {
            qsgvertexcolormaterial_createshader_isbase = false;
            return QSGVertexColorMaterial::createShader(renderMode);
        }
        auto createshader_cb = qsgvertexcolormaterial_createshader_callback;
        if (createshader_cb) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = createshader_cb(this, cbval1);
            return callback_ret;
        }
        return QSGVertexColorMaterial::createShader(renderMode);
    }

    // Friend functions
    friend QSGMaterialType* QSGVertexColorMaterial_Type(const QSGVertexColorMaterial* self);
    friend QSGMaterialType* QSGVertexColorMaterial_SuperType(const QSGVertexColorMaterial* self);
    friend QSGMaterialShader* QSGVertexColorMaterial_CreateShader(const QSGVertexColorMaterial* self, int renderMode);
    friend QSGMaterialShader* QSGVertexColorMaterial_SuperCreateShader(const QSGVertexColorMaterial* self, int renderMode);
};

#endif
