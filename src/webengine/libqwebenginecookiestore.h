#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECOOKIESTORE_H
#define SRC_WEBENGINEC_LIBQWEBENGINECOOKIESTORE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineCookieStore__FilterRequest)
typedef QWebEngineCookieStore::FilterRequest QWebEngineCookieStore__FilterRequest;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineCookieStore__FilterRequest QWebEngineCookieStore__FilterRequest;
#endif

QMetaObject* QWebEngineCookieStore_MetaObject(const QWebEngineCookieStore* self);
void* QWebEngineCookieStore_Metacast(QWebEngineCookieStore* self, const char* param1);
int QWebEngineCookieStore_Metacall(QWebEngineCookieStore* self, int param1, int param2, void** param3);
libqt_string QWebEngineCookieStore_Tr(const char* s);
void QWebEngineCookieStore_SetCookie(QWebEngineCookieStore* self, const QNetworkCookie* cookie);
void QWebEngineCookieStore_DeleteCookie(QWebEngineCookieStore* self, const QNetworkCookie* cookie);
void QWebEngineCookieStore_DeleteSessionCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_DeleteAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_LoadAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_CookieAdded(QWebEngineCookieStore* self, const QNetworkCookie* cookie);
void QWebEngineCookieStore_Connect_CookieAdded(QWebEngineCookieStore* self, intptr_t slot);
void QWebEngineCookieStore_CookieRemoved(QWebEngineCookieStore* self, const QNetworkCookie* cookie);
void QWebEngineCookieStore_Connect_CookieRemoved(QWebEngineCookieStore* self, intptr_t slot);
libqt_string QWebEngineCookieStore_Tr2(const char* s, const char* c);
libqt_string QWebEngineCookieStore_Tr3(const char* s, const char* c, int n);
void QWebEngineCookieStore_SetCookie2(QWebEngineCookieStore* self, const QNetworkCookie* cookie, const QUrl* origin);
void QWebEngineCookieStore_DeleteCookie2(QWebEngineCookieStore* self, const QNetworkCookie* cookie, const QUrl* origin);
void QWebEngineCookieStore_Delete(QWebEngineCookieStore* self);

QWebEngineCookieStore__FilterRequest* QWebEngineCookieStore__FilterRequest_new(const QWebEngineCookieStore__FilterRequest* param1);
void QWebEngineCookieStore__FilterRequest_OperatorAssign(QWebEngineCookieStore__FilterRequest* self, const QWebEngineCookieStore__FilterRequest* param1);
void QWebEngineCookieStore__FilterRequest_Delete(QWebEngineCookieStore__FilterRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
