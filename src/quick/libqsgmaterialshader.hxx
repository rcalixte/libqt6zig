#pragma once
#ifndef QUICK_LIBQSGMATERIALSHADER_HXX
#define QUICK_LIBQSGMATERIALSHADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGMaterialShader so that we can call protected methods
class VirtualQSGMaterialShader final : public QSGMaterialShader {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGMaterialShader = true;

    // Virtual class public types (including callbacks)
    using QSGMaterialShader_UpdateUniformData_Callback = bool (*)(QSGMaterialShader*, QSGMaterialShader__RenderState*, QSGMaterial*, QSGMaterial*);
    using QSGMaterialShader_UpdateSampledImage_Callback = void (*)(QSGMaterialShader*, QSGMaterialShader__RenderState*, int, QSGTexture**, QSGMaterial*, QSGMaterial*);
    using QSGMaterialShader_UpdateGraphicsPipelineState_Callback = bool (*)(QSGMaterialShader*, QSGMaterialShader__RenderState*, QSGMaterialShader__GraphicsPipelineState*, QSGMaterial*, QSGMaterial*);
    using QSGMaterialShader_SetShaderFileName_Callback = void (*)(QSGMaterialShader*, int, const char*);
    using QSGMaterialShader_SetShaderFileName2_Callback = void (*)(QSGMaterialShader*, int, const char*, int);

  protected:
    // Instance callback storage
    QSGMaterialShader_UpdateUniformData_Callback qsgmaterialshader_updateuniformdata_callback = nullptr;
    QSGMaterialShader_UpdateSampledImage_Callback qsgmaterialshader_updatesampledimage_callback = nullptr;
    QSGMaterialShader_UpdateGraphicsPipelineState_Callback qsgmaterialshader_updategraphicspipelinestate_callback = nullptr;
    QSGMaterialShader_SetShaderFileName_Callback qsgmaterialshader_setshaderfilename_callback = nullptr;
    QSGMaterialShader_SetShaderFileName2_Callback qsgmaterialshader_setshaderfilename2_callback = nullptr;

    // Instance base flags
    mutable bool qsgmaterialshader_updateuniformdata_isbase = false;
    mutable bool qsgmaterialshader_updatesampledimage_isbase = false;
    mutable bool qsgmaterialshader_updategraphicspipelinestate_isbase = false;
    mutable bool qsgmaterialshader_setshaderfilename_isbase = false;
    mutable bool qsgmaterialshader_setshaderfilename2_isbase = false;

  public:
    VirtualQSGMaterialShader() : QSGMaterialShader() {};

    // Callback setters
    inline void setQSGMaterialShader_UpdateUniformData_Callback(QSGMaterialShader_UpdateUniformData_Callback cb) { qsgmaterialshader_updateuniformdata_callback = cb; }
    inline void setQSGMaterialShader_UpdateSampledImage_Callback(QSGMaterialShader_UpdateSampledImage_Callback cb) { qsgmaterialshader_updatesampledimage_callback = cb; }
    inline void setQSGMaterialShader_UpdateGraphicsPipelineState_Callback(QSGMaterialShader_UpdateGraphicsPipelineState_Callback cb) { qsgmaterialshader_updategraphicspipelinestate_callback = cb; }
    inline void setQSGMaterialShader_SetShaderFileName_Callback(QSGMaterialShader_SetShaderFileName_Callback cb) { qsgmaterialshader_setshaderfilename_callback = cb; }
    inline void setQSGMaterialShader_SetShaderFileName2_Callback(QSGMaterialShader_SetShaderFileName2_Callback cb) { qsgmaterialshader_setshaderfilename2_callback = cb; }

    // Base flag setters
    inline void setQSGMaterialShader_UpdateUniformData_IsBase(bool value) const { qsgmaterialshader_updateuniformdata_isbase = value; }
    inline void setQSGMaterialShader_UpdateSampledImage_IsBase(bool value) const { qsgmaterialshader_updatesampledimage_isbase = value; }
    inline void setQSGMaterialShader_UpdateGraphicsPipelineState_IsBase(bool value) const { qsgmaterialshader_updategraphicspipelinestate_isbase = value; }
    inline void setQSGMaterialShader_SetShaderFileName_IsBase(bool value) const { qsgmaterialshader_setshaderfilename_isbase = value; }
    inline void setQSGMaterialShader_SetShaderFileName2_IsBase(bool value) const { qsgmaterialshader_setshaderfilename2_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool updateUniformData(QSGMaterialShader::RenderState& state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) override {
        if (qsgmaterialshader_updateuniformdata_isbase) {
            qsgmaterialshader_updateuniformdata_isbase = false;
            return QSGMaterialShader::updateUniformData(state, newMaterial, oldMaterial);
        }
        auto updateuniformdata_cb = qsgmaterialshader_updateuniformdata_callback;
        if (updateuniformdata_cb) {
            QSGMaterialShader::RenderState& state_ret = state;
            // Cast returned reference into pointer
            QSGMaterialShader__RenderState* cbval1 = &state_ret;
            QSGMaterial* cbval2 = newMaterial;
            QSGMaterial* cbval3 = oldMaterial;
            bool callback_ret = updateuniformdata_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSGMaterialShader::updateUniformData(state, newMaterial, oldMaterial);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSampledImage(QSGMaterialShader::RenderState& state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) override {
        if (qsgmaterialshader_updatesampledimage_isbase) {
            qsgmaterialshader_updatesampledimage_isbase = false;
            QSGMaterialShader::updateSampledImage(state, binding, texture, newMaterial, oldMaterial);
            return;
        }
        auto updatesampledimage_cb = qsgmaterialshader_updatesampledimage_callback;
        if (updatesampledimage_cb) {
            QSGMaterialShader::RenderState& state_ret = state;
            // Cast returned reference into pointer
            QSGMaterialShader__RenderState* cbval1 = &state_ret;
            int cbval2 = binding;
            QSGTexture** cbval3 = texture;
            QSGMaterial* cbval4 = newMaterial;
            QSGMaterial* cbval5 = oldMaterial;
            updatesampledimage_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return;
        }
        QSGMaterialShader::updateSampledImage(state, binding, texture, newMaterial, oldMaterial);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateGraphicsPipelineState(QSGMaterialShader::RenderState& state, QSGMaterialShader::GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) override {
        if (qsgmaterialshader_updategraphicspipelinestate_isbase) {
            qsgmaterialshader_updategraphicspipelinestate_isbase = false;
            return QSGMaterialShader::updateGraphicsPipelineState(state, ps, newMaterial, oldMaterial);
        }
        auto updategraphicspipelinestate_cb = qsgmaterialshader_updategraphicspipelinestate_callback;
        if (updategraphicspipelinestate_cb) {
            QSGMaterialShader::RenderState& state_ret = state;
            // Cast returned reference into pointer
            QSGMaterialShader__RenderState* cbval1 = &state_ret;
            QSGMaterialShader__GraphicsPipelineState* cbval2 = ps;
            QSGMaterial* cbval3 = newMaterial;
            QSGMaterial* cbval4 = oldMaterial;
            bool callback_ret = updategraphicspipelinestate_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QSGMaterialShader::updateGraphicsPipelineState(state, ps, newMaterial, oldMaterial);
    }

    // Virtual method for C ABI access and custom callback
    void setShaderFileName(QSGMaterialShader::Stage stage, const QString& filename) {
        if (qsgmaterialshader_setshaderfilename_isbase) {
            qsgmaterialshader_setshaderfilename_isbase = false;
            QSGMaterialShader::setShaderFileName(stage, filename);
            return;
        }
        auto setshaderfilename_cb = qsgmaterialshader_setshaderfilename_callback;
        if (setshaderfilename_cb) {
            int cbval1 = static_cast<int>(stage);
            const auto filename_ret = filename;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filename_b = filename_ret.toUtf8();
            auto filename_str_len = filename_b.length();
            const char* filename_str = static_cast<const char*>(malloc(filename_str_len + 1));
            memcpy((void*)filename_str, filename_b.data(), filename_str_len);
            ((char*)filename_str)[filename_str_len] = '\0';
            const char* cbval2 = filename_str;
            setshaderfilename_cb(this, cbval1, cbval2);
            libqt_free(filename_str);
            return;
        }
        QSGMaterialShader::setShaderFileName(stage, filename);
    }

    // Virtual method for C ABI access and custom callback
    void setShaderFileName(QSGMaterialShader::Stage stage, const QString& filename, int viewCount) {
        if (qsgmaterialshader_setshaderfilename2_isbase) {
            qsgmaterialshader_setshaderfilename2_isbase = false;
            QSGMaterialShader::setShaderFileName(stage, filename, viewCount);
            return;
        }
        auto setshaderfilename2_cb = qsgmaterialshader_setshaderfilename2_callback;
        if (setshaderfilename2_cb) {
            int cbval1 = static_cast<int>(stage);
            const auto filename_ret = filename;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filename_b = filename_ret.toUtf8();
            auto filename_str_len = filename_b.length();
            const char* filename_str = static_cast<const char*>(malloc(filename_str_len + 1));
            memcpy((void*)filename_str, filename_b.data(), filename_str_len);
            ((char*)filename_str)[filename_str_len] = '\0';
            const char* cbval2 = filename_str;
            int cbval3 = viewCount;
            setshaderfilename2_cb(this, cbval1, cbval2, cbval3);
            libqt_free(filename_str);
            return;
        }
        QSGMaterialShader::setShaderFileName(stage, filename, viewCount);
    }

    // Friend functions
    friend void QSGMaterialShader_SetShaderFileName(QSGMaterialShader* self, int stage, const libqt_string filename);
    friend void QSGMaterialShader_SuperSetShaderFileName(QSGMaterialShader* self, int stage, const libqt_string filename);
    friend void QSGMaterialShader_SetShaderFileName2(QSGMaterialShader* self, int stage, const libqt_string filename, int viewCount);
    friend void QSGMaterialShader_SuperSetShaderFileName2(QSGMaterialShader* self, int stage, const libqt_string filename, int viewCount);
};

#endif
