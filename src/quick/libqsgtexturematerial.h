#pragma once
#ifndef QUICK_LIBQSGTEXTUREMATERIAL_H
#define QUICK_LIBQSGTEXTUREMATERIAL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSGMaterial QSGMaterial;
typedef struct QSGMaterialShader QSGMaterialShader;
typedef struct QSGMaterialType QSGMaterialType;
typedef struct QSGOpaqueTextureMaterial QSGOpaqueTextureMaterial;
typedef struct QSGTexture QSGTexture;
typedef struct QSGTextureMaterial QSGTextureMaterial;
#endif

QSGOpaqueTextureMaterial* QSGOpaqueTextureMaterial_new();
QSGMaterialType* QSGOpaqueTextureMaterial_Type(const QSGOpaqueTextureMaterial* self);
QSGMaterialShader* QSGOpaqueTextureMaterial_CreateShader(const QSGOpaqueTextureMaterial* self, int renderMode);
int QSGOpaqueTextureMaterial_Compare(const QSGOpaqueTextureMaterial* self, const QSGMaterial* other);
void QSGOpaqueTextureMaterial_SetTexture(QSGOpaqueTextureMaterial* self, QSGTexture* texture);
QSGTexture* QSGOpaqueTextureMaterial_Texture(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_SetMipmapFiltering(QSGOpaqueTextureMaterial* self, int filteringType);
int QSGOpaqueTextureMaterial_MipmapFiltering(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_SetFiltering(QSGOpaqueTextureMaterial* self, int filteringType);
int QSGOpaqueTextureMaterial_Filtering(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_SetHorizontalWrapMode(QSGOpaqueTextureMaterial* self, int mode);
int QSGOpaqueTextureMaterial_HorizontalWrapMode(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_SetVerticalWrapMode(QSGOpaqueTextureMaterial* self, int mode);
int QSGOpaqueTextureMaterial_VerticalWrapMode(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_SetAnisotropyLevel(QSGOpaqueTextureMaterial* self, int level);
int QSGOpaqueTextureMaterial_AnisotropyLevel(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_OnType(const QSGOpaqueTextureMaterial* self, intptr_t slot);
QSGMaterialType* QSGOpaqueTextureMaterial_SuperType(const QSGOpaqueTextureMaterial* self);
void QSGOpaqueTextureMaterial_OnCreateShader(const QSGOpaqueTextureMaterial* self, intptr_t slot);
QSGMaterialShader* QSGOpaqueTextureMaterial_SuperCreateShader(const QSGOpaqueTextureMaterial* self, int renderMode);
void QSGOpaqueTextureMaterial_OnCompare(const QSGOpaqueTextureMaterial* self, intptr_t slot);
int QSGOpaqueTextureMaterial_SuperCompare(const QSGOpaqueTextureMaterial* self, const QSGMaterial* other);
void QSGOpaqueTextureMaterial_Delete(QSGOpaqueTextureMaterial* self);

QSGTextureMaterial* QSGTextureMaterial_new();
QSGMaterialType* QSGTextureMaterial_Type(const QSGTextureMaterial* self);
QSGMaterialShader* QSGTextureMaterial_CreateShader(const QSGTextureMaterial* self, int renderMode);
void QSGTextureMaterial_OnType(const QSGTextureMaterial* self, intptr_t slot);
QSGMaterialType* QSGTextureMaterial_SuperType(const QSGTextureMaterial* self);
void QSGTextureMaterial_OnCreateShader(const QSGTextureMaterial* self, intptr_t slot);
QSGMaterialShader* QSGTextureMaterial_SuperCreateShader(const QSGTextureMaterial* self, int renderMode);
int QSGTextureMaterial_Compare(const QSGTextureMaterial* self, const QSGMaterial* other);
void QSGTextureMaterial_OnCompare(const QSGTextureMaterial* self, intptr_t slot);
int QSGTextureMaterial_SuperCompare(const QSGTextureMaterial* self, const QSGMaterial* other);
void QSGTextureMaterial_Delete(QSGTextureMaterial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
