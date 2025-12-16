#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOCOORDINATE_H
#define SRC_POSITIONINGC_LIBQGEOCOORDINATE_H

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
#endif

QGeoCoordinate* QGeoCoordinate_new();
QGeoCoordinate* QGeoCoordinate_new2(double latitude, double longitude);
QGeoCoordinate* QGeoCoordinate_new3(double latitude, double longitude, double altitude);
QGeoCoordinate* QGeoCoordinate_new4(const QGeoCoordinate* other);
void QGeoCoordinate_OperatorAssign(QGeoCoordinate* self, const QGeoCoordinate* other);
void QGeoCoordinate_Swap(QGeoCoordinate* self, QGeoCoordinate* other);
bool QGeoCoordinate_IsValid(const QGeoCoordinate* self);
int QGeoCoordinate_Type(const QGeoCoordinate* self);
void QGeoCoordinate_SetLatitude(QGeoCoordinate* self, double latitude);
double QGeoCoordinate_Latitude(const QGeoCoordinate* self);
void QGeoCoordinate_SetLongitude(QGeoCoordinate* self, double longitude);
double QGeoCoordinate_Longitude(const QGeoCoordinate* self);
void QGeoCoordinate_SetAltitude(QGeoCoordinate* self, double altitude);
double QGeoCoordinate_Altitude(const QGeoCoordinate* self);
double QGeoCoordinate_DistanceTo(const QGeoCoordinate* self, const QGeoCoordinate* other);
double QGeoCoordinate_AzimuthTo(const QGeoCoordinate* self, const QGeoCoordinate* other);
QGeoCoordinate* QGeoCoordinate_AtDistanceAndAzimuth(const QGeoCoordinate* self, double distance, double azimuth);
libqt_string QGeoCoordinate_ToString(const QGeoCoordinate* self);
QGeoCoordinate* QGeoCoordinate_AtDistanceAndAzimuth3(const QGeoCoordinate* self, double distance, double azimuth, double distanceUp);
libqt_string QGeoCoordinate_ToString1(const QGeoCoordinate* self, int format);
void QGeoCoordinate_Delete(QGeoCoordinate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
