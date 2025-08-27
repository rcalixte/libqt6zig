#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKLOCALIMAGECACHEIMPL_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKLOCALIMAGECACHEIMPL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLocalImageCacheImplementation KLocalImageCacheImplementation;
typedef struct QDateTime QDateTime;
#endif

QDateTime* KLocalImageCacheImplementation_LastModifiedTime(const KLocalImageCacheImplementation* self);
bool KLocalImageCacheImplementation_PixmapCaching(const KLocalImageCacheImplementation* self);
void KLocalImageCacheImplementation_SetPixmapCaching(KLocalImageCacheImplementation* self, bool enable);
int KLocalImageCacheImplementation_PixmapCacheLimit(const KLocalImageCacheImplementation* self);
void KLocalImageCacheImplementation_SetPixmapCacheLimit(KLocalImageCacheImplementation* self, int size);
void KLocalImageCacheImplementation_Delete(KLocalImageCacheImplementation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
