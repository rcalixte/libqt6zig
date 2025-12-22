#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACECATEGORY_H
#define SRC_LOCATIONC_LIBQPLACECATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceCategory QPlaceCategory;
typedef struct QPlaceIcon QPlaceIcon;
#endif

QPlaceCategory* QPlaceCategory_new();
QPlaceCategory* QPlaceCategory_new2(const QPlaceCategory* other);
void QPlaceCategory_OperatorAssign(QPlaceCategory* self, const QPlaceCategory* other);
void QPlaceCategory_Swap(QPlaceCategory* self, QPlaceCategory* other);
libqt_string QPlaceCategory_CategoryId(const QPlaceCategory* self);
void QPlaceCategory_SetCategoryId(QPlaceCategory* self, const libqt_string identifier);
libqt_string QPlaceCategory_Name(const QPlaceCategory* self);
void QPlaceCategory_SetName(QPlaceCategory* self, const libqt_string name);
int QPlaceCategory_Visibility(const QPlaceCategory* self);
void QPlaceCategory_SetVisibility(QPlaceCategory* self, int visibility);
QPlaceIcon* QPlaceCategory_Icon(const QPlaceCategory* self);
void QPlaceCategory_SetIcon(QPlaceCategory* self, const QPlaceIcon* icon);
bool QPlaceCategory_IsEmpty(const QPlaceCategory* self);
void QPlaceCategory_Delete(QPlaceCategory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
