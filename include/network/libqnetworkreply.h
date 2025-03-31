#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKREPLY_H
#define SRC_NETWORKC_LIBQNETWORKREPLY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QNetworkReply::NetworkError NetworkError;   // C++ enum
typedef QNetworkReply::RawHeaderPair RawHeaderPair; // C++ QFlags
#else
typedef int NetworkError;                                                      // C ABI enum
typedef libqt_pair /* tuple of libqt_string and libqt_string */ RawHeaderPair; // C ABI QFlags
#endif

QMetaObject* QNetworkReply_MetaObject(const QNetworkReply* self);
void* QNetworkReply_Metacast(QNetworkReply* self, const char* param1);
int QNetworkReply_Metacall(QNetworkReply* self, int param1, int param2, void** param3);
libqt_string QNetworkReply_Tr(const char* s);
void QNetworkReply_Close(QNetworkReply* self);
bool QNetworkReply_IsSequential(const QNetworkReply* self);
long long QNetworkReply_ReadBufferSize(const QNetworkReply* self);
void QNetworkReply_SetReadBufferSize(QNetworkReply* self, long long size);
QNetworkAccessManager* QNetworkReply_Manager(const QNetworkReply* self);
int QNetworkReply_Operation(const QNetworkReply* self);
QNetworkRequest* QNetworkReply_Request(const QNetworkReply* self);
int QNetworkReply_Error(const QNetworkReply* self);
bool QNetworkReply_IsFinished(const QNetworkReply* self);
bool QNetworkReply_IsRunning(const QNetworkReply* self);
QUrl* QNetworkReply_Url(const QNetworkReply* self);
QVariant* QNetworkReply_Header(const QNetworkReply* self, int header);
bool QNetworkReply_HasRawHeader(const QNetworkReply* self, libqt_string headerName);
libqt_list /* of libqt_string */ QNetworkReply_RawHeaderList(const QNetworkReply* self);
libqt_string QNetworkReply_RawHeader(const QNetworkReply* self, libqt_string headerName);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QNetworkReply_RawHeaderPairs(const QNetworkReply* self);
QVariant* QNetworkReply_Attribute(const QNetworkReply* self, int code);
QSslConfiguration* QNetworkReply_SslConfiguration(const QNetworkReply* self);
void QNetworkReply_SetSslConfiguration(QNetworkReply* self, QSslConfiguration* configuration);
void QNetworkReply_IgnoreSslErrors(QNetworkReply* self, libqt_list /* of QSslError* */ errors);
void QNetworkReply_Abort(QNetworkReply* self);
void QNetworkReply_IgnoreSslErrors2(QNetworkReply* self);
void QNetworkReply_SocketStartedConnecting(QNetworkReply* self);
void QNetworkReply_Connect_SocketStartedConnecting(QNetworkReply* self, intptr_t slot);
void QNetworkReply_RequestSent(QNetworkReply* self);
void QNetworkReply_Connect_RequestSent(QNetworkReply* self, intptr_t slot);
void QNetworkReply_MetaDataChanged(QNetworkReply* self);
void QNetworkReply_Connect_MetaDataChanged(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Finished(QNetworkReply* self);
void QNetworkReply_Connect_Finished(QNetworkReply* self, intptr_t slot);
void QNetworkReply_ErrorOccurred(QNetworkReply* self, int param1);
void QNetworkReply_Connect_ErrorOccurred(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Encrypted(QNetworkReply* self);
void QNetworkReply_Connect_Encrypted(QNetworkReply* self, intptr_t slot);
void QNetworkReply_SslErrors(QNetworkReply* self, libqt_list /* of QSslError* */ errors);
void QNetworkReply_Connect_SslErrors(QNetworkReply* self, intptr_t slot);
void QNetworkReply_PreSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator);
void QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Redirected(QNetworkReply* self, QUrl* url);
void QNetworkReply_Connect_Redirected(QNetworkReply* self, intptr_t slot);
void QNetworkReply_RedirectAllowed(QNetworkReply* self);
void QNetworkReply_Connect_RedirectAllowed(QNetworkReply* self, intptr_t slot);
void QNetworkReply_UploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal);
void QNetworkReply_Connect_UploadProgress(QNetworkReply* self, intptr_t slot);
void QNetworkReply_DownloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal);
void QNetworkReply_Connect_DownloadProgress(QNetworkReply* self, intptr_t slot);
libqt_string QNetworkReply_Tr2(const char* s, const char* c);
libqt_string QNetworkReply_Tr3(const char* s, const char* c, int n);
bool QNetworkReply_Open(QNetworkReply* self, int mode);
long long QNetworkReply_Pos(const QNetworkReply* self);
long long QNetworkReply_Size(const QNetworkReply* self);
bool QNetworkReply_Seek(QNetworkReply* self, long long pos);
bool QNetworkReply_AtEnd(const QNetworkReply* self);
bool QNetworkReply_Reset(QNetworkReply* self);
long long QNetworkReply_BytesAvailable(const QNetworkReply* self);
long long QNetworkReply_BytesToWrite(const QNetworkReply* self);
bool QNetworkReply_CanReadLine(const QNetworkReply* self);
bool QNetworkReply_WaitForReadyRead(QNetworkReply* self, int msecs);
bool QNetworkReply_WaitForBytesWritten(QNetworkReply* self, int msecs);
bool QNetworkReply_Event(QNetworkReply* self, QEvent* event);
bool QNetworkReply_EventFilter(QNetworkReply* self, QObject* watched, QEvent* event);
void QNetworkReply_Delete(QNetworkReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
