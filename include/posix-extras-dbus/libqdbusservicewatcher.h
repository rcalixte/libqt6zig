#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSSERVICEWATCHER_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSSERVICEWATCHER_H

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
typedef struct QDBusServiceWatcher QDBusServiceWatcher;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDBusServiceWatcher* QDBusServiceWatcher_new();
QDBusServiceWatcher* QDBusServiceWatcher_new2(const libqt_string service, const QDBusConnection* connection);
QDBusServiceWatcher* QDBusServiceWatcher_new3(QObject* parent);
QDBusServiceWatcher* QDBusServiceWatcher_new4(const libqt_string service, const QDBusConnection* connection, int watchMode);
QDBusServiceWatcher* QDBusServiceWatcher_new5(const libqt_string service, const QDBusConnection* connection, int watchMode, QObject* parent);
QMetaObject* QDBusServiceWatcher_MetaObject(const QDBusServiceWatcher* self);
void* QDBusServiceWatcher_Metacast(QDBusServiceWatcher* self, const char* param1);
int QDBusServiceWatcher_Metacall(QDBusServiceWatcher* self, int param1, int param2, void** param3);
libqt_string QDBusServiceWatcher_Tr(const char* s);
libqt_list /* of libqt_string */ QDBusServiceWatcher_WatchedServices(const QDBusServiceWatcher* self);
void QDBusServiceWatcher_SetWatchedServices(QDBusServiceWatcher* self, const libqt_list /* of libqt_string */ services);
void QDBusServiceWatcher_AddWatchedService(QDBusServiceWatcher* self, const libqt_string newService);
bool QDBusServiceWatcher_RemoveWatchedService(QDBusServiceWatcher* self, const libqt_string service);
int QDBusServiceWatcher_WatchMode(const QDBusServiceWatcher* self);
void QDBusServiceWatcher_SetWatchMode(QDBusServiceWatcher* self, int mode);
QDBusConnection* QDBusServiceWatcher_Connection(const QDBusServiceWatcher* self);
void QDBusServiceWatcher_SetConnection(QDBusServiceWatcher* self, const QDBusConnection* connection);
void QDBusServiceWatcher_ServiceRegistered(QDBusServiceWatcher* self, const libqt_string service);
void QDBusServiceWatcher_Connect_ServiceRegistered(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_ServiceUnregistered(QDBusServiceWatcher* self, const libqt_string service);
void QDBusServiceWatcher_Connect_ServiceUnregistered(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_ServiceOwnerChanged(QDBusServiceWatcher* self, const libqt_string service, const libqt_string oldOwner, const libqt_string newOwner);
void QDBusServiceWatcher_Connect_ServiceOwnerChanged(QDBusServiceWatcher* self, intptr_t slot);
libqt_string QDBusServiceWatcher_Tr2(const char* s, const char* c);
libqt_string QDBusServiceWatcher_Tr3(const char* s, const char* c, int n);
void QDBusServiceWatcher_OnMetacall(QDBusServiceWatcher* self, intptr_t slot);
int QDBusServiceWatcher_QBaseMetacall(QDBusServiceWatcher* self, int param1, int param2, void** param3);
bool QDBusServiceWatcher_Event(QDBusServiceWatcher* self, QEvent* event);
void QDBusServiceWatcher_OnEvent(QDBusServiceWatcher* self, intptr_t slot);
bool QDBusServiceWatcher_QBaseEvent(QDBusServiceWatcher* self, QEvent* event);
bool QDBusServiceWatcher_EventFilter(QDBusServiceWatcher* self, QObject* watched, QEvent* event);
void QDBusServiceWatcher_OnEventFilter(QDBusServiceWatcher* self, intptr_t slot);
bool QDBusServiceWatcher_QBaseEventFilter(QDBusServiceWatcher* self, QObject* watched, QEvent* event);
void QDBusServiceWatcher_TimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
void QDBusServiceWatcher_OnTimerEvent(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_QBaseTimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
void QDBusServiceWatcher_ChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
void QDBusServiceWatcher_OnChildEvent(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_QBaseChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
void QDBusServiceWatcher_CustomEvent(QDBusServiceWatcher* self, QEvent* event);
void QDBusServiceWatcher_OnCustomEvent(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_QBaseCustomEvent(QDBusServiceWatcher* self, QEvent* event);
void QDBusServiceWatcher_ConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
void QDBusServiceWatcher_OnConnectNotify(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_QBaseConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
void QDBusServiceWatcher_DisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
void QDBusServiceWatcher_OnDisconnectNotify(QDBusServiceWatcher* self, intptr_t slot);
void QDBusServiceWatcher_QBaseDisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
QObject* QDBusServiceWatcher_Sender(const QDBusServiceWatcher* self);
void QDBusServiceWatcher_OnSender(const QDBusServiceWatcher* self, intptr_t slot);
QObject* QDBusServiceWatcher_QBaseSender(const QDBusServiceWatcher* self);
int QDBusServiceWatcher_SenderSignalIndex(const QDBusServiceWatcher* self);
void QDBusServiceWatcher_OnSenderSignalIndex(const QDBusServiceWatcher* self, intptr_t slot);
int QDBusServiceWatcher_QBaseSenderSignalIndex(const QDBusServiceWatcher* self);
int QDBusServiceWatcher_Receivers(const QDBusServiceWatcher* self, const char* signal);
void QDBusServiceWatcher_OnReceivers(const QDBusServiceWatcher* self, intptr_t slot);
int QDBusServiceWatcher_QBaseReceivers(const QDBusServiceWatcher* self, const char* signal);
bool QDBusServiceWatcher_IsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal);
void QDBusServiceWatcher_OnIsSignalConnected(const QDBusServiceWatcher* self, intptr_t slot);
bool QDBusServiceWatcher_QBaseIsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal);
void QDBusServiceWatcher_Delete(QDBusServiceWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
