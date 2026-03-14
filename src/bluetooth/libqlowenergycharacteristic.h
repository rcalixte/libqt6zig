#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYCHARACTERISTIC_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYCHARACTERISTIC_H

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
#endif

QLowEnergyCharacteristic* QLowEnergyCharacteristic_new();
QLowEnergyCharacteristic* QLowEnergyCharacteristic_new2(const QLowEnergyCharacteristic* other);
void QLowEnergyCharacteristic_OperatorAssign(QLowEnergyCharacteristic* self, const QLowEnergyCharacteristic* other);
libqt_string QLowEnergyCharacteristic_Name(const QLowEnergyCharacteristic* self);
QBluetoothUuid* QLowEnergyCharacteristic_Uuid(const QLowEnergyCharacteristic* self);
libqt_string QLowEnergyCharacteristic_Value(const QLowEnergyCharacteristic* self);
int QLowEnergyCharacteristic_Properties(const QLowEnergyCharacteristic* self);
QLowEnergyDescriptor* QLowEnergyCharacteristic_Descriptor(const QLowEnergyCharacteristic* self, const QBluetoothUuid* uuid);
libqt_list /* of QLowEnergyDescriptor* */ QLowEnergyCharacteristic_Descriptors(const QLowEnergyCharacteristic* self);
QLowEnergyDescriptor* QLowEnergyCharacteristic_ClientCharacteristicConfiguration(const QLowEnergyCharacteristic* self);
bool QLowEnergyCharacteristic_IsValid(const QLowEnergyCharacteristic* self);
void QLowEnergyCharacteristic_Delete(QLowEnergyCharacteristic* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
