#pragma once
#ifndef SRCC_LIBQDATASTREAM_H
#define SRCC_LIBQDATASTREAM_H

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
typedef struct QDataStream QDataStream;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
#endif

#ifdef __cplusplus
typedef QDataStream::ByteOrder ByteOrder;                           // C++ enum
typedef QDataStream::FloatingPointPrecision FloatingPointPrecision; // C++ enum
typedef QDataStream::Status Status;                                 // C++ enum
typedef QDataStream::Version Version;                               // C++ enum
#else
typedef int ByteOrder;              // C ABI enum
typedef int FloatingPointPrecision; // C ABI enum
typedef int Status;                 // C ABI enum
typedef int Version;                // C ABI enum
#endif

QDataStream* QDataStream_new();
QDataStream* QDataStream_new2(QIODevice* param1);
QDataStream* QDataStream_new3(libqt_string param1);
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
void QDataStream_OperatorShiftRightWithQint8(QDataStream* self, signed char* i);
void QDataStream_OperatorShiftRightWithQuint8(QDataStream* self, unsigned char* i);
void QDataStream_OperatorShiftRightWithQint16(QDataStream* self, int16_t* i);
void QDataStream_OperatorShiftRightWithQuint16(QDataStream* self, uint16_t* i);
void QDataStream_OperatorShiftRightWithQint32(QDataStream* self, int* i);
void QDataStream_OperatorShiftRightWithQuint32(QDataStream* self, unsigned int* i);
void QDataStream_OperatorShiftRightWithQint64(QDataStream* self, long long* i);
void QDataStream_OperatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i);
void QDataStream_OperatorShiftRightWithBool(QDataStream* self, bool* i);
void QDataStream_OperatorShiftRightWithFloat(QDataStream* self, float* f);
void QDataStream_OperatorShiftRightWithDouble(QDataStream* self, double* f);
void QDataStream_OperatorShiftRightWithStr(QDataStream* self, char* str);
void QDataStream_OperatorShiftLeft(QDataStream* self, char i);
void QDataStream_OperatorShiftLeftWithQint8(QDataStream* self, signed char i);
void QDataStream_OperatorShiftLeftWithQuint8(QDataStream* self, unsigned char i);
void QDataStream_OperatorShiftLeftWithQint16(QDataStream* self, int16_t i);
void QDataStream_OperatorShiftLeftWithQuint16(QDataStream* self, uint16_t i);
void QDataStream_OperatorShiftLeftWithQint32(QDataStream* self, int i);
void QDataStream_OperatorShiftLeftWithQuint32(QDataStream* self, unsigned int i);
void QDataStream_OperatorShiftLeftWithQint64(QDataStream* self, long long i);
void QDataStream_OperatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i);
void QDataStream_OperatorShiftLeftWithBool(QDataStream* self, bool i);
void QDataStream_OperatorShiftLeftWithFloat(QDataStream* self, float f);
void QDataStream_OperatorShiftLeftWithDouble(QDataStream* self, double f);
void QDataStream_OperatorShiftLeftWithStr(QDataStream* self, const char* str);
QDataStream* QDataStream_ReadBytes(QDataStream* self, char* param1, unsigned int* lenVal);
int QDataStream_ReadRawData(QDataStream* self, char* param1, int lenVal);
void QDataStream_WriteBytes(QDataStream* self, const char* param1, unsigned int lenVal);
int QDataStream_WriteRawData(QDataStream* self, const char* param1, int lenVal);
int QDataStream_SkipRawData(QDataStream* self, int lenVal);
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
