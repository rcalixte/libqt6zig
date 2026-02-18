#pragma once
#ifndef SRC_STATEMACHINEC_LIBQSIGNALTRANSITION_H
#define SRC_STATEMACHINEC_LIBQSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QSignalTransition* QSignalTransition_new();
QSignalTransition* QSignalTransition_new2(const QObject* sender, const char* signal);
QSignalTransition* QSignalTransition_new3(QState* sourceState);
QSignalTransition* QSignalTransition_new4(const QObject* sender, const char* signal, QState* sourceState);
QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self);
void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1);
int QSignalTransition_Metacall(QSignalTransition* self, int param1, int param2, void** param3);
QObject* QSignalTransition_SenderObject(const QSignalTransition* self);
void QSignalTransition_SetSenderObject(QSignalTransition* self, const QObject* sender);
libqt_string QSignalTransition_Signal(const QSignalTransition* self);
void QSignalTransition_SetSignal(QSignalTransition* self, const libqt_string signal);
bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event);
void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event);
bool QSignalTransition_Event(QSignalTransition* self, QEvent* e);
void QSignalTransition_OnMetaObject(const QSignalTransition* self, intptr_t slot);
QMetaObject* QSignalTransition_QBaseMetaObject(const QSignalTransition* self);
void QSignalTransition_OnMetacast(QSignalTransition* self, intptr_t slot);
void* QSignalTransition_QBaseMetacast(QSignalTransition* self, const char* param1);
void QSignalTransition_OnMetacall(QSignalTransition* self, intptr_t slot);
int QSignalTransition_QBaseMetacall(QSignalTransition* self, int param1, int param2, void** param3);
void QSignalTransition_OnEventTest(QSignalTransition* self, intptr_t slot);
bool QSignalTransition_QBaseEventTest(QSignalTransition* self, QEvent* event);
void QSignalTransition_OnOnTransition(QSignalTransition* self, intptr_t slot);
void QSignalTransition_QBaseOnTransition(QSignalTransition* self, QEvent* event);
void QSignalTransition_OnEvent(QSignalTransition* self, intptr_t slot);
bool QSignalTransition_QBaseEvent(QSignalTransition* self, QEvent* e);
bool QSignalTransition_EventFilter(QSignalTransition* self, QObject* watched, QEvent* event);
void QSignalTransition_OnEventFilter(QSignalTransition* self, intptr_t slot);
bool QSignalTransition_QBaseEventFilter(QSignalTransition* self, QObject* watched, QEvent* event);
void QSignalTransition_TimerEvent(QSignalTransition* self, QTimerEvent* event);
void QSignalTransition_OnTimerEvent(QSignalTransition* self, intptr_t slot);
void QSignalTransition_QBaseTimerEvent(QSignalTransition* self, QTimerEvent* event);
void QSignalTransition_ChildEvent(QSignalTransition* self, QChildEvent* event);
void QSignalTransition_OnChildEvent(QSignalTransition* self, intptr_t slot);
void QSignalTransition_QBaseChildEvent(QSignalTransition* self, QChildEvent* event);
void QSignalTransition_CustomEvent(QSignalTransition* self, QEvent* event);
void QSignalTransition_OnCustomEvent(QSignalTransition* self, intptr_t slot);
void QSignalTransition_QBaseCustomEvent(QSignalTransition* self, QEvent* event);
void QSignalTransition_ConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
void QSignalTransition_OnConnectNotify(QSignalTransition* self, intptr_t slot);
void QSignalTransition_QBaseConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
void QSignalTransition_DisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
void QSignalTransition_OnDisconnectNotify(QSignalTransition* self, intptr_t slot);
void QSignalTransition_QBaseDisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
QObject* QSignalTransition_Sender(const QSignalTransition* self);
void QSignalTransition_OnSender(const QSignalTransition* self, intptr_t slot);
QObject* QSignalTransition_QBaseSender(const QSignalTransition* self);
int QSignalTransition_SenderSignalIndex(const QSignalTransition* self);
void QSignalTransition_OnSenderSignalIndex(const QSignalTransition* self, intptr_t slot);
int QSignalTransition_QBaseSenderSignalIndex(const QSignalTransition* self);
int QSignalTransition_Receivers(const QSignalTransition* self, const char* signal);
void QSignalTransition_OnReceivers(const QSignalTransition* self, intptr_t slot);
int QSignalTransition_QBaseReceivers(const QSignalTransition* self, const char* signal);
bool QSignalTransition_IsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal);
void QSignalTransition_OnIsSignalConnected(const QSignalTransition* self, intptr_t slot);
bool QSignalTransition_QBaseIsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal);
void QSignalTransition_Connect_SenderObjectChanged(QSignalTransition* self, intptr_t slot);
void QSignalTransition_Connect_SignalChanged(QSignalTransition* self, intptr_t slot);
void QSignalTransition_Delete(QSignalTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
