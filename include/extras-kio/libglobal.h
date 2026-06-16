#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBGLOBAL_H
#define SRC_EXTRAS_KIOC_LIBGLOBAL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIO KIO;
typedef struct QUrl QUrl;
#endif

libqt_string KIO_ConvertSize(unsigned long long size);
libqt_string KIO_Number(unsigned long long size);
libqt_string KIO_ConvertSizeFromKiB(unsigned long long kibSize);
unsigned int KIO_CalculateRemainingSeconds(unsigned long long totalSize, unsigned long long processedSize, unsigned long long speed);
libqt_string KIO_ConvertSeconds(unsigned int seconds);
libqt_string KIO_ItemsSummaryString(unsigned int items, unsigned int files, unsigned int dirs, unsigned long long size, bool showSize);
libqt_string KIO_EncodeFileName(const libqt_string str);
libqt_string KIO_DecodeFileName(const libqt_string str);
int KIO_ParseCacheControl(const libqt_string cacheControl);
libqt_string KIO_GetCacheControlString(int cacheControl);
libqt_string KIO_FavIconForUrl(const QUrl* url);
int KIO_ConvertPermissions(int permissions);
libqt_string KIO_IconNameForUrl(const QUrl* url);
QUrl* KIO_UpUrl(const QUrl* url);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
