#pragma once
#ifndef QUICK_LIBQSGVERTEXCOLORMATERIAL_HXX
#define QUICK_LIBQSGVERTEXCOLORMATERIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGVertexColorMaterial
class VirtualQSGVertexColorMaterial final : public QSGVertexColorMaterial {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGVertexColorMaterial_Compare_Callback = int (*)(const QSGVertexColorMaterial*, QSGMaterial*);
    using QSGVertexColorMaterial_Type_Callback = QSGMaterialType* (*)(const QSGVertexColorMaterial*);
    using QSGVertexColorMaterial_CreateShader_Callback = QSGMaterialShader* (*)(const QSGVertexColorMaterial*, int);

    // Instance callback storage
    QSGVertexColorMaterial_Compare_Callback qsgvertexcolormaterial_compare_callback = nullptr;
    QSGVertexColorMaterial_Type_Callback qsgvertexcolormaterial_type_callback = nullptr;
    QSGVertexColorMaterial_CreateShader_Callback qsgvertexcolormaterial_createshader_callback = nullptr;

    // Access struct
    struct Base : QSGVertexColorMaterial {
        using QSGVertexColorMaterial::createShader;
        using QSGVertexColorMaterial::type;
    };

    VirtualQSGVertexColorMaterial() : QSGVertexColorMaterial() {};

    // Virtual method for C ABI access and custom callback
    virtual int compare(const QSGMaterial* other) const override {
        if (qsgvertexcolormaterial_compare_callback) {
            QSGMaterial* cbval1 = (QSGMaterial*)other;
            int callback_ret = qsgvertexcolormaterial_compare_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGVertexColorMaterial::compare(other);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialType* type() const override {
        if (qsgvertexcolormaterial_type_callback) {
            QSGMaterialType* callback_ret = qsgvertexcolormaterial_type_callback(this);
            return callback_ret;
        }
        return QSGVertexColorMaterial::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGMaterialShader* createShader(QSGRendererInterface::RenderMode renderMode) const override {
        if (qsgvertexcolormaterial_createshader_callback) {
            int cbval1 = static_cast<int>(renderMode);
            QSGMaterialShader* callback_ret = qsgvertexcolormaterial_createshader_callback(this, cbval1);
            return callback_ret;
        }
        return QSGVertexColorMaterial::createShader(renderMode);
    }

    // Friend functions
    friend QSGMaterialType* QSGVertexColorMaterial_SuperType(const QSGVertexColorMaterial* self);
    friend QSGMaterialShader* QSGVertexColorMaterial_SuperCreateShader(const QSGVertexColorMaterial* self, int renderMode);
};

#endif
