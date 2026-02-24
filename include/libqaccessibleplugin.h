#pragma once
#ifndef SRCC_LIBQACCESSIBLEPLUGIN_H
#define SRCC_LIBQACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessiblePlugin QAccessiblePlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAccessiblePlugin* QAccessiblePlugin_new();
QAccessiblePlugin* QAccessiblePlugin_new2(QObject* parent);
QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self);
void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1);
int QAccessiblePlugin_Metacall(QAccessiblePlugin* self, int param1, int param2, void** param3);
QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, const libqt_string key, QObject* object);
void QAccessiblePlugin_OnMetaObject(const QAccessiblePlugin* self, intptr_t slot);
QMetaObject* QAccessiblePlugin_SuperMetaObject(const QAccessiblePlugin* self);
void QAccessiblePlugin_OnMetacast(QAccessiblePlugin* self, intptr_t slot);
void* QAccessiblePlugin_SuperMetacast(QAccessiblePlugin* self, const char* param1);
void QAccessiblePlugin_OnMetacall(QAccessiblePlugin* self, intptr_t slot);
int QAccessiblePlugin_SuperMetacall(QAccessiblePlugin* self, int param1, int param2, void** param3);
void QAccessiblePlugin_OnCreate(QAccessiblePlugin* self, intptr_t slot);
QAccessibleInterface* QAccessiblePlugin_SuperCreate(QAccessiblePlugin* self, const libqt_string key, QObject* object);
bool QAccessiblePlugin_Event(QAccessiblePlugin* self, QEvent* event);
void QAccessiblePlugin_OnEvent(QAccessiblePlugin* self, intptr_t slot);
bool QAccessiblePlugin_SuperEvent(QAccessiblePlugin* self, QEvent* event);
bool QAccessiblePlugin_EventFilter(QAccessiblePlugin* self, QObject* watched, QEvent* event);
void QAccessiblePlugin_OnEventFilter(QAccessiblePlugin* self, intptr_t slot);
bool QAccessiblePlugin_SuperEventFilter(QAccessiblePlugin* self, QObject* watched, QEvent* event);
void QAccessiblePlugin_TimerEvent(QAccessiblePlugin* self, QTimerEvent* event);
void QAccessiblePlugin_OnTimerEvent(QAccessiblePlugin* self, intptr_t slot);
void QAccessiblePlugin_SuperTimerEvent(QAccessiblePlugin* self, QTimerEvent* event);
void QAccessiblePlugin_ChildEvent(QAccessiblePlugin* self, QChildEvent* event);
void QAccessiblePlugin_OnChildEvent(QAccessiblePlugin* self, intptr_t slot);
void QAccessiblePlugin_SuperChildEvent(QAccessiblePlugin* self, QChildEvent* event);
void QAccessiblePlugin_CustomEvent(QAccessiblePlugin* self, QEvent* event);
void QAccessiblePlugin_OnCustomEvent(QAccessiblePlugin* self, intptr_t slot);
void QAccessiblePlugin_SuperCustomEvent(QAccessiblePlugin* self, QEvent* event);
void QAccessiblePlugin_ConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
void QAccessiblePlugin_OnConnectNotify(QAccessiblePlugin* self, intptr_t slot);
void QAccessiblePlugin_SuperConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
void QAccessiblePlugin_DisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
void QAccessiblePlugin_OnDisconnectNotify(QAccessiblePlugin* self, intptr_t slot);
void QAccessiblePlugin_SuperDisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
QObject* QAccessiblePlugin_Sender(const QAccessiblePlugin* self);
void QAccessiblePlugin_OnSender(const QAccessiblePlugin* self, intptr_t slot);
QObject* QAccessiblePlugin_SuperSender(const QAccessiblePlugin* self);
int QAccessiblePlugin_SenderSignalIndex(const QAccessiblePlugin* self);
void QAccessiblePlugin_OnSenderSignalIndex(const QAccessiblePlugin* self, intptr_t slot);
int QAccessiblePlugin_SuperSenderSignalIndex(const QAccessiblePlugin* self);
int QAccessiblePlugin_Receivers(const QAccessiblePlugin* self, const char* signal);
void QAccessiblePlugin_OnReceivers(const QAccessiblePlugin* self, intptr_t slot);
int QAccessiblePlugin_SuperReceivers(const QAccessiblePlugin* self, const char* signal);
bool QAccessiblePlugin_IsSignalConnected(const QAccessiblePlugin* self, const QMetaMethod* signal);
void QAccessiblePlugin_OnIsSignalConnected(const QAccessiblePlugin* self, intptr_t slot);
bool QAccessiblePlugin_SuperIsSignalConnected(const QAccessiblePlugin* self, const QMetaMethod* signal);
void QAccessiblePlugin_Delete(QAccessiblePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
