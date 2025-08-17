#pragma once
#ifndef SRCC_LIBQCHRONOTIMER_H
#define SRCC_LIBQCHRONOTIMER_H

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
typedef struct QChronoTimer QChronoTimer;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QChronoTimer* QChronoTimer_new();
QChronoTimer* QChronoTimer_new2(QObject* parent);
QMetaObject* QChronoTimer_MetaObject(const QChronoTimer* self);
void* QChronoTimer_Metacast(QChronoTimer* self, const char* param1);
int QChronoTimer_Metacall(QChronoTimer* self, int param1, int param2, void** param3);
void QChronoTimer_OnMetacall(QChronoTimer* self, intptr_t slot);
int QChronoTimer_QBaseMetacall(QChronoTimer* self, int param1, int param2, void** param3);
libqt_string QChronoTimer_Tr(const char* s);
bool QChronoTimer_IsActive(const QChronoTimer* self);
void QChronoTimer_SetTimerType(QChronoTimer* self, int atype);
int QChronoTimer_TimerType(const QChronoTimer* self);
void QChronoTimer_SetSingleShot(QChronoTimer* self, bool singleShot);
bool QChronoTimer_IsSingleShot(const QChronoTimer* self);
void QChronoTimer_Start(QChronoTimer* self);
void QChronoTimer_Stop(QChronoTimer* self);
void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1);
void QChronoTimer_OnTimerEvent(QChronoTimer* self, intptr_t slot);
void QChronoTimer_QBaseTimerEvent(QChronoTimer* self, QTimerEvent* param1);
libqt_string QChronoTimer_Tr2(const char* s, const char* c);
libqt_string QChronoTimer_Tr3(const char* s, const char* c, int n);
bool QChronoTimer_Event(QChronoTimer* self, QEvent* event);
void QChronoTimer_OnEvent(QChronoTimer* self, intptr_t slot);
bool QChronoTimer_QBaseEvent(QChronoTimer* self, QEvent* event);
bool QChronoTimer_EventFilter(QChronoTimer* self, QObject* watched, QEvent* event);
void QChronoTimer_OnEventFilter(QChronoTimer* self, intptr_t slot);
bool QChronoTimer_QBaseEventFilter(QChronoTimer* self, QObject* watched, QEvent* event);
void QChronoTimer_ChildEvent(QChronoTimer* self, QChildEvent* event);
void QChronoTimer_OnChildEvent(QChronoTimer* self, intptr_t slot);
void QChronoTimer_QBaseChildEvent(QChronoTimer* self, QChildEvent* event);
void QChronoTimer_CustomEvent(QChronoTimer* self, QEvent* event);
void QChronoTimer_OnCustomEvent(QChronoTimer* self, intptr_t slot);
void QChronoTimer_QBaseCustomEvent(QChronoTimer* self, QEvent* event);
void QChronoTimer_ConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
void QChronoTimer_OnConnectNotify(QChronoTimer* self, intptr_t slot);
void QChronoTimer_QBaseConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
void QChronoTimer_DisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
void QChronoTimer_OnDisconnectNotify(QChronoTimer* self, intptr_t slot);
void QChronoTimer_QBaseDisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
QObject* QChronoTimer_Sender(const QChronoTimer* self);
void QChronoTimer_OnSender(const QChronoTimer* self, intptr_t slot);
QObject* QChronoTimer_QBaseSender(const QChronoTimer* self);
int QChronoTimer_SenderSignalIndex(const QChronoTimer* self);
void QChronoTimer_OnSenderSignalIndex(const QChronoTimer* self, intptr_t slot);
int QChronoTimer_QBaseSenderSignalIndex(const QChronoTimer* self);
int QChronoTimer_Receivers(const QChronoTimer* self, const char* signal);
void QChronoTimer_OnReceivers(const QChronoTimer* self, intptr_t slot);
int QChronoTimer_QBaseReceivers(const QChronoTimer* self, const char* signal);
bool QChronoTimer_IsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal);
void QChronoTimer_OnIsSignalConnected(const QChronoTimer* self, intptr_t slot);
bool QChronoTimer_QBaseIsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal);
void QChronoTimer_Connect_Timeout(QChronoTimer* self, intptr_t slot);
void QChronoTimer_Delete(QChronoTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
