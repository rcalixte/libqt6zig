#pragma once
#ifndef SRCC_LIBQABSTRACTANIMATION_H
#define SRCC_LIBQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationDriver QAnimationDriver;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAbstractAnimation* QAbstractAnimation_new();
QAbstractAnimation* QAbstractAnimation_new2(QObject* parent);
QMetaObject* QAbstractAnimation_MetaObject(const QAbstractAnimation* self);
void* QAbstractAnimation_Metacast(QAbstractAnimation* self, const char* param1);
int QAbstractAnimation_Metacall(QAbstractAnimation* self, int param1, int param2, void** param3);
void QAbstractAnimation_OnMetacall(QAbstractAnimation* self, intptr_t slot);
int QAbstractAnimation_QBaseMetacall(QAbstractAnimation* self, int param1, int param2, void** param3);
libqt_string QAbstractAnimation_Tr(const char* s);
int QAbstractAnimation_State(const QAbstractAnimation* self);
QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self);
int QAbstractAnimation_Direction(const QAbstractAnimation* self);
void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction);
int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self);
int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self);
int QAbstractAnimation_LoopCount(const QAbstractAnimation* self);
void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount);
int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self);
int QAbstractAnimation_Duration(const QAbstractAnimation* self);
void QAbstractAnimation_OnDuration(const QAbstractAnimation* self, intptr_t slot);
int QAbstractAnimation_QBaseDuration(const QAbstractAnimation* self);
int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self);
void QAbstractAnimation_Finished(QAbstractAnimation* self);
void QAbstractAnimation_Connect_Finished(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_Connect_StateChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop);
void QAbstractAnimation_Connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1);
void QAbstractAnimation_Connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_Start(QAbstractAnimation* self);
void QAbstractAnimation_Pause(QAbstractAnimation* self);
void QAbstractAnimation_Resume(QAbstractAnimation* self);
void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused);
void QAbstractAnimation_Stop(QAbstractAnimation* self);
void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs);
bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_OnEvent(QAbstractAnimation* self, intptr_t slot);
bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime);
void QAbstractAnimation_OnUpdateCurrentTime(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime);
void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_OnUpdateState(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction);
void QAbstractAnimation_OnUpdateDirection(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction);
libqt_string QAbstractAnimation_Tr2(const char* s, const char* c);
libqt_string QAbstractAnimation_Tr3(const char* s, const char* c, int n);
void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy);
bool QAbstractAnimation_EventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event);
void QAbstractAnimation_OnEventFilter(QAbstractAnimation* self, intptr_t slot);
bool QAbstractAnimation_QBaseEventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event);
void QAbstractAnimation_TimerEvent(QAbstractAnimation* self, QTimerEvent* event);
void QAbstractAnimation_OnTimerEvent(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseTimerEvent(QAbstractAnimation* self, QTimerEvent* event);
void QAbstractAnimation_ChildEvent(QAbstractAnimation* self, QChildEvent* event);
void QAbstractAnimation_OnChildEvent(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseChildEvent(QAbstractAnimation* self, QChildEvent* event);
void QAbstractAnimation_CustomEvent(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_OnCustomEvent(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseCustomEvent(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_ConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
void QAbstractAnimation_OnConnectNotify(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
void QAbstractAnimation_DisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
void QAbstractAnimation_OnDisconnectNotify(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseDisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
QObject* QAbstractAnimation_Sender(const QAbstractAnimation* self);
void QAbstractAnimation_OnSender(const QAbstractAnimation* self, intptr_t slot);
QObject* QAbstractAnimation_QBaseSender(const QAbstractAnimation* self);
int QAbstractAnimation_SenderSignalIndex(const QAbstractAnimation* self);
void QAbstractAnimation_OnSenderSignalIndex(const QAbstractAnimation* self, intptr_t slot);
int QAbstractAnimation_QBaseSenderSignalIndex(const QAbstractAnimation* self);
int QAbstractAnimation_Receivers(const QAbstractAnimation* self, const char* signal);
void QAbstractAnimation_OnReceivers(const QAbstractAnimation* self, intptr_t slot);
int QAbstractAnimation_QBaseReceivers(const QAbstractAnimation* self, const char* signal);
bool QAbstractAnimation_IsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal);
void QAbstractAnimation_OnIsSignalConnected(const QAbstractAnimation* self, intptr_t slot);
bool QAbstractAnimation_QBaseIsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal);
void QAbstractAnimation_Delete(QAbstractAnimation* self);

QAnimationDriver* QAnimationDriver_new();
QAnimationDriver* QAnimationDriver_new2(QObject* parent);
QMetaObject* QAnimationDriver_MetaObject(const QAnimationDriver* self);
void* QAnimationDriver_Metacast(QAnimationDriver* self, const char* param1);
int QAnimationDriver_Metacall(QAnimationDriver* self, int param1, int param2, void** param3);
void QAnimationDriver_OnMetacall(QAnimationDriver* self, intptr_t slot);
int QAnimationDriver_QBaseMetacall(QAnimationDriver* self, int param1, int param2, void** param3);
libqt_string QAnimationDriver_Tr(const char* s);
void QAnimationDriver_Advance(QAnimationDriver* self);
void QAnimationDriver_OnAdvance(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseAdvance(QAnimationDriver* self);
void QAnimationDriver_Install(QAnimationDriver* self);
void QAnimationDriver_Uninstall(QAnimationDriver* self);
bool QAnimationDriver_IsRunning(const QAnimationDriver* self);
long long QAnimationDriver_Elapsed(const QAnimationDriver* self);
void QAnimationDriver_OnElapsed(const QAnimationDriver* self, intptr_t slot);
long long QAnimationDriver_QBaseElapsed(const QAnimationDriver* self);
void QAnimationDriver_Started(QAnimationDriver* self);
void QAnimationDriver_Connect_Started(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_Stopped(QAnimationDriver* self);
void QAnimationDriver_Connect_Stopped(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_Start(QAnimationDriver* self);
void QAnimationDriver_OnStart(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseStart(QAnimationDriver* self);
void QAnimationDriver_Stop(QAnimationDriver* self);
void QAnimationDriver_OnStop(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseStop(QAnimationDriver* self);
libqt_string QAnimationDriver_Tr2(const char* s, const char* c);
libqt_string QAnimationDriver_Tr3(const char* s, const char* c, int n);
bool QAnimationDriver_Event(QAnimationDriver* self, QEvent* event);
void QAnimationDriver_OnEvent(QAnimationDriver* self, intptr_t slot);
bool QAnimationDriver_QBaseEvent(QAnimationDriver* self, QEvent* event);
bool QAnimationDriver_EventFilter(QAnimationDriver* self, QObject* watched, QEvent* event);
void QAnimationDriver_OnEventFilter(QAnimationDriver* self, intptr_t slot);
bool QAnimationDriver_QBaseEventFilter(QAnimationDriver* self, QObject* watched, QEvent* event);
void QAnimationDriver_TimerEvent(QAnimationDriver* self, QTimerEvent* event);
void QAnimationDriver_OnTimerEvent(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseTimerEvent(QAnimationDriver* self, QTimerEvent* event);
void QAnimationDriver_ChildEvent(QAnimationDriver* self, QChildEvent* event);
void QAnimationDriver_OnChildEvent(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseChildEvent(QAnimationDriver* self, QChildEvent* event);
void QAnimationDriver_CustomEvent(QAnimationDriver* self, QEvent* event);
void QAnimationDriver_OnCustomEvent(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseCustomEvent(QAnimationDriver* self, QEvent* event);
void QAnimationDriver_ConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
void QAnimationDriver_OnConnectNotify(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
void QAnimationDriver_DisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
void QAnimationDriver_OnDisconnectNotify(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseDisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self);
void QAnimationDriver_OnAdvanceAnimation(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self);
QObject* QAnimationDriver_Sender(const QAnimationDriver* self);
void QAnimationDriver_OnSender(const QAnimationDriver* self, intptr_t slot);
QObject* QAnimationDriver_QBaseSender(const QAnimationDriver* self);
int QAnimationDriver_SenderSignalIndex(const QAnimationDriver* self);
void QAnimationDriver_OnSenderSignalIndex(const QAnimationDriver* self, intptr_t slot);
int QAnimationDriver_QBaseSenderSignalIndex(const QAnimationDriver* self);
int QAnimationDriver_Receivers(const QAnimationDriver* self, const char* signal);
void QAnimationDriver_OnReceivers(const QAnimationDriver* self, intptr_t slot);
int QAnimationDriver_QBaseReceivers(const QAnimationDriver* self, const char* signal);
bool QAnimationDriver_IsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal);
void QAnimationDriver_OnIsSignalConnected(const QAnimationDriver* self, intptr_t slot);
bool QAnimationDriver_QBaseIsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal);
void QAnimationDriver_Delete(QAnimationDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
