#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYSERVICE_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBluetoothUuid QBluetoothUuid;
typedef struct QLowEnergyCharacteristic QLowEnergyCharacteristic;
typedef struct QLowEnergyDescriptor QLowEnergyDescriptor;
typedef struct QLowEnergyService QLowEnergyService;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QLowEnergyService_MetaObject(const QLowEnergyService* self);
void* QLowEnergyService_Metacast(QLowEnergyService* self, const char* param1);
int QLowEnergyService_Metacall(QLowEnergyService* self, int param1, int param2, void** param3);
libqt_list /* of QBluetoothUuid* */ QLowEnergyService_IncludedServices(const QLowEnergyService* self);
int QLowEnergyService_Type(const QLowEnergyService* self);
int QLowEnergyService_State(const QLowEnergyService* self);
QLowEnergyCharacteristic* QLowEnergyService_Characteristic(const QLowEnergyService* self, const QBluetoothUuid* uuid);
libqt_list /* of QLowEnergyCharacteristic* */ QLowEnergyService_Characteristics(const QLowEnergyService* self);
QBluetoothUuid* QLowEnergyService_ServiceUuid(const QLowEnergyService* self);
libqt_string QLowEnergyService_ServiceName(const QLowEnergyService* self);
void QLowEnergyService_DiscoverDetails(QLowEnergyService* self);
int QLowEnergyService_Error(const QLowEnergyService* self);
bool QLowEnergyService_Contains(const QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic);
void QLowEnergyService_ReadCharacteristic(QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic);
void QLowEnergyService_WriteCharacteristic(QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic, const libqt_string newValue);
bool QLowEnergyService_Contains2(const QLowEnergyService* self, const QLowEnergyDescriptor* descriptor);
void QLowEnergyService_ReadDescriptor(QLowEnergyService* self, const QLowEnergyDescriptor* descriptor);
void QLowEnergyService_WriteDescriptor(QLowEnergyService* self, const QLowEnergyDescriptor* descriptor, const libqt_string newValue);
void QLowEnergyService_StateChanged(QLowEnergyService* self, int newState);
void QLowEnergyService_Connect_StateChanged(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_CharacteristicChanged(QLowEnergyService* self, const QLowEnergyCharacteristic* info, const libqt_string value);
void QLowEnergyService_Connect_CharacteristicChanged(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_CharacteristicRead(QLowEnergyService* self, const QLowEnergyCharacteristic* info, const libqt_string value);
void QLowEnergyService_Connect_CharacteristicRead(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_CharacteristicWritten(QLowEnergyService* self, const QLowEnergyCharacteristic* info, const libqt_string value);
void QLowEnergyService_Connect_CharacteristicWritten(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_DescriptorRead(QLowEnergyService* self, const QLowEnergyDescriptor* info, const libqt_string value);
void QLowEnergyService_Connect_DescriptorRead(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_DescriptorWritten(QLowEnergyService* self, const QLowEnergyDescriptor* info, const libqt_string value);
void QLowEnergyService_Connect_DescriptorWritten(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_ErrorOccurred(QLowEnergyService* self, int errorVal);
void QLowEnergyService_Connect_ErrorOccurred(QLowEnergyService* self, intptr_t slot);
void QLowEnergyService_DiscoverDetails1(QLowEnergyService* self, int mode);
void QLowEnergyService_WriteCharacteristic3(QLowEnergyService* self, const QLowEnergyCharacteristic* characteristic, const libqt_string newValue, int mode);
void QLowEnergyService_Delete(QLowEnergyService* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
