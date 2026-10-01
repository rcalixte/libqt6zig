#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKMODELMAPPER_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickModelMapper* QCandlestickModelMapper_new();
QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent);
QMetaObject* QCandlestickModelMapper_MetaObject(const QCandlestickModelMapper* self);
void* QCandlestickModelMapper_Metacast(QCandlestickModelMapper* self, const char* param1);
int QCandlestickModelMapper_Metacall(QCandlestickModelMapper* self, int param1, int param2, void** param3);
libqt_string QCandlestickModelMapper_Tr(const char* s);
void QCandlestickModelMapper_SetModel(QCandlestickModelMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QCandlestickModelMapper_Model(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetSeries(QCandlestickModelMapper* self, QCandlestickSeries* series);
QCandlestickSeries* QCandlestickModelMapper_Series(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_Orientation(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_ModelReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_Connect_ModelReplaced(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SeriesReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_Connect_SeriesReplaced(QCandlestickModelMapper* self, intptr_t slot);
libqt_string QCandlestickModelMapper_Tr2(const char* s, const char* c);
libqt_string QCandlestickModelMapper_Tr3(const char* s, const char* c, int n);
void QCandlestickModelMapper_OnMetaObject(QCandlestickModelMapper* self, intptr_t slot);
QMetaObject* QCandlestickModelMapper_SuperMetaObject(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnMetacast(QCandlestickModelMapper* self, intptr_t slot);
void* QCandlestickModelMapper_SuperMetacast(QCandlestickModelMapper* self, const char* param1);
void QCandlestickModelMapper_OnMetacall(QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_SuperMetacall(QCandlestickModelMapper* self, int param1, int param2, void** param3);
void QCandlestickModelMapper_OnOrientation(QCandlestickModelMapper* self, intptr_t slot);
bool QCandlestickModelMapper_Event(QCandlestickModelMapper* self, QEvent* event);
void QCandlestickModelMapper_OnEvent(QCandlestickModelMapper* self, intptr_t slot);
bool QCandlestickModelMapper_SuperEvent(QCandlestickModelMapper* self, QEvent* event);
bool QCandlestickModelMapper_EventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QCandlestickModelMapper_OnEventFilter(QCandlestickModelMapper* self, intptr_t slot);
bool QCandlestickModelMapper_SuperEventFilter(QCandlestickModelMapper* self, QObject* watched, QEvent* event);
void QCandlestickModelMapper_TimerEvent(QCandlestickModelMapper* self, QTimerEvent* event);
void QCandlestickModelMapper_OnTimerEvent(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SuperTimerEvent(QCandlestickModelMapper* self, QTimerEvent* event);
void QCandlestickModelMapper_ChildEvent(QCandlestickModelMapper* self, QChildEvent* event);
void QCandlestickModelMapper_OnChildEvent(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SuperChildEvent(QCandlestickModelMapper* self, QChildEvent* event);
void QCandlestickModelMapper_CustomEvent(QCandlestickModelMapper* self, QEvent* event);
void QCandlestickModelMapper_OnCustomEvent(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SuperCustomEvent(QCandlestickModelMapper* self, QEvent* event);
void QCandlestickModelMapper_ConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal);
void QCandlestickModelMapper_OnConnectNotify(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SuperConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal);
void QCandlestickModelMapper_DisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal);
void QCandlestickModelMapper_OnDisconnectNotify(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SuperDisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal);
void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp);
int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open);
int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high);
int QCandlestickModelMapper_High(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low);
int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close);
int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self);
QObject* QCandlestickModelMapper_Sender(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_SenderSignalIndex(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_Receivers(const QCandlestickModelMapper* self, const char* signal);
bool QCandlestickModelMapper_IsSignalConnected(const QCandlestickModelMapper* self, const QMetaMethod* signal);
void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
