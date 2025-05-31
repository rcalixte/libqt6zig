#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEDOWNLOADREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEDOWNLOADREQUEST_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineDownloadRequest QWebEngineDownloadRequest;
typedef struct QWebEnginePage QWebEnginePage;
#endif

#ifdef __cplusplus
typedef QWebEngineDownloadRequest::DownloadInterruptReason DownloadInterruptReason; // C++ enum
typedef QWebEngineDownloadRequest::DownloadState DownloadState;                     // C++ enum
typedef QWebEngineDownloadRequest::SavePageFormat SavePageFormat;                   // C++ enum
#else
typedef int DownloadInterruptReason; // C ABI enum
typedef int DownloadState;           // C ABI enum
typedef int SavePageFormat;          // C ABI enum
#endif

QMetaObject* QWebEngineDownloadRequest_MetaObject(const QWebEngineDownloadRequest* self);
void* QWebEngineDownloadRequest_Metacast(QWebEngineDownloadRequest* self, const char* param1);
int QWebEngineDownloadRequest_Metacall(QWebEngineDownloadRequest* self, int param1, int param2, void** param3);
libqt_string QWebEngineDownloadRequest_Tr(const char* s);
unsigned int QWebEngineDownloadRequest_Id(const QWebEngineDownloadRequest* self);
int QWebEngineDownloadRequest_State(const QWebEngineDownloadRequest* self);
long long QWebEngineDownloadRequest_TotalBytes(const QWebEngineDownloadRequest* self);
long long QWebEngineDownloadRequest_ReceivedBytes(const QWebEngineDownloadRequest* self);
QUrl* QWebEngineDownloadRequest_Url(const QWebEngineDownloadRequest* self);
libqt_string QWebEngineDownloadRequest_MimeType(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_IsFinished(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_IsPaused(const QWebEngineDownloadRequest* self);
int QWebEngineDownloadRequest_SavePageFormat(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_SetSavePageFormat(QWebEngineDownloadRequest* self, int format);
int QWebEngineDownloadRequest_InterruptReason(const QWebEngineDownloadRequest* self);
libqt_string QWebEngineDownloadRequest_InterruptReasonString(const QWebEngineDownloadRequest* self);
bool QWebEngineDownloadRequest_IsSavePageDownload(const QWebEngineDownloadRequest* self);
libqt_string QWebEngineDownloadRequest_SuggestedFileName(const QWebEngineDownloadRequest* self);
libqt_string QWebEngineDownloadRequest_DownloadDirectory(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_SetDownloadDirectory(QWebEngineDownloadRequest* self, const libqt_string directory);
libqt_string QWebEngineDownloadRequest_DownloadFileName(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_SetDownloadFileName(QWebEngineDownloadRequest* self, const libqt_string fileName);
QWebEnginePage* QWebEngineDownloadRequest_Page(const QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Accept(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Cancel(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Pause(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Resume(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_StateChanged(QWebEngineDownloadRequest* self, int state);
void QWebEngineDownloadRequest_Connect_StateChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_SavePageFormatChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_SavePageFormatChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_ReceivedBytesChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_TotalBytesChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_TotalBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_InterruptReasonChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_InterruptReasonChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_IsFinishedChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_IsFinishedChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_IsPausedChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_IsPausedChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_DownloadDirectoryChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(QWebEngineDownloadRequest* self, intptr_t slot);
void QWebEngineDownloadRequest_DownloadFileNameChanged(QWebEngineDownloadRequest* self);
void QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(QWebEngineDownloadRequest* self, intptr_t slot);
libqt_string QWebEngineDownloadRequest_Tr2(const char* s, const char* c);
libqt_string QWebEngineDownloadRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineDownloadRequest_Delete(QWebEngineDownloadRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
