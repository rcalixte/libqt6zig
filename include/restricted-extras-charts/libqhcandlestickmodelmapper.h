#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHCANDLESTICKMODELMAPPER_H

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
typedef struct QHCandlestickModelMapper QHCandlestickModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHCandlestickModelMapper* QHCandlestickModelMapper_new();
QHCandlestickModelMapper* QHCandlestickModelMapper_new2(QObject* parent);
QMetaObject* QHCandlestickModelMapper_MetaObject(const QHCandlestickModelMapper* self);
void* QHCandlestickModelMapper_Metacast(QHCandlestickModelMapper* self, const char* param1);
int QHCandlestickModelMapper_Metacall(QHCandlestickModelMapper* self, int param1, int param2, void** param3);
int QHCandlestickModelMapper_Orientation(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetTimestampColumn(QHCandlestickModelMapper* self, int timestampColumn);
int QHCandlestickModelMapper_TimestampColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetOpenColumn(QHCandlestickModelMapper* self, int openColumn);
int QHCandlestickModelMapper_OpenColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetHighColumn(QHCandlestickModelMapper* self, int highColumn);
int QHCandlestickModelMapper_HighColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetLowColumn(QHCandlestickModelMapper* self, int lowColumn);
int QHCandlestickModelMapper_LowColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetCloseColumn(QHCandlestickModelMapper* self, int closeColumn);
int QHCandlestickModelMapper_CloseColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetFirstSetRow(QHCandlestickModelMapper* self, int firstSetRow);
int QHCandlestickModelMapper_FirstSetRow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetLastSetRow(QHCandlestickModelMapper* self, int lastSetRow);
int QHCandlestickModelMapper_LastSetRow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_TimestampColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_TimestampColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_OpenColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_OpenColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_HighColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_HighColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_LowColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_LowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_CloseColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_CloseColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_FirstSetRowChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_FirstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_LastSetRowChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_LastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_OnMetaObject(const QHCandlestickModelMapper* self, intptr_t slot);
QMetaObject* QHCandlestickModelMapper_SuperMetaObject(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnMetacast(QHCandlestickModelMapper* self, intptr_t slot);
void* QHCandlestickModelMapper_SuperMetacast(QHCandlestickModelMapper* self, const char* param1);
void QHCandlestickModelMapper_OnMetacall(QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperMetacall(QHCandlestickModelMapper* self, int param1, int param2, void** param3);
void QHCandlestickModelMapper_OnOrientation(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperOrientation(const QHCandlestickModelMapper* self);
bool QHCandlestickModelMapper_Event(QHCandlestickModelMapper* self, QEvent* event);
void QHCandlestickModelMapper_OnEvent(QHCandlestickModelMapper* self, intptr_t slot);
bool QHCandlestickModelMapper_SuperEvent(QHCandlestickModelMapper* self, QEvent* event);
bool QHCandlestickModelMapper_EventFilter(QHCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QHCandlestickModelMapper_OnEventFilter(QHCandlestickModelMapper* self, intptr_t slot);
bool QHCandlestickModelMapper_SuperEventFilter(QHCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QHCandlestickModelMapper_TimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event);
void QHCandlestickModelMapper_OnTimerEvent(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperTimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event);
void QHCandlestickModelMapper_ChildEvent(QHCandlestickModelMapper* self, QChildEvent* event);
void QHCandlestickModelMapper_OnChildEvent(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperChildEvent(QHCandlestickModelMapper* self, QChildEvent* event);
void QHCandlestickModelMapper_CustomEvent(QHCandlestickModelMapper* self, QEvent* event);
void QHCandlestickModelMapper_OnCustomEvent(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperCustomEvent(QHCandlestickModelMapper* self, QEvent* event);
void QHCandlestickModelMapper_ConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
void QHCandlestickModelMapper_OnConnectNotify(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
void QHCandlestickModelMapper_DisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
void QHCandlestickModelMapper_OnDisconnectNotify(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperDisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
void QHCandlestickModelMapper_SetTimestamp(QHCandlestickModelMapper* self, int timestamp);
void QHCandlestickModelMapper_OnSetTimestamp(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetTimestamp(QHCandlestickModelMapper* self, int timestamp);
int QHCandlestickModelMapper_Timestamp(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnTimestamp(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperTimestamp(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetOpen(QHCandlestickModelMapper* self, int open);
void QHCandlestickModelMapper_OnSetOpen(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetOpen(QHCandlestickModelMapper* self, int open);
int QHCandlestickModelMapper_Open(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnOpen(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperOpen(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetHigh(QHCandlestickModelMapper* self, int high);
void QHCandlestickModelMapper_OnSetHigh(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetHigh(QHCandlestickModelMapper* self, int high);
int QHCandlestickModelMapper_High(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnHigh(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperHigh(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetLow(QHCandlestickModelMapper* self, int low);
void QHCandlestickModelMapper_OnSetLow(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetLow(QHCandlestickModelMapper* self, int low);
int QHCandlestickModelMapper_Low(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnLow(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperLow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetClose(QHCandlestickModelMapper* self, int close);
void QHCandlestickModelMapper_OnSetClose(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetClose(QHCandlestickModelMapper* self, int close);
int QHCandlestickModelMapper_Close(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnClose(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperClose(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection);
void QHCandlestickModelMapper_OnSetFirstSetSection(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection);
int QHCandlestickModelMapper_FirstSetSection(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnFirstSetSection(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperFirstSetSection(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection);
void QHCandlestickModelMapper_OnSetLastSetSection(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_SuperSetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection);
int QHCandlestickModelMapper_LastSetSection(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnLastSetSection(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperLastSetSection(const QHCandlestickModelMapper* self);
QObject* QHCandlestickModelMapper_Sender(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnSender(const QHCandlestickModelMapper* self, intptr_t slot);
QObject* QHCandlestickModelMapper_SuperSender(const QHCandlestickModelMapper* self);
int QHCandlestickModelMapper_SenderSignalIndex(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_OnSenderSignalIndex(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperSenderSignalIndex(const QHCandlestickModelMapper* self);
int QHCandlestickModelMapper_Receivers(const QHCandlestickModelMapper* self, const char* signal);
void QHCandlestickModelMapper_OnReceivers(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_SuperReceivers(const QHCandlestickModelMapper* self, const char* signal);
bool QHCandlestickModelMapper_IsSignalConnected(const QHCandlestickModelMapper* self, const QMetaMethod* signal);
void QHCandlestickModelMapper_OnIsSignalConnected(const QHCandlestickModelMapper* self, intptr_t slot);
bool QHCandlestickModelMapper_SuperIsSignalConnected(const QHCandlestickModelMapper* self, const QMetaMethod* signal);
void QHCandlestickModelMapper_Delete(QHCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
