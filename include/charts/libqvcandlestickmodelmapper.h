#pragma once
#ifndef SRC_CHARTSC_LIBQVCANDLESTICKMODELMAPPER_H
#define SRC_CHARTSC_LIBQVCANDLESTICKMODELMAPPER_H

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
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVCandlestickModelMapper QVCandlestickModelMapper;
typedef struct QVariant QVariant;
#endif

QVCandlestickModelMapper* QVCandlestickModelMapper_new();
QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent);
QMetaObject* QVCandlestickModelMapper_MetaObject(const QVCandlestickModelMapper* self);
void* QVCandlestickModelMapper_Metacast(QVCandlestickModelMapper* self, const char* param1);
int QVCandlestickModelMapper_Metacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3);
void QVCandlestickModelMapper_OnMetacall(QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseMetacall(QVCandlestickModelMapper* self, int param1, int param2, void** param3);
libqt_string QVCandlestickModelMapper_Tr(const char* s);
int QVCandlestickModelMapper_Orientation(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnOrientation(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseOrientation(const QVCandlestickModelMapper* self);
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
libqt_string QVCandlestickModelMapper_Tr2(const char* s, const char* c);
libqt_string QVCandlestickModelMapper_Tr3(const char* s, const char* c, int n);
bool QVCandlestickModelMapper_Event(QVCandlestickModelMapper* self, QEvent* event);
void QVCandlestickModelMapper_OnEvent(QVCandlestickModelMapper* self, intptr_t slot);
bool QVCandlestickModelMapper_QBaseEvent(QVCandlestickModelMapper* self, QEvent* event);
bool QVCandlestickModelMapper_EventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QVCandlestickModelMapper_OnEventFilter(QVCandlestickModelMapper* self, intptr_t slot);
bool QVCandlestickModelMapper_QBaseEventFilter(QVCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QVCandlestickModelMapper_TimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
void QVCandlestickModelMapper_OnTimerEvent(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseTimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
void QVCandlestickModelMapper_ChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
void QVCandlestickModelMapper_OnChildEvent(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
void QVCandlestickModelMapper_CustomEvent(QVCandlestickModelMapper* self, QEvent* event);
void QVCandlestickModelMapper_OnCustomEvent(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseCustomEvent(QVCandlestickModelMapper* self, QEvent* event);
void QVCandlestickModelMapper_ConnectNotify(QVCandlestickModelMapper* self, QMetaMethod* signal);
void QVCandlestickModelMapper_OnConnectNotify(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseConnectNotify(QVCandlestickModelMapper* self, QMetaMethod* signal);
void QVCandlestickModelMapper_DisconnectNotify(QVCandlestickModelMapper* self, QMetaMethod* signal);
void QVCandlestickModelMapper_OnDisconnectNotify(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseDisconnectNotify(QVCandlestickModelMapper* self, QMetaMethod* signal);
void QVCandlestickModelMapper_SetTimestamp(QVCandlestickModelMapper* self, int timestamp);
void QVCandlestickModelMapper_OnSetTimestamp(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetTimestamp(QVCandlestickModelMapper* self, int timestamp);
int QVCandlestickModelMapper_Timestamp(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnTimestamp(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseTimestamp(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetOpen(QVCandlestickModelMapper* self, int open);
void QVCandlestickModelMapper_OnSetOpen(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetOpen(QVCandlestickModelMapper* self, int open);
int QVCandlestickModelMapper_Open(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnOpen(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseOpen(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetHigh(QVCandlestickModelMapper* self, int high);
void QVCandlestickModelMapper_OnSetHigh(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetHigh(QVCandlestickModelMapper* self, int high);
int QVCandlestickModelMapper_High(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnHigh(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseHigh(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLow(QVCandlestickModelMapper* self, int low);
void QVCandlestickModelMapper_OnSetLow(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetLow(QVCandlestickModelMapper* self, int low);
int QVCandlestickModelMapper_Low(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnLow(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseLow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetClose(QVCandlestickModelMapper* self, int close);
void QVCandlestickModelMapper_OnSetClose(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetClose(QVCandlestickModelMapper* self, int close);
int QVCandlestickModelMapper_Close(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnClose(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseClose(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection);
void QVCandlestickModelMapper_OnSetFirstSetSection(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection);
int QVCandlestickModelMapper_FirstSetSection(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnFirstSetSection(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseFirstSetSection(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection);
void QVCandlestickModelMapper_OnSetLastSetSection(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_QBaseSetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection);
int QVCandlestickModelMapper_LastSetSection(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnLastSetSection(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseLastSetSection(const QVCandlestickModelMapper* self);
QObject* QVCandlestickModelMapper_Sender(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnSender(const QVCandlestickModelMapper* self, intptr_t slot);
QObject* QVCandlestickModelMapper_QBaseSender(const QVCandlestickModelMapper* self);
int QVCandlestickModelMapper_SenderSignalIndex(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_OnSenderSignalIndex(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseSenderSignalIndex(const QVCandlestickModelMapper* self);
int QVCandlestickModelMapper_Receivers(const QVCandlestickModelMapper* self, const char* signal);
void QVCandlestickModelMapper_OnReceivers(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseReceivers(const QVCandlestickModelMapper* self, const char* signal);
bool QVCandlestickModelMapper_IsSignalConnected(const QVCandlestickModelMapper* self, QMetaMethod* signal);
void QVCandlestickModelMapper_OnIsSignalConnected(const QVCandlestickModelMapper* self, intptr_t slot);
bool QVCandlestickModelMapper_QBaseIsSignalConnected(const QVCandlestickModelMapper* self, QMetaMethod* signal);
void QVCandlestickModelMapper_Delete(QVCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
