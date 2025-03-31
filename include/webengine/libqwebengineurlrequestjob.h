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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
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
void QWebEngineUrlRequestJob_Reply(QWebEngineUrlRequestJob* self, libqt_string contentType, QIODevice* device);
void QWebEngineUrlRequestJob_Fail(QWebEngineUrlRequestJob* self, int errorVal);
void QWebEngineUrlRequestJob_Redirect(QWebEngineUrlRequestJob* self, QUrl* url);
libqt_string QWebEngineUrlRequestJob_Tr2(const char* s, const char* c);
libqt_string QWebEngineUrlRequestJob_Tr3(const char* s, const char* c, int n);
bool QWebEngineUrlRequestJob_Event(QWebEngineUrlRequestJob* self, QEvent* event);
bool QWebEngineUrlRequestJob_EventFilter(QWebEngineUrlRequestJob* self, QObject* watched, QEvent* event);
void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
