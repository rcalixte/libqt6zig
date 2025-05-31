#pragma once
#ifndef SRCC_LIBQSEQUENTIALANIMATIONGROUP_H
#define SRCC_LIBQSEQUENTIALANIMATIONGROUP_H

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
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QSequentialAnimationGroup QSequentialAnimationGroup;
typedef struct QTimerEvent QTimerEvent;
#endif

QSequentialAnimationGroup* QSequentialAnimationGroup_new();
QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent);
QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self);
void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1);
int QSequentialAnimationGroup_Metacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3);
void QSequentialAnimationGroup_OnMetacall(QSequentialAnimationGroup* self, intptr_t slot);
int QSequentialAnimationGroup_QBaseMetacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3);
libqt_string QSequentialAnimationGroup_Tr(const char* s);
QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs);
QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs);
QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_OnDuration(const QSequentialAnimationGroup* self, intptr_t slot);
int QSequentialAnimationGroup_QBaseDuration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current);
void QSequentialAnimationGroup_Connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_OnEvent(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_QBaseEvent(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
void QSequentialAnimationGroup_OnUpdateCurrentTime(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseUpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
void QSequentialAnimationGroup_OnUpdateState(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseUpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction);
void QSequentialAnimationGroup_OnUpdateDirection(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseUpdateDirection(QSequentialAnimationGroup* self, int direction);
libqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c);
libqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n);
bool QSequentialAnimationGroup_EventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event);
void QSequentialAnimationGroup_OnEventFilter(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_QBaseEventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event);
void QSequentialAnimationGroup_TimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event);
void QSequentialAnimationGroup_OnTimerEvent(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseTimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event);
void QSequentialAnimationGroup_ChildEvent(QSequentialAnimationGroup* self, QChildEvent* event);
void QSequentialAnimationGroup_OnChildEvent(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseChildEvent(QSequentialAnimationGroup* self, QChildEvent* event);
void QSequentialAnimationGroup_CustomEvent(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_OnCustomEvent(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseCustomEvent(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_ConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
void QSequentialAnimationGroup_OnConnectNotify(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
void QSequentialAnimationGroup_DisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
void QSequentialAnimationGroup_OnDisconnectNotify(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseDisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
QObject* QSequentialAnimationGroup_Sender(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_OnSender(const QSequentialAnimationGroup* self, intptr_t slot);
QObject* QSequentialAnimationGroup_QBaseSender(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_SenderSignalIndex(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_OnSenderSignalIndex(const QSequentialAnimationGroup* self, intptr_t slot);
int QSequentialAnimationGroup_QBaseSenderSignalIndex(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_Receivers(const QSequentialAnimationGroup* self, const char* signal);
void QSequentialAnimationGroup_OnReceivers(const QSequentialAnimationGroup* self, intptr_t slot);
int QSequentialAnimationGroup_QBaseReceivers(const QSequentialAnimationGroup* self, const char* signal);
bool QSequentialAnimationGroup_IsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal);
void QSequentialAnimationGroup_OnIsSignalConnected(const QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_QBaseIsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal);
void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
