#pragma once
#ifndef SRCC_LIBQUUID_H
#define SRCC_LIBQUUID_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QUuid QUuid;
#endif

#ifdef __cplusplus
typedef QUuid::StringFormat StringFormat; // C++ enum
typedef QUuid::Variant Variant;           // C++ enum
typedef QUuid::Version Version;           // C++ enum
#else
typedef int StringFormat; // C ABI enum
typedef int Variant;      // C ABI enum
typedef int Version;      // C ABI enum
#endif

QUuid* QUuid_new(const QUuid* other);
QUuid* QUuid_new2(QUuid* other);
QUuid* QUuid_new3();
QUuid* QUuid_new4(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* QUuid_new5(libqt_string stringVal);
QUuid* QUuid_new6(const QUuid* param1);
void QUuid_CopyAssign(QUuid* self, QUuid* other);
void QUuid_MoveAssign(QUuid* self, QUuid* other);
QUuid* QUuid_FromString(libqt_string stringVal);
libqt_string QUuid_ToString(const QUuid* self);
libqt_string QUuid_ToByteArray(const QUuid* self);
libqt_string QUuid_ToRfc4122(const QUuid* self);
QUuid* QUuid_FromRfc4122(QByteArrayView* param1);
bool QUuid_IsNull(const QUuid* self);
bool QUuid_OperatorEqual(const QUuid* self, const QUuid* orig);
bool QUuid_OperatorNotEqual(const QUuid* self, const QUuid* orig);
bool QUuid_OperatorLesser(const QUuid* self, const QUuid* other);
bool QUuid_OperatorGreater(const QUuid* self, const QUuid* other);
QUuid* QUuid_CreateUuid();
QUuid* QUuid_CreateUuidV3(const QUuid* ns, const libqt_string baseData);
QUuid* QUuid_CreateUuidV5(const QUuid* ns, const libqt_string baseData);
QUuid* QUuid_CreateUuidV32(const QUuid* ns, const libqt_string baseData);
QUuid* QUuid_CreateUuidV52(const QUuid* ns, const libqt_string baseData);
int QUuid_Variant(const QUuid* self);
int QUuid_Version(const QUuid* self);
libqt_string QUuid_ToString1(const QUuid* self, int mode);
libqt_string QUuid_ToByteArray1(const QUuid* self, int mode);
void QUuid_Delete(QUuid* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
