#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECOOKIESTORE_H
#define SRC_WEBENGINEC_LIBQWEBENGINECOOKIESTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef QWebEngineCookieStore::FilterRequest FilterRequest;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineCookieStore__FilterRequest)
typedef QWebEngineCookieStore::FilterRequest QWebEngineCookieStore__FilterRequest;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineCookieStore__FilterRequest QWebEngineCookieStore__FilterRequest;
#endif

QMetaObject* QWebEngineCookieStore_MetaObject(const QWebEngineCookieStore* self);
void* QWebEngineCookieStore_Metacast(QWebEngineCookieStore* self, const char* param1);
int QWebEngineCookieStore_Metacall(QWebEngineCookieStore* self, int param1, int param2, void** param3);
libqt_string QWebEngineCookieStore_Tr(const char* s);
void QWebEngineCookieStore_SetCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_DeleteCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_DeleteSessionCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_DeleteAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_LoadAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_CookieAdded(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_Connect_CookieAdded(QWebEngineCookieStore* self, intptr_t slot);
void QWebEngineCookieStore_CookieRemoved(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_Connect_CookieRemoved(QWebEngineCookieStore* self, intptr_t slot);
libqt_string QWebEngineCookieStore_Tr2(const char* s, const char* c);
libqt_string QWebEngineCookieStore_Tr3(const char* s, const char* c, int n);
void QWebEngineCookieStore_SetCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin);
void QWebEngineCookieStore_DeleteCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin);
bool QWebEngineCookieStore_Event(QWebEngineCookieStore* self, QEvent* event);
bool QWebEngineCookieStore_EventFilter(QWebEngineCookieStore* self, QObject* watched, QEvent* event);
void QWebEngineCookieStore_Delete(QWebEngineCookieStore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
