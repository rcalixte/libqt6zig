#pragma once
#ifndef SRC_NETWORKC_LIBQHTTPHEADERS_H
#define SRC_NETWORKC_LIBQHTTPHEADERS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QHttpHeaders QHttpHeaders;
#endif

QHttpHeaders* QHttpHeaders_new();
QHttpHeaders* QHttpHeaders_new2(const QHttpHeaders* other);
void QHttpHeaders_OperatorAssign(QHttpHeaders* self, const QHttpHeaders* other);
void QHttpHeaders_Swap(QHttpHeaders* self, QHttpHeaders* other);
bool QHttpHeaders_Append(QHttpHeaders* self, libqt_string name, libqt_string value);
bool QHttpHeaders_Append2(QHttpHeaders* self, int name, libqt_string value);
bool QHttpHeaders_Insert(QHttpHeaders* self, ptrdiff_t i, libqt_string name, libqt_string value);
bool QHttpHeaders_Insert2(QHttpHeaders* self, ptrdiff_t i, int name, libqt_string value);
bool QHttpHeaders_Replace(QHttpHeaders* self, ptrdiff_t i, libqt_string name, libqt_string newValue);
bool QHttpHeaders_Replace2(QHttpHeaders* self, ptrdiff_t i, int name, libqt_string newValue);
bool QHttpHeaders_ReplaceOrAppend(QHttpHeaders* self, libqt_string name, libqt_string newValue);
bool QHttpHeaders_ReplaceOrAppend2(QHttpHeaders* self, int name, libqt_string newValue);
bool QHttpHeaders_Contains(const QHttpHeaders* self, libqt_string name);
bool QHttpHeaders_Contains2(const QHttpHeaders* self, int name);
void QHttpHeaders_Clear(QHttpHeaders* self);
void QHttpHeaders_RemoveAll(QHttpHeaders* self, libqt_string name);
void QHttpHeaders_RemoveAll2(QHttpHeaders* self, int name);
void QHttpHeaders_RemoveAt(QHttpHeaders* self, ptrdiff_t i);
QByteArrayView* QHttpHeaders_Value(const QHttpHeaders* self, libqt_string name);
QByteArrayView* QHttpHeaders_Value2(const QHttpHeaders* self, int name);
libqt_list /* of libqt_string */ QHttpHeaders_Values(const QHttpHeaders* self, libqt_string name);
libqt_list /* of libqt_string */ QHttpHeaders_Values2(const QHttpHeaders* self, int name);
QByteArrayView* QHttpHeaders_ValueAt(const QHttpHeaders* self, ptrdiff_t i);
libqt_string QHttpHeaders_CombinedValue(const QHttpHeaders* self, libqt_string name);
libqt_string QHttpHeaders_CombinedValue2(const QHttpHeaders* self, int name);
ptrdiff_t QHttpHeaders_Size(const QHttpHeaders* self);
void QHttpHeaders_Reserve(QHttpHeaders* self, ptrdiff_t size);
bool QHttpHeaders_IsEmpty(const QHttpHeaders* self);
QByteArrayView* QHttpHeaders_WellKnownHeaderName(int name);
QHttpHeaders* QHttpHeaders_FromListOfPairs(const libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ headers);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QHttpHeaders_ToListOfPairs(const QHttpHeaders* self);
QByteArrayView* QHttpHeaders_Value22(const QHttpHeaders* self, libqt_string name, QByteArrayView* defaultValue);
QByteArrayView* QHttpHeaders_Value23(const QHttpHeaders* self, int name, QByteArrayView* defaultValue);
void QHttpHeaders_Delete(QHttpHeaders* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
