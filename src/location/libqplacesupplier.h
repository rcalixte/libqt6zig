#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACESUPPLIER_H
#define SRC_LOCATIONC_LIBQPLACESUPPLIER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceIcon QPlaceIcon;
typedef struct QPlaceSupplier QPlaceSupplier;
typedef struct QUrl QUrl;
#endif

QPlaceSupplier* QPlaceSupplier_new();
QPlaceSupplier* QPlaceSupplier_new2(const QPlaceSupplier* other);
void QPlaceSupplier_OperatorAssign(QPlaceSupplier* self, const QPlaceSupplier* other);
void QPlaceSupplier_Swap(QPlaceSupplier* self, QPlaceSupplier* other);
libqt_string QPlaceSupplier_Name(const QPlaceSupplier* self);
void QPlaceSupplier_SetName(QPlaceSupplier* self, const libqt_string data);
libqt_string QPlaceSupplier_SupplierId(const QPlaceSupplier* self);
void QPlaceSupplier_SetSupplierId(QPlaceSupplier* self, const libqt_string identifier);
QUrl* QPlaceSupplier_Url(const QPlaceSupplier* self);
void QPlaceSupplier_SetUrl(QPlaceSupplier* self, const QUrl* data);
QPlaceIcon* QPlaceSupplier_Icon(const QPlaceSupplier* self);
void QPlaceSupplier_SetIcon(QPlaceSupplier* self, const QPlaceIcon* icon);
bool QPlaceSupplier_IsEmpty(const QPlaceSupplier* self);
void QPlaceSupplier_Delete(QPlaceSupplier* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
