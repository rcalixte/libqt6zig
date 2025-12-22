#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOROUTINGMANAGER_H
#define SRC_LOCATIONC_LIBQGEOROUTINGMANAGER_H

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
typedef struct QGeoRoute QGeoRoute;
typedef struct QGeoRouteReply QGeoRouteReply;
typedef struct QGeoRouteRequest QGeoRouteRequest;
typedef struct QGeoRoutingManager QGeoRoutingManager;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QGeoRoutingManager_MetaObject(const QGeoRoutingManager* self);
void* QGeoRoutingManager_Metacast(QGeoRoutingManager* self, const char* param1);
int QGeoRoutingManager_Metacall(QGeoRoutingManager* self, int param1, int param2, void** param3);
libqt_string QGeoRoutingManager_ManagerName(const QGeoRoutingManager* self);
int QGeoRoutingManager_ManagerVersion(const QGeoRoutingManager* self);
QGeoRouteReply* QGeoRoutingManager_CalculateRoute(QGeoRoutingManager* self, const QGeoRouteRequest* request);
QGeoRouteReply* QGeoRoutingManager_UpdateRoute(QGeoRoutingManager* self, const QGeoRoute* route, const QGeoCoordinate* position);
int QGeoRoutingManager_SupportedTravelModes(const QGeoRoutingManager* self);
int QGeoRoutingManager_SupportedFeatureTypes(const QGeoRoutingManager* self);
int QGeoRoutingManager_SupportedFeatureWeights(const QGeoRoutingManager* self);
int QGeoRoutingManager_SupportedRouteOptimizations(const QGeoRoutingManager* self);
int QGeoRoutingManager_SupportedSegmentDetails(const QGeoRoutingManager* self);
int QGeoRoutingManager_SupportedManeuverDetails(const QGeoRoutingManager* self);
void QGeoRoutingManager_SetLocale(QGeoRoutingManager* self, const QLocale* locale);
QLocale* QGeoRoutingManager_Locale(const QGeoRoutingManager* self);
void QGeoRoutingManager_SetMeasurementSystem(QGeoRoutingManager* self, int system);
int QGeoRoutingManager_MeasurementSystem(const QGeoRoutingManager* self);
void QGeoRoutingManager_Finished(QGeoRoutingManager* self, QGeoRouteReply* reply);
void QGeoRoutingManager_Connect_Finished(QGeoRoutingManager* self, intptr_t slot);
void QGeoRoutingManager_ErrorOccurred(QGeoRoutingManager* self, QGeoRouteReply* reply, int errorVal);
void QGeoRoutingManager_Connect_ErrorOccurred(QGeoRoutingManager* self, intptr_t slot);
void QGeoRoutingManager_ErrorOccurred3(QGeoRoutingManager* self, QGeoRouteReply* reply, int errorVal, const libqt_string errorString);
void QGeoRoutingManager_Connect_ErrorOccurred3(QGeoRoutingManager* self, intptr_t slot);
void QGeoRoutingManager_Delete(QGeoRoutingManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
