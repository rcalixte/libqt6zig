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

libqt_string KIO_ConvertSize(unsigned long long param1);
libqt_string KIO_Number(unsigned long long param1);
libqt_string KIO_ConvertSizeFromKiB(unsigned long long param1);
unsigned int KIO_CalculateRemainingSeconds(unsigned long long param1, unsigned long long param2, unsigned long long param3);
libqt_string KIO_ConvertSeconds(unsigned int param1);
libqt_string KIO_ItemsSummaryString(unsigned int param1, unsigned int param2, unsigned int param3, unsigned long long param4, bool param5);
libqt_string KIO_EncodeFileName(const libqt_string param1);
libqt_string KIO_DecodeFileName(const libqt_string param1);
int KIO_ParseCacheControl(const libqt_string param1);
libqt_string KIO_GetCacheControlString(int param1);
libqt_string KIO_FavIconForUrl(const QUrl* param1);
int KIO_ConvertPermissions(int param1);
libqt_string KIO_IconNameForUrl(const QUrl* param1);
QUrl* KIO_UpUrl(const QUrl* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
