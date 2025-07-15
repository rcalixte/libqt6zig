#pragma once
#ifndef SRCC_LIBQTHREAD_H
#define SRCC_LIBQTHREAD_H

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
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QChildEvent QChildEvent;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
#endif

QThread* QThread_new();
QThread* QThread_new2(QObject* parent);
QMetaObject* QThread_MetaObject(const QThread* self);
void* QThread_Metacast(QThread* self, const char* param1);
int QThread_Metacall(QThread* self, int param1, int param2, void** param3);
void QThread_OnMetacall(QThread* self, intptr_t slot);
int QThread_QBaseMetacall(QThread* self, int param1, int param2, void** param3);
libqt_string QThread_Tr(const char* s);
void* QThread_CurrentThreadId();
QThread* QThread_CurrentThread();
bool QThread_IsMainThread();
int QThread_IdealThreadCount();
void QThread_YieldCurrentThread();
void QThread_SetPriority(QThread* self, int priority);
int QThread_Priority(const QThread* self);
bool QThread_IsFinished(const QThread* self);
bool QThread_IsRunning(const QThread* self);
void QThread_RequestInterruption(QThread* self);
bool QThread_IsInterruptionRequested(const QThread* self);
void QThread_SetStackSize(QThread* self, unsigned int stackSize);
unsigned int QThread_StackSize(const QThread* self);
QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self);
void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher);
bool QThread_Event(QThread* self, QEvent* event);
void QThread_OnEvent(QThread* self, intptr_t slot);
bool QThread_QBaseEvent(QThread* self, QEvent* event);
int QThread_LoopLevel(const QThread* self);
bool QThread_IsCurrentThread(const QThread* self);
void QThread_Start(QThread* self);
void QThread_Terminate(QThread* self);
void QThread_Exit(QThread* self);
void QThread_Quit(QThread* self);
bool QThread_Wait(QThread* self);
bool QThread_Wait2(QThread* self, unsigned long time);
void QThread_Sleep(unsigned long param1);
void QThread_Msleep(unsigned long param1);
void QThread_Usleep(unsigned long param1);
void QThread_Run(QThread* self);
void QThread_OnRun(QThread* self, intptr_t slot);
void QThread_QBaseRun(QThread* self);
libqt_string QThread_Tr2(const char* s, const char* c);
libqt_string QThread_Tr3(const char* s, const char* c, int n);
void QThread_Start1(QThread* self, int param1);
void QThread_Exit1(QThread* self, int retcode);
bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline);
bool QThread_EventFilter(QThread* self, QObject* watched, QEvent* event);
void QThread_OnEventFilter(QThread* self, intptr_t slot);
bool QThread_QBaseEventFilter(QThread* self, QObject* watched, QEvent* event);
void QThread_TimerEvent(QThread* self, QTimerEvent* event);
void QThread_OnTimerEvent(QThread* self, intptr_t slot);
void QThread_QBaseTimerEvent(QThread* self, QTimerEvent* event);
void QThread_ChildEvent(QThread* self, QChildEvent* event);
void QThread_OnChildEvent(QThread* self, intptr_t slot);
void QThread_QBaseChildEvent(QThread* self, QChildEvent* event);
void QThread_CustomEvent(QThread* self, QEvent* event);
void QThread_OnCustomEvent(QThread* self, intptr_t slot);
void QThread_QBaseCustomEvent(QThread* self, QEvent* event);
void QThread_ConnectNotify(QThread* self, const QMetaMethod* signal);
void QThread_OnConnectNotify(QThread* self, intptr_t slot);
void QThread_QBaseConnectNotify(QThread* self, const QMetaMethod* signal);
void QThread_DisconnectNotify(QThread* self, const QMetaMethod* signal);
void QThread_OnDisconnectNotify(QThread* self, intptr_t slot);
void QThread_QBaseDisconnectNotify(QThread* self, const QMetaMethod* signal);
int QThread_Exec(QThread* self);
void QThread_OnExec(QThread* self, intptr_t slot);
int QThread_QBaseExec(QThread* self);
QObject* QThread_Sender(const QThread* self);
void QThread_OnSender(const QThread* self, intptr_t slot);
QObject* QThread_QBaseSender(const QThread* self);
int QThread_SenderSignalIndex(const QThread* self);
void QThread_OnSenderSignalIndex(const QThread* self, intptr_t slot);
int QThread_QBaseSenderSignalIndex(const QThread* self);
int QThread_Receivers(const QThread* self, const char* signal);
void QThread_OnReceivers(const QThread* self, intptr_t slot);
int QThread_QBaseReceivers(const QThread* self, const char* signal);
bool QThread_IsSignalConnected(const QThread* self, const QMetaMethod* signal);
void QThread_OnIsSignalConnected(const QThread* self, intptr_t slot);
bool QThread_QBaseIsSignalConnected(const QThread* self, const QMetaMethod* signal);
void QThread_Connect_Started(QThread* self, intptr_t slot);
void QThread_Connect_Finished(QThread* self, intptr_t slot);
void QThread_Delete(QThread* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
