#pragma once
#ifndef SRCC_LIBQJSONDOCUMENT_H
#define SRCC_LIBQJSONDOCUMENT_H

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
typedef struct QJsonDocument QJsonDocument;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonParseError QJsonParseError;
typedef struct QJsonValue QJsonValue;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QJsonDocument::JsonFormat JsonFormat;   // C++ enum
typedef QJsonParseError::ParseError ParseError; // C++ enum
#else
typedef int JsonFormat; // C ABI enum
typedef int ParseError; // C ABI enum
#endif

QJsonParseError* QJsonParseError_new(QJsonParseError* other);
QJsonParseError* QJsonParseError_new2(QJsonParseError* other);
void QJsonParseError_CopyAssign(QJsonParseError* self, QJsonParseError* other);
void QJsonParseError_MoveAssign(QJsonParseError* self, QJsonParseError* other);
libqt_string QJsonParseError_ErrorString(const QJsonParseError* self);
void QJsonParseError_Delete(QJsonParseError* self);

QJsonDocument* QJsonDocument_new();
QJsonDocument* QJsonDocument_new2(QJsonObject* object);
QJsonDocument* QJsonDocument_new3(QJsonArray* array);
QJsonDocument* QJsonDocument_new4(QJsonDocument* other);
void QJsonDocument_OperatorAssign(QJsonDocument* self, QJsonDocument* other);
void QJsonDocument_Swap(QJsonDocument* self, QJsonDocument* other);
QJsonDocument* QJsonDocument_FromVariant(QVariant* variant);
QVariant* QJsonDocument_ToVariant(const QJsonDocument* self);
QJsonDocument* QJsonDocument_FromJson(libqt_string json);
libqt_string QJsonDocument_ToJson(const QJsonDocument* self);
bool QJsonDocument_IsEmpty(const QJsonDocument* self);
bool QJsonDocument_IsArray(const QJsonDocument* self);
bool QJsonDocument_IsObject(const QJsonDocument* self);
QJsonObject* QJsonDocument_Object(const QJsonDocument* self);
QJsonArray* QJsonDocument_Array(const QJsonDocument* self);
void QJsonDocument_SetObject(QJsonDocument* self, QJsonObject* object);
void QJsonDocument_SetArray(QJsonDocument* self, QJsonArray* array);
QJsonValue* QJsonDocument_OperatorSubscript(const QJsonDocument* self, libqt_string key);
QJsonValue* QJsonDocument_OperatorSubscriptWithQsizetype(const QJsonDocument* self, ptrdiff_t i);
bool QJsonDocument_OperatorEqual(const QJsonDocument* self, QJsonDocument* other);
bool QJsonDocument_OperatorNotEqual(const QJsonDocument* self, QJsonDocument* other);
bool QJsonDocument_IsNull(const QJsonDocument* self);
QJsonDocument* QJsonDocument_FromJson2(libqt_string json, QJsonParseError* errorVal);
libqt_string QJsonDocument_ToJson1(const QJsonDocument* self, int format);
void QJsonDocument_Delete(QJsonDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
