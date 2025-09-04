#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSCONNECTION_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSCONNECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusConnection QDBusConnection;
typedef struct QDBusConnectionInterface QDBusConnectionInterface;
typedef struct QDBusError QDBusError;
typedef struct QDBusMessage QDBusMessage;
typedef struct QDBusPendingCall QDBusPendingCall;
typedef struct QDBusVirtualObject QDBusVirtualObject;
typedef struct QObject QObject;
#endif

QDBusConnection* QDBusConnection_new(const libqt_string name);
QDBusConnection* QDBusConnection_new2(const QDBusConnection* other);
void QDBusConnection_OperatorAssign(QDBusConnection* self, const QDBusConnection* other);
void QDBusConnection_Swap(QDBusConnection* self, QDBusConnection* other);
bool QDBusConnection_IsConnected(const QDBusConnection* self);
libqt_string QDBusConnection_BaseService(const QDBusConnection* self);
QDBusError* QDBusConnection_LastError(const QDBusConnection* self);
libqt_string QDBusConnection_Name(const QDBusConnection* self);
int QDBusConnection_ConnectionCapabilities(const QDBusConnection* self);
bool QDBusConnection_Send(const QDBusConnection* self, const QDBusMessage* message);
bool QDBusConnection_CallWithCallback(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* returnMethod, const char* errorMethod);
bool QDBusConnection_CallWithCallback2(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* slot);
QDBusMessage* QDBusConnection_Call(const QDBusConnection* self, const QDBusMessage* message);
QDBusPendingCall* QDBusConnection_AsyncCall(const QDBusConnection* self, const QDBusMessage* message);
bool QDBusConnection_Connect(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, QObject* receiver, const char* slot);
bool QDBusConnection_Connect2(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_string signature, QObject* receiver, const char* slot);
bool QDBusConnection_Connect3(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_list /* of libqt_string */ argumentMatch, const libqt_string signature, QObject* receiver, const char* slot);
bool QDBusConnection_Disconnect(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, QObject* receiver, const char* slot);
bool QDBusConnection_Disconnect2(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_string signature, QObject* receiver, const char* slot);
bool QDBusConnection_Disconnect3(QDBusConnection* self, const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name, const libqt_list /* of libqt_string */ argumentMatch, const libqt_string signature, QObject* receiver, const char* slot);
bool QDBusConnection_RegisterObject(QDBusConnection* self, const libqt_string path, QObject* object);
bool QDBusConnection_RegisterObject2(QDBusConnection* self, const libqt_string path, const libqt_string interface, QObject* object);
void QDBusConnection_UnregisterObject(QDBusConnection* self, const libqt_string path);
QObject* QDBusConnection_ObjectRegisteredAt(const QDBusConnection* self, const libqt_string path);
bool QDBusConnection_RegisterVirtualObject(QDBusConnection* self, const libqt_string path, QDBusVirtualObject* object);
bool QDBusConnection_RegisterService(QDBusConnection* self, const libqt_string serviceName);
bool QDBusConnection_UnregisterService(QDBusConnection* self, const libqt_string serviceName);
QDBusConnectionInterface* QDBusConnection_Interface(const QDBusConnection* self);
void* QDBusConnection_InternalPointer(const QDBusConnection* self);
QDBusConnection* QDBusConnection_ConnectToBus(int typeVal, const libqt_string name);
QDBusConnection* QDBusConnection_ConnectToBus2(const libqt_string address, const libqt_string name);
QDBusConnection* QDBusConnection_ConnectToPeer(const libqt_string address, const libqt_string name);
void QDBusConnection_DisconnectFromBus(const libqt_string name);
void QDBusConnection_DisconnectFromPeer(const libqt_string name);
libqt_string QDBusConnection_LocalMachineId();
QDBusConnection* QDBusConnection_SessionBus();
QDBusConnection* QDBusConnection_SystemBus();
bool QDBusConnection_CallWithCallback5(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* returnMethod, const char* errorMethod, int timeout);
bool QDBusConnection_CallWithCallback4(const QDBusConnection* self, const QDBusMessage* message, QObject* receiver, const char* slot, int timeout);
QDBusMessage* QDBusConnection_Call2(const QDBusConnection* self, const QDBusMessage* message, int mode);
QDBusMessage* QDBusConnection_Call3(const QDBusConnection* self, const QDBusMessage* message, int mode, int timeout);
QDBusPendingCall* QDBusConnection_AsyncCall2(const QDBusConnection* self, const QDBusMessage* message, int timeout);
bool QDBusConnection_RegisterObject3(QDBusConnection* self, const libqt_string path, QObject* object, int options);
bool QDBusConnection_RegisterObject4(QDBusConnection* self, const libqt_string path, const libqt_string interface, QObject* object, int options);
void QDBusConnection_UnregisterObject2(QDBusConnection* self, const libqt_string path, int mode);
bool QDBusConnection_RegisterVirtualObject3(QDBusConnection* self, const libqt_string path, QDBusVirtualObject* object, int options);
void QDBusConnection_Delete(QDBusConnection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
