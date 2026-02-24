#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKDISKCACHE_H
#define SRC_NETWORKC_LIBQNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QNetworkDiskCache QNetworkDiskCache;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QNetworkDiskCache* QNetworkDiskCache_new();
QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent);
QMetaObject* QNetworkDiskCache_MetaObject(const QNetworkDiskCache* self);
void* QNetworkDiskCache_Metacast(QNetworkDiskCache* self, const char* param1);
int QNetworkDiskCache_Metacall(QNetworkDiskCache* self, int param1, int param2, void** param3);
libqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self);
void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, const libqt_string cacheDir);
long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self);
void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size);
long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self);
QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, const QUrl* url);
bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, const QUrl* url);
QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device);
QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, const libqt_string fileName);
void QNetworkDiskCache_Clear(QNetworkDiskCache* self);
long long QNetworkDiskCache_Expire(QNetworkDiskCache* self);
void QNetworkDiskCache_OnMetaObject(const QNetworkDiskCache* self, intptr_t slot);
QMetaObject* QNetworkDiskCache_SuperMetaObject(const QNetworkDiskCache* self);
void QNetworkDiskCache_OnMetacast(QNetworkDiskCache* self, intptr_t slot);
void* QNetworkDiskCache_SuperMetacast(QNetworkDiskCache* self, const char* param1);
void QNetworkDiskCache_OnMetacall(QNetworkDiskCache* self, intptr_t slot);
int QNetworkDiskCache_SuperMetacall(QNetworkDiskCache* self, int param1, int param2, void** param3);
void QNetworkDiskCache_OnCacheSize(const QNetworkDiskCache* self, intptr_t slot);
long long QNetworkDiskCache_SuperCacheSize(const QNetworkDiskCache* self);
void QNetworkDiskCache_OnMetaData(QNetworkDiskCache* self, intptr_t slot);
QNetworkCacheMetaData* QNetworkDiskCache_SuperMetaData(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_OnUpdateMetaData(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperUpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_OnData(QNetworkDiskCache* self, intptr_t slot);
QIODevice* QNetworkDiskCache_SuperData(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_OnRemove(QNetworkDiskCache* self, intptr_t slot);
bool QNetworkDiskCache_SuperRemove(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_OnPrepare(QNetworkDiskCache* self, intptr_t slot);
QIODevice* QNetworkDiskCache_SuperPrepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_OnInsert(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperInsert(QNetworkDiskCache* self, QIODevice* device);
void QNetworkDiskCache_OnClear(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperClear(QNetworkDiskCache* self);
void QNetworkDiskCache_OnExpire(QNetworkDiskCache* self, intptr_t slot);
long long QNetworkDiskCache_SuperExpire(QNetworkDiskCache* self);
bool QNetworkDiskCache_Event(QNetworkDiskCache* self, QEvent* event);
void QNetworkDiskCache_OnEvent(QNetworkDiskCache* self, intptr_t slot);
bool QNetworkDiskCache_SuperEvent(QNetworkDiskCache* self, QEvent* event);
bool QNetworkDiskCache_EventFilter(QNetworkDiskCache* self, QObject* watched, QEvent* event);
void QNetworkDiskCache_OnEventFilter(QNetworkDiskCache* self, intptr_t slot);
bool QNetworkDiskCache_SuperEventFilter(QNetworkDiskCache* self, QObject* watched, QEvent* event);
void QNetworkDiskCache_TimerEvent(QNetworkDiskCache* self, QTimerEvent* event);
void QNetworkDiskCache_OnTimerEvent(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperTimerEvent(QNetworkDiskCache* self, QTimerEvent* event);
void QNetworkDiskCache_ChildEvent(QNetworkDiskCache* self, QChildEvent* event);
void QNetworkDiskCache_OnChildEvent(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperChildEvent(QNetworkDiskCache* self, QChildEvent* event);
void QNetworkDiskCache_CustomEvent(QNetworkDiskCache* self, QEvent* event);
void QNetworkDiskCache_OnCustomEvent(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperCustomEvent(QNetworkDiskCache* self, QEvent* event);
void QNetworkDiskCache_ConnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal);
void QNetworkDiskCache_OnConnectNotify(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperConnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal);
void QNetworkDiskCache_DisconnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal);
void QNetworkDiskCache_OnDisconnectNotify(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_SuperDisconnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal);
QObject* QNetworkDiskCache_Sender(const QNetworkDiskCache* self);
void QNetworkDiskCache_OnSender(const QNetworkDiskCache* self, intptr_t slot);
QObject* QNetworkDiskCache_SuperSender(const QNetworkDiskCache* self);
int QNetworkDiskCache_SenderSignalIndex(const QNetworkDiskCache* self);
void QNetworkDiskCache_OnSenderSignalIndex(const QNetworkDiskCache* self, intptr_t slot);
int QNetworkDiskCache_SuperSenderSignalIndex(const QNetworkDiskCache* self);
int QNetworkDiskCache_Receivers(const QNetworkDiskCache* self, const char* signal);
void QNetworkDiskCache_OnReceivers(const QNetworkDiskCache* self, intptr_t slot);
int QNetworkDiskCache_SuperReceivers(const QNetworkDiskCache* self, const char* signal);
bool QNetworkDiskCache_IsSignalConnected(const QNetworkDiskCache* self, const QMetaMethod* signal);
void QNetworkDiskCache_OnIsSignalConnected(const QNetworkDiskCache* self, intptr_t slot);
bool QNetworkDiskCache_SuperIsSignalConnected(const QNetworkDiskCache* self, const QMetaMethod* signal);
void QNetworkDiskCache_Delete(QNetworkDiskCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
