#pragma once
#ifndef SRC_STATEMACHINEC_LIBQSTATE_H
#define SRC_STATEMACHINEC_LIBQSTATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QState* QState_new();
QState* QState_new2(int childMode);
QState* QState_new3(QState* parent);
QState* QState_new4(int childMode, QState* parent);
QMetaObject* QState_MetaObject(const QState* self);
void* QState_Metacast(QState* self, const char* param1);
int QState_Metacall(QState* self, int param1, int param2, void** param3);
QAbstractState* QState_ErrorState(const QState* self);
void QState_SetErrorState(QState* self, QAbstractState* state);
void QState_AddTransition(QState* self, QAbstractTransition* transition);
QSignalTransition* QState_AddTransition2(QState* self, const QObject* sender, const char* signal, QAbstractState* target);
QAbstractTransition* QState_AddTransition3(QState* self, QAbstractState* target);
void QState_RemoveTransition(QState* self, QAbstractTransition* transition);
libqt_list /* of QAbstractTransition* */ QState_Transitions(const QState* self);
QAbstractState* QState_InitialState(const QState* self);
void QState_SetInitialState(QState* self, QAbstractState* state);
int QState_ChildMode(const QState* self);
void QState_SetChildMode(QState* self, int mode);
void QState_AssignProperty(QState* self, QObject* object, const char* name, const QVariant* value);
void QState_OnEntry(QState* self, QEvent* event);
void QState_OnExit(QState* self, QEvent* event);
bool QState_Event(QState* self, QEvent* e);
void QState_OnMetaObject(const QState* self, intptr_t slot);
QMetaObject* QState_QBaseMetaObject(const QState* self);
void QState_OnMetacast(QState* self, intptr_t slot);
void* QState_QBaseMetacast(QState* self, const char* param1);
void QState_OnMetacall(QState* self, intptr_t slot);
int QState_QBaseMetacall(QState* self, int param1, int param2, void** param3);
void QState_OnOnEntry(QState* self, intptr_t slot);
void QState_QBaseOnEntry(QState* self, QEvent* event);
void QState_OnOnExit(QState* self, intptr_t slot);
void QState_QBaseOnExit(QState* self, QEvent* event);
void QState_OnEvent(QState* self, intptr_t slot);
bool QState_QBaseEvent(QState* self, QEvent* e);
bool QState_EventFilter(QState* self, QObject* watched, QEvent* event);
void QState_OnEventFilter(QState* self, intptr_t slot);
bool QState_QBaseEventFilter(QState* self, QObject* watched, QEvent* event);
void QState_TimerEvent(QState* self, QTimerEvent* event);
void QState_OnTimerEvent(QState* self, intptr_t slot);
void QState_QBaseTimerEvent(QState* self, QTimerEvent* event);
void QState_ChildEvent(QState* self, QChildEvent* event);
void QState_OnChildEvent(QState* self, intptr_t slot);
void QState_QBaseChildEvent(QState* self, QChildEvent* event);
void QState_CustomEvent(QState* self, QEvent* event);
void QState_OnCustomEvent(QState* self, intptr_t slot);
void QState_QBaseCustomEvent(QState* self, QEvent* event);
void QState_ConnectNotify(QState* self, const QMetaMethod* signal);
void QState_OnConnectNotify(QState* self, intptr_t slot);
void QState_QBaseConnectNotify(QState* self, const QMetaMethod* signal);
void QState_DisconnectNotify(QState* self, const QMetaMethod* signal);
void QState_OnDisconnectNotify(QState* self, intptr_t slot);
void QState_QBaseDisconnectNotify(QState* self, const QMetaMethod* signal);
QObject* QState_Sender(const QState* self);
void QState_OnSender(const QState* self, intptr_t slot);
QObject* QState_QBaseSender(const QState* self);
int QState_SenderSignalIndex(const QState* self);
void QState_OnSenderSignalIndex(const QState* self, intptr_t slot);
int QState_QBaseSenderSignalIndex(const QState* self);
int QState_Receivers(const QState* self, const char* signal);
void QState_OnReceivers(const QState* self, intptr_t slot);
int QState_QBaseReceivers(const QState* self, const char* signal);
bool QState_IsSignalConnected(const QState* self, const QMetaMethod* signal);
void QState_OnIsSignalConnected(const QState* self, intptr_t slot);
bool QState_QBaseIsSignalConnected(const QState* self, const QMetaMethod* signal);
void QState_Connect_Finished(QState* self, intptr_t slot);
void QState_Connect_PropertiesAssigned(QState* self, intptr_t slot);
void QState_Connect_ChildModeChanged(QState* self, intptr_t slot);
void QState_Connect_InitialStateChanged(QState* self, intptr_t slot);
void QState_Connect_ErrorStateChanged(QState* self, intptr_t slot);
void QState_Delete(QState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
