#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKSET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QCandlestickSet QCandlestickSet;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickSet* QCandlestickSet_new();
QCandlestickSet* QCandlestickSet_new2(double open, double high, double low, double close);
QCandlestickSet* QCandlestickSet_new3(double timestamp);
QCandlestickSet* QCandlestickSet_new4(double timestamp, QObject* parent);
QCandlestickSet* QCandlestickSet_new5(double open, double high, double low, double close, double timestamp);
QCandlestickSet* QCandlestickSet_new6(double open, double high, double low, double close, double timestamp, QObject* parent);
QMetaObject* QCandlestickSet_MetaObject(const QCandlestickSet* self);
void* QCandlestickSet_Metacast(QCandlestickSet* self, const char* param1);
int QCandlestickSet_Metacall(QCandlestickSet* self, int param1, int param2, void** param3);
void QCandlestickSet_OnMetacall(QCandlestickSet* self, intptr_t slot);
int QCandlestickSet_QBaseMetacall(QCandlestickSet* self, int param1, int param2, void** param3);
libqt_string QCandlestickSet_Tr(const char* s);
void QCandlestickSet_SetTimestamp(QCandlestickSet* self, double timestamp);
double QCandlestickSet_Timestamp(const QCandlestickSet* self);
void QCandlestickSet_SetOpen(QCandlestickSet* self, double open);
double QCandlestickSet_Open(const QCandlestickSet* self);
void QCandlestickSet_SetHigh(QCandlestickSet* self, double high);
double QCandlestickSet_High(const QCandlestickSet* self);
void QCandlestickSet_SetLow(QCandlestickSet* self, double low);
double QCandlestickSet_Low(const QCandlestickSet* self);
void QCandlestickSet_SetClose(QCandlestickSet* self, double close);
double QCandlestickSet_Close(const QCandlestickSet* self);
void QCandlestickSet_SetBrush(QCandlestickSet* self, const QBrush* brush);
QBrush* QCandlestickSet_Brush(const QCandlestickSet* self);
void QCandlestickSet_SetPen(QCandlestickSet* self, const QPen* pen);
QPen* QCandlestickSet_Pen(const QCandlestickSet* self);
void QCandlestickSet_Clicked(QCandlestickSet* self);
void QCandlestickSet_Connect_Clicked(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_Hovered(QCandlestickSet* self, bool status);
void QCandlestickSet_Connect_Hovered(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_Pressed(QCandlestickSet* self);
void QCandlestickSet_Connect_Pressed(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_Released(QCandlestickSet* self);
void QCandlestickSet_Connect_Released(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_DoubleClicked(QCandlestickSet* self);
void QCandlestickSet_Connect_DoubleClicked(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_TimestampChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_TimestampChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_OpenChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_OpenChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_HighChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_HighChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_LowChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_LowChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_CloseChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_CloseChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_BrushChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_BrushChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_PenChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_PenChanged(QCandlestickSet* self, intptr_t slot);
libqt_string QCandlestickSet_Tr2(const char* s, const char* c);
libqt_string QCandlestickSet_Tr3(const char* s, const char* c, int n);
bool QCandlestickSet_Event(QCandlestickSet* self, QEvent* event);
void QCandlestickSet_OnEvent(QCandlestickSet* self, intptr_t slot);
bool QCandlestickSet_QBaseEvent(QCandlestickSet* self, QEvent* event);
bool QCandlestickSet_EventFilter(QCandlestickSet* self, QObject* watched, QEvent* event);
void QCandlestickSet_OnEventFilter(QCandlestickSet* self, intptr_t slot);
bool QCandlestickSet_QBaseEventFilter(QCandlestickSet* self, QObject* watched, QEvent* event);
void QCandlestickSet_TimerEvent(QCandlestickSet* self, QTimerEvent* event);
void QCandlestickSet_OnTimerEvent(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_QBaseTimerEvent(QCandlestickSet* self, QTimerEvent* event);
void QCandlestickSet_ChildEvent(QCandlestickSet* self, QChildEvent* event);
void QCandlestickSet_OnChildEvent(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_QBaseChildEvent(QCandlestickSet* self, QChildEvent* event);
void QCandlestickSet_CustomEvent(QCandlestickSet* self, QEvent* event);
void QCandlestickSet_OnCustomEvent(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_QBaseCustomEvent(QCandlestickSet* self, QEvent* event);
void QCandlestickSet_ConnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
void QCandlestickSet_OnConnectNotify(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_QBaseConnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
void QCandlestickSet_DisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
void QCandlestickSet_OnDisconnectNotify(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_QBaseDisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
QObject* QCandlestickSet_Sender(const QCandlestickSet* self);
void QCandlestickSet_OnSender(const QCandlestickSet* self, intptr_t slot);
QObject* QCandlestickSet_QBaseSender(const QCandlestickSet* self);
int QCandlestickSet_SenderSignalIndex(const QCandlestickSet* self);
void QCandlestickSet_OnSenderSignalIndex(const QCandlestickSet* self, intptr_t slot);
int QCandlestickSet_QBaseSenderSignalIndex(const QCandlestickSet* self);
int QCandlestickSet_Receivers(const QCandlestickSet* self, const char* signal);
void QCandlestickSet_OnReceivers(const QCandlestickSet* self, intptr_t slot);
int QCandlestickSet_QBaseReceivers(const QCandlestickSet* self, const char* signal);
bool QCandlestickSet_IsSignalConnected(const QCandlestickSet* self, const QMetaMethod* signal);
void QCandlestickSet_OnIsSignalConnected(const QCandlestickSet* self, intptr_t slot);
bool QCandlestickSet_QBaseIsSignalConnected(const QCandlestickSet* self, const QMetaMethod* signal);
void QCandlestickSet_Delete(QCandlestickSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
