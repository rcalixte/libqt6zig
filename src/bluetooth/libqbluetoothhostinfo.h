#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHHOSTINFO_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHHOSTINFO_H

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
typedef struct QBluetoothHostInfo QBluetoothHostInfo;
#endif

QBluetoothHostInfo* QBluetoothHostInfo_new();
QBluetoothHostInfo* QBluetoothHostInfo_new2(const QBluetoothHostInfo* other);
void QBluetoothHostInfo_OperatorAssign(QBluetoothHostInfo* self, const QBluetoothHostInfo* other);
QBluetoothAddress* QBluetoothHostInfo_Address(const QBluetoothHostInfo* self);
void QBluetoothHostInfo_SetAddress(QBluetoothHostInfo* self, const QBluetoothAddress* address);
libqt_string QBluetoothHostInfo_Name(const QBluetoothHostInfo* self);
void QBluetoothHostInfo_SetName(QBluetoothHostInfo* self, const libqt_string name);
void QBluetoothHostInfo_Delete(QBluetoothHostInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
