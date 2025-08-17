#pragma once
#ifndef SRCC_LIBQDATASTREAM_H
#define SRCC_LIBQDATASTREAM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDataStream QDataStream;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
#endif

QDataStream* QDataStream_new();
QDataStream* QDataStream_new2(QIODevice* param1);
QDataStream* QDataStream_new3(const libqt_string param1);
QIODevice* QDataStream_Device(const QDataStream* self);
void QDataStream_SetDevice(QDataStream* self, QIODevice* device);
bool QDataStream_AtEnd(const QDataStream* self);
int QDataStream_Status(const QDataStream* self);
void QDataStream_SetStatus(QDataStream* self, int status);
void QDataStream_ResetStatus(QDataStream* self);
int QDataStream_FloatingPointPrecision(const QDataStream* self);
void QDataStream_SetFloatingPointPrecision(QDataStream* self, int precision);
int QDataStream_ByteOrder(const QDataStream* self);
void QDataStream_SetByteOrder(QDataStream* self, int byteOrder);
int QDataStream_Version(const QDataStream* self);
void QDataStream_SetVersion(QDataStream* self, int version);
void QDataStream_OperatorShiftRight(QDataStream* self, char* i);
void QDataStream_OperatorShiftRight2(QDataStream* self, signed char* i);
void QDataStream_OperatorShiftRight3(QDataStream* self, unsigned char* i);
void QDataStream_OperatorShiftRight4(QDataStream* self, int16_t* i);
void QDataStream_OperatorShiftRight5(QDataStream* self, uint16_t* i);
void QDataStream_OperatorShiftRight6(QDataStream* self, int* i);
void QDataStream_OperatorShiftRight7(QDataStream* self, unsigned int* i);
void QDataStream_OperatorShiftRight8(QDataStream* self, long long* i);
void QDataStream_OperatorShiftRight9(QDataStream* self, unsigned long long* i);
void QDataStream_OperatorShiftRight11(QDataStream* self, bool* i);
void QDataStream_OperatorShiftRight12(QDataStream* self, float* f);
void QDataStream_OperatorShiftRight13(QDataStream* self, double* f);
void QDataStream_OperatorShiftRight14(QDataStream* self, char* str);
void QDataStream_OperatorShiftLeft(QDataStream* self, char i);
void QDataStream_OperatorShiftLeft2(QDataStream* self, signed char i);
void QDataStream_OperatorShiftLeft3(QDataStream* self, unsigned char i);
void QDataStream_OperatorShiftLeft4(QDataStream* self, int16_t i);
void QDataStream_OperatorShiftLeft5(QDataStream* self, uint16_t i);
void QDataStream_OperatorShiftLeft6(QDataStream* self, int i);
void QDataStream_OperatorShiftLeft7(QDataStream* self, unsigned int i);
void QDataStream_OperatorShiftLeft8(QDataStream* self, long long i);
void QDataStream_OperatorShiftLeft9(QDataStream* self, unsigned long long i);
void QDataStream_OperatorShiftLeft11(QDataStream* self, float f);
void QDataStream_OperatorShiftLeft12(QDataStream* self, double f);
void QDataStream_OperatorShiftLeft13(QDataStream* self, const char* str);
QDataStream* QDataStream_ReadBytes(QDataStream* self, char* param1, unsigned int* lenVal);
QDataStream* QDataStream_ReadBytes2(QDataStream* self, char* param1, long long* lenVal);
long long QDataStream_ReadRawData(QDataStream* self, char* param1, long long lenVal);
void QDataStream_WriteBytes(QDataStream* self, const char* param1, long long lenVal);
long long QDataStream_WriteRawData(QDataStream* self, const char* param1, long long lenVal);
long long QDataStream_SkipRawData(QDataStream* self, long long lenVal);
void QDataStream_StartTransaction(QDataStream* self);
bool QDataStream_CommitTransaction(QDataStream* self);
void QDataStream_RollbackTransaction(QDataStream* self);
void QDataStream_AbortTransaction(QDataStream* self);
bool QDataStream_IsDeviceTransactionStarted(const QDataStream* self);
void QDataStream_Delete(QDataStream* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
