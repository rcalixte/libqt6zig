#pragma once
#ifndef SRC_CBORC_LIBQCBORVALUE_H
#define SRC_CBORC_LIBQCBORVALUE_H

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
typedef struct QCborMap QCborMap;
typedef struct QCborParserError QCborParserError;
typedef struct QCborStreamReader QCborStreamReader;
typedef struct QCborStreamWriter QCborStreamWriter;
typedef struct QCborValue QCborValue;
typedef struct QCborValueConstRef QCborValueConstRef;
typedef struct QCborValueRef QCborValueRef;
typedef struct QDateTime QDateTime;
typedef struct QJsonValue QJsonValue;
typedef struct QRegularExpression QRegularExpression;
typedef struct QUrl QUrl;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QCborValue::DiagnosticNotationOption DiagnosticNotationOption;   // C++ enum
typedef QCborValue::DiagnosticNotationOptions DiagnosticNotationOptions; // C++ QFlags
typedef QCborValue::EncodingOption EncodingOption;                       // C++ enum
typedef QCborValue::EncodingOptions EncodingOptions;                     // C++ QFlags
typedef QCborValue::QtGadgetHelper QtGadgetHelper;                       // C++ QFlags
typedef QCborValue::Type Type;                                           // C++ enum
#else
typedef int DiagnosticNotationOption;  // C ABI enum
typedef int DiagnosticNotationOptions; // C ABI QFlags
typedef int EncodingOption;            // C ABI enum
typedef int EncodingOptions;           // C ABI QFlags
typedef unsigned char Type;            // C ABI enum
typedef void QtGadgetHelper;           // C ABI QFlags
#endif

QCborParserError* QCborParserError_new(QCborParserError* other);
QCborParserError* QCborParserError_new2(QCborParserError* other);
void QCborParserError_CopyAssign(QCborParserError* self, QCborParserError* other);
void QCborParserError_MoveAssign(QCborParserError* self, QCborParserError* other);
libqt_string QCborParserError_ErrorString(const QCborParserError* self);
void QCborParserError_Delete(QCborParserError* self);

QCborValue* QCborValue_new();
QCborValue* QCborValue_new2(int t_);
QCborValue* QCborValue_new3(bool b_);
QCborValue* QCborValue_new4(int i);
QCborValue* QCborValue_new5(unsigned int u);
QCborValue* QCborValue_new6(long long i);
QCborValue* QCborValue_new7(double v);
QCborValue* QCborValue_new8(uint8_t st);
QCborValue* QCborValue_new9(libqt_string ba);
QCborValue* QCborValue_new10(libqt_string s);
QCborValue* QCborValue_new11(const char* s);
QCborValue* QCborValue_new12(QCborArray* a);
QCborValue* QCborValue_new13(QCborMap* m);
QCborValue* QCborValue_new14(uint64_t tag);
QCborValue* QCborValue_new15(int t_);
QCborValue* QCborValue_new16(QDateTime* dt);
QCborValue* QCborValue_new17(QUrl* url);
QCborValue* QCborValue_new18(QRegularExpression* rx);
QCborValue* QCborValue_new19(QUuid* uuid);
QCborValue* QCborValue_new20(QCborValue* other);
QCborValue* QCborValue_new21(uint64_t tag, QCborValue* taggedValue);
QCborValue* QCborValue_new22(int t_, QCborValue* tv);
void QCborValue_OperatorAssign(QCborValue* self, QCborValue* other);
void QCborValue_Swap(QCborValue* self, QCborValue* other);
int QCborValue_Type(const QCborValue* self);
bool QCborValue_IsInteger(const QCborValue* self);
bool QCborValue_IsByteArray(const QCborValue* self);
bool QCborValue_IsString(const QCborValue* self);
bool QCborValue_IsArray(const QCborValue* self);
bool QCborValue_IsMap(const QCborValue* self);
bool QCborValue_IsTag(const QCborValue* self);
bool QCborValue_IsFalse(const QCborValue* self);
bool QCborValue_IsTrue(const QCborValue* self);
bool QCborValue_IsBool(const QCborValue* self);
bool QCborValue_IsNull(const QCborValue* self);
bool QCborValue_IsUndefined(const QCborValue* self);
bool QCborValue_IsDouble(const QCborValue* self);
bool QCborValue_IsDateTime(const QCborValue* self);
bool QCborValue_IsUrl(const QCborValue* self);
bool QCborValue_IsRegularExpression(const QCborValue* self);
bool QCborValue_IsUuid(const QCborValue* self);
bool QCborValue_IsInvalid(const QCborValue* self);
bool QCborValue_IsContainer(const QCborValue* self);
bool QCborValue_IsSimpleType(const QCborValue* self);
bool QCborValue_IsSimpleTypeWithSt(const QCborValue* self, uint8_t st);
uint8_t QCborValue_ToSimpleType(const QCborValue* self);
long long QCborValue_ToInteger(const QCborValue* self);
bool QCborValue_ToBool(const QCborValue* self);
double QCborValue_ToDouble(const QCborValue* self);
uint64_t QCborValue_Tag(const QCborValue* self);
QCborValue* QCborValue_TaggedValue(const QCborValue* self);
libqt_string QCborValue_ToByteArray(const QCborValue* self);
libqt_string QCborValue_ToString(const QCborValue* self);
QDateTime* QCborValue_ToDateTime(const QCborValue* self);
QUrl* QCborValue_ToUrl(const QCborValue* self);
QRegularExpression* QCborValue_ToRegularExpression(const QCborValue* self);
QUuid* QCborValue_ToUuid(const QCborValue* self);
QCborArray* QCborValue_ToArray(const QCborValue* self);
QCborArray* QCborValue_ToArrayWithDefaultValue(const QCborValue* self, QCborArray* defaultValue);
QCborMap* QCborValue_ToMap(const QCborValue* self);
QCborMap* QCborValue_ToMapWithDefaultValue(const QCborValue* self, QCborMap* defaultValue);
QCborValue* QCborValue_OperatorSubscript(const QCborValue* self, libqt_string key);
QCborValue* QCborValue_OperatorSubscript2(const QCborValue* self, long long key);
QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, long long key);
QCborValueRef* QCborValue_OperatorSubscript5(QCborValue* self, libqt_string key);
int QCborValue_Compare(const QCborValue* self, QCborValue* other);
bool QCborValue_OperatorEqual(const QCborValue* self, QCborValue* other);
bool QCborValue_OperatorNotEqual(const QCborValue* self, QCborValue* other);
bool QCborValue_OperatorLesser(const QCborValue* self, QCborValue* other);
QCborValue* QCborValue_FromVariant(QVariant* variant);
QVariant* QCborValue_ToVariant(const QCborValue* self);
QCborValue* QCborValue_FromJsonValue(QJsonValue* v);
QJsonValue* QCborValue_ToJsonValue(const QCborValue* self);
QCborValue* QCborValue_FromCbor(QCborStreamReader* reader);
QCborValue* QCborValue_FromCborWithBa(libqt_string ba);
QCborValue* QCborValue_FromCbor2(const char* data, ptrdiff_t lenVal);
QCborValue* QCborValue_FromCbor3(const unsigned char* data, ptrdiff_t lenVal);
libqt_string QCborValue_ToCbor(const QCborValue* self);
void QCborValue_ToCborWithWriter(const QCborValue* self, QCborStreamWriter* writer);
libqt_string QCborValue_ToDiagnosticNotation(const QCborValue* self);
uint8_t QCborValue_ToSimpleType1(const QCborValue* self, uint8_t defaultValue);
long long QCborValue_ToInteger1(const QCborValue* self, long long defaultValue);
bool QCborValue_ToBool1(const QCborValue* self, bool defaultValue);
double QCborValue_ToDouble1(const QCborValue* self, double defaultValue);
uint64_t QCborValue_Tag1(const QCborValue* self, uint64_t defaultValue);
QCborValue* QCborValue_TaggedValue1(const QCborValue* self, QCborValue* defaultValue);
libqt_string QCborValue_ToByteArray1(const QCborValue* self, libqt_string defaultValue);
libqt_string QCborValue_ToString1(const QCborValue* self, libqt_string defaultValue);
QDateTime* QCborValue_ToDateTime1(const QCborValue* self, QDateTime* defaultValue);
QUrl* QCborValue_ToUrl1(const QCborValue* self, QUrl* defaultValue);
QRegularExpression* QCborValue_ToRegularExpression1(const QCborValue* self, QRegularExpression* defaultValue);
QUuid* QCborValue_ToUuid1(const QCborValue* self, QUuid* defaultValue);
QCborValue* QCborValue_FromCbor22(libqt_string ba, QCborParserError* errorVal);
QCborValue* QCborValue_FromCbor32(const char* data, ptrdiff_t lenVal, QCborParserError* errorVal);
QCborValue* QCborValue_FromCbor33(const unsigned char* data, ptrdiff_t lenVal, QCborParserError* errorVal);
libqt_string QCborValue_ToCbor1(const QCborValue* self, int opt);
void QCborValue_ToCbor2(const QCborValue* self, QCborStreamWriter* writer, int opt);
libqt_string QCborValue_ToDiagnosticNotation1(const QCborValue* self, int opts);
void QCborValue_Delete(QCborValue* self);

QCborValueConstRef* QCborValueConstRef_new(QCborValueConstRef* other);
QCborValueConstRef* QCborValueConstRef_new2(QCborValueConstRef* param1);
QCborValue* QCborValueConstRef_ToQCborValue(const QCborValueConstRef* self);
int QCborValueConstRef_Type(const QCborValueConstRef* self);
bool QCborValueConstRef_IsInteger(const QCborValueConstRef* self);
bool QCborValueConstRef_IsByteArray(const QCborValueConstRef* self);
bool QCborValueConstRef_IsString(const QCborValueConstRef* self);
bool QCborValueConstRef_IsArray(const QCborValueConstRef* self);
bool QCborValueConstRef_IsMap(const QCborValueConstRef* self);
bool QCborValueConstRef_IsTag(const QCborValueConstRef* self);
bool QCborValueConstRef_IsFalse(const QCborValueConstRef* self);
bool QCborValueConstRef_IsTrue(const QCborValueConstRef* self);
bool QCborValueConstRef_IsBool(const QCborValueConstRef* self);
bool QCborValueConstRef_IsNull(const QCborValueConstRef* self);
bool QCborValueConstRef_IsUndefined(const QCborValueConstRef* self);
bool QCborValueConstRef_IsDouble(const QCborValueConstRef* self);
bool QCborValueConstRef_IsDateTime(const QCborValueConstRef* self);
bool QCborValueConstRef_IsUrl(const QCborValueConstRef* self);
bool QCborValueConstRef_IsRegularExpression(const QCborValueConstRef* self);
bool QCborValueConstRef_IsUuid(const QCborValueConstRef* self);
bool QCborValueConstRef_IsInvalid(const QCborValueConstRef* self);
bool QCborValueConstRef_IsContainer(const QCborValueConstRef* self);
bool QCborValueConstRef_IsSimpleType(const QCborValueConstRef* self);
bool QCborValueConstRef_IsSimpleTypeWithSt(const QCborValueConstRef* self, uint8_t st);
uint8_t QCborValueConstRef_ToSimpleType(const QCborValueConstRef* self);
uint64_t QCborValueConstRef_Tag(const QCborValueConstRef* self);
QCborValue* QCborValueConstRef_TaggedValue(const QCborValueConstRef* self);
long long QCborValueConstRef_ToInteger(const QCborValueConstRef* self);
bool QCborValueConstRef_ToBool(const QCborValueConstRef* self);
double QCborValueConstRef_ToDouble(const QCborValueConstRef* self);
libqt_string QCborValueConstRef_ToByteArray(const QCborValueConstRef* self);
libqt_string QCborValueConstRef_ToString(const QCborValueConstRef* self);
QDateTime* QCborValueConstRef_ToDateTime(const QCborValueConstRef* self);
QUrl* QCborValueConstRef_ToUrl(const QCborValueConstRef* self);
QRegularExpression* QCborValueConstRef_ToRegularExpression(const QCborValueConstRef* self);
QUuid* QCborValueConstRef_ToUuid(const QCborValueConstRef* self);
QCborArray* QCborValueConstRef_ToArray(const QCborValueConstRef* self);
QCborArray* QCborValueConstRef_ToArrayWithQCborArray(const QCborValueConstRef* self, QCborArray* a);
QCborMap* QCborValueConstRef_ToMap(const QCborValueConstRef* self);
QCborMap* QCborValueConstRef_ToMapWithQCborMap(const QCborValueConstRef* self, QCborMap* m);
QCborValue* QCborValueConstRef_OperatorSubscript(const QCborValueConstRef* self, libqt_string key);
QCborValue* QCborValueConstRef_OperatorSubscript2(const QCborValueConstRef* self, long long key);
int QCborValueConstRef_Compare(const QCborValueConstRef* self, QCborValue* other);
bool QCborValueConstRef_OperatorEqual(const QCborValueConstRef* self, QCborValue* other);
bool QCborValueConstRef_OperatorNotEqual(const QCborValueConstRef* self, QCborValue* other);
bool QCborValueConstRef_OperatorLesser(const QCborValueConstRef* self, QCborValue* other);
QVariant* QCborValueConstRef_ToVariant(const QCborValueConstRef* self);
QJsonValue* QCborValueConstRef_ToJsonValue(const QCborValueConstRef* self);
libqt_string QCborValueConstRef_ToCbor(const QCborValueConstRef* self);
void QCborValueConstRef_ToCborWithWriter(const QCborValueConstRef* self, QCborStreamWriter* writer);
libqt_string QCborValueConstRef_ToDiagnosticNotation(const QCborValueConstRef* self);
uint8_t QCborValueConstRef_ToSimpleType1(const QCborValueConstRef* self, uint8_t defaultValue);
uint64_t QCborValueConstRef_Tag1(const QCborValueConstRef* self, uint64_t defaultValue);
QCborValue* QCborValueConstRef_TaggedValue1(const QCborValueConstRef* self, QCborValue* defaultValue);
long long QCborValueConstRef_ToInteger1(const QCborValueConstRef* self, long long defaultValue);
bool QCborValueConstRef_ToBool1(const QCborValueConstRef* self, bool defaultValue);
double QCborValueConstRef_ToDouble1(const QCborValueConstRef* self, double defaultValue);
libqt_string QCborValueConstRef_ToByteArray1(const QCborValueConstRef* self, libqt_string defaultValue);
libqt_string QCborValueConstRef_ToString1(const QCborValueConstRef* self, libqt_string defaultValue);
QDateTime* QCborValueConstRef_ToDateTime1(const QCborValueConstRef* self, QDateTime* defaultValue);
QUrl* QCborValueConstRef_ToUrl1(const QCborValueConstRef* self, QUrl* defaultValue);
QRegularExpression* QCborValueConstRef_ToRegularExpression1(const QCborValueConstRef* self, QRegularExpression* defaultValue);
QUuid* QCborValueConstRef_ToUuid1(const QCborValueConstRef* self, QUuid* defaultValue);
libqt_string QCborValueConstRef_ToCbor1(const QCborValueConstRef* self, int opt);
void QCborValueConstRef_ToCbor2(const QCborValueConstRef* self, QCborStreamWriter* writer, int opt);
libqt_string QCborValueConstRef_ToDiagnosticNotation1(const QCborValueConstRef* self, int opt);
void QCborValueConstRef_Delete(QCborValueConstRef* self);

QCborValueRef* QCborValueRef_new(QCborValueRef* other);
QCborValueRef* QCborValueRef_new2(QCborValueRef* other);
QCborValueRef* QCborValueRef_new3(QCborValueRef* param1);
void QCborValueRef_OperatorAssign(QCborValueRef* self, QCborValue* other);
void QCborValueRef_OperatorAssignWithOther(QCborValueRef* self, QCborValueRef* other);
QCborValueRef* QCborValueRef_OperatorSubscript(QCborValueRef* self, long long key);
QCborValueRef* QCborValueRef_OperatorSubscript2(QCborValueRef* self, libqt_string key);
QCborValue* QCborValueRef_ToQCborValue(const QCborValueRef* self);
int QCborValueRef_Type(const QCborValueRef* self);
bool QCborValueRef_IsInteger(const QCborValueRef* self);
bool QCborValueRef_IsByteArray(const QCborValueRef* self);
bool QCborValueRef_IsString(const QCborValueRef* self);
bool QCborValueRef_IsArray(const QCborValueRef* self);
bool QCborValueRef_IsMap(const QCborValueRef* self);
bool QCborValueRef_IsTag(const QCborValueRef* self);
bool QCborValueRef_IsFalse(const QCborValueRef* self);
bool QCborValueRef_IsTrue(const QCborValueRef* self);
bool QCborValueRef_IsBool(const QCborValueRef* self);
bool QCborValueRef_IsNull(const QCborValueRef* self);
bool QCborValueRef_IsUndefined(const QCborValueRef* self);
bool QCborValueRef_IsDouble(const QCborValueRef* self);
bool QCborValueRef_IsDateTime(const QCborValueRef* self);
bool QCborValueRef_IsUrl(const QCborValueRef* self);
bool QCborValueRef_IsRegularExpression(const QCborValueRef* self);
bool QCborValueRef_IsUuid(const QCborValueRef* self);
bool QCborValueRef_IsInvalid(const QCborValueRef* self);
bool QCborValueRef_IsContainer(const QCborValueRef* self);
bool QCborValueRef_IsSimpleType(const QCborValueRef* self);
bool QCborValueRef_IsSimpleTypeWithSt(const QCborValueRef* self, uint8_t st);
uint8_t QCborValueRef_ToSimpleType(const QCborValueRef* self);
uint64_t QCborValueRef_Tag(const QCborValueRef* self);
QCborValue* QCborValueRef_TaggedValue(const QCborValueRef* self);
long long QCborValueRef_ToInteger(const QCborValueRef* self);
bool QCborValueRef_ToBool(const QCborValueRef* self);
double QCborValueRef_ToDouble(const QCborValueRef* self);
libqt_string QCborValueRef_ToByteArray(const QCborValueRef* self);
libqt_string QCborValueRef_ToString(const QCborValueRef* self);
QDateTime* QCborValueRef_ToDateTime(const QCborValueRef* self);
QUrl* QCborValueRef_ToUrl(const QCborValueRef* self);
QRegularExpression* QCborValueRef_ToRegularExpression(const QCborValueRef* self);
QUuid* QCborValueRef_ToUuid(const QCborValueRef* self);
QCborArray* QCborValueRef_ToArray(const QCborValueRef* self);
QCborArray* QCborValueRef_ToArrayWithQCborArray(const QCborValueRef* self, QCborArray* a);
QCborMap* QCborValueRef_ToMap(const QCborValueRef* self);
QCborMap* QCborValueRef_ToMapWithQCborMap(const QCborValueRef* self, QCborMap* m);
QCborValue* QCborValueRef_OperatorSubscript3(const QCborValueRef* self, libqt_string key);
QCborValue* QCborValueRef_OperatorSubscript5(const QCborValueRef* self, long long key);
int QCborValueRef_Compare(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorNotEqual(const QCborValueRef* self, QCborValue* other);
bool QCborValueRef_OperatorLesser(const QCborValueRef* self, QCborValue* other);
QVariant* QCborValueRef_ToVariant(const QCborValueRef* self);
QJsonValue* QCborValueRef_ToJsonValue(const QCborValueRef* self);
libqt_string QCborValueRef_ToCbor(QCborValueRef* self);
void QCborValueRef_ToCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer);
libqt_string QCborValueRef_ToDiagnosticNotation(QCborValueRef* self);
uint8_t QCborValueRef_ToSimpleType1(const QCborValueRef* self, uint8_t defaultValue);
uint64_t QCborValueRef_Tag1(const QCborValueRef* self, uint64_t defaultValue);
QCborValue* QCborValueRef_TaggedValue1(const QCborValueRef* self, QCborValue* defaultValue);
long long QCborValueRef_ToInteger1(const QCborValueRef* self, long long defaultValue);
bool QCborValueRef_ToBool1(const QCborValueRef* self, bool defaultValue);
double QCborValueRef_ToDouble1(const QCborValueRef* self, double defaultValue);
libqt_string QCborValueRef_ToByteArray1(const QCborValueRef* self, libqt_string defaultValue);
libqt_string QCborValueRef_ToString1(const QCborValueRef* self, libqt_string defaultValue);
QDateTime* QCborValueRef_ToDateTime1(const QCborValueRef* self, QDateTime* defaultValue);
QUrl* QCborValueRef_ToUrl1(const QCborValueRef* self, QUrl* defaultValue);
QRegularExpression* QCborValueRef_ToRegularExpression1(const QCborValueRef* self, QRegularExpression* defaultValue);
QUuid* QCborValueRef_ToUuid1(const QCborValueRef* self, QUuid* defaultValue);
libqt_string QCborValueRef_ToCbor1(QCborValueRef* self, int opt);
void QCborValueRef_ToCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt);
libqt_string QCborValueRef_ToDiagnosticNotation1(QCborValueRef* self, int opt);
void QCborValueRef_Delete(QCborValueRef* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
