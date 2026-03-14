#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYDESCRIPTOR_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYDESCRIPTOR_H

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
typedef struct QLowEnergyDescriptor QLowEnergyDescriptor;
#endif

QLowEnergyDescriptor* QLowEnergyDescriptor_new();
QLowEnergyDescriptor* QLowEnergyDescriptor_new2(const QLowEnergyDescriptor* other);
void QLowEnergyDescriptor_OperatorAssign(QLowEnergyDescriptor* self, const QLowEnergyDescriptor* other);
bool QLowEnergyDescriptor_IsValid(const QLowEnergyDescriptor* self);
libqt_string QLowEnergyDescriptor_Value(const QLowEnergyDescriptor* self);
QBluetoothUuid* QLowEnergyDescriptor_Uuid(const QLowEnergyDescriptor* self);
libqt_string QLowEnergyDescriptor_Name(const QLowEnergyDescriptor* self);
int QLowEnergyDescriptor_Type(const QLowEnergyDescriptor* self);
void QLowEnergyDescriptor_Delete(QLowEnergyDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
