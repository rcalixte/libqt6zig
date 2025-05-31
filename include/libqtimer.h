#pragma once
#ifndef SRCC_LIBQTIMER_H
#define SRCC_LIBQTIMER_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimer QTimer;
typedef struct QTimerEvent QTimerEvent;
#endif

QTimer* QTimer_new();
QTimer* QTimer_new2(QObject* parent);
QMetaObject* QTimer_MetaObject(const QTimer* self);
void* QTimer_Metacast(QTimer* self, const char* param1);
int QTimer_Metacall(QTimer* self, int param1, int param2, void** param3);
void QTimer_OnMetacall(QTimer* self, intptr_t slot);
int QTimer_QBaseMetacall(QTimer* self, int param1, int param2, void** param3);
libqt_string QTimer_Tr(const char* s);
bool QTimer_IsActive(const QTimer* self);
int QTimer_TimerId(const QTimer* self);
void QTimer_SetInterval(QTimer* self, int msec);
int QTimer_Interval(const QTimer* self);
int QTimer_RemainingTime(const QTimer* self);
void QTimer_SetTimerType(QTimer* self, int atype);
int QTimer_TimerType(const QTimer* self);
void QTimer_SetSingleShot(QTimer* self, bool singleShot);
bool QTimer_IsSingleShot(const QTimer* self);
void QTimer_Start(QTimer* self, int msec);
void QTimer_Start2(QTimer* self);
void QTimer_Stop(QTimer* self);
void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1);
void QTimer_OnTimerEvent(QTimer* self, intptr_t slot);
void QTimer_QBaseTimerEvent(QTimer* self, QTimerEvent* param1);
libqt_string QTimer_Tr2(const char* s, const char* c);
libqt_string QTimer_Tr3(const char* s, const char* c, int n);
bool QTimer_Event(QTimer* self, QEvent* event);
void QTimer_OnEvent(QTimer* self, intptr_t slot);
bool QTimer_QBaseEvent(QTimer* self, QEvent* event);
bool QTimer_EventFilter(QTimer* self, QObject* watched, QEvent* event);
void QTimer_OnEventFilter(QTimer* self, intptr_t slot);
bool QTimer_QBaseEventFilter(QTimer* self, QObject* watched, QEvent* event);
void QTimer_ChildEvent(QTimer* self, QChildEvent* event);
void QTimer_OnChildEvent(QTimer* self, intptr_t slot);
void QTimer_QBaseChildEvent(QTimer* self, QChildEvent* event);
void QTimer_CustomEvent(QTimer* self, QEvent* event);
void QTimer_OnCustomEvent(QTimer* self, intptr_t slot);
void QTimer_QBaseCustomEvent(QTimer* self, QEvent* event);
void QTimer_ConnectNotify(QTimer* self, const QMetaMethod* signal);
void QTimer_OnConnectNotify(QTimer* self, intptr_t slot);
void QTimer_QBaseConnectNotify(QTimer* self, const QMetaMethod* signal);
void QTimer_DisconnectNotify(QTimer* self, const QMetaMethod* signal);
void QTimer_OnDisconnectNotify(QTimer* self, intptr_t slot);
void QTimer_QBaseDisconnectNotify(QTimer* self, const QMetaMethod* signal);
QObject* QTimer_Sender(const QTimer* self);
void QTimer_OnSender(const QTimer* self, intptr_t slot);
QObject* QTimer_QBaseSender(const QTimer* self);
int QTimer_SenderSignalIndex(const QTimer* self);
void QTimer_OnSenderSignalIndex(const QTimer* self, intptr_t slot);
int QTimer_QBaseSenderSignalIndex(const QTimer* self);
int QTimer_Receivers(const QTimer* self, const char* signal);
void QTimer_OnReceivers(const QTimer* self, intptr_t slot);
int QTimer_QBaseReceivers(const QTimer* self, const char* signal);
bool QTimer_IsSignalConnected(const QTimer* self, const QMetaMethod* signal);
void QTimer_OnIsSignalConnected(const QTimer* self, intptr_t slot);
bool QTimer_QBaseIsSignalConnected(const QTimer* self, const QMetaMethod* signal);
void QTimer_Connect_Timeout(QTimer* self, intptr_t slot);
void QTimer_Delete(QTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
