#pragma once
#ifndef QUICK_LIBQSGMATERIALSHADER_H
#define QUICK_LIBQSGMATERIALSHADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGMaterialShader__GraphicsPipelineState)
typedef QSGMaterialShader::GraphicsPipelineState QSGMaterialShader__GraphicsPipelineState;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGMaterialShader__RenderState)
typedef QSGMaterialShader::RenderState QSGMaterialShader__RenderState;
#endif
#else
typedef struct QColor QColor;
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QRect QRect;
typedef struct QSGMaterial QSGMaterial;
typedef struct QSGMaterialShader QSGMaterialShader;
typedef struct QSGMaterialShader__GraphicsPipelineState QSGMaterialShader__GraphicsPipelineState;
typedef struct QSGMaterialShader__RenderState QSGMaterialShader__RenderState;
typedef struct QSGTexture QSGTexture;
#endif

QSGMaterialShader* QSGMaterialShader_new();
bool QSGMaterialShader_UpdateUniformData(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial);
void QSGMaterialShader_UpdateSampledImage(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial);
bool QSGMaterialShader_UpdateGraphicsPipelineState(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterialShader__GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial);
int QSGMaterialShader_Flags(const QSGMaterialShader* self);
void QSGMaterialShader_SetFlag(QSGMaterialShader* self, int flags);
void QSGMaterialShader_SetFlags(QSGMaterialShader* self, int flags);
int QSGMaterialShader_CombinedImageSamplerCount(const QSGMaterialShader* self, int binding);
void QSGMaterialShader_SetFlag2(QSGMaterialShader* self, int flags, bool on);
void QSGMaterialShader_OnUpdateUniformData(QSGMaterialShader* self, intptr_t slot);
bool QSGMaterialShader_SuperUpdateUniformData(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial);
void QSGMaterialShader_OnUpdateSampledImage(QSGMaterialShader* self, intptr_t slot);
void QSGMaterialShader_SuperUpdateSampledImage(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial);
void QSGMaterialShader_OnUpdateGraphicsPipelineState(QSGMaterialShader* self, intptr_t slot);
bool QSGMaterialShader_SuperUpdateGraphicsPipelineState(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterialShader__GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial);
void QSGMaterialShader_SetShaderFileName(QSGMaterialShader* self, int stage, const libqt_string filename);
void QSGMaterialShader_OnSetShaderFileName(QSGMaterialShader* self, intptr_t slot);
void QSGMaterialShader_SuperSetShaderFileName(QSGMaterialShader* self, int stage, const libqt_string filename);
void QSGMaterialShader_SetShaderFileName2(QSGMaterialShader* self, int stage, const libqt_string filename, int viewCount);
void QSGMaterialShader_OnSetShaderFileName2(QSGMaterialShader* self, intptr_t slot);
void QSGMaterialShader_SuperSetShaderFileName2(QSGMaterialShader* self, int stage, const libqt_string filename, int viewCount);
void QSGMaterialShader_Delete(QSGMaterialShader* self);

QSGMaterialShader__RenderState* QSGMaterialShader__RenderState_new();
int QSGMaterialShader__RenderState_DirtyStates(const QSGMaterialShader__RenderState* self);
bool QSGMaterialShader__RenderState_IsMatrixDirty(const QSGMaterialShader__RenderState* self);
bool QSGMaterialShader__RenderState_IsOpacityDirty(const QSGMaterialShader__RenderState* self);
float QSGMaterialShader__RenderState_Opacity(const QSGMaterialShader__RenderState* self);
QMatrix4x4* QSGMaterialShader__RenderState_CombinedMatrix(const QSGMaterialShader__RenderState* self);
QMatrix4x4* QSGMaterialShader__RenderState_CombinedMatrix2(const QSGMaterialShader__RenderState* self, ptrdiff_t index);
QMatrix4x4* QSGMaterialShader__RenderState_ModelViewMatrix(const QSGMaterialShader__RenderState* self);
QMatrix4x4* QSGMaterialShader__RenderState_ProjectionMatrix(const QSGMaterialShader__RenderState* self);
QMatrix4x4* QSGMaterialShader__RenderState_ProjectionMatrix2(const QSGMaterialShader__RenderState* self, ptrdiff_t index);
ptrdiff_t QSGMaterialShader__RenderState_ProjectionMatrixCount(const QSGMaterialShader__RenderState* self);
QRect* QSGMaterialShader__RenderState_ViewportRect(const QSGMaterialShader__RenderState* self);
QRect* QSGMaterialShader__RenderState_DeviceRect(const QSGMaterialShader__RenderState* self);
float QSGMaterialShader__RenderState_Determinant(const QSGMaterialShader__RenderState* self);
float QSGMaterialShader__RenderState_DevicePixelRatio(const QSGMaterialShader__RenderState* self);
libqt_string QSGMaterialShader__RenderState_UniformData(QSGMaterialShader__RenderState* self);
void QSGMaterialShader__RenderState_Delete(QSGMaterialShader__RenderState* self);

QSGMaterialShader__GraphicsPipelineState* QSGMaterialShader__GraphicsPipelineState_new();
bool QSGMaterialShader__GraphicsPipelineState_BlendEnable(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetBlendEnable(QSGMaterialShader__GraphicsPipelineState* self, bool blendEnable);
int QSGMaterialShader__GraphicsPipelineState_SrcColor(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetSrcColor(QSGMaterialShader__GraphicsPipelineState* self, int srcColor);
int QSGMaterialShader__GraphicsPipelineState_DstColor(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetDstColor(QSGMaterialShader__GraphicsPipelineState* self, int dstColor);
int QSGMaterialShader__GraphicsPipelineState_ColorWrite(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetColorWrite(QSGMaterialShader__GraphicsPipelineState* self, int colorWrite);
QColor* QSGMaterialShader__GraphicsPipelineState_BlendConstant(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetBlendConstant(QSGMaterialShader__GraphicsPipelineState* self, QColor* blendConstant);
int QSGMaterialShader__GraphicsPipelineState_CullMode(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetCullMode(QSGMaterialShader__GraphicsPipelineState* self, int cullMode);
int QSGMaterialShader__GraphicsPipelineState_PolygonMode(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetPolygonMode(QSGMaterialShader__GraphicsPipelineState* self, int polygonMode);
bool QSGMaterialShader__GraphicsPipelineState_SeparateBlendFactors(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetSeparateBlendFactors(QSGMaterialShader__GraphicsPipelineState* self, bool separateBlendFactors);
int QSGMaterialShader__GraphicsPipelineState_SrcAlpha(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetSrcAlpha(QSGMaterialShader__GraphicsPipelineState* self, int srcAlpha);
int QSGMaterialShader__GraphicsPipelineState_DstAlpha(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetDstAlpha(QSGMaterialShader__GraphicsPipelineState* self, int dstAlpha);
int QSGMaterialShader__GraphicsPipelineState_OpColor(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetOpColor(QSGMaterialShader__GraphicsPipelineState* self, int opColor);
int QSGMaterialShader__GraphicsPipelineState_OpAlpha(const QSGMaterialShader__GraphicsPipelineState* self);
void QSGMaterialShader__GraphicsPipelineState_SetOpAlpha(QSGMaterialShader__GraphicsPipelineState* self, int opAlpha);
void QSGMaterialShader__GraphicsPipelineState_Delete(QSGMaterialShader__GraphicsPipelineState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
