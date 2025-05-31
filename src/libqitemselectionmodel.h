#pragma once
#ifndef SRCC_LIBQITEMSELECTIONMODEL_H
#define SRCC_LIBQITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QItemSelectionRange QItemSelectionRange;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QTimerEvent QTimerEvent;
#endif

#ifdef __cplusplus
typedef QItemSelectionModel::SelectionFlag SelectionFlag;   // C++ enum
typedef QItemSelectionModel::SelectionFlags SelectionFlags; // C++ QFlags
#else
typedef int SelectionFlag;  // C ABI enum
typedef int SelectionFlags; // C ABI QFlags
#endif

QItemSelectionRange* QItemSelectionRange_new();
QItemSelectionRange* QItemSelectionRange_new2(const QModelIndex* topL, const QModelIndex* bottomR);
QItemSelectionRange* QItemSelectionRange_new3(const QModelIndex* index);
QItemSelectionRange* QItemSelectionRange_new4(const QItemSelectionRange* param1);
void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other);
int QItemSelectionRange_Top(const QItemSelectionRange* self);
int QItemSelectionRange_Left(const QItemSelectionRange* self);
int QItemSelectionRange_Bottom(const QItemSelectionRange* self);
int QItemSelectionRange_Right(const QItemSelectionRange* self);
int QItemSelectionRange_Width(const QItemSelectionRange* self);
int QItemSelectionRange_Height(const QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_TopLeft(const QItemSelectionRange* self);
QPersistentModelIndex* QItemSelectionRange_BottomRight(const QItemSelectionRange* self);
QModelIndex* QItemSelectionRange_Parent(const QItemSelectionRange* self);
QAbstractItemModel* QItemSelectionRange_Model(const QItemSelectionRange* self);
bool QItemSelectionRange_Contains(const QItemSelectionRange* self, const QModelIndex* index);
bool QItemSelectionRange_Contains2(const QItemSelectionRange* self, int row, int column, const QModelIndex* parentIndex);
bool QItemSelectionRange_Intersects(const QItemSelectionRange* self, const QItemSelectionRange* other);
QItemSelectionRange* QItemSelectionRange_Intersected(const QItemSelectionRange* self, const QItemSelectionRange* other);
bool QItemSelectionRange_OperatorEqual(const QItemSelectionRange* self, const QItemSelectionRange* other);
bool QItemSelectionRange_OperatorNotEqual(const QItemSelectionRange* self, const QItemSelectionRange* other);
bool QItemSelectionRange_IsValid(const QItemSelectionRange* self);
bool QItemSelectionRange_IsEmpty(const QItemSelectionRange* self);
libqt_list /* of QModelIndex* */ QItemSelectionRange_Indexes(const QItemSelectionRange* self);
void QItemSelectionRange_Delete(QItemSelectionRange* self);

QItemSelectionModel* QItemSelectionModel_new();
QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
QMetaObject* QItemSelectionModel_MetaObject(const QItemSelectionModel* self);
void* QItemSelectionModel_Metacast(QItemSelectionModel* self, const char* param1);
int QItemSelectionModel_Metacall(QItemSelectionModel* self, int param1, int param2, void** param3);
void QItemSelectionModel_OnMetacall(QItemSelectionModel* self, intptr_t slot);
int QItemSelectionModel_QBaseMetacall(QItemSelectionModel* self, int param1, int param2, void** param3);
libqt_string QItemSelectionModel_Tr(const char* s);
QModelIndex* QItemSelectionModel_CurrentIndex(const QItemSelectionModel* self);
bool QItemSelectionModel_IsSelected(const QItemSelectionModel* self, const QModelIndex* index);
bool QItemSelectionModel_IsRowSelected(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_IsColumnSelected(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_RowIntersectsSelection(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_ColumnIntersectsSelection(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_HasSelection(const QItemSelectionModel* self);
libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self);
libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedRows(const QItemSelectionModel* self);
libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self);
QItemSelection* QItemSelectionModel_Selection(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self);
void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_OnSetCurrentIndex(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseSetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_Select(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_OnSelect(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseSelect(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_Select2(QItemSelectionModel* self, const QItemSelection* selection, int command);
void QItemSelectionModel_OnSelect2(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseSelect2(QItemSelectionModel* self, const QItemSelection* selection, int command);
void QItemSelectionModel_Clear(QItemSelectionModel* self);
void QItemSelectionModel_OnClear(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseClear(QItemSelectionModel* self);
void QItemSelectionModel_Reset(QItemSelectionModel* self);
void QItemSelectionModel_OnReset(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseReset(QItemSelectionModel* self);
void QItemSelectionModel_ClearSelection(QItemSelectionModel* self);
void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_OnClearCurrentIndex(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_SelectionChanged(QItemSelectionModel* self, const QItemSelection* selected, const QItemSelection* deselected);
void QItemSelectionModel_Connect_SelectionChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous);
void QItemSelectionModel_Connect_CurrentChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous);
void QItemSelectionModel_Connect_CurrentRowChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous);
void QItemSelectionModel_Connect_CurrentColumnChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_Connect_ModelChanged(QItemSelectionModel* self, intptr_t slot);
libqt_string QItemSelectionModel_Tr2(const char* s, const char* c);
libqt_string QItemSelectionModel_Tr3(const char* s, const char* c, int n);
bool QItemSelectionModel_IsRowSelected2(const QItemSelectionModel* self, int row, const QModelIndex* parent);
bool QItemSelectionModel_IsColumnSelected2(const QItemSelectionModel* self, int column, const QModelIndex* parent);
bool QItemSelectionModel_RowIntersectsSelection2(const QItemSelectionModel* self, int row, const QModelIndex* parent);
bool QItemSelectionModel_ColumnIntersectsSelection2(const QItemSelectionModel* self, int column, const QModelIndex* parent);
libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column);
libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_Event(QItemSelectionModel* self, QEvent* event);
void QItemSelectionModel_OnEvent(QItemSelectionModel* self, intptr_t slot);
bool QItemSelectionModel_QBaseEvent(QItemSelectionModel* self, QEvent* event);
bool QItemSelectionModel_EventFilter(QItemSelectionModel* self, QObject* watched, QEvent* event);
void QItemSelectionModel_OnEventFilter(QItemSelectionModel* self, intptr_t slot);
bool QItemSelectionModel_QBaseEventFilter(QItemSelectionModel* self, QObject* watched, QEvent* event);
void QItemSelectionModel_TimerEvent(QItemSelectionModel* self, QTimerEvent* event);
void QItemSelectionModel_OnTimerEvent(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseTimerEvent(QItemSelectionModel* self, QTimerEvent* event);
void QItemSelectionModel_ChildEvent(QItemSelectionModel* self, QChildEvent* event);
void QItemSelectionModel_OnChildEvent(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseChildEvent(QItemSelectionModel* self, QChildEvent* event);
void QItemSelectionModel_CustomEvent(QItemSelectionModel* self, QEvent* event);
void QItemSelectionModel_OnCustomEvent(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseCustomEvent(QItemSelectionModel* self, QEvent* event);
void QItemSelectionModel_ConnectNotify(QItemSelectionModel* self, const QMetaMethod* signal);
void QItemSelectionModel_OnConnectNotify(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseConnectNotify(QItemSelectionModel* self, const QMetaMethod* signal);
void QItemSelectionModel_DisconnectNotify(QItemSelectionModel* self, const QMetaMethod* signal);
void QItemSelectionModel_OnDisconnectNotify(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseDisconnectNotify(QItemSelectionModel* self, const QMetaMethod* signal);
void QItemSelectionModel_EmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
void QItemSelectionModel_OnEmitSelectionChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseEmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
QObject* QItemSelectionModel_Sender(const QItemSelectionModel* self);
void QItemSelectionModel_OnSender(const QItemSelectionModel* self, intptr_t slot);
QObject* QItemSelectionModel_QBaseSender(const QItemSelectionModel* self);
int QItemSelectionModel_SenderSignalIndex(const QItemSelectionModel* self);
void QItemSelectionModel_OnSenderSignalIndex(const QItemSelectionModel* self, intptr_t slot);
int QItemSelectionModel_QBaseSenderSignalIndex(const QItemSelectionModel* self);
int QItemSelectionModel_Receivers(const QItemSelectionModel* self, const char* signal);
void QItemSelectionModel_OnReceivers(const QItemSelectionModel* self, intptr_t slot);
int QItemSelectionModel_QBaseReceivers(const QItemSelectionModel* self, const char* signal);
bool QItemSelectionModel_IsSignalConnected(const QItemSelectionModel* self, const QMetaMethod* signal);
void QItemSelectionModel_OnIsSignalConnected(const QItemSelectionModel* self, intptr_t slot);
bool QItemSelectionModel_QBaseIsSignalConnected(const QItemSelectionModel* self, const QMetaMethod* signal);
void QItemSelectionModel_Delete(QItemSelectionModel* self);

QItemSelection* QItemSelection_new(const QModelIndex* topLeft, const QModelIndex* bottomRight);
QItemSelection* QItemSelection_new2();
QItemSelection* QItemSelection_new3(const QItemSelection* param1);
void QItemSelection_Select(QItemSelection* self, const QModelIndex* topLeft, const QModelIndex* bottomRight);
bool QItemSelection_Contains(const QItemSelection* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QItemSelection_Indexes(const QItemSelection* self);
void QItemSelection_Merge(QItemSelection* self, const QItemSelection* other, int command);
void QItemSelection_Split(const QItemSelectionRange* range, const QItemSelectionRange* other, QItemSelection* result);
void QItemSelection_Delete(QItemSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
