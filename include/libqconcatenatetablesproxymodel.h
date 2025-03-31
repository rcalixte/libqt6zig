#pragma once
#ifndef SRCC_LIBQCONCATENATETABLESPROXYMODEL_H
#define SRCC_LIBQCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QConcatenateTablesProxyModel QConcatenateTablesProxyModel;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QSize QSize;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new();
QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent);
QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self);
void* QConcatenateTablesProxyModel_Metacast(QConcatenateTablesProxyModel* self, const char* param1);
int QConcatenateTablesProxyModel_Metacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3);
void QConcatenateTablesProxyModel_OnMetacall(QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseMetacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3);
libqt_string QConcatenateTablesProxyModel_Tr(const char* s);
libqt_list /* of QAbstractItemModel* */ QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role);
void QConcatenateTablesProxyModel_OnData(const QConcatenateTablesProxyModel* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_QBaseData(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role);
bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role);
void QConcatenateTablesProxyModel_OnSetData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseSetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role);
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
void QConcatenateTablesProxyModel_OnItemData(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_QBaseItemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex);
bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
void QConcatenateTablesProxyModel_OnSetItemData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseSetItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, QModelIndex* index);
void QConcatenateTablesProxyModel_OnFlags(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseFlags(const QConcatenateTablesProxyModel* self, QModelIndex* index);
QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnIndex(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseIndex(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, QModelIndex* index);
void QConcatenateTablesProxyModel_OnParent(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseParent(const QConcatenateTablesProxyModel* self, QModelIndex* index);
int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnRowCount(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseRowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
void QConcatenateTablesProxyModel_OnHeaderData(const QConcatenateTablesProxyModel* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_QBaseHeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnColumnCount(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseColumnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnMimeTypes(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_QBaseMimeTypes(const QConcatenateTablesProxyModel* self);
QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes);
void QConcatenateTablesProxyModel_OnMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot);
QMimeData* QConcatenateTablesProxyModel_QBaseMimeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes);
bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnCanDropMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseCanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseDropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, QModelIndex* index);
void QConcatenateTablesProxyModel_OnSpan(const QConcatenateTablesProxyModel* self, intptr_t slot);
QSize* QConcatenateTablesProxyModel_QBaseSpan(const QConcatenateTablesProxyModel* self, QModelIndex* index);
libqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c);
libqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n);
QModelIndex* QConcatenateTablesProxyModel_Sibling(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx);
void QConcatenateTablesProxyModel_OnSibling(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseSibling(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx);
bool QConcatenateTablesProxyModel_HasChildren(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnHasChildren(const QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseHasChildren(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_SetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, QVariant* value, int role);
void QConcatenateTablesProxyModel_OnSetHeaderData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseSetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QConcatenateTablesProxyModel_ClearItemData(QConcatenateTablesProxyModel* self, QModelIndex* index);
void QConcatenateTablesProxyModel_OnClearItemData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseClearItemData(QConcatenateTablesProxyModel* self, QModelIndex* index);
int QConcatenateTablesProxyModel_SupportedDropActions(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnSupportedDropActions(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseSupportedDropActions(const QConcatenateTablesProxyModel* self);
int QConcatenateTablesProxyModel_SupportedDragActions(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnSupportedDragActions(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseSupportedDragActions(const QConcatenateTablesProxyModel* self);
bool QConcatenateTablesProxyModel_InsertRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseInsertRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_InsertColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseInsertColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_RemoveRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseRemoveRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_RemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseRemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent);
bool QConcatenateTablesProxyModel_MoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QConcatenateTablesProxyModel_OnMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseMoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QConcatenateTablesProxyModel_MoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QConcatenateTablesProxyModel_OnMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseMoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QConcatenateTablesProxyModel_FetchMore(QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnFetchMore(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseFetchMore(QConcatenateTablesProxyModel* self, QModelIndex* parent);
bool QConcatenateTablesProxyModel_CanFetchMore(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_OnCanFetchMore(const QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseCanFetchMore(const QConcatenateTablesProxyModel* self, QModelIndex* parent);
void QConcatenateTablesProxyModel_Sort(QConcatenateTablesProxyModel* self, int column, int order);
void QConcatenateTablesProxyModel_OnSort(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseSort(QConcatenateTablesProxyModel* self, int column, int order);
QModelIndex* QConcatenateTablesProxyModel_Buddy(const QConcatenateTablesProxyModel* self, QModelIndex* index);
void QConcatenateTablesProxyModel_OnBuddy(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseBuddy(const QConcatenateTablesProxyModel* self, QModelIndex* index);
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_Match(const QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QConcatenateTablesProxyModel_OnMatch(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBaseMatch(const QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_RoleNames(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnRoleNames(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_QBaseRoleNames(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_MultiData(const QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QConcatenateTablesProxyModel_OnMultiData(const QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseMultiData(const QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QConcatenateTablesProxyModel_Submit(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnSubmit(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseSubmit(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_Revert(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnRevert(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseRevert(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_ResetInternalData(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnResetInternalData(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseResetInternalData(QConcatenateTablesProxyModel* self);
bool QConcatenateTablesProxyModel_Event(QConcatenateTablesProxyModel* self, QEvent* event);
void QConcatenateTablesProxyModel_OnEvent(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseEvent(QConcatenateTablesProxyModel* self, QEvent* event);
bool QConcatenateTablesProxyModel_EventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event);
void QConcatenateTablesProxyModel_OnEventFilter(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseEventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event);
void QConcatenateTablesProxyModel_TimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event);
void QConcatenateTablesProxyModel_OnTimerEvent(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseTimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event);
void QConcatenateTablesProxyModel_ChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event);
void QConcatenateTablesProxyModel_OnChildEvent(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event);
void QConcatenateTablesProxyModel_CustomEvent(QConcatenateTablesProxyModel* self, QEvent* event);
void QConcatenateTablesProxyModel_OnCustomEvent(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseCustomEvent(QConcatenateTablesProxyModel* self, QEvent* event);
void QConcatenateTablesProxyModel_ConnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal);
void QConcatenateTablesProxyModel_OnConnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseConnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal);
void QConcatenateTablesProxyModel_DisconnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal);
void QConcatenateTablesProxyModel_OnDisconnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseDisconnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal);
QModelIndex* QConcatenateTablesProxyModel_CreateIndex(const QConcatenateTablesProxyModel* self, int row, int column);
void QConcatenateTablesProxyModel_OnCreateIndex(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseCreateIndex(const QConcatenateTablesProxyModel* self, int row, int column);
void QConcatenateTablesProxyModel_EncodeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QConcatenateTablesProxyModel_OnEncodeData(const QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEncodeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QConcatenateTablesProxyModel_DecodeData(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QConcatenateTablesProxyModel_OnDecodeData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseDecodeData(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QConcatenateTablesProxyModel_BeginInsertRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_OnBeginInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseBeginInsertRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_EndInsertRows(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndInsertRows(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_BeginRemoveRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_OnBeginRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseBeginRemoveRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_EndRemoveRows(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndRemoveRows(QConcatenateTablesProxyModel* self);
bool QConcatenateTablesProxyModel_BeginMoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QConcatenateTablesProxyModel_OnBeginMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseBeginMoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QConcatenateTablesProxyModel_EndMoveRows(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndMoveRows(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_BeginInsertColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_OnBeginInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseBeginInsertColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_EndInsertColumns(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndInsertColumns(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_BeginRemoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_OnBeginRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseBeginRemoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last);
void QConcatenateTablesProxyModel_EndRemoveColumns(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndRemoveColumns(QConcatenateTablesProxyModel* self);
bool QConcatenateTablesProxyModel_BeginMoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QConcatenateTablesProxyModel_OnBeginMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseBeginMoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QConcatenateTablesProxyModel_EndMoveColumns(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndMoveColumns(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_BeginResetModel(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnBeginResetModel(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseBeginResetModel(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_EndResetModel(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnEndResetModel(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseEndResetModel(QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_ChangePersistentIndex(QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to);
void QConcatenateTablesProxyModel_OnChangePersistentIndex(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseChangePersistentIndex(QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to);
void QConcatenateTablesProxyModel_ChangePersistentIndexList(QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
void QConcatenateTablesProxyModel_OnChangePersistentIndexList(QConcatenateTablesProxyModel* self, intptr_t slot);
void QConcatenateTablesProxyModel_QBaseChangePersistentIndexList(QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_PersistentIndexList(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnPersistentIndexList(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBasePersistentIndexList(const QConcatenateTablesProxyModel* self);
QObject* QConcatenateTablesProxyModel_Sender(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnSender(const QConcatenateTablesProxyModel* self, intptr_t slot);
QObject* QConcatenateTablesProxyModel_QBaseSender(const QConcatenateTablesProxyModel* self);
int QConcatenateTablesProxyModel_SenderSignalIndex(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnSenderSignalIndex(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseSenderSignalIndex(const QConcatenateTablesProxyModel* self);
int QConcatenateTablesProxyModel_Receivers(const QConcatenateTablesProxyModel* self, const char* signal);
void QConcatenateTablesProxyModel_OnReceivers(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseReceivers(const QConcatenateTablesProxyModel* self, const char* signal);
bool QConcatenateTablesProxyModel_IsSignalConnected(const QConcatenateTablesProxyModel* self, QMetaMethod* signal);
void QConcatenateTablesProxyModel_OnIsSignalConnected(const QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseIsSignalConnected(const QConcatenateTablesProxyModel* self, QMetaMethod* signal);
void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
