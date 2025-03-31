#pragma once
#ifndef SRC_CHARTSC_LIBQHBARMODELMAPPER_H
#define SRC_CHARTSC_LIBQHBARMODELMAPPER_H

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
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHBarModelMapper QHBarModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QHBarModelMapper* QHBarModelMapper_new();
QHBarModelMapper* QHBarModelMapper_new2(QObject* parent);
QMetaObject* QHBarModelMapper_MetaObject(const QHBarModelMapper* self);
void* QHBarModelMapper_Metacast(QHBarModelMapper* self, const char* param1);
int QHBarModelMapper_Metacall(QHBarModelMapper* self, int param1, int param2, void** param3);
void QHBarModelMapper_OnMetacall(QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseMetacall(QHBarModelMapper* self, int param1, int param2, void** param3);
libqt_string QHBarModelMapper_Tr(const char* s);
QAbstractItemModel* QHBarModelMapper_Model(const QHBarModelMapper* self);
void QHBarModelMapper_SetModel(QHBarModelMapper* self, QAbstractItemModel* model);
QAbstractBarSeries* QHBarModelMapper_Series(const QHBarModelMapper* self);
void QHBarModelMapper_SetSeries(QHBarModelMapper* self, QAbstractBarSeries* series);
int QHBarModelMapper_FirstBarSetRow(const QHBarModelMapper* self);
void QHBarModelMapper_SetFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow);
int QHBarModelMapper_LastBarSetRow(const QHBarModelMapper* self);
void QHBarModelMapper_SetLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow);
int QHBarModelMapper_FirstColumn(const QHBarModelMapper* self);
void QHBarModelMapper_SetFirstColumn(QHBarModelMapper* self, int firstColumn);
int QHBarModelMapper_ColumnCount(const QHBarModelMapper* self);
void QHBarModelMapper_SetColumnCount(QHBarModelMapper* self, int columnCount);
void QHBarModelMapper_SeriesReplaced(QHBarModelMapper* self);
void QHBarModelMapper_Connect_SeriesReplaced(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_ModelReplaced(QHBarModelMapper* self);
void QHBarModelMapper_Connect_ModelReplaced(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_FirstBarSetRowChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_FirstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_LastBarSetRowChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_LastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_FirstColumnChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_FirstColumnChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_ColumnCountChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_ColumnCountChanged(QHBarModelMapper* self, intptr_t slot);
libqt_string QHBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QHBarModelMapper_Tr3(const char* s, const char* c, int n);
bool QHBarModelMapper_Event(QHBarModelMapper* self, QEvent* event);
void QHBarModelMapper_OnEvent(QHBarModelMapper* self, intptr_t slot);
bool QHBarModelMapper_QBaseEvent(QHBarModelMapper* self, QEvent* event);
bool QHBarModelMapper_EventFilter(QHBarModelMapper* self, QObject* watched, QEvent* event);
void QHBarModelMapper_OnEventFilter(QHBarModelMapper* self, intptr_t slot);
bool QHBarModelMapper_QBaseEventFilter(QHBarModelMapper* self, QObject* watched, QEvent* event);
void QHBarModelMapper_TimerEvent(QHBarModelMapper* self, QTimerEvent* event);
void QHBarModelMapper_OnTimerEvent(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseTimerEvent(QHBarModelMapper* self, QTimerEvent* event);
void QHBarModelMapper_ChildEvent(QHBarModelMapper* self, QChildEvent* event);
void QHBarModelMapper_OnChildEvent(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseChildEvent(QHBarModelMapper* self, QChildEvent* event);
void QHBarModelMapper_CustomEvent(QHBarModelMapper* self, QEvent* event);
void QHBarModelMapper_OnCustomEvent(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseCustomEvent(QHBarModelMapper* self, QEvent* event);
void QHBarModelMapper_ConnectNotify(QHBarModelMapper* self, QMetaMethod* signal);
void QHBarModelMapper_OnConnectNotify(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseConnectNotify(QHBarModelMapper* self, QMetaMethod* signal);
void QHBarModelMapper_DisconnectNotify(QHBarModelMapper* self, QMetaMethod* signal);
void QHBarModelMapper_OnDisconnectNotify(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseDisconnectNotify(QHBarModelMapper* self, QMetaMethod* signal);
int QHBarModelMapper_First(const QHBarModelMapper* self);
void QHBarModelMapper_OnFirst(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseFirst(const QHBarModelMapper* self);
void QHBarModelMapper_SetFirst(QHBarModelMapper* self, int first);
void QHBarModelMapper_OnSetFirst(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseSetFirst(QHBarModelMapper* self, int first);
int QHBarModelMapper_Count(const QHBarModelMapper* self);
void QHBarModelMapper_OnCount(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseCount(const QHBarModelMapper* self);
void QHBarModelMapper_SetCount(QHBarModelMapper* self, int count);
void QHBarModelMapper_OnSetCount(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseSetCount(QHBarModelMapper* self, int count);
int QHBarModelMapper_FirstBarSetSection(const QHBarModelMapper* self);
void QHBarModelMapper_OnFirstBarSetSection(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseFirstBarSetSection(const QHBarModelMapper* self);
void QHBarModelMapper_SetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection);
void QHBarModelMapper_OnSetFirstBarSetSection(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseSetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection);
int QHBarModelMapper_LastBarSetSection(const QHBarModelMapper* self);
void QHBarModelMapper_OnLastBarSetSection(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseLastBarSetSection(const QHBarModelMapper* self);
void QHBarModelMapper_SetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection);
void QHBarModelMapper_OnSetLastBarSetSection(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseSetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection);
int QHBarModelMapper_Orientation(const QHBarModelMapper* self);
void QHBarModelMapper_OnOrientation(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseOrientation(const QHBarModelMapper* self);
void QHBarModelMapper_SetOrientation(QHBarModelMapper* self, int orientation);
void QHBarModelMapper_OnSetOrientation(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_QBaseSetOrientation(QHBarModelMapper* self, int orientation);
QObject* QHBarModelMapper_Sender(const QHBarModelMapper* self);
void QHBarModelMapper_OnSender(const QHBarModelMapper* self, intptr_t slot);
QObject* QHBarModelMapper_QBaseSender(const QHBarModelMapper* self);
int QHBarModelMapper_SenderSignalIndex(const QHBarModelMapper* self);
void QHBarModelMapper_OnSenderSignalIndex(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseSenderSignalIndex(const QHBarModelMapper* self);
int QHBarModelMapper_Receivers(const QHBarModelMapper* self, const char* signal);
void QHBarModelMapper_OnReceivers(const QHBarModelMapper* self, intptr_t slot);
int QHBarModelMapper_QBaseReceivers(const QHBarModelMapper* self, const char* signal);
bool QHBarModelMapper_IsSignalConnected(const QHBarModelMapper* self, QMetaMethod* signal);
void QHBarModelMapper_OnIsSignalConnected(const QHBarModelMapper* self, intptr_t slot);
bool QHBarModelMapper_QBaseIsSignalConnected(const QHBarModelMapper* self, QMetaMethod* signal);
void QHBarModelMapper_Delete(QHBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
