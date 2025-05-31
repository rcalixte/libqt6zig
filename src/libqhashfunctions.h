#pragma once
#ifndef SRCC_LIBQHASHFUNCTIONS_H
#define SRCC_LIBQHASHFUNCTIONS_H

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
typedef struct QHashSeed QHashSeed;
#endif

QHashSeed* QHashSeed_new(const QHashSeed* other);
QHashSeed* QHashSeed_new2(QHashSeed* other);
QHashSeed* QHashSeed_new3();
QHashSeed* QHashSeed_new4(size_t d);
void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other);
void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other);
size_t QHashSeed_ToUnsignedLong(const QHashSeed* self);
QHashSeed* QHashSeed_GlobalSeed();
void QHashSeed_SetDeterministicGlobalSeed();
void QHashSeed_ResetRandomGlobalSeed();
void QHashSeed_Delete(QHashSeed* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
