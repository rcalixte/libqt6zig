#pragma once
#ifndef QML_LIBQJSMANAGEDVALUE_H
#define QML_LIBQJSMANAGEDVALUE_H

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
typedef struct QJSEngine QJSEngine;
typedef struct QJSManagedValue QJSManagedValue;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QJSValue QJSValue;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QJSManagedValue* QJSManagedValue_new();
QJSManagedValue* QJSManagedValue_new2(QJSValue* value, QJSEngine* engine);
QJSManagedValue* QJSManagedValue_new3(const QJSPrimitiveValue* value, QJSEngine* engine);
QJSManagedValue* QJSManagedValue_new4(const QVariant* variant, QJSEngine* engine);
QJSManagedValue* QJSManagedValue_new5(const libqt_string string, QJSEngine* engine);
bool QJSManagedValue_Equals(const QJSManagedValue* self, const QJSManagedValue* other);
bool QJSManagedValue_StrictlyEquals(const QJSManagedValue* self, const QJSManagedValue* other);
QJSEngine* QJSManagedValue_Engine(const QJSManagedValue* self);
QJSManagedValue* QJSManagedValue_Prototype(const QJSManagedValue* self);
void QJSManagedValue_SetPrototype(QJSManagedValue* self, const QJSManagedValue* prototype);
int QJSManagedValue_Type(const QJSManagedValue* self);
bool QJSManagedValue_IsUndefined(const QJSManagedValue* self);
bool QJSManagedValue_IsBoolean(const QJSManagedValue* self);
bool QJSManagedValue_IsNumber(const QJSManagedValue* self);
bool QJSManagedValue_IsString(const QJSManagedValue* self);
bool QJSManagedValue_IsObject(const QJSManagedValue* self);
bool QJSManagedValue_IsSymbol(const QJSManagedValue* self);
bool QJSManagedValue_IsFunction(const QJSManagedValue* self);
bool QJSManagedValue_IsInteger(const QJSManagedValue* self);
bool QJSManagedValue_IsNull(const QJSManagedValue* self);
bool QJSManagedValue_IsRegularExpression(const QJSManagedValue* self);
bool QJSManagedValue_IsArray(const QJSManagedValue* self);
bool QJSManagedValue_IsUrl(const QJSManagedValue* self);
bool QJSManagedValue_IsVariant(const QJSManagedValue* self);
bool QJSManagedValue_IsQObject(const QJSManagedValue* self);
bool QJSManagedValue_IsQMetaObject(const QJSManagedValue* self);
bool QJSManagedValue_IsDate(const QJSManagedValue* self);
bool QJSManagedValue_IsError(const QJSManagedValue* self);
bool QJSManagedValue_IsJsMetaType(const QJSManagedValue* self);
libqt_string QJSManagedValue_ToString(const QJSManagedValue* self);
double QJSManagedValue_ToNumber(const QJSManagedValue* self);
bool QJSManagedValue_ToBoolean(const QJSManagedValue* self);
QJSPrimitiveValue* QJSManagedValue_ToPrimitive(const QJSManagedValue* self);
QJSValue* QJSManagedValue_ToJSValue(const QJSManagedValue* self);
QVariant* QJSManagedValue_ToVariant(const QJSManagedValue* self);
int QJSManagedValue_ToInteger(const QJSManagedValue* self);
QRegularExpression* QJSManagedValue_ToRegularExpression(const QJSManagedValue* self);
QUrl* QJSManagedValue_ToUrl(const QJSManagedValue* self);
QObject* QJSManagedValue_ToQObject(const QJSManagedValue* self);
QMetaObject* QJSManagedValue_ToQMetaObject(const QJSManagedValue* self);
QDateTime* QJSManagedValue_ToDateTime(const QJSManagedValue* self);
bool QJSManagedValue_HasProperty(const QJSManagedValue* self, const libqt_string name);
bool QJSManagedValue_HasOwnProperty(const QJSManagedValue* self, const libqt_string name);
QJSValue* QJSManagedValue_Property(const QJSManagedValue* self, const libqt_string name);
void QJSManagedValue_SetProperty(QJSManagedValue* self, const libqt_string name, const QJSValue* value);
bool QJSManagedValue_DeleteProperty(QJSManagedValue* self, const libqt_string name);
bool QJSManagedValue_HasProperty2(const QJSManagedValue* self, unsigned int arrayIndex);
bool QJSManagedValue_HasOwnProperty2(const QJSManagedValue* self, unsigned int arrayIndex);
QJSValue* QJSManagedValue_Property2(const QJSManagedValue* self, unsigned int arrayIndex);
void QJSManagedValue_SetProperty2(QJSManagedValue* self, unsigned int arrayIndex, const QJSValue* value);
bool QJSManagedValue_DeleteProperty2(QJSManagedValue* self, unsigned int arrayIndex);
QJSValue* QJSManagedValue_Call(const QJSManagedValue* self);
QJSValue* QJSManagedValue_CallWithInstance(const QJSManagedValue* self, const QJSValue* instance);
QJSValue* QJSManagedValue_CallAsConstructor(const QJSManagedValue* self);
QJSManagedValue* QJSManagedValue_JsMetaType(const QJSManagedValue* self);
libqt_list /* of libqt_string */ QJSManagedValue_JsMetaMembers(const QJSManagedValue* self);
QJSManagedValue* QJSManagedValue_JsMetaInstantiate(const QJSManagedValue* self);
QJSValue* QJSManagedValue_Call1(const QJSManagedValue* self, const libqt_list /* of QJSValue* */ arguments);
QJSValue* QJSManagedValue_CallWithInstance2(const QJSManagedValue* self, const QJSValue* instance, const libqt_list /* of QJSValue* */ arguments);
QJSValue* QJSManagedValue_CallAsConstructor1(const QJSManagedValue* self, const libqt_list /* of QJSValue* */ arguments);
QJSManagedValue* QJSManagedValue_JsMetaInstantiate1(const QJSManagedValue* self, const libqt_list /* of QJSValue* */ values);
void QJSManagedValue_Delete(QJSManagedValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
