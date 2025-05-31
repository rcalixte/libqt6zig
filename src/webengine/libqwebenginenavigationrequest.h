#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINENAVIGATIONREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINENAVIGATIONREQUEST_H

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
typedef struct QWebEngineNavigationRequest QWebEngineNavigationRequest;
#endif

#ifdef __cplusplus
typedef QWebEngineNavigationRequest::NavigationRequestAction NavigationRequestAction; // C++ enum
typedef QWebEngineNavigationRequest::NavigationType NavigationType;                   // C++ enum
#else
typedef int NavigationRequestAction; // C ABI enum
typedef int NavigationType;          // C ABI enum
#endif

QMetaObject* QWebEngineNavigationRequest_MetaObject(const QWebEngineNavigationRequest* self);
void* QWebEngineNavigationRequest_Metacast(QWebEngineNavigationRequest* self, const char* param1);
int QWebEngineNavigationRequest_Metacall(QWebEngineNavigationRequest* self, int param1, int param2, void** param3);
libqt_string QWebEngineNavigationRequest_Tr(const char* s);
QUrl* QWebEngineNavigationRequest_Url(const QWebEngineNavigationRequest* self);
bool QWebEngineNavigationRequest_IsMainFrame(const QWebEngineNavigationRequest* self);
int QWebEngineNavigationRequest_NavigationType(const QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Accept(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Reject(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_ActionChanged(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Connect_ActionChanged(QWebEngineNavigationRequest* self, intptr_t slot);
libqt_string QWebEngineNavigationRequest_Tr2(const char* s, const char* c);
libqt_string QWebEngineNavigationRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineNavigationRequest_Delete(QWebEngineNavigationRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
