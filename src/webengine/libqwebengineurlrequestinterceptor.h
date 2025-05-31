#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTINTERCEPTOR_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTINTERCEPTOR_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebEngineUrlRequestInfo QWebEngineUrlRequestInfo;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
#endif

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new();
QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p);
QMetaObject* QWebEngineUrlRequestInterceptor_MetaObject(const QWebEngineUrlRequestInterceptor* self);
void* QWebEngineUrlRequestInterceptor_Metacast(QWebEngineUrlRequestInterceptor* self, const char* param1);
int QWebEngineUrlRequestInterceptor_Metacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3);
void QWebEngineUrlRequestInterceptor_OnMetacall(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
int QWebEngineUrlRequestInterceptor_QBaseMetacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3);
libqt_string QWebEngineUrlRequestInterceptor_Tr(const char* s);
void QWebEngineUrlRequestInterceptor_InterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info);
void QWebEngineUrlRequestInterceptor_OnInterceptRequest(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_QBaseInterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info);
libqt_string QWebEngineUrlRequestInterceptor_Tr2(const char* s, const char* c);
libqt_string QWebEngineUrlRequestInterceptor_Tr3(const char* s, const char* c, int n);
bool QWebEngineUrlRequestInterceptor_Event(QWebEngineUrlRequestInterceptor* self, QEvent* event);
void QWebEngineUrlRequestInterceptor_OnEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_QBaseEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event);
bool QWebEngineUrlRequestInterceptor_EventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event);
void QWebEngineUrlRequestInterceptor_OnEventFilter(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_QBaseEventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event);
void QWebEngineUrlRequestInterceptor_TimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event);
void QWebEngineUrlRequestInterceptor_OnTimerEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_QBaseTimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event);
void QWebEngineUrlRequestInterceptor_ChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event);
void QWebEngineUrlRequestInterceptor_OnChildEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_QBaseChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event);
void QWebEngineUrlRequestInterceptor_CustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event);
void QWebEngineUrlRequestInterceptor_OnCustomEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_QBaseCustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event);
void QWebEngineUrlRequestInterceptor_ConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_OnConnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_QBaseConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_DisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_OnDisconnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_QBaseDisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
QObject* QWebEngineUrlRequestInterceptor_Sender(const QWebEngineUrlRequestInterceptor* self);
void QWebEngineUrlRequestInterceptor_OnSender(const QWebEngineUrlRequestInterceptor* self, intptr_t slot);
QObject* QWebEngineUrlRequestInterceptor_QBaseSender(const QWebEngineUrlRequestInterceptor* self);
int QWebEngineUrlRequestInterceptor_SenderSignalIndex(const QWebEngineUrlRequestInterceptor* self);
void QWebEngineUrlRequestInterceptor_OnSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self, intptr_t slot);
int QWebEngineUrlRequestInterceptor_QBaseSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self);
int QWebEngineUrlRequestInterceptor_Receivers(const QWebEngineUrlRequestInterceptor* self, const char* signal);
void QWebEngineUrlRequestInterceptor_OnReceivers(const QWebEngineUrlRequestInterceptor* self, intptr_t slot);
int QWebEngineUrlRequestInterceptor_QBaseReceivers(const QWebEngineUrlRequestInterceptor* self, const char* signal);
bool QWebEngineUrlRequestInterceptor_IsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_OnIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_QBaseIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_Delete(QWebEngineUrlRequestInterceptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
