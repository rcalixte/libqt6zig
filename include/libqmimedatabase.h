#pragma once
#ifndef SRCC_LIBQMIMEDATABASE_H
#define SRCC_LIBQMIMEDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFileInfo QFileInfo;
typedef struct QIODevice QIODevice;
typedef struct QMimeDatabase QMimeDatabase;
typedef struct QMimeType QMimeType;
typedef struct QUrl QUrl;
#endif

#ifdef __cplusplus
typedef QMimeDatabase::MatchMode MatchMode; // C++ enum
#else
typedef int MatchMode; // C ABI enum
#endif

QMimeDatabase* QMimeDatabase_new();
QMimeType* QMimeDatabase_MimeTypeForName(const QMimeDatabase* self, libqt_string nameOrAlias);
QMimeType* QMimeDatabase_MimeTypeForFile(const QMimeDatabase* self, libqt_string fileName);
QMimeType* QMimeDatabase_MimeTypeForFileWithFileInfo(const QMimeDatabase* self, QFileInfo* fileInfo);
libqt_list /* of QMimeType* */ QMimeDatabase_MimeTypesForFileName(const QMimeDatabase* self, libqt_string fileName);
QMimeType* QMimeDatabase_MimeTypeForData(const QMimeDatabase* self, libqt_string data);
QMimeType* QMimeDatabase_MimeTypeForDataWithDevice(const QMimeDatabase* self, QIODevice* device);
QMimeType* QMimeDatabase_MimeTypeForUrl(const QMimeDatabase* self, QUrl* url);
QMimeType* QMimeDatabase_MimeTypeForFileNameAndData(const QMimeDatabase* self, libqt_string fileName, QIODevice* device);
QMimeType* QMimeDatabase_MimeTypeForFileNameAndData2(const QMimeDatabase* self, libqt_string fileName, libqt_string data);
libqt_string QMimeDatabase_SuffixForFileName(const QMimeDatabase* self, libqt_string fileName);
libqt_list /* of QMimeType* */ QMimeDatabase_AllMimeTypes(const QMimeDatabase* self);
QMimeType* QMimeDatabase_MimeTypeForFile2(const QMimeDatabase* self, libqt_string fileName, int mode);
QMimeType* QMimeDatabase_MimeTypeForFile22(const QMimeDatabase* self, QFileInfo* fileInfo, int mode);
void QMimeDatabase_Delete(QMimeDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
