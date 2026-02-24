#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVCandlestickModelMapper QVCandlestickModelMapper;
#endif

QVCandlestickModelMapper* QVCandlestickModelMapper_new();
QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent);
QMetaObject* QVCandlestickModelMapper_MetaObject(const QVCandlestickModelMapper* self);
void* QVCandlestickModelMapper_Metacast(QVCandlestickModelMapper* self, const char* param1);
int QVCandlestickModelMapper_Metacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3);
int QVCandlestickModelMapper_Orientation(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetTimestampRow(QVCandlestickModelMapper* self, int timestampRow);
int QVCandlestickModelMapper_TimestampRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetOpenRow(QVCandlestickModelMapper* self, int openRow);
int QVCandlestickModelMapper_OpenRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetHighRow(QVCandlestickModelMapper* self, int highRow);
int QVCandlestickModelMapper_HighRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLowRow(QVCandlestickModelMapper* self, int lowRow);
int QVCandlestickModelMapper_LowRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetCloseRow(QVCandlestickModelMapper* self, int closeRow);
int QVCandlestickModelMapper_CloseRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetFirstSetColumn(QVCandlestickModelMapper* self, int firstSetColumn);
int QVCandlestickModelMapper_FirstSetColumn(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLastSetColumn(QVCandlestickModelMapper* self, int lastSetColumn);
int QVCandlestickModelMapper_LastSetColumn(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_TimestampRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_TimestampRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_OpenRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_OpenRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_HighRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_HighRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_LowRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_LowRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_CloseRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_CloseRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_FirstSetColumnChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_FirstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_LastSetColumnChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_LastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_OnMetaObject(const QVCandlestickModelMapper* self, intptr_t slot);
QMetaObject* QVCandlestickModelMapper_SuperMetaObject(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnMetacast(QVCandlestickModelMapper* self, intptr_t slot);
void* QVCandlestickModelMapper_SuperMetacast(QVCandlestickModelMapper* self, const char* param1);
void QVCandlestickModelMapper_OnMetacall(QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperMetacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3);
void QVCandlestickModelMapper_OnOrientation(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperOrientation(const QVCandlestickModelMapper* self);
bool QVCandlestickModelMapper_Event(QVCandlestickModelMapper* self, QEvent* event);
void QVCandlestickModelMapper_OnEvent(QVCandlestickModelMapper* self, intptr_t slot);
bool QVCandlestickModelMapper_SuperEvent(QVCandlestickModelMapper* self, QEvent* event);
bool QVCandlestickModelMapper_EventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QVCandlestickModelMapper_OnEventFilter(QVCandlestickModelMapper* self, intptr_t slot);
bool QVCandlestickModelMapper_SuperEventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QVCandlestickModelMapper_TimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
void QVCandlestickModelMapper_OnTimerEvent(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperTimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
void QVCandlestickModelMapper_ChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
void QVCandlestickModelMapper_OnChildEvent(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
void QVCandlestickModelMapper_CustomEvent(QVCandlestickModelMapper* self, QEvent* event);
void QVCandlestickModelMapper_OnCustomEvent(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperCustomEvent(QVCandlestickModelMapper* self, QEvent* event);
void QVCandlestickModelMapper_ConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
void QVCandlestickModelMapper_OnConnectNotify(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
void QVCandlestickModelMapper_DisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
void QVCandlestickModelMapper_OnDisconnectNotify(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperDisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
void QVCandlestickModelMapper_SetTimestamp(QVCandlestickModelMapper* self, int timestamp);
void QVCandlestickModelMapper_OnSetTimestamp(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetTimestamp(QVCandlestickModelMapper* self, int timestamp);
int QVCandlestickModelMapper_Timestamp(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnTimestamp(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperTimestamp(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetOpen(QVCandlestickModelMapper* self, int open);
void QVCandlestickModelMapper_OnSetOpen(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetOpen(QVCandlestickModelMapper* self, int open);
int QVCandlestickModelMapper_Open(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnOpen(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperOpen(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetHigh(QVCandlestickModelMapper* self, int high);
void QVCandlestickModelMapper_OnSetHigh(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetHigh(QVCandlestickModelMapper* self, int high);
int QVCandlestickModelMapper_High(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnHigh(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperHigh(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLow(QVCandlestickModelMapper* self, int low);
void QVCandlestickModelMapper_OnSetLow(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetLow(QVCandlestickModelMapper* self, int low);
int QVCandlestickModelMapper_Low(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnLow(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperLow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetClose(QVCandlestickModelMapper* self, int close);
void QVCandlestickModelMapper_OnSetClose(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetClose(QVCandlestickModelMapper* self, int close);
int QVCandlestickModelMapper_Close(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnClose(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperClose(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection);
void QVCandlestickModelMapper_OnSetFirstSetSection(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection);
int QVCandlestickModelMapper_FirstSetSection(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnFirstSetSection(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperFirstSetSection(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection);
void QVCandlestickModelMapper_OnSetLastSetSection(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_SuperSetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection);
int QVCandlestickModelMapper_LastSetSection(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnLastSetSection(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperLastSetSection(const QVCandlestickModelMapper* self);
QObject* QVCandlestickModelMapper_Sender(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnSender(const QVCandlestickModelMapper* self, intptr_t slot);
QObject* QVCandlestickModelMapper_SuperSender(const QVCandlestickModelMapper* self);
int QVCandlestickModelMapper_SenderSignalIndex(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnSenderSignalIndex(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperSenderSignalIndex(const QVCandlestickModelMapper* self);
int QVCandlestickModelMapper_Receivers(const QVCandlestickModelMapper* self, const char* signal);
void QVCandlestickModelMapper_OnReceivers(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_SuperReceivers(const QVCandlestickModelMapper* self, const char* signal);
bool QVCandlestickModelMapper_IsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal);
void QVCandlestickModelMapper_OnIsSignalConnected(const QVCandlestickModelMapper* self, intptr_t slot);
bool QVCandlestickModelMapper_SuperIsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal);
void QVCandlestickModelMapper_Delete(QVCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
