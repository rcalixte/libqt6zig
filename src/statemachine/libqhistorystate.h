#pragma once
#ifndef SRC_STATEMACHINEC_LIBQHISTORYSTATE_H
#define SRC_STATEMACHINEC_LIBQHISTORYSTATE_H

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
typedef struct QHistoryState QHistoryState;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QHistoryState* QHistoryState_new();
QHistoryState* QHistoryState_new2(int typeVal);
QHistoryState* QHistoryState_new3(QState* parent);
QHistoryState* QHistoryState_new4(int typeVal, QState* parent);
QMetaObject* QHistoryState_MetaObject(const QHistoryState* self);
void* QHistoryState_Metacast(QHistoryState* self, const char* param1);
int QHistoryState_Metacall(QHistoryState* self, int param1, int param2, void** param3);
QAbstractTransition* QHistoryState_DefaultTransition(const QHistoryState* self);
void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition);
QAbstractState* QHistoryState_DefaultState(const QHistoryState* self);
void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state);
int QHistoryState_HistoryType(const QHistoryState* self);
void QHistoryState_SetHistoryType(QHistoryState* self, int typeVal);
void QHistoryState_OnEntry(QHistoryState* self, QEvent* event);
void QHistoryState_OnExit(QHistoryState* self, QEvent* event);
bool QHistoryState_Event(QHistoryState* self, QEvent* e);
void QHistoryState_OnMetaObject(const QHistoryState* self, intptr_t slot);
QMetaObject* QHistoryState_SuperMetaObject(const QHistoryState* self);
void QHistoryState_OnMetacast(QHistoryState* self, intptr_t slot);
void* QHistoryState_SuperMetacast(QHistoryState* self, const char* param1);
void QHistoryState_OnMetacall(QHistoryState* self, intptr_t slot);
int QHistoryState_SuperMetacall(QHistoryState* self, int param1, int param2, void** param3);
void QHistoryState_OnOnEntry(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperOnEntry(QHistoryState* self, QEvent* event);
void QHistoryState_OnOnExit(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperOnExit(QHistoryState* self, QEvent* event);
void QHistoryState_OnEvent(QHistoryState* self, intptr_t slot);
bool QHistoryState_SuperEvent(QHistoryState* self, QEvent* e);
bool QHistoryState_EventFilter(QHistoryState* self, QObject* watched, QEvent* event);
void QHistoryState_OnEventFilter(QHistoryState* self, intptr_t slot);
bool QHistoryState_SuperEventFilter(QHistoryState* self, QObject* watched, QEvent* event);
void QHistoryState_TimerEvent(QHistoryState* self, QTimerEvent* event);
void QHistoryState_OnTimerEvent(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperTimerEvent(QHistoryState* self, QTimerEvent* event);
void QHistoryState_ChildEvent(QHistoryState* self, QChildEvent* event);
void QHistoryState_OnChildEvent(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperChildEvent(QHistoryState* self, QChildEvent* event);
void QHistoryState_CustomEvent(QHistoryState* self, QEvent* event);
void QHistoryState_OnCustomEvent(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperCustomEvent(QHistoryState* self, QEvent* event);
void QHistoryState_ConnectNotify(QHistoryState* self, const QMetaMethod* signal);
void QHistoryState_OnConnectNotify(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperConnectNotify(QHistoryState* self, const QMetaMethod* signal);
void QHistoryState_DisconnectNotify(QHistoryState* self, const QMetaMethod* signal);
void QHistoryState_OnDisconnectNotify(QHistoryState* self, intptr_t slot);
void QHistoryState_SuperDisconnectNotify(QHistoryState* self, const QMetaMethod* signal);
QObject* QHistoryState_Sender(const QHistoryState* self);
void QHistoryState_OnSender(const QHistoryState* self, intptr_t slot);
QObject* QHistoryState_SuperSender(const QHistoryState* self);
int QHistoryState_SenderSignalIndex(const QHistoryState* self);
void QHistoryState_OnSenderSignalIndex(const QHistoryState* self, intptr_t slot);
int QHistoryState_SuperSenderSignalIndex(const QHistoryState* self);
int QHistoryState_Receivers(const QHistoryState* self, const char* signal);
void QHistoryState_OnReceivers(const QHistoryState* self, intptr_t slot);
int QHistoryState_SuperReceivers(const QHistoryState* self, const char* signal);
bool QHistoryState_IsSignalConnected(const QHistoryState* self, const QMetaMethod* signal);
void QHistoryState_OnIsSignalConnected(const QHistoryState* self, intptr_t slot);
bool QHistoryState_SuperIsSignalConnected(const QHistoryState* self, const QMetaMethod* signal);
void QHistoryState_Connect_DefaultTransitionChanged(QHistoryState* self, intptr_t slot);
void QHistoryState_Connect_DefaultStateChanged(QHistoryState* self, intptr_t slot);
void QHistoryState_Connect_HistoryTypeChanged(QHistoryState* self, intptr_t slot);
void QHistoryState_Delete(QHistoryState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
