#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYCHARACTERISTICDATA_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYCHARACTERISTICDATA_H

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
typedef struct QLowEnergyDescriptorData QLowEnergyDescriptorData;
#endif

QLowEnergyCharacteristicData* QLowEnergyCharacteristicData_new();
QLowEnergyCharacteristicData* QLowEnergyCharacteristicData_new2(const QLowEnergyCharacteristicData* other);
void QLowEnergyCharacteristicData_OperatorAssign(QLowEnergyCharacteristicData* self, const QLowEnergyCharacteristicData* other);
QBluetoothUuid* QLowEnergyCharacteristicData_Uuid(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_SetUuid(QLowEnergyCharacteristicData* self, const QBluetoothUuid* uuid);
libqt_string QLowEnergyCharacteristicData_Value(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_SetValue(QLowEnergyCharacteristicData* self, const libqt_string value);
int QLowEnergyCharacteristicData_Properties(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_SetProperties(QLowEnergyCharacteristicData* self, int properties);
libqt_list /* of QLowEnergyDescriptorData* */ QLowEnergyCharacteristicData_Descriptors(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_SetDescriptors(QLowEnergyCharacteristicData* self, const libqt_list /* of QLowEnergyDescriptorData* */ descriptors);
void QLowEnergyCharacteristicData_AddDescriptor(QLowEnergyCharacteristicData* self, const QLowEnergyDescriptorData* descriptor);
void QLowEnergyCharacteristicData_SetReadConstraints(QLowEnergyCharacteristicData* self, int constraints);
int QLowEnergyCharacteristicData_ReadConstraints(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_SetWriteConstraints(QLowEnergyCharacteristicData* self, int constraints);
int QLowEnergyCharacteristicData_WriteConstraints(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_SetValueLength(QLowEnergyCharacteristicData* self, int minimum, int maximum);
int QLowEnergyCharacteristicData_MinimumValueLength(const QLowEnergyCharacteristicData* self);
int QLowEnergyCharacteristicData_MaximumValueLength(const QLowEnergyCharacteristicData* self);
bool QLowEnergyCharacteristicData_IsValid(const QLowEnergyCharacteristicData* self);
void QLowEnergyCharacteristicData_Swap(QLowEnergyCharacteristicData* self, QLowEnergyCharacteristicData* other);
void QLowEnergyCharacteristicData_Delete(QLowEnergyCharacteristicData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
