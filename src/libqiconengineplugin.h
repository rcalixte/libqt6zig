#pragma once
#ifndef SRCC_LIBQICONENGINEPLUGIN_H
#define SRCC_LIBQICONENGINEPLUGIN_H

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
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QIconEnginePlugin* QIconEnginePlugin_new();
QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent);
QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self);
void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1);
int QIconEnginePlugin_Metacall(QIconEnginePlugin* self, int param1, int param2, void** param3);
QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, const libqt_string filename);
void QIconEnginePlugin_OnMetaObject(const QIconEnginePlugin* self, intptr_t slot);
QMetaObject* QIconEnginePlugin_SuperMetaObject(const QIconEnginePlugin* self);
void QIconEnginePlugin_OnMetacast(QIconEnginePlugin* self, intptr_t slot);
void* QIconEnginePlugin_SuperMetacast(QIconEnginePlugin* self, const char* param1);
void QIconEnginePlugin_OnMetacall(QIconEnginePlugin* self, intptr_t slot);
int QIconEnginePlugin_SuperMetacall(QIconEnginePlugin* self, int param1, int param2, void** param3);
void QIconEnginePlugin_OnCreate(QIconEnginePlugin* self, intptr_t slot);
QIconEngine* QIconEnginePlugin_SuperCreate(QIconEnginePlugin* self, const libqt_string filename);
bool QIconEnginePlugin_Event(QIconEnginePlugin* self, QEvent* event);
void QIconEnginePlugin_OnEvent(QIconEnginePlugin* self, intptr_t slot);
bool QIconEnginePlugin_SuperEvent(QIconEnginePlugin* self, QEvent* event);
bool QIconEnginePlugin_EventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event);
void QIconEnginePlugin_OnEventFilter(QIconEnginePlugin* self, intptr_t slot);
bool QIconEnginePlugin_SuperEventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event);
void QIconEnginePlugin_TimerEvent(QIconEnginePlugin* self, QTimerEvent* event);
void QIconEnginePlugin_OnTimerEvent(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_SuperTimerEvent(QIconEnginePlugin* self, QTimerEvent* event);
void QIconEnginePlugin_ChildEvent(QIconEnginePlugin* self, QChildEvent* event);
void QIconEnginePlugin_OnChildEvent(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_SuperChildEvent(QIconEnginePlugin* self, QChildEvent* event);
void QIconEnginePlugin_CustomEvent(QIconEnginePlugin* self, QEvent* event);
void QIconEnginePlugin_OnCustomEvent(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_SuperCustomEvent(QIconEnginePlugin* self, QEvent* event);
void QIconEnginePlugin_ConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal);
void QIconEnginePlugin_OnConnectNotify(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_SuperConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal);
void QIconEnginePlugin_DisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal);
void QIconEnginePlugin_OnDisconnectNotify(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_SuperDisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal);
QObject* QIconEnginePlugin_Sender(const QIconEnginePlugin* self);
void QIconEnginePlugin_OnSender(const QIconEnginePlugin* self, intptr_t slot);
QObject* QIconEnginePlugin_SuperSender(const QIconEnginePlugin* self);
int QIconEnginePlugin_SenderSignalIndex(const QIconEnginePlugin* self);
void QIconEnginePlugin_OnSenderSignalIndex(const QIconEnginePlugin* self, intptr_t slot);
int QIconEnginePlugin_SuperSenderSignalIndex(const QIconEnginePlugin* self);
int QIconEnginePlugin_Receivers(const QIconEnginePlugin* self, const char* signal);
void QIconEnginePlugin_OnReceivers(const QIconEnginePlugin* self, intptr_t slot);
int QIconEnginePlugin_SuperReceivers(const QIconEnginePlugin* self, const char* signal);
bool QIconEnginePlugin_IsSignalConnected(const QIconEnginePlugin* self, const QMetaMethod* signal);
void QIconEnginePlugin_OnIsSignalConnected(const QIconEnginePlugin* self, intptr_t slot);
bool QIconEnginePlugin_SuperIsSignalConnected(const QIconEnginePlugin* self, const QMetaMethod* signal);
void QIconEnginePlugin_Delete(QIconEnginePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
