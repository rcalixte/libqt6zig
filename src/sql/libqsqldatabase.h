#pragma once
#ifndef SRC_SQLC_LIBQSQLDATABASE_H
#define SRC_SQLC_LIBQSQLDATABASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlDriverCreatorBase QSqlDriverCreatorBase;
typedef struct QSqlError QSqlError;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlRecord QSqlRecord;
typedef struct QThread QThread;
#endif

QSqlDriver* QSqlDriverCreatorBase_CreateObject(const QSqlDriverCreatorBase* self);
void QSqlDriverCreatorBase_OperatorAssign(QSqlDriverCreatorBase* self, const QSqlDriverCreatorBase* param1);
void QSqlDriverCreatorBase_Delete(QSqlDriverCreatorBase* self);

QSqlDatabase* QSqlDatabase_new();
QSqlDatabase* QSqlDatabase_new2(const QSqlDatabase* other);
void QSqlDatabase_OperatorAssign(QSqlDatabase* self, const QSqlDatabase* other);
bool QSqlDatabase_Open(QSqlDatabase* self);
bool QSqlDatabase_Open2(QSqlDatabase* self, const libqt_string user, const libqt_string password);
void QSqlDatabase_Close(QSqlDatabase* self);
bool QSqlDatabase_IsOpen(const QSqlDatabase* self);
bool QSqlDatabase_IsOpenError(const QSqlDatabase* self);
libqt_list /* of libqt_string */ QSqlDatabase_Tables(const QSqlDatabase* self);
QSqlIndex* QSqlDatabase_PrimaryIndex(const QSqlDatabase* self, const libqt_string tablename);
QSqlRecord* QSqlDatabase_Record(const QSqlDatabase* self, const libqt_string tablename);
QSqlQuery* QSqlDatabase_Exec(const QSqlDatabase* self);
QSqlError* QSqlDatabase_LastError(const QSqlDatabase* self);
bool QSqlDatabase_IsValid(const QSqlDatabase* self);
bool QSqlDatabase_Transaction(QSqlDatabase* self);
bool QSqlDatabase_Commit(QSqlDatabase* self);
bool QSqlDatabase_Rollback(QSqlDatabase* self);
void QSqlDatabase_SetDatabaseName(QSqlDatabase* self, const libqt_string name);
void QSqlDatabase_SetUserName(QSqlDatabase* self, const libqt_string name);
void QSqlDatabase_SetPassword(QSqlDatabase* self, const libqt_string password);
void QSqlDatabase_SetHostName(QSqlDatabase* self, const libqt_string host);
void QSqlDatabase_SetPort(QSqlDatabase* self, int p);
void QSqlDatabase_SetConnectOptions(QSqlDatabase* self);
libqt_string QSqlDatabase_DatabaseName(const QSqlDatabase* self);
libqt_string QSqlDatabase_UserName(const QSqlDatabase* self);
libqt_string QSqlDatabase_Password(const QSqlDatabase* self);
libqt_string QSqlDatabase_HostName(const QSqlDatabase* self);
libqt_string QSqlDatabase_DriverName(const QSqlDatabase* self);
int QSqlDatabase_Port(const QSqlDatabase* self);
libqt_string QSqlDatabase_ConnectOptions(const QSqlDatabase* self);
libqt_string QSqlDatabase_ConnectionName(const QSqlDatabase* self);
void QSqlDatabase_SetNumericalPrecisionPolicy(QSqlDatabase* self, int precisionPolicy);
int QSqlDatabase_NumericalPrecisionPolicy(const QSqlDatabase* self);
bool QSqlDatabase_MoveToThread(QSqlDatabase* self, QThread* targetThread);
QThread* QSqlDatabase_Thread(const QSqlDatabase* self);
QSqlDriver* QSqlDatabase_Driver(const QSqlDatabase* self);
QSqlDatabase* QSqlDatabase_AddDatabase(const libqt_string typeVal);
QSqlDatabase* QSqlDatabase_AddDatabase2(QSqlDriver* driver);
QSqlDatabase* QSqlDatabase_CloneDatabase(const QSqlDatabase* other, const libqt_string connectionName);
QSqlDatabase* QSqlDatabase_CloneDatabase2(const libqt_string other, const libqt_string connectionName);
QSqlDatabase* QSqlDatabase_Database();
void QSqlDatabase_RemoveDatabase(const libqt_string connectionName);
bool QSqlDatabase_Contains();
libqt_list /* of libqt_string */ QSqlDatabase_Drivers();
libqt_list /* of libqt_string */ QSqlDatabase_ConnectionNames();
void QSqlDatabase_RegisterSqlDriver(const libqt_string name, QSqlDriverCreatorBase* creator);
bool QSqlDatabase_IsDriverAvailable(const libqt_string name);
libqt_list /* of libqt_string */ QSqlDatabase_Tables1(const QSqlDatabase* self, int typeVal);
QSqlQuery* QSqlDatabase_Exec1(const QSqlDatabase* self, const libqt_string query);
void QSqlDatabase_SetConnectOptions1(QSqlDatabase* self, const libqt_string options);
QSqlDatabase* QSqlDatabase_AddDatabase22(const libqt_string typeVal, const libqt_string connectionName);
QSqlDatabase* QSqlDatabase_AddDatabase23(QSqlDriver* driver, const libqt_string connectionName);
QSqlDatabase* QSqlDatabase_Database1(const libqt_string connectionName);
QSqlDatabase* QSqlDatabase_Database2(const libqt_string connectionName, bool open);
bool QSqlDatabase_Contains1(const libqt_string connectionName);
void QSqlDatabase_Delete(QSqlDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
