#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTJOB_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
#endif

QMetaObject* QWebEngineUrlRequestJob_MetaObject(const QWebEngineUrlRequestJob* self);
void* QWebEngineUrlRequestJob_Metacast(QWebEngineUrlRequestJob* self, const char* param1);
int QWebEngineUrlRequestJob_Metacall(QWebEngineUrlRequestJob* self, int param1, int param2, void** param3);
QUrl* QWebEngineUrlRequestJob_RequestUrl(const QWebEngineUrlRequestJob* self);
libqt_string QWebEngineUrlRequestJob_RequestMethod(const QWebEngineUrlRequestJob* self);
QUrl* QWebEngineUrlRequestJob_Initiator(const QWebEngineUrlRequestJob* self);
libqt_map /* of libqt_string to libqt_string */ QWebEngineUrlRequestJob_RequestHeaders(const QWebEngineUrlRequestJob* self);
QIODevice* QWebEngineUrlRequestJob_RequestBody(const QWebEngineUrlRequestJob* self);
void QWebEngineUrlRequestJob_Reply(QWebEngineUrlRequestJob* self, const libqt_string contentType, QIODevice* device);
void QWebEngineUrlRequestJob_Fail(QWebEngineUrlRequestJob* self, int errorVal);
void QWebEngineUrlRequestJob_Redirect(QWebEngineUrlRequestJob* self, const QUrl* url);
void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
