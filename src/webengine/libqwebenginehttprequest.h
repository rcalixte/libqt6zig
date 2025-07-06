#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEHTTPREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEHTTPREQUEST_H

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
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
#endif

QWebEngineHttpRequest* QWebEngineHttpRequest_new();
QWebEngineHttpRequest* QWebEngineHttpRequest_new2(const QWebEngineHttpRequest* other);
QWebEngineHttpRequest* QWebEngineHttpRequest_new3(const QUrl* url);
QWebEngineHttpRequest* QWebEngineHttpRequest_new4(const QUrl* url, const int* method);
void QWebEngineHttpRequest_OperatorAssign(QWebEngineHttpRequest* self, const QWebEngineHttpRequest* other);
QWebEngineHttpRequest* QWebEngineHttpRequest_PostRequest(const QUrl* url, const libqt_map /* of libqt_string to libqt_string */ postData);
void QWebEngineHttpRequest_Swap(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
bool QWebEngineHttpRequest_OperatorEqual(const QWebEngineHttpRequest* self, const QWebEngineHttpRequest* other);
bool QWebEngineHttpRequest_OperatorNotEqual(const QWebEngineHttpRequest* self, const QWebEngineHttpRequest* other);
int QWebEngineHttpRequest_Method(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_SetMethod(QWebEngineHttpRequest* self, int method);
QUrl* QWebEngineHttpRequest_Url(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_SetUrl(QWebEngineHttpRequest* self, const QUrl* url);
libqt_string QWebEngineHttpRequest_PostData(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_SetPostData(QWebEngineHttpRequest* self, const libqt_string postData);
bool QWebEngineHttpRequest_HasHeader(const QWebEngineHttpRequest* self, const libqt_string headerName);
libqt_list /* of libqt_string */ QWebEngineHttpRequest_Headers(const QWebEngineHttpRequest* self);
libqt_string QWebEngineHttpRequest_Header(const QWebEngineHttpRequest* self, const libqt_string headerName);
void QWebEngineHttpRequest_SetHeader(QWebEngineHttpRequest* self, const libqt_string headerName, const libqt_string value);
void QWebEngineHttpRequest_UnsetHeader(QWebEngineHttpRequest* self, const libqt_string headerName);
void QWebEngineHttpRequest_Delete(QWebEngineHttpRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
