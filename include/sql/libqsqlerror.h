#pragma once
#ifndef SRC_SQLC_LIBQSQLERROR_H
#define SRC_SQLC_LIBQSQLERROR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSqlError QSqlError;
#endif

QSqlError* QSqlError_new();
QSqlError* QSqlError_new2(const QSqlError* other);
QSqlError* QSqlError_new3(const libqt_string driverText);
QSqlError* QSqlError_new4(const libqt_string driverText, const libqt_string databaseText);
QSqlError* QSqlError_new5(const libqt_string driverText, const libqt_string databaseText, int typeVal);
QSqlError* QSqlError_new6(const libqt_string driverText, const libqt_string databaseText, int typeVal, const libqt_string errorCode);
void QSqlError_OperatorAssign(QSqlError* self, const QSqlError* other);
bool QSqlError_OperatorEqual(const QSqlError* self, const QSqlError* other);
bool QSqlError_OperatorNotEqual(const QSqlError* self, const QSqlError* other);
void QSqlError_Swap(QSqlError* self, QSqlError* other);
libqt_string QSqlError_DriverText(const QSqlError* self);
libqt_string QSqlError_DatabaseText(const QSqlError* self);
int QSqlError_Type(const QSqlError* self);
libqt_string QSqlError_NativeErrorCode(const QSqlError* self);
libqt_string QSqlError_Text(const QSqlError* self);
bool QSqlError_IsValid(const QSqlError* self);
void QSqlError_Delete(QSqlError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
