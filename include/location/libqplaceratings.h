#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACERATINGS_H
#define SRC_LOCATIONC_LIBQPLACERATINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceRatings QPlaceRatings;
#endif

QPlaceRatings* QPlaceRatings_new();
QPlaceRatings* QPlaceRatings_new2(const QPlaceRatings* other);
void QPlaceRatings_OperatorAssign(QPlaceRatings* self, const QPlaceRatings* other);
void QPlaceRatings_Swap(QPlaceRatings* self, QPlaceRatings* other);
double QPlaceRatings_Average(const QPlaceRatings* self);
void QPlaceRatings_SetAverage(QPlaceRatings* self, double average);
int QPlaceRatings_Count(const QPlaceRatings* self);
void QPlaceRatings_SetCount(QPlaceRatings* self, int count);
double QPlaceRatings_Maximum(const QPlaceRatings* self);
void QPlaceRatings_SetMaximum(QPlaceRatings* self, double max);
bool QPlaceRatings_IsEmpty(const QPlaceRatings* self);
void QPlaceRatings_Delete(QPlaceRatings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
