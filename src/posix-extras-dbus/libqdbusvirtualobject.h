#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSVIRTUALOBJECT_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSVIRTUALOBJECT_H

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
typedef struct QDBusMessage QDBusMessage;
typedef struct QDBusVirtualObject QDBusVirtualObject;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDBusVirtualObject* QDBusVirtualObject_new();
QDBusVirtualObject* QDBusVirtualObject_new2(QObject* parent);
QMetaObject* QDBusVirtualObject_MetaObject(const QDBusVirtualObject* self);
void* QDBusVirtualObject_Metacast(QDBusVirtualObject* self, const char* param1);
int QDBusVirtualObject_Metacall(QDBusVirtualObject* self, int param1, int param2, void** param3);
libqt_string QDBusVirtualObject_Introspect(const QDBusVirtualObject* self, const libqt_string path);
bool QDBusVirtualObject_HandleMessage(QDBusVirtualObject* self, const QDBusMessage* message, const QDBusConnection* connection);
void QDBusVirtualObject_OnMetaObject(const QDBusVirtualObject* self, intptr_t slot);
QMetaObject* QDBusVirtualObject_SuperMetaObject(const QDBusVirtualObject* self);
void QDBusVirtualObject_OnMetacast(QDBusVirtualObject* self, intptr_t slot);
void* QDBusVirtualObject_SuperMetacast(QDBusVirtualObject* self, const char* param1);
void QDBusVirtualObject_OnMetacall(QDBusVirtualObject* self, intptr_t slot);
int QDBusVirtualObject_SuperMetacall(QDBusVirtualObject* self, int param1, int param2, void** param3);
void QDBusVirtualObject_OnIntrospect(const QDBusVirtualObject* self, intptr_t slot);
libqt_string QDBusVirtualObject_SuperIntrospect(const QDBusVirtualObject* self, const libqt_string path);
void QDBusVirtualObject_OnHandleMessage(QDBusVirtualObject* self, intptr_t slot);
bool QDBusVirtualObject_SuperHandleMessage(QDBusVirtualObject* self, const QDBusMessage* message, const QDBusConnection* connection);
bool QDBusVirtualObject_Event(QDBusVirtualObject* self, QEvent* event);
void QDBusVirtualObject_OnEvent(QDBusVirtualObject* self, intptr_t slot);
bool QDBusVirtualObject_SuperEvent(QDBusVirtualObject* self, QEvent* event);
bool QDBusVirtualObject_EventFilter(QDBusVirtualObject* self, QObject* watched, QEvent* event);
void QDBusVirtualObject_OnEventFilter(QDBusVirtualObject* self, intptr_t slot);
bool QDBusVirtualObject_SuperEventFilter(QDBusVirtualObject* self, QObject* watched, QEvent* event);
void QDBusVirtualObject_TimerEvent(QDBusVirtualObject* self, QTimerEvent* event);
void QDBusVirtualObject_OnTimerEvent(QDBusVirtualObject* self, intptr_t slot);
void QDBusVirtualObject_SuperTimerEvent(QDBusVirtualObject* self, QTimerEvent* event);
void QDBusVirtualObject_ChildEvent(QDBusVirtualObject* self, QChildEvent* event);
void QDBusVirtualObject_OnChildEvent(QDBusVirtualObject* self, intptr_t slot);
void QDBusVirtualObject_SuperChildEvent(QDBusVirtualObject* self, QChildEvent* event);
void QDBusVirtualObject_CustomEvent(QDBusVirtualObject* self, QEvent* event);
void QDBusVirtualObject_OnCustomEvent(QDBusVirtualObject* self, intptr_t slot);
void QDBusVirtualObject_SuperCustomEvent(QDBusVirtualObject* self, QEvent* event);
void QDBusVirtualObject_ConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
void QDBusVirtualObject_OnConnectNotify(QDBusVirtualObject* self, intptr_t slot);
void QDBusVirtualObject_SuperConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
void QDBusVirtualObject_DisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
void QDBusVirtualObject_OnDisconnectNotify(QDBusVirtualObject* self, intptr_t slot);
void QDBusVirtualObject_SuperDisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
QObject* QDBusVirtualObject_Sender(const QDBusVirtualObject* self);
void QDBusVirtualObject_OnSender(const QDBusVirtualObject* self, intptr_t slot);
QObject* QDBusVirtualObject_SuperSender(const QDBusVirtualObject* self);
int QDBusVirtualObject_SenderSignalIndex(const QDBusVirtualObject* self);
void QDBusVirtualObject_OnSenderSignalIndex(const QDBusVirtualObject* self, intptr_t slot);
int QDBusVirtualObject_SuperSenderSignalIndex(const QDBusVirtualObject* self);
int QDBusVirtualObject_Receivers(const QDBusVirtualObject* self, const char* signal);
void QDBusVirtualObject_OnReceivers(const QDBusVirtualObject* self, intptr_t slot);
int QDBusVirtualObject_SuperReceivers(const QDBusVirtualObject* self, const char* signal);
bool QDBusVirtualObject_IsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal);
void QDBusVirtualObject_OnIsSignalConnected(const QDBusVirtualObject* self, intptr_t slot);
bool QDBusVirtualObject_SuperIsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal);
void QDBusVirtualObject_Delete(QDBusVirtualObject* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
