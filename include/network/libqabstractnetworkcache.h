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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
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
QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self);
QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, QUrl* url);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ headers);
QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime);
QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime);
bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow);
libqt_map /* of int to QVariant* */ QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, libqt_map /* of int to QVariant* */ attributes);
void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self);

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self);
void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1);
int QAbstractNetworkCache_Metacall(QAbstractNetworkCache* self, int param1, int param2, void** param3);
libqt_string QAbstractNetworkCache_Tr(const char* s);
QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, QUrl* url);
void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData);
QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, QUrl* url);
bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, QUrl* url);
long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self);
QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device);
void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self);
libqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c);
libqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n);
bool QAbstractNetworkCache_Event(QAbstractNetworkCache* self, QEvent* event);
bool QAbstractNetworkCache_EventFilter(QAbstractNetworkCache* self, QObject* watched, QEvent* event);
void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
