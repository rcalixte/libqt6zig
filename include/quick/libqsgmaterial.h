#pragma once
#ifndef QUICK_LIBQSGMATERIAL_H
#define QUICK_LIBQSGMATERIAL_H

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
#endif

QSGMaterial* QSGMaterial_new();
QSGMaterialType* QSGMaterial_Type(const QSGMaterial* self);
QSGMaterialShader* QSGMaterial_CreateShader(const QSGMaterial* self, int renderMode);
int QSGMaterial_Compare(const QSGMaterial* self, const QSGMaterial* other);
int QSGMaterial_Flags(const QSGMaterial* self);
void QSGMaterial_SetFlag(QSGMaterial* self, int flags);
int QSGMaterial_ViewCount(const QSGMaterial* self);
void QSGMaterial_SetFlag2(QSGMaterial* self, int flags, bool on);
void QSGMaterial_OnType(const QSGMaterial* self, intptr_t slot);
QSGMaterialType* QSGMaterial_SuperType(const QSGMaterial* self);
void QSGMaterial_OnCreateShader(const QSGMaterial* self, intptr_t slot);
QSGMaterialShader* QSGMaterial_SuperCreateShader(const QSGMaterial* self, int renderMode);
void QSGMaterial_OnCompare(const QSGMaterial* self, intptr_t slot);
int QSGMaterial_SuperCompare(const QSGMaterial* self, const QSGMaterial* other);
void QSGMaterial_Delete(QSGMaterial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
