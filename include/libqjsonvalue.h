#pragma once
#ifndef SRCC_LIBQJSONVALUE_H
#define SRCC_LIBQJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QVariant QVariant;
#endif

QJsonValue* QJsonValue_new();
QJsonValue* QJsonValue_new2(bool b);
QJsonValue* QJsonValue_new3(double n);
QJsonValue* QJsonValue_new4(int n);
QJsonValue* QJsonValue_new5(long long v);
QJsonValue* QJsonValue_new6(const libqt_string s);
QJsonValue* QJsonValue_new7(const char* s);
QJsonValue* QJsonValue_new8(const QJsonArray* a);
QJsonValue* QJsonValue_new9(const QJsonObject* o);
QJsonValue* QJsonValue_new10(const QJsonValue* other);
QJsonValue* QJsonValue_new11(int param1);
void QJsonValue_OperatorAssign(QJsonValue* self, const QJsonValue* other);
void QJsonValue_Swap(QJsonValue* self, QJsonValue* other);
QJsonValue* QJsonValue_FromVariant(const QVariant* variant);
QVariant* QJsonValue_ToVariant(const QJsonValue* self);
int QJsonValue_Type(const QJsonValue* self);
bool QJsonValue_IsNull(const QJsonValue* self);
bool QJsonValue_IsBool(const QJsonValue* self);
bool QJsonValue_IsDouble(const QJsonValue* self);
bool QJsonValue_IsString(const QJsonValue* self);
bool QJsonValue_IsArray(const QJsonValue* self);
bool QJsonValue_IsObject(const QJsonValue* self);
bool QJsonValue_IsUndefined(const QJsonValue* self);
bool QJsonValue_ToBool(const QJsonValue* self);
int QJsonValue_ToInt(const QJsonValue* self);
long long QJsonValue_ToInteger(const QJsonValue* self);
double QJsonValue_ToDouble(const QJsonValue* self);
libqt_string QJsonValue_ToString(const QJsonValue* self);
libqt_string QJsonValue_ToString2(const QJsonValue* self, const libqt_string defaultValue);
QJsonArray* QJsonValue_ToArray(const QJsonValue* self);
QJsonArray* QJsonValue_ToArray2(const QJsonValue* self, const QJsonArray* defaultValue);
QJsonObject* QJsonValue_ToObject(const QJsonValue* self);
QJsonObject* QJsonValue_ToObject2(const QJsonValue* self, const QJsonObject* defaultValue);
QJsonValue* QJsonValue_OperatorSubscript(const QJsonValue* self, const libqt_string key);
QJsonValue* QJsonValue_OperatorSubscript4(const QJsonValue* self, ptrdiff_t i);
bool QJsonValue_ToBool1(const QJsonValue* self, bool defaultValue);
int QJsonValue_ToInt1(const QJsonValue* self, int defaultValue);
long long QJsonValue_ToInteger1(const QJsonValue* self, long long defaultValue);
double QJsonValue_ToDouble1(const QJsonValue* self, double defaultValue);
void QJsonValue_Delete(QJsonValue* self);

QJsonValueConstRef* QJsonValueConstRef_new(const QJsonValueConstRef* other);
QJsonValueConstRef* QJsonValueConstRef_new2(const QJsonValueConstRef* param1);
QJsonValue* QJsonValueConstRef_ToQJsonValue(const QJsonValueConstRef* self);
QVariant* QJsonValueConstRef_ToVariant(const QJsonValueConstRef* self);
int QJsonValueConstRef_Type(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsNull(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsBool(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsDouble(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsString(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsArray(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsObject(const QJsonValueConstRef* self);
bool QJsonValueConstRef_IsUndefined(const QJsonValueConstRef* self);
bool QJsonValueConstRef_ToBool(const QJsonValueConstRef* self);
int QJsonValueConstRef_ToInt(const QJsonValueConstRef* self);
long long QJsonValueConstRef_ToInteger(const QJsonValueConstRef* self);
double QJsonValueConstRef_ToDouble(const QJsonValueConstRef* self);
libqt_string QJsonValueConstRef_ToString(const QJsonValueConstRef* self);
QJsonArray* QJsonValueConstRef_ToArray(const QJsonValueConstRef* self);
QJsonObject* QJsonValueConstRef_ToObject(const QJsonValueConstRef* self);
QJsonValue* QJsonValueConstRef_OperatorSubscript3(const QJsonValueConstRef* self, ptrdiff_t i);
bool QJsonValueConstRef_ToBool1(const QJsonValueConstRef* self, bool defaultValue);
int QJsonValueConstRef_ToInt1(const QJsonValueConstRef* self, int defaultValue);
long long QJsonValueConstRef_ToInteger1(const QJsonValueConstRef* self, long long defaultValue);
double QJsonValueConstRef_ToDouble1(const QJsonValueConstRef* self, double defaultValue);
libqt_string QJsonValueConstRef_ToString1(const QJsonValueConstRef* self, const libqt_string defaultValue);
void QJsonValueConstRef_Delete(QJsonValueConstRef* self);

QJsonValueRef* QJsonValueRef_new(const QJsonValueRef* other);
QJsonValueRef* QJsonValueRef_new2(const QJsonValueRef* param1);
QJsonValueRef* QJsonValueRef_new3(QJsonArray* array, ptrdiff_t idx);
QJsonValueRef* QJsonValueRef_new4(QJsonObject* object, ptrdiff_t idx);
void QJsonValueRef_OperatorAssign(QJsonValueRef* self, const QJsonValue* val);
void QJsonValueRef_OperatorAssign2(QJsonValueRef* self, const QJsonValueRef* val);
QJsonValue* QJsonValueRef_ToQJsonValue(const QJsonValueRef* self);
QVariant* QJsonValueRef_ToVariant(const QJsonValueRef* self);
int QJsonValueRef_Type(const QJsonValueRef* self);
bool QJsonValueRef_IsNull(const QJsonValueRef* self);
bool QJsonValueRef_IsBool(const QJsonValueRef* self);
bool QJsonValueRef_IsDouble(const QJsonValueRef* self);
bool QJsonValueRef_IsString(const QJsonValueRef* self);
bool QJsonValueRef_IsArray(const QJsonValueRef* self);
bool QJsonValueRef_IsObject(const QJsonValueRef* self);
bool QJsonValueRef_IsUndefined(const QJsonValueRef* self);
bool QJsonValueRef_ToBool(const QJsonValueRef* self);
int QJsonValueRef_ToInt(const QJsonValueRef* self);
long long QJsonValueRef_ToInteger(const QJsonValueRef* self);
double QJsonValueRef_ToDouble(const QJsonValueRef* self);
libqt_string QJsonValueRef_ToString(const QJsonValueRef* self);
QJsonArray* QJsonValueRef_ToArray(const QJsonValueRef* self);
QJsonObject* QJsonValueRef_ToObject(const QJsonValueRef* self);
QJsonValue* QJsonValueRef_OperatorSubscript3(const QJsonValueRef* self, ptrdiff_t i);
bool QJsonValueRef_ToBool1(const QJsonValueRef* self, bool defaultValue);
int QJsonValueRef_ToInt1(const QJsonValueRef* self, int defaultValue);
long long QJsonValueRef_ToInteger1(const QJsonValueRef* self, long long defaultValue);
double QJsonValueRef_ToDouble1(const QJsonValueRef* self, double defaultValue);
libqt_string QJsonValueRef_ToString1(const QJsonValueRef* self, const libqt_string defaultValue);
void QJsonValueRef_Delete(QJsonValueRef* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
