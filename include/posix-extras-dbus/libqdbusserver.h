#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSSERVER_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSSERVER_H

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
typedef struct QDBusConnection QDBusConnection;
typedef struct QDBusError QDBusError;
typedef struct QDBusServer QDBusServer;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDBusServer* QDBusServer_new(const libqt_string address);
QDBusServer* QDBusServer_new2();
QDBusServer* QDBusServer_new3(const libqt_string address, QObject* parent);
QDBusServer* QDBusServer_new4(QObject* parent);
QMetaObject* QDBusServer_MetaObject(const QDBusServer* self);
void* QDBusServer_Metacast(QDBusServer* self, const char* param1);
int QDBusServer_Metacall(QDBusServer* self, int param1, int param2, void** param3);
libqt_string QDBusServer_Tr(const char* s);
bool QDBusServer_IsConnected(const QDBusServer* self);
QDBusError* QDBusServer_LastError(const QDBusServer* self);
libqt_string QDBusServer_Address(const QDBusServer* self);
void QDBusServer_SetAnonymousAuthenticationAllowed(QDBusServer* self, bool value);
bool QDBusServer_IsAnonymousAuthenticationAllowed(const QDBusServer* self);
void QDBusServer_NewConnection(QDBusServer* self, const QDBusConnection* connection);
void QDBusServer_Connect_NewConnection(QDBusServer* self, intptr_t slot);
libqt_string QDBusServer_Tr2(const char* s, const char* c);
libqt_string QDBusServer_Tr3(const char* s, const char* c, int n);
void QDBusServer_OnMetacall(QDBusServer* self, intptr_t slot);
int QDBusServer_QBaseMetacall(QDBusServer* self, int param1, int param2, void** param3);
bool QDBusServer_Event(QDBusServer* self, QEvent* event);
void QDBusServer_OnEvent(QDBusServer* self, intptr_t slot);
bool QDBusServer_QBaseEvent(QDBusServer* self, QEvent* event);
bool QDBusServer_EventFilter(QDBusServer* self, QObject* watched, QEvent* event);
void QDBusServer_OnEventFilter(QDBusServer* self, intptr_t slot);
bool QDBusServer_QBaseEventFilter(QDBusServer* self, QObject* watched, QEvent* event);
void QDBusServer_TimerEvent(QDBusServer* self, QTimerEvent* event);
void QDBusServer_OnTimerEvent(QDBusServer* self, intptr_t slot);
void QDBusServer_QBaseTimerEvent(QDBusServer* self, QTimerEvent* event);
void QDBusServer_ChildEvent(QDBusServer* self, QChildEvent* event);
void QDBusServer_OnChildEvent(QDBusServer* self, intptr_t slot);
void QDBusServer_QBaseChildEvent(QDBusServer* self, QChildEvent* event);
void QDBusServer_CustomEvent(QDBusServer* self, QEvent* event);
void QDBusServer_OnCustomEvent(QDBusServer* self, intptr_t slot);
void QDBusServer_QBaseCustomEvent(QDBusServer* self, QEvent* event);
void QDBusServer_ConnectNotify(QDBusServer* self, const QMetaMethod* signal);
void QDBusServer_OnConnectNotify(QDBusServer* self, intptr_t slot);
void QDBusServer_QBaseConnectNotify(QDBusServer* self, const QMetaMethod* signal);
void QDBusServer_DisconnectNotify(QDBusServer* self, const QMetaMethod* signal);
void QDBusServer_OnDisconnectNotify(QDBusServer* self, intptr_t slot);
void QDBusServer_QBaseDisconnectNotify(QDBusServer* self, const QMetaMethod* signal);
QObject* QDBusServer_Sender(const QDBusServer* self);
void QDBusServer_OnSender(const QDBusServer* self, intptr_t slot);
QObject* QDBusServer_QBaseSender(const QDBusServer* self);
int QDBusServer_SenderSignalIndex(const QDBusServer* self);
void QDBusServer_OnSenderSignalIndex(const QDBusServer* self, intptr_t slot);
int QDBusServer_QBaseSenderSignalIndex(const QDBusServer* self);
int QDBusServer_Receivers(const QDBusServer* self, const char* signal);
void QDBusServer_OnReceivers(const QDBusServer* self, intptr_t slot);
int QDBusServer_QBaseReceivers(const QDBusServer* self, const char* signal);
bool QDBusServer_IsSignalConnected(const QDBusServer* self, const QMetaMethod* signal);
void QDBusServer_OnIsSignalConnected(const QDBusServer* self, intptr_t slot);
bool QDBusServer_QBaseIsSignalConnected(const QDBusServer* self, const QMetaMethod* signal);
void QDBusServer_Delete(QDBusServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
