#pragma once
#ifndef SRCC_LIBQCRYPTOGRAPHICHASH_H
#define SRCC_LIBQCRYPTOGRAPHICHASH_H

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
typedef struct QByteArrayView QByteArrayView;
typedef struct QCryptographicHash QCryptographicHash;
typedef struct QIODevice QIODevice;
#endif

#ifdef __cplusplus
typedef QCryptographicHash::Algorithm Algorithm;           // C++ enum
typedef QCryptographicHash::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef int Algorithm;       // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QCryptographicHash* QCryptographicHash_new(int method);
void QCryptographicHash_Reset(QCryptographicHash* self);
void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, ptrdiff_t length);
void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArrayView* data);
bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device);
libqt_string QCryptographicHash_Result(const QCryptographicHash* self);
QByteArrayView* QCryptographicHash_ResultView(const QCryptographicHash* self);
libqt_string QCryptographicHash_Hash(QByteArrayView* data, int method);
int QCryptographicHash_HashLength(int method);
void QCryptographicHash_Delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
