#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOAREAMONITORSOURCE_H
#define SRC_POSITIONINGC_LIBQGEOAREAMONITORSOURCE_H

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
typedef struct QGeoAreaMonitorInfo QGeoAreaMonitorInfo;
typedef struct QGeoAreaMonitorSource QGeoAreaMonitorSource;
typedef struct QGeoPositionInfo QGeoPositionInfo;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QGeoShape QGeoShape;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoAreaMonitorSource* QGeoAreaMonitorSource_new(QObject* parent);
QMetaObject* QGeoAreaMonitorSource_MetaObject(const QGeoAreaMonitorSource* self);
void* QGeoAreaMonitorSource_Metacast(QGeoAreaMonitorSource* self, const char* param1);
int QGeoAreaMonitorSource_Metacall(QGeoAreaMonitorSource* self, int param1, int param2, void** param3);
QGeoAreaMonitorSource* QGeoAreaMonitorSource_CreateDefaultSource(QObject* parent);
QGeoAreaMonitorSource* QGeoAreaMonitorSource_CreateSource(const libqt_string sourceName, QObject* parent);
libqt_list /* of libqt_string */ QGeoAreaMonitorSource_AvailableSources();
void QGeoAreaMonitorSource_SetPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source);
QGeoPositionInfoSource* QGeoAreaMonitorSource_PositionInfoSource(const QGeoAreaMonitorSource* self);
libqt_string QGeoAreaMonitorSource_SourceName(const QGeoAreaMonitorSource* self);
int QGeoAreaMonitorSource_Error(const QGeoAreaMonitorSource* self);
int QGeoAreaMonitorSource_SupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self);
bool QGeoAreaMonitorSource_StartMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor);
bool QGeoAreaMonitorSource_StopMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor);
bool QGeoAreaMonitorSource_RequestUpdate(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const char* signal);
libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_ActiveMonitors(const QGeoAreaMonitorSource* self);
libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_ActiveMonitors2(const QGeoAreaMonitorSource* self, const QGeoShape* lookupArea);
bool QGeoAreaMonitorSource_SetBackendProperty(QGeoAreaMonitorSource* self, const libqt_string name, const QVariant* value);
QVariant* QGeoAreaMonitorSource_BackendProperty(const QGeoAreaMonitorSource* self, const libqt_string name);
void QGeoAreaMonitorSource_AreaEntered(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const QGeoPositionInfo* update);
void QGeoAreaMonitorSource_Connect_AreaEntered(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_AreaExited(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const QGeoPositionInfo* update);
void QGeoAreaMonitorSource_Connect_AreaExited(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_MonitorExpired(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor);
void QGeoAreaMonitorSource_Connect_MonitorExpired(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_ErrorOccurred(QGeoAreaMonitorSource* self, int errorVal);
void QGeoAreaMonitorSource_Connect_ErrorOccurred(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_OnMetaObject(const QGeoAreaMonitorSource* self, intptr_t slot);
QMetaObject* QGeoAreaMonitorSource_SuperMetaObject(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnMetacast(QGeoAreaMonitorSource* self, intptr_t slot);
void* QGeoAreaMonitorSource_SuperMetacast(QGeoAreaMonitorSource* self, const char* param1);
void QGeoAreaMonitorSource_OnMetacall(QGeoAreaMonitorSource* self, intptr_t slot);
int QGeoAreaMonitorSource_SuperMetacall(QGeoAreaMonitorSource* self, int param1, int param2, void** param3);
void QGeoAreaMonitorSource_OnSetPositionInfoSource(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_SuperSetPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source);
void QGeoAreaMonitorSource_OnPositionInfoSource(const QGeoAreaMonitorSource* self, intptr_t slot);
QGeoPositionInfoSource* QGeoAreaMonitorSource_SuperPositionInfoSource(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnError(const QGeoAreaMonitorSource* self, intptr_t slot);
int QGeoAreaMonitorSource_SuperError(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnSupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self, intptr_t slot);
int QGeoAreaMonitorSource_SuperSupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnStartMonitoring(QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperStartMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor);
void QGeoAreaMonitorSource_OnStopMonitoring(QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperStopMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor);
void QGeoAreaMonitorSource_OnRequestUpdate(QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperRequestUpdate(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const char* signal);
void QGeoAreaMonitorSource_OnActiveMonitors(const QGeoAreaMonitorSource* self, intptr_t slot);
libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_SuperActiveMonitors(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnActiveMonitors2(const QGeoAreaMonitorSource* self, intptr_t slot);
libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_SuperActiveMonitors2(const QGeoAreaMonitorSource* self, const QGeoShape* lookupArea);
void QGeoAreaMonitorSource_OnSetBackendProperty(QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperSetBackendProperty(QGeoAreaMonitorSource* self, const libqt_string name, const QVariant* value);
void QGeoAreaMonitorSource_OnBackendProperty(const QGeoAreaMonitorSource* self, intptr_t slot);
QVariant* QGeoAreaMonitorSource_SuperBackendProperty(const QGeoAreaMonitorSource* self, const libqt_string name);
bool QGeoAreaMonitorSource_Event(QGeoAreaMonitorSource* self, QEvent* event);
void QGeoAreaMonitorSource_OnEvent(QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperEvent(QGeoAreaMonitorSource* self, QEvent* event);
bool QGeoAreaMonitorSource_EventFilter(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event);
void QGeoAreaMonitorSource_OnEventFilter(QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperEventFilter(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event);
void QGeoAreaMonitorSource_TimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
void QGeoAreaMonitorSource_OnTimerEvent(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_SuperTimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
void QGeoAreaMonitorSource_ChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
void QGeoAreaMonitorSource_OnChildEvent(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_SuperChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
void QGeoAreaMonitorSource_CustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
void QGeoAreaMonitorSource_OnCustomEvent(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_SuperCustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
void QGeoAreaMonitorSource_ConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
void QGeoAreaMonitorSource_OnConnectNotify(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_SuperConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
void QGeoAreaMonitorSource_DisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
void QGeoAreaMonitorSource_OnDisconnectNotify(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_SuperDisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
QObject* QGeoAreaMonitorSource_Sender(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnSender(const QGeoAreaMonitorSource* self, intptr_t slot);
QObject* QGeoAreaMonitorSource_SuperSender(const QGeoAreaMonitorSource* self);
int QGeoAreaMonitorSource_SenderSignalIndex(const QGeoAreaMonitorSource* self);
void QGeoAreaMonitorSource_OnSenderSignalIndex(const QGeoAreaMonitorSource* self, intptr_t slot);
int QGeoAreaMonitorSource_SuperSenderSignalIndex(const QGeoAreaMonitorSource* self);
int QGeoAreaMonitorSource_Receivers(const QGeoAreaMonitorSource* self, const char* signal);
void QGeoAreaMonitorSource_OnReceivers(const QGeoAreaMonitorSource* self, intptr_t slot);
int QGeoAreaMonitorSource_SuperReceivers(const QGeoAreaMonitorSource* self, const char* signal);
bool QGeoAreaMonitorSource_IsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal);
void QGeoAreaMonitorSource_OnIsSignalConnected(const QGeoAreaMonitorSource* self, intptr_t slot);
bool QGeoAreaMonitorSource_SuperIsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal);
void QGeoAreaMonitorSource_Delete(QGeoAreaMonitorSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
