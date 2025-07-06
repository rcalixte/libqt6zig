#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINENEWWINDOWREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINENEWWINDOWREQUEST_H

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
typedef struct QRect QRect;
typedef struct QUrl QUrl;
typedef struct QWebEngineNewWindowRequest QWebEngineNewWindowRequest;
typedef struct QWebEnginePage QWebEnginePage;
#endif

QMetaObject* QWebEngineNewWindowRequest_MetaObject(const QWebEngineNewWindowRequest* self);
void* QWebEngineNewWindowRequest_Metacast(QWebEngineNewWindowRequest* self, const char* param1);
int QWebEngineNewWindowRequest_Metacall(QWebEngineNewWindowRequest* self, int param1, int param2, void** param3);
libqt_string QWebEngineNewWindowRequest_Tr(const char* s);
int QWebEngineNewWindowRequest_Destination(const QWebEngineNewWindowRequest* self);
QUrl* QWebEngineNewWindowRequest_RequestedUrl(const QWebEngineNewWindowRequest* self);
QRect* QWebEngineNewWindowRequest_RequestedGeometry(const QWebEngineNewWindowRequest* self);
bool QWebEngineNewWindowRequest_IsUserInitiated(const QWebEngineNewWindowRequest* self);
void QWebEngineNewWindowRequest_OpenIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1);
libqt_string QWebEngineNewWindowRequest_Tr2(const char* s, const char* c);
libqt_string QWebEngineNewWindowRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineNewWindowRequest_Delete(QWebEngineNewWindowRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
