#pragma once
#ifndef QML_LIBQJSVALUE_H
#define QML_LIBQJSVALUE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDateTime QDateTime;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QJSValue QJSValue;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QJSValue* QJSValue_new();
QJSValue* QJSValue_new2(const QJSValue* other);
QJSValue* QJSValue_new3(bool value);
QJSValue* QJSValue_new4(int value);
QJSValue* QJSValue_new5(unsigned int value);
QJSValue* QJSValue_new6(double value);
QJSValue* QJSValue_new7(const libqt_string value);
QJSValue* QJSValue_new8(const libqt_string value);
QJSValue* QJSValue_new9(const char* str);
QJSValue* QJSValue_new10(int value);
void QJSValue_OperatorAssign(QJSValue* self, const QJSValue* other);
bool QJSValue_IsBool(const QJSValue* self);
bool QJSValue_IsNumber(const QJSValue* self);
bool QJSValue_IsNull(const QJSValue* self);
bool QJSValue_IsString(const QJSValue* self);
bool QJSValue_IsUndefined(const QJSValue* self);
bool QJSValue_IsVariant(const QJSValue* self);
bool QJSValue_IsQObject(const QJSValue* self);
bool QJSValue_IsQMetaObject(const QJSValue* self);
bool QJSValue_IsObject(const QJSValue* self);
bool QJSValue_IsDate(const QJSValue* self);
bool QJSValue_IsRegExp(const QJSValue* self);
bool QJSValue_IsArray(const QJSValue* self);
bool QJSValue_IsError(const QJSValue* self);
bool QJSValue_IsUrl(const QJSValue* self);
libqt_string QJSValue_ToString(const QJSValue* self);
double QJSValue_ToNumber(const QJSValue* self);
int QJSValue_ToInt(const QJSValue* self);
unsigned int QJSValue_ToUInt(const QJSValue* self);
bool QJSValue_ToBool(const QJSValue* self);
QVariant* QJSValue_ToVariant(const QJSValue* self);
QVariant* QJSValue_ToVariant2(const QJSValue* self, int behavior);
QJSPrimitiveValue* QJSValue_ToPrimitive(const QJSValue* self);
QObject* QJSValue_ToQObject(const QJSValue* self);
QMetaObject* QJSValue_ToQMetaObject(const QJSValue* self);
QDateTime* QJSValue_ToDateTime(const QJSValue* self);
bool QJSValue_Equals(const QJSValue* self, const QJSValue* other);
bool QJSValue_StrictlyEquals(const QJSValue* self, const QJSValue* other);
QJSValue* QJSValue_Prototype(const QJSValue* self);
void QJSValue_SetPrototype(QJSValue* self, const QJSValue* prototype);
QJSValue* QJSValue_Property(const QJSValue* self, const libqt_string name);
void QJSValue_SetProperty(QJSValue* self, const libqt_string name, const QJSValue* value);
bool QJSValue_HasProperty(const QJSValue* self, const libqt_string name);
bool QJSValue_HasOwnProperty(const QJSValue* self, const libqt_string name);
QJSValue* QJSValue_Property2(const QJSValue* self, unsigned int arrayIndex);
void QJSValue_SetProperty2(QJSValue* self, unsigned int arrayIndex, const QJSValue* value);
bool QJSValue_DeleteProperty(QJSValue* self, const libqt_string name);
bool QJSValue_IsCallable(const QJSValue* self);
QJSValue* QJSValue_Call(const QJSValue* self);
QJSValue* QJSValue_CallWithInstance(const QJSValue* self, const QJSValue* instance);
QJSValue* QJSValue_CallAsConstructor(const QJSValue* self);
int QJSValue_ErrorType(const QJSValue* self);
QJSValue* QJSValue_Call1(const QJSValue* self, const libqt_list /* of QJSValue* */ args);
QJSValue* QJSValue_CallWithInstance2(const QJSValue* self, const QJSValue* instance, const libqt_list /* of QJSValue* */ args);
QJSValue* QJSValue_CallAsConstructor1(const QJSValue* self, const libqt_list /* of QJSValue* */ args);
void QJSValue_Delete(QJSValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
