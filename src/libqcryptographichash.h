#pragma once
#ifndef SRCC_LIBQCRYPTOGRAPHICHASH_H
#define SRCC_LIBQCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>

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

QCryptographicHash* QCryptographicHash_new(int method);
void QCryptographicHash_Swap(QCryptographicHash* self, QCryptographicHash* other);
void QCryptographicHash_Reset(QCryptographicHash* self);
int QCryptographicHash_Algorithm(const QCryptographicHash* self);
void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, ptrdiff_t length);
void QCryptographicHash_AddData2(QCryptographicHash* self, QByteArrayView* data);
bool QCryptographicHash_AddData3(QCryptographicHash* self, QIODevice* device);
libqt_string QCryptographicHash_Result(const QCryptographicHash* self);
QByteArrayView* QCryptographicHash_ResultView(const QCryptographicHash* self);
libqt_string QCryptographicHash_Hash(QByteArrayView* data, int method);
QByteArrayView* QCryptographicHash_HashInto(libqt_list /* of char */ buffer, QByteArrayView* data, int method);
QByteArrayView* QCryptographicHash_HashInto2(libqt_list /* of unsigned char */ buffer, QByteArrayView* data, int method);
QByteArrayView* QCryptographicHash_HashInto4(libqt_list /* of char */ buffer, libqt_list /* of QByteArrayView* */ data, int method);
QByteArrayView* QCryptographicHash_HashInto5(libqt_list /* of unsigned char */ buffer, libqt_list /* of QByteArrayView* */ data, int method);
int QCryptographicHash_HashLength(int method);
bool QCryptographicHash_SupportsAlgorithm(int method);
void QCryptographicHash_Delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
