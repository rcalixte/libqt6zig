#pragma once
#ifndef SRCC_LIBQPROPERTYANIMATION_H
#define SRCC_LIBQPROPERTYANIMATION_H

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
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPropertyAnimation QPropertyAnimation;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

QPropertyAnimation* QPropertyAnimation_new();
QPropertyAnimation* QPropertyAnimation_new2(QObject* target, libqt_string propertyName);
QPropertyAnimation* QPropertyAnimation_new3(QObject* parent);
QPropertyAnimation* QPropertyAnimation_new4(QObject* target, libqt_string propertyName, QObject* parent);
QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self);
void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1);
int QPropertyAnimation_Metacall(QPropertyAnimation* self, int param1, int param2, void** param3);
void QPropertyAnimation_OnMetacall(QPropertyAnimation* self, intptr_t slot);
int QPropertyAnimation_QBaseMetacall(QPropertyAnimation* self, int param1, int param2, void** param3);
libqt_string QPropertyAnimation_Tr(const char* s);
QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self);
void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target);
libqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self);
void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, libqt_string propertyName);
bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_OnEvent(QPropertyAnimation* self, intptr_t slot);
bool QPropertyAnimation_QBaseEvent(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, QVariant* value);
void QPropertyAnimation_OnUpdateCurrentValue(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseUpdateCurrentValue(QPropertyAnimation* self, QVariant* value);
void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState);
void QPropertyAnimation_OnUpdateState(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseUpdateState(QPropertyAnimation* self, int newState, int oldState);
libqt_string QPropertyAnimation_Tr2(const char* s, const char* c);
libqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n);
int QPropertyAnimation_Duration(const QPropertyAnimation* self);
void QPropertyAnimation_OnDuration(const QPropertyAnimation* self, intptr_t slot);
int QPropertyAnimation_QBaseDuration(const QPropertyAnimation* self);
void QPropertyAnimation_UpdateCurrentTime(QPropertyAnimation* self, int param1);
void QPropertyAnimation_OnUpdateCurrentTime(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseUpdateCurrentTime(QPropertyAnimation* self, int param1);
void QPropertyAnimation_UpdateDirection(QPropertyAnimation* self, int direction);
void QPropertyAnimation_OnUpdateDirection(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseUpdateDirection(QPropertyAnimation* self, int direction);
bool QPropertyAnimation_EventFilter(QPropertyAnimation* self, QObject* watched, QEvent* event);
void QPropertyAnimation_OnEventFilter(QPropertyAnimation* self, intptr_t slot);
bool QPropertyAnimation_QBaseEventFilter(QPropertyAnimation* self, QObject* watched, QEvent* event);
void QPropertyAnimation_TimerEvent(QPropertyAnimation* self, QTimerEvent* event);
void QPropertyAnimation_OnTimerEvent(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseTimerEvent(QPropertyAnimation* self, QTimerEvent* event);
void QPropertyAnimation_ChildEvent(QPropertyAnimation* self, QChildEvent* event);
void QPropertyAnimation_OnChildEvent(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseChildEvent(QPropertyAnimation* self, QChildEvent* event);
void QPropertyAnimation_CustomEvent(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_OnCustomEvent(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseCustomEvent(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_ConnectNotify(QPropertyAnimation* self, QMetaMethod* signal);
void QPropertyAnimation_OnConnectNotify(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseConnectNotify(QPropertyAnimation* self, QMetaMethod* signal);
void QPropertyAnimation_DisconnectNotify(QPropertyAnimation* self, QMetaMethod* signal);
void QPropertyAnimation_OnDisconnectNotify(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseDisconnectNotify(QPropertyAnimation* self, QMetaMethod* signal);
QVariant* QPropertyAnimation_Interpolated(const QPropertyAnimation* self, QVariant* from, QVariant* to, double progress);
void QPropertyAnimation_OnInterpolated(const QPropertyAnimation* self, intptr_t slot);
QVariant* QPropertyAnimation_QBaseInterpolated(const QPropertyAnimation* self, QVariant* from, QVariant* to, double progress);
QObject* QPropertyAnimation_Sender(const QPropertyAnimation* self);
void QPropertyAnimation_OnSender(const QPropertyAnimation* self, intptr_t slot);
QObject* QPropertyAnimation_QBaseSender(const QPropertyAnimation* self);
int QPropertyAnimation_SenderSignalIndex(const QPropertyAnimation* self);
void QPropertyAnimation_OnSenderSignalIndex(const QPropertyAnimation* self, intptr_t slot);
int QPropertyAnimation_QBaseSenderSignalIndex(const QPropertyAnimation* self);
int QPropertyAnimation_Receivers(const QPropertyAnimation* self, const char* signal);
void QPropertyAnimation_OnReceivers(const QPropertyAnimation* self, intptr_t slot);
int QPropertyAnimation_QBaseReceivers(const QPropertyAnimation* self, const char* signal);
bool QPropertyAnimation_IsSignalConnected(const QPropertyAnimation* self, QMetaMethod* signal);
void QPropertyAnimation_OnIsSignalConnected(const QPropertyAnimation* self, intptr_t slot);
bool QPropertyAnimation_QBaseIsSignalConnected(const QPropertyAnimation* self, QMetaMethod* signal);
void QPropertyAnimation_Delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
