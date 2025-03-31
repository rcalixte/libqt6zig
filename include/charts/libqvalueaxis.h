#pragma once
#ifndef SRC_CHARTSC_LIBQVALUEAXIS_H
#define SRC_CHARTSC_LIBQVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValueAxis QValueAxis;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QValueAxis::TickType TickType; // C++ enum
#else
typedef int TickType; // C ABI enum
#endif

QValueAxis* QValueAxis_new();
QValueAxis* QValueAxis_new2(QObject* parent);
QMetaObject* QValueAxis_MetaObject(const QValueAxis* self);
void* QValueAxis_Metacast(QValueAxis* self, const char* param1);
int QValueAxis_Metacall(QValueAxis* self, int param1, int param2, void** param3);
void QValueAxis_OnMetacall(QValueAxis* self, intptr_t slot);
int QValueAxis_QBaseMetacall(QValueAxis* self, int param1, int param2, void** param3);
libqt_string QValueAxis_Tr(const char* s);
int QValueAxis_Type(const QValueAxis* self);
void QValueAxis_OnType(const QValueAxis* self, intptr_t slot);
int QValueAxis_QBaseType(const QValueAxis* self);
void QValueAxis_SetMin(QValueAxis* self, double min);
double QValueAxis_Min(const QValueAxis* self);
void QValueAxis_SetMax(QValueAxis* self, double max);
double QValueAxis_Max(const QValueAxis* self);
void QValueAxis_SetRange(QValueAxis* self, double min, double max);
void QValueAxis_SetTickCount(QValueAxis* self, int count);
int QValueAxis_TickCount(const QValueAxis* self);
void QValueAxis_SetMinorTickCount(QValueAxis* self, int count);
int QValueAxis_MinorTickCount(const QValueAxis* self);
void QValueAxis_SetTickAnchor(QValueAxis* self, double anchor);
double QValueAxis_TickAnchor(const QValueAxis* self);
void QValueAxis_SetTickInterval(QValueAxis* self, double insterval);
double QValueAxis_TickInterval(const QValueAxis* self);
void QValueAxis_SetTickType(QValueAxis* self, int typeVal);
int QValueAxis_TickType(const QValueAxis* self);
void QValueAxis_SetLabelFormat(QValueAxis* self, libqt_string format);
libqt_string QValueAxis_LabelFormat(const QValueAxis* self);
void QValueAxis_ApplyNiceNumbers(QValueAxis* self);
void QValueAxis_MinChanged(QValueAxis* self, double min);
void QValueAxis_Connect_MinChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_MaxChanged(QValueAxis* self, double max);
void QValueAxis_Connect_MaxChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_RangeChanged(QValueAxis* self, double min, double max);
void QValueAxis_Connect_RangeChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_TickCountChanged(QValueAxis* self, int tickCount);
void QValueAxis_Connect_TickCountChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_MinorTickCountChanged(QValueAxis* self, int tickCount);
void QValueAxis_Connect_MinorTickCountChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_LabelFormatChanged(QValueAxis* self, libqt_string format);
void QValueAxis_Connect_LabelFormatChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_TickIntervalChanged(QValueAxis* self, double interval);
void QValueAxis_Connect_TickIntervalChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_TickAnchorChanged(QValueAxis* self, double anchor);
void QValueAxis_Connect_TickAnchorChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_TickTypeChanged(QValueAxis* self, int typeVal);
void QValueAxis_Connect_TickTypeChanged(QValueAxis* self, intptr_t slot);
libqt_string QValueAxis_Tr2(const char* s, const char* c);
libqt_string QValueAxis_Tr3(const char* s, const char* c, int n);
bool QValueAxis_Event(QValueAxis* self, QEvent* event);
void QValueAxis_OnEvent(QValueAxis* self, intptr_t slot);
bool QValueAxis_QBaseEvent(QValueAxis* self, QEvent* event);
bool QValueAxis_EventFilter(QValueAxis* self, QObject* watched, QEvent* event);
void QValueAxis_OnEventFilter(QValueAxis* self, intptr_t slot);
bool QValueAxis_QBaseEventFilter(QValueAxis* self, QObject* watched, QEvent* event);
void QValueAxis_TimerEvent(QValueAxis* self, QTimerEvent* event);
void QValueAxis_OnTimerEvent(QValueAxis* self, intptr_t slot);
void QValueAxis_QBaseTimerEvent(QValueAxis* self, QTimerEvent* event);
void QValueAxis_ChildEvent(QValueAxis* self, QChildEvent* event);
void QValueAxis_OnChildEvent(QValueAxis* self, intptr_t slot);
void QValueAxis_QBaseChildEvent(QValueAxis* self, QChildEvent* event);
void QValueAxis_CustomEvent(QValueAxis* self, QEvent* event);
void QValueAxis_OnCustomEvent(QValueAxis* self, intptr_t slot);
void QValueAxis_QBaseCustomEvent(QValueAxis* self, QEvent* event);
void QValueAxis_ConnectNotify(QValueAxis* self, QMetaMethod* signal);
void QValueAxis_OnConnectNotify(QValueAxis* self, intptr_t slot);
void QValueAxis_QBaseConnectNotify(QValueAxis* self, QMetaMethod* signal);
void QValueAxis_DisconnectNotify(QValueAxis* self, QMetaMethod* signal);
void QValueAxis_OnDisconnectNotify(QValueAxis* self, intptr_t slot);
void QValueAxis_QBaseDisconnectNotify(QValueAxis* self, QMetaMethod* signal);
QObject* QValueAxis_Sender(const QValueAxis* self);
void QValueAxis_OnSender(const QValueAxis* self, intptr_t slot);
QObject* QValueAxis_QBaseSender(const QValueAxis* self);
int QValueAxis_SenderSignalIndex(const QValueAxis* self);
void QValueAxis_OnSenderSignalIndex(const QValueAxis* self, intptr_t slot);
int QValueAxis_QBaseSenderSignalIndex(const QValueAxis* self);
int QValueAxis_Receivers(const QValueAxis* self, const char* signal);
void QValueAxis_OnReceivers(const QValueAxis* self, intptr_t slot);
int QValueAxis_QBaseReceivers(const QValueAxis* self, const char* signal);
bool QValueAxis_IsSignalConnected(const QValueAxis* self, QMetaMethod* signal);
void QValueAxis_OnIsSignalConnected(const QValueAxis* self, intptr_t slot);
bool QValueAxis_QBaseIsSignalConnected(const QValueAxis* self, QMetaMethod* signal);
void QValueAxis_Delete(QValueAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
