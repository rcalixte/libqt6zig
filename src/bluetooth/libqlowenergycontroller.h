#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYCONTROLLER_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYCONTROLLER_H

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
typedef struct QBluetoothDeviceInfo QBluetoothDeviceInfo;
typedef struct QBluetoothUuid QBluetoothUuid;
typedef struct QLowEnergyAdvertisingData QLowEnergyAdvertisingData;
typedef struct QLowEnergyAdvertisingParameters QLowEnergyAdvertisingParameters;
typedef struct QLowEnergyConnectionParameters QLowEnergyConnectionParameters;
typedef struct QLowEnergyController QLowEnergyController;
typedef struct QLowEnergyService QLowEnergyService;
typedef struct QLowEnergyServiceData QLowEnergyServiceData;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QLowEnergyController_MetaObject(const QLowEnergyController* self);
void* QLowEnergyController_Metacast(QLowEnergyController* self, const char* param1);
int QLowEnergyController_Metacall(QLowEnergyController* self, int param1, int param2, void** param3);
QLowEnergyController* QLowEnergyController_CreateCentral(const QBluetoothDeviceInfo* remoteDevice);
QLowEnergyController* QLowEnergyController_CreateCentral2(const QBluetoothDeviceInfo* remoteDevice, const QBluetoothAddress* localDevice);
QLowEnergyController* QLowEnergyController_CreatePeripheral(const QBluetoothAddress* localDevice);
QLowEnergyController* QLowEnergyController_CreatePeripheral2();
QBluetoothAddress* QLowEnergyController_LocalAddress(const QLowEnergyController* self);
QBluetoothAddress* QLowEnergyController_RemoteAddress(const QLowEnergyController* self);
QBluetoothUuid* QLowEnergyController_RemoteDeviceUuid(const QLowEnergyController* self);
libqt_string QLowEnergyController_RemoteName(const QLowEnergyController* self);
int QLowEnergyController_State(const QLowEnergyController* self);
int QLowEnergyController_RemoteAddressType(const QLowEnergyController* self);
void QLowEnergyController_SetRemoteAddressType(QLowEnergyController* self, int typeVal);
void QLowEnergyController_ConnectToDevice(QLowEnergyController* self);
void QLowEnergyController_DisconnectFromDevice(QLowEnergyController* self);
void QLowEnergyController_DiscoverServices(QLowEnergyController* self);
libqt_list /* of QBluetoothUuid* */ QLowEnergyController_Services(const QLowEnergyController* self);
QLowEnergyService* QLowEnergyController_CreateServiceObject(QLowEnergyController* self, const QBluetoothUuid* service);
void QLowEnergyController_StartAdvertising(QLowEnergyController* self, const QLowEnergyAdvertisingParameters* parameters, const QLowEnergyAdvertisingData* advertisingData);
void QLowEnergyController_StopAdvertising(QLowEnergyController* self);
QLowEnergyService* QLowEnergyController_AddService(QLowEnergyController* self, const QLowEnergyServiceData* service);
void QLowEnergyController_RequestConnectionUpdate(QLowEnergyController* self, const QLowEnergyConnectionParameters* parameters);
int QLowEnergyController_Error(const QLowEnergyController* self);
libqt_string QLowEnergyController_ErrorString(const QLowEnergyController* self);
int QLowEnergyController_Role(const QLowEnergyController* self);
int QLowEnergyController_Mtu(const QLowEnergyController* self);
void QLowEnergyController_ReadRssi(QLowEnergyController* self);
void QLowEnergyController_Connected(QLowEnergyController* self);
void QLowEnergyController_Connect_Connected(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_Disconnected(QLowEnergyController* self);
void QLowEnergyController_Connect_Disconnected(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_StateChanged(QLowEnergyController* self, int state);
void QLowEnergyController_Connect_StateChanged(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_ErrorOccurred(QLowEnergyController* self, int newError);
void QLowEnergyController_Connect_ErrorOccurred(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_MtuChanged(QLowEnergyController* self, int mtu);
void QLowEnergyController_Connect_MtuChanged(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_RssiRead(QLowEnergyController* self, int16_t rssi);
void QLowEnergyController_Connect_RssiRead(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_ServiceDiscovered(QLowEnergyController* self, const QBluetoothUuid* newService);
void QLowEnergyController_Connect_ServiceDiscovered(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_DiscoveryFinished(QLowEnergyController* self);
void QLowEnergyController_Connect_DiscoveryFinished(QLowEnergyController* self, intptr_t slot);
void QLowEnergyController_ConnectionUpdated(QLowEnergyController* self, const QLowEnergyConnectionParameters* parameters);
void QLowEnergyController_Connect_ConnectionUpdated(QLowEnergyController* self, intptr_t slot);
QLowEnergyController* QLowEnergyController_CreateCentral22(const QBluetoothDeviceInfo* remoteDevice, QObject* parent);
QLowEnergyController* QLowEnergyController_CreateCentral3(const QBluetoothDeviceInfo* remoteDevice, const QBluetoothAddress* localDevice, QObject* parent);
QLowEnergyController* QLowEnergyController_CreatePeripheral22(const QBluetoothAddress* localDevice, QObject* parent);
QLowEnergyController* QLowEnergyController_CreatePeripheral1(QObject* parent);
QLowEnergyService* QLowEnergyController_CreateServiceObject2(QLowEnergyController* self, const QBluetoothUuid* service, QObject* parent);
void QLowEnergyController_StartAdvertising3(QLowEnergyController* self, const QLowEnergyAdvertisingParameters* parameters, const QLowEnergyAdvertisingData* advertisingData, const QLowEnergyAdvertisingData* scanResponseData);
QLowEnergyService* QLowEnergyController_AddService2(QLowEnergyController* self, const QLowEnergyServiceData* service, QObject* parent);
void QLowEnergyController_Delete(QLowEnergyController* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
