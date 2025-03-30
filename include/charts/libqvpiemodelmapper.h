#pragma once
#ifndef SRC_CHARTSC_LIBQVPIEMODELMAPPER_H
#define SRC_CHARTSC_LIBQVPIEMODELMAPPER_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVPieModelMapper QVPieModelMapper;
typedef struct QVariant QVariant;
#endif

QVPieModelMapper* QVPieModelMapper_new();
QVPieModelMapper* QVPieModelMapper_new2(QObject* parent);
QMetaObject* QVPieModelMapper_MetaObject(const QVPieModelMapper* self);
void* QVPieModelMapper_Metacast(QVPieModelMapper* self, const char* param1);
int QVPieModelMapper_Metacall(QVPieModelMapper* self, int param1, int param2, void** param3);
void QVPieModelMapper_OnMetacall(QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseMetacall(QVPieModelMapper* self, int param1, int param2, void** param3);
libqt_string QVPieModelMapper_Tr(const char* s);
QAbstractItemModel* QVPieModelMapper_Model(const QVPieModelMapper* self);
void QVPieModelMapper_SetModel(QVPieModelMapper* self, QAbstractItemModel* model);
QPieSeries* QVPieModelMapper_Series(const QVPieModelMapper* self);
void QVPieModelMapper_SetSeries(QVPieModelMapper* self, QPieSeries* series);
int QVPieModelMapper_ValuesColumn(const QVPieModelMapper* self);
void QVPieModelMapper_SetValuesColumn(QVPieModelMapper* self, int valuesColumn);
int QVPieModelMapper_LabelsColumn(const QVPieModelMapper* self);
void QVPieModelMapper_SetLabelsColumn(QVPieModelMapper* self, int labelsColumn);
int QVPieModelMapper_FirstRow(const QVPieModelMapper* self);
void QVPieModelMapper_SetFirstRow(QVPieModelMapper* self, int firstRow);
int QVPieModelMapper_RowCount(const QVPieModelMapper* self);
void QVPieModelMapper_SetRowCount(QVPieModelMapper* self, int rowCount);
void QVPieModelMapper_SeriesReplaced(QVPieModelMapper* self);
void QVPieModelMapper_Connect_SeriesReplaced(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_ModelReplaced(QVPieModelMapper* self);
void QVPieModelMapper_Connect_ModelReplaced(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_ValuesColumnChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_ValuesColumnChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_LabelsColumnChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_LabelsColumnChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_FirstRowChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_FirstRowChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_RowCountChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_RowCountChanged(QVPieModelMapper* self, intptr_t slot);
libqt_string QVPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QVPieModelMapper_Tr3(const char* s, const char* c, int n);
bool QVPieModelMapper_Event(QVPieModelMapper* self, QEvent* event);
void QVPieModelMapper_OnEvent(QVPieModelMapper* self, intptr_t slot);
bool QVPieModelMapper_QBaseEvent(QVPieModelMapper* self, QEvent* event);
bool QVPieModelMapper_EventFilter(QVPieModelMapper* self, QObject* watched, QEvent* event);
void QVPieModelMapper_OnEventFilter(QVPieModelMapper* self, intptr_t slot);
bool QVPieModelMapper_QBaseEventFilter(QVPieModelMapper* self, QObject* watched, QEvent* event);
void QVPieModelMapper_TimerEvent(QVPieModelMapper* self, QTimerEvent* event);
void QVPieModelMapper_OnTimerEvent(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseTimerEvent(QVPieModelMapper* self, QTimerEvent* event);
void QVPieModelMapper_ChildEvent(QVPieModelMapper* self, QChildEvent* event);
void QVPieModelMapper_OnChildEvent(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseChildEvent(QVPieModelMapper* self, QChildEvent* event);
void QVPieModelMapper_CustomEvent(QVPieModelMapper* self, QEvent* event);
void QVPieModelMapper_OnCustomEvent(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseCustomEvent(QVPieModelMapper* self, QEvent* event);
void QVPieModelMapper_ConnectNotify(QVPieModelMapper* self, QMetaMethod* signal);
void QVPieModelMapper_OnConnectNotify(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseConnectNotify(QVPieModelMapper* self, QMetaMethod* signal);
void QVPieModelMapper_DisconnectNotify(QVPieModelMapper* self, QMetaMethod* signal);
void QVPieModelMapper_OnDisconnectNotify(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseDisconnectNotify(QVPieModelMapper* self, QMetaMethod* signal);
int QVPieModelMapper_First(const QVPieModelMapper* self);
void QVPieModelMapper_OnFirst(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseFirst(const QVPieModelMapper* self);
void QVPieModelMapper_SetFirst(QVPieModelMapper* self, int first);
void QVPieModelMapper_OnSetFirst(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseSetFirst(QVPieModelMapper* self, int first);
int QVPieModelMapper_Count(const QVPieModelMapper* self);
void QVPieModelMapper_OnCount(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseCount(const QVPieModelMapper* self);
void QVPieModelMapper_SetCount(QVPieModelMapper* self, int count);
void QVPieModelMapper_OnSetCount(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseSetCount(QVPieModelMapper* self, int count);
int QVPieModelMapper_ValuesSection(const QVPieModelMapper* self);
void QVPieModelMapper_OnValuesSection(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseValuesSection(const QVPieModelMapper* self);
void QVPieModelMapper_SetValuesSection(QVPieModelMapper* self, int valuesSection);
void QVPieModelMapper_OnSetValuesSection(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseSetValuesSection(QVPieModelMapper* self, int valuesSection);
int QVPieModelMapper_LabelsSection(const QVPieModelMapper* self);
void QVPieModelMapper_OnLabelsSection(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseLabelsSection(const QVPieModelMapper* self);
void QVPieModelMapper_SetLabelsSection(QVPieModelMapper* self, int labelsSection);
void QVPieModelMapper_OnSetLabelsSection(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseSetLabelsSection(QVPieModelMapper* self, int labelsSection);
int QVPieModelMapper_Orientation(const QVPieModelMapper* self);
void QVPieModelMapper_OnOrientation(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseOrientation(const QVPieModelMapper* self);
void QVPieModelMapper_SetOrientation(QVPieModelMapper* self, int orientation);
void QVPieModelMapper_OnSetOrientation(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_QBaseSetOrientation(QVPieModelMapper* self, int orientation);
QObject* QVPieModelMapper_Sender(const QVPieModelMapper* self);
void QVPieModelMapper_OnSender(const QVPieModelMapper* self, intptr_t slot);
QObject* QVPieModelMapper_QBaseSender(const QVPieModelMapper* self);
int QVPieModelMapper_SenderSignalIndex(const QVPieModelMapper* self);
void QVPieModelMapper_OnSenderSignalIndex(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseSenderSignalIndex(const QVPieModelMapper* self);
int QVPieModelMapper_Receivers(const QVPieModelMapper* self, const char* signal);
void QVPieModelMapper_OnReceivers(const QVPieModelMapper* self, intptr_t slot);
int QVPieModelMapper_QBaseReceivers(const QVPieModelMapper* self, const char* signal);
bool QVPieModelMapper_IsSignalConnected(const QVPieModelMapper* self, QMetaMethod* signal);
void QVPieModelMapper_OnIsSignalConnected(const QVPieModelMapper* self, intptr_t slot);
bool QVPieModelMapper_QBaseIsSignalConnected(const QVPieModelMapper* self, QMetaMethod* signal);
void QVPieModelMapper_Delete(QVPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
