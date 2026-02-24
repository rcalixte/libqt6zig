#pragma once
#ifndef SRC_STATEMACHINEC_LIBQMOUSEEVENTTRANSITION_H
#define SRC_STATEMACHINEC_LIBQMOUSEEVENTTRANSITION_H

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
typedef struct QMouseEventTransition QMouseEventTransition;
typedef struct QObject QObject;
typedef struct QPainterPath QPainterPath;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QMouseEventTransition* QMouseEventTransition_new();
QMouseEventTransition* QMouseEventTransition_new2(QObject* object, int typeVal, int button);
QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState);
QMouseEventTransition* QMouseEventTransition_new4(QObject* object, int typeVal, int button, QState* sourceState);
QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self);
void* QMouseEventTransition_Metacast(QMouseEventTransition* self, const char* param1);
int QMouseEventTransition_Metacall(QMouseEventTransition* self, int param1, int param2, void** param3);
int QMouseEventTransition_Button(const QMouseEventTransition* self);
void QMouseEventTransition_SetButton(QMouseEventTransition* self, int button);
int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self);
void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers);
QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self);
void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, const QPainterPath* path);
void QMouseEventTransition_OnTransition(QMouseEventTransition* self, QEvent* event);
bool QMouseEventTransition_EventTest(QMouseEventTransition* self, QEvent* event);
void QMouseEventTransition_OnMetaObject(const QMouseEventTransition* self, intptr_t slot);
QMetaObject* QMouseEventTransition_SuperMetaObject(const QMouseEventTransition* self);
void QMouseEventTransition_OnMetacast(QMouseEventTransition* self, intptr_t slot);
void* QMouseEventTransition_SuperMetacast(QMouseEventTransition* self, const char* param1);
void QMouseEventTransition_OnMetacall(QMouseEventTransition* self, intptr_t slot);
int QMouseEventTransition_SuperMetacall(QMouseEventTransition* self, int param1, int param2, void** param3);
void QMouseEventTransition_OnOnTransition(QMouseEventTransition* self, intptr_t slot);
void QMouseEventTransition_SuperOnTransition(QMouseEventTransition* self, QEvent* event);
void QMouseEventTransition_OnEventTest(QMouseEventTransition* self, intptr_t slot);
bool QMouseEventTransition_SuperEventTest(QMouseEventTransition* self, QEvent* event);
bool QMouseEventTransition_Event(QMouseEventTransition* self, QEvent* e);
void QMouseEventTransition_OnEvent(QMouseEventTransition* self, intptr_t slot);
bool QMouseEventTransition_SuperEvent(QMouseEventTransition* self, QEvent* e);
bool QMouseEventTransition_EventFilter(QMouseEventTransition* self, QObject* watched, QEvent* event);
void QMouseEventTransition_OnEventFilter(QMouseEventTransition* self, intptr_t slot);
bool QMouseEventTransition_SuperEventFilter(QMouseEventTransition* self, QObject* watched, QEvent* event);
void QMouseEventTransition_TimerEvent(QMouseEventTransition* self, QTimerEvent* event);
void QMouseEventTransition_OnTimerEvent(QMouseEventTransition* self, intptr_t slot);
void QMouseEventTransition_SuperTimerEvent(QMouseEventTransition* self, QTimerEvent* event);
void QMouseEventTransition_ChildEvent(QMouseEventTransition* self, QChildEvent* event);
void QMouseEventTransition_OnChildEvent(QMouseEventTransition* self, intptr_t slot);
void QMouseEventTransition_SuperChildEvent(QMouseEventTransition* self, QChildEvent* event);
void QMouseEventTransition_CustomEvent(QMouseEventTransition* self, QEvent* event);
void QMouseEventTransition_OnCustomEvent(QMouseEventTransition* self, intptr_t slot);
void QMouseEventTransition_SuperCustomEvent(QMouseEventTransition* self, QEvent* event);
void QMouseEventTransition_ConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal);
void QMouseEventTransition_OnConnectNotify(QMouseEventTransition* self, intptr_t slot);
void QMouseEventTransition_SuperConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal);
void QMouseEventTransition_DisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal);
void QMouseEventTransition_OnDisconnectNotify(QMouseEventTransition* self, intptr_t slot);
void QMouseEventTransition_SuperDisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal);
QObject* QMouseEventTransition_Sender(const QMouseEventTransition* self);
void QMouseEventTransition_OnSender(const QMouseEventTransition* self, intptr_t slot);
QObject* QMouseEventTransition_SuperSender(const QMouseEventTransition* self);
int QMouseEventTransition_SenderSignalIndex(const QMouseEventTransition* self);
void QMouseEventTransition_OnSenderSignalIndex(const QMouseEventTransition* self, intptr_t slot);
int QMouseEventTransition_SuperSenderSignalIndex(const QMouseEventTransition* self);
int QMouseEventTransition_Receivers(const QMouseEventTransition* self, const char* signal);
void QMouseEventTransition_OnReceivers(const QMouseEventTransition* self, intptr_t slot);
int QMouseEventTransition_SuperReceivers(const QMouseEventTransition* self, const char* signal);
bool QMouseEventTransition_IsSignalConnected(const QMouseEventTransition* self, const QMetaMethod* signal);
void QMouseEventTransition_OnIsSignalConnected(const QMouseEventTransition* self, intptr_t slot);
bool QMouseEventTransition_SuperIsSignalConnected(const QMouseEventTransition* self, const QMetaMethod* signal);
void QMouseEventTransition_Delete(QMouseEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
