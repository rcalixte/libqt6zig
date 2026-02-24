#pragma once
#ifndef SRC_STATEMACHINEC_LIBQKEYEVENTTRANSITION_H
#define SRC_STATEMACHINEC_LIBQKEYEVENTTRANSITION_H

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
typedef struct QKeyEventTransition QKeyEventTransition;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QKeyEventTransition* QKeyEventTransition_new();
QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int typeVal, int key);
QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState);
QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState);
QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self);
void* QKeyEventTransition_Metacast(QKeyEventTransition* self, const char* param1);
int QKeyEventTransition_Metacall(QKeyEventTransition* self, int param1, int param2, void** param3);
int QKeyEventTransition_Key(const QKeyEventTransition* self);
void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key);
int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self);
void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers);
void QKeyEventTransition_OnTransition(QKeyEventTransition* self, QEvent* event);
bool QKeyEventTransition_EventTest(QKeyEventTransition* self, QEvent* event);
void QKeyEventTransition_OnMetaObject(const QKeyEventTransition* self, intptr_t slot);
QMetaObject* QKeyEventTransition_SuperMetaObject(const QKeyEventTransition* self);
void QKeyEventTransition_OnMetacast(QKeyEventTransition* self, intptr_t slot);
void* QKeyEventTransition_SuperMetacast(QKeyEventTransition* self, const char* param1);
void QKeyEventTransition_OnMetacall(QKeyEventTransition* self, intptr_t slot);
int QKeyEventTransition_SuperMetacall(QKeyEventTransition* self, int param1, int param2, void** param3);
void QKeyEventTransition_OnOnTransition(QKeyEventTransition* self, intptr_t slot);
void QKeyEventTransition_SuperOnTransition(QKeyEventTransition* self, QEvent* event);
void QKeyEventTransition_OnEventTest(QKeyEventTransition* self, intptr_t slot);
bool QKeyEventTransition_SuperEventTest(QKeyEventTransition* self, QEvent* event);
bool QKeyEventTransition_Event(QKeyEventTransition* self, QEvent* e);
void QKeyEventTransition_OnEvent(QKeyEventTransition* self, intptr_t slot);
bool QKeyEventTransition_SuperEvent(QKeyEventTransition* self, QEvent* e);
bool QKeyEventTransition_EventFilter(QKeyEventTransition* self, QObject* watched, QEvent* event);
void QKeyEventTransition_OnEventFilter(QKeyEventTransition* self, intptr_t slot);
bool QKeyEventTransition_SuperEventFilter(QKeyEventTransition* self, QObject* watched, QEvent* event);
void QKeyEventTransition_TimerEvent(QKeyEventTransition* self, QTimerEvent* event);
void QKeyEventTransition_OnTimerEvent(QKeyEventTransition* self, intptr_t slot);
void QKeyEventTransition_SuperTimerEvent(QKeyEventTransition* self, QTimerEvent* event);
void QKeyEventTransition_ChildEvent(QKeyEventTransition* self, QChildEvent* event);
void QKeyEventTransition_OnChildEvent(QKeyEventTransition* self, intptr_t slot);
void QKeyEventTransition_SuperChildEvent(QKeyEventTransition* self, QChildEvent* event);
void QKeyEventTransition_CustomEvent(QKeyEventTransition* self, QEvent* event);
void QKeyEventTransition_OnCustomEvent(QKeyEventTransition* self, intptr_t slot);
void QKeyEventTransition_SuperCustomEvent(QKeyEventTransition* self, QEvent* event);
void QKeyEventTransition_ConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
void QKeyEventTransition_OnConnectNotify(QKeyEventTransition* self, intptr_t slot);
void QKeyEventTransition_SuperConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
void QKeyEventTransition_DisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
void QKeyEventTransition_OnDisconnectNotify(QKeyEventTransition* self, intptr_t slot);
void QKeyEventTransition_SuperDisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
QObject* QKeyEventTransition_Sender(const QKeyEventTransition* self);
void QKeyEventTransition_OnSender(const QKeyEventTransition* self, intptr_t slot);
QObject* QKeyEventTransition_SuperSender(const QKeyEventTransition* self);
int QKeyEventTransition_SenderSignalIndex(const QKeyEventTransition* self);
void QKeyEventTransition_OnSenderSignalIndex(const QKeyEventTransition* self, intptr_t slot);
int QKeyEventTransition_SuperSenderSignalIndex(const QKeyEventTransition* self);
int QKeyEventTransition_Receivers(const QKeyEventTransition* self, const char* signal);
void QKeyEventTransition_OnReceivers(const QKeyEventTransition* self, intptr_t slot);
int QKeyEventTransition_SuperReceivers(const QKeyEventTransition* self, const char* signal);
bool QKeyEventTransition_IsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal);
void QKeyEventTransition_OnIsSignalConnected(const QKeyEventTransition* self, intptr_t slot);
bool QKeyEventTransition_SuperIsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal);
void QKeyEventTransition_Delete(QKeyEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
