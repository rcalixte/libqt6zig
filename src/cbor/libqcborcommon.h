#pragma once
#ifndef CBOR_LIBQCBORCOMMON_H
#define CBOR_LIBQCBORCOMMON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCborError QCborError;
#endif

int QCborError_C(const QCborError* self);
void QCborError_SetC(QCborError* self, int c);
int QCborError_ToQCborError__Code(const QCborError* self);
libqt_string QCborError_ToString(const QCborError* self);
void QCborError_Delete(QCborError* self);

size_t qcborcommon_QHash(uint8_t tag, size_t seed);
size_t qcborcommon_QHash2(uint64_t tag, size_t seed);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
