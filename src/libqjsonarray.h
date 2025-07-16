#pragma once
#ifndef SRCC_LIBQJSONARRAY_H
#define SRCC_LIBQJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator)
typedef QJsonArray::const_iterator QJsonArray__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator)
typedef QJsonArray::iterator QJsonArray__iterator;
#endif
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonArray__const_iterator QJsonArray__const_iterator;
typedef struct QJsonArray__iterator QJsonArray__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
#endif

QJsonArray* QJsonArray_new();
QJsonArray* QJsonArray_new2(const QJsonArray* other);
void QJsonArray_OperatorAssign(QJsonArray* self, const QJsonArray* other);
QJsonArray* QJsonArray_FromStringList(const libqt_list /* of libqt_string */ list);
ptrdiff_t QJsonArray_Size(const QJsonArray* self);
ptrdiff_t QJsonArray_Count(const QJsonArray* self);
bool QJsonArray_IsEmpty(const QJsonArray* self);
QJsonValue* QJsonArray_At(const QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_First(const QJsonArray* self);
QJsonValue* QJsonArray_Last(const QJsonArray* self);
void QJsonArray_Prepend(QJsonArray* self, const QJsonValue* value);
void QJsonArray_Append(QJsonArray* self, const QJsonValue* value);
void QJsonArray_RemoveAt(QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_TakeAt(QJsonArray* self, ptrdiff_t i);
void QJsonArray_RemoveFirst(QJsonArray* self);
void QJsonArray_RemoveLast(QJsonArray* self);
void QJsonArray_Insert(QJsonArray* self, ptrdiff_t i, const QJsonValue* value);
void QJsonArray_Replace(QJsonArray* self, ptrdiff_t i, const QJsonValue* value);
bool QJsonArray_Contains(const QJsonArray* self, const QJsonValue* element);
QJsonValueRef* QJsonArray_OperatorSubscript(QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_OperatorSubscript2(const QJsonArray* self, ptrdiff_t i);
void QJsonArray_Swap(QJsonArray* self, QJsonArray* other);
QJsonArray__iterator* QJsonArray_Begin(QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_Begin2(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_ConstBegin(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_Cbegin(const QJsonArray* self);
QJsonArray__iterator* QJsonArray_End(QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_End2(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_ConstEnd(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_Cend(const QJsonArray* self);
QJsonArray__iterator* QJsonArray_Insert2(QJsonArray* self, QJsonArray__iterator* before, const QJsonValue* value);
QJsonArray__iterator* QJsonArray_Erase(QJsonArray* self, QJsonArray__iterator* it);
QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, const QJsonValue* v);
QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, const QJsonValue* v);
QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, const QJsonValue* v);
void QJsonArray_PushBack(QJsonArray* self, const QJsonValue* t);
void QJsonArray_PushFront(QJsonArray* self, const QJsonValue* t);
void QJsonArray_PopFront(QJsonArray* self);
void QJsonArray_PopBack(QJsonArray* self);
bool QJsonArray_Empty(const QJsonArray* self);
void QJsonArray_Delete(QJsonArray* self);

QJsonArray__iterator* QJsonArray__iterator_new(const QJsonArray__iterator* other);
QJsonArray__iterator* QJsonArray__iterator_new2();
QJsonArray__iterator* QJsonArray__iterator_new3(QJsonArray* array, ptrdiff_t index);
QJsonArray__iterator* QJsonArray__iterator_new4(const QJsonArray__iterator* other);
void QJsonArray__iterator_OperatorAssign(QJsonArray__iterator* self, const QJsonArray__iterator* other);
QJsonValueRef* QJsonArray__iterator_OperatorMultiply(const QJsonArray__iterator* self);
QJsonValueConstRef* QJsonArray__iterator_OperatorMinusGreater(const QJsonArray__iterator* self);
QJsonValueRef* QJsonArray__iterator_OperatorMinusGreater2(QJsonArray__iterator* self);
QJsonValueRef* QJsonArray__iterator_OperatorSubscript(const QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlus(QJsonArray__iterator* self);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlus2(QJsonArray__iterator* self, int param1);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus2(QJsonArray__iterator* self, int param1);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlusAssign(QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinusAssign(QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, ptrdiff_t j);
ptrdiff_t QJsonArray__iterator_OperatorMinus2(const QJsonArray__iterator* self, QJsonArray__iterator* j);
void QJsonArray__iterator_Delete(QJsonArray__iterator* self);

QJsonArray__const_iterator* QJsonArray__const_iterator_new(const QJsonArray__const_iterator* other);
QJsonArray__const_iterator* QJsonArray__const_iterator_new2();
QJsonArray__const_iterator* QJsonArray__const_iterator_new3(const QJsonArray* array, ptrdiff_t index);
QJsonArray__const_iterator* QJsonArray__const_iterator_new4(const QJsonArray__iterator* o);
QJsonArray__const_iterator* QJsonArray__const_iterator_new5(const QJsonArray__const_iterator* other);
void QJsonArray__const_iterator_OperatorAssign(QJsonArray__const_iterator* self, const QJsonArray__const_iterator* other);
QJsonValueConstRef* QJsonArray__const_iterator_OperatorMultiply(const QJsonArray__const_iterator* self);
QJsonValueConstRef* QJsonArray__const_iterator_OperatorMinusGreater(const QJsonArray__const_iterator* self);
QJsonValueConstRef* QJsonArray__const_iterator_OperatorSubscript(const QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlus(QJsonArray__const_iterator* self);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlus2(QJsonArray__const_iterator* self, int param1);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus2(QJsonArray__const_iterator* self, int param1);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusAssign(QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusAssign(QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, ptrdiff_t j);
ptrdiff_t QJsonArray__const_iterator_OperatorMinus2(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j);
void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
