#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLSCHEMEHANDLER_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLSCHEMEHANDLER_H

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
typedef struct QVariant QVariant;
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
typedef struct QWebEngineUrlSchemeHandler QWebEngineUrlSchemeHandler;
#endif

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new();
QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new2(QObject* parent);
QMetaObject* QWebEngineUrlSchemeHandler_MetaObject(const QWebEngineUrlSchemeHandler* self);
void* QWebEngineUrlSchemeHandler_Metacast(QWebEngineUrlSchemeHandler* self, const char* param1);
int QWebEngineUrlSchemeHandler_Metacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3);
void QWebEngineUrlSchemeHandler_OnMetacall(QWebEngineUrlSchemeHandler* self, intptr_t slot);
int QWebEngineUrlSchemeHandler_QBaseMetacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3);
libqt_string QWebEngineUrlSchemeHandler_Tr(const char* s);
void QWebEngineUrlSchemeHandler_RequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1);
void QWebEngineUrlSchemeHandler_OnRequestStarted(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_QBaseRequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1);
libqt_string QWebEngineUrlSchemeHandler_Tr2(const char* s, const char* c);
libqt_string QWebEngineUrlSchemeHandler_Tr3(const char* s, const char* c, int n);
bool QWebEngineUrlSchemeHandler_Event(QWebEngineUrlSchemeHandler* self, QEvent* event);
void QWebEngineUrlSchemeHandler_OnEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_QBaseEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
bool QWebEngineUrlSchemeHandler_EventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event);
void QWebEngineUrlSchemeHandler_OnEventFilter(QWebEngineUrlSchemeHandler* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_QBaseEventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event);
void QWebEngineUrlSchemeHandler_TimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
void QWebEngineUrlSchemeHandler_OnTimerEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_QBaseTimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
void QWebEngineUrlSchemeHandler_ChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
void QWebEngineUrlSchemeHandler_OnChildEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_QBaseChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
void QWebEngineUrlSchemeHandler_CustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
void QWebEngineUrlSchemeHandler_OnCustomEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_QBaseCustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
void QWebEngineUrlSchemeHandler_ConnectNotify(QWebEngineUrlSchemeHandler* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_OnConnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_QBaseConnectNotify(QWebEngineUrlSchemeHandler* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_DisconnectNotify(QWebEngineUrlSchemeHandler* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_OnDisconnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_QBaseDisconnectNotify(QWebEngineUrlSchemeHandler* self, QMetaMethod* signal);
QObject* QWebEngineUrlSchemeHandler_Sender(const QWebEngineUrlSchemeHandler* self);
void QWebEngineUrlSchemeHandler_OnSender(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
QObject* QWebEngineUrlSchemeHandler_QBaseSender(const QWebEngineUrlSchemeHandler* self);
int QWebEngineUrlSchemeHandler_SenderSignalIndex(const QWebEngineUrlSchemeHandler* self);
void QWebEngineUrlSchemeHandler_OnSenderSignalIndex(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
int QWebEngineUrlSchemeHandler_QBaseSenderSignalIndex(const QWebEngineUrlSchemeHandler* self);
int QWebEngineUrlSchemeHandler_Receivers(const QWebEngineUrlSchemeHandler* self, const char* signal);
void QWebEngineUrlSchemeHandler_OnReceivers(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
int QWebEngineUrlSchemeHandler_QBaseReceivers(const QWebEngineUrlSchemeHandler* self, const char* signal);
bool QWebEngineUrlSchemeHandler_IsSignalConnected(const QWebEngineUrlSchemeHandler* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_OnIsSignalConnected(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_QBaseIsSignalConnected(const QWebEngineUrlSchemeHandler* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_Delete(QWebEngineUrlSchemeHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
