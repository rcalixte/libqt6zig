#pragma once
#ifndef SRC_STATEMACHINEC_LIBQABSTRACTTRANSITION_H
#define SRC_STATEMACHINEC_LIBQABSTRACTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
typedef struct QTimerEvent QTimerEvent;
#endif

QAbstractTransition* QAbstractTransition_new();
QAbstractTransition* QAbstractTransition_new2(QState* sourceState);
QMetaObject* QAbstractTransition_MetaObject(const QAbstractTransition* self);
void* QAbstractTransition_Metacast(QAbstractTransition* self, const char* param1);
int QAbstractTransition_Metacall(QAbstractTransition* self, int param1, int param2, void** param3);
QState* QAbstractTransition_SourceState(const QAbstractTransition* self);
QAbstractState* QAbstractTransition_TargetState(const QAbstractTransition* self);
void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target);
libqt_list /* of QAbstractState* */ QAbstractTransition_TargetStates(const QAbstractTransition* self);
void QAbstractTransition_SetTargetStates(QAbstractTransition* self, const libqt_list /* of QAbstractState* */ targets);
int QAbstractTransition_TransitionType(const QAbstractTransition* self);
void QAbstractTransition_SetTransitionType(QAbstractTransition* self, int typeVal);
QStateMachine* QAbstractTransition_Machine(const QAbstractTransition* self);
void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
libqt_list /* of QAbstractAnimation* */ QAbstractTransition_Animations(const QAbstractTransition* self);
bool QAbstractTransition_EventTest(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_OnTransition(QAbstractTransition* self, QEvent* event);
bool QAbstractTransition_Event(QAbstractTransition* self, QEvent* e);
void QAbstractTransition_OnMetaObject(const QAbstractTransition* self, intptr_t slot);
QMetaObject* QAbstractTransition_SuperMetaObject(const QAbstractTransition* self);
void QAbstractTransition_OnMetacast(QAbstractTransition* self, intptr_t slot);
void* QAbstractTransition_SuperMetacast(QAbstractTransition* self, const char* param1);
void QAbstractTransition_OnMetacall(QAbstractTransition* self, intptr_t slot);
int QAbstractTransition_SuperMetacall(QAbstractTransition* self, int param1, int param2, void** param3);
void QAbstractTransition_OnEventTest(QAbstractTransition* self, intptr_t slot);
bool QAbstractTransition_SuperEventTest(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_OnOnTransition(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_SuperOnTransition(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_OnEvent(QAbstractTransition* self, intptr_t slot);
bool QAbstractTransition_SuperEvent(QAbstractTransition* self, QEvent* e);
bool QAbstractTransition_EventFilter(QAbstractTransition* self, QObject* watched, QEvent* event);
void QAbstractTransition_OnEventFilter(QAbstractTransition* self, intptr_t slot);
bool QAbstractTransition_SuperEventFilter(QAbstractTransition* self, QObject* watched, QEvent* event);
void QAbstractTransition_TimerEvent(QAbstractTransition* self, QTimerEvent* event);
void QAbstractTransition_OnTimerEvent(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_SuperTimerEvent(QAbstractTransition* self, QTimerEvent* event);
void QAbstractTransition_ChildEvent(QAbstractTransition* self, QChildEvent* event);
void QAbstractTransition_OnChildEvent(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_SuperChildEvent(QAbstractTransition* self, QChildEvent* event);
void QAbstractTransition_CustomEvent(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_OnCustomEvent(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_SuperCustomEvent(QAbstractTransition* self, QEvent* event);
void QAbstractTransition_ConnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
void QAbstractTransition_OnConnectNotify(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_SuperConnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
void QAbstractTransition_DisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
void QAbstractTransition_OnDisconnectNotify(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_SuperDisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
QObject* QAbstractTransition_Sender(const QAbstractTransition* self);
void QAbstractTransition_OnSender(const QAbstractTransition* self, intptr_t slot);
QObject* QAbstractTransition_SuperSender(const QAbstractTransition* self);
int QAbstractTransition_SenderSignalIndex(const QAbstractTransition* self);
void QAbstractTransition_OnSenderSignalIndex(const QAbstractTransition* self, intptr_t slot);
int QAbstractTransition_SuperSenderSignalIndex(const QAbstractTransition* self);
int QAbstractTransition_Receivers(const QAbstractTransition* self, const char* signal);
void QAbstractTransition_OnReceivers(const QAbstractTransition* self, intptr_t slot);
int QAbstractTransition_SuperReceivers(const QAbstractTransition* self, const char* signal);
bool QAbstractTransition_IsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal);
void QAbstractTransition_OnIsSignalConnected(const QAbstractTransition* self, intptr_t slot);
bool QAbstractTransition_SuperIsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal);
void QAbstractTransition_Connect_Triggered(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_Connect_TargetStateChanged(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_Connect_TargetStatesChanged(QAbstractTransition* self, intptr_t slot);
void QAbstractTransition_Delete(QAbstractTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
