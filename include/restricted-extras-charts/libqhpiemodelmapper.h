#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHPIEMODELMAPPER_H

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
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHPieModelMapper QHPieModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct QTimerEvent QTimerEvent;
#endif

QHPieModelMapper* QHPieModelMapper_new();
QHPieModelMapper* QHPieModelMapper_new2(QObject* parent);
QMetaObject* QHPieModelMapper_MetaObject(const QHPieModelMapper* self);
void* QHPieModelMapper_Metacast(QHPieModelMapper* self, const char* param1);
int QHPieModelMapper_Metacall(QHPieModelMapper* self, int param1, int param2, void** param3);
void QHPieModelMapper_OnMetacall(QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseMetacall(QHPieModelMapper* self, int param1, int param2, void** param3);
libqt_string QHPieModelMapper_Tr(const char* s);
QAbstractItemModel* QHPieModelMapper_Model(const QHPieModelMapper* self);
void QHPieModelMapper_SetModel(QHPieModelMapper* self, QAbstractItemModel* model);
QPieSeries* QHPieModelMapper_Series(const QHPieModelMapper* self);
void QHPieModelMapper_SetSeries(QHPieModelMapper* self, QPieSeries* series);
int QHPieModelMapper_ValuesRow(const QHPieModelMapper* self);
void QHPieModelMapper_SetValuesRow(QHPieModelMapper* self, int valuesRow);
int QHPieModelMapper_LabelsRow(const QHPieModelMapper* self);
void QHPieModelMapper_SetLabelsRow(QHPieModelMapper* self, int labelsRow);
int QHPieModelMapper_FirstColumn(const QHPieModelMapper* self);
void QHPieModelMapper_SetFirstColumn(QHPieModelMapper* self, int firstColumn);
int QHPieModelMapper_ColumnCount(const QHPieModelMapper* self);
void QHPieModelMapper_SetColumnCount(QHPieModelMapper* self, int columnCount);
void QHPieModelMapper_SeriesReplaced(QHPieModelMapper* self);
void QHPieModelMapper_Connect_SeriesReplaced(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_ModelReplaced(QHPieModelMapper* self);
void QHPieModelMapper_Connect_ModelReplaced(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_ValuesRowChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_ValuesRowChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_LabelsRowChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_LabelsRowChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_FirstColumnChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_FirstColumnChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_ColumnCountChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_ColumnCountChanged(QHPieModelMapper* self, intptr_t slot);
libqt_string QHPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QHPieModelMapper_Tr3(const char* s, const char* c, int n);
bool QHPieModelMapper_Event(QHPieModelMapper* self, QEvent* event);
void QHPieModelMapper_OnEvent(QHPieModelMapper* self, intptr_t slot);
bool QHPieModelMapper_QBaseEvent(QHPieModelMapper* self, QEvent* event);
bool QHPieModelMapper_EventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event);
void QHPieModelMapper_OnEventFilter(QHPieModelMapper* self, intptr_t slot);
bool QHPieModelMapper_QBaseEventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event);
void QHPieModelMapper_TimerEvent(QHPieModelMapper* self, QTimerEvent* event);
void QHPieModelMapper_OnTimerEvent(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseTimerEvent(QHPieModelMapper* self, QTimerEvent* event);
void QHPieModelMapper_ChildEvent(QHPieModelMapper* self, QChildEvent* event);
void QHPieModelMapper_OnChildEvent(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseChildEvent(QHPieModelMapper* self, QChildEvent* event);
void QHPieModelMapper_CustomEvent(QHPieModelMapper* self, QEvent* event);
void QHPieModelMapper_OnCustomEvent(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseCustomEvent(QHPieModelMapper* self, QEvent* event);
void QHPieModelMapper_ConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_OnConnectNotify(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_DisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_OnDisconnectNotify(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseDisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
int QHPieModelMapper_First(const QHPieModelMapper* self);
void QHPieModelMapper_OnFirst(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseFirst(const QHPieModelMapper* self);
void QHPieModelMapper_SetFirst(QHPieModelMapper* self, int first);
void QHPieModelMapper_OnSetFirst(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseSetFirst(QHPieModelMapper* self, int first);
int QHPieModelMapper_Count(const QHPieModelMapper* self);
void QHPieModelMapper_OnCount(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseCount(const QHPieModelMapper* self);
void QHPieModelMapper_SetCount(QHPieModelMapper* self, int count);
void QHPieModelMapper_OnSetCount(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseSetCount(QHPieModelMapper* self, int count);
int QHPieModelMapper_ValuesSection(const QHPieModelMapper* self);
void QHPieModelMapper_OnValuesSection(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseValuesSection(const QHPieModelMapper* self);
void QHPieModelMapper_SetValuesSection(QHPieModelMapper* self, int valuesSection);
void QHPieModelMapper_OnSetValuesSection(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseSetValuesSection(QHPieModelMapper* self, int valuesSection);
int QHPieModelMapper_LabelsSection(const QHPieModelMapper* self);
void QHPieModelMapper_OnLabelsSection(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseLabelsSection(const QHPieModelMapper* self);
void QHPieModelMapper_SetLabelsSection(QHPieModelMapper* self, int labelsSection);
void QHPieModelMapper_OnSetLabelsSection(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseSetLabelsSection(QHPieModelMapper* self, int labelsSection);
int QHPieModelMapper_Orientation(const QHPieModelMapper* self);
void QHPieModelMapper_OnOrientation(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseOrientation(const QHPieModelMapper* self);
void QHPieModelMapper_SetOrientation(QHPieModelMapper* self, int orientation);
void QHPieModelMapper_OnSetOrientation(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_QBaseSetOrientation(QHPieModelMapper* self, int orientation);
QObject* QHPieModelMapper_Sender(const QHPieModelMapper* self);
void QHPieModelMapper_OnSender(const QHPieModelMapper* self, intptr_t slot);
QObject* QHPieModelMapper_QBaseSender(const QHPieModelMapper* self);
int QHPieModelMapper_SenderSignalIndex(const QHPieModelMapper* self);
void QHPieModelMapper_OnSenderSignalIndex(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseSenderSignalIndex(const QHPieModelMapper* self);
int QHPieModelMapper_Receivers(const QHPieModelMapper* self, const char* signal);
void QHPieModelMapper_OnReceivers(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_QBaseReceivers(const QHPieModelMapper* self, const char* signal);
bool QHPieModelMapper_IsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_OnIsSignalConnected(const QHPieModelMapper* self, intptr_t slot);
bool QHPieModelMapper_QBaseIsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_Delete(QHPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
