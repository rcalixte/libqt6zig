#pragma once
#ifndef SRCC_LIBQOBJECTCLEANUPHANDLER_H
#define SRCC_LIBQOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QObjectCleanupHandler QObjectCleanupHandler;
typedef struct QTimerEvent QTimerEvent;
#endif

QObjectCleanupHandler* QObjectCleanupHandler_new();
QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self);
void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1);
int QObjectCleanupHandler_Metacall(QObjectCleanupHandler* self, int param1, int param2, void** param3);
libqt_string QObjectCleanupHandler_Tr(const char* s);
QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self);
libqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c);
libqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n);
void QObjectCleanupHandler_OnMetacall(QObjectCleanupHandler* self, intptr_t slot);
int QObjectCleanupHandler_QBaseMetacall(QObjectCleanupHandler* self, int param1, int param2, void** param3);
bool QObjectCleanupHandler_Event(QObjectCleanupHandler* self, QEvent* event);
void QObjectCleanupHandler_OnEvent(QObjectCleanupHandler* self, intptr_t slot);
bool QObjectCleanupHandler_QBaseEvent(QObjectCleanupHandler* self, QEvent* event);
bool QObjectCleanupHandler_EventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event);
void QObjectCleanupHandler_OnEventFilter(QObjectCleanupHandler* self, intptr_t slot);
bool QObjectCleanupHandler_QBaseEventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event);
void QObjectCleanupHandler_TimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
void QObjectCleanupHandler_OnTimerEvent(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_QBaseTimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
void QObjectCleanupHandler_ChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
void QObjectCleanupHandler_OnChildEvent(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_QBaseChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
void QObjectCleanupHandler_CustomEvent(QObjectCleanupHandler* self, QEvent* event);
void QObjectCleanupHandler_OnCustomEvent(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_QBaseCustomEvent(QObjectCleanupHandler* self, QEvent* event);
void QObjectCleanupHandler_ConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_OnConnectNotify(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_QBaseConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_DisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_OnDisconnectNotify(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_QBaseDisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
QObject* QObjectCleanupHandler_Sender(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_OnSender(const QObjectCleanupHandler* self, intptr_t slot);
QObject* QObjectCleanupHandler_QBaseSender(const QObjectCleanupHandler* self);
int QObjectCleanupHandler_SenderSignalIndex(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_OnSenderSignalIndex(const QObjectCleanupHandler* self, intptr_t slot);
int QObjectCleanupHandler_QBaseSenderSignalIndex(const QObjectCleanupHandler* self);
int QObjectCleanupHandler_Receivers(const QObjectCleanupHandler* self, const char* signal);
void QObjectCleanupHandler_OnReceivers(const QObjectCleanupHandler* self, intptr_t slot);
int QObjectCleanupHandler_QBaseReceivers(const QObjectCleanupHandler* self, const char* signal);
bool QObjectCleanupHandler_IsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_OnIsSignalConnected(const QObjectCleanupHandler* self, intptr_t slot);
bool QObjectCleanupHandler_QBaseIsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
