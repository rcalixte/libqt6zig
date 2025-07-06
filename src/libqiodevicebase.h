#pragma once
#ifndef SRCC_LIBQIODEVICEBASE_H
#define SRCC_LIBQIODEVICEBASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODeviceBase QIODeviceBase;
#endif

QIODeviceBase* QIODeviceBase_new(const QIODeviceBase* other);
void QIODeviceBase_CopyAssign(QIODeviceBase* self, QIODeviceBase* other);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
