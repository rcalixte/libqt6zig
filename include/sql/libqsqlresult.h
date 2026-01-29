#pragma once
#ifndef SRC_SQLC_LIBQSQLRESULT_H
#define SRC_SQLC_LIBQSQLRESULT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QVariant QVariant;
#endif

QVariant* QSqlResult_Handle(const QSqlResult* self);
void QSqlResult_Delete(QSqlResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
