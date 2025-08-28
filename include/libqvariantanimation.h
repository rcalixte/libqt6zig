#pragma once
#ifndef SRCC_LIBQVARIANTANIMATION_H
#define SRCC_LIBQVARIANTANIMATION_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
#endif

QVariantAnimation* QVariantAnimation_new();
QVariantAnimation* QVariantAnimation_new2(QObject* parent);
QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self);
void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1);
int QVariantAnimation_Metacall(QVariantAnimation* self, int param1, int param2, void** param3);
libqt_string QVariantAnimation_Tr(const char* s);
QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self);
void QVariantAnimation_SetStartValue(QVariantAnimation* self, const QVariant* value);
QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self);
void QVariantAnimation_SetEndValue(QVariantAnimation* self, const QVariant* value);
QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step);
void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, const QVariant* value);
libqt_list /* of libqt_pair  tuple of double and QVariant*  */ QVariantAnimation_KeyValues(const QVariantAnimation* self);
void QVariantAnimation_SetKeyValues(QVariantAnimation* self, const libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values);
QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self);
int QVariantAnimation_Duration(const QVariantAnimation* self);
void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs);
QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self);
void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, const QEasingCurve* easing);
void QVariantAnimation_ValueChanged(QVariantAnimation* self, const QVariant* value);
void QVariantAnimation_Connect_ValueChanged(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1);
void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState);
void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
libqt_string QVariantAnimation_Tr2(const char* s, const char* c);
libqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n);
void QVariantAnimation_OnMetacall(QVariantAnimation* self, intptr_t slot);
int QVariantAnimation_QBaseMetacall(QVariantAnimation* self, int param1, int param2, void** param3);
void QVariantAnimation_OnDuration(const QVariantAnimation* self, intptr_t slot);
int QVariantAnimation_QBaseDuration(const QVariantAnimation* self);
void QVariantAnimation_OnEvent(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_QBaseEvent(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_OnUpdateCurrentTime(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateCurrentTime(QVariantAnimation* self, int param1);
void QVariantAnimation_OnUpdateState(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateState(QVariantAnimation* self, int newState, int oldState);
void QVariantAnimation_OnUpdateCurrentValue(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
void QVariantAnimation_OnInterpolated(const QVariantAnimation* self, intptr_t slot);
QVariant* QVariantAnimation_QBaseInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
void QVariantAnimation_UpdateDirection(QVariantAnimation* self, int direction);
void QVariantAnimation_OnUpdateDirection(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateDirection(QVariantAnimation* self, int direction);
bool QVariantAnimation_EventFilter(QVariantAnimation* self, QObject* watched, QEvent* event);
void QVariantAnimation_OnEventFilter(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_QBaseEventFilter(QVariantAnimation* self, QObject* watched, QEvent* event);
void QVariantAnimation_TimerEvent(QVariantAnimation* self, QTimerEvent* event);
void QVariantAnimation_OnTimerEvent(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseTimerEvent(QVariantAnimation* self, QTimerEvent* event);
void QVariantAnimation_ChildEvent(QVariantAnimation* self, QChildEvent* event);
void QVariantAnimation_OnChildEvent(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseChildEvent(QVariantAnimation* self, QChildEvent* event);
void QVariantAnimation_CustomEvent(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_OnCustomEvent(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseCustomEvent(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_ConnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
void QVariantAnimation_OnConnectNotify(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseConnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
void QVariantAnimation_DisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
void QVariantAnimation_OnDisconnectNotify(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseDisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
QObject* QVariantAnimation_Sender(const QVariantAnimation* self);
void QVariantAnimation_OnSender(const QVariantAnimation* self, intptr_t slot);
QObject* QVariantAnimation_QBaseSender(const QVariantAnimation* self);
int QVariantAnimation_SenderSignalIndex(const QVariantAnimation* self);
void QVariantAnimation_OnSenderSignalIndex(const QVariantAnimation* self, intptr_t slot);
int QVariantAnimation_QBaseSenderSignalIndex(const QVariantAnimation* self);
int QVariantAnimation_Receivers(const QVariantAnimation* self, const char* signal);
void QVariantAnimation_OnReceivers(const QVariantAnimation* self, intptr_t slot);
int QVariantAnimation_QBaseReceivers(const QVariantAnimation* self, const char* signal);
bool QVariantAnimation_IsSignalConnected(const QVariantAnimation* self, const QMetaMethod* signal);
void QVariantAnimation_OnIsSignalConnected(const QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_QBaseIsSignalConnected(const QVariantAnimation* self, const QMetaMethod* signal);
void QVariantAnimation_Delete(QVariantAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
