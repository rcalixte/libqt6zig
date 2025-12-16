#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOLOCATION_H
#define SRC_POSITIONINGC_LIBQGEOLOCATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoAddress QGeoAddress;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoLocation QGeoLocation;
typedef struct QGeoShape QGeoShape;
typedef struct QVariant QVariant;
#endif

QGeoLocation* QGeoLocation_new();
QGeoLocation* QGeoLocation_new2(const QGeoLocation* other);
void QGeoLocation_OperatorAssign(QGeoLocation* self, const QGeoLocation* other);
void QGeoLocation_Swap(QGeoLocation* self, QGeoLocation* other);
QGeoAddress* QGeoLocation_Address(const QGeoLocation* self);
void QGeoLocation_SetAddress(QGeoLocation* self, const QGeoAddress* address);
QGeoCoordinate* QGeoLocation_Coordinate(const QGeoLocation* self);
void QGeoLocation_SetCoordinate(QGeoLocation* self, const QGeoCoordinate* position);
QGeoShape* QGeoLocation_BoundingShape(const QGeoLocation* self);
void QGeoLocation_SetBoundingShape(QGeoLocation* self, const QGeoShape* shape);
libqt_map /* of libqt_string to QVariant* */ QGeoLocation_ExtendedAttributes(const QGeoLocation* self);
void QGeoLocation_SetExtendedAttributes(QGeoLocation* self, const libqt_map /* of libqt_string to QVariant* */ data);
bool QGeoLocation_IsEmpty(const QGeoLocation* self);
void QGeoLocation_Delete(QGeoLocation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
