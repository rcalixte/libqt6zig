#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOPOSITIONINFO_H
#define SRC_POSITIONINGC_LIBQGEOPOSITIONINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDateTime QDateTime;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoPositionInfo QGeoPositionInfo;
#endif

QGeoPositionInfo* QGeoPositionInfo_new();
QGeoPositionInfo* QGeoPositionInfo_new2(const QGeoCoordinate* coordinate, const QDateTime* updateTime);
QGeoPositionInfo* QGeoPositionInfo_new3(const QGeoPositionInfo* other);
void QGeoPositionInfo_OperatorAssign(QGeoPositionInfo* self, const QGeoPositionInfo* other);
void QGeoPositionInfo_Swap(QGeoPositionInfo* self, QGeoPositionInfo* other);
bool QGeoPositionInfo_IsValid(const QGeoPositionInfo* self);
void QGeoPositionInfo_SetTimestamp(QGeoPositionInfo* self, const QDateTime* timestamp);
QDateTime* QGeoPositionInfo_Timestamp(const QGeoPositionInfo* self);
void QGeoPositionInfo_SetCoordinate(QGeoPositionInfo* self, const QGeoCoordinate* coordinate);
QGeoCoordinate* QGeoPositionInfo_Coordinate(const QGeoPositionInfo* self);
void QGeoPositionInfo_SetAttribute(QGeoPositionInfo* self, int attribute, double value);
double QGeoPositionInfo_Attribute(const QGeoPositionInfo* self, int attribute);
void QGeoPositionInfo_RemoveAttribute(QGeoPositionInfo* self, int attribute);
bool QGeoPositionInfo_HasAttribute(const QGeoPositionInfo* self, int attribute);
void QGeoPositionInfo_Detach(QGeoPositionInfo* self);
void QGeoPositionInfo_Delete(QGeoPositionInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
