#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOCIRCLE_H
#define SRC_POSITIONINGC_LIBQGEOCIRCLE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoCircle QGeoCircle;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoShape QGeoShape;
#endif

QGeoCircle* QGeoCircle_new();
QGeoCircle* QGeoCircle_new2(const QGeoCoordinate* center);
QGeoCircle* QGeoCircle_new3(const QGeoCircle* other);
QGeoCircle* QGeoCircle_new4(const QGeoShape* other);
QGeoCircle* QGeoCircle_new5(const QGeoCoordinate* center, double radius);
void QGeoCircle_OperatorAssign(QGeoCircle* self, const QGeoCircle* other);
void QGeoCircle_SetCenter(QGeoCircle* self, const QGeoCoordinate* center);
QGeoCoordinate* QGeoCircle_Center(const QGeoCircle* self);
void QGeoCircle_SetRadius(QGeoCircle* self, double radius);
double QGeoCircle_Radius(const QGeoCircle* self);
void QGeoCircle_Translate(QGeoCircle* self, double degreesLatitude, double degreesLongitude);
QGeoCircle* QGeoCircle_Translated(const QGeoCircle* self, double degreesLatitude, double degreesLongitude);
void QGeoCircle_ExtendCircle(QGeoCircle* self, const QGeoCoordinate* coordinate);
libqt_string QGeoCircle_ToString(const QGeoCircle* self);
void QGeoCircle_Delete(QGeoCircle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
