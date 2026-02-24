#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOSERVICEPROVIDER_H
#define SRC_LOCATIONC_LIBQGEOSERVICEPROVIDER_H

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
typedef struct QGeoCodingManager QGeoCodingManager;
typedef struct QGeoRoutingManager QGeoRoutingManager;
typedef struct QGeoServiceProvider QGeoServiceProvider;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPlaceManager QPlaceManager;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoServiceProvider* QGeoServiceProvider_new(const libqt_string providerName);
QGeoServiceProvider* QGeoServiceProvider_new2(const libqt_string providerName, const libqt_map /* of libqt_string to QVariant* */ parameters);
QGeoServiceProvider* QGeoServiceProvider_new3(const libqt_string providerName, const libqt_map /* of libqt_string to QVariant* */ parameters, bool allowExperimental);
QMetaObject* QGeoServiceProvider_MetaObject(const QGeoServiceProvider* self);
void* QGeoServiceProvider_Metacast(QGeoServiceProvider* self, const char* param1);
int QGeoServiceProvider_Metacall(QGeoServiceProvider* self, int param1, int param2, void** param3);
libqt_list /* of libqt_string */ QGeoServiceProvider_AvailableServiceProviders();
int QGeoServiceProvider_RoutingFeatures(const QGeoServiceProvider* self);
int QGeoServiceProvider_GeocodingFeatures(const QGeoServiceProvider* self);
int QGeoServiceProvider_MappingFeatures(const QGeoServiceProvider* self);
int QGeoServiceProvider_PlacesFeatures(const QGeoServiceProvider* self);
int QGeoServiceProvider_NavigationFeatures(const QGeoServiceProvider* self);
QGeoCodingManager* QGeoServiceProvider_GeocodingManager(const QGeoServiceProvider* self);
QGeoRoutingManager* QGeoServiceProvider_RoutingManager(const QGeoServiceProvider* self);
QPlaceManager* QGeoServiceProvider_PlaceManager(const QGeoServiceProvider* self);
int QGeoServiceProvider_Error(const QGeoServiceProvider* self);
libqt_string QGeoServiceProvider_ErrorString(const QGeoServiceProvider* self);
int QGeoServiceProvider_MappingError(const QGeoServiceProvider* self);
libqt_string QGeoServiceProvider_MappingErrorString(const QGeoServiceProvider* self);
int QGeoServiceProvider_GeocodingError(const QGeoServiceProvider* self);
libqt_string QGeoServiceProvider_GeocodingErrorString(const QGeoServiceProvider* self);
int QGeoServiceProvider_RoutingError(const QGeoServiceProvider* self);
libqt_string QGeoServiceProvider_RoutingErrorString(const QGeoServiceProvider* self);
int QGeoServiceProvider_PlacesError(const QGeoServiceProvider* self);
libqt_string QGeoServiceProvider_PlacesErrorString(const QGeoServiceProvider* self);
int QGeoServiceProvider_NavigationError(const QGeoServiceProvider* self);
libqt_string QGeoServiceProvider_NavigationErrorString(const QGeoServiceProvider* self);
void QGeoServiceProvider_SetParameters(QGeoServiceProvider* self, const libqt_map /* of libqt_string to QVariant* */ parameters);
void QGeoServiceProvider_SetLocale(QGeoServiceProvider* self, const QLocale* locale);
void QGeoServiceProvider_SetAllowExperimental(QGeoServiceProvider* self, bool allow);
void QGeoServiceProvider_OnMetaObject(const QGeoServiceProvider* self, intptr_t slot);
QMetaObject* QGeoServiceProvider_SuperMetaObject(const QGeoServiceProvider* self);
void QGeoServiceProvider_OnMetacast(QGeoServiceProvider* self, intptr_t slot);
void* QGeoServiceProvider_SuperMetacast(QGeoServiceProvider* self, const char* param1);
void QGeoServiceProvider_OnMetacall(QGeoServiceProvider* self, intptr_t slot);
int QGeoServiceProvider_SuperMetacall(QGeoServiceProvider* self, int param1, int param2, void** param3);
bool QGeoServiceProvider_Event(QGeoServiceProvider* self, QEvent* event);
void QGeoServiceProvider_OnEvent(QGeoServiceProvider* self, intptr_t slot);
bool QGeoServiceProvider_SuperEvent(QGeoServiceProvider* self, QEvent* event);
bool QGeoServiceProvider_EventFilter(QGeoServiceProvider* self, QObject* watched, QEvent* event);
void QGeoServiceProvider_OnEventFilter(QGeoServiceProvider* self, intptr_t slot);
bool QGeoServiceProvider_SuperEventFilter(QGeoServiceProvider* self, QObject* watched, QEvent* event);
void QGeoServiceProvider_TimerEvent(QGeoServiceProvider* self, QTimerEvent* event);
void QGeoServiceProvider_OnTimerEvent(QGeoServiceProvider* self, intptr_t slot);
void QGeoServiceProvider_SuperTimerEvent(QGeoServiceProvider* self, QTimerEvent* event);
void QGeoServiceProvider_ChildEvent(QGeoServiceProvider* self, QChildEvent* event);
void QGeoServiceProvider_OnChildEvent(QGeoServiceProvider* self, intptr_t slot);
void QGeoServiceProvider_SuperChildEvent(QGeoServiceProvider* self, QChildEvent* event);
void QGeoServiceProvider_CustomEvent(QGeoServiceProvider* self, QEvent* event);
void QGeoServiceProvider_OnCustomEvent(QGeoServiceProvider* self, intptr_t slot);
void QGeoServiceProvider_SuperCustomEvent(QGeoServiceProvider* self, QEvent* event);
void QGeoServiceProvider_ConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
void QGeoServiceProvider_OnConnectNotify(QGeoServiceProvider* self, intptr_t slot);
void QGeoServiceProvider_SuperConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
void QGeoServiceProvider_DisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
void QGeoServiceProvider_OnDisconnectNotify(QGeoServiceProvider* self, intptr_t slot);
void QGeoServiceProvider_SuperDisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
QObject* QGeoServiceProvider_Sender(const QGeoServiceProvider* self);
void QGeoServiceProvider_OnSender(const QGeoServiceProvider* self, intptr_t slot);
QObject* QGeoServiceProvider_SuperSender(const QGeoServiceProvider* self);
int QGeoServiceProvider_SenderSignalIndex(const QGeoServiceProvider* self);
void QGeoServiceProvider_OnSenderSignalIndex(const QGeoServiceProvider* self, intptr_t slot);
int QGeoServiceProvider_SuperSenderSignalIndex(const QGeoServiceProvider* self);
int QGeoServiceProvider_Receivers(const QGeoServiceProvider* self, const char* signal);
void QGeoServiceProvider_OnReceivers(const QGeoServiceProvider* self, intptr_t slot);
int QGeoServiceProvider_SuperReceivers(const QGeoServiceProvider* self, const char* signal);
bool QGeoServiceProvider_IsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal);
void QGeoServiceProvider_OnIsSignalConnected(const QGeoServiceProvider* self, intptr_t slot);
bool QGeoServiceProvider_SuperIsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal);
void QGeoServiceProvider_Delete(QGeoServiceProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
