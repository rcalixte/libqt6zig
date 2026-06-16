#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKURLMIMEDATA_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKURLMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KUrlMimeData KUrlMimeData;
typedef struct QMimeData QMimeData;
typedef struct QUrl QUrl;
#endif

void KUrlMimeData_SetUrls(const libqt_list /* of QUrl* */ urls, const libqt_list /* of QUrl* */ mostLocalUrls, QMimeData* mimeData);
bool KUrlMimeData_ExportUrlsToPortal(QMimeData* mimeData);
void KUrlMimeData_SetMetaData(const libqt_map /* of libqt_string to libqt_string */ metaData, QMimeData* mimeData);
libqt_list /* of libqt_string */ KUrlMimeData_MimeDataTypes();
libqt_list /* of QUrl* */ KUrlMimeData_UrlsFromMimeData(const QMimeData* mimeData, int decodeOptions, libqt_map* /* of libqt_string to libqt_string */ metaData);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
