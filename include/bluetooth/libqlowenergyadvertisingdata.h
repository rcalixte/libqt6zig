#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYADVERTISINGDATA_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYADVERTISINGDATA_H

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
typedef struct QLowEnergyAdvertisingData QLowEnergyAdvertisingData;
#endif

QLowEnergyAdvertisingData* QLowEnergyAdvertisingData_new();
QLowEnergyAdvertisingData* QLowEnergyAdvertisingData_new2(const QLowEnergyAdvertisingData* other);
void QLowEnergyAdvertisingData_OperatorAssign(QLowEnergyAdvertisingData* self, const QLowEnergyAdvertisingData* other);
void QLowEnergyAdvertisingData_SetLocalName(QLowEnergyAdvertisingData* self, const libqt_string name);
libqt_string QLowEnergyAdvertisingData_LocalName(const QLowEnergyAdvertisingData* self);
uint16_t QLowEnergyAdvertisingData_InvalidManufacturerId();
void QLowEnergyAdvertisingData_SetManufacturerData(QLowEnergyAdvertisingData* self, uint16_t id, const libqt_string data);
uint16_t QLowEnergyAdvertisingData_ManufacturerId(const QLowEnergyAdvertisingData* self);
libqt_string QLowEnergyAdvertisingData_ManufacturerData(const QLowEnergyAdvertisingData* self);
void QLowEnergyAdvertisingData_SetIncludePowerLevel(QLowEnergyAdvertisingData* self, bool doInclude);
bool QLowEnergyAdvertisingData_IncludePowerLevel(const QLowEnergyAdvertisingData* self);
void QLowEnergyAdvertisingData_SetDiscoverability(QLowEnergyAdvertisingData* self, int mode);
int QLowEnergyAdvertisingData_Discoverability(const QLowEnergyAdvertisingData* self);
void QLowEnergyAdvertisingData_SetServices(QLowEnergyAdvertisingData* self, const libqt_list /* of QBluetoothUuid* */ services);
libqt_list /* of QBluetoothUuid* */ QLowEnergyAdvertisingData_Services(const QLowEnergyAdvertisingData* self);
void QLowEnergyAdvertisingData_SetRawData(QLowEnergyAdvertisingData* self, const libqt_string data);
libqt_string QLowEnergyAdvertisingData_RawData(const QLowEnergyAdvertisingData* self);
void QLowEnergyAdvertisingData_Swap(QLowEnergyAdvertisingData* self, QLowEnergyAdvertisingData* other);
void QLowEnergyAdvertisingData_Delete(QLowEnergyAdvertisingData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
