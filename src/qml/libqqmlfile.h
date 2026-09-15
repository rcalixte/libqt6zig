#pragma once
#ifndef QML_LIBQQMLFILE_H
#define QML_LIBQQMLFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlFile QQmlFile;
typedef struct QUrl QUrl;
#endif

QQmlFile* QQmlFile_new();
QQmlFile* QQmlFile_new2(QQmlEngine* engine, const QUrl* url);
QQmlFile* QQmlFile_new3(QQmlEngine* engine, const libqt_string url);
bool QQmlFile_IsNull(const QQmlFile* self);
bool QQmlFile_IsReady(const QQmlFile* self);
bool QQmlFile_IsError(const QQmlFile* self);
bool QQmlFile_IsLoading(const QQmlFile* self);
QUrl* QQmlFile_Url(const QQmlFile* self);
int QQmlFile_Status(const QQmlFile* self);
libqt_string QQmlFile_Error(const QQmlFile* self);
long long QQmlFile_Size(const QQmlFile* self);
const char* QQmlFile_Data(const QQmlFile* self);
libqt_string QQmlFile_DataByteArray(const QQmlFile* self);
void QQmlFile_Load(QQmlFile* self, QQmlEngine* param1, const QUrl* param2);
void QQmlFile_Load2(QQmlFile* self, QQmlEngine* param1, const libqt_string param2);
void QQmlFile_Clear(QQmlFile* self);
void QQmlFile_Clear2(QQmlFile* self, QObject* object);
bool QQmlFile_ConnectFinished(QQmlFile* self, QObject* param1, const char* param2);
bool QQmlFile_ConnectFinished2(QQmlFile* self, QObject* param1, int param2);
bool QQmlFile_ConnectDownloadProgress(QQmlFile* self, QObject* param1, const char* param2);
bool QQmlFile_ConnectDownloadProgress2(QQmlFile* self, QObject* param1, int param2);
bool QQmlFile_IsSynchronous(const libqt_string url);
bool QQmlFile_IsSynchronous2(const QUrl* url);
bool QQmlFile_IsLocalFile(const libqt_string url);
bool QQmlFile_IsLocalFile2(const QUrl* url);
libqt_string QQmlFile_UrlToLocalFileOrQrc(const libqt_string param1);
libqt_string QQmlFile_UrlToLocalFileOrQrc2(const QUrl* param1);
void QQmlFile_Delete(QQmlFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
