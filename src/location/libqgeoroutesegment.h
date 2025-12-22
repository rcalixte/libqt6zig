#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOROUTESEGMENT_H
#define SRC_LOCATIONC_LIBQGEOROUTESEGMENT_H

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
typedef struct QGeoManeuver QGeoManeuver;
typedef struct QGeoRouteSegment QGeoRouteSegment;
#endif

QGeoRouteSegment* QGeoRouteSegment_new();
QGeoRouteSegment* QGeoRouteSegment_new2(const QGeoRouteSegment* other);
void QGeoRouteSegment_OperatorAssign(QGeoRouteSegment* self, const QGeoRouteSegment* other);
void QGeoRouteSegment_Swap(QGeoRouteSegment* self, QGeoRouteSegment* other);
bool QGeoRouteSegment_IsValid(const QGeoRouteSegment* self);
bool QGeoRouteSegment_IsLegLastSegment(const QGeoRouteSegment* self);
void QGeoRouteSegment_SetNextRouteSegment(QGeoRouteSegment* self, const QGeoRouteSegment* routeSegment);
QGeoRouteSegment* QGeoRouteSegment_NextRouteSegment(const QGeoRouteSegment* self);
void QGeoRouteSegment_SetTravelTime(QGeoRouteSegment* self, int secs);
int QGeoRouteSegment_TravelTime(const QGeoRouteSegment* self);
void QGeoRouteSegment_SetDistance(QGeoRouteSegment* self, double distance);
double QGeoRouteSegment_Distance(const QGeoRouteSegment* self);
void QGeoRouteSegment_SetPath(QGeoRouteSegment* self, const libqt_list /* of QGeoCoordinate* */ path);
libqt_list /* of QGeoCoordinate* */ QGeoRouteSegment_Path(const QGeoRouteSegment* self);
void QGeoRouteSegment_SetManeuver(QGeoRouteSegment* self, const QGeoManeuver* maneuver);
QGeoManeuver* QGeoRouteSegment_Maneuver(const QGeoRouteSegment* self);
void QGeoRouteSegment_Delete(QGeoRouteSegment* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
