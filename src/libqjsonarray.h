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
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonValue QJsonValue;
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
QJsonValue* QJsonArray_OperatorSubscriptWithQsizetype(const QJsonArray* self, ptrdiff_t i);
void QJsonArray_Swap(QJsonArray* self, QJsonArray* other);
QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, const QJsonValue* v);
QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, const QJsonValue* v);
QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, const QJsonValue* v);
void QJsonArray_PushBack(QJsonArray* self, const QJsonValue* t);
void QJsonArray_PushFront(QJsonArray* self, const QJsonValue* t);
void QJsonArray_PopFront(QJsonArray* self);
void QJsonArray_PopBack(QJsonArray* self);
bool QJsonArray_Empty(const QJsonArray* self);
void QJsonArray_Delete(QJsonArray* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
