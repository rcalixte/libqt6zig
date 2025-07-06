#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEFILESYSTEMACCESSREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEFILESYSTEMACCESSREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineFileSystemAccessRequest QWebEngineFileSystemAccessRequest;
#endif

QWebEngineFileSystemAccessRequest* QWebEngineFileSystemAccessRequest_new(const QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_OperatorAssign(QWebEngineFileSystemAccessRequest* self, const QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_Swap(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_Accept(QWebEngineFileSystemAccessRequest* self);
void QWebEngineFileSystemAccessRequest_Reject(QWebEngineFileSystemAccessRequest* self);
QUrl* QWebEngineFileSystemAccessRequest_Origin(const QWebEngineFileSystemAccessRequest* self);
QUrl* QWebEngineFileSystemAccessRequest_FilePath(const QWebEngineFileSystemAccessRequest* self);
int QWebEngineFileSystemAccessRequest_HandleType(const QWebEngineFileSystemAccessRequest* self);
int QWebEngineFileSystemAccessRequest_AccessFlags(const QWebEngineFileSystemAccessRequest* self);
void QWebEngineFileSystemAccessRequest_Delete(QWebEngineFileSystemAccessRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
