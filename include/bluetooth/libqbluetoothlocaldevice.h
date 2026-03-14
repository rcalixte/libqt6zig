#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHLOCALDEVICE_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHLOCALDEVICE_H

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
typedef struct QBluetoothHostInfo QBluetoothHostInfo;
typedef struct QBluetoothLocalDevice QBluetoothLocalDevice;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBluetoothLocalDevice* QBluetoothLocalDevice_new();
QBluetoothLocalDevice* QBluetoothLocalDevice_new2(const QBluetoothAddress* address);
QBluetoothLocalDevice* QBluetoothLocalDevice_new3(QObject* parent);
QBluetoothLocalDevice* QBluetoothLocalDevice_new4(const QBluetoothAddress* address, QObject* parent);
QMetaObject* QBluetoothLocalDevice_MetaObject(const QBluetoothLocalDevice* self);
void* QBluetoothLocalDevice_Metacast(QBluetoothLocalDevice* self, const char* param1);
int QBluetoothLocalDevice_Metacall(QBluetoothLocalDevice* self, int param1, int param2, void** param3);
bool QBluetoothLocalDevice_IsValid(const QBluetoothLocalDevice* self);
void QBluetoothLocalDevice_RequestPairing(QBluetoothLocalDevice* self, const QBluetoothAddress* address, int pairing);
int QBluetoothLocalDevice_PairingStatus(const QBluetoothLocalDevice* self, const QBluetoothAddress* address);
void QBluetoothLocalDevice_SetHostMode(QBluetoothLocalDevice* self, int mode);
int QBluetoothLocalDevice_HostMode(const QBluetoothLocalDevice* self);
libqt_list /* of QBluetoothAddress* */ QBluetoothLocalDevice_ConnectedDevices(const QBluetoothLocalDevice* self);
void QBluetoothLocalDevice_PowerOn(QBluetoothLocalDevice* self);
libqt_string QBluetoothLocalDevice_Name(const QBluetoothLocalDevice* self);
QBluetoothAddress* QBluetoothLocalDevice_Address(const QBluetoothLocalDevice* self);
libqt_list /* of QBluetoothHostInfo* */ QBluetoothLocalDevice_AllDevices();
void QBluetoothLocalDevice_HostModeStateChanged(QBluetoothLocalDevice* self, int state);
void QBluetoothLocalDevice_Connect_HostModeStateChanged(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_DeviceConnected(QBluetoothLocalDevice* self, const QBluetoothAddress* address);
void QBluetoothLocalDevice_Connect_DeviceConnected(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_DeviceDisconnected(QBluetoothLocalDevice* self, const QBluetoothAddress* address);
void QBluetoothLocalDevice_Connect_DeviceDisconnected(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_PairingFinished(QBluetoothLocalDevice* self, const QBluetoothAddress* address, int pairing);
void QBluetoothLocalDevice_Connect_PairingFinished(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_ErrorOccurred(QBluetoothLocalDevice* self, int errorVal);
void QBluetoothLocalDevice_Connect_ErrorOccurred(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_OnMetaObject(const QBluetoothLocalDevice* self, intptr_t slot);
QMetaObject* QBluetoothLocalDevice_SuperMetaObject(const QBluetoothLocalDevice* self);
void QBluetoothLocalDevice_OnMetacast(QBluetoothLocalDevice* self, intptr_t slot);
void* QBluetoothLocalDevice_SuperMetacast(QBluetoothLocalDevice* self, const char* param1);
void QBluetoothLocalDevice_OnMetacall(QBluetoothLocalDevice* self, intptr_t slot);
int QBluetoothLocalDevice_SuperMetacall(QBluetoothLocalDevice* self, int param1, int param2, void** param3);
bool QBluetoothLocalDevice_Event(QBluetoothLocalDevice* self, QEvent* event);
void QBluetoothLocalDevice_OnEvent(QBluetoothLocalDevice* self, intptr_t slot);
bool QBluetoothLocalDevice_SuperEvent(QBluetoothLocalDevice* self, QEvent* event);
bool QBluetoothLocalDevice_EventFilter(QBluetoothLocalDevice* self, QObject* watched, QEvent* event);
void QBluetoothLocalDevice_OnEventFilter(QBluetoothLocalDevice* self, intptr_t slot);
bool QBluetoothLocalDevice_SuperEventFilter(QBluetoothLocalDevice* self, QObject* watched, QEvent* event);
void QBluetoothLocalDevice_TimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event);
void QBluetoothLocalDevice_OnTimerEvent(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_SuperTimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event);
void QBluetoothLocalDevice_ChildEvent(QBluetoothLocalDevice* self, QChildEvent* event);
void QBluetoothLocalDevice_OnChildEvent(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_SuperChildEvent(QBluetoothLocalDevice* self, QChildEvent* event);
void QBluetoothLocalDevice_CustomEvent(QBluetoothLocalDevice* self, QEvent* event);
void QBluetoothLocalDevice_OnCustomEvent(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_SuperCustomEvent(QBluetoothLocalDevice* self, QEvent* event);
void QBluetoothLocalDevice_ConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
void QBluetoothLocalDevice_OnConnectNotify(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_SuperConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
void QBluetoothLocalDevice_DisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
void QBluetoothLocalDevice_OnDisconnectNotify(QBluetoothLocalDevice* self, intptr_t slot);
void QBluetoothLocalDevice_SuperDisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal);
QObject* QBluetoothLocalDevice_Sender(const QBluetoothLocalDevice* self);
void QBluetoothLocalDevice_OnSender(const QBluetoothLocalDevice* self, intptr_t slot);
QObject* QBluetoothLocalDevice_SuperSender(const QBluetoothLocalDevice* self);
int QBluetoothLocalDevice_SenderSignalIndex(const QBluetoothLocalDevice* self);
void QBluetoothLocalDevice_OnSenderSignalIndex(const QBluetoothLocalDevice* self, intptr_t slot);
int QBluetoothLocalDevice_SuperSenderSignalIndex(const QBluetoothLocalDevice* self);
int QBluetoothLocalDevice_Receivers(const QBluetoothLocalDevice* self, const char* signal);
void QBluetoothLocalDevice_OnReceivers(const QBluetoothLocalDevice* self, intptr_t slot);
int QBluetoothLocalDevice_SuperReceivers(const QBluetoothLocalDevice* self, const char* signal);
bool QBluetoothLocalDevice_IsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal);
void QBluetoothLocalDevice_OnIsSignalConnected(const QBluetoothLocalDevice* self, intptr_t slot);
bool QBluetoothLocalDevice_SuperIsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal);
void QBluetoothLocalDevice_Delete(QBluetoothLocalDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
