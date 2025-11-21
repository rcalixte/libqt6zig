#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINENAVIGATIONREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINENAVIGATIONREQUEST_H

#include <stdbool.h>
#include <stddef.h>

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

QMetaObject* QWebEngineNavigationRequest_MetaObject(const QWebEngineNavigationRequest* self);
void* QWebEngineNavigationRequest_Metacast(QWebEngineNavigationRequest* self, const char* param1);
int QWebEngineNavigationRequest_Metacall(QWebEngineNavigationRequest* self, int param1, int param2, void** param3);
QUrl* QWebEngineNavigationRequest_Url(const QWebEngineNavigationRequest* self);
bool QWebEngineNavigationRequest_IsMainFrame(const QWebEngineNavigationRequest* self);
bool QWebEngineNavigationRequest_HasFormData(const QWebEngineNavigationRequest* self);
int QWebEngineNavigationRequest_NavigationType(const QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Accept(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Reject(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_ActionChanged(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Connect_ActionChanged(QWebEngineNavigationRequest* self, intptr_t slot);
void QWebEngineNavigationRequest_Delete(QWebEngineNavigationRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
