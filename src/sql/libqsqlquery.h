#pragma once
#ifndef SRC_SQLC_LIBQSQLQUERY_H
#define SRC_SQLC_LIBQSQLQUERY_H

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
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QVariant QVariant;
#endif

QSqlQuery* QSqlQuery_new(QSqlResult* r);
QSqlQuery* QSqlQuery_new2();
QSqlQuery* QSqlQuery_new3(const QSqlDatabase* db);
QSqlQuery* QSqlQuery_new4(const QSqlQuery* other);
QSqlQuery* QSqlQuery_new5(const libqt_string query);
QSqlQuery* QSqlQuery_new6(const libqt_string query, const QSqlDatabase* db);
void QSqlQuery_OperatorAssign(QSqlQuery* self, const QSqlQuery* other);
void QSqlQuery_Swap(QSqlQuery* self, QSqlQuery* other);
bool QSqlQuery_IsValid(const QSqlQuery* self);
bool QSqlQuery_IsActive(const QSqlQuery* self);
bool QSqlQuery_IsNull(const QSqlQuery* self, int field);
bool QSqlQuery_IsNull2(const QSqlQuery* self, libqt_string name);
int QSqlQuery_At(const QSqlQuery* self);
libqt_string QSqlQuery_LastQuery(const QSqlQuery* self);
int QSqlQuery_NumRowsAffected(const QSqlQuery* self);
QSqlError* QSqlQuery_LastError(const QSqlQuery* self);
bool QSqlQuery_IsSelect(const QSqlQuery* self);
int QSqlQuery_Size(const QSqlQuery* self);
QSqlDriver* QSqlQuery_Driver(const QSqlQuery* self);
QSqlResult* QSqlQuery_Result(const QSqlQuery* self);
bool QSqlQuery_IsForwardOnly(const QSqlQuery* self);
QSqlRecord* QSqlQuery_Record(const QSqlQuery* self);
void QSqlQuery_SetForwardOnly(QSqlQuery* self, bool forward);
bool QSqlQuery_Exec(QSqlQuery* self, const libqt_string query);
QVariant* QSqlQuery_Value(const QSqlQuery* self, int i);
QVariant* QSqlQuery_Value2(const QSqlQuery* self, libqt_string name);
void QSqlQuery_SetNumericalPrecisionPolicy(QSqlQuery* self, int precisionPolicy);
int QSqlQuery_NumericalPrecisionPolicy(const QSqlQuery* self);
void QSqlQuery_SetPositionalBindingEnabled(QSqlQuery* self, bool enable);
bool QSqlQuery_IsPositionalBindingEnabled(const QSqlQuery* self);
bool QSqlQuery_Seek(QSqlQuery* self, int i);
bool QSqlQuery_Next(QSqlQuery* self);
bool QSqlQuery_Previous(QSqlQuery* self);
bool QSqlQuery_First(QSqlQuery* self);
bool QSqlQuery_Last(QSqlQuery* self);
void QSqlQuery_Clear(QSqlQuery* self);
bool QSqlQuery_Exec2(QSqlQuery* self);
bool QSqlQuery_ExecBatch(QSqlQuery* self);
bool QSqlQuery_Prepare(QSqlQuery* self, const libqt_string query);
void QSqlQuery_BindValue(QSqlQuery* self, const libqt_string placeholder, const QVariant* val);
void QSqlQuery_BindValue2(QSqlQuery* self, int pos, const QVariant* val);
void QSqlQuery_AddBindValue(QSqlQuery* self, const QVariant* val);
QVariant* QSqlQuery_BoundValue(const QSqlQuery* self, const libqt_string placeholder);
QVariant* QSqlQuery_BoundValue2(const QSqlQuery* self, int pos);
libqt_list /* of QVariant* */ QSqlQuery_BoundValues(const QSqlQuery* self);
libqt_list /* of libqt_string */ QSqlQuery_BoundValueNames(const QSqlQuery* self);
libqt_string QSqlQuery_BoundValueName(const QSqlQuery* self, int pos);
libqt_string QSqlQuery_ExecutedQuery(const QSqlQuery* self);
QVariant* QSqlQuery_LastInsertId(const QSqlQuery* self);
void QSqlQuery_Finish(QSqlQuery* self);
bool QSqlQuery_NextResult(QSqlQuery* self);
bool QSqlQuery_Seek2(QSqlQuery* self, int i, bool relative);
bool QSqlQuery_ExecBatch1(QSqlQuery* self, int mode);
void QSqlQuery_BindValue3(QSqlQuery* self, const libqt_string placeholder, const QVariant* val, int typeVal);
void QSqlQuery_BindValue32(QSqlQuery* self, int pos, const QVariant* val, int typeVal);
void QSqlQuery_AddBindValue2(QSqlQuery* self, const QVariant* val, int typeVal);
void QSqlQuery_Delete(QSqlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
