#pragma once
#ifndef SRCC_LIBQSTYLEPLUGIN_H
#define SRCC_LIBQSTYLEPLUGIN_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStyle QStyle;
typedef struct QStylePlugin QStylePlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QStylePlugin* QStylePlugin_new();
QStylePlugin* QStylePlugin_new2(QObject* parent);
QMetaObject* QStylePlugin_MetaObject(const QStylePlugin* self);
void* QStylePlugin_Metacast(QStylePlugin* self, const char* param1);
int QStylePlugin_Metacall(QStylePlugin* self, int param1, int param2, void** param3);
void QStylePlugin_OnMetacall(QStylePlugin* self, intptr_t slot);
int QStylePlugin_QBaseMetacall(QStylePlugin* self, int param1, int param2, void** param3);
libqt_string QStylePlugin_Tr(const char* s);
QStyle* QStylePlugin_Create(QStylePlugin* self, const libqt_string key);
void QStylePlugin_OnCreate(QStylePlugin* self, intptr_t slot);
QStyle* QStylePlugin_QBaseCreate(QStylePlugin* self, const libqt_string key);
libqt_string QStylePlugin_Tr2(const char* s, const char* c);
libqt_string QStylePlugin_Tr3(const char* s, const char* c, int n);
bool QStylePlugin_Event(QStylePlugin* self, QEvent* event);
void QStylePlugin_OnEvent(QStylePlugin* self, intptr_t slot);
bool QStylePlugin_QBaseEvent(QStylePlugin* self, QEvent* event);
bool QStylePlugin_EventFilter(QStylePlugin* self, QObject* watched, QEvent* event);
void QStylePlugin_OnEventFilter(QStylePlugin* self, intptr_t slot);
bool QStylePlugin_QBaseEventFilter(QStylePlugin* self, QObject* watched, QEvent* event);
void QStylePlugin_TimerEvent(QStylePlugin* self, QTimerEvent* event);
void QStylePlugin_OnTimerEvent(QStylePlugin* self, intptr_t slot);
void QStylePlugin_QBaseTimerEvent(QStylePlugin* self, QTimerEvent* event);
void QStylePlugin_ChildEvent(QStylePlugin* self, QChildEvent* event);
void QStylePlugin_OnChildEvent(QStylePlugin* self, intptr_t slot);
void QStylePlugin_QBaseChildEvent(QStylePlugin* self, QChildEvent* event);
void QStylePlugin_CustomEvent(QStylePlugin* self, QEvent* event);
void QStylePlugin_OnCustomEvent(QStylePlugin* self, intptr_t slot);
void QStylePlugin_QBaseCustomEvent(QStylePlugin* self, QEvent* event);
void QStylePlugin_ConnectNotify(QStylePlugin* self, const QMetaMethod* signal);
void QStylePlugin_OnConnectNotify(QStylePlugin* self, intptr_t slot);
void QStylePlugin_QBaseConnectNotify(QStylePlugin* self, const QMetaMethod* signal);
void QStylePlugin_DisconnectNotify(QStylePlugin* self, const QMetaMethod* signal);
void QStylePlugin_OnDisconnectNotify(QStylePlugin* self, intptr_t slot);
void QStylePlugin_QBaseDisconnectNotify(QStylePlugin* self, const QMetaMethod* signal);
QObject* QStylePlugin_Sender(const QStylePlugin* self);
void QStylePlugin_OnSender(const QStylePlugin* self, intptr_t slot);
QObject* QStylePlugin_QBaseSender(const QStylePlugin* self);
int QStylePlugin_SenderSignalIndex(const QStylePlugin* self);
void QStylePlugin_OnSenderSignalIndex(const QStylePlugin* self, intptr_t slot);
int QStylePlugin_QBaseSenderSignalIndex(const QStylePlugin* self);
int QStylePlugin_Receivers(const QStylePlugin* self, const char* signal);
void QStylePlugin_OnReceivers(const QStylePlugin* self, intptr_t slot);
int QStylePlugin_QBaseReceivers(const QStylePlugin* self, const char* signal);
bool QStylePlugin_IsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal);
void QStylePlugin_OnIsSignalConnected(const QStylePlugin* self, intptr_t slot);
bool QStylePlugin_QBaseIsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal);
void QStylePlugin_Delete(QStylePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
