#pragma once
#ifndef SRCC_LIBQBYTEARRAY_H
#define SRCC_LIBQBYTEARRAY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QByteArray__FromBase64Result)
typedef QByteArray::FromBase64Result QByteArray__FromBase64Result;
#endif
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QByteArray__FromBase64Result QByteArray__FromBase64Result;
#endif

libqt_string QByteArray_Number(int param1);
libqt_string QByteArray_Number2(unsigned int param1);
libqt_string QByteArray_Number3(long param1);
libqt_string QByteArray_Number4(unsigned long param1);
libqt_string QByteArray_Number5(long long param1);
libqt_string QByteArray_Number6(unsigned long long param1);
libqt_string QByteArray_Number7(double param1);
libqt_string QByteArray_FromRawData(const char* data, ptrdiff_t size);
QByteArray__FromBase64Result* QByteArray_FromBase64Encoding(const libqt_string base64);
libqt_string QByteArray_FromBase64(const libqt_string base64);
libqt_string QByteArray_FromHex(const libqt_string hexEncoded);
libqt_string QByteArray_FromPercentEncoding(const libqt_string pctEncoded);
ptrdiff_t QByteArray_MaxSize2();
libqt_string QByteArray_Number22(int param1, int base);
libqt_string QByteArray_Number23(unsigned int param1, int base);
libqt_string QByteArray_Number24(long param1, int base);
libqt_string QByteArray_Number25(unsigned long param1, int base);
libqt_string QByteArray_Number26(long long param1, int base);
libqt_string QByteArray_Number27(unsigned long long param1, int base);
libqt_string QByteArray_Number28(double param1, char format);
libqt_string QByteArray_Number32(double param1, char format, int precision);
QByteArray__FromBase64Result* QByteArray_FromBase64Encoding2(const libqt_string base64, int options);
libqt_string QByteArray_FromBase642(const libqt_string base64, int options);
libqt_string QByteArray_FromPercentEncoding2(const libqt_string pctEncoded, char percent);

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new(const QByteArray__FromBase64Result* param1);
QByteArray__FromBase64Result* QByteArray__FromBase64Result_new2();
libqt_string QByteArray__FromBase64Result_Decoded(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_SetDecoded(QByteArray__FromBase64Result* self, libqt_string decoded);
int QByteArray__FromBase64Result_DecodingStatus(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_SetDecodingStatus(QByteArray__FromBase64Result* self, int decodingStatus);
void QByteArray__FromBase64Result_Swap(QByteArray__FromBase64Result* self, QByteArray__FromBase64Result* other);
bool QByteArray__FromBase64Result_ToBool(const QByteArray__FromBase64Result* self);
libqt_string QByteArray__FromBase64Result_OperatorMultiply(QByteArray__FromBase64Result* self);
libqt_string QByteArray__FromBase64Result_OperatorMultiply2(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_OperatorAssign(QByteArray__FromBase64Result* self, const QByteArray__FromBase64Result* param1);
void QByteArray__FromBase64Result_Delete(QByteArray__FromBase64Result* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
