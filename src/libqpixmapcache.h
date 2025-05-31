#pragma once
#ifndef SRCC_LIBQPIXMAPCACHE_H
#define SRCC_LIBQPIXMAPCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key)
typedef QPixmapCache::Key QPixmapCache__Key;
#endif
#else
typedef struct QPixmap QPixmap;
typedef struct QPixmapCache QPixmapCache;
typedef struct QPixmapCache__Key QPixmapCache__Key;
#endif

QPixmapCache* QPixmapCache_new(const QPixmapCache* other);
QPixmapCache* QPixmapCache_new2(QPixmapCache* other);
void QPixmapCache_CopyAssign(QPixmapCache* self, QPixmapCache* other);
void QPixmapCache_MoveAssign(QPixmapCache* self, QPixmapCache* other);
int QPixmapCache_CacheLimit();
void QPixmapCache_SetCacheLimit(int cacheLimit);
bool QPixmapCache_Find(const libqt_string key, QPixmap* pixmap);
bool QPixmapCache_Find2(const QPixmapCache__Key* key, QPixmap* pixmap);
bool QPixmapCache_Insert(const libqt_string key, const QPixmap* pixmap);
QPixmapCache__Key* QPixmapCache_InsertWithPixmap(const QPixmap* pixmap);
bool QPixmapCache_Replace(const QPixmapCache__Key* key, const QPixmap* pixmap);
void QPixmapCache_Remove(const libqt_string key);
void QPixmapCache_RemoveWithKey(const QPixmapCache__Key* key);
void QPixmapCache_Clear();
void QPixmapCache_Delete(QPixmapCache* self);

QPixmapCache__Key* QPixmapCache__Key_new();
QPixmapCache__Key* QPixmapCache__Key_new2(const QPixmapCache__Key* other);
bool QPixmapCache__Key_OperatorEqual(const QPixmapCache__Key* self, const QPixmapCache__Key* key);
bool QPixmapCache__Key_OperatorNotEqual(const QPixmapCache__Key* self, const QPixmapCache__Key* key);
void QPixmapCache__Key_OperatorAssign(QPixmapCache__Key* self, const QPixmapCache__Key* other);
void QPixmapCache__Key_Swap(QPixmapCache__Key* self, QPixmapCache__Key* other);
bool QPixmapCache__Key_IsValid(const QPixmapCache__Key* self);
void QPixmapCache__Key_Delete(QPixmapCache__Key* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
