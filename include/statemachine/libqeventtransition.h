#pragma once
#ifndef SRC_STATEMACHINEC_LIBQEVENTTRANSITION_H
#define SRC_STATEMACHINEC_LIBQEVENTTRANSITION_H

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
typedef struct QEventTransition QEventTransition;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QEventTransition* QEventTransition_new();
QEventTransition* QEventTransition_new2(QObject* object, int typeVal);
QEventTransition* QEventTransition_new3(QState* sourceState);
QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState);
QMetaObject* QEventTransition_MetaObject(const QEventTransition* self);
void* QEventTransition_Metacast(QEventTransition* self, const char* param1);
int QEventTransition_Metacall(QEventTransition* self, int param1, int param2, void** param3);
QObject* QEventTransition_EventSource(const QEventTransition* self);
void QEventTransition_SetEventSource(QEventTransition* self, QObject* object);
int QEventTransition_EventType(const QEventTransition* self);
void QEventTransition_SetEventType(QEventTransition* self, int typeVal);
bool QEventTransition_EventTest(QEventTransition* self, QEvent* event);
void QEventTransition_OnTransition(QEventTransition* self, QEvent* event);
bool QEventTransition_Event(QEventTransition* self, QEvent* e);
void QEventTransition_OnMetaObject(const QEventTransition* self, intptr_t slot);
QMetaObject* QEventTransition_SuperMetaObject(const QEventTransition* self);
void QEventTransition_OnMetacast(QEventTransition* self, intptr_t slot);
void* QEventTransition_SuperMetacast(QEventTransition* self, const char* param1);
void QEventTransition_OnMetacall(QEventTransition* self, intptr_t slot);
int QEventTransition_SuperMetacall(QEventTransition* self, int param1, int param2, void** param3);
void QEventTransition_OnEventTest(QEventTransition* self, intptr_t slot);
bool QEventTransition_SuperEventTest(QEventTransition* self, QEvent* event);
void QEventTransition_OnOnTransition(QEventTransition* self, intptr_t slot);
void QEventTransition_SuperOnTransition(QEventTransition* self, QEvent* event);
void QEventTransition_OnEvent(QEventTransition* self, intptr_t slot);
bool QEventTransition_SuperEvent(QEventTransition* self, QEvent* e);
bool QEventTransition_EventFilter(QEventTransition* self, QObject* watched, QEvent* event);
void QEventTransition_OnEventFilter(QEventTransition* self, intptr_t slot);
bool QEventTransition_SuperEventFilter(QEventTransition* self, QObject* watched, QEvent* event);
void QEventTransition_TimerEvent(QEventTransition* self, QTimerEvent* event);
void QEventTransition_OnTimerEvent(QEventTransition* self, intptr_t slot);
void QEventTransition_SuperTimerEvent(QEventTransition* self, QTimerEvent* event);
void QEventTransition_ChildEvent(QEventTransition* self, QChildEvent* event);
void QEventTransition_OnChildEvent(QEventTransition* self, intptr_t slot);
void QEventTransition_SuperChildEvent(QEventTransition* self, QChildEvent* event);
void QEventTransition_CustomEvent(QEventTransition* self, QEvent* event);
void QEventTransition_OnCustomEvent(QEventTransition* self, intptr_t slot);
void QEventTransition_SuperCustomEvent(QEventTransition* self, QEvent* event);
void QEventTransition_ConnectNotify(QEventTransition* self, const QMetaMethod* signal);
void QEventTransition_OnConnectNotify(QEventTransition* self, intptr_t slot);
void QEventTransition_SuperConnectNotify(QEventTransition* self, const QMetaMethod* signal);
void QEventTransition_DisconnectNotify(QEventTransition* self, const QMetaMethod* signal);
void QEventTransition_OnDisconnectNotify(QEventTransition* self, intptr_t slot);
void QEventTransition_SuperDisconnectNotify(QEventTransition* self, const QMetaMethod* signal);
QObject* QEventTransition_Sender(const QEventTransition* self);
void QEventTransition_OnSender(const QEventTransition* self, intptr_t slot);
QObject* QEventTransition_SuperSender(const QEventTransition* self);
int QEventTransition_SenderSignalIndex(const QEventTransition* self);
void QEventTransition_OnSenderSignalIndex(const QEventTransition* self, intptr_t slot);
int QEventTransition_SuperSenderSignalIndex(const QEventTransition* self);
int QEventTransition_Receivers(const QEventTransition* self, const char* signal);
void QEventTransition_OnReceivers(const QEventTransition* self, intptr_t slot);
int QEventTransition_SuperReceivers(const QEventTransition* self, const char* signal);
bool QEventTransition_IsSignalConnected(const QEventTransition* self, const QMetaMethod* signal);
void QEventTransition_OnIsSignalConnected(const QEventTransition* self, intptr_t slot);
bool QEventTransition_SuperIsSignalConnected(const QEventTransition* self, const QMetaMethod* signal);
void QEventTransition_Delete(QEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
