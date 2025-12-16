#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOSHAPE_H
#define SRC_POSITIONINGC_LIBQGEOSHAPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoRectangle QGeoRectangle;
typedef struct QGeoShape QGeoShape;
#endif

QGeoShape* QGeoShape_new();
QGeoShape* QGeoShape_new2(const QGeoShape* other);
int QGeoShape_Type(const QGeoShape* self);
bool QGeoShape_IsValid(const QGeoShape* self);
bool QGeoShape_IsEmpty(const QGeoShape* self);
bool QGeoShape_Contains(const QGeoShape* self, const QGeoCoordinate* coordinate);
QGeoRectangle* QGeoShape_BoundingGeoRectangle(const QGeoShape* self);
QGeoCoordinate* QGeoShape_Center(const QGeoShape* self);
void QGeoShape_OperatorAssign(QGeoShape* self, const QGeoShape* other);
libqt_string QGeoShape_ToString(const QGeoShape* self);
void QGeoShape_Delete(QGeoShape* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
