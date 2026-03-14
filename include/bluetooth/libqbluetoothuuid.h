#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHUUID_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHUUID_H

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
typedef struct QUuid QUuid;
typedef struct quint128 quint128;
#endif

QBluetoothUuid* QBluetoothUuid_new(const QBluetoothUuid* other);
QBluetoothUuid* QBluetoothUuid_new2();
QBluetoothUuid* QBluetoothUuid_new3(int uuid);
QBluetoothUuid* QBluetoothUuid_new4(int uuid);
QBluetoothUuid* QBluetoothUuid_new5(int uuid);
QBluetoothUuid* QBluetoothUuid_new6(int uuid);
QBluetoothUuid* QBluetoothUuid_new7(uint16_t uuid);
QBluetoothUuid* QBluetoothUuid_new8(unsigned int uuid);
QBluetoothUuid* QBluetoothUuid_new9(const QBluetoothUuid* uuid);
QBluetoothUuid* QBluetoothUuid_new10(const QUuid* uuid);
void QBluetoothUuid_CopyAssign(QBluetoothUuid* self, QBluetoothUuid* other);
void QBluetoothUuid_OperatorAssign(QBluetoothUuid* self, const QBluetoothUuid* other);
int QBluetoothUuid_MinimumSize(const QBluetoothUuid* self);
uint16_t QBluetoothUuid_ToUInt16(const QBluetoothUuid* self);
unsigned int QBluetoothUuid_ToUInt32(const QBluetoothUuid* self);
__uint128_t QBluetoothUuid_ToUInt128(const QBluetoothUuid* self);
libqt_string QBluetoothUuid_ServiceClassToString(int uuid);
libqt_string QBluetoothUuid_ProtocolToString(int uuid);
libqt_string QBluetoothUuid_CharacteristicToString(int uuid);
libqt_string QBluetoothUuid_DescriptorToString(int uuid);
uint16_t QBluetoothUuid_ToUInt161(const QBluetoothUuid* self, bool* ok);
unsigned int QBluetoothUuid_ToUInt321(const QBluetoothUuid* self, bool* ok);
__uint128_t QBluetoothUuid_ToUInt1281(const QBluetoothUuid* self, int order);
void QBluetoothUuid_Delete(QBluetoothUuid* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
