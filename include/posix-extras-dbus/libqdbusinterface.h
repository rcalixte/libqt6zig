#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSINTERFACE_H

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
typedef struct QDBusAbstractInterface QDBusAbstractInterface;
typedef struct QDBusAbstractInterfaceBase QDBusAbstractInterfaceBase;
typedef struct QDBusConnection QDBusConnection;
typedef struct QDBusInterface QDBusInterface;
typedef struct QDBusMessage QDBusMessage;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QDBusInterface* QDBusInterface_new(const libqt_string service, const libqt_string path);
QDBusInterface* QDBusInterface_new2(const libqt_string service, const libqt_string path, const libqt_string interface);
QDBusInterface* QDBusInterface_new3(const libqt_string service, const libqt_string path, const libqt_string interface, const QDBusConnection* connection);
QDBusInterface* QDBusInterface_new4(const libqt_string service, const libqt_string path, const libqt_string interface, const QDBusConnection* connection, QObject* parent);
QMetaObject* QDBusInterface_MetaObject(const QDBusInterface* self);
void* QDBusInterface_Metacast(QDBusInterface* self, const char* param1);
int QDBusInterface_Metacall(QDBusInterface* self, int param1, int param2, void** param3);
void QDBusInterface_OnMetacall(QDBusInterface* self, intptr_t slot);
int QDBusInterface_QBaseMetacall(QDBusInterface* self, int param1, int param2, void** param3);
void QDBusInterface_ConnectNotify(QDBusInterface* self, const QMetaMethod* signal);
void QDBusInterface_OnConnectNotify(QDBusInterface* self, intptr_t slot);
void QDBusInterface_QBaseConnectNotify(QDBusInterface* self, const QMetaMethod* signal);
void QDBusInterface_DisconnectNotify(QDBusInterface* self, const QMetaMethod* signal);
void QDBusInterface_OnDisconnectNotify(QDBusInterface* self, intptr_t slot);
void QDBusInterface_QBaseDisconnectNotify(QDBusInterface* self, const QMetaMethod* signal);
bool QDBusInterface_Event(QDBusInterface* self, QEvent* event);
void QDBusInterface_OnEvent(QDBusInterface* self, intptr_t slot);
bool QDBusInterface_QBaseEvent(QDBusInterface* self, QEvent* event);
bool QDBusInterface_EventFilter(QDBusInterface* self, QObject* watched, QEvent* event);
void QDBusInterface_OnEventFilter(QDBusInterface* self, intptr_t slot);
bool QDBusInterface_QBaseEventFilter(QDBusInterface* self, QObject* watched, QEvent* event);
void QDBusInterface_TimerEvent(QDBusInterface* self, QTimerEvent* event);
void QDBusInterface_OnTimerEvent(QDBusInterface* self, intptr_t slot);
void QDBusInterface_QBaseTimerEvent(QDBusInterface* self, QTimerEvent* event);
void QDBusInterface_ChildEvent(QDBusInterface* self, QChildEvent* event);
void QDBusInterface_OnChildEvent(QDBusInterface* self, intptr_t slot);
void QDBusInterface_QBaseChildEvent(QDBusInterface* self, QChildEvent* event);
void QDBusInterface_CustomEvent(QDBusInterface* self, QEvent* event);
void QDBusInterface_OnCustomEvent(QDBusInterface* self, intptr_t slot);
void QDBusInterface_QBaseCustomEvent(QDBusInterface* self, QEvent* event);
QVariant* QDBusInterface_InternalPropGet(const QDBusInterface* self, const char* propname);
void QDBusInterface_OnInternalPropGet(const QDBusInterface* self, intptr_t slot);
QVariant* QDBusInterface_QBaseInternalPropGet(const QDBusInterface* self, const char* propname);
void QDBusInterface_InternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value);
void QDBusInterface_OnInternalPropSet(QDBusInterface* self, intptr_t slot);
void QDBusInterface_QBaseInternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value);
QDBusMessage* QDBusInterface_InternalConstCall(const QDBusInterface* self, int mode, const libqt_string method);
void QDBusInterface_OnInternalConstCall(const QDBusInterface* self, intptr_t slot);
QDBusMessage* QDBusInterface_QBaseInternalConstCall(const QDBusInterface* self, int mode, const libqt_string method);
QObject* QDBusInterface_Sender(const QDBusInterface* self);
void QDBusInterface_OnSender(const QDBusInterface* self, intptr_t slot);
QObject* QDBusInterface_QBaseSender(const QDBusInterface* self);
int QDBusInterface_SenderSignalIndex(const QDBusInterface* self);
void QDBusInterface_OnSenderSignalIndex(const QDBusInterface* self, intptr_t slot);
int QDBusInterface_QBaseSenderSignalIndex(const QDBusInterface* self);
int QDBusInterface_Receivers(const QDBusInterface* self, const char* signal);
void QDBusInterface_OnReceivers(const QDBusInterface* self, intptr_t slot);
int QDBusInterface_QBaseReceivers(const QDBusInterface* self, const char* signal);
bool QDBusInterface_IsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal);
void QDBusInterface_OnIsSignalConnected(const QDBusInterface* self, intptr_t slot);
bool QDBusInterface_QBaseIsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal);
void QDBusInterface_Delete(QDBusInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
