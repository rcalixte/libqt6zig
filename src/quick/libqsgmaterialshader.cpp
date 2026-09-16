#include <QByteArray>
#include <QColor>
#include <QMatrix4x4>
#include <QRect>
#include <QSGMaterial>
#include <QSGMaterialShader>
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGMaterialShader__GraphicsPipelineState
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGMaterialShader__RenderState
#include <QSGTexture>
#include <QString>
#include <qsgmaterialshader.h>
#include "libqsgmaterialshader.h"
#include "libqsgmaterialshader.hxx"

QSGMaterialShader* QSGMaterialShader_new() {
    return new VirtualQSGMaterialShader();
}

bool QSGMaterialShader_UpdateUniformData(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) {
    return self->updateUniformData(*state, newMaterial, oldMaterial);
}

void QSGMaterialShader_UpdateSampledImage(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) {
    self->updateSampledImage(*state, static_cast<int>(binding), texture, newMaterial, oldMaterial);
}

bool QSGMaterialShader_UpdateGraphicsPipelineState(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterialShader__GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) {
    return self->updateGraphicsPipelineState(*state, ps, newMaterial, oldMaterial);
}

int QSGMaterialShader_Flags(const QSGMaterialShader* self) {
    return static_cast<int>(self->flags());
}

void QSGMaterialShader_SetFlag(QSGMaterialShader* self, int flags) {
    self->setFlag(static_cast<QSGMaterialShader::Flags>(flags));
}

void QSGMaterialShader_SetFlags(QSGMaterialShader* self, int flags) {
    self->setFlags(static_cast<QSGMaterialShader::Flags>(flags));
}

int QSGMaterialShader_CombinedImageSamplerCount(const QSGMaterialShader* self, int binding) {
    return self->combinedImageSamplerCount(static_cast<int>(binding));
}

void QSGMaterialShader_SetFlag2(QSGMaterialShader* self, int flags, bool on) {
    self->setFlag(static_cast<QSGMaterialShader::Flags>(flags), on);
}

// Base class handler implementation
bool QSGMaterialShader_SuperUpdateUniformData(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setQSGMaterialShader_UpdateUniformData_IsBase(true);
        return vqsgmaterialshader->updateUniformData(*state, newMaterial, oldMaterial);
    } else {
        return self->QSGMaterialShader::updateUniformData(*state, newMaterial, oldMaterial);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterialShader_OnUpdateUniformData(QSGMaterialShader* self, intptr_t slot) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader)
        vqsgmaterialshader->setQSGMaterialShader_UpdateUniformData_Callback(reinterpret_cast<VirtualQSGMaterialShader::QSGMaterialShader_UpdateUniformData_Callback>(slot));
}

// Base class handler implementation
void QSGMaterialShader_SuperUpdateSampledImage(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setQSGMaterialShader_UpdateSampledImage_IsBase(true);
        vqsgmaterialshader->updateSampledImage(*state, static_cast<int>(binding), texture, newMaterial, oldMaterial);
    } else {
        self->QSGMaterialShader::updateSampledImage(*state, static_cast<int>(binding), texture, newMaterial, oldMaterial);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterialShader_OnUpdateSampledImage(QSGMaterialShader* self, intptr_t slot) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader)
        vqsgmaterialshader->setQSGMaterialShader_UpdateSampledImage_Callback(reinterpret_cast<VirtualQSGMaterialShader::QSGMaterialShader_UpdateSampledImage_Callback>(slot));
}

// Base class handler implementation
bool QSGMaterialShader_SuperUpdateGraphicsPipelineState(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterialShader__GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setQSGMaterialShader_UpdateGraphicsPipelineState_IsBase(true);
        return vqsgmaterialshader->updateGraphicsPipelineState(*state, ps, newMaterial, oldMaterial);
    } else {
        return self->QSGMaterialShader::updateGraphicsPipelineState(*state, ps, newMaterial, oldMaterial);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterialShader_OnUpdateGraphicsPipelineState(QSGMaterialShader* self, intptr_t slot) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader)
        vqsgmaterialshader->setQSGMaterialShader_UpdateGraphicsPipelineState_Callback(reinterpret_cast<VirtualQSGMaterialShader::QSGMaterialShader_UpdateGraphicsPipelineState_Callback>(slot));
}

// Derived class handler implementation
void QSGMaterialShader_SetShaderFileName(QSGMaterialShader* self, int stage, const libqt_string filename) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString);
    } else {
        ((VirtualQSGMaterialShader*)self)->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString);
    }
}

// Base class handler implementation
void QSGMaterialShader_SuperSetShaderFileName(QSGMaterialShader* self, int stage, const libqt_string filename) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setQSGMaterialShader_SetShaderFileName_IsBase(true);
        vqsgmaterialshader->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString);
    } else {
        ((VirtualQSGMaterialShader*)self)->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterialShader_OnSetShaderFileName(QSGMaterialShader* self, intptr_t slot) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader)
        vqsgmaterialshader->setQSGMaterialShader_SetShaderFileName_Callback(reinterpret_cast<VirtualQSGMaterialShader::QSGMaterialShader_SetShaderFileName_Callback>(slot));
}

// Derived class handler implementation
void QSGMaterialShader_SetShaderFileName2(QSGMaterialShader* self, int stage, const libqt_string filename, int viewCount) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString, static_cast<int>(viewCount));
    } else {
        ((VirtualQSGMaterialShader*)self)->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString, static_cast<int>(viewCount));
    }
}

// Base class handler implementation
void QSGMaterialShader_SuperSetShaderFileName2(QSGMaterialShader* self, int stage, const libqt_string filename, int viewCount) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader) {
        vqsgmaterialshader->setQSGMaterialShader_SetShaderFileName2_IsBase(true);
        vqsgmaterialshader->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString, static_cast<int>(viewCount));
    } else {
        ((VirtualQSGMaterialShader*)self)->setShaderFileName(static_cast<QSGMaterialShader::Stage>(stage), filename_QString, static_cast<int>(viewCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterialShader_OnSetShaderFileName2(QSGMaterialShader* self, intptr_t slot) {
    auto* vqsgmaterialshader = dynamic_cast<VirtualQSGMaterialShader*>(self);
    if (vqsgmaterialshader && vqsgmaterialshader->isVirtualQSGMaterialShader)
        vqsgmaterialshader->setQSGMaterialShader_SetShaderFileName2_Callback(reinterpret_cast<VirtualQSGMaterialShader::QSGMaterialShader_SetShaderFileName2_Callback>(slot));
}

void QSGMaterialShader_Delete(QSGMaterialShader* self) {
    delete self;
}

QSGMaterialShader__RenderState* QSGMaterialShader__RenderState_new() {
    return new QSGMaterialShader::RenderState();
}

int QSGMaterialShader__RenderState_DirtyStates(const QSGMaterialShader__RenderState* self) {
    return static_cast<int>(self->dirtyStates());
}

bool QSGMaterialShader__RenderState_IsMatrixDirty(const QSGMaterialShader__RenderState* self) {
    return self->isMatrixDirty();
}

bool QSGMaterialShader__RenderState_IsOpacityDirty(const QSGMaterialShader__RenderState* self) {
    return self->isOpacityDirty();
}

float QSGMaterialShader__RenderState_Opacity(const QSGMaterialShader__RenderState* self) {
    return self->opacity();
}

QMatrix4x4* QSGMaterialShader__RenderState_CombinedMatrix(const QSGMaterialShader__RenderState* self) {
    return new QMatrix4x4(self->combinedMatrix());
}

QMatrix4x4* QSGMaterialShader__RenderState_CombinedMatrix2(const QSGMaterialShader__RenderState* self, ptrdiff_t index) {
    return new QMatrix4x4(self->combinedMatrix((qsizetype)(index)));
}

QMatrix4x4* QSGMaterialShader__RenderState_ModelViewMatrix(const QSGMaterialShader__RenderState* self) {
    return new QMatrix4x4(self->modelViewMatrix());
}

QMatrix4x4* QSGMaterialShader__RenderState_ProjectionMatrix(const QSGMaterialShader__RenderState* self) {
    return new QMatrix4x4(self->projectionMatrix());
}

QMatrix4x4* QSGMaterialShader__RenderState_ProjectionMatrix2(const QSGMaterialShader__RenderState* self, ptrdiff_t index) {
    return new QMatrix4x4(self->projectionMatrix((qsizetype)(index)));
}

ptrdiff_t QSGMaterialShader__RenderState_ProjectionMatrixCount(const QSGMaterialShader__RenderState* self) {
    return static_cast<ptrdiff_t>(self->projectionMatrixCount());
}

QRect* QSGMaterialShader__RenderState_ViewportRect(const QSGMaterialShader__RenderState* self) {
    return new QRect(self->viewportRect());
}

QRect* QSGMaterialShader__RenderState_DeviceRect(const QSGMaterialShader__RenderState* self) {
    return new QRect(self->deviceRect());
}

float QSGMaterialShader__RenderState_Determinant(const QSGMaterialShader__RenderState* self) {
    return self->determinant();
}

float QSGMaterialShader__RenderState_DevicePixelRatio(const QSGMaterialShader__RenderState* self) {
    return self->devicePixelRatio();
}

libqt_string QSGMaterialShader__RenderState_UniformData(QSGMaterialShader__RenderState* self) {
    QByteArray* _qb = self->uniformData();
    libqt_string _str;
    _str.len = _qb->length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb->data(), _str.len);
    return _str;
}

void QSGMaterialShader__RenderState_Delete(QSGMaterialShader__RenderState* self) {
    delete self;
}

QSGMaterialShader__GraphicsPipelineState* QSGMaterialShader__GraphicsPipelineState_new() {
    return new QSGMaterialShader::GraphicsPipelineState();
}

bool QSGMaterialShader__GraphicsPipelineState_BlendEnable(const QSGMaterialShader__GraphicsPipelineState* self) {
    return self->blendEnable;
}

void QSGMaterialShader__GraphicsPipelineState_SetBlendEnable(QSGMaterialShader__GraphicsPipelineState* self, bool blendEnable) {
    self->blendEnable = blendEnable;
}

int QSGMaterialShader__GraphicsPipelineState_SrcColor(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->srcColor);
}

void QSGMaterialShader__GraphicsPipelineState_SetSrcColor(QSGMaterialShader__GraphicsPipelineState* self, int srcColor) {
    self->srcColor = static_cast<QSGMaterialShader::GraphicsPipelineState::BlendFactor>(srcColor);
}

int QSGMaterialShader__GraphicsPipelineState_DstColor(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->dstColor);
}

void QSGMaterialShader__GraphicsPipelineState_SetDstColor(QSGMaterialShader__GraphicsPipelineState* self, int dstColor) {
    self->dstColor = static_cast<QSGMaterialShader::GraphicsPipelineState::BlendFactor>(dstColor);
}

int QSGMaterialShader__GraphicsPipelineState_ColorWrite(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->colorWrite);
}

void QSGMaterialShader__GraphicsPipelineState_SetColorWrite(QSGMaterialShader__GraphicsPipelineState* self, int colorWrite) {
    self->colorWrite = static_cast<QFlags<QSGMaterialShader::GraphicsPipelineState::ColorMaskComponent>>(colorWrite);
}

QColor* QSGMaterialShader__GraphicsPipelineState_BlendConstant(const QSGMaterialShader__GraphicsPipelineState* self) {
    return new QColor(self->blendConstant);
}

void QSGMaterialShader__GraphicsPipelineState_SetBlendConstant(QSGMaterialShader__GraphicsPipelineState* self, QColor* blendConstant) {
    self->blendConstant = *blendConstant;
}

int QSGMaterialShader__GraphicsPipelineState_CullMode(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->cullMode);
}

void QSGMaterialShader__GraphicsPipelineState_SetCullMode(QSGMaterialShader__GraphicsPipelineState* self, int cullMode) {
    self->cullMode = static_cast<QSGMaterialShader::GraphicsPipelineState::CullMode>(cullMode);
}

int QSGMaterialShader__GraphicsPipelineState_PolygonMode(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->polygonMode);
}

void QSGMaterialShader__GraphicsPipelineState_SetPolygonMode(QSGMaterialShader__GraphicsPipelineState* self, int polygonMode) {
    self->polygonMode = static_cast<QSGMaterialShader::GraphicsPipelineState::PolygonMode>(polygonMode);
}

bool QSGMaterialShader__GraphicsPipelineState_SeparateBlendFactors(const QSGMaterialShader__GraphicsPipelineState* self) {
    return self->separateBlendFactors;
}

void QSGMaterialShader__GraphicsPipelineState_SetSeparateBlendFactors(QSGMaterialShader__GraphicsPipelineState* self, bool separateBlendFactors) {
    self->separateBlendFactors = separateBlendFactors;
}

int QSGMaterialShader__GraphicsPipelineState_SrcAlpha(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->srcAlpha);
}

void QSGMaterialShader__GraphicsPipelineState_SetSrcAlpha(QSGMaterialShader__GraphicsPipelineState* self, int srcAlpha) {
    self->srcAlpha = static_cast<QSGMaterialShader::GraphicsPipelineState::BlendFactor>(srcAlpha);
}

int QSGMaterialShader__GraphicsPipelineState_DstAlpha(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->dstAlpha);
}

void QSGMaterialShader__GraphicsPipelineState_SetDstAlpha(QSGMaterialShader__GraphicsPipelineState* self, int dstAlpha) {
    self->dstAlpha = static_cast<QSGMaterialShader::GraphicsPipelineState::BlendFactor>(dstAlpha);
}

int QSGMaterialShader__GraphicsPipelineState_OpColor(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->opColor);
}

void QSGMaterialShader__GraphicsPipelineState_SetOpColor(QSGMaterialShader__GraphicsPipelineState* self, int opColor) {
    self->opColor = static_cast<QSGMaterialShader::GraphicsPipelineState::BlendOp>(opColor);
}

int QSGMaterialShader__GraphicsPipelineState_OpAlpha(const QSGMaterialShader__GraphicsPipelineState* self) {
    return static_cast<int>(self->opAlpha);
}

void QSGMaterialShader__GraphicsPipelineState_SetOpAlpha(QSGMaterialShader__GraphicsPipelineState* self, int opAlpha) {
    self->opAlpha = static_cast<QSGMaterialShader::GraphicsPipelineState::BlendOp>(opAlpha);
}

void QSGMaterialShader__GraphicsPipelineState_Delete(QSGMaterialShader__GraphicsPipelineState* self) {
    delete self;
}
