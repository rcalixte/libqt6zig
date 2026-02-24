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
QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self);
void QObjectCleanupHandler_OnMetaObject(const QObjectCleanupHandler* self, intptr_t slot);
QMetaObject* QObjectCleanupHandler_SuperMetaObject(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_OnMetacast(QObjectCleanupHandler* self, intptr_t slot);
void* QObjectCleanupHandler_SuperMetacast(QObjectCleanupHandler* self, const char* param1);
void QObjectCleanupHandler_OnMetacall(QObjectCleanupHandler* self, intptr_t slot);
int QObjectCleanupHandler_SuperMetacall(QObjectCleanupHandler* self, int param1, int param2, void** param3);
bool QObjectCleanupHandler_Event(QObjectCleanupHandler* self, QEvent* event);
void QObjectCleanupHandler_OnEvent(QObjectCleanupHandler* self, intptr_t slot);
bool QObjectCleanupHandler_SuperEvent(QObjectCleanupHandler* self, QEvent* event);
bool QObjectCleanupHandler_EventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event);
void QObjectCleanupHandler_OnEventFilter(QObjectCleanupHandler* self, intptr_t slot);
bool QObjectCleanupHandler_SuperEventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event);
void QObjectCleanupHandler_TimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
void QObjectCleanupHandler_OnTimerEvent(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_SuperTimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
void QObjectCleanupHandler_ChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
void QObjectCleanupHandler_OnChildEvent(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_SuperChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
void QObjectCleanupHandler_CustomEvent(QObjectCleanupHandler* self, QEvent* event);
void QObjectCleanupHandler_OnCustomEvent(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_SuperCustomEvent(QObjectCleanupHandler* self, QEvent* event);
void QObjectCleanupHandler_ConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_OnConnectNotify(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_SuperConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_DisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_OnDisconnectNotify(QObjectCleanupHandler* self, intptr_t slot);
void QObjectCleanupHandler_SuperDisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
QObject* QObjectCleanupHandler_Sender(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_OnSender(const QObjectCleanupHandler* self, intptr_t slot);
QObject* QObjectCleanupHandler_SuperSender(const QObjectCleanupHandler* self);
int QObjectCleanupHandler_SenderSignalIndex(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_OnSenderSignalIndex(const QObjectCleanupHandler* self, intptr_t slot);
int QObjectCleanupHandler_SuperSenderSignalIndex(const QObjectCleanupHandler* self);
int QObjectCleanupHandler_Receivers(const QObjectCleanupHandler* self, const char* signal);
void QObjectCleanupHandler_OnReceivers(const QObjectCleanupHandler* self, intptr_t slot);
int QObjectCleanupHandler_SuperReceivers(const QObjectCleanupHandler* self, const char* signal);
bool QObjectCleanupHandler_IsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_OnIsSignalConnected(const QObjectCleanupHandler* self, intptr_t slot);
bool QObjectCleanupHandler_SuperIsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal);
void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
