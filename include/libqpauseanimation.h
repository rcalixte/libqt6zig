#pragma once
#ifndef SRCC_LIBQPAUSEANIMATION_H
#define SRCC_LIBQPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPauseAnimation* QPauseAnimation_new();
QPauseAnimation* QPauseAnimation_new2(int msecs);
QPauseAnimation* QPauseAnimation_new3(QObject* parent);
QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent);
QMetaObject* QPauseAnimation_MetaObject(const QPauseAnimation* self);
void* QPauseAnimation_Metacast(QPauseAnimation* self, const char* param1);
int QPauseAnimation_Metacall(QPauseAnimation* self, int param1, int param2, void** param3);
void QPauseAnimation_OnMetacall(QPauseAnimation* self, intptr_t slot);
int QPauseAnimation_QBaseMetacall(QPauseAnimation* self, int param1, int param2, void** param3);
libqt_string QPauseAnimation_Tr(const char* s);
int QPauseAnimation_Duration(const QPauseAnimation* self);
void QPauseAnimation_OnDuration(const QPauseAnimation* self, intptr_t slot);
int QPauseAnimation_QBaseDuration(const QPauseAnimation* self);
void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs);
bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e);
void QPauseAnimation_OnEvent(QPauseAnimation* self, intptr_t slot);
bool QPauseAnimation_QBaseEvent(QPauseAnimation* self, QEvent* e);
void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1);
void QPauseAnimation_OnUpdateCurrentTime(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseUpdateCurrentTime(QPauseAnimation* self, int param1);
libqt_string QPauseAnimation_Tr2(const char* s, const char* c);
libqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n);
void QPauseAnimation_UpdateState(QPauseAnimation* self, int newState, int oldState);
void QPauseAnimation_OnUpdateState(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseUpdateState(QPauseAnimation* self, int newState, int oldState);
void QPauseAnimation_UpdateDirection(QPauseAnimation* self, int direction);
void QPauseAnimation_OnUpdateDirection(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseUpdateDirection(QPauseAnimation* self, int direction);
bool QPauseAnimation_EventFilter(QPauseAnimation* self, QObject* watched, QEvent* event);
void QPauseAnimation_OnEventFilter(QPauseAnimation* self, intptr_t slot);
bool QPauseAnimation_QBaseEventFilter(QPauseAnimation* self, QObject* watched, QEvent* event);
void QPauseAnimation_TimerEvent(QPauseAnimation* self, QTimerEvent* event);
void QPauseAnimation_OnTimerEvent(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseTimerEvent(QPauseAnimation* self, QTimerEvent* event);
void QPauseAnimation_ChildEvent(QPauseAnimation* self, QChildEvent* event);
void QPauseAnimation_OnChildEvent(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseChildEvent(QPauseAnimation* self, QChildEvent* event);
void QPauseAnimation_CustomEvent(QPauseAnimation* self, QEvent* event);
void QPauseAnimation_OnCustomEvent(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseCustomEvent(QPauseAnimation* self, QEvent* event);
void QPauseAnimation_ConnectNotify(QPauseAnimation* self, QMetaMethod* signal);
void QPauseAnimation_OnConnectNotify(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseConnectNotify(QPauseAnimation* self, QMetaMethod* signal);
void QPauseAnimation_DisconnectNotify(QPauseAnimation* self, QMetaMethod* signal);
void QPauseAnimation_OnDisconnectNotify(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseDisconnectNotify(QPauseAnimation* self, QMetaMethod* signal);
QObject* QPauseAnimation_Sender(const QPauseAnimation* self);
void QPauseAnimation_OnSender(const QPauseAnimation* self, intptr_t slot);
QObject* QPauseAnimation_QBaseSender(const QPauseAnimation* self);
int QPauseAnimation_SenderSignalIndex(const QPauseAnimation* self);
void QPauseAnimation_OnSenderSignalIndex(const QPauseAnimation* self, intptr_t slot);
int QPauseAnimation_QBaseSenderSignalIndex(const QPauseAnimation* self);
int QPauseAnimation_Receivers(const QPauseAnimation* self, const char* signal);
void QPauseAnimation_OnReceivers(const QPauseAnimation* self, intptr_t slot);
int QPauseAnimation_QBaseReceivers(const QPauseAnimation* self, const char* signal);
bool QPauseAnimation_IsSignalConnected(const QPauseAnimation* self, QMetaMethod* signal);
void QPauseAnimation_OnIsSignalConnected(const QPauseAnimation* self, intptr_t slot);
bool QPauseAnimation_QBaseIsSignalConnected(const QPauseAnimation* self, QMetaMethod* signal);
void QPauseAnimation_Delete(QPauseAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
