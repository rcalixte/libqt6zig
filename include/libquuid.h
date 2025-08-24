#pragma once
#ifndef SRCC_LIBQUUID_H
#define SRCC_LIBQUUID_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QUuid__Id128Bytes)
typedef QUuid::Id128Bytes QUuid__Id128Bytes;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QUuid QUuid;
typedef struct QUuid__Id128Bytes QUuid__Id128Bytes;
#endif

QUuid* QUuid_new(const QUuid* other);
QUuid* QUuid_new2(QUuid* other);
QUuid* QUuid_new3();
QUuid* QUuid_new4(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* QUuid_new5(QUuid__Id128Bytes* id128);
QUuid* QUuid_new6(libqt_string stringVal);
QUuid* QUuid_new7(const QUuid* param1);
QUuid* QUuid_new8(QUuid__Id128Bytes* id128, int order);
void QUuid_CopyAssign(QUuid* self, QUuid* other);
void QUuid_MoveAssign(QUuid* self, QUuid* other);
QUuid* QUuid_FromString(libqt_string stringVal);
libqt_string QUuid_ToString(const QUuid* self);
libqt_string QUuid_ToByteArray(const QUuid* self);
QUuid__Id128Bytes* QUuid_ToBytes(const QUuid* self);
libqt_string QUuid_ToRfc4122(const QUuid* self);
QUuid* QUuid_FromBytes(const void* bytes);
QUuid* QUuid_FromRfc4122(QByteArrayView* param1);
bool QUuid_IsNull(const QUuid* self);
QUuid* QUuid_CreateUuid();
QUuid* QUuid_CreateUuidV5(QUuid* ns, QByteArrayView* baseData);
QUuid* QUuid_CreateUuidV3(QUuid* ns, QByteArrayView* baseData);
int QUuid_Variant(const QUuid* self);
int QUuid_Version(const QUuid* self);
unsigned int QUuid_Data1(const QUuid* self);
void QUuid_SetData1(QUuid* self, unsigned int data1);
uint16_t QUuid_Data2(const QUuid* self);
void QUuid_SetData2(QUuid* self, uint16_t data2);
uint16_t QUuid_Data3(const QUuid* self);
void QUuid_SetData3(QUuid* self, uint16_t data3);
libqt_string QUuid_ToString1(const QUuid* self, int mode);
libqt_string QUuid_ToByteArray1(const QUuid* self, int mode);
QUuid__Id128Bytes* QUuid_ToBytes1(const QUuid* self, int order);
QUuid* QUuid_FromBytes2(const void* bytes, int order);
void QUuid_Delete(QUuid* self);

QUuid__Id128Bytes* QUuid__Id128Bytes_new();
QUuid__Id128Bytes* QUuid__Id128Bytes_new2(const QUuid__Id128Bytes* param1);
QByteArrayView* QUuid__Id128Bytes_ToQByteArrayView(const QUuid__Id128Bytes* self);
void QUuid__Id128Bytes_Delete(QUuid__Id128Bytes* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
