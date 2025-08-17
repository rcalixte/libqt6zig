#pragma once
#ifndef SRCC_LIBQJSONOBJECT_H
#define SRCC_LIBQJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator)
typedef QJsonObject::const_iterator QJsonObject__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator)
typedef QJsonObject::iterator QJsonObject__iterator;
#endif
#else
typedef struct QJsonObject QJsonObject;
typedef struct QJsonObject__const_iterator QJsonObject__const_iterator;
typedef struct QJsonObject__iterator QJsonObject__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QVariant QVariant;
#endif

QJsonObject* QJsonObject_new();
QJsonObject* QJsonObject_new2(const QJsonObject* other);
void QJsonObject_OperatorAssign(QJsonObject* self, const QJsonObject* other);
void QJsonObject_Swap(QJsonObject* self, QJsonObject* other);
QJsonObject* QJsonObject_FromVariantMap(const libqt_map /* of libqt_string to QVariant* */ mapVal);
libqt_map /* of libqt_string to QVariant* */ QJsonObject_ToVariantMap(const QJsonObject* self);
QJsonObject* QJsonObject_FromVariantHash(const libqt_map /* of libqt_string to QVariant* */ mapVal);
libqt_map /* of libqt_string to QVariant* */ QJsonObject_ToVariantHash(const QJsonObject* self);
libqt_list /* of libqt_string */ QJsonObject_Keys(const QJsonObject* self);
ptrdiff_t QJsonObject_Size(const QJsonObject* self);
ptrdiff_t QJsonObject_Count(const QJsonObject* self);
ptrdiff_t QJsonObject_Length(const QJsonObject* self);
bool QJsonObject_IsEmpty(const QJsonObject* self);
QJsonValue* QJsonObject_Value(const QJsonObject* self, const libqt_string key);
QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, const libqt_string key);
QJsonValueRef* QJsonObject_OperatorSubscript2(QJsonObject* self, const libqt_string key);
void QJsonObject_Remove(QJsonObject* self, const libqt_string key);
QJsonValue* QJsonObject_Take(QJsonObject* self, const libqt_string key);
bool QJsonObject_Contains(const QJsonObject* self, const libqt_string key);
QJsonObject__iterator* QJsonObject_Begin(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_Begin2(const QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_ConstBegin(const QJsonObject* self);
QJsonObject__iterator* QJsonObject_End(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_End2(const QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_ConstEnd(const QJsonObject* self);
QJsonObject__iterator* QJsonObject_Erase(QJsonObject* self, QJsonObject__iterator* it);
QJsonObject__iterator* QJsonObject_Find(QJsonObject* self, const libqt_string key);
QJsonObject__const_iterator* QJsonObject_Find2(const QJsonObject* self, const libqt_string key);
QJsonObject__const_iterator* QJsonObject_ConstFind(const QJsonObject* self, const libqt_string key);
QJsonObject__iterator* QJsonObject_Insert(QJsonObject* self, const libqt_string key, const QJsonValue* value);
bool QJsonObject_Empty(const QJsonObject* self);
void QJsonObject_Delete(QJsonObject* self);

QJsonObject__iterator* QJsonObject__iterator_new(const QJsonObject__iterator* other);
QJsonObject__iterator* QJsonObject__iterator_new2();
QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject* obj, ptrdiff_t index);
QJsonObject__iterator* QJsonObject__iterator_new4(const QJsonObject__iterator* other);
void QJsonObject__iterator_OperatorAssign(QJsonObject__iterator* self, const QJsonObject__iterator* other);
libqt_string QJsonObject__iterator_Key(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_Value(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorMultiply(const QJsonObject__iterator* self);
QJsonValueConstRef* QJsonObject__iterator_OperatorMinusGreater(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorMinusGreater2(QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorSubscript(const QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlus2(QJsonObject__iterator* self, int param1);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus2(QJsonObject__iterator* self, int param1);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__iterator_OperatorMinus2(const QJsonObject__iterator* self, QJsonObject__iterator* j);
void QJsonObject__iterator_Delete(QJsonObject__iterator* self);

QJsonObject__const_iterator* QJsonObject__const_iterator_new(const QJsonObject__const_iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new2();
QJsonObject__const_iterator* QJsonObject__const_iterator_new3(const QJsonObject* obj, ptrdiff_t index);
QJsonObject__const_iterator* QJsonObject__const_iterator_new4(const QJsonObject__iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new5(const QJsonObject__const_iterator* other);
void QJsonObject__const_iterator_OperatorAssign(QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other);
libqt_string QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_Value(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_OperatorMultiply(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_OperatorMinusGreater(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_OperatorSubscript(const QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlus2(QJsonObject__const_iterator* self, int param1);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus2(QJsonObject__const_iterator* self, int param1);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__const_iterator_OperatorMinus2(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j);
void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
