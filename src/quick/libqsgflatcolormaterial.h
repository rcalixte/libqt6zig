#pragma once
#ifndef QUICK_LIBQSGFLATCOLORMATERIAL_H
#define QUICK_LIBQSGFLATCOLORMATERIAL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QSGFlatColorMaterial QSGFlatColorMaterial;
typedef struct QSGMaterial QSGMaterial;
typedef struct QSGMaterialShader QSGMaterialShader;
typedef struct QSGMaterialType QSGMaterialType;
#endif

QSGFlatColorMaterial* QSGFlatColorMaterial_new();
QSGMaterialType* QSGFlatColorMaterial_Type(const QSGFlatColorMaterial* self);
QSGMaterialShader* QSGFlatColorMaterial_CreateShader(const QSGFlatColorMaterial* self, int renderMode);
void QSGFlatColorMaterial_SetColor(QSGFlatColorMaterial* self, const QColor* color);
QColor* QSGFlatColorMaterial_Color(const QSGFlatColorMaterial* self);
int QSGFlatColorMaterial_Compare(const QSGFlatColorMaterial* self, const QSGMaterial* other);
void QSGFlatColorMaterial_OnType(const QSGFlatColorMaterial* self, intptr_t slot);
QSGMaterialType* QSGFlatColorMaterial_SuperType(const QSGFlatColorMaterial* self);
void QSGFlatColorMaterial_OnCreateShader(const QSGFlatColorMaterial* self, intptr_t slot);
QSGMaterialShader* QSGFlatColorMaterial_SuperCreateShader(const QSGFlatColorMaterial* self, int renderMode);
void QSGFlatColorMaterial_OnCompare(const QSGFlatColorMaterial* self, intptr_t slot);
int QSGFlatColorMaterial_SuperCompare(const QSGFlatColorMaterial* self, const QSGMaterial* other);
void QSGFlatColorMaterial_Delete(QSGFlatColorMaterial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
