#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHDEVICEDISCOVERYAGENT_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHDEVICEDISCOVERYAGENT_H

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
typedef struct QBluetoothDeviceDiscoveryAgent QBluetoothDeviceDiscoveryAgent;
typedef struct QBluetoothDeviceInfo QBluetoothDeviceInfo;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new();
QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new2(const QBluetoothAddress* deviceAdapter);
QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new3(QObject* parent);
QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new4(const QBluetoothAddress* deviceAdapter, QObject* parent);
QMetaObject* QBluetoothDeviceDiscoveryAgent_MetaObject(const QBluetoothDeviceDiscoveryAgent* self);
void* QBluetoothDeviceDiscoveryAgent_Metacast(QBluetoothDeviceDiscoveryAgent* self, const char* param1);
int QBluetoothDeviceDiscoveryAgent_Metacall(QBluetoothDeviceDiscoveryAgent* self, int param1, int param2, void** param3);
bool QBluetoothDeviceDiscoveryAgent_IsActive(const QBluetoothDeviceDiscoveryAgent* self);
int QBluetoothDeviceDiscoveryAgent_Error(const QBluetoothDeviceDiscoveryAgent* self);
libqt_string QBluetoothDeviceDiscoveryAgent_ErrorString(const QBluetoothDeviceDiscoveryAgent* self);
libqt_list /* of QBluetoothDeviceInfo* */ QBluetoothDeviceDiscoveryAgent_DiscoveredDevices(const QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_SetLowEnergyDiscoveryTimeout(QBluetoothDeviceDiscoveryAgent* self, int msTimeout);
int QBluetoothDeviceDiscoveryAgent_LowEnergyDiscoveryTimeout(const QBluetoothDeviceDiscoveryAgent* self);
int QBluetoothDeviceDiscoveryAgent_SupportedDiscoveryMethods();
void QBluetoothDeviceDiscoveryAgent_Start(QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_Start2(QBluetoothDeviceDiscoveryAgent* self, int method);
void QBluetoothDeviceDiscoveryAgent_Stop(QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_DeviceDiscovered(QBluetoothDeviceDiscoveryAgent* self, const QBluetoothDeviceInfo* info);
void QBluetoothDeviceDiscoveryAgent_Connect_DeviceDiscovered(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_DeviceUpdated(QBluetoothDeviceDiscoveryAgent* self, const QBluetoothDeviceInfo* info, int updatedFields);
void QBluetoothDeviceDiscoveryAgent_Connect_DeviceUpdated(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_Finished(QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_Connect_Finished(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_ErrorOccurred(QBluetoothDeviceDiscoveryAgent* self, int errorVal);
void QBluetoothDeviceDiscoveryAgent_Connect_ErrorOccurred(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_Canceled(QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_Connect_Canceled(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_OnMetaObject(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
QMetaObject* QBluetoothDeviceDiscoveryAgent_SuperMetaObject(const QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_OnMetacast(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void* QBluetoothDeviceDiscoveryAgent_SuperMetacast(QBluetoothDeviceDiscoveryAgent* self, const char* param1);
void QBluetoothDeviceDiscoveryAgent_OnMetacall(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
int QBluetoothDeviceDiscoveryAgent_SuperMetacall(QBluetoothDeviceDiscoveryAgent* self, int param1, int param2, void** param3);
bool QBluetoothDeviceDiscoveryAgent_Event(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
void QBluetoothDeviceDiscoveryAgent_OnEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
bool QBluetoothDeviceDiscoveryAgent_SuperEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
bool QBluetoothDeviceDiscoveryAgent_EventFilter(QBluetoothDeviceDiscoveryAgent* self, QObject* watched, QEvent* event);
void QBluetoothDeviceDiscoveryAgent_OnEventFilter(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
bool QBluetoothDeviceDiscoveryAgent_SuperEventFilter(QBluetoothDeviceDiscoveryAgent* self, QObject* watched, QEvent* event);
void QBluetoothDeviceDiscoveryAgent_TimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event);
void QBluetoothDeviceDiscoveryAgent_OnTimerEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_SuperTimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event);
void QBluetoothDeviceDiscoveryAgent_ChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event);
void QBluetoothDeviceDiscoveryAgent_OnChildEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_SuperChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event);
void QBluetoothDeviceDiscoveryAgent_CustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
void QBluetoothDeviceDiscoveryAgent_OnCustomEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_SuperCustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event);
void QBluetoothDeviceDiscoveryAgent_ConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothDeviceDiscoveryAgent_OnConnectNotify(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_SuperConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothDeviceDiscoveryAgent_DisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothDeviceDiscoveryAgent_OnDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
void QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
QObject* QBluetoothDeviceDiscoveryAgent_Sender(const QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_OnSender(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
QObject* QBluetoothDeviceDiscoveryAgent_SuperSender(const QBluetoothDeviceDiscoveryAgent* self);
int QBluetoothDeviceDiscoveryAgent_SenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self);
void QBluetoothDeviceDiscoveryAgent_OnSenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
int QBluetoothDeviceDiscoveryAgent_SuperSenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self);
int QBluetoothDeviceDiscoveryAgent_Receivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal);
void QBluetoothDeviceDiscoveryAgent_OnReceivers(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
int QBluetoothDeviceDiscoveryAgent_SuperReceivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal);
bool QBluetoothDeviceDiscoveryAgent_IsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothDeviceDiscoveryAgent_OnIsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot);
bool QBluetoothDeviceDiscoveryAgent_SuperIsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal);
void QBluetoothDeviceDiscoveryAgent_Delete(QBluetoothDeviceDiscoveryAgent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
