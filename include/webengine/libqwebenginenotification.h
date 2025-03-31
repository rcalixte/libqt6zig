#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINENOTIFICATION_H
#define SRC_WEBENGINEC_LIBQWEBENGINENOTIFICATION_H

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
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineNotification QWebEngineNotification;
#endif

QMetaObject* QWebEngineNotification_MetaObject(const QWebEngineNotification* self);
void* QWebEngineNotification_Metacast(QWebEngineNotification* self, const char* param1);
int QWebEngineNotification_Metacall(QWebEngineNotification* self, int param1, int param2, void** param3);
libqt_string QWebEngineNotification_Tr(const char* s);
bool QWebEngineNotification_Matches(const QWebEngineNotification* self, QWebEngineNotification* other);
QUrl* QWebEngineNotification_Origin(const QWebEngineNotification* self);
QImage* QWebEngineNotification_Icon(const QWebEngineNotification* self);
libqt_string QWebEngineNotification_Title(const QWebEngineNotification* self);
libqt_string QWebEngineNotification_Message(const QWebEngineNotification* self);
libqt_string QWebEngineNotification_Tag(const QWebEngineNotification* self);
libqt_string QWebEngineNotification_Language(const QWebEngineNotification* self);
int QWebEngineNotification_Direction(const QWebEngineNotification* self);
void QWebEngineNotification_Show(const QWebEngineNotification* self);
void QWebEngineNotification_Click(const QWebEngineNotification* self);
void QWebEngineNotification_Close(const QWebEngineNotification* self);
void QWebEngineNotification_Closed(QWebEngineNotification* self);
void QWebEngineNotification_Connect_Closed(QWebEngineNotification* self, intptr_t slot);
libqt_string QWebEngineNotification_Tr2(const char* s, const char* c);
libqt_string QWebEngineNotification_Tr3(const char* s, const char* c, int n);
bool QWebEngineNotification_Event(QWebEngineNotification* self, QEvent* event);
bool QWebEngineNotification_EventFilter(QWebEngineNotification* self, QObject* watched, QEvent* event);
void QWebEngineNotification_Delete(QWebEngineNotification* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
