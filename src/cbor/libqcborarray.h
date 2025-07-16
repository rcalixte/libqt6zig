#pragma once
#ifndef SRC_CBORC_LIBQCBORARRAY_H
#define SRC_CBORC_LIBQCBORARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__ConstIterator)
typedef QCborArray::ConstIterator QCborArray__ConstIterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__Iterator)
typedef QCborArray::Iterator QCborArray__Iterator;
#endif
#else
typedef struct QCborArray QCborArray;
typedef struct QCborArray__ConstIterator QCborArray__ConstIterator;
typedef struct QCborArray__Iterator QCborArray__Iterator;
typedef struct QCborValue QCborValue;
typedef struct QCborValueConstRef QCborValueConstRef;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonArray QJsonArray;
#endif

QCborArray* QCborArray_new();
QCborArray* QCborArray_new2(const QCborArray* other);
void QCborArray_OperatorAssign(QCborArray* self, const QCborArray* other);
void QCborArray_Swap(QCborArray* self, QCborArray* other);
QCborValue* QCborArray_ToCborValue(const QCborArray* self);
ptrdiff_t QCborArray_Size(const QCborArray* self);
bool QCborArray_IsEmpty(const QCborArray* self);
void QCborArray_Clear(QCborArray* self);
QCborValue* QCborArray_At(const QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_First(const QCborArray* self);
QCborValue* QCborArray_Last(const QCborArray* self);
QCborValue* QCborArray_OperatorSubscript(const QCborArray* self, ptrdiff_t i);
QCborValueRef* QCborArray_First2(QCborArray* self);
QCborValueRef* QCborArray_Last2(QCborArray* self);
QCborValueRef* QCborArray_OperatorSubscript2(QCborArray* self, ptrdiff_t i);
void QCborArray_Insert(QCborArray* self, ptrdiff_t i, const QCborValue* value);
void QCborArray_Prepend(QCborArray* self, const QCborValue* value);
void QCborArray_Append(QCborArray* self, const QCborValue* value);
QCborValue* QCborArray_Extract(QCborArray* self, QCborArray__ConstIterator* it);
QCborValue* QCborArray_Extract2(QCborArray* self, QCborArray__Iterator* it);
void QCborArray_RemoveAt(QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_TakeAt(QCborArray* self, ptrdiff_t i);
void QCborArray_RemoveFirst(QCborArray* self);
void QCborArray_RemoveLast(QCborArray* self);
QCborValue* QCborArray_TakeFirst(QCborArray* self);
QCborValue* QCborArray_TakeLast(QCborArray* self);
bool QCborArray_Contains(const QCborArray* self, const QCborValue* value);
int QCborArray_Compare(const QCborArray* self, const QCborArray* other);
QCborArray__Iterator* QCborArray_Begin(QCborArray* self);
QCborArray__ConstIterator* QCborArray_ConstBegin(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_Begin2(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_Cbegin(const QCborArray* self);
QCborArray__Iterator* QCborArray_End(QCborArray* self);
QCborArray__ConstIterator* QCborArray_ConstEnd(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_End2(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_Cend(const QCborArray* self);
QCborArray__Iterator* QCborArray_Insert2(QCborArray* self, QCborArray__Iterator* before, const QCborValue* value);
QCborArray__Iterator* QCborArray_Insert3(QCborArray* self, QCborArray__ConstIterator* before, const QCborValue* value);
QCborArray__Iterator* QCborArray_Erase(QCborArray* self, QCborArray__Iterator* it);
QCborArray__Iterator* QCborArray_Erase2(QCborArray* self, QCborArray__ConstIterator* it);
void QCborArray_PushBack(QCborArray* self, const QCborValue* t);
void QCborArray_PushFront(QCborArray* self, const QCborValue* t);
void QCborArray_PopFront(QCborArray* self);
void QCborArray_PopBack(QCborArray* self);
bool QCborArray_Empty(const QCborArray* self);
QCborArray* QCborArray_OperatorPlus(const QCborArray* self, const QCborValue* v);
QCborArray* QCborArray_OperatorPlusAssign(QCborArray* self, const QCborValue* v);
QCborArray* QCborArray_OperatorShiftLeft(QCborArray* self, const QCborValue* v);
QCborArray* QCborArray_FromStringList(const libqt_list /* of libqt_string */ list);
QCborArray* QCborArray_FromJsonArray(const QJsonArray* array);
QJsonArray* QCborArray_ToJsonArray(const QCborArray* self);
void QCborArray_Delete(QCborArray* self);

QCborArray__Iterator* QCborArray__Iterator_new(const QCborArray__Iterator* other);
QCborArray__Iterator* QCborArray__Iterator_new2();
QCborArray__Iterator* QCborArray__Iterator_new3(const QCborArray__Iterator* param1);
void QCborArray__Iterator_OperatorAssign(QCborArray__Iterator* self, const QCborArray__Iterator* other);
QCborValueRef* QCborArray__Iterator_OperatorMultiply(const QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(QCborArray__Iterator* self);
QCborValueConstRef* QCborArray__Iterator_OperatorMinusGreater2(const QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_OperatorSubscript(const QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus(QCborArray__Iterator* self);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus2(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus(QCborArray__Iterator* self);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus2(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusAssign(QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusAssign(QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(const QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(const QCborArray__Iterator* self, ptrdiff_t j);
ptrdiff_t QCborArray__Iterator_OperatorMinus2(const QCborArray__Iterator* self, QCborArray__Iterator* j);
void QCborArray__Iterator_Delete(QCborArray__Iterator* self);

QCborArray__ConstIterator* QCborArray__ConstIterator_new(const QCborArray__ConstIterator* other);
QCborArray__ConstIterator* QCborArray__ConstIterator_new2();
QCborArray__ConstIterator* QCborArray__ConstIterator_new3(const QCborArray__ConstIterator* param1);
void QCborArray__ConstIterator_OperatorAssign(QCborArray__ConstIterator* self, const QCborArray__ConstIterator* other);
QCborValueConstRef* QCborArray__ConstIterator_OperatorMultiply(const QCborArray__ConstIterator* self);
QCborValueConstRef* QCborArray__ConstIterator_OperatorMinusGreater(const QCborArray__ConstIterator* self);
QCborValueConstRef* QCborArray__ConstIterator_OperatorSubscript(const QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus(QCborArray__ConstIterator* self);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus2(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus(QCborArray__ConstIterator* self);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus2(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusAssign(QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusAssign(QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(const QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(const QCborArray__ConstIterator* self, ptrdiff_t j);
ptrdiff_t QCborArray__ConstIterator_OperatorMinus2(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j);
void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
