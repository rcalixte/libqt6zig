#pragma once
#ifndef SRCC_LIBQGENERICPLUGIN_H
#define SRCC_LIBQGENERICPLUGIN_H

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
typedef struct QGenericPlugin QGenericPlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QGenericPlugin* QGenericPlugin_new();
QGenericPlugin* QGenericPlugin_new2(QObject* parent);
QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self);
void* QGenericPlugin_Metacast(QGenericPlugin* self, const char* param1);
int QGenericPlugin_Metacall(QGenericPlugin* self, int param1, int param2, void** param3);
QObject* QGenericPlugin_Create(QGenericPlugin* self, const libqt_string name, const libqt_string spec);
void QGenericPlugin_OnMetaObject(const QGenericPlugin* self, intptr_t slot);
QMetaObject* QGenericPlugin_SuperMetaObject(const QGenericPlugin* self);
void QGenericPlugin_OnMetacast(QGenericPlugin* self, intptr_t slot);
void* QGenericPlugin_SuperMetacast(QGenericPlugin* self, const char* param1);
void QGenericPlugin_OnMetacall(QGenericPlugin* self, intptr_t slot);
int QGenericPlugin_SuperMetacall(QGenericPlugin* self, int param1, int param2, void** param3);
void QGenericPlugin_OnCreate(QGenericPlugin* self, intptr_t slot);
QObject* QGenericPlugin_SuperCreate(QGenericPlugin* self, const libqt_string name, const libqt_string spec);
bool QGenericPlugin_Event(QGenericPlugin* self, QEvent* event);
void QGenericPlugin_OnEvent(QGenericPlugin* self, intptr_t slot);
bool QGenericPlugin_SuperEvent(QGenericPlugin* self, QEvent* event);
bool QGenericPlugin_EventFilter(QGenericPlugin* self, QObject* watched, QEvent* event);
void QGenericPlugin_OnEventFilter(QGenericPlugin* self, intptr_t slot);
bool QGenericPlugin_SuperEventFilter(QGenericPlugin* self, QObject* watched, QEvent* event);
void QGenericPlugin_TimerEvent(QGenericPlugin* self, QTimerEvent* event);
void QGenericPlugin_OnTimerEvent(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_SuperTimerEvent(QGenericPlugin* self, QTimerEvent* event);
void QGenericPlugin_ChildEvent(QGenericPlugin* self, QChildEvent* event);
void QGenericPlugin_OnChildEvent(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_SuperChildEvent(QGenericPlugin* self, QChildEvent* event);
void QGenericPlugin_CustomEvent(QGenericPlugin* self, QEvent* event);
void QGenericPlugin_OnCustomEvent(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_SuperCustomEvent(QGenericPlugin* self, QEvent* event);
void QGenericPlugin_ConnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
void QGenericPlugin_OnConnectNotify(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_SuperConnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
void QGenericPlugin_DisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
void QGenericPlugin_OnDisconnectNotify(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_SuperDisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
QObject* QGenericPlugin_Sender(const QGenericPlugin* self);
void QGenericPlugin_OnSender(const QGenericPlugin* self, intptr_t slot);
QObject* QGenericPlugin_SuperSender(const QGenericPlugin* self);
int QGenericPlugin_SenderSignalIndex(const QGenericPlugin* self);
void QGenericPlugin_OnSenderSignalIndex(const QGenericPlugin* self, intptr_t slot);
int QGenericPlugin_SuperSenderSignalIndex(const QGenericPlugin* self);
int QGenericPlugin_Receivers(const QGenericPlugin* self, const char* signal);
void QGenericPlugin_OnReceivers(const QGenericPlugin* self, intptr_t slot);
int QGenericPlugin_SuperReceivers(const QGenericPlugin* self, const char* signal);
bool QGenericPlugin_IsSignalConnected(const QGenericPlugin* self, const QMetaMethod* signal);
void QGenericPlugin_OnIsSignalConnected(const QGenericPlugin* self, intptr_t slot);
bool QGenericPlugin_SuperIsSignalConnected(const QGenericPlugin* self, const QMetaMethod* signal);
void QGenericPlugin_Delete(QGenericPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
