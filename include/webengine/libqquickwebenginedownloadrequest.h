#pragma once
#ifndef WEBENGINE_LIBQQUICKWEBENGINEDOWNLOADREQUEST_H
#define WEBENGINE_LIBQQUICKWEBENGINEDOWNLOADREQUEST_H

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
typedef struct QQuickWebEngineDownloadRequest QQuickWebEngineDownloadRequest;
typedef struct QWebEngineDownloadRequest QWebEngineDownloadRequest;
#endif

QMetaObject* QQuickWebEngineDownloadRequest_MetaObject(const QQuickWebEngineDownloadRequest* self);
void* QQuickWebEngineDownloadRequest_Metacast(QQuickWebEngineDownloadRequest* self, const char* param1);
int QQuickWebEngineDownloadRequest_Metacall(QQuickWebEngineDownloadRequest* self, int param1, int param2, void** param3);
libqt_string QQuickWebEngineDownloadRequest_Tr(const char* s);
void QQuickWebEngineDownloadRequest_QmlMarkerUncreatable(QQuickWebEngineDownloadRequest* self);
libqt_string QQuickWebEngineDownloadRequest_Tr2(const char* s, const char* c);
libqt_string QQuickWebEngineDownloadRequest_Tr3(const char* s, const char* c, int n);
void QQuickWebEngineDownloadRequest_Delete(QQuickWebEngineDownloadRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
