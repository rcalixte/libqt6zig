#pragma once
#ifndef QML_LIBQJSPRIMITIVEVALUE_H
#define QML_LIBQJSPRIMITIVEVALUE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJSPrimitiveNull QJSPrimitiveNull;
typedef struct QJSPrimitiveUndefined QJSPrimitiveUndefined;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QMetaType QMetaType;
typedef struct QVariant QVariant;
#endif

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new(const QJSPrimitiveUndefined* other);
QJSPrimitiveUndefined* QJSPrimitiveUndefined_new2(QJSPrimitiveUndefined* other);
QJSPrimitiveUndefined* QJSPrimitiveUndefined_new3();
QJSPrimitiveUndefined* QJSPrimitiveUndefined_new4(const QJSPrimitiveUndefined* param1);
void QJSPrimitiveUndefined_CopyAssign(QJSPrimitiveUndefined* self, QJSPrimitiveUndefined* other);
void QJSPrimitiveUndefined_MoveAssign(QJSPrimitiveUndefined* self, QJSPrimitiveUndefined* other);
void QJSPrimitiveUndefined_Delete(QJSPrimitiveUndefined* self);

QJSPrimitiveNull* QJSPrimitiveNull_new(const QJSPrimitiveNull* other);
QJSPrimitiveNull* QJSPrimitiveNull_new2(QJSPrimitiveNull* other);
QJSPrimitiveNull* QJSPrimitiveNull_new3();
QJSPrimitiveNull* QJSPrimitiveNull_new4(const QJSPrimitiveNull* param1);
void QJSPrimitiveNull_CopyAssign(QJSPrimitiveNull* self, QJSPrimitiveNull* other);
void QJSPrimitiveNull_MoveAssign(QJSPrimitiveNull* self, QJSPrimitiveNull* other);
void QJSPrimitiveNull_Delete(QJSPrimitiveNull* self);

QJSPrimitiveValue* QJSPrimitiveValue_new();
QJSPrimitiveValue* QJSPrimitiveValue_new2(QJSPrimitiveUndefined* undefinedVal);
QJSPrimitiveValue* QJSPrimitiveValue_new3(QJSPrimitiveNull* nullVal);
QJSPrimitiveValue* QJSPrimitiveValue_new4(bool value);
QJSPrimitiveValue* QJSPrimitiveValue_new5(int value);
QJSPrimitiveValue* QJSPrimitiveValue_new6(double value);
QJSPrimitiveValue* QJSPrimitiveValue_new7(libqt_string string);
QJSPrimitiveValue* QJSPrimitiveValue_new8(const QMetaType* typeVal, const void* value);
QJSPrimitiveValue* QJSPrimitiveValue_new9(QMetaType* typeVal);
QJSPrimitiveValue* QJSPrimitiveValue_new10(const QVariant* variant);
QJSPrimitiveValue* QJSPrimitiveValue_new11(const QJSPrimitiveValue* param1);
uint8_t QJSPrimitiveValue_Type(const QJSPrimitiveValue* self);
QMetaType* QJSPrimitiveValue_MetaType(const QJSPrimitiveValue* self);
void* QJSPrimitiveValue_Data(QJSPrimitiveValue* self);
const void* QJSPrimitiveValue_Data2(const QJSPrimitiveValue* self);
const void* QJSPrimitiveValue_ConstData(const QJSPrimitiveValue* self);
bool QJSPrimitiveValue_ToBoolean(const QJSPrimitiveValue* self);
int QJSPrimitiveValue_ToInteger(const QJSPrimitiveValue* self);
double QJSPrimitiveValue_ToDouble(const QJSPrimitiveValue* self);
libqt_string QJSPrimitiveValue_ToString(const QJSPrimitiveValue* self);
QVariant* QJSPrimitiveValue_ToVariant(const QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlusPlus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlusPlus2(QJSPrimitiveValue* self, int param1);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinusMinus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinusMinus2(QJSPrimitiveValue* self, int param1);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinus(QJSPrimitiveValue* self);
bool QJSPrimitiveValue_StrictlyEquals(const QJSPrimitiveValue* self, const QJSPrimitiveValue* other);
bool QJSPrimitiveValue_Equals(const QJSPrimitiveValue* self, const QJSPrimitiveValue* other);
void QJSPrimitiveValue_OperatorAssign(QJSPrimitiveValue* self, const QJSPrimitiveValue* param1);
void QJSPrimitiveValue_Delete(QJSPrimitiveValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
