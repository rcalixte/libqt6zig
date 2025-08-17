#pragma once
#ifndef SRC_CBORC_LIBQCBORMAP_H
#define SRC_CBORC_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator)
typedef QCborMap::ConstIterator QCborMap__ConstIterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator)
typedef QCborMap::Iterator QCborMap__Iterator;
#endif
#else
typedef struct QCborMap QCborMap;
typedef struct QCborMap__ConstIterator QCborMap__ConstIterator;
typedef struct QCborMap__Iterator QCborMap__Iterator;
typedef struct QCborValue QCborValue;
typedef struct QCborValueConstRef QCborValueConstRef;
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
QCborMap__Iterator* QCborMap_Begin(QCborMap* self);
QCborMap__ConstIterator* QCborMap_ConstBegin(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_Begin2(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_Cbegin(const QCborMap* self);
QCborMap__Iterator* QCborMap_End(QCborMap* self);
QCborMap__ConstIterator* QCborMap_ConstEnd(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_End2(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_Cend(const QCborMap* self);
QCborMap__Iterator* QCborMap_Erase(QCborMap* self, QCborMap__Iterator* it);
QCborMap__Iterator* QCborMap_Erase2(QCborMap* self, QCborMap__ConstIterator* it);
QCborValue* QCborMap_Extract(QCborMap* self, QCborMap__Iterator* it);
QCborValue* QCborMap_Extract2(QCborMap* self, QCborMap__ConstIterator* it);
bool QCborMap_Empty(const QCborMap* self);
QCborMap__Iterator* QCborMap_Find(QCborMap* self, long long key);
QCborMap__Iterator* QCborMap_Find3(QCborMap* self, const libqt_string key);
QCborMap__Iterator* QCborMap_Find4(QCborMap* self, const QCborValue* key);
QCborMap__ConstIterator* QCborMap_ConstFind(const QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_ConstFind3(const QCborMap* self, const libqt_string key);
QCborMap__ConstIterator* QCborMap_ConstFind4(const QCborMap* self, const QCborValue* key);
QCborMap__ConstIterator* QCborMap_Find5(const QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_Find7(const QCborMap* self, const libqt_string key);
QCborMap__ConstIterator* QCborMap_Find8(const QCborMap* self, const QCborValue* key);
QCborMap__Iterator* QCborMap_Insert(QCborMap* self, long long key, const QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert3(QCborMap* self, const libqt_string key, const QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert4(QCborMap* self, const QCborValue* key, const QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert5(QCborMap* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v);
QCborMap* QCborMap_FromVariantMap(const libqt_map /* of libqt_string to QVariant* */ mapVal);
QCborMap* QCborMap_FromVariantHash(const libqt_map /* of libqt_string to QVariant* */ hash);
QCborMap* QCborMap_FromJsonObject(const QJsonObject* o);
libqt_map /* of libqt_string to QVariant* */ QCborMap_ToVariantMap(const QCborMap* self);
libqt_map /* of libqt_string to QVariant* */ QCborMap_ToVariantHash(const QCborMap* self);
QJsonObject* QCborMap_ToJsonObject(const QCborMap* self);
void QCborMap_Delete(QCborMap* self);

QCborMap__Iterator* QCborMap__Iterator_new(const QCborMap__Iterator* other);
QCborMap__Iterator* QCborMap__Iterator_new2();
QCborMap__Iterator* QCborMap__Iterator_new3(const QCborMap__Iterator* param1);
void QCborMap__Iterator_OperatorAssign(QCborMap__Iterator* self, const QCborMap__Iterator* other);
libqt_pair /* tuple of QCborValue* and QCborValue* */ QCborMap__Iterator_OperatorMultiply(const QCborMap__Iterator* self);
libqt_pair /* tuple of QCborValue* and QCborValue* */ QCborMap__Iterator_OperatorSubscript(const QCborMap__Iterator* self, ptrdiff_t j);
QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(QCborMap__Iterator* self);
QCborValueConstRef* QCborMap__Iterator_OperatorMinusGreater2(const QCborMap__Iterator* self);
QCborValue* QCborMap__Iterator_Key(const QCborMap__Iterator* self);
QCborValueRef* QCborMap__Iterator_Value(const QCborMap__Iterator* self);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlus(QCborMap__Iterator* self);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlus2(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinus(QCborMap__Iterator* self);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinus2(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlusAssign(QCborMap__Iterator* self, ptrdiff_t j);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinusAssign(QCborMap__Iterator* self, ptrdiff_t j);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlus(const QCborMap__Iterator* self, ptrdiff_t j);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinus(const QCborMap__Iterator* self, ptrdiff_t j);
ptrdiff_t QCborMap__Iterator_OperatorMinus2(const QCborMap__Iterator* self, QCborMap__Iterator* j);
void QCborMap__Iterator_Delete(QCborMap__Iterator* self);

QCborMap__ConstIterator* QCborMap__ConstIterator_new(const QCborMap__ConstIterator* other);
QCborMap__ConstIterator* QCborMap__ConstIterator_new2();
QCborMap__ConstIterator* QCborMap__ConstIterator_new3(const QCborMap__ConstIterator* param1);
void QCborMap__ConstIterator_OperatorAssign(QCborMap__ConstIterator* self, const QCborMap__ConstIterator* other);
libqt_pair /* tuple of QCborValue* and QCborValue* */ QCborMap__ConstIterator_OperatorMultiply(const QCborMap__ConstIterator* self);
libqt_pair /* tuple of QCborValue* and QCborValue* */ QCborMap__ConstIterator_OperatorSubscript(const QCborMap__ConstIterator* self, ptrdiff_t j);
QCborValueConstRef* QCborMap__ConstIterator_OperatorMinusGreater(const QCborMap__ConstIterator* self);
QCborValue* QCborMap__ConstIterator_Key(const QCborMap__ConstIterator* self);
QCborValueConstRef* QCborMap__ConstIterator_Value(const QCborMap__ConstIterator* self);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlus(QCborMap__ConstIterator* self);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlus2(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinus(QCborMap__ConstIterator* self);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinus2(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusAssign(QCborMap__ConstIterator* self, ptrdiff_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusAssign(QCborMap__ConstIterator* self, ptrdiff_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlus(const QCborMap__ConstIterator* self, ptrdiff_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinus(const QCborMap__ConstIterator* self, ptrdiff_t j);
ptrdiff_t QCborMap__ConstIterator_OperatorMinus2(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j);
void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
