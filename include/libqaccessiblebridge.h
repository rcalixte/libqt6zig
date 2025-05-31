#pragma once
#ifndef SRCC_LIBQACCESSIBLEBRIDGE_H
#define SRCC_LIBQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAccessibleBridge QAccessibleBridge;
typedef struct QAccessibleBridgePlugin QAccessibleBridgePlugin;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, const QAccessibleBridge* param1);
void QAccessibleBridge_Delete(QAccessibleBridge* self);

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new();
QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent);
QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self);
void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1);
int QAccessibleBridgePlugin_Metacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3);
void QAccessibleBridgePlugin_OnMetacall(QAccessibleBridgePlugin* self, intptr_t slot);
int QAccessibleBridgePlugin_QBaseMetacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3);
libqt_string QAccessibleBridgePlugin_Tr(const char* s);
QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const libqt_string key);
void QAccessibleBridgePlugin_OnCreate(QAccessibleBridgePlugin* self, intptr_t slot);
QAccessibleBridge* QAccessibleBridgePlugin_QBaseCreate(QAccessibleBridgePlugin* self, const libqt_string key);
libqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c);
libqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n);
bool QAccessibleBridgePlugin_Event(QAccessibleBridgePlugin* self, QEvent* event);
void QAccessibleBridgePlugin_OnEvent(QAccessibleBridgePlugin* self, intptr_t slot);
bool QAccessibleBridgePlugin_QBaseEvent(QAccessibleBridgePlugin* self, QEvent* event);
bool QAccessibleBridgePlugin_EventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event);
void QAccessibleBridgePlugin_OnEventFilter(QAccessibleBridgePlugin* self, intptr_t slot);
bool QAccessibleBridgePlugin_QBaseEventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event);
void QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
void QAccessibleBridgePlugin_OnTimerEvent(QAccessibleBridgePlugin* self, intptr_t slot);
void QAccessibleBridgePlugin_QBaseTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
void QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
void QAccessibleBridgePlugin_OnChildEvent(QAccessibleBridgePlugin* self, intptr_t slot);
void QAccessibleBridgePlugin_QBaseChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
void QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
void QAccessibleBridgePlugin_OnCustomEvent(QAccessibleBridgePlugin* self, intptr_t slot);
void QAccessibleBridgePlugin_QBaseCustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
void QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
void QAccessibleBridgePlugin_OnConnectNotify(QAccessibleBridgePlugin* self, intptr_t slot);
void QAccessibleBridgePlugin_QBaseConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
void QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
void QAccessibleBridgePlugin_OnDisconnectNotify(QAccessibleBridgePlugin* self, intptr_t slot);
void QAccessibleBridgePlugin_QBaseDisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
QObject* QAccessibleBridgePlugin_Sender(const QAccessibleBridgePlugin* self);
void QAccessibleBridgePlugin_OnSender(const QAccessibleBridgePlugin* self, intptr_t slot);
QObject* QAccessibleBridgePlugin_QBaseSender(const QAccessibleBridgePlugin* self);
int QAccessibleBridgePlugin_SenderSignalIndex(const QAccessibleBridgePlugin* self);
void QAccessibleBridgePlugin_OnSenderSignalIndex(const QAccessibleBridgePlugin* self, intptr_t slot);
int QAccessibleBridgePlugin_QBaseSenderSignalIndex(const QAccessibleBridgePlugin* self);
int QAccessibleBridgePlugin_Receivers(const QAccessibleBridgePlugin* self, const char* signal);
void QAccessibleBridgePlugin_OnReceivers(const QAccessibleBridgePlugin* self, intptr_t slot);
int QAccessibleBridgePlugin_QBaseReceivers(const QAccessibleBridgePlugin* self, const char* signal);
bool QAccessibleBridgePlugin_IsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal);
void QAccessibleBridgePlugin_OnIsSignalConnected(const QAccessibleBridgePlugin* self, intptr_t slot);
bool QAccessibleBridgePlugin_QBaseIsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal);
void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
