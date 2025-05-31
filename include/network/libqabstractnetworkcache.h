#pragma once
#ifndef SRC_NETWORKC_LIBQABSTRACTNETWORKCACHE_H
#define SRC_NETWORKC_LIBQABSTRACTNETWORKCACHE_H

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
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QNetworkCacheMetaData::AttributesMap AttributesMap; // C++ QFlags
typedef QNetworkCacheMetaData::RawHeader RawHeader;         // C++ QFlags
typedef QNetworkCacheMetaData::RawHeaderList RawHeaderList; // C++ QFlags
#else
typedef libqt_map /* of int to QVariant* */ AttributesMap;                 // C ABI QFlags
typedef libqt_pair /* tuple of libqt_string and libqt_string */ RawHeader; // C ABI QFlags
#endif

QNetworkCacheMetaData* QNetworkCacheMetaData_new();
QNetworkCacheMetaData* QNetworkCacheMetaData_new2(const QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self);
QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, const QUrl* url);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, const libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ headers);
QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, const QDateTime* dateTime);
QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, const QDateTime* dateTime);
bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow);
libqt_map /* of int to QVariant* */ QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, const libqt_map /* of int to QVariant* */ attributes);
void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self);

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self);
void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1);
int QAbstractNetworkCache_Metacall(QAbstractNetworkCache* self, int param1, int param2, void** param3);
libqt_string QAbstractNetworkCache_Tr(const char* s);
QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, const QUrl* url);
void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData);
QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, const QUrl* url);
bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, const QUrl* url);
long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self);
QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device);
void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self);
libqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c);
libqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n);
void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
