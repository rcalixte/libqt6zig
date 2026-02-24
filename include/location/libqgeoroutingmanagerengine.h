#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOROUTINGMANAGERENGINE_H
#define SRC_LOCATIONC_LIBQGEOROUTINGMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoRoute QGeoRoute;
typedef struct QGeoRouteReply QGeoRouteReply;
typedef struct QGeoRouteRequest QGeoRouteRequest;
typedef struct QGeoRoutingManagerEngine QGeoRoutingManagerEngine;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoRoutingManagerEngine* QGeoRoutingManagerEngine_new(const libqt_map /* of libqt_string to QVariant* */ parameters);
QGeoRoutingManagerEngine* QGeoRoutingManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
QMetaObject* QGeoRoutingManagerEngine_MetaObject(const QGeoRoutingManagerEngine* self);
void* QGeoRoutingManagerEngine_Metacast(QGeoRoutingManagerEngine* self, const char* param1);
int QGeoRoutingManagerEngine_Metacall(QGeoRoutingManagerEngine* self, int param1, int param2, void** param3);
libqt_string QGeoRoutingManagerEngine_ManagerName(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_ManagerVersion(const QGeoRoutingManagerEngine* self);
QGeoRouteReply* QGeoRoutingManagerEngine_CalculateRoute(QGeoRoutingManagerEngine* self, const QGeoRouteRequest* request);
QGeoRouteReply* QGeoRoutingManagerEngine_UpdateRoute(QGeoRoutingManagerEngine* self, const QGeoRoute* route, const QGeoCoordinate* position);
int QGeoRoutingManagerEngine_SupportedTravelModes(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_SupportedFeatureTypes(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_SupportedFeatureWeights(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_SupportedRouteOptimizations(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_SupportedSegmentDetails(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_SupportedManeuverDetails(const QGeoRoutingManagerEngine* self);
void QGeoRoutingManagerEngine_SetLocale(QGeoRoutingManagerEngine* self, const QLocale* locale);
QLocale* QGeoRoutingManagerEngine_Locale(const QGeoRoutingManagerEngine* self);
void QGeoRoutingManagerEngine_SetMeasurementSystem(QGeoRoutingManagerEngine* self, int system);
int QGeoRoutingManagerEngine_MeasurementSystem(const QGeoRoutingManagerEngine* self);
void QGeoRoutingManagerEngine_Finished(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply);
void QGeoRoutingManagerEngine_Connect_Finished(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_ErrorOccurred(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, int errorVal);
void QGeoRoutingManagerEngine_Connect_ErrorOccurred(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_ErrorOccurred3(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, int errorVal, const libqt_string errorString);
void QGeoRoutingManagerEngine_Connect_ErrorOccurred3(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_OnMetaObject(const QGeoRoutingManagerEngine* self, intptr_t slot);
QMetaObject* QGeoRoutingManagerEngine_SuperMetaObject(const QGeoRoutingManagerEngine* self);
void QGeoRoutingManagerEngine_OnMetacast(QGeoRoutingManagerEngine* self, intptr_t slot);
void* QGeoRoutingManagerEngine_SuperMetacast(QGeoRoutingManagerEngine* self, const char* param1);
void QGeoRoutingManagerEngine_OnMetacall(QGeoRoutingManagerEngine* self, intptr_t slot);
int QGeoRoutingManagerEngine_SuperMetacall(QGeoRoutingManagerEngine* self, int param1, int param2, void** param3);
void QGeoRoutingManagerEngine_OnCalculateRoute(QGeoRoutingManagerEngine* self, intptr_t slot);
QGeoRouteReply* QGeoRoutingManagerEngine_SuperCalculateRoute(QGeoRoutingManagerEngine* self, const QGeoRouteRequest* request);
void QGeoRoutingManagerEngine_OnUpdateRoute(QGeoRoutingManagerEngine* self, intptr_t slot);
QGeoRouteReply* QGeoRoutingManagerEngine_SuperUpdateRoute(QGeoRoutingManagerEngine* self, const QGeoRoute* route, const QGeoCoordinate* position);
bool QGeoRoutingManagerEngine_Event(QGeoRoutingManagerEngine* self, QEvent* event);
void QGeoRoutingManagerEngine_OnEvent(QGeoRoutingManagerEngine* self, intptr_t slot);
bool QGeoRoutingManagerEngine_SuperEvent(QGeoRoutingManagerEngine* self, QEvent* event);
bool QGeoRoutingManagerEngine_EventFilter(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event);
void QGeoRoutingManagerEngine_OnEventFilter(QGeoRoutingManagerEngine* self, intptr_t slot);
bool QGeoRoutingManagerEngine_SuperEventFilter(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event);
void QGeoRoutingManagerEngine_TimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
void QGeoRoutingManagerEngine_OnTimerEvent(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperTimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
void QGeoRoutingManagerEngine_ChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
void QGeoRoutingManagerEngine_OnChildEvent(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
void QGeoRoutingManagerEngine_CustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
void QGeoRoutingManagerEngine_OnCustomEvent(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperCustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
void QGeoRoutingManagerEngine_ConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
void QGeoRoutingManagerEngine_OnConnectNotify(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
void QGeoRoutingManagerEngine_DisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
void QGeoRoutingManagerEngine_OnDisconnectNotify(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperDisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
void QGeoRoutingManagerEngine_SetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes);
void QGeoRoutingManagerEngine_OnSetSupportedTravelModes(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperSetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes);
void QGeoRoutingManagerEngine_SetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes);
void QGeoRoutingManagerEngine_OnSetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperSetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes);
void QGeoRoutingManagerEngine_SetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights);
void QGeoRoutingManagerEngine_OnSetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperSetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights);
void QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations);
void QGeoRoutingManagerEngine_OnSetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperSetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations);
void QGeoRoutingManagerEngine_SetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails);
void QGeoRoutingManagerEngine_OnSetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperSetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails);
void QGeoRoutingManagerEngine_SetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails);
void QGeoRoutingManagerEngine_OnSetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, intptr_t slot);
void QGeoRoutingManagerEngine_SuperSetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails);
QObject* QGeoRoutingManagerEngine_Sender(const QGeoRoutingManagerEngine* self);
void QGeoRoutingManagerEngine_OnSender(const QGeoRoutingManagerEngine* self, intptr_t slot);
QObject* QGeoRoutingManagerEngine_SuperSender(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_SenderSignalIndex(const QGeoRoutingManagerEngine* self);
void QGeoRoutingManagerEngine_OnSenderSignalIndex(const QGeoRoutingManagerEngine* self, intptr_t slot);
int QGeoRoutingManagerEngine_SuperSenderSignalIndex(const QGeoRoutingManagerEngine* self);
int QGeoRoutingManagerEngine_Receivers(const QGeoRoutingManagerEngine* self, const char* signal);
void QGeoRoutingManagerEngine_OnReceivers(const QGeoRoutingManagerEngine* self, intptr_t slot);
int QGeoRoutingManagerEngine_SuperReceivers(const QGeoRoutingManagerEngine* self, const char* signal);
bool QGeoRoutingManagerEngine_IsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
void QGeoRoutingManagerEngine_OnIsSignalConnected(const QGeoRoutingManagerEngine* self, intptr_t slot);
bool QGeoRoutingManagerEngine_SuperIsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
void QGeoRoutingManagerEngine_Delete(QGeoRoutingManagerEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
