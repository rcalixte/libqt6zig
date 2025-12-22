#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOROUTEREQUEST_H
#define SRC_LOCATIONC_LIBQGEOROUTEREQUEST_H

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
typedef struct QGeoRectangle QGeoRectangle;
typedef struct QGeoRouteRequest QGeoRouteRequest;
#endif

QGeoRouteRequest* QGeoRouteRequest_new();
QGeoRouteRequest* QGeoRouteRequest_new2(const QGeoCoordinate* origin, const QGeoCoordinate* destination);
QGeoRouteRequest* QGeoRouteRequest_new3(const QGeoRouteRequest* other);
QGeoRouteRequest* QGeoRouteRequest_new4(const libqt_list /* of QGeoCoordinate* */ waypoints);
void QGeoRouteRequest_OperatorAssign(QGeoRouteRequest* self, const QGeoRouteRequest* other);
void QGeoRouteRequest_Swap(QGeoRouteRequest* self, QGeoRouteRequest* other);
void QGeoRouteRequest_SetWaypoints(QGeoRouteRequest* self, const libqt_list /* of QGeoCoordinate* */ waypoints);
libqt_list /* of QGeoCoordinate* */ QGeoRouteRequest_Waypoints(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetExcludeAreas(QGeoRouteRequest* self, const libqt_list /* of QGeoRectangle* */ areas);
libqt_list /* of QGeoRectangle* */ QGeoRouteRequest_ExcludeAreas(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetNumberAlternativeRoutes(QGeoRouteRequest* self, int alternatives);
int QGeoRouteRequest_NumberAlternativeRoutes(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetTravelModes(QGeoRouteRequest* self, int travelModes);
int QGeoRouteRequest_TravelModes(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetFeatureWeight(QGeoRouteRequest* self, int featureType, int featureWeight);
int QGeoRouteRequest_FeatureWeight(const QGeoRouteRequest* self, int featureType);
libqt_list /* of int */ QGeoRouteRequest_FeatureTypes(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetRouteOptimization(QGeoRouteRequest* self, int optimization);
int QGeoRouteRequest_RouteOptimization(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetSegmentDetail(QGeoRouteRequest* self, int segmentDetail);
int QGeoRouteRequest_SegmentDetail(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetManeuverDetail(QGeoRouteRequest* self, int maneuverDetail);
int QGeoRouteRequest_ManeuverDetail(const QGeoRouteRequest* self);
void QGeoRouteRequest_SetDepartureTime(QGeoRouteRequest* self, const QDateTime* departureTime);
QDateTime* QGeoRouteRequest_DepartureTime(const QGeoRouteRequest* self);
void QGeoRouteRequest_Delete(QGeoRouteRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
