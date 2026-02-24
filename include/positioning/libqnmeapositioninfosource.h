#pragma once
#ifndef SRC_POSITIONINGC_LIBQNMEAPOSITIONINFOSOURCE_H
#define SRC_POSITIONINGC_LIBQNMEAPOSITIONINFOSOURCE_H

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
typedef struct QGeoPositionInfo QGeoPositionInfo;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNmeaPositionInfoSource QNmeaPositionInfoSource;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new(int updateMode);
QNmeaPositionInfoSource* QNmeaPositionInfoSource_new2(int updateMode, QObject* parent);
QMetaObject* QNmeaPositionInfoSource_MetaObject(const QNmeaPositionInfoSource* self);
void* QNmeaPositionInfoSource_Metacast(QNmeaPositionInfoSource* self, const char* param1);
int QNmeaPositionInfoSource_Metacall(QNmeaPositionInfoSource* self, int param1, int param2, void** param3);
void QNmeaPositionInfoSource_SetUserEquivalentRangeError(QNmeaPositionInfoSource* self, double uere);
double QNmeaPositionInfoSource_UserEquivalentRangeError(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_UpdateMode(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_SetDevice(QNmeaPositionInfoSource* self, QIODevice* source);
QIODevice* QNmeaPositionInfoSource_Device(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_SetUpdateInterval(QNmeaPositionInfoSource* self, int msec);
QGeoPositionInfo* QNmeaPositionInfoSource_LastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly);
int QNmeaPositionInfoSource_SupportedPositioningMethods(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_MinimumUpdateInterval(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_Error(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_StartUpdates(QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_StopUpdates(QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_RequestUpdate(QNmeaPositionInfoSource* self, int timeout);
bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
void QNmeaPositionInfoSource_OnMetaObject(const QNmeaPositionInfoSource* self, intptr_t slot);
QMetaObject* QNmeaPositionInfoSource_SuperMetaObject(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnMetacast(QNmeaPositionInfoSource* self, intptr_t slot);
void* QNmeaPositionInfoSource_SuperMetacast(QNmeaPositionInfoSource* self, const char* param1);
void QNmeaPositionInfoSource_OnMetacall(QNmeaPositionInfoSource* self, intptr_t slot);
int QNmeaPositionInfoSource_SuperMetacall(QNmeaPositionInfoSource* self, int param1, int param2, void** param3);
void QNmeaPositionInfoSource_OnSetUpdateInterval(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperSetUpdateInterval(QNmeaPositionInfoSource* self, int msec);
void QNmeaPositionInfoSource_OnLastKnownPosition(const QNmeaPositionInfoSource* self, intptr_t slot);
QGeoPositionInfo* QNmeaPositionInfoSource_SuperLastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly);
void QNmeaPositionInfoSource_OnSupportedPositioningMethods(const QNmeaPositionInfoSource* self, intptr_t slot);
int QNmeaPositionInfoSource_SuperSupportedPositioningMethods(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnMinimumUpdateInterval(const QNmeaPositionInfoSource* self, intptr_t slot);
int QNmeaPositionInfoSource_SuperMinimumUpdateInterval(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnError(const QNmeaPositionInfoSource* self, intptr_t slot);
int QNmeaPositionInfoSource_SuperError(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnStartUpdates(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperStartUpdates(QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnStopUpdates(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperStopUpdates(QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnRequestUpdate(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperRequestUpdate(QNmeaPositionInfoSource* self, int timeout);
void QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, intptr_t slot);
bool QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
void QNmeaPositionInfoSource_SetPreferredPositioningMethods(QNmeaPositionInfoSource* self, int methods);
void QNmeaPositionInfoSource_OnSetPreferredPositioningMethods(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperSetPreferredPositioningMethods(QNmeaPositionInfoSource* self, int methods);
bool QNmeaPositionInfoSource_SetBackendProperty(QNmeaPositionInfoSource* self, const libqt_string name, const QVariant* value);
void QNmeaPositionInfoSource_OnSetBackendProperty(QNmeaPositionInfoSource* self, intptr_t slot);
bool QNmeaPositionInfoSource_SuperSetBackendProperty(QNmeaPositionInfoSource* self, const libqt_string name, const QVariant* value);
QVariant* QNmeaPositionInfoSource_BackendProperty(const QNmeaPositionInfoSource* self, const libqt_string name);
void QNmeaPositionInfoSource_OnBackendProperty(const QNmeaPositionInfoSource* self, intptr_t slot);
QVariant* QNmeaPositionInfoSource_SuperBackendProperty(const QNmeaPositionInfoSource* self, const libqt_string name);
bool QNmeaPositionInfoSource_Event(QNmeaPositionInfoSource* self, QEvent* event);
void QNmeaPositionInfoSource_OnEvent(QNmeaPositionInfoSource* self, intptr_t slot);
bool QNmeaPositionInfoSource_SuperEvent(QNmeaPositionInfoSource* self, QEvent* event);
bool QNmeaPositionInfoSource_EventFilter(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event);
void QNmeaPositionInfoSource_OnEventFilter(QNmeaPositionInfoSource* self, intptr_t slot);
bool QNmeaPositionInfoSource_SuperEventFilter(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event);
void QNmeaPositionInfoSource_TimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event);
void QNmeaPositionInfoSource_OnTimerEvent(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperTimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event);
void QNmeaPositionInfoSource_ChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event);
void QNmeaPositionInfoSource_OnChildEvent(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event);
void QNmeaPositionInfoSource_CustomEvent(QNmeaPositionInfoSource* self, QEvent* event);
void QNmeaPositionInfoSource_OnCustomEvent(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperCustomEvent(QNmeaPositionInfoSource* self, QEvent* event);
void QNmeaPositionInfoSource_ConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
void QNmeaPositionInfoSource_OnConnectNotify(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
void QNmeaPositionInfoSource_DisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
void QNmeaPositionInfoSource_OnDisconnectNotify(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperDisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix);
void QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, intptr_t slot);
bool QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix);
void QNmeaPositionInfoSource_SetError(QNmeaPositionInfoSource* self, int positionError);
void QNmeaPositionInfoSource_OnSetError(QNmeaPositionInfoSource* self, intptr_t slot);
void QNmeaPositionInfoSource_SuperSetError(QNmeaPositionInfoSource* self, int positionError);
QObject* QNmeaPositionInfoSource_Sender(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnSender(const QNmeaPositionInfoSource* self, intptr_t slot);
QObject* QNmeaPositionInfoSource_SuperSender(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_SenderSignalIndex(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_OnSenderSignalIndex(const QNmeaPositionInfoSource* self, intptr_t slot);
int QNmeaPositionInfoSource_SuperSenderSignalIndex(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_Receivers(const QNmeaPositionInfoSource* self, const char* signal);
void QNmeaPositionInfoSource_OnReceivers(const QNmeaPositionInfoSource* self, intptr_t slot);
int QNmeaPositionInfoSource_SuperReceivers(const QNmeaPositionInfoSource* self, const char* signal);
bool QNmeaPositionInfoSource_IsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal);
void QNmeaPositionInfoSource_OnIsSignalConnected(const QNmeaPositionInfoSource* self, intptr_t slot);
bool QNmeaPositionInfoSource_SuperIsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal);
void QNmeaPositionInfoSource_Delete(QNmeaPositionInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
