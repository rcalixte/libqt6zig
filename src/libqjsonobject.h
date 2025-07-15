#pragma once
#ifndef SRCC_LIBQJSONOBJECT_H
#define SRCC_LIBQJSONOBJECT_H

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
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
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
bool QJsonObject_Empty(const QJsonObject* self);
void QJsonObject_Delete(QJsonObject* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
