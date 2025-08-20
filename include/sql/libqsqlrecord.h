#pragma once
#ifndef SRC_SQLC_LIBQSQLRECORD_H
#define SRC_SQLC_LIBQSQLRECORD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QSqlField QSqlField;
typedef struct QSqlRecord QSqlRecord;
typedef struct QVariant QVariant;
#endif

QSqlRecord* QSqlRecord_new();
QSqlRecord* QSqlRecord_new2(const QSqlRecord* other);
void QSqlRecord_OperatorAssign(QSqlRecord* self, const QSqlRecord* other);
void QSqlRecord_Swap(QSqlRecord* self, QSqlRecord* other);
bool QSqlRecord_OperatorEqual(const QSqlRecord* self, const QSqlRecord* other);
bool QSqlRecord_OperatorNotEqual(const QSqlRecord* self, const QSqlRecord* other);
QVariant* QSqlRecord_Value(const QSqlRecord* self, int i);
QVariant* QSqlRecord_Value2(const QSqlRecord* self, libqt_string name);
void QSqlRecord_SetValue(QSqlRecord* self, int i, const QVariant* val);
void QSqlRecord_SetValue2(QSqlRecord* self, libqt_string name, const QVariant* val);
void QSqlRecord_SetNull(QSqlRecord* self, int i);
void QSqlRecord_SetNull2(QSqlRecord* self, libqt_string name);
bool QSqlRecord_IsNull(const QSqlRecord* self, int i);
bool QSqlRecord_IsNull2(const QSqlRecord* self, libqt_string name);
int QSqlRecord_IndexOf(const QSqlRecord* self, libqt_string name);
libqt_string QSqlRecord_FieldName(const QSqlRecord* self, int i);
QSqlField* QSqlRecord_Field(const QSqlRecord* self, int i);
QSqlField* QSqlRecord_Field2(const QSqlRecord* self, libqt_string name);
bool QSqlRecord_IsGenerated(const QSqlRecord* self, int i);
bool QSqlRecord_IsGenerated2(const QSqlRecord* self, libqt_string name);
void QSqlRecord_SetGenerated(QSqlRecord* self, libqt_string name, bool generated);
void QSqlRecord_SetGenerated2(QSqlRecord* self, int i, bool generated);
void QSqlRecord_Append(QSqlRecord* self, const QSqlField* field);
void QSqlRecord_Replace(QSqlRecord* self, int pos, const QSqlField* field);
void QSqlRecord_Insert(QSqlRecord* self, int pos, const QSqlField* field);
void QSqlRecord_Remove(QSqlRecord* self, int pos);
bool QSqlRecord_IsEmpty(const QSqlRecord* self);
bool QSqlRecord_Contains(const QSqlRecord* self, libqt_string name);
void QSqlRecord_Clear(QSqlRecord* self);
void QSqlRecord_ClearValues(QSqlRecord* self);
int QSqlRecord_Count(const QSqlRecord* self);
QSqlRecord* QSqlRecord_KeyValues(const QSqlRecord* self, const QSqlRecord* keyFields);
void QSqlRecord_Delete(QSqlRecord* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
