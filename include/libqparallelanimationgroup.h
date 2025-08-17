#pragma once
#ifndef SRCC_LIBQPARALLELANIMATIONGROUP_H
#define SRCC_LIBQPARALLELANIMATIONGROUP_H

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
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QParallelAnimationGroup QParallelAnimationGroup;
typedef struct QTimerEvent QTimerEvent;
#endif

QParallelAnimationGroup* QParallelAnimationGroup_new();
QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent);
QMetaObject* QParallelAnimationGroup_MetaObject(const QParallelAnimationGroup* self);
void* QParallelAnimationGroup_Metacast(QParallelAnimationGroup* self, const char* param1);
int QParallelAnimationGroup_Metacall(QParallelAnimationGroup* self, int param1, int param2, void** param3);
void QParallelAnimationGroup_OnMetacall(QParallelAnimationGroup* self, intptr_t slot);
int QParallelAnimationGroup_QBaseMetacall(QParallelAnimationGroup* self, int param1, int param2, void** param3);
libqt_string QParallelAnimationGroup_Tr(const char* s);
int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self);
void QParallelAnimationGroup_OnDuration(const QParallelAnimationGroup* self, intptr_t slot);
int QParallelAnimationGroup_QBaseDuration(const QParallelAnimationGroup* self);
bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_OnEvent(QParallelAnimationGroup* self, intptr_t slot);
bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
void QParallelAnimationGroup_OnUpdateCurrentTime(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState);
void QParallelAnimationGroup_OnUpdateState(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState);
void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction);
void QParallelAnimationGroup_OnUpdateDirection(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction);
libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c);
libqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n);
bool QParallelAnimationGroup_EventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event);
void QParallelAnimationGroup_OnEventFilter(QParallelAnimationGroup* self, intptr_t slot);
bool QParallelAnimationGroup_QBaseEventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event);
void QParallelAnimationGroup_TimerEvent(QParallelAnimationGroup* self, QTimerEvent* event);
void QParallelAnimationGroup_OnTimerEvent(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseTimerEvent(QParallelAnimationGroup* self, QTimerEvent* event);
void QParallelAnimationGroup_ChildEvent(QParallelAnimationGroup* self, QChildEvent* event);
void QParallelAnimationGroup_OnChildEvent(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseChildEvent(QParallelAnimationGroup* self, QChildEvent* event);
void QParallelAnimationGroup_CustomEvent(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_OnCustomEvent(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseCustomEvent(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_ConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
void QParallelAnimationGroup_OnConnectNotify(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
void QParallelAnimationGroup_DisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
void QParallelAnimationGroup_OnDisconnectNotify(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseDisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
QObject* QParallelAnimationGroup_Sender(const QParallelAnimationGroup* self);
void QParallelAnimationGroup_OnSender(const QParallelAnimationGroup* self, intptr_t slot);
QObject* QParallelAnimationGroup_QBaseSender(const QParallelAnimationGroup* self);
int QParallelAnimationGroup_SenderSignalIndex(const QParallelAnimationGroup* self);
void QParallelAnimationGroup_OnSenderSignalIndex(const QParallelAnimationGroup* self, intptr_t slot);
int QParallelAnimationGroup_QBaseSenderSignalIndex(const QParallelAnimationGroup* self);
int QParallelAnimationGroup_Receivers(const QParallelAnimationGroup* self, const char* signal);
void QParallelAnimationGroup_OnReceivers(const QParallelAnimationGroup* self, intptr_t slot);
int QParallelAnimationGroup_QBaseReceivers(const QParallelAnimationGroup* self, const char* signal);
bool QParallelAnimationGroup_IsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal);
void QParallelAnimationGroup_OnIsSignalConnected(const QParallelAnimationGroup* self, intptr_t slot);
bool QParallelAnimationGroup_QBaseIsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal);
void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
