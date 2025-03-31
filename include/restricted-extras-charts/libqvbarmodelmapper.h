#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVBARMODELMAPPER_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVBarModelMapper QVBarModelMapper;
typedef struct QVariant QVariant;
#endif

QVBarModelMapper* QVBarModelMapper_new();
QVBarModelMapper* QVBarModelMapper_new2(QObject* parent);
QMetaObject* QVBarModelMapper_MetaObject(const QVBarModelMapper* self);
void* QVBarModelMapper_Metacast(QVBarModelMapper* self, const char* param1);
int QVBarModelMapper_Metacall(QVBarModelMapper* self, int param1, int param2, void** param3);
void QVBarModelMapper_OnMetacall(QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseMetacall(QVBarModelMapper* self, int param1, int param2, void** param3);
libqt_string QVBarModelMapper_Tr(const char* s);
QAbstractItemModel* QVBarModelMapper_Model(const QVBarModelMapper* self);
void QVBarModelMapper_SetModel(QVBarModelMapper* self, QAbstractItemModel* model);
QAbstractBarSeries* QVBarModelMapper_Series(const QVBarModelMapper* self);
void QVBarModelMapper_SetSeries(QVBarModelMapper* self, QAbstractBarSeries* series);
int QVBarModelMapper_FirstBarSetColumn(const QVBarModelMapper* self);
void QVBarModelMapper_SetFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn);
int QVBarModelMapper_LastBarSetColumn(const QVBarModelMapper* self);
void QVBarModelMapper_SetLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn);
int QVBarModelMapper_FirstRow(const QVBarModelMapper* self);
void QVBarModelMapper_SetFirstRow(QVBarModelMapper* self, int firstRow);
int QVBarModelMapper_RowCount(const QVBarModelMapper* self);
void QVBarModelMapper_SetRowCount(QVBarModelMapper* self, int rowCount);
void QVBarModelMapper_SeriesReplaced(QVBarModelMapper* self);
void QVBarModelMapper_Connect_SeriesReplaced(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_ModelReplaced(QVBarModelMapper* self);
void QVBarModelMapper_Connect_ModelReplaced(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_FirstBarSetColumnChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_FirstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_LastBarSetColumnChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_LastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_FirstRowChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_FirstRowChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_RowCountChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_RowCountChanged(QVBarModelMapper* self, intptr_t slot);
libqt_string QVBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QVBarModelMapper_Tr3(const char* s, const char* c, int n);
bool QVBarModelMapper_Event(QVBarModelMapper* self, QEvent* event);
void QVBarModelMapper_OnEvent(QVBarModelMapper* self, intptr_t slot);
bool QVBarModelMapper_QBaseEvent(QVBarModelMapper* self, QEvent* event);
bool QVBarModelMapper_EventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event);
void QVBarModelMapper_OnEventFilter(QVBarModelMapper* self, intptr_t slot);
bool QVBarModelMapper_QBaseEventFilter(QVBarModelMapper* self, QObject* watched, QEvent* event);
void QVBarModelMapper_TimerEvent(QVBarModelMapper* self, QTimerEvent* event);
void QVBarModelMapper_OnTimerEvent(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseTimerEvent(QVBarModelMapper* self, QTimerEvent* event);
void QVBarModelMapper_ChildEvent(QVBarModelMapper* self, QChildEvent* event);
void QVBarModelMapper_OnChildEvent(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseChildEvent(QVBarModelMapper* self, QChildEvent* event);
void QVBarModelMapper_CustomEvent(QVBarModelMapper* self, QEvent* event);
void QVBarModelMapper_OnCustomEvent(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseCustomEvent(QVBarModelMapper* self, QEvent* event);
void QVBarModelMapper_ConnectNotify(QVBarModelMapper* self, QMetaMethod* signal);
void QVBarModelMapper_OnConnectNotify(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseConnectNotify(QVBarModelMapper* self, QMetaMethod* signal);
void QVBarModelMapper_DisconnectNotify(QVBarModelMapper* self, QMetaMethod* signal);
void QVBarModelMapper_OnDisconnectNotify(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseDisconnectNotify(QVBarModelMapper* self, QMetaMethod* signal);
int QVBarModelMapper_First(const QVBarModelMapper* self);
void QVBarModelMapper_OnFirst(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseFirst(const QVBarModelMapper* self);
void QVBarModelMapper_SetFirst(QVBarModelMapper* self, int first);
void QVBarModelMapper_OnSetFirst(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseSetFirst(QVBarModelMapper* self, int first);
int QVBarModelMapper_Count(const QVBarModelMapper* self);
void QVBarModelMapper_OnCount(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseCount(const QVBarModelMapper* self);
void QVBarModelMapper_SetCount(QVBarModelMapper* self, int count);
void QVBarModelMapper_OnSetCount(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseSetCount(QVBarModelMapper* self, int count);
int QVBarModelMapper_FirstBarSetSection(const QVBarModelMapper* self);
void QVBarModelMapper_OnFirstBarSetSection(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseFirstBarSetSection(const QVBarModelMapper* self);
void QVBarModelMapper_SetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection);
void QVBarModelMapper_OnSetFirstBarSetSection(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseSetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection);
int QVBarModelMapper_LastBarSetSection(const QVBarModelMapper* self);
void QVBarModelMapper_OnLastBarSetSection(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseLastBarSetSection(const QVBarModelMapper* self);
void QVBarModelMapper_SetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection);
void QVBarModelMapper_OnSetLastBarSetSection(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseSetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection);
int QVBarModelMapper_Orientation(const QVBarModelMapper* self);
void QVBarModelMapper_OnOrientation(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseOrientation(const QVBarModelMapper* self);
void QVBarModelMapper_SetOrientation(QVBarModelMapper* self, int orientation);
void QVBarModelMapper_OnSetOrientation(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_QBaseSetOrientation(QVBarModelMapper* self, int orientation);
QObject* QVBarModelMapper_Sender(const QVBarModelMapper* self);
void QVBarModelMapper_OnSender(const QVBarModelMapper* self, intptr_t slot);
QObject* QVBarModelMapper_QBaseSender(const QVBarModelMapper* self);
int QVBarModelMapper_SenderSignalIndex(const QVBarModelMapper* self);
void QVBarModelMapper_OnSenderSignalIndex(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseSenderSignalIndex(const QVBarModelMapper* self);
int QVBarModelMapper_Receivers(const QVBarModelMapper* self, const char* signal);
void QVBarModelMapper_OnReceivers(const QVBarModelMapper* self, intptr_t slot);
int QVBarModelMapper_QBaseReceivers(const QVBarModelMapper* self, const char* signal);
bool QVBarModelMapper_IsSignalConnected(const QVBarModelMapper* self, QMetaMethod* signal);
void QVBarModelMapper_OnIsSignalConnected(const QVBarModelMapper* self, intptr_t slot);
bool QVBarModelMapper_QBaseIsSignalConnected(const QVBarModelMapper* self, QMetaMethod* signal);
void QVBarModelMapper_Delete(QVBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
