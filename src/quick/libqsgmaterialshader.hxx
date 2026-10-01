#pragma once
#ifndef QUICK_LIBQSGMATERIALSHADER_HXX
#define QUICK_LIBQSGMATERIALSHADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGMaterialShader
class VirtualQSGMaterialShader final : public QSGMaterialShader {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGMaterialShader_UpdateUniformData_Callback = bool (*)(QSGMaterialShader*, QSGMaterialShader__RenderState*, QSGMaterial*, QSGMaterial*);
    using QSGMaterialShader_UpdateSampledImage_Callback = void (*)(QSGMaterialShader*, QSGMaterialShader__RenderState*, int, QSGTexture**, QSGMaterial*, QSGMaterial*);
    using QSGMaterialShader_UpdateGraphicsPipelineState_Callback = bool (*)(QSGMaterialShader*, QSGMaterialShader__RenderState*, QSGMaterialShader__GraphicsPipelineState*, QSGMaterial*, QSGMaterial*);
    using QSGMaterialShader::setShaderFileName;

    // Instance callback storage
    QSGMaterialShader_UpdateUniformData_Callback qsgmaterialshader_updateuniformdata_callback = nullptr;
    QSGMaterialShader_UpdateSampledImage_Callback qsgmaterialshader_updatesampledimage_callback = nullptr;
    QSGMaterialShader_UpdateGraphicsPipelineState_Callback qsgmaterialshader_updategraphicspipelinestate_callback = nullptr;

    VirtualQSGMaterialShader() : QSGMaterialShader() {};

    // Virtual method for C ABI access and custom callback
    virtual bool updateUniformData(QSGMaterialShader::RenderState& state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) override {
        if (qsgmaterialshader_updateuniformdata_callback) {
            QSGMaterialShader::RenderState& state_ret = state;
            // Cast returned reference into pointer
            QSGMaterialShader__RenderState* cbval1 = &state_ret;
            QSGMaterial* cbval2 = newMaterial;
            QSGMaterial* cbval3 = oldMaterial;
            bool callback_ret = qsgmaterialshader_updateuniformdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSGMaterialShader::updateUniformData(state, newMaterial, oldMaterial);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSampledImage(QSGMaterialShader::RenderState& state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) override {
        if (qsgmaterialshader_updatesampledimage_callback) {
            QSGMaterialShader::RenderState& state_ret = state;
            // Cast returned reference into pointer
            QSGMaterialShader__RenderState* cbval1 = &state_ret;
            int cbval2 = binding;
            QSGTexture** cbval3 = texture;
            QSGMaterial* cbval4 = newMaterial;
            QSGMaterial* cbval5 = oldMaterial;
            qsgmaterialshader_updatesampledimage_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return;
        }
        QSGMaterialShader::updateSampledImage(state, binding, texture, newMaterial, oldMaterial);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateGraphicsPipelineState(QSGMaterialShader::RenderState& state, QSGMaterialShader::GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) override {
        if (qsgmaterialshader_updategraphicspipelinestate_callback) {
            QSGMaterialShader::RenderState& state_ret = state;
            // Cast returned reference into pointer
            QSGMaterialShader__RenderState* cbval1 = &state_ret;
            QSGMaterialShader__GraphicsPipelineState* cbval2 = ps;
            QSGMaterial* cbval3 = newMaterial;
            QSGMaterial* cbval4 = oldMaterial;
            bool callback_ret = qsgmaterialshader_updategraphicspipelinestate_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QSGMaterialShader::updateGraphicsPipelineState(state, ps, newMaterial, oldMaterial);
    }
};

#endif
