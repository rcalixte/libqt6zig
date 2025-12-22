#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACECONTACTDETAIL_H
#define SRC_LOCATIONC_LIBQPLACECONTACTDETAIL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceContactDetail QPlaceContactDetail;
#endif

QPlaceContactDetail* QPlaceContactDetail_new();
QPlaceContactDetail* QPlaceContactDetail_new2(const QPlaceContactDetail* other);
void QPlaceContactDetail_OperatorAssign(QPlaceContactDetail* self, const QPlaceContactDetail* other);
void QPlaceContactDetail_Swap(QPlaceContactDetail* self, QPlaceContactDetail* other);
libqt_string QPlaceContactDetail_Label(const QPlaceContactDetail* self);
void QPlaceContactDetail_SetLabel(QPlaceContactDetail* self, const libqt_string label);
libqt_string QPlaceContactDetail_Value(const QPlaceContactDetail* self);
void QPlaceContactDetail_SetValue(QPlaceContactDetail* self, const libqt_string value);
void QPlaceContactDetail_Clear(QPlaceContactDetail* self);
void QPlaceContactDetail_Delete(QPlaceContactDetail* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
