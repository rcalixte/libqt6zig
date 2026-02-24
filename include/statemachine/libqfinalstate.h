#pragma once
#ifndef SRC_STATEMACHINEC_LIBQFINALSTATE_H
#define SRC_STATEMACHINEC_LIBQFINALSTATE_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFinalState QFinalState;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QFinalState* QFinalState_new();
QFinalState* QFinalState_new2(QState* parent);
QMetaObject* QFinalState_MetaObject(const QFinalState* self);
void* QFinalState_Metacast(QFinalState* self, const char* param1);
int QFinalState_Metacall(QFinalState* self, int param1, int param2, void** param3);
void QFinalState_OnEntry(QFinalState* self, QEvent* event);
void QFinalState_OnExit(QFinalState* self, QEvent* event);
bool QFinalState_Event(QFinalState* self, QEvent* e);
void QFinalState_OnMetaObject(const QFinalState* self, intptr_t slot);
QMetaObject* QFinalState_SuperMetaObject(const QFinalState* self);
void QFinalState_OnMetacast(QFinalState* self, intptr_t slot);
void* QFinalState_SuperMetacast(QFinalState* self, const char* param1);
void QFinalState_OnMetacall(QFinalState* self, intptr_t slot);
int QFinalState_SuperMetacall(QFinalState* self, int param1, int param2, void** param3);
void QFinalState_OnOnEntry(QFinalState* self, intptr_t slot);
void QFinalState_SuperOnEntry(QFinalState* self, QEvent* event);
void QFinalState_OnOnExit(QFinalState* self, intptr_t slot);
void QFinalState_SuperOnExit(QFinalState* self, QEvent* event);
void QFinalState_OnEvent(QFinalState* self, intptr_t slot);
bool QFinalState_SuperEvent(QFinalState* self, QEvent* e);
bool QFinalState_EventFilter(QFinalState* self, QObject* watched, QEvent* event);
void QFinalState_OnEventFilter(QFinalState* self, intptr_t slot);
bool QFinalState_SuperEventFilter(QFinalState* self, QObject* watched, QEvent* event);
void QFinalState_TimerEvent(QFinalState* self, QTimerEvent* event);
void QFinalState_OnTimerEvent(QFinalState* self, intptr_t slot);
void QFinalState_SuperTimerEvent(QFinalState* self, QTimerEvent* event);
void QFinalState_ChildEvent(QFinalState* self, QChildEvent* event);
void QFinalState_OnChildEvent(QFinalState* self, intptr_t slot);
void QFinalState_SuperChildEvent(QFinalState* self, QChildEvent* event);
void QFinalState_CustomEvent(QFinalState* self, QEvent* event);
void QFinalState_OnCustomEvent(QFinalState* self, intptr_t slot);
void QFinalState_SuperCustomEvent(QFinalState* self, QEvent* event);
void QFinalState_ConnectNotify(QFinalState* self, const QMetaMethod* signal);
void QFinalState_OnConnectNotify(QFinalState* self, intptr_t slot);
void QFinalState_SuperConnectNotify(QFinalState* self, const QMetaMethod* signal);
void QFinalState_DisconnectNotify(QFinalState* self, const QMetaMethod* signal);
void QFinalState_OnDisconnectNotify(QFinalState* self, intptr_t slot);
void QFinalState_SuperDisconnectNotify(QFinalState* self, const QMetaMethod* signal);
QObject* QFinalState_Sender(const QFinalState* self);
void QFinalState_OnSender(const QFinalState* self, intptr_t slot);
QObject* QFinalState_SuperSender(const QFinalState* self);
int QFinalState_SenderSignalIndex(const QFinalState* self);
void QFinalState_OnSenderSignalIndex(const QFinalState* self, intptr_t slot);
int QFinalState_SuperSenderSignalIndex(const QFinalState* self);
int QFinalState_Receivers(const QFinalState* self, const char* signal);
void QFinalState_OnReceivers(const QFinalState* self, intptr_t slot);
int QFinalState_SuperReceivers(const QFinalState* self, const char* signal);
bool QFinalState_IsSignalConnected(const QFinalState* self, const QMetaMethod* signal);
void QFinalState_OnIsSignalConnected(const QFinalState* self, intptr_t slot);
bool QFinalState_SuperIsSignalConnected(const QFinalState* self, const QMetaMethod* signal);
void QFinalState_Delete(QFinalState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
