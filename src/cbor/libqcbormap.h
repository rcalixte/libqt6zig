#pragma once
#ifndef SRC_CBORC_LIBQCBORMAP_H
#define SRC_CBORC_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCborMap QCborMap;
typedef struct QCborValue QCborValue;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonObject QJsonObject;
typedef struct QVariant QVariant;
#endif

QCborMap* QCborMap_new();
QCborMap* QCborMap_new2(const QCborMap* other);
void QCborMap_OperatorAssign(QCborMap* self, const QCborMap* other);
void QCborMap_Swap(QCborMap* self, QCborMap* other);
QCborValue* QCborMap_ToCborValue(const QCborMap* self);
ptrdiff_t QCborMap_Size(const QCborMap* self);
bool QCborMap_IsEmpty(const QCborMap* self);
void QCborMap_Clear(QCborMap* self);
libqt_list /* of QCborValue* */ QCborMap_Keys(const QCborMap* self);
QCborValue* QCborMap_Value(const QCborMap* self, long long key);
QCborValue* QCborMap_Value3(const QCborMap* self, const libqt_string key);
QCborValue* QCborMap_Value4(const QCborMap* self, const QCborValue* key);
QCborValue* QCborMap_OperatorSubscript(const QCborMap* self, long long key);
QCborValue* QCborMap_OperatorSubscript3(const QCborMap* self, const libqt_string key);
QCborValue* QCborMap_OperatorSubscript4(const QCborMap* self, const QCborValue* key);
QCborValueRef* QCborMap_OperatorSubscript5(QCborMap* self, long long key);
QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, const libqt_string key);
QCborValueRef* QCborMap_OperatorSubscript8(QCborMap* self, const QCborValue* key);
QCborValue* QCborMap_Take(QCborMap* self, long long key);
QCborValue* QCborMap_Take3(QCborMap* self, const libqt_string key);
QCborValue* QCborMap_Take4(QCborMap* self, const QCborValue* key);
void QCborMap_Remove(QCborMap* self, long long key);
void QCborMap_Remove3(QCborMap* self, const libqt_string key);
void QCborMap_Remove4(QCborMap* self, const QCborValue* key);
bool QCborMap_Contains(const QCborMap* self, long long key);
bool QCborMap_Contains3(const QCborMap* self, const libqt_string key);
bool QCborMap_Contains4(const QCborMap* self, const QCborValue* key);
int QCborMap_Compare(const QCborMap* self, const QCborMap* other);
bool QCborMap_Empty(const QCborMap* self);
QCborMap* QCborMap_FromVariantMap(const libqt_map /* of libqt_string to QVariant* */ mapVal);
QCborMap* QCborMap_FromVariantHash(const libqt_map /* of libqt_string to QVariant* */ hash);
QCborMap* QCborMap_FromJsonObject(const QJsonObject* o);
libqt_map /* of libqt_string to QVariant* */ QCborMap_ToVariantMap(const QCborMap* self);
libqt_map /* of libqt_string to QVariant* */ QCborMap_ToVariantHash(const QCborMap* self);
QJsonObject* QCborMap_ToJsonObject(const QCborMap* self);
void QCborMap_Delete(QCborMap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
