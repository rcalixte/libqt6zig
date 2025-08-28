#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHBOXPLOTMODELMAPPER_H

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
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHBoxPlotModelMapper QHBoxPlotModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new();
QHBoxPlotModelMapper* QHBoxPlotModelMapper_new2(QObject* parent);
QMetaObject* QHBoxPlotModelMapper_MetaObject(const QHBoxPlotModelMapper* self);
void* QHBoxPlotModelMapper_Metacast(QHBoxPlotModelMapper* self, const char* param1);
int QHBoxPlotModelMapper_Metacall(QHBoxPlotModelMapper* self, int param1, int param2, void** param3);
libqt_string QHBoxPlotModelMapper_Tr(const char* s);
QAbstractItemModel* QHBoxPlotModelMapper_Model(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetModel(QHBoxPlotModelMapper* self, QAbstractItemModel* model);
QBoxPlotSeries* QHBoxPlotModelMapper_Series(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetSeries(QHBoxPlotModelMapper* self, QBoxPlotSeries* series);
int QHBoxPlotModelMapper_FirstBoxSetRow(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetFirstBoxSetRow(QHBoxPlotModelMapper* self, int firstBoxSetRow);
int QHBoxPlotModelMapper_LastBoxSetRow(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetLastBoxSetRow(QHBoxPlotModelMapper* self, int lastBoxSetRow);
int QHBoxPlotModelMapper_FirstColumn(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetFirstColumn(QHBoxPlotModelMapper* self, int firstColumn);
int QHBoxPlotModelMapper_ColumnCount(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetColumnCount(QHBoxPlotModelMapper* self, int rowCount);
void QHBoxPlotModelMapper_SeriesReplaced(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_SeriesReplaced(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_ModelReplaced(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_ModelReplaced(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_LastBoxSetRowChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_FirstColumnChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_FirstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_ColumnCountChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_ColumnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot);
libqt_string QHBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QHBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
void QHBoxPlotModelMapper_OnMetacall(QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseMetacall(QHBoxPlotModelMapper* self, int param1, int param2, void** param3);
bool QHBoxPlotModelMapper_Event(QHBoxPlotModelMapper* self, QEvent* event);
void QHBoxPlotModelMapper_OnEvent(QHBoxPlotModelMapper* self, intptr_t slot);
bool QHBoxPlotModelMapper_QBaseEvent(QHBoxPlotModelMapper* self, QEvent* event);
bool QHBoxPlotModelMapper_EventFilter(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event);
void QHBoxPlotModelMapper_OnEventFilter(QHBoxPlotModelMapper* self, intptr_t slot);
bool QHBoxPlotModelMapper_QBaseEventFilter(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event);
void QHBoxPlotModelMapper_TimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event);
void QHBoxPlotModelMapper_OnTimerEvent(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseTimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event);
void QHBoxPlotModelMapper_ChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event);
void QHBoxPlotModelMapper_OnChildEvent(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event);
void QHBoxPlotModelMapper_CustomEvent(QHBoxPlotModelMapper* self, QEvent* event);
void QHBoxPlotModelMapper_OnCustomEvent(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseCustomEvent(QHBoxPlotModelMapper* self, QEvent* event);
void QHBoxPlotModelMapper_ConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
void QHBoxPlotModelMapper_OnConnectNotify(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
void QHBoxPlotModelMapper_DisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
void QHBoxPlotModelMapper_OnDisconnectNotify(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseDisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
int QHBoxPlotModelMapper_First(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnFirst(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseFirst(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetFirst(QHBoxPlotModelMapper* self, int first);
void QHBoxPlotModelMapper_OnSetFirst(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseSetFirst(QHBoxPlotModelMapper* self, int first);
int QHBoxPlotModelMapper_Count(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnCount(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseCount(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetCount(QHBoxPlotModelMapper* self, int count);
void QHBoxPlotModelMapper_OnSetCount(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseSetCount(QHBoxPlotModelMapper* self, int count);
int QHBoxPlotModelMapper_FirstBoxSetSection(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnFirstBoxSetSection(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseFirstBoxSetSection(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection);
void QHBoxPlotModelMapper_OnSetFirstBoxSetSection(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseSetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection);
int QHBoxPlotModelMapper_LastBoxSetSection(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnLastBoxSetSection(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseLastBoxSetSection(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection);
void QHBoxPlotModelMapper_OnSetLastBoxSetSection(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseSetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection);
int QHBoxPlotModelMapper_Orientation(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnOrientation(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseOrientation(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetOrientation(QHBoxPlotModelMapper* self, int orientation);
void QHBoxPlotModelMapper_OnSetOrientation(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_QBaseSetOrientation(QHBoxPlotModelMapper* self, int orientation);
QObject* QHBoxPlotModelMapper_Sender(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnSender(const QHBoxPlotModelMapper* self, intptr_t slot);
QObject* QHBoxPlotModelMapper_QBaseSender(const QHBoxPlotModelMapper* self);
int QHBoxPlotModelMapper_SenderSignalIndex(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_OnSenderSignalIndex(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseSenderSignalIndex(const QHBoxPlotModelMapper* self);
int QHBoxPlotModelMapper_Receivers(const QHBoxPlotModelMapper* self, const char* signal);
void QHBoxPlotModelMapper_OnReceivers(const QHBoxPlotModelMapper* self, intptr_t slot);
int QHBoxPlotModelMapper_QBaseReceivers(const QHBoxPlotModelMapper* self, const char* signal);
bool QHBoxPlotModelMapper_IsSignalConnected(const QHBoxPlotModelMapper* self, const QMetaMethod* signal);
void QHBoxPlotModelMapper_OnIsSignalConnected(const QHBoxPlotModelMapper* self, intptr_t slot);
bool QHBoxPlotModelMapper_QBaseIsSignalConnected(const QHBoxPlotModelMapper* self, const QMetaMethod* signal);
void QHBoxPlotModelMapper_Delete(QHBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
