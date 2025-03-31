#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKMODELMAPPER_H

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
typedef struct QVariant QVariant;
#endif

QCandlestickModelMapper* QCandlestickModelMapper_new();
QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent);
QMetaObject* QCandlestickModelMapper_MetaObject(const QCandlestickModelMapper* self);
void* QCandlestickModelMapper_Metacast(QCandlestickModelMapper* self, const char* param1);
int QCandlestickModelMapper_Metacall(QCandlestickModelMapper* self, int param1, int param2, void** param3);
void QCandlestickModelMapper_OnMetacall(QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseMetacall(QCandlestickModelMapper* self, int param1, int param2, void** param3);
libqt_string QCandlestickModelMapper_Tr(const char* s);
void QCandlestickModelMapper_SetModel(QCandlestickModelMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QCandlestickModelMapper_Model(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetSeries(QCandlestickModelMapper* self, QCandlestickSeries* series);
QCandlestickSeries* QCandlestickModelMapper_Series(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_Orientation(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnOrientation(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseOrientation(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_ModelReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_Connect_ModelReplaced(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SeriesReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_Connect_SeriesReplaced(QCandlestickModelMapper* self, intptr_t slot);
libqt_string QCandlestickModelMapper_Tr2(const char* s, const char* c);
libqt_string QCandlestickModelMapper_Tr3(const char* s, const char* c, int n);
bool QCandlestickModelMapper_Event(QCandlestickModelMapper* self, QEvent* event);
void QCandlestickModelMapper_OnEvent(QCandlestickModelMapper* self, intptr_t slot);
bool QCandlestickModelMapper_QBaseEvent(QCandlestickModelMapper* self, QEvent* event);
bool QCandlestickModelMapper_EventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QCandlestickModelMapper_OnEventFilter(QCandlestickModelMapper* self, intptr_t slot);
bool QCandlestickModelMapper_QBaseEventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QCandlestickModelMapper_TimerEvent(QCandlestickModelMapper* self, QTimerEvent* event);
void QCandlestickModelMapper_OnTimerEvent(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseTimerEvent(QCandlestickModelMapper* self, QTimerEvent* event);
void QCandlestickModelMapper_ChildEvent(QCandlestickModelMapper* self, QChildEvent* event);
void QCandlestickModelMapper_OnChildEvent(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseChildEvent(QCandlestickModelMapper* self, QChildEvent* event);
void QCandlestickModelMapper_CustomEvent(QCandlestickModelMapper* self, QEvent* event);
void QCandlestickModelMapper_OnCustomEvent(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseCustomEvent(QCandlestickModelMapper* self, QEvent* event);
void QCandlestickModelMapper_ConnectNotify(QCandlestickModelMapper* self, QMetaMethod* signal);
void QCandlestickModelMapper_OnConnectNotify(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseConnectNotify(QCandlestickModelMapper* self, QMetaMethod* signal);
void QCandlestickModelMapper_DisconnectNotify(QCandlestickModelMapper* self, QMetaMethod* signal);
void QCandlestickModelMapper_OnDisconnectNotify(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseDisconnectNotify(QCandlestickModelMapper* self, QMetaMethod* signal);
void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp);
void QCandlestickModelMapper_OnSetTimestamp(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetTimestamp(QCandlestickModelMapper* self, int timestamp);
int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnTimestamp(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseTimestamp(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open);
void QCandlestickModelMapper_OnSetOpen(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetOpen(QCandlestickModelMapper* self, int open);
int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnOpen(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseOpen(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high);
void QCandlestickModelMapper_OnSetHigh(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetHigh(QCandlestickModelMapper* self, int high);
int QCandlestickModelMapper_High(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnHigh(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseHigh(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low);
void QCandlestickModelMapper_OnSetLow(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetLow(QCandlestickModelMapper* self, int low);
int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnLow(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseLow(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close);
void QCandlestickModelMapper_OnSetClose(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetClose(QCandlestickModelMapper* self, int close);
int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnClose(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseClose(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
void QCandlestickModelMapper_OnSetFirstSetSection(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnFirstSetSection(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseFirstSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
void QCandlestickModelMapper_OnSetLastSetSection(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnLastSetSection(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseLastSetSection(const QCandlestickModelMapper* self);
QObject* QCandlestickModelMapper_Sender(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnSender(const QCandlestickModelMapper* self, intptr_t slot);
QObject* QCandlestickModelMapper_QBaseSender(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_SenderSignalIndex(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnSenderSignalIndex(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseSenderSignalIndex(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_Receivers(const QCandlestickModelMapper* self, const char* signal);
void QCandlestickModelMapper_OnReceivers(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseReceivers(const QCandlestickModelMapper* self, const char* signal);
bool QCandlestickModelMapper_IsSignalConnected(const QCandlestickModelMapper* self, QMetaMethod* signal);
void QCandlestickModelMapper_OnIsSignalConnected(const QCandlestickModelMapper* self, intptr_t slot);
bool QCandlestickModelMapper_QBaseIsSignalConnected(const QCandlestickModelMapper* self, QMetaMethod* signal);
void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
