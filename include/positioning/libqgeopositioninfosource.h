#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOPOSITIONINFOSOURCE_H
#define SRC_POSITIONINGC_LIBQGEOPOSITIONINFOSOURCE_H

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
typedef struct QGeoPositionInfo QGeoPositionInfo;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoPositionInfoSource* QGeoPositionInfoSource_new(QObject* parent);
QMetaObject* QGeoPositionInfoSource_MetaObject(const QGeoPositionInfoSource* self);
void* QGeoPositionInfoSource_Metacast(QGeoPositionInfoSource* self, const char* param1);
int QGeoPositionInfoSource_Metacall(QGeoPositionInfoSource* self, int param1, int param2, void** param3);
void QGeoPositionInfoSource_SetUpdateInterval(QGeoPositionInfoSource* self, int msec);
int QGeoPositionInfoSource_UpdateInterval(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_SetPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods);
int QGeoPositionInfoSource_PreferredPositioningMethods(const QGeoPositionInfoSource* self);
QGeoPositionInfo* QGeoPositionInfoSource_LastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly);
int QGeoPositionInfoSource_SupportedPositioningMethods(const QGeoPositionInfoSource* self);
int QGeoPositionInfoSource_MinimumUpdateInterval(const QGeoPositionInfoSource* self);
libqt_string QGeoPositionInfoSource_SourceName(const QGeoPositionInfoSource* self);
bool QGeoPositionInfoSource_SetBackendProperty(QGeoPositionInfoSource* self, const libqt_string name, const QVariant* value);
QVariant* QGeoPositionInfoSource_BackendProperty(const QGeoPositionInfoSource* self, const libqt_string name);
QGeoPositionInfoSource* QGeoPositionInfoSource_CreateDefaultSource(QObject* parent);
QGeoPositionInfoSource* QGeoPositionInfoSource_CreateDefaultSource2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
QGeoPositionInfoSource* QGeoPositionInfoSource_CreateSource(const libqt_string sourceName, QObject* parent);
QGeoPositionInfoSource* QGeoPositionInfoSource_CreateSource2(const libqt_string sourceName, const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
libqt_list /* of libqt_string */ QGeoPositionInfoSource_AvailableSources();
int QGeoPositionInfoSource_Error(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_StartUpdates(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_StopUpdates(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_RequestUpdate(QGeoPositionInfoSource* self, int timeout);
void QGeoPositionInfoSource_PositionUpdated(QGeoPositionInfoSource* self, const QGeoPositionInfo* update);
void QGeoPositionInfoSource_Connect_PositionUpdated(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_ErrorOccurred(QGeoPositionInfoSource* self, int param1);
void QGeoPositionInfoSource_Connect_ErrorOccurred(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_SupportedPositioningMethodsChanged(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_OnMetaObject(const QGeoPositionInfoSource* self, intptr_t slot);
QMetaObject* QGeoPositionInfoSource_QBaseMetaObject(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnMetacast(QGeoPositionInfoSource* self, intptr_t slot);
void* QGeoPositionInfoSource_QBaseMetacast(QGeoPositionInfoSource* self, const char* param1);
void QGeoPositionInfoSource_OnMetacall(QGeoPositionInfoSource* self, intptr_t slot);
int QGeoPositionInfoSource_QBaseMetacall(QGeoPositionInfoSource* self, int param1, int param2, void** param3);
void QGeoPositionInfoSource_OnSetUpdateInterval(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseSetUpdateInterval(QGeoPositionInfoSource* self, int msec);
void QGeoPositionInfoSource_OnSetPreferredPositioningMethods(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseSetPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods);
void QGeoPositionInfoSource_OnLastKnownPosition(const QGeoPositionInfoSource* self, intptr_t slot);
QGeoPositionInfo* QGeoPositionInfoSource_QBaseLastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly);
void QGeoPositionInfoSource_OnSupportedPositioningMethods(const QGeoPositionInfoSource* self, intptr_t slot);
int QGeoPositionInfoSource_QBaseSupportedPositioningMethods(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnMinimumUpdateInterval(const QGeoPositionInfoSource* self, intptr_t slot);
int QGeoPositionInfoSource_QBaseMinimumUpdateInterval(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnSetBackendProperty(QGeoPositionInfoSource* self, intptr_t slot);
bool QGeoPositionInfoSource_QBaseSetBackendProperty(QGeoPositionInfoSource* self, const libqt_string name, const QVariant* value);
void QGeoPositionInfoSource_OnBackendProperty(const QGeoPositionInfoSource* self, intptr_t slot);
QVariant* QGeoPositionInfoSource_QBaseBackendProperty(const QGeoPositionInfoSource* self, const libqt_string name);
void QGeoPositionInfoSource_OnError(const QGeoPositionInfoSource* self, intptr_t slot);
int QGeoPositionInfoSource_QBaseError(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnStartUpdates(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseStartUpdates(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnStopUpdates(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseStopUpdates(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnRequestUpdate(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseRequestUpdate(QGeoPositionInfoSource* self, int timeout);
bool QGeoPositionInfoSource_Event(QGeoPositionInfoSource* self, QEvent* event);
void QGeoPositionInfoSource_OnEvent(QGeoPositionInfoSource* self, intptr_t slot);
bool QGeoPositionInfoSource_QBaseEvent(QGeoPositionInfoSource* self, QEvent* event);
bool QGeoPositionInfoSource_EventFilter(QGeoPositionInfoSource* self, QObject* watched, QEvent* event);
void QGeoPositionInfoSource_OnEventFilter(QGeoPositionInfoSource* self, intptr_t slot);
bool QGeoPositionInfoSource_QBaseEventFilter(QGeoPositionInfoSource* self, QObject* watched, QEvent* event);
void QGeoPositionInfoSource_TimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event);
void QGeoPositionInfoSource_OnTimerEvent(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseTimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event);
void QGeoPositionInfoSource_ChildEvent(QGeoPositionInfoSource* self, QChildEvent* event);
void QGeoPositionInfoSource_OnChildEvent(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseChildEvent(QGeoPositionInfoSource* self, QChildEvent* event);
void QGeoPositionInfoSource_CustomEvent(QGeoPositionInfoSource* self, QEvent* event);
void QGeoPositionInfoSource_OnCustomEvent(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseCustomEvent(QGeoPositionInfoSource* self, QEvent* event);
void QGeoPositionInfoSource_ConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
void QGeoPositionInfoSource_OnConnectNotify(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
void QGeoPositionInfoSource_DisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
void QGeoPositionInfoSource_OnDisconnectNotify(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_QBaseDisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
QObject* QGeoPositionInfoSource_Sender(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnSender(const QGeoPositionInfoSource* self, intptr_t slot);
QObject* QGeoPositionInfoSource_QBaseSender(const QGeoPositionInfoSource* self);
int QGeoPositionInfoSource_SenderSignalIndex(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_OnSenderSignalIndex(const QGeoPositionInfoSource* self, intptr_t slot);
int QGeoPositionInfoSource_QBaseSenderSignalIndex(const QGeoPositionInfoSource* self);
int QGeoPositionInfoSource_Receivers(const QGeoPositionInfoSource* self, const char* signal);
void QGeoPositionInfoSource_OnReceivers(const QGeoPositionInfoSource* self, intptr_t slot);
int QGeoPositionInfoSource_QBaseReceivers(const QGeoPositionInfoSource* self, const char* signal);
bool QGeoPositionInfoSource_IsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal);
void QGeoPositionInfoSource_OnIsSignalConnected(const QGeoPositionInfoSource* self, intptr_t slot);
bool QGeoPositionInfoSource_QBaseIsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal);
void QGeoPositionInfoSource_Delete(QGeoPositionInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
