#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTH_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBluetooth QBluetooth;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QBluetooth_GetEnumMetaObject(int param1);
const char* QBluetooth_GetEnumName(int param1);
QMetaObject* QBluetooth_GetEnumMetaObject2(int param1);
const char* QBluetooth_GetEnumName2(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
