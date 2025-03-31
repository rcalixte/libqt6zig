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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
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
bool QWebEngineNavigationRequest_Event(QWebEngineNavigationRequest* self, QEvent* event);
bool QWebEngineNavigationRequest_EventFilter(QWebEngineNavigationRequest* self, QObject* watched, QEvent* event);
void QWebEngineNavigationRequest_Delete(QWebEngineNavigationRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
