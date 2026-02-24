#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHPIEMODELMAPPER_H

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
void QHPieModelMapper_OnMetaObject(const QHPieModelMapper* self, intptr_t slot);
QMetaObject* QHPieModelMapper_SuperMetaObject(const QHPieModelMapper* self);
void QHPieModelMapper_OnMetacast(QHPieModelMapper* self, intptr_t slot);
void* QHPieModelMapper_SuperMetacast(QHPieModelMapper* self, const char* param1);
void QHPieModelMapper_OnMetacall(QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperMetacall(QHPieModelMapper* self, int param1, int param2, void** param3);
bool QHPieModelMapper_Event(QHPieModelMapper* self, QEvent* event);
void QHPieModelMapper_OnEvent(QHPieModelMapper* self, intptr_t slot);
bool QHPieModelMapper_SuperEvent(QHPieModelMapper* self, QEvent* event);
bool QHPieModelMapper_EventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event);
void QHPieModelMapper_OnEventFilter(QHPieModelMapper* self, intptr_t slot);
bool QHPieModelMapper_SuperEventFilter(QHPieModelMapper* self, QObject* watched, QEvent* event);
void QHPieModelMapper_TimerEvent(QHPieModelMapper* self, QTimerEvent* event);
void QHPieModelMapper_OnTimerEvent(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperTimerEvent(QHPieModelMapper* self, QTimerEvent* event);
void QHPieModelMapper_ChildEvent(QHPieModelMapper* self, QChildEvent* event);
void QHPieModelMapper_OnChildEvent(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperChildEvent(QHPieModelMapper* self, QChildEvent* event);
void QHPieModelMapper_CustomEvent(QHPieModelMapper* self, QEvent* event);
void QHPieModelMapper_OnCustomEvent(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperCustomEvent(QHPieModelMapper* self, QEvent* event);
void QHPieModelMapper_ConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_OnConnectNotify(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_DisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_OnDisconnectNotify(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperDisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
int QHPieModelMapper_First(const QHPieModelMapper* self);
void QHPieModelMapper_OnFirst(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperFirst(const QHPieModelMapper* self);
void QHPieModelMapper_SetFirst(QHPieModelMapper* self, int first);
void QHPieModelMapper_OnSetFirst(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperSetFirst(QHPieModelMapper* self, int first);
int QHPieModelMapper_Count(const QHPieModelMapper* self);
void QHPieModelMapper_OnCount(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperCount(const QHPieModelMapper* self);
void QHPieModelMapper_SetCount(QHPieModelMapper* self, int count);
void QHPieModelMapper_OnSetCount(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperSetCount(QHPieModelMapper* self, int count);
int QHPieModelMapper_ValuesSection(const QHPieModelMapper* self);
void QHPieModelMapper_OnValuesSection(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperValuesSection(const QHPieModelMapper* self);
void QHPieModelMapper_SetValuesSection(QHPieModelMapper* self, int valuesSection);
void QHPieModelMapper_OnSetValuesSection(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperSetValuesSection(QHPieModelMapper* self, int valuesSection);
int QHPieModelMapper_LabelsSection(const QHPieModelMapper* self);
void QHPieModelMapper_OnLabelsSection(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperLabelsSection(const QHPieModelMapper* self);
void QHPieModelMapper_SetLabelsSection(QHPieModelMapper* self, int labelsSection);
void QHPieModelMapper_OnSetLabelsSection(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperSetLabelsSection(QHPieModelMapper* self, int labelsSection);
int QHPieModelMapper_Orientation(const QHPieModelMapper* self);
void QHPieModelMapper_OnOrientation(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperOrientation(const QHPieModelMapper* self);
void QHPieModelMapper_SetOrientation(QHPieModelMapper* self, int orientation);
void QHPieModelMapper_OnSetOrientation(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_SuperSetOrientation(QHPieModelMapper* self, int orientation);
QObject* QHPieModelMapper_Sender(const QHPieModelMapper* self);
void QHPieModelMapper_OnSender(const QHPieModelMapper* self, intptr_t slot);
QObject* QHPieModelMapper_SuperSender(const QHPieModelMapper* self);
int QHPieModelMapper_SenderSignalIndex(const QHPieModelMapper* self);
void QHPieModelMapper_OnSenderSignalIndex(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperSenderSignalIndex(const QHPieModelMapper* self);
int QHPieModelMapper_Receivers(const QHPieModelMapper* self, const char* signal);
void QHPieModelMapper_OnReceivers(const QHPieModelMapper* self, intptr_t slot);
int QHPieModelMapper_SuperReceivers(const QHPieModelMapper* self, const char* signal);
bool QHPieModelMapper_IsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_OnIsSignalConnected(const QHPieModelMapper* self, intptr_t slot);
bool QHPieModelMapper_SuperIsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal);
void QHPieModelMapper_Delete(QHPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
