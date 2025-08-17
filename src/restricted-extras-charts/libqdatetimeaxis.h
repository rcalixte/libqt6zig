#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQDATETIMEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQDATETIMEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QDateTimeAxis QDateTimeAxis;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDateTimeAxis* QDateTimeAxis_new();
QDateTimeAxis* QDateTimeAxis_new2(QObject* parent);
QMetaObject* QDateTimeAxis_MetaObject(const QDateTimeAxis* self);
void* QDateTimeAxis_Metacast(QDateTimeAxis* self, const char* param1);
int QDateTimeAxis_Metacall(QDateTimeAxis* self, int param1, int param2, void** param3);
void QDateTimeAxis_OnMetacall(QDateTimeAxis* self, intptr_t slot);
int QDateTimeAxis_QBaseMetacall(QDateTimeAxis* self, int param1, int param2, void** param3);
libqt_string QDateTimeAxis_Tr(const char* s);
int QDateTimeAxis_Type(const QDateTimeAxis* self);
void QDateTimeAxis_OnType(const QDateTimeAxis* self, intptr_t slot);
int QDateTimeAxis_QBaseType(const QDateTimeAxis* self);
void QDateTimeAxis_SetMin(QDateTimeAxis* self, QDateTime* min);
QDateTime* QDateTimeAxis_Min(const QDateTimeAxis* self);
void QDateTimeAxis_SetMax(QDateTimeAxis* self, QDateTime* max);
QDateTime* QDateTimeAxis_Max(const QDateTimeAxis* self);
void QDateTimeAxis_SetRange(QDateTimeAxis* self, QDateTime* min, QDateTime* max);
void QDateTimeAxis_SetFormat(QDateTimeAxis* self, libqt_string format);
libqt_string QDateTimeAxis_Format(const QDateTimeAxis* self);
void QDateTimeAxis_SetTickCount(QDateTimeAxis* self, int count);
int QDateTimeAxis_TickCount(const QDateTimeAxis* self);
void QDateTimeAxis_MinChanged(QDateTimeAxis* self, QDateTime* min);
void QDateTimeAxis_Connect_MinChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_MaxChanged(QDateTimeAxis* self, QDateTime* max);
void QDateTimeAxis_Connect_MaxChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_RangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max);
void QDateTimeAxis_Connect_RangeChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_FormatChanged(QDateTimeAxis* self, libqt_string format);
void QDateTimeAxis_Connect_FormatChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_TickCountChanged(QDateTimeAxis* self, int tick);
void QDateTimeAxis_Connect_TickCountChanged(QDateTimeAxis* self, intptr_t slot);
libqt_string QDateTimeAxis_Tr2(const char* s, const char* c);
libqt_string QDateTimeAxis_Tr3(const char* s, const char* c, int n);
bool QDateTimeAxis_Event(QDateTimeAxis* self, QEvent* event);
void QDateTimeAxis_OnEvent(QDateTimeAxis* self, intptr_t slot);
bool QDateTimeAxis_QBaseEvent(QDateTimeAxis* self, QEvent* event);
bool QDateTimeAxis_EventFilter(QDateTimeAxis* self, QObject* watched, QEvent* event);
void QDateTimeAxis_OnEventFilter(QDateTimeAxis* self, intptr_t slot);
bool QDateTimeAxis_QBaseEventFilter(QDateTimeAxis* self, QObject* watched, QEvent* event);
void QDateTimeAxis_TimerEvent(QDateTimeAxis* self, QTimerEvent* event);
void QDateTimeAxis_OnTimerEvent(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_QBaseTimerEvent(QDateTimeAxis* self, QTimerEvent* event);
void QDateTimeAxis_ChildEvent(QDateTimeAxis* self, QChildEvent* event);
void QDateTimeAxis_OnChildEvent(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_QBaseChildEvent(QDateTimeAxis* self, QChildEvent* event);
void QDateTimeAxis_CustomEvent(QDateTimeAxis* self, QEvent* event);
void QDateTimeAxis_OnCustomEvent(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_QBaseCustomEvent(QDateTimeAxis* self, QEvent* event);
void QDateTimeAxis_ConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
void QDateTimeAxis_OnConnectNotify(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_QBaseConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
void QDateTimeAxis_DisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
void QDateTimeAxis_OnDisconnectNotify(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_QBaseDisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
QObject* QDateTimeAxis_Sender(const QDateTimeAxis* self);
void QDateTimeAxis_OnSender(const QDateTimeAxis* self, intptr_t slot);
QObject* QDateTimeAxis_QBaseSender(const QDateTimeAxis* self);
int QDateTimeAxis_SenderSignalIndex(const QDateTimeAxis* self);
void QDateTimeAxis_OnSenderSignalIndex(const QDateTimeAxis* self, intptr_t slot);
int QDateTimeAxis_QBaseSenderSignalIndex(const QDateTimeAxis* self);
int QDateTimeAxis_Receivers(const QDateTimeAxis* self, const char* signal);
void QDateTimeAxis_OnReceivers(const QDateTimeAxis* self, intptr_t slot);
int QDateTimeAxis_QBaseReceivers(const QDateTimeAxis* self, const char* signal);
bool QDateTimeAxis_IsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal);
void QDateTimeAxis_OnIsSignalConnected(const QDateTimeAxis* self, intptr_t slot);
bool QDateTimeAxis_QBaseIsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal);
void QDateTimeAxis_Delete(QDateTimeAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
