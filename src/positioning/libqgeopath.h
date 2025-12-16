#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOPATH_H
#define SRC_POSITIONINGC_LIBQGEOPATH_H

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
typedef struct QGeoPath QGeoPath;
typedef struct QGeoShape QGeoShape;
typedef struct QVariant QVariant;
#endif

QGeoPath* QGeoPath_new();
QGeoPath* QGeoPath_new2(const libqt_list /* of QGeoCoordinate* */ path);
QGeoPath* QGeoPath_new3(const QGeoPath* other);
QGeoPath* QGeoPath_new4(const QGeoShape* other);
QGeoPath* QGeoPath_new5(const libqt_list /* of QGeoCoordinate* */ path, const double* width);
void QGeoPath_OperatorAssign(QGeoPath* self, const QGeoPath* other);
void QGeoPath_SetPath(QGeoPath* self, const libqt_list /* of QGeoCoordinate* */ path);
libqt_list /* of QGeoCoordinate* */ QGeoPath_Path(const QGeoPath* self);
void QGeoPath_ClearPath(QGeoPath* self);
void QGeoPath_SetVariantPath(QGeoPath* self, const libqt_list /* of QVariant* */ path);
libqt_list /* of QVariant* */ QGeoPath_VariantPath(const QGeoPath* self);
void QGeoPath_SetWidth(QGeoPath* self, const double* width);
double QGeoPath_Width(const QGeoPath* self);
void QGeoPath_Translate(QGeoPath* self, double degreesLatitude, double degreesLongitude);
QGeoPath* QGeoPath_Translated(const QGeoPath* self, double degreesLatitude, double degreesLongitude);
double QGeoPath_Length(const QGeoPath* self);
ptrdiff_t QGeoPath_Size(const QGeoPath* self);
void QGeoPath_AddCoordinate(QGeoPath* self, const QGeoCoordinate* coordinate);
void QGeoPath_InsertCoordinate(QGeoPath* self, ptrdiff_t index, const QGeoCoordinate* coordinate);
void QGeoPath_ReplaceCoordinate(QGeoPath* self, ptrdiff_t index, const QGeoCoordinate* coordinate);
QGeoCoordinate* QGeoPath_CoordinateAt(const QGeoPath* self, ptrdiff_t index);
bool QGeoPath_ContainsCoordinate(const QGeoPath* self, const QGeoCoordinate* coordinate);
void QGeoPath_RemoveCoordinate(QGeoPath* self, const QGeoCoordinate* coordinate);
void QGeoPath_RemoveCoordinate2(QGeoPath* self, ptrdiff_t index);
libqt_string QGeoPath_ToString(const QGeoPath* self);
double QGeoPath_Length1(const QGeoPath* self, ptrdiff_t indexFrom);
double QGeoPath_Length2(const QGeoPath* self, ptrdiff_t indexFrom, ptrdiff_t indexTo);
void QGeoPath_Delete(QGeoPath* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
