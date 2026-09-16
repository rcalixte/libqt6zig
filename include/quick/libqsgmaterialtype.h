#pragma once
#ifndef QUICK_LIBQSGMATERIALTYPE_H
#define QUICK_LIBQSGMATERIALTYPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSGMaterialType QSGMaterialType;
#endif

QSGMaterialType* QSGMaterialType_new(const QSGMaterialType* other);
QSGMaterialType* QSGMaterialType_new2(QSGMaterialType* other);
void QSGMaterialType_CopyAssign(QSGMaterialType* self, QSGMaterialType* other);
void QSGMaterialType_MoveAssign(QSGMaterialType* self, QSGMaterialType* other);
void QSGMaterialType_Delete(QSGMaterialType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
