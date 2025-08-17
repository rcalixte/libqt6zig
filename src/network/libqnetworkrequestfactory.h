#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKREQUESTFACTORY_H
#define SRC_NETWORKC_LIBQNETWORKREQUESTFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QNetworkRequestFactory QNetworkRequestFactory;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
typedef struct QVariant QVariant;
#endif

QNetworkRequestFactory* QNetworkRequestFactory_new();
QNetworkRequestFactory* QNetworkRequestFactory_new2(const QUrl* baseUrl);
QNetworkRequestFactory* QNetworkRequestFactory_new3(const QNetworkRequestFactory* other);
void QNetworkRequestFactory_OperatorAssign(QNetworkRequestFactory* self, const QNetworkRequestFactory* other);
void QNetworkRequestFactory_Swap(QNetworkRequestFactory* self, QNetworkRequestFactory* other);
QUrl* QNetworkRequestFactory_BaseUrl(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetBaseUrl(QNetworkRequestFactory* self, const QUrl* url);
QSslConfiguration* QNetworkRequestFactory_SslConfiguration(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetSslConfiguration(QNetworkRequestFactory* self, const QSslConfiguration* configuration);
QNetworkRequest* QNetworkRequestFactory_CreateRequest(const QNetworkRequestFactory* self);
QNetworkRequest* QNetworkRequestFactory_CreateRequest2(const QNetworkRequestFactory* self, const QUrlQuery* query);
QNetworkRequest* QNetworkRequestFactory_CreateRequest3(const QNetworkRequestFactory* self, const libqt_string path);
QNetworkRequest* QNetworkRequestFactory_CreateRequest4(const QNetworkRequestFactory* self, const libqt_string path, const QUrlQuery* query);
void QNetworkRequestFactory_SetCommonHeaders(QNetworkRequestFactory* self, const QHttpHeaders* headers);
QHttpHeaders* QNetworkRequestFactory_CommonHeaders(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_ClearCommonHeaders(QNetworkRequestFactory* self);
libqt_string QNetworkRequestFactory_BearerToken(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetBearerToken(QNetworkRequestFactory* self, const libqt_string token);
void QNetworkRequestFactory_ClearBearerToken(QNetworkRequestFactory* self);
libqt_string QNetworkRequestFactory_UserName(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetUserName(QNetworkRequestFactory* self, const libqt_string userName);
void QNetworkRequestFactory_ClearUserName(QNetworkRequestFactory* self);
libqt_string QNetworkRequestFactory_Password(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetPassword(QNetworkRequestFactory* self, const libqt_string password);
void QNetworkRequestFactory_ClearPassword(QNetworkRequestFactory* self);
QUrlQuery* QNetworkRequestFactory_QueryParameters(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetQueryParameters(QNetworkRequestFactory* self, const QUrlQuery* query);
void QNetworkRequestFactory_ClearQueryParameters(QNetworkRequestFactory* self);
void QNetworkRequestFactory_SetPriority(QNetworkRequestFactory* self, int priority);
int QNetworkRequestFactory_Priority(const QNetworkRequestFactory* self);
QVariant* QNetworkRequestFactory_Attribute(const QNetworkRequestFactory* self, int attribute);
QVariant* QNetworkRequestFactory_Attribute2(const QNetworkRequestFactory* self, int attribute, const QVariant* defaultValue);
void QNetworkRequestFactory_SetAttribute(QNetworkRequestFactory* self, int attribute, const QVariant* value);
void QNetworkRequestFactory_ClearAttribute(QNetworkRequestFactory* self, int attribute);
void QNetworkRequestFactory_ClearAttributes(QNetworkRequestFactory* self);
void QNetworkRequestFactory_Delete(QNetworkRequestFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
