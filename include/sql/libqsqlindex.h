#pragma once
#ifndef SRC_SQLC_LIBQSQLINDEX_H
#define SRC_SQLC_LIBQSQLINDEX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSqlField QSqlField;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlRecord QSqlRecord;
#endif

QSqlIndex* QSqlIndex_new();
QSqlIndex* QSqlIndex_new2(const QSqlIndex* other);
QSqlIndex* QSqlIndex_new3(const libqt_string cursorName);
QSqlIndex* QSqlIndex_new4(const libqt_string cursorName, const libqt_string name);
void QSqlIndex_OperatorAssign(QSqlIndex* self, const QSqlIndex* other);
void QSqlIndex_Swap(QSqlIndex* self, QSqlIndex* other);
void QSqlIndex_SetCursorName(QSqlIndex* self, const libqt_string cursorName);
libqt_string QSqlIndex_CursorName(const QSqlIndex* self);
void QSqlIndex_SetName(QSqlIndex* self, const libqt_string name);
libqt_string QSqlIndex_Name(const QSqlIndex* self);
void QSqlIndex_Append(QSqlIndex* self, const QSqlField* field);
void QSqlIndex_Append2(QSqlIndex* self, const QSqlField* field, bool desc);
bool QSqlIndex_IsDescending(const QSqlIndex* self, int i);
void QSqlIndex_SetDescending(QSqlIndex* self, int i, bool desc);
void QSqlIndex_Delete(QSqlIndex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
