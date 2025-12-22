#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOROUTE_H
#define SRC_LOCATIONC_LIBQGEOROUTE_H

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
typedef struct QGeoRoute QGeoRoute;
typedef struct QGeoRouteRequest QGeoRouteRequest;
typedef struct QGeoRouteSegment QGeoRouteSegment;
typedef struct QVariant QVariant;
#endif

QGeoRoute* QGeoRoute_new();
QGeoRoute* QGeoRoute_new2(const QGeoRoute* other);
void QGeoRoute_OperatorAssign(QGeoRoute* self, const QGeoRoute* other);
void QGeoRoute_Swap(QGeoRoute* self, QGeoRoute* other);
void QGeoRoute_SetRouteId(QGeoRoute* self, const libqt_string id);
libqt_string QGeoRoute_RouteId(const QGeoRoute* self);
void QGeoRoute_SetRequest(QGeoRoute* self, const QGeoRouteRequest* request);
QGeoRouteRequest* QGeoRoute_Request(const QGeoRoute* self);
void QGeoRoute_SetBounds(QGeoRoute* self, const QGeoRectangle* bounds);
QGeoRectangle* QGeoRoute_Bounds(const QGeoRoute* self);
void QGeoRoute_SetFirstRouteSegment(QGeoRoute* self, const QGeoRouteSegment* routeSegment);
QGeoRouteSegment* QGeoRoute_FirstRouteSegment(const QGeoRoute* self);
ptrdiff_t QGeoRoute_SegmentsCount(const QGeoRoute* self);
libqt_list /* of QGeoRouteSegment* */ QGeoRoute_Segments(const QGeoRoute* self);
void QGeoRoute_SetTravelTime(QGeoRoute* self, int secs);
int QGeoRoute_TravelTime(const QGeoRoute* self);
void QGeoRoute_SetDistance(QGeoRoute* self, double distance);
double QGeoRoute_Distance(const QGeoRoute* self);
void QGeoRoute_SetTravelMode(QGeoRoute* self, int mode);
int QGeoRoute_TravelMode(const QGeoRoute* self);
void QGeoRoute_SetPath(QGeoRoute* self, const libqt_list /* of QGeoCoordinate* */ path);
libqt_list /* of QGeoCoordinate* */ QGeoRoute_Path(const QGeoRoute* self);
void QGeoRoute_SetRouteLegs(QGeoRoute* self, const libqt_list /* of QGeoRoute* */ legs);
libqt_list /* of QGeoRoute* */ QGeoRoute_RouteLegs(const QGeoRoute* self);
void QGeoRoute_SetExtendedAttributes(QGeoRoute* self, const libqt_map /* of libqt_string to QVariant* */ extendedAttributes);
libqt_map /* of libqt_string to QVariant* */ QGeoRoute_ExtendedAttributes(const QGeoRoute* self);
void QGeoRoute_SetLegIndex(QGeoRoute* self, int idx);
int QGeoRoute_LegIndex(const QGeoRoute* self);
void QGeoRoute_SetOverallRoute(QGeoRoute* self, const QGeoRoute* route);
QGeoRoute* QGeoRoute_OverallRoute(const QGeoRoute* self);
void QGeoRoute_Delete(QGeoRoute* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
