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

void KUrlMimeData_SetUrls(const libqt_list /* of QUrl* */ param1, const libqt_list /* of QUrl* */ param2, QMimeData* param3);
bool KUrlMimeData_ExportUrlsToPortal(QMimeData* param1);
void KUrlMimeData_SetMetaData(const libqt_map /* of libqt_string to libqt_string */ param1, QMimeData* param2);
libqt_list /* of libqt_string */ KUrlMimeData_MimeDataTypes();
libqt_list /* of QUrl* */ KUrlMimeData_UrlsFromMimeData(const QMimeData* param1, int param2, libqt_map* /* of libqt_string to libqt_string */ param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
