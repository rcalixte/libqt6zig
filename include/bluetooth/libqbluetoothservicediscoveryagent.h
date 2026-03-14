#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHSERVICEDISCOVERYAGENT_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHSERVICEDISCOVERYAGENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBluetoothAddress QBluetoothAddress;
typedef struct QBluetoothServiceDiscoveryAgent QBluetoothServiceDiscoveryAgent;
typedef struct QBluetoothServiceInfo QBluetoothServiceInfo;
typedef struct QBluetoothUuid QBluetoothUuid;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new();
QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new2(const QBluetoothAddress* deviceAdapter);
QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new3(QObject* parent);
QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new4(const QBluetoothAddress* deviceAdapter, QObject* parent);
QMetaObject* QBluetoothServiceDiscoveryAgent_MetaObject(const QBluetoothServiceDiscoveryAgent* self);
void* QBluetoothServiceDiscoveryAgent_Metacast(QBluetoothServiceDiscoveryAgent* self, const char* param1);
int QBluetoothServiceDiscoveryAgent_Metacall(QBluetoothServiceDiscoveryAgent* self, int param1, int param2, void** param3);
bool QBluetoothServiceDiscoveryAgent_IsActive(const QBluetoothServiceDiscoveryAgent* self);
int QBluetoothServiceDiscoveryAgent_Error(const QBluetoothServiceDiscoveryAgent* self);
libqt_string QBluetoothServiceDiscoveryAgent_ErrorString(const QBluetoothServiceDiscoveryAgent* self);
libqt_list /* of QBluetoothServiceInfo* */ QBluetoothServiceDiscoveryAgent_DiscoveredServices(const QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_SetUuidFilter(QBluetoothServiceDiscoveryAgent* self, const libqt_list /* of QBluetoothUuid* */ uuids);
void QBluetoothServiceDiscoveryAgent_SetUuidFilter2(QBluetoothServiceDiscoveryAgent* self, const QBluetoothUuid* uuid);
libqt_list /* of QBluetoothUuid* */ QBluetoothServiceDiscoveryAgent_UuidFilter(const QBluetoothServiceDiscoveryAgent* self);
bool QBluetoothServiceDiscoveryAgent_SetRemoteAddress(QBluetoothServiceDiscoveryAgent* self, const QBluetoothAddress* address);
QBluetoothAddress* QBluetoothServiceDiscoveryAgent_RemoteAddress(const QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_Start(QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_Stop(QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_Clear(QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_ServiceDiscovered(QBluetoothServiceDiscoveryAgent* self, const QBluetoothServiceInfo* info);
void QBluetoothServiceDiscoveryAgent_Connect_ServiceDiscovered(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_Finished(QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_Connect_Finished(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_Canceled(QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_Connect_Canceled(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_ErrorOccurred(QBluetoothServiceDiscoveryAgent* self, int errorVal);
void QBluetoothServiceDiscoveryAgent_Connect_ErrorOccurred(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_Start1(QBluetoothServiceDiscoveryAgent* self, int mode);
void QBluetoothServiceDiscoveryAgent_OnMetaObject(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
QMetaObject* QBluetoothServiceDiscoveryAgent_SuperMetaObject(const QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_OnMetacast(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void* QBluetoothServiceDiscoveryAgent_SuperMetacast(QBluetoothServiceDiscoveryAgent* self, const char* param1);
void QBluetoothServiceDiscoveryAgent_OnMetacall(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
int QBluetoothServiceDiscoveryAgent_SuperMetacall(QBluetoothServiceDiscoveryAgent* self, int param1, int param2, void** param3);
bool QBluetoothServiceDiscoveryAgent_Event(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
void QBluetoothServiceDiscoveryAgent_OnEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
bool QBluetoothServiceDiscoveryAgent_SuperEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
bool QBluetoothServiceDiscoveryAgent_EventFilter(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event);
void QBluetoothServiceDiscoveryAgent_OnEventFilter(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
bool QBluetoothServiceDiscoveryAgent_SuperEventFilter(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event);
void QBluetoothServiceDiscoveryAgent_TimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event);
void QBluetoothServiceDiscoveryAgent_OnTimerEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_SuperTimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event);
void QBluetoothServiceDiscoveryAgent_ChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event);
void QBluetoothServiceDiscoveryAgent_OnChildEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_SuperChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event);
void QBluetoothServiceDiscoveryAgent_CustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
void QBluetoothServiceDiscoveryAgent_OnCustomEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_SuperCustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event);
void QBluetoothServiceDiscoveryAgent_ConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothServiceDiscoveryAgent_OnConnectNotify(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_SuperConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothServiceDiscoveryAgent_DisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothServiceDiscoveryAgent_OnDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
void QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
QObject* QBluetoothServiceDiscoveryAgent_Sender(const QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_OnSender(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
QObject* QBluetoothServiceDiscoveryAgent_SuperSender(const QBluetoothServiceDiscoveryAgent* self);
int QBluetoothServiceDiscoveryAgent_SenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self);
void QBluetoothServiceDiscoveryAgent_OnSenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
int QBluetoothServiceDiscoveryAgent_SuperSenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self);
int QBluetoothServiceDiscoveryAgent_Receivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal);
void QBluetoothServiceDiscoveryAgent_OnReceivers(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
int QBluetoothServiceDiscoveryAgent_SuperReceivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal);
bool QBluetoothServiceDiscoveryAgent_IsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothServiceDiscoveryAgent_OnIsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot);
bool QBluetoothServiceDiscoveryAgent_SuperIsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothServiceDiscoveryAgent_Delete(QBluetoothServiceDiscoveryAgent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
