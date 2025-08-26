#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKSHAREDDATACACHE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKSHAREDDATACACHE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSharedDataCache KSharedDataCache;
#endif

KSharedDataCache* KSharedDataCache_new(const libqt_string cacheName, unsigned int defaultCacheSize);
KSharedDataCache* KSharedDataCache_new2(const libqt_string cacheName, unsigned int defaultCacheSize, unsigned int expectedItemSize);
int KSharedDataCache_EvictionPolicy(const KSharedDataCache* self);
void KSharedDataCache_SetEvictionPolicy(KSharedDataCache* self, int newPolicy);
bool KSharedDataCache_Insert(KSharedDataCache* self, const libqt_string key, const libqt_string data);
void KSharedDataCache_Clear(KSharedDataCache* self);
void KSharedDataCache_DeleteCache(const libqt_string cacheName);
bool KSharedDataCache_Contains(const KSharedDataCache* self, const libqt_string key);
unsigned int KSharedDataCache_TotalSize(const KSharedDataCache* self);
unsigned int KSharedDataCache_FreeSize(const KSharedDataCache* self);
unsigned int KSharedDataCache_Timestamp(const KSharedDataCache* self);
void KSharedDataCache_SetTimestamp(KSharedDataCache* self, unsigned int newTimestamp);
void KSharedDataCache_Delete(KSharedDataCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
