#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKREQUEST_H
#define SRC_NETWORKC_LIBQNETWORKREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QHttp1Configuration QHttp1Configuration;
typedef struct QHttp2Configuration QHttp2Configuration;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QNetworkRequest* QNetworkRequest_new();
QNetworkRequest* QNetworkRequest_new2(const QUrl* url);
QNetworkRequest* QNetworkRequest_new3(const QNetworkRequest* other);
void QNetworkRequest_OperatorAssign(QNetworkRequest* self, const QNetworkRequest* other);
void QNetworkRequest_Swap(QNetworkRequest* self, QNetworkRequest* other);
bool QNetworkRequest_OperatorEqual(const QNetworkRequest* self, const QNetworkRequest* other);
bool QNetworkRequest_OperatorNotEqual(const QNetworkRequest* self, const QNetworkRequest* other);
QUrl* QNetworkRequest_Url(const QNetworkRequest* self);
void QNetworkRequest_SetUrl(QNetworkRequest* self, const QUrl* url);
QHttpHeaders* QNetworkRequest_Headers(const QNetworkRequest* self);
void QNetworkRequest_SetHeaders(QNetworkRequest* self, const QHttpHeaders* newHeaders);
QVariant* QNetworkRequest_Header(const QNetworkRequest* self, int header);
void QNetworkRequest_SetHeader(QNetworkRequest* self, int header, const QVariant* value);
bool QNetworkRequest_HasRawHeader(const QNetworkRequest* self, libqt_string headerName);
libqt_list /* of libqt_string */ QNetworkRequest_RawHeaderList(const QNetworkRequest* self);
libqt_string QNetworkRequest_RawHeader(const QNetworkRequest* self, libqt_string headerName);
void QNetworkRequest_SetRawHeader(QNetworkRequest* self, const libqt_string headerName, const libqt_string value);
QVariant* QNetworkRequest_Attribute(const QNetworkRequest* self, int code);
void QNetworkRequest_SetAttribute(QNetworkRequest* self, int code, const QVariant* value);
QSslConfiguration* QNetworkRequest_SslConfiguration(const QNetworkRequest* self);
void QNetworkRequest_SetSslConfiguration(QNetworkRequest* self, const QSslConfiguration* configuration);
void QNetworkRequest_SetOriginatingObject(QNetworkRequest* self, QObject* object);
QObject* QNetworkRequest_OriginatingObject(const QNetworkRequest* self);
int QNetworkRequest_Priority(const QNetworkRequest* self);
void QNetworkRequest_SetPriority(QNetworkRequest* self, int priority);
int QNetworkRequest_MaximumRedirectsAllowed(const QNetworkRequest* self);
void QNetworkRequest_SetMaximumRedirectsAllowed(QNetworkRequest* self, int maximumRedirectsAllowed);
libqt_string QNetworkRequest_PeerVerifyName(const QNetworkRequest* self);
void QNetworkRequest_SetPeerVerifyName(QNetworkRequest* self, const libqt_string peerName);
QHttp1Configuration* QNetworkRequest_Http1Configuration(const QNetworkRequest* self);
void QNetworkRequest_SetHttp1Configuration(QNetworkRequest* self, const QHttp1Configuration* configuration);
QHttp2Configuration* QNetworkRequest_Http2Configuration(const QNetworkRequest* self);
void QNetworkRequest_SetHttp2Configuration(QNetworkRequest* self, const QHttp2Configuration* configuration);
long long QNetworkRequest_DecompressedSafetyCheckThreshold(const QNetworkRequest* self);
void QNetworkRequest_SetDecompressedSafetyCheckThreshold(QNetworkRequest* self, long long threshold);
int QNetworkRequest_TransferTimeout(const QNetworkRequest* self);
void QNetworkRequest_SetTransferTimeout(QNetworkRequest* self, int timeout);
void QNetworkRequest_SetTransferTimeout2(QNetworkRequest* self);
QVariant* QNetworkRequest_Attribute2(const QNetworkRequest* self, int code, const QVariant* defaultValue);
void QNetworkRequest_Delete(QNetworkRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
