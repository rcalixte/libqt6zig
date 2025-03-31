#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVBOXPLOTMODELMAPPER_H

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
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVBoxPlotModelMapper QVBoxPlotModelMapper;
typedef struct QVariant QVariant;
#endif

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new();
QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent);
QMetaObject* QVBoxPlotModelMapper_MetaObject(const QVBoxPlotModelMapper* self);
void* QVBoxPlotModelMapper_Metacast(QVBoxPlotModelMapper* self, const char* param1);
int QVBoxPlotModelMapper_Metacall(QVBoxPlotModelMapper* self, int param1, int param2, void** param3);
void QVBoxPlotModelMapper_OnMetacall(QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseMetacall(QVBoxPlotModelMapper* self, int param1, int param2, void** param3);
libqt_string QVBoxPlotModelMapper_Tr(const char* s);
QAbstractItemModel* QVBoxPlotModelMapper_Model(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model);
QBoxPlotSeries* QVBoxPlotModelMapper_Series(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series);
int QVBoxPlotModelMapper_FirstBoxSetColumn(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn);
int QVBoxPlotModelMapper_LastBoxSetColumn(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn);
int QVBoxPlotModelMapper_FirstRow(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetFirstRow(QVBoxPlotModelMapper* self, int firstRow);
int QVBoxPlotModelMapper_RowCount(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetRowCount(QVBoxPlotModelMapper* self, int rowCount);
void QVBoxPlotModelMapper_SeriesReplaced(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_SeriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_ModelReplaced(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_ModelReplaced(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_FirstRowChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_FirstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_RowCountChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_RowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot);
libqt_string QVBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QVBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
bool QVBoxPlotModelMapper_Event(QVBoxPlotModelMapper* self, QEvent* event);
void QVBoxPlotModelMapper_OnEvent(QVBoxPlotModelMapper* self, intptr_t slot);
bool QVBoxPlotModelMapper_QBaseEvent(QVBoxPlotModelMapper* self, QEvent* event);
bool QVBoxPlotModelMapper_EventFilter(QVBoxPlotModelMapper* self, QObject* watched, QEvent* event);
void QVBoxPlotModelMapper_OnEventFilter(QVBoxPlotModelMapper* self, intptr_t slot);
bool QVBoxPlotModelMapper_QBaseEventFilter(QVBoxPlotModelMapper* self, QObject* watched, QEvent* event);
void QVBoxPlotModelMapper_TimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event);
void QVBoxPlotModelMapper_OnTimerEvent(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseTimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event);
void QVBoxPlotModelMapper_ChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event);
void QVBoxPlotModelMapper_OnChildEvent(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event);
void QVBoxPlotModelMapper_CustomEvent(QVBoxPlotModelMapper* self, QEvent* event);
void QVBoxPlotModelMapper_OnCustomEvent(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseCustomEvent(QVBoxPlotModelMapper* self, QEvent* event);
void QVBoxPlotModelMapper_ConnectNotify(QVBoxPlotModelMapper* self, QMetaMethod* signal);
void QVBoxPlotModelMapper_OnConnectNotify(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseConnectNotify(QVBoxPlotModelMapper* self, QMetaMethod* signal);
void QVBoxPlotModelMapper_DisconnectNotify(QVBoxPlotModelMapper* self, QMetaMethod* signal);
void QVBoxPlotModelMapper_OnDisconnectNotify(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseDisconnectNotify(QVBoxPlotModelMapper* self, QMetaMethod* signal);
int QVBoxPlotModelMapper_First(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnFirst(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseFirst(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetFirst(QVBoxPlotModelMapper* self, int first);
void QVBoxPlotModelMapper_OnSetFirst(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseSetFirst(QVBoxPlotModelMapper* self, int first);
int QVBoxPlotModelMapper_Count(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnCount(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseCount(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetCount(QVBoxPlotModelMapper* self, int count);
void QVBoxPlotModelMapper_OnSetCount(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseSetCount(QVBoxPlotModelMapper* self, int count);
int QVBoxPlotModelMapper_FirstBoxSetSection(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnFirstBoxSetSection(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseFirstBoxSetSection(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection);
void QVBoxPlotModelMapper_OnSetFirstBoxSetSection(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseSetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection);
int QVBoxPlotModelMapper_LastBoxSetSection(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnLastBoxSetSection(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseLastBoxSetSection(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection);
void QVBoxPlotModelMapper_OnSetLastBoxSetSection(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseSetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection);
int QVBoxPlotModelMapper_Orientation(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnOrientation(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseOrientation(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetOrientation(QVBoxPlotModelMapper* self, int orientation);
void QVBoxPlotModelMapper_OnSetOrientation(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_QBaseSetOrientation(QVBoxPlotModelMapper* self, int orientation);
QObject* QVBoxPlotModelMapper_Sender(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnSender(const QVBoxPlotModelMapper* self, intptr_t slot);
QObject* QVBoxPlotModelMapper_QBaseSender(const QVBoxPlotModelMapper* self);
int QVBoxPlotModelMapper_SenderSignalIndex(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_OnSenderSignalIndex(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseSenderSignalIndex(const QVBoxPlotModelMapper* self);
int QVBoxPlotModelMapper_Receivers(const QVBoxPlotModelMapper* self, const char* signal);
void QVBoxPlotModelMapper_OnReceivers(const QVBoxPlotModelMapper* self, intptr_t slot);
int QVBoxPlotModelMapper_QBaseReceivers(const QVBoxPlotModelMapper* self, const char* signal);
bool QVBoxPlotModelMapper_IsSignalConnected(const QVBoxPlotModelMapper* self, QMetaMethod* signal);
void QVBoxPlotModelMapper_OnIsSignalConnected(const QVBoxPlotModelMapper* self, intptr_t slot);
bool QVBoxPlotModelMapper_QBaseIsSignalConnected(const QVBoxPlotModelMapper* self, QMetaMethod* signal);
void QVBoxPlotModelMapper_Delete(QVBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
