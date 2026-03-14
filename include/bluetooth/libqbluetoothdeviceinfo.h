#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHDEVICEINFO_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHDEVICEINFO_H

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
#endif

QBluetoothDeviceInfo* QBluetoothDeviceInfo_new();
QBluetoothDeviceInfo* QBluetoothDeviceInfo_new2(const QBluetoothAddress* address, const libqt_string name, unsigned int classOfDevice);
QBluetoothDeviceInfo* QBluetoothDeviceInfo_new3(const QBluetoothUuid* uuid, const libqt_string name, unsigned int classOfDevice);
QBluetoothDeviceInfo* QBluetoothDeviceInfo_new4(const QBluetoothDeviceInfo* other);
bool QBluetoothDeviceInfo_IsValid(const QBluetoothDeviceInfo* self);
bool QBluetoothDeviceInfo_IsCached(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_SetCached(QBluetoothDeviceInfo* self, bool cached);
void QBluetoothDeviceInfo_OperatorAssign(QBluetoothDeviceInfo* self, const QBluetoothDeviceInfo* other);
QBluetoothAddress* QBluetoothDeviceInfo_Address(const QBluetoothDeviceInfo* self);
libqt_string QBluetoothDeviceInfo_Name(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_SetName(QBluetoothDeviceInfo* self, const libqt_string name);
int QBluetoothDeviceInfo_ServiceClasses(const QBluetoothDeviceInfo* self);
int QBluetoothDeviceInfo_MajorDeviceClass(const QBluetoothDeviceInfo* self);
unsigned char QBluetoothDeviceInfo_MinorDeviceClass(const QBluetoothDeviceInfo* self);
int16_t QBluetoothDeviceInfo_Rssi(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_SetRssi(QBluetoothDeviceInfo* self, int16_t signal);
libqt_list /* of QBluetoothUuid* */ QBluetoothDeviceInfo_ServiceUuids(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_SetServiceUuids(QBluetoothDeviceInfo* self, const libqt_list /* of QBluetoothUuid* */ uuids);
libqt_list /* of uint16_t */ QBluetoothDeviceInfo_ManufacturerIds(const QBluetoothDeviceInfo* self);
libqt_string QBluetoothDeviceInfo_ManufacturerData(const QBluetoothDeviceInfo* self, uint16_t manufacturerId);
bool QBluetoothDeviceInfo_SetManufacturerData(QBluetoothDeviceInfo* self, uint16_t manufacturerId, const libqt_string data);
libqt_map /* of uint16_t to libqt_list of libqt_string */ QBluetoothDeviceInfo_ManufacturerData2(const QBluetoothDeviceInfo* self);
libqt_list /* of QBluetoothUuid* */ QBluetoothDeviceInfo_ServiceIds(const QBluetoothDeviceInfo* self);
libqt_string QBluetoothDeviceInfo_ServiceData(const QBluetoothDeviceInfo* self, const QBluetoothUuid* serviceId);
bool QBluetoothDeviceInfo_SetServiceData(QBluetoothDeviceInfo* self, const QBluetoothUuid* serviceId, const libqt_string data);
libqt_map /* of QBluetoothUuid* to libqt_list of libqt_string */ QBluetoothDeviceInfo_ServiceData2(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_SetCoreConfigurations(QBluetoothDeviceInfo* self, int coreConfigs);
int QBluetoothDeviceInfo_CoreConfigurations(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_SetDeviceUuid(QBluetoothDeviceInfo* self, const QBluetoothUuid* uuid);
QBluetoothUuid* QBluetoothDeviceInfo_DeviceUuid(const QBluetoothDeviceInfo* self);
void QBluetoothDeviceInfo_Delete(QBluetoothDeviceInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
