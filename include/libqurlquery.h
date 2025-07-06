#pragma once
#ifndef SRCC_LIBQURLQUERY_H
#define SRCC_LIBQURLQUERY_H

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
typedef struct QChar QChar;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
#endif

QUrlQuery* QUrlQuery_new();
QUrlQuery* QUrlQuery_new2(const QUrl* url);
QUrlQuery* QUrlQuery_new3(const libqt_string queryString);
QUrlQuery* QUrlQuery_new4(const QUrlQuery* other);
void QUrlQuery_OperatorAssign(QUrlQuery* self, const QUrlQuery* other);
void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_IsEmpty(const QUrlQuery* self);
bool QUrlQuery_IsDetached(const QUrlQuery* self);
void QUrlQuery_Clear(QUrlQuery* self);
libqt_string QUrlQuery_Query(const QUrlQuery* self);
void QUrlQuery_SetQuery(QUrlQuery* self, const libqt_string queryString);
libqt_string QUrlQuery_ToString(const QUrlQuery* self);
void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter);
QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self);
QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self);
void QUrlQuery_SetQueryItems(QUrlQuery* self, const libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ query);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QUrlQuery_QueryItems(const QUrlQuery* self);
bool QUrlQuery_HasQueryItem(const QUrlQuery* self, const libqt_string key);
void QUrlQuery_AddQueryItem(QUrlQuery* self, const libqt_string key, const libqt_string value);
void QUrlQuery_RemoveQueryItem(QUrlQuery* self, const libqt_string key);
libqt_string QUrlQuery_QueryItemValue(const QUrlQuery* self, const libqt_string key);
libqt_list /* of libqt_string */ QUrlQuery_AllQueryItemValues(const QUrlQuery* self, const libqt_string key);
void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, const libqt_string key);
libqt_string QUrlQuery_Query1(const QUrlQuery* self, int encoding);
libqt_string QUrlQuery_ToString1(const QUrlQuery* self, int encoding);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QUrlQuery_QueryItems1(const QUrlQuery* self, int encoding);
libqt_string QUrlQuery_QueryItemValue2(const QUrlQuery* self, const libqt_string key, int encoding);
libqt_list /* of libqt_string */ QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, const libqt_string key, int encoding);
void QUrlQuery_Delete(QUrlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
