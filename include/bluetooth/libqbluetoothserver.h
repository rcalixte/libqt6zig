#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHSERVER_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBluetoothAddress QBluetoothAddress;
typedef struct QBluetoothServer QBluetoothServer;
typedef struct QBluetoothServiceInfo QBluetoothServiceInfo;
typedef struct QBluetoothSocket QBluetoothSocket;
typedef struct QBluetoothUuid QBluetoothUuid;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBluetoothServer* QBluetoothServer_new(int serverType);
QBluetoothServer* QBluetoothServer_new2(int serverType, QObject* parent);
QMetaObject* QBluetoothServer_MetaObject(const QBluetoothServer* self);
void* QBluetoothServer_Metacast(QBluetoothServer* self, const char* param1);
int QBluetoothServer_Metacall(QBluetoothServer* self, int param1, int param2, void** param3);
void QBluetoothServer_Close(QBluetoothServer* self);
bool QBluetoothServer_Listen(QBluetoothServer* self);
QBluetoothServiceInfo* QBluetoothServer_Listen2(QBluetoothServer* self, const QBluetoothUuid* uuid);
bool QBluetoothServer_IsListening(const QBluetoothServer* self);
void QBluetoothServer_SetMaxPendingConnections(QBluetoothServer* self, int numConnections);
int QBluetoothServer_MaxPendingConnections(const QBluetoothServer* self);
bool QBluetoothServer_HasPendingConnections(const QBluetoothServer* self);
QBluetoothSocket* QBluetoothServer_NextPendingConnection(QBluetoothServer* self);
QBluetoothAddress* QBluetoothServer_ServerAddress(const QBluetoothServer* self);
uint16_t QBluetoothServer_ServerPort(const QBluetoothServer* self);
void QBluetoothServer_SetSecurityFlags(QBluetoothServer* self, int security);
int QBluetoothServer_SecurityFlags(const QBluetoothServer* self);
int QBluetoothServer_ServerType(const QBluetoothServer* self);
int QBluetoothServer_Error(const QBluetoothServer* self);
void QBluetoothServer_NewConnection(QBluetoothServer* self);
void QBluetoothServer_Connect_NewConnection(QBluetoothServer* self, intptr_t slot);
void QBluetoothServer_ErrorOccurred(QBluetoothServer* self, int errorVal);
void QBluetoothServer_Connect_ErrorOccurred(QBluetoothServer* self, intptr_t slot);
bool QBluetoothServer_Listen1(QBluetoothServer* self, const QBluetoothAddress* address);
bool QBluetoothServer_Listen22(QBluetoothServer* self, const QBluetoothAddress* address, uint16_t port);
QBluetoothServiceInfo* QBluetoothServer_Listen23(QBluetoothServer* self, const QBluetoothUuid* uuid, const libqt_string serviceName);
void QBluetoothServer_OnMetaObject(const QBluetoothServer* self, intptr_t slot);
QMetaObject* QBluetoothServer_SuperMetaObject(const QBluetoothServer* self);
void QBluetoothServer_OnMetacast(QBluetoothServer* self, intptr_t slot);
void* QBluetoothServer_SuperMetacast(QBluetoothServer* self, const char* param1);
void QBluetoothServer_OnMetacall(QBluetoothServer* self, intptr_t slot);
int QBluetoothServer_SuperMetacall(QBluetoothServer* self, int param1, int param2, void** param3);
bool QBluetoothServer_Event(QBluetoothServer* self, QEvent* event);
void QBluetoothServer_OnEvent(QBluetoothServer* self, intptr_t slot);
bool QBluetoothServer_SuperEvent(QBluetoothServer* self, QEvent* event);
bool QBluetoothServer_EventFilter(QBluetoothServer* self, QObject* watched, QEvent* event);
void QBluetoothServer_OnEventFilter(QBluetoothServer* self, intptr_t slot);
bool QBluetoothServer_SuperEventFilter(QBluetoothServer* self, QObject* watched, QEvent* event);
void QBluetoothServer_TimerEvent(QBluetoothServer* self, QTimerEvent* event);
void QBluetoothServer_OnTimerEvent(QBluetoothServer* self, intptr_t slot);
void QBluetoothServer_SuperTimerEvent(QBluetoothServer* self, QTimerEvent* event);
void QBluetoothServer_ChildEvent(QBluetoothServer* self, QChildEvent* event);
void QBluetoothServer_OnChildEvent(QBluetoothServer* self, intptr_t slot);
void QBluetoothServer_SuperChildEvent(QBluetoothServer* self, QChildEvent* event);
void QBluetoothServer_CustomEvent(QBluetoothServer* self, QEvent* event);
void QBluetoothServer_OnCustomEvent(QBluetoothServer* self, intptr_t slot);
void QBluetoothServer_SuperCustomEvent(QBluetoothServer* self, QEvent* event);
void QBluetoothServer_ConnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
void QBluetoothServer_OnConnectNotify(QBluetoothServer* self, intptr_t slot);
void QBluetoothServer_SuperConnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
void QBluetoothServer_DisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
void QBluetoothServer_OnDisconnectNotify(QBluetoothServer* self, intptr_t slot);
void QBluetoothServer_SuperDisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal);
QObject* QBluetoothServer_Sender(const QBluetoothServer* self);
void QBluetoothServer_OnSender(const QBluetoothServer* self, intptr_t slot);
QObject* QBluetoothServer_SuperSender(const QBluetoothServer* self);
int QBluetoothServer_SenderSignalIndex(const QBluetoothServer* self);
void QBluetoothServer_OnSenderSignalIndex(const QBluetoothServer* self, intptr_t slot);
int QBluetoothServer_SuperSenderSignalIndex(const QBluetoothServer* self);
int QBluetoothServer_Receivers(const QBluetoothServer* self, const char* signal);
void QBluetoothServer_OnReceivers(const QBluetoothServer* self, intptr_t slot);
int QBluetoothServer_SuperReceivers(const QBluetoothServer* self, const char* signal);
bool QBluetoothServer_IsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal);
void QBluetoothServer_OnIsSignalConnected(const QBluetoothServer* self, intptr_t slot);
bool QBluetoothServer_SuperIsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal);
void QBluetoothServer_Delete(QBluetoothServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
