#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTJOB_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTJOB_H

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
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
#endif

#ifdef __cplusplus
typedef QWebEngineUrlRequestJob::Error Error; // C++ enum
#else
typedef int Error; // C ABI enum
#endif

QMetaObject* QWebEngineUrlRequestJob_MetaObject(const QWebEngineUrlRequestJob* self);
void* QWebEngineUrlRequestJob_Metacast(QWebEngineUrlRequestJob* self, const char* param1);
int QWebEngineUrlRequestJob_Metacall(QWebEngineUrlRequestJob* self, int param1, int param2, void** param3);
libqt_string QWebEngineUrlRequestJob_Tr(const char* s);
QUrl* QWebEngineUrlRequestJob_RequestUrl(const QWebEngineUrlRequestJob* self);
libqt_string QWebEngineUrlRequestJob_RequestMethod(const QWebEngineUrlRequestJob* self);
QUrl* QWebEngineUrlRequestJob_Initiator(const QWebEngineUrlRequestJob* self);
void QWebEngineUrlRequestJob_Reply(QWebEngineUrlRequestJob* self, const libqt_string contentType, QIODevice* device);
void QWebEngineUrlRequestJob_Fail(QWebEngineUrlRequestJob* self, int errorVal);
void QWebEngineUrlRequestJob_Redirect(QWebEngineUrlRequestJob* self, const QUrl* url);
libqt_string QWebEngineUrlRequestJob_Tr2(const char* s, const char* c);
libqt_string QWebEngineUrlRequestJob_Tr3(const char* s, const char* c, int n);
void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
