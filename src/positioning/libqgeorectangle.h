#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEORECTANGLE_H
#define SRC_POSITIONINGC_LIBQGEORECTANGLE_H

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

QGeoRectangle* QGeoRectangle_new();
QGeoRectangle* QGeoRectangle_new2(const QGeoCoordinate* center, double degreesWidth, double degreesHeight);
QGeoRectangle* QGeoRectangle_new3(const QGeoCoordinate* topLeft, const QGeoCoordinate* bottomRight);
QGeoRectangle* QGeoRectangle_new4(const libqt_list /* of QGeoCoordinate* */ coordinates);
QGeoRectangle* QGeoRectangle_new5(const QGeoRectangle* other);
QGeoRectangle* QGeoRectangle_new6(const QGeoShape* other);
void QGeoRectangle_OperatorAssign(QGeoRectangle* self, const QGeoRectangle* other);
void QGeoRectangle_SetTopLeft(QGeoRectangle* self, const QGeoCoordinate* topLeft);
QGeoCoordinate* QGeoRectangle_TopLeft(const QGeoRectangle* self);
void QGeoRectangle_SetTopRight(QGeoRectangle* self, const QGeoCoordinate* topRight);
QGeoCoordinate* QGeoRectangle_TopRight(const QGeoRectangle* self);
void QGeoRectangle_SetBottomLeft(QGeoRectangle* self, const QGeoCoordinate* bottomLeft);
QGeoCoordinate* QGeoRectangle_BottomLeft(const QGeoRectangle* self);
void QGeoRectangle_SetBottomRight(QGeoRectangle* self, const QGeoCoordinate* bottomRight);
QGeoCoordinate* QGeoRectangle_BottomRight(const QGeoRectangle* self);
void QGeoRectangle_SetCenter(QGeoRectangle* self, const QGeoCoordinate* center);
QGeoCoordinate* QGeoRectangle_Center(const QGeoRectangle* self);
void QGeoRectangle_SetWidth(QGeoRectangle* self, double degreesWidth);
double QGeoRectangle_Width(const QGeoRectangle* self);
void QGeoRectangle_SetHeight(QGeoRectangle* self, double degreesHeight);
double QGeoRectangle_Height(const QGeoRectangle* self);
bool QGeoRectangle_Contains(const QGeoRectangle* self, const QGeoRectangle* rectangle);
bool QGeoRectangle_Intersects(const QGeoRectangle* self, const QGeoRectangle* rectangle);
void QGeoRectangle_Translate(QGeoRectangle* self, double degreesLatitude, double degreesLongitude);
QGeoRectangle* QGeoRectangle_Translated(const QGeoRectangle* self, double degreesLatitude, double degreesLongitude);
void QGeoRectangle_ExtendRectangle(QGeoRectangle* self, const QGeoCoordinate* coordinate);
QGeoRectangle* QGeoRectangle_United(const QGeoRectangle* self, const QGeoRectangle* rectangle);
QGeoRectangle* QGeoRectangle_OperatorBitwiseOr(const QGeoRectangle* self, const QGeoRectangle* rectangle);
void QGeoRectangle_OperatorBitwiseOrAssign(QGeoRectangle* self, const QGeoRectangle* rectangle);
libqt_string QGeoRectangle_ToString(const QGeoRectangle* self);
void QGeoRectangle_Delete(QGeoRectangle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
