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

#ifdef __cplusplus
typedef QWebEngineFileSystemAccessRequest::AccessFlag AccessFlag;         // C++ enum
typedef QWebEngineFileSystemAccessRequest::AccessFlags AccessFlags;       // C++ QFlags
typedef QWebEngineFileSystemAccessRequest::HandleType HandleType;         // C++ enum
typedef QWebEngineFileSystemAccessRequest::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef int AccessFlag;      // C ABI enum
typedef int AccessFlags;     // C ABI QFlags
typedef int HandleType;      // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QWebEngineFileSystemAccessRequest* QWebEngineFileSystemAccessRequest_new(QWebEngineFileSystemAccessRequest* other);
void QWebEngineFileSystemAccessRequest_OperatorAssign(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other);
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
