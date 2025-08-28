#pragma once
#ifndef SRC_SQLC_LIBQSQLDRIVERPLUGIN_H
#define SRC_SQLC_LIBQSQLDRIVERPLUGIN_H

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
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlDriverPlugin QSqlDriverPlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QSqlDriverPlugin* QSqlDriverPlugin_new();
QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent);
QMetaObject* QSqlDriverPlugin_MetaObject(const QSqlDriverPlugin* self);
void* QSqlDriverPlugin_Metacast(QSqlDriverPlugin* self, const char* param1);
int QSqlDriverPlugin_Metacall(QSqlDriverPlugin* self, int param1, int param2, void** param3);
libqt_string QSqlDriverPlugin_Tr(const char* s);
QSqlDriver* QSqlDriverPlugin_Create(QSqlDriverPlugin* self, const libqt_string key);
libqt_string QSqlDriverPlugin_Tr2(const char* s, const char* c);
libqt_string QSqlDriverPlugin_Tr3(const char* s, const char* c, int n);
void QSqlDriverPlugin_OnMetacall(QSqlDriverPlugin* self, intptr_t slot);
int QSqlDriverPlugin_QBaseMetacall(QSqlDriverPlugin* self, int param1, int param2, void** param3);
void QSqlDriverPlugin_OnCreate(QSqlDriverPlugin* self, intptr_t slot);
QSqlDriver* QSqlDriverPlugin_QBaseCreate(QSqlDriverPlugin* self, const libqt_string key);
bool QSqlDriverPlugin_Event(QSqlDriverPlugin* self, QEvent* event);
void QSqlDriverPlugin_OnEvent(QSqlDriverPlugin* self, intptr_t slot);
bool QSqlDriverPlugin_QBaseEvent(QSqlDriverPlugin* self, QEvent* event);
bool QSqlDriverPlugin_EventFilter(QSqlDriverPlugin* self, QObject* watched, QEvent* event);
void QSqlDriverPlugin_OnEventFilter(QSqlDriverPlugin* self, intptr_t slot);
bool QSqlDriverPlugin_QBaseEventFilter(QSqlDriverPlugin* self, QObject* watched, QEvent* event);
void QSqlDriverPlugin_TimerEvent(QSqlDriverPlugin* self, QTimerEvent* event);
void QSqlDriverPlugin_OnTimerEvent(QSqlDriverPlugin* self, intptr_t slot);
void QSqlDriverPlugin_QBaseTimerEvent(QSqlDriverPlugin* self, QTimerEvent* event);
void QSqlDriverPlugin_ChildEvent(QSqlDriverPlugin* self, QChildEvent* event);
void QSqlDriverPlugin_OnChildEvent(QSqlDriverPlugin* self, intptr_t slot);
void QSqlDriverPlugin_QBaseChildEvent(QSqlDriverPlugin* self, QChildEvent* event);
void QSqlDriverPlugin_CustomEvent(QSqlDriverPlugin* self, QEvent* event);
void QSqlDriverPlugin_OnCustomEvent(QSqlDriverPlugin* self, intptr_t slot);
void QSqlDriverPlugin_QBaseCustomEvent(QSqlDriverPlugin* self, QEvent* event);
void QSqlDriverPlugin_ConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
void QSqlDriverPlugin_OnConnectNotify(QSqlDriverPlugin* self, intptr_t slot);
void QSqlDriverPlugin_QBaseConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
void QSqlDriverPlugin_DisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
void QSqlDriverPlugin_OnDisconnectNotify(QSqlDriverPlugin* self, intptr_t slot);
void QSqlDriverPlugin_QBaseDisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
QObject* QSqlDriverPlugin_Sender(const QSqlDriverPlugin* self);
void QSqlDriverPlugin_OnSender(const QSqlDriverPlugin* self, intptr_t slot);
QObject* QSqlDriverPlugin_QBaseSender(const QSqlDriverPlugin* self);
int QSqlDriverPlugin_SenderSignalIndex(const QSqlDriverPlugin* self);
void QSqlDriverPlugin_OnSenderSignalIndex(const QSqlDriverPlugin* self, intptr_t slot);
int QSqlDriverPlugin_QBaseSenderSignalIndex(const QSqlDriverPlugin* self);
int QSqlDriverPlugin_Receivers(const QSqlDriverPlugin* self, const char* signal);
void QSqlDriverPlugin_OnReceivers(const QSqlDriverPlugin* self, intptr_t slot);
int QSqlDriverPlugin_QBaseReceivers(const QSqlDriverPlugin* self, const char* signal);
bool QSqlDriverPlugin_IsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal);
void QSqlDriverPlugin_OnIsSignalConnected(const QSqlDriverPlugin* self, intptr_t slot);
bool QSqlDriverPlugin_QBaseIsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal);
void QSqlDriverPlugin_Delete(QSqlDriverPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
