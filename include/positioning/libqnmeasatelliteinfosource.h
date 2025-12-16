#pragma once
#ifndef SRC_POSITIONINGC_LIBQNMEASATELLITEINFOSOURCE_H
#define SRC_POSITIONINGC_LIBQNMEASATELLITEINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoSatelliteInfo QGeoSatelliteInfo;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNmeaSatelliteInfoSource QNmeaSatelliteInfoSource;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new(int mode);
QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new2(int mode, QObject* parent);
QMetaObject* QNmeaSatelliteInfoSource_MetaObject(const QNmeaSatelliteInfoSource* self);
void* QNmeaSatelliteInfoSource_Metacast(QNmeaSatelliteInfoSource* self, const char* param1);
int QNmeaSatelliteInfoSource_Metacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3);
int QNmeaSatelliteInfoSource_UpdateMode(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_SetDevice(QNmeaSatelliteInfoSource* self, QIODevice* source);
QIODevice* QNmeaSatelliteInfoSource_Device(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_SetUpdateInterval(QNmeaSatelliteInfoSource* self, int msec);
int QNmeaSatelliteInfoSource_MinimumUpdateInterval(const QNmeaSatelliteInfoSource* self);
int QNmeaSatelliteInfoSource_Error(const QNmeaSatelliteInfoSource* self);
bool QNmeaSatelliteInfoSource_SetBackendProperty(QNmeaSatelliteInfoSource* self, const libqt_string name, const QVariant* value);
QVariant* QNmeaSatelliteInfoSource_BackendProperty(const QNmeaSatelliteInfoSource* self, const libqt_string name);
void QNmeaSatelliteInfoSource_StartUpdates(QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_StopUpdates(QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_RequestUpdate(QNmeaSatelliteInfoSource* self, int timeout);
int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);
int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
void QNmeaSatelliteInfoSource_OnMetacall(QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseMetacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3);
void QNmeaSatelliteInfoSource_OnSetUpdateInterval(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseSetUpdateInterval(QNmeaSatelliteInfoSource* self, int msec);
void QNmeaSatelliteInfoSource_OnMinimumUpdateInterval(const QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseMinimumUpdateInterval(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_OnError(const QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseError(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_OnSetBackendProperty(QNmeaSatelliteInfoSource* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_QBaseSetBackendProperty(QNmeaSatelliteInfoSource* self, const libqt_string name, const QVariant* value);
void QNmeaSatelliteInfoSource_OnBackendProperty(const QNmeaSatelliteInfoSource* self, intptr_t slot);
QVariant* QNmeaSatelliteInfoSource_QBaseBackendProperty(const QNmeaSatelliteInfoSource* self, const libqt_string name);
void QNmeaSatelliteInfoSource_OnStartUpdates(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseStartUpdates(QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_OnStopUpdates(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseStopUpdates(QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_OnRequestUpdate(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseRequestUpdate(QNmeaSatelliteInfoSource* self, int timeout);
void QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);
void QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
bool QNmeaSatelliteInfoSource_Event(QNmeaSatelliteInfoSource* self, QEvent* event);
void QNmeaSatelliteInfoSource_OnEvent(QNmeaSatelliteInfoSource* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_QBaseEvent(QNmeaSatelliteInfoSource* self, QEvent* event);
bool QNmeaSatelliteInfoSource_EventFilter(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event);
void QNmeaSatelliteInfoSource_OnEventFilter(QNmeaSatelliteInfoSource* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_QBaseEventFilter(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event);
void QNmeaSatelliteInfoSource_TimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event);
void QNmeaSatelliteInfoSource_OnTimerEvent(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseTimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event);
void QNmeaSatelliteInfoSource_ChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event);
void QNmeaSatelliteInfoSource_OnChildEvent(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event);
void QNmeaSatelliteInfoSource_CustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event);
void QNmeaSatelliteInfoSource_OnCustomEvent(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseCustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event);
void QNmeaSatelliteInfoSource_ConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
void QNmeaSatelliteInfoSource_OnConnectNotify(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
void QNmeaSatelliteInfoSource_DisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
void QNmeaSatelliteInfoSource_OnDisconnectNotify(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseDisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse);
void QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse);
int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
void QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
void QNmeaSatelliteInfoSource_SetError(QNmeaSatelliteInfoSource* self, int satelliteError);
void QNmeaSatelliteInfoSource_OnSetError(QNmeaSatelliteInfoSource* self, intptr_t slot);
void QNmeaSatelliteInfoSource_QBaseSetError(QNmeaSatelliteInfoSource* self, int satelliteError);
QObject* QNmeaSatelliteInfoSource_Sender(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_OnSender(const QNmeaSatelliteInfoSource* self, intptr_t slot);
QObject* QNmeaSatelliteInfoSource_QBaseSender(const QNmeaSatelliteInfoSource* self);
int QNmeaSatelliteInfoSource_SenderSignalIndex(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_OnSenderSignalIndex(const QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseSenderSignalIndex(const QNmeaSatelliteInfoSource* self);
int QNmeaSatelliteInfoSource_Receivers(const QNmeaSatelliteInfoSource* self, const char* signal);
void QNmeaSatelliteInfoSource_OnReceivers(const QNmeaSatelliteInfoSource* self, intptr_t slot);
int QNmeaSatelliteInfoSource_QBaseReceivers(const QNmeaSatelliteInfoSource* self, const char* signal);
bool QNmeaSatelliteInfoSource_IsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
void QNmeaSatelliteInfoSource_OnIsSignalConnected(const QNmeaSatelliteInfoSource* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_QBaseIsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
void QNmeaSatelliteInfoSource_Delete(QNmeaSatelliteInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
