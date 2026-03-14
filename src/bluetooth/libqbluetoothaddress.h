#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHADDRESS_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHADDRESS_H

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
#endif

QBluetoothAddress* QBluetoothAddress_new();
QBluetoothAddress* QBluetoothAddress_new2(unsigned long long address);
QBluetoothAddress* QBluetoothAddress_new3(const libqt_string address);
QBluetoothAddress* QBluetoothAddress_new4(const QBluetoothAddress* other);
void QBluetoothAddress_OperatorAssign(QBluetoothAddress* self, const QBluetoothAddress* other);
bool QBluetoothAddress_IsNull(const QBluetoothAddress* self);
void QBluetoothAddress_Clear(QBluetoothAddress* self);
unsigned long long QBluetoothAddress_ToUInt64(const QBluetoothAddress* self);
libqt_string QBluetoothAddress_ToString(const QBluetoothAddress* self);
void QBluetoothAddress_Delete(QBluetoothAddress* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
