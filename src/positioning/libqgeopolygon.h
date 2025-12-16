#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOPOLYGON_H
#define SRC_POSITIONINGC_LIBQGEOPOLYGON_H

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
typedef struct QGeoPolygon QGeoPolygon;
typedef struct QGeoShape QGeoShape;
typedef struct QVariant QVariant;
#endif

QGeoPolygon* QGeoPolygon_new();
QGeoPolygon* QGeoPolygon_new2(const libqt_list /* of QGeoCoordinate* */ path);
QGeoPolygon* QGeoPolygon_new3(const QGeoPolygon* other);
QGeoPolygon* QGeoPolygon_new4(const QGeoShape* other);
void QGeoPolygon_OperatorAssign(QGeoPolygon* self, const QGeoPolygon* other);
void QGeoPolygon_SetPerimeter(QGeoPolygon* self, const libqt_list /* of QGeoCoordinate* */ path);
libqt_list /* of QGeoCoordinate* */ QGeoPolygon_Perimeter(const QGeoPolygon* self);
void QGeoPolygon_AddHole(QGeoPolygon* self, const QVariant* holePath);
void QGeoPolygon_AddHole2(QGeoPolygon* self, const libqt_list /* of QGeoCoordinate* */ holePath);
libqt_list /* of QVariant* */ QGeoPolygon_Hole(const QGeoPolygon* self, ptrdiff_t index);
libqt_list /* of QGeoCoordinate* */ QGeoPolygon_HolePath(const QGeoPolygon* self, ptrdiff_t index);
void QGeoPolygon_RemoveHole(QGeoPolygon* self, ptrdiff_t index);
ptrdiff_t QGeoPolygon_HolesCount(const QGeoPolygon* self);
void QGeoPolygon_Translate(QGeoPolygon* self, double degreesLatitude, double degreesLongitude);
QGeoPolygon* QGeoPolygon_Translated(const QGeoPolygon* self, double degreesLatitude, double degreesLongitude);
double QGeoPolygon_Length(const QGeoPolygon* self);
ptrdiff_t QGeoPolygon_Size(const QGeoPolygon* self);
void QGeoPolygon_AddCoordinate(QGeoPolygon* self, const QGeoCoordinate* coordinate);
void QGeoPolygon_InsertCoordinate(QGeoPolygon* self, ptrdiff_t index, const QGeoCoordinate* coordinate);
void QGeoPolygon_ReplaceCoordinate(QGeoPolygon* self, ptrdiff_t index, const QGeoCoordinate* coordinate);
QGeoCoordinate* QGeoPolygon_CoordinateAt(const QGeoPolygon* self, ptrdiff_t index);
bool QGeoPolygon_ContainsCoordinate(const QGeoPolygon* self, const QGeoCoordinate* coordinate);
void QGeoPolygon_RemoveCoordinate(QGeoPolygon* self, const QGeoCoordinate* coordinate);
void QGeoPolygon_RemoveCoordinate2(QGeoPolygon* self, ptrdiff_t index);
libqt_string QGeoPolygon_ToString(const QGeoPolygon* self);
double QGeoPolygon_Length1(const QGeoPolygon* self, ptrdiff_t indexFrom);
double QGeoPolygon_Length2(const QGeoPolygon* self, ptrdiff_t indexFrom, ptrdiff_t indexTo);
void QGeoPolygon_Delete(QGeoPolygon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
