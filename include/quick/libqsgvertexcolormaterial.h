#pragma once
#ifndef QUICK_LIBQSGVERTEXCOLORMATERIAL_H
#define QUICK_LIBQSGVERTEXCOLORMATERIAL_H

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
typedef struct QSGVertexColorMaterial QSGVertexColorMaterial;
#endif

QSGVertexColorMaterial* QSGVertexColorMaterial_new();
int QSGVertexColorMaterial_Compare(const QSGVertexColorMaterial* self, const QSGMaterial* other);
QSGMaterialType* QSGVertexColorMaterial_Type(const QSGVertexColorMaterial* self);
QSGMaterialShader* QSGVertexColorMaterial_CreateShader(const QSGVertexColorMaterial* self, int renderMode);
void QSGVertexColorMaterial_OnCompare(const QSGVertexColorMaterial* self, intptr_t slot);
int QSGVertexColorMaterial_SuperCompare(const QSGVertexColorMaterial* self, const QSGMaterial* other);
void QSGVertexColorMaterial_OnType(const QSGVertexColorMaterial* self, intptr_t slot);
QSGMaterialType* QSGVertexColorMaterial_SuperType(const QSGVertexColorMaterial* self);
void QSGVertexColorMaterial_OnCreateShader(const QSGVertexColorMaterial* self, intptr_t slot);
QSGMaterialShader* QSGVertexColorMaterial_SuperCreateShader(const QSGVertexColorMaterial* self, int renderMode);
void QSGVertexColorMaterial_Delete(QSGVertexColorMaterial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
