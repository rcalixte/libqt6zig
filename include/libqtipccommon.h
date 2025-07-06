#pragma once
#ifndef SRCC_LIBQTIPCCOMMON_H
#define SRCC_LIBQTIPCCOMMON_H

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
typedef struct QNativeIpcKey QNativeIpcKey;
#endif

QNativeIpcKey* QNativeIpcKey_new();
QNativeIpcKey* QNativeIpcKey_new2(uint16_t typeVal);
QNativeIpcKey* QNativeIpcKey_new3(const libqt_string k);
QNativeIpcKey* QNativeIpcKey_new4(const QNativeIpcKey* other);
QNativeIpcKey* QNativeIpcKey_new5(const libqt_string k, uint16_t typeVal);
uint16_t QNativeIpcKey_LegacyDefaultTypeForOs();
void QNativeIpcKey_OperatorAssign(QNativeIpcKey* self, const QNativeIpcKey* other);
void QNativeIpcKey_Swap(QNativeIpcKey* self, QNativeIpcKey* other);
bool QNativeIpcKey_IsEmpty(const QNativeIpcKey* self);
bool QNativeIpcKey_IsValid(const QNativeIpcKey* self);
uint16_t QNativeIpcKey_Type(const QNativeIpcKey* self);
void QNativeIpcKey_SetType(QNativeIpcKey* self, uint16_t typeVal);
libqt_string QNativeIpcKey_NativeKey(const QNativeIpcKey* self);
void QNativeIpcKey_SetNativeKey(QNativeIpcKey* self, const libqt_string newKey);
libqt_string QNativeIpcKey_ToString(const QNativeIpcKey* self);
QNativeIpcKey* QNativeIpcKey_FromString(const libqt_string stringVal);
void QNativeIpcKey_Delete(QNativeIpcKey* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
