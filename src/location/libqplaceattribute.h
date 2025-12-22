#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEATTRIBUTE_H
#define SRC_LOCATIONC_LIBQPLACEATTRIBUTE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceAttribute QPlaceAttribute;
#endif

QPlaceAttribute* QPlaceAttribute_new();
QPlaceAttribute* QPlaceAttribute_new2(const QPlaceAttribute* other);
void QPlaceAttribute_OperatorAssign(QPlaceAttribute* self, const QPlaceAttribute* other);
void QPlaceAttribute_Swap(QPlaceAttribute* self, QPlaceAttribute* other);
libqt_string QPlaceAttribute_Label(const QPlaceAttribute* self);
void QPlaceAttribute_SetLabel(QPlaceAttribute* self, const libqt_string label);
libqt_string QPlaceAttribute_Text(const QPlaceAttribute* self);
void QPlaceAttribute_SetText(QPlaceAttribute* self, const libqt_string text);
bool QPlaceAttribute_IsEmpty(const QPlaceAttribute* self);
void QPlaceAttribute_Delete(QPlaceAttribute* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
