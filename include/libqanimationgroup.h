#pragma once
#ifndef SRCC_LIBQANIMATIONGROUP_H
#define SRCC_LIBQANIMATIONGROUP_H

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
typedef struct QTimerEvent QTimerEvent;
#endif

QAnimationGroup* QAnimationGroup_new();
QAnimationGroup* QAnimationGroup_new2(QObject* parent);
QMetaObject* QAnimationGroup_MetaObject(const QAnimationGroup* self);
void* QAnimationGroup_Metacast(QAnimationGroup* self, const char* param1);
int QAnimationGroup_Metacall(QAnimationGroup* self, int param1, int param2, void** param3);
QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index);
int QAnimationGroup_AnimationCount(const QAnimationGroup* self);
int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_Clear(QAnimationGroup* self);
bool QAnimationGroup_Event(QAnimationGroup* self, QEvent* event);
void QAnimationGroup_OnMetaObject(const QAnimationGroup* self, intptr_t slot);
QMetaObject* QAnimationGroup_SuperMetaObject(const QAnimationGroup* self);
void QAnimationGroup_OnMetacast(QAnimationGroup* self, intptr_t slot);
void* QAnimationGroup_SuperMetacast(QAnimationGroup* self, const char* param1);
void QAnimationGroup_OnMetacall(QAnimationGroup* self, intptr_t slot);
int QAnimationGroup_SuperMetacall(QAnimationGroup* self, int param1, int param2, void** param3);
void QAnimationGroup_OnEvent(QAnimationGroup* self, intptr_t slot);
bool QAnimationGroup_SuperEvent(QAnimationGroup* self, QEvent* event);
int QAnimationGroup_Duration(const QAnimationGroup* self);
void QAnimationGroup_OnDuration(const QAnimationGroup* self, intptr_t slot);
int QAnimationGroup_SuperDuration(const QAnimationGroup* self);
void QAnimationGroup_UpdateCurrentTime(QAnimationGroup* self, int currentTime);
void QAnimationGroup_OnUpdateCurrentTime(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperUpdateCurrentTime(QAnimationGroup* self, int currentTime);
void QAnimationGroup_UpdateState(QAnimationGroup* self, int newState, int oldState);
void QAnimationGroup_OnUpdateState(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperUpdateState(QAnimationGroup* self, int newState, int oldState);
void QAnimationGroup_UpdateDirection(QAnimationGroup* self, int direction);
void QAnimationGroup_OnUpdateDirection(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperUpdateDirection(QAnimationGroup* self, int direction);
bool QAnimationGroup_EventFilter(QAnimationGroup* self, QObject* watched, QEvent* event);
void QAnimationGroup_OnEventFilter(QAnimationGroup* self, intptr_t slot);
bool QAnimationGroup_SuperEventFilter(QAnimationGroup* self, QObject* watched, QEvent* event);
void QAnimationGroup_TimerEvent(QAnimationGroup* self, QTimerEvent* event);
void QAnimationGroup_OnTimerEvent(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperTimerEvent(QAnimationGroup* self, QTimerEvent* event);
void QAnimationGroup_ChildEvent(QAnimationGroup* self, QChildEvent* event);
void QAnimationGroup_OnChildEvent(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperChildEvent(QAnimationGroup* self, QChildEvent* event);
void QAnimationGroup_CustomEvent(QAnimationGroup* self, QEvent* event);
void QAnimationGroup_OnCustomEvent(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperCustomEvent(QAnimationGroup* self, QEvent* event);
void QAnimationGroup_ConnectNotify(QAnimationGroup* self, const QMetaMethod* signal);
void QAnimationGroup_OnConnectNotify(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperConnectNotify(QAnimationGroup* self, const QMetaMethod* signal);
void QAnimationGroup_DisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal);
void QAnimationGroup_OnDisconnectNotify(QAnimationGroup* self, intptr_t slot);
void QAnimationGroup_SuperDisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal);
QObject* QAnimationGroup_Sender(const QAnimationGroup* self);
void QAnimationGroup_OnSender(const QAnimationGroup* self, intptr_t slot);
QObject* QAnimationGroup_SuperSender(const QAnimationGroup* self);
int QAnimationGroup_SenderSignalIndex(const QAnimationGroup* self);
void QAnimationGroup_OnSenderSignalIndex(const QAnimationGroup* self, intptr_t slot);
int QAnimationGroup_SuperSenderSignalIndex(const QAnimationGroup* self);
int QAnimationGroup_Receivers(const QAnimationGroup* self, const char* signal);
void QAnimationGroup_OnReceivers(const QAnimationGroup* self, intptr_t slot);
int QAnimationGroup_SuperReceivers(const QAnimationGroup* self, const char* signal);
bool QAnimationGroup_IsSignalConnected(const QAnimationGroup* self, const QMetaMethod* signal);
void QAnimationGroup_OnIsSignalConnected(const QAnimationGroup* self, intptr_t slot);
bool QAnimationGroup_SuperIsSignalConnected(const QAnimationGroup* self, const QMetaMethod* signal);
void QAnimationGroup_Delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
