#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQLOGVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQLOGVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLogValueAxis QLogValueAxis;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLogValueAxis* QLogValueAxis_new();
QLogValueAxis* QLogValueAxis_new2(QObject* parent);
QMetaObject* QLogValueAxis_MetaObject(const QLogValueAxis* self);
void* QLogValueAxis_Metacast(QLogValueAxis* self, const char* param1);
int QLogValueAxis_Metacall(QLogValueAxis* self, int param1, int param2, void** param3);
void QLogValueAxis_OnMetacall(QLogValueAxis* self, intptr_t slot);
int QLogValueAxis_QBaseMetacall(QLogValueAxis* self, int param1, int param2, void** param3);
libqt_string QLogValueAxis_Tr(const char* s);
int QLogValueAxis_Type(const QLogValueAxis* self);
void QLogValueAxis_OnType(const QLogValueAxis* self, intptr_t slot);
int QLogValueAxis_QBaseType(const QLogValueAxis* self);
void QLogValueAxis_SetMin(QLogValueAxis* self, double min);
double QLogValueAxis_Min(const QLogValueAxis* self);
void QLogValueAxis_SetMax(QLogValueAxis* self, double max);
double QLogValueAxis_Max(const QLogValueAxis* self);
void QLogValueAxis_SetRange(QLogValueAxis* self, double min, double max);
void QLogValueAxis_SetLabelFormat(QLogValueAxis* self, const libqt_string format);
libqt_string QLogValueAxis_LabelFormat(const QLogValueAxis* self);
void QLogValueAxis_SetBase(QLogValueAxis* self, double base);
double QLogValueAxis_Base(const QLogValueAxis* self);
int QLogValueAxis_TickCount(const QLogValueAxis* self);
void QLogValueAxis_SetMinorTickCount(QLogValueAxis* self, int minorTickCount);
int QLogValueAxis_MinorTickCount(const QLogValueAxis* self);
void QLogValueAxis_MinChanged(QLogValueAxis* self, double min);
void QLogValueAxis_Connect_MinChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_MaxChanged(QLogValueAxis* self, double max);
void QLogValueAxis_Connect_MaxChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_RangeChanged(QLogValueAxis* self, double min, double max);
void QLogValueAxis_Connect_RangeChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_LabelFormatChanged(QLogValueAxis* self, const libqt_string format);
void QLogValueAxis_Connect_LabelFormatChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_BaseChanged(QLogValueAxis* self, double base);
void QLogValueAxis_Connect_BaseChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_TickCountChanged(QLogValueAxis* self, int tickCount);
void QLogValueAxis_Connect_TickCountChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_MinorTickCountChanged(QLogValueAxis* self, int minorTickCount);
void QLogValueAxis_Connect_MinorTickCountChanged(QLogValueAxis* self, intptr_t slot);
libqt_string QLogValueAxis_Tr2(const char* s, const char* c);
libqt_string QLogValueAxis_Tr3(const char* s, const char* c, int n);
bool QLogValueAxis_Event(QLogValueAxis* self, QEvent* event);
void QLogValueAxis_OnEvent(QLogValueAxis* self, intptr_t slot);
bool QLogValueAxis_QBaseEvent(QLogValueAxis* self, QEvent* event);
bool QLogValueAxis_EventFilter(QLogValueAxis* self, QObject* watched, QEvent* event);
void QLogValueAxis_OnEventFilter(QLogValueAxis* self, intptr_t slot);
bool QLogValueAxis_QBaseEventFilter(QLogValueAxis* self, QObject* watched, QEvent* event);
void QLogValueAxis_TimerEvent(QLogValueAxis* self, QTimerEvent* event);
void QLogValueAxis_OnTimerEvent(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_QBaseTimerEvent(QLogValueAxis* self, QTimerEvent* event);
void QLogValueAxis_ChildEvent(QLogValueAxis* self, QChildEvent* event);
void QLogValueAxis_OnChildEvent(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_QBaseChildEvent(QLogValueAxis* self, QChildEvent* event);
void QLogValueAxis_CustomEvent(QLogValueAxis* self, QEvent* event);
void QLogValueAxis_OnCustomEvent(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_QBaseCustomEvent(QLogValueAxis* self, QEvent* event);
void QLogValueAxis_ConnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
void QLogValueAxis_OnConnectNotify(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_QBaseConnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
void QLogValueAxis_DisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
void QLogValueAxis_OnDisconnectNotify(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_QBaseDisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
QObject* QLogValueAxis_Sender(const QLogValueAxis* self);
void QLogValueAxis_OnSender(const QLogValueAxis* self, intptr_t slot);
QObject* QLogValueAxis_QBaseSender(const QLogValueAxis* self);
int QLogValueAxis_SenderSignalIndex(const QLogValueAxis* self);
void QLogValueAxis_OnSenderSignalIndex(const QLogValueAxis* self, intptr_t slot);
int QLogValueAxis_QBaseSenderSignalIndex(const QLogValueAxis* self);
int QLogValueAxis_Receivers(const QLogValueAxis* self, const char* signal);
void QLogValueAxis_OnReceivers(const QLogValueAxis* self, intptr_t slot);
int QLogValueAxis_QBaseReceivers(const QLogValueAxis* self, const char* signal);
bool QLogValueAxis_IsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal);
void QLogValueAxis_OnIsSignalConnected(const QLogValueAxis* self, intptr_t slot);
bool QLogValueAxis_QBaseIsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal);
void QLogValueAxis_Delete(QLogValueAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
