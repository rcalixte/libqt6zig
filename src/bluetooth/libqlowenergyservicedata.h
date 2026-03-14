#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYSERVICEDATA_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYSERVICEDATA_H

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
typedef struct QLowEnergyCharacteristicData QLowEnergyCharacteristicData;
typedef struct QLowEnergyService QLowEnergyService;
typedef struct QLowEnergyServiceData QLowEnergyServiceData;
#endif

QLowEnergyServiceData* QLowEnergyServiceData_new();
QLowEnergyServiceData* QLowEnergyServiceData_new2(const QLowEnergyServiceData* other);
void QLowEnergyServiceData_OperatorAssign(QLowEnergyServiceData* self, const QLowEnergyServiceData* other);
int QLowEnergyServiceData_Type(const QLowEnergyServiceData* self);
void QLowEnergyServiceData_SetType(QLowEnergyServiceData* self, int typeVal);
QBluetoothUuid* QLowEnergyServiceData_Uuid(const QLowEnergyServiceData* self);
void QLowEnergyServiceData_SetUuid(QLowEnergyServiceData* self, const QBluetoothUuid* uuid);
libqt_list /* of QLowEnergyService* */ QLowEnergyServiceData_IncludedServices(const QLowEnergyServiceData* self);
void QLowEnergyServiceData_SetIncludedServices(QLowEnergyServiceData* self, const libqt_list /* of QLowEnergyService* */ services);
void QLowEnergyServiceData_AddIncludedService(QLowEnergyServiceData* self, QLowEnergyService* service);
libqt_list /* of QLowEnergyCharacteristicData* */ QLowEnergyServiceData_Characteristics(const QLowEnergyServiceData* self);
void QLowEnergyServiceData_SetCharacteristics(QLowEnergyServiceData* self, const libqt_list /* of QLowEnergyCharacteristicData* */ characteristics);
void QLowEnergyServiceData_AddCharacteristic(QLowEnergyServiceData* self, const QLowEnergyCharacteristicData* characteristic);
bool QLowEnergyServiceData_IsValid(const QLowEnergyServiceData* self);
void QLowEnergyServiceData_Swap(QLowEnergyServiceData* self, QLowEnergyServiceData* other);
void QLowEnergyServiceData_Delete(QLowEnergyServiceData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
