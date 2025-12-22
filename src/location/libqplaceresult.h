#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACERESULT_H
#define SRC_LOCATIONC_LIBQPLACERESULT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlace QPlace;
typedef struct QPlaceResult QPlaceResult;
typedef struct QPlaceSearchResult QPlaceSearchResult;
#endif

QPlaceResult* QPlaceResult_new();
QPlaceResult* QPlaceResult_new2(const QPlaceSearchResult* other);
QPlaceResult* QPlaceResult_new3(const QPlaceResult* param1);
double QPlaceResult_Distance(const QPlaceResult* self);
void QPlaceResult_SetDistance(QPlaceResult* self, double distance);
QPlace* QPlaceResult_Place(const QPlaceResult* self);
void QPlaceResult_SetPlace(QPlaceResult* self, const QPlace* place);
bool QPlaceResult_IsSponsored(const QPlaceResult* self);
void QPlaceResult_SetSponsored(QPlaceResult* self, bool sponsored);
void QPlaceResult_Delete(QPlaceResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
