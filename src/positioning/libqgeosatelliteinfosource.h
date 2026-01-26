#pragma once
#ifndef SRC_POSITIONINGC_LIBQGEOSATELLITEINFOSOURCE_H
#define SRC_POSITIONINGC_LIBQGEOSATELLITEINFOSOURCE_H

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
typedef struct QGeoSatelliteInfo QGeoSatelliteInfo;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_new(QObject* parent);
QMetaObject* QGeoSatelliteInfoSource_MetaObject(const QGeoSatelliteInfoSource* self);
void* QGeoSatelliteInfoSource_Metacast(QGeoSatelliteInfoSource* self, const char* param1);
int QGeoSatelliteInfoSource_Metacall(QGeoSatelliteInfoSource* self, int param1, int param2, void** param3);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateDefaultSource(QObject* parent);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateSource(const libqt_string sourceName, QObject* parent);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateDefaultSource2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateSource2(const libqt_string sourceName, const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
libqt_list /* of libqt_string */ QGeoSatelliteInfoSource_AvailableSources();
libqt_string QGeoSatelliteInfoSource_SourceName(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_SetUpdateInterval(QGeoSatelliteInfoSource* self, int msec);
int QGeoSatelliteInfoSource_UpdateInterval(const QGeoSatelliteInfoSource* self);
int QGeoSatelliteInfoSource_MinimumUpdateInterval(const QGeoSatelliteInfoSource* self);
int QGeoSatelliteInfoSource_Error(const QGeoSatelliteInfoSource* self);
bool QGeoSatelliteInfoSource_SetBackendProperty(QGeoSatelliteInfoSource* self, const libqt_string name, const QVariant* value);
QVariant* QGeoSatelliteInfoSource_BackendProperty(const QGeoSatelliteInfoSource* self, const libqt_string name);
void QGeoSatelliteInfoSource_StartUpdates(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_StopUpdates(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_RequestUpdate(QGeoSatelliteInfoSource* self, int timeout);
void QGeoSatelliteInfoSource_SatellitesInViewUpdated(QGeoSatelliteInfoSource* self, const libqt_list /* of QGeoSatelliteInfo* */ satellites);
void QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_SatellitesInUseUpdated(QGeoSatelliteInfoSource* self, const libqt_list /* of QGeoSatelliteInfo* */ satellites);
void QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_ErrorOccurred(QGeoSatelliteInfoSource* self, int param1);
void QGeoSatelliteInfoSource_Connect_ErrorOccurred(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_OnMetaObject(const QGeoSatelliteInfoSource* self, intptr_t slot);
QMetaObject* QGeoSatelliteInfoSource_QBaseMetaObject(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnMetacast(QGeoSatelliteInfoSource* self, intptr_t slot);
void* QGeoSatelliteInfoSource_QBaseMetacast(QGeoSatelliteInfoSource* self, const char* param1);
void QGeoSatelliteInfoSource_OnMetacall(QGeoSatelliteInfoSource* self, intptr_t slot);
int QGeoSatelliteInfoSource_QBaseMetacall(QGeoSatelliteInfoSource* self, int param1, int param2, void** param3);
void QGeoSatelliteInfoSource_OnSetUpdateInterval(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseSetUpdateInterval(QGeoSatelliteInfoSource* self, int msec);
void QGeoSatelliteInfoSource_OnMinimumUpdateInterval(const QGeoSatelliteInfoSource* self, intptr_t slot);
int QGeoSatelliteInfoSource_QBaseMinimumUpdateInterval(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnError(const QGeoSatelliteInfoSource* self, intptr_t slot);
int QGeoSatelliteInfoSource_QBaseError(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnSetBackendProperty(QGeoSatelliteInfoSource* self, intptr_t slot);
bool QGeoSatelliteInfoSource_QBaseSetBackendProperty(QGeoSatelliteInfoSource* self, const libqt_string name, const QVariant* value);
void QGeoSatelliteInfoSource_OnBackendProperty(const QGeoSatelliteInfoSource* self, intptr_t slot);
QVariant* QGeoSatelliteInfoSource_QBaseBackendProperty(const QGeoSatelliteInfoSource* self, const libqt_string name);
void QGeoSatelliteInfoSource_OnStartUpdates(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseStartUpdates(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnStopUpdates(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseStopUpdates(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnRequestUpdate(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseRequestUpdate(QGeoSatelliteInfoSource* self, int timeout);
bool QGeoSatelliteInfoSource_Event(QGeoSatelliteInfoSource* self, QEvent* event);
void QGeoSatelliteInfoSource_OnEvent(QGeoSatelliteInfoSource* self, intptr_t slot);
bool QGeoSatelliteInfoSource_QBaseEvent(QGeoSatelliteInfoSource* self, QEvent* event);
bool QGeoSatelliteInfoSource_EventFilter(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event);
void QGeoSatelliteInfoSource_OnEventFilter(QGeoSatelliteInfoSource* self, intptr_t slot);
bool QGeoSatelliteInfoSource_QBaseEventFilter(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event);
void QGeoSatelliteInfoSource_TimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
void QGeoSatelliteInfoSource_OnTimerEvent(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseTimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
void QGeoSatelliteInfoSource_ChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
void QGeoSatelliteInfoSource_OnChildEvent(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
void QGeoSatelliteInfoSource_CustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
void QGeoSatelliteInfoSource_OnCustomEvent(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseCustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
void QGeoSatelliteInfoSource_ConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
void QGeoSatelliteInfoSource_OnConnectNotify(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
void QGeoSatelliteInfoSource_DisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
void QGeoSatelliteInfoSource_OnDisconnectNotify(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_QBaseDisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
QObject* QGeoSatelliteInfoSource_Sender(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnSender(const QGeoSatelliteInfoSource* self, intptr_t slot);
QObject* QGeoSatelliteInfoSource_QBaseSender(const QGeoSatelliteInfoSource* self);
int QGeoSatelliteInfoSource_SenderSignalIndex(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_OnSenderSignalIndex(const QGeoSatelliteInfoSource* self, intptr_t slot);
int QGeoSatelliteInfoSource_QBaseSenderSignalIndex(const QGeoSatelliteInfoSource* self);
int QGeoSatelliteInfoSource_Receivers(const QGeoSatelliteInfoSource* self, const char* signal);
void QGeoSatelliteInfoSource_OnReceivers(const QGeoSatelliteInfoSource* self, intptr_t slot);
int QGeoSatelliteInfoSource_QBaseReceivers(const QGeoSatelliteInfoSource* self, const char* signal);
bool QGeoSatelliteInfoSource_IsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
void QGeoSatelliteInfoSource_OnIsSignalConnected(const QGeoSatelliteInfoSource* self, intptr_t slot);
bool QGeoSatelliteInfoSource_QBaseIsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
void QGeoSatelliteInfoSource_Delete(QGeoSatelliteInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
