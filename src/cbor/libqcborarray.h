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
#else
typedef struct QCborArray QCborArray;
typedef struct QCborValue QCborValue;
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
QCborValueRef* QCborArray_OperatorSubscriptWithQsizetype(QCborArray* self, ptrdiff_t i);
void QCborArray_Insert(QCborArray* self, ptrdiff_t i, const QCborValue* value);
void QCborArray_Prepend(QCborArray* self, const QCborValue* value);
void QCborArray_Append(QCborArray* self, const QCborValue* value);
void QCborArray_RemoveAt(QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_TakeAt(QCborArray* self, ptrdiff_t i);
void QCborArray_RemoveFirst(QCborArray* self);
void QCborArray_RemoveLast(QCborArray* self);
QCborValue* QCborArray_TakeFirst(QCborArray* self);
QCborValue* QCborArray_TakeLast(QCborArray* self);
bool QCborArray_Contains(const QCborArray* self, const QCborValue* value);
int QCborArray_Compare(const QCborArray* self, const QCborArray* other);
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

#ifdef __cplusplus
} /* extern C */
#endif

#endif
