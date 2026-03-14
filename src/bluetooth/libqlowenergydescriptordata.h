#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYDESCRIPTORDATA_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYDESCRIPTORDATA_H

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
typedef struct QLowEnergyDescriptorData QLowEnergyDescriptorData;
#endif

QLowEnergyDescriptorData* QLowEnergyDescriptorData_new();
QLowEnergyDescriptorData* QLowEnergyDescriptorData_new2(const QBluetoothUuid* uuid, const libqt_string value);
QLowEnergyDescriptorData* QLowEnergyDescriptorData_new3(const QLowEnergyDescriptorData* other);
void QLowEnergyDescriptorData_OperatorAssign(QLowEnergyDescriptorData* self, const QLowEnergyDescriptorData* other);
libqt_string QLowEnergyDescriptorData_Value(const QLowEnergyDescriptorData* self);
void QLowEnergyDescriptorData_SetValue(QLowEnergyDescriptorData* self, const libqt_string value);
QBluetoothUuid* QLowEnergyDescriptorData_Uuid(const QLowEnergyDescriptorData* self);
void QLowEnergyDescriptorData_SetUuid(QLowEnergyDescriptorData* self, const QBluetoothUuid* uuid);
bool QLowEnergyDescriptorData_IsValid(const QLowEnergyDescriptorData* self);
void QLowEnergyDescriptorData_SetReadPermissions(QLowEnergyDescriptorData* self, bool readable);
bool QLowEnergyDescriptorData_IsReadable(const QLowEnergyDescriptorData* self);
int QLowEnergyDescriptorData_ReadConstraints(const QLowEnergyDescriptorData* self);
void QLowEnergyDescriptorData_SetWritePermissions(QLowEnergyDescriptorData* self, bool writable);
bool QLowEnergyDescriptorData_IsWritable(const QLowEnergyDescriptorData* self);
int QLowEnergyDescriptorData_WriteConstraints(const QLowEnergyDescriptorData* self);
void QLowEnergyDescriptorData_Swap(QLowEnergyDescriptorData* self, QLowEnergyDescriptorData* other);
void QLowEnergyDescriptorData_SetReadPermissions2(QLowEnergyDescriptorData* self, bool readable, int constraints);
void QLowEnergyDescriptorData_SetWritePermissions2(QLowEnergyDescriptorData* self, bool writable, int constraints);
void QLowEnergyDescriptorData_Delete(QLowEnergyDescriptorData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
