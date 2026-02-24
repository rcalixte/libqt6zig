#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLSCHEMEHANDLER_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLSCHEMEHANDLER_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
typedef struct QWebEngineUrlSchemeHandler QWebEngineUrlSchemeHandler;
#endif

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new();
QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new2(QObject* parent);
QMetaObject* QWebEngineUrlSchemeHandler_MetaObject(const QWebEngineUrlSchemeHandler* self);
void* QWebEngineUrlSchemeHandler_Metacast(QWebEngineUrlSchemeHandler* self, const char* param1);
int QWebEngineUrlSchemeHandler_Metacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3);
void QWebEngineUrlSchemeHandler_RequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1);
void QWebEngineUrlSchemeHandler_OnMetaObject(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
QMetaObject* QWebEngineUrlSchemeHandler_SuperMetaObject(const QWebEngineUrlSchemeHandler* self);
void QWebEngineUrlSchemeHandler_OnMetacast(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void* QWebEngineUrlSchemeHandler_SuperMetacast(QWebEngineUrlSchemeHandler* self, const char* param1);
void QWebEngineUrlSchemeHandler_OnMetacall(QWebEngineUrlSchemeHandler* self, intptr_t slot);
int QWebEngineUrlSchemeHandler_SuperMetacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3);
void QWebEngineUrlSchemeHandler_OnRequestStarted(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_SuperRequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1);
bool QWebEngineUrlSchemeHandler_Event(QWebEngineUrlSchemeHandler* self, QEvent* event);
void QWebEngineUrlSchemeHandler_OnEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_SuperEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
bool QWebEngineUrlSchemeHandler_EventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event);
void QWebEngineUrlSchemeHandler_OnEventFilter(QWebEngineUrlSchemeHandler* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_SuperEventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event);
void QWebEngineUrlSchemeHandler_TimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
void QWebEngineUrlSchemeHandler_OnTimerEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_SuperTimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
void QWebEngineUrlSchemeHandler_ChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
void QWebEngineUrlSchemeHandler_OnChildEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_SuperChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
void QWebEngineUrlSchemeHandler_CustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
void QWebEngineUrlSchemeHandler_OnCustomEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_SuperCustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
void QWebEngineUrlSchemeHandler_ConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_OnConnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_SuperConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_DisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_OnDisconnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_SuperDisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
QObject* QWebEngineUrlSchemeHandler_Sender(const QWebEngineUrlSchemeHandler* self);
void QWebEngineUrlSchemeHandler_OnSender(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
QObject* QWebEngineUrlSchemeHandler_SuperSender(const QWebEngineUrlSchemeHandler* self);
int QWebEngineUrlSchemeHandler_SenderSignalIndex(const QWebEngineUrlSchemeHandler* self);
void QWebEngineUrlSchemeHandler_OnSenderSignalIndex(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
int QWebEngineUrlSchemeHandler_SuperSenderSignalIndex(const QWebEngineUrlSchemeHandler* self);
int QWebEngineUrlSchemeHandler_Receivers(const QWebEngineUrlSchemeHandler* self, const char* signal);
void QWebEngineUrlSchemeHandler_OnReceivers(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
int QWebEngineUrlSchemeHandler_SuperReceivers(const QWebEngineUrlSchemeHandler* self, const char* signal);
bool QWebEngineUrlSchemeHandler_IsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_OnIsSignalConnected(const QWebEngineUrlSchemeHandler* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_SuperIsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_Delete(QWebEngineUrlSchemeHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
