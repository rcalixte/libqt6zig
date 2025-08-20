#pragma once
#ifndef SRC_SQLC_LIBQSQLFIELD_H
#define SRC_SQLC_LIBQSQLFIELD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaType QMetaType;
typedef struct QSqlField QSqlField;
typedef struct QVariant QVariant;
#endif

QSqlField* QSqlField_new();
QSqlField* QSqlField_new2(const QSqlField* other);
QSqlField* QSqlField_new3(const libqt_string fieldName, int typeVal);
QSqlField* QSqlField_new4(const libqt_string fieldName);
QSqlField* QSqlField_new5(const libqt_string fieldName, QMetaType* typeVal);
QSqlField* QSqlField_new6(const libqt_string fieldName, QMetaType* typeVal, const libqt_string tableName);
QSqlField* QSqlField_new7(const libqt_string fieldName, int typeVal, const libqt_string tableName);
void QSqlField_OperatorAssign(QSqlField* self, const QSqlField* other);
void QSqlField_Swap(QSqlField* self, QSqlField* other);
bool QSqlField_OperatorEqual(const QSqlField* self, const QSqlField* other);
bool QSqlField_OperatorNotEqual(const QSqlField* self, const QSqlField* other);
void QSqlField_SetValue(QSqlField* self, const QVariant* value);
QVariant* QSqlField_Value(const QSqlField* self);
void QSqlField_SetName(QSqlField* self, const libqt_string name);
libqt_string QSqlField_Name(const QSqlField* self);
void QSqlField_SetTableName(QSqlField* self, const libqt_string tableName);
libqt_string QSqlField_TableName(const QSqlField* self);
bool QSqlField_IsNull(const QSqlField* self);
void QSqlField_SetReadOnly(QSqlField* self, bool readOnly);
bool QSqlField_IsReadOnly(const QSqlField* self);
void QSqlField_Clear(QSqlField* self);
bool QSqlField_IsAutoValue(const QSqlField* self);
QMetaType* QSqlField_MetaType(const QSqlField* self);
void QSqlField_SetMetaType(QSqlField* self, QMetaType* typeVal);
int QSqlField_Type(const QSqlField* self);
void QSqlField_SetType(QSqlField* self, int typeVal);
void QSqlField_SetRequiredStatus(QSqlField* self, int status);
void QSqlField_SetRequired(QSqlField* self, bool required);
void QSqlField_SetLength(QSqlField* self, int fieldLength);
void QSqlField_SetPrecision(QSqlField* self, int precision);
void QSqlField_SetDefaultValue(QSqlField* self, const QVariant* value);
void QSqlField_SetSqlType(QSqlField* self, int typeVal);
void QSqlField_SetGenerated(QSqlField* self, bool gen);
void QSqlField_SetAutoValue(QSqlField* self, bool autoVal);
int QSqlField_RequiredStatus(const QSqlField* self);
int QSqlField_Length(const QSqlField* self);
int QSqlField_Precision(const QSqlField* self);
QVariant* QSqlField_DefaultValue(const QSqlField* self);
int QSqlField_TypeID(const QSqlField* self);
bool QSqlField_IsGenerated(const QSqlField* self);
bool QSqlField_IsValid(const QSqlField* self);
void QSqlField_Delete(QSqlField* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
