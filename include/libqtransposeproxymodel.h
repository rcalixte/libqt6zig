#pragma once
#ifndef SRCC_LIBQTRANSPOSEPROXYMODEL_H
#define SRCC_LIBQTRANSPOSEPROXYMODEL_H

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
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
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
typedef struct QTransposeProxyModel QTransposeProxyModel;
typedef struct QVariant QVariant;
#endif

QTransposeProxyModel* QTransposeProxyModel_new();
QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent);
QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self);
void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1);
int QTransposeProxyModel_Metacall(QTransposeProxyModel* self, int param1, int param2, void** param3);
void QTransposeProxyModel_OnMetacall(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseMetacall(QTransposeProxyModel* self, int param1, int param2, void** param3);
libqt_string QTransposeProxyModel_Tr(const char* s);
void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
void QTransposeProxyModel_OnSetSourceModel(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseSetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, QModelIndex* parent);
void QTransposeProxyModel_OnRowCount(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseRowCount(const QTransposeProxyModel* self, QModelIndex* parent);
int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, QModelIndex* parent);
void QTransposeProxyModel_OnColumnCount(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseColumnCount(const QTransposeProxyModel* self, QModelIndex* parent);
QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
void QTransposeProxyModel_OnHeaderData(const QTransposeProxyModel* self, intptr_t slot);
QVariant* QTransposeProxyModel_QBaseHeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role);
void QTransposeProxyModel_OnSetHeaderData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseSetHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
void QTransposeProxyModel_OnSetItemData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseSetItemData(QTransposeProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, QModelIndex* index);
void QTransposeProxyModel_OnSpan(const QTransposeProxyModel* self, intptr_t slot);
QSize* QTransposeProxyModel_QBaseSpan(const QTransposeProxyModel* self, QModelIndex* index);
libqt_map /* of int to QVariant* */ QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, QModelIndex* index);
void QTransposeProxyModel_OnItemData(const QTransposeProxyModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QTransposeProxyModel_QBaseItemData(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex);
void QTransposeProxyModel_OnMapFromSource(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseMapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex);
void QTransposeProxyModel_OnMapToSource(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseMapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, QModelIndex* index);
void QTransposeProxyModel_OnParent(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseParent(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent);
void QTransposeProxyModel_OnIndex(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseIndex(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
void QTransposeProxyModel_OnInsertRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseInsertRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
void QTransposeProxyModel_OnRemoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseRemoveRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_OnMoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseMoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
void QTransposeProxyModel_OnInsertColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseInsertColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
void QTransposeProxyModel_OnRemoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseRemoveColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_OnMoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseMoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order);
void QTransposeProxyModel_OnSort(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseSort(QTransposeProxyModel* self, int column, int order);
libqt_string QTransposeProxyModel_Tr2(const char* s, const char* c);
libqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n);
QItemSelection* QTransposeProxyModel_MapSelectionToSource(const QTransposeProxyModel* self, QItemSelection* selection);
void QTransposeProxyModel_OnMapSelectionToSource(const QTransposeProxyModel* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_QBaseMapSelectionToSource(const QTransposeProxyModel* self, QItemSelection* selection);
QItemSelection* QTransposeProxyModel_MapSelectionFromSource(const QTransposeProxyModel* self, QItemSelection* selection);
void QTransposeProxyModel_OnMapSelectionFromSource(const QTransposeProxyModel* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_QBaseMapSelectionFromSource(const QTransposeProxyModel* self, QItemSelection* selection);
bool QTransposeProxyModel_Submit(QTransposeProxyModel* self);
void QTransposeProxyModel_OnSubmit(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseSubmit(QTransposeProxyModel* self);
void QTransposeProxyModel_Revert(QTransposeProxyModel* self);
void QTransposeProxyModel_OnRevert(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseRevert(QTransposeProxyModel* self);
QVariant* QTransposeProxyModel_Data(const QTransposeProxyModel* self, QModelIndex* proxyIndex, int role);
void QTransposeProxyModel_OnData(const QTransposeProxyModel* self, intptr_t slot);
QVariant* QTransposeProxyModel_QBaseData(const QTransposeProxyModel* self, QModelIndex* proxyIndex, int role);
int QTransposeProxyModel_Flags(const QTransposeProxyModel* self, QModelIndex* index);
void QTransposeProxyModel_OnFlags(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseFlags(const QTransposeProxyModel* self, QModelIndex* index);
bool QTransposeProxyModel_SetData(QTransposeProxyModel* self, QModelIndex* index, QVariant* value, int role);
void QTransposeProxyModel_OnSetData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseSetData(QTransposeProxyModel* self, QModelIndex* index, QVariant* value, int role);
bool QTransposeProxyModel_ClearItemData(QTransposeProxyModel* self, QModelIndex* index);
void QTransposeProxyModel_OnClearItemData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseClearItemData(QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_Buddy(const QTransposeProxyModel* self, QModelIndex* index);
void QTransposeProxyModel_OnBuddy(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseBuddy(const QTransposeProxyModel* self, QModelIndex* index);
bool QTransposeProxyModel_CanFetchMore(const QTransposeProxyModel* self, QModelIndex* parent);
void QTransposeProxyModel_OnCanFetchMore(const QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseCanFetchMore(const QTransposeProxyModel* self, QModelIndex* parent);
void QTransposeProxyModel_FetchMore(QTransposeProxyModel* self, QModelIndex* parent);
void QTransposeProxyModel_OnFetchMore(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseFetchMore(QTransposeProxyModel* self, QModelIndex* parent);
bool QTransposeProxyModel_HasChildren(const QTransposeProxyModel* self, QModelIndex* parent);
void QTransposeProxyModel_OnHasChildren(const QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseHasChildren(const QTransposeProxyModel* self, QModelIndex* parent);
QModelIndex* QTransposeProxyModel_Sibling(const QTransposeProxyModel* self, int row, int column, QModelIndex* idx);
void QTransposeProxyModel_OnSibling(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseSibling(const QTransposeProxyModel* self, int row, int column, QModelIndex* idx);
QMimeData* QTransposeProxyModel_MimeData(const QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ indexes);
void QTransposeProxyModel_OnMimeData(const QTransposeProxyModel* self, intptr_t slot);
QMimeData* QTransposeProxyModel_QBaseMimeData(const QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ indexes);
bool QTransposeProxyModel_CanDropMimeData(const QTransposeProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QTransposeProxyModel_OnCanDropMimeData(const QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseCanDropMimeData(const QTransposeProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_DropMimeData(QTransposeProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QTransposeProxyModel_OnDropMimeData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseDropMimeData(QTransposeProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
libqt_list /* of libqt_string */ QTransposeProxyModel_MimeTypes(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnMimeTypes(const QTransposeProxyModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QTransposeProxyModel_QBaseMimeTypes(const QTransposeProxyModel* self);
int QTransposeProxyModel_SupportedDragActions(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnSupportedDragActions(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseSupportedDragActions(const QTransposeProxyModel* self);
int QTransposeProxyModel_SupportedDropActions(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnSupportedDropActions(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseSupportedDropActions(const QTransposeProxyModel* self);
libqt_map /* of int to libqt_string */ QTransposeProxyModel_RoleNames(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnRoleNames(const QTransposeProxyModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QTransposeProxyModel_QBaseRoleNames(const QTransposeProxyModel* self);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_Match(const QTransposeProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QTransposeProxyModel_OnMatch(const QTransposeProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_QBaseMatch(const QTransposeProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QTransposeProxyModel_MultiData(const QTransposeProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QTransposeProxyModel_OnMultiData(const QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseMultiData(const QTransposeProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QTransposeProxyModel_ResetInternalData(QTransposeProxyModel* self);
void QTransposeProxyModel_OnResetInternalData(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseResetInternalData(QTransposeProxyModel* self);
bool QTransposeProxyModel_Event(QTransposeProxyModel* self, QEvent* event);
void QTransposeProxyModel_OnEvent(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseEvent(QTransposeProxyModel* self, QEvent* event);
bool QTransposeProxyModel_EventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event);
void QTransposeProxyModel_OnEventFilter(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseEventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event);
void QTransposeProxyModel_TimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
void QTransposeProxyModel_OnTimerEvent(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseTimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
void QTransposeProxyModel_ChildEvent(QTransposeProxyModel* self, QChildEvent* event);
void QTransposeProxyModel_OnChildEvent(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseChildEvent(QTransposeProxyModel* self, QChildEvent* event);
void QTransposeProxyModel_CustomEvent(QTransposeProxyModel* self, QEvent* event);
void QTransposeProxyModel_OnCustomEvent(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseCustomEvent(QTransposeProxyModel* self, QEvent* event);
void QTransposeProxyModel_ConnectNotify(QTransposeProxyModel* self, QMetaMethod* signal);
void QTransposeProxyModel_OnConnectNotify(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseConnectNotify(QTransposeProxyModel* self, QMetaMethod* signal);
void QTransposeProxyModel_DisconnectNotify(QTransposeProxyModel* self, QMetaMethod* signal);
void QTransposeProxyModel_OnDisconnectNotify(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseDisconnectNotify(QTransposeProxyModel* self, QMetaMethod* signal);
QModelIndex* QTransposeProxyModel_CreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
void QTransposeProxyModel_OnCreateSourceIndex(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseCreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
QModelIndex* QTransposeProxyModel_CreateIndex(const QTransposeProxyModel* self, int row, int column);
void QTransposeProxyModel_OnCreateIndex(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseCreateIndex(const QTransposeProxyModel* self, int row, int column);
void QTransposeProxyModel_EncodeData(const QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QTransposeProxyModel_OnEncodeData(const QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEncodeData(const QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QTransposeProxyModel_DecodeData(QTransposeProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QTransposeProxyModel_OnDecodeData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseDecodeData(QTransposeProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QTransposeProxyModel_BeginInsertRows(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_OnBeginInsertRows(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseBeginInsertRows(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndInsertRows(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndInsertRows(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndInsertRows(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginRemoveRows(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_OnBeginRemoveRows(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseBeginRemoveRows(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndRemoveRows(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndRemoveRows(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndRemoveRows(QTransposeProxyModel* self);
bool QTransposeProxyModel_BeginMoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QTransposeProxyModel_OnBeginMoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseBeginMoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QTransposeProxyModel_EndMoveRows(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndMoveRows(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndMoveRows(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginInsertColumns(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_OnBeginInsertColumns(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseBeginInsertColumns(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndInsertColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndInsertColumns(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndInsertColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginRemoveColumns(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_OnBeginRemoveColumns(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseBeginRemoveColumns(QTransposeProxyModel* self, QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndRemoveColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndRemoveColumns(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndRemoveColumns(QTransposeProxyModel* self);
bool QTransposeProxyModel_BeginMoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QTransposeProxyModel_OnBeginMoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseBeginMoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QTransposeProxyModel_EndMoveColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndMoveColumns(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndMoveColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginResetModel(QTransposeProxyModel* self);
void QTransposeProxyModel_OnBeginResetModel(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseBeginResetModel(QTransposeProxyModel* self);
void QTransposeProxyModel_EndResetModel(QTransposeProxyModel* self);
void QTransposeProxyModel_OnEndResetModel(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseEndResetModel(QTransposeProxyModel* self);
void QTransposeProxyModel_ChangePersistentIndex(QTransposeProxyModel* self, QModelIndex* from, QModelIndex* to);
void QTransposeProxyModel_OnChangePersistentIndex(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseChangePersistentIndex(QTransposeProxyModel* self, QModelIndex* from, QModelIndex* to);
void QTransposeProxyModel_ChangePersistentIndexList(QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
void QTransposeProxyModel_OnChangePersistentIndexList(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseChangePersistentIndexList(QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_PersistentIndexList(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnPersistentIndexList(const QTransposeProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_QBasePersistentIndexList(const QTransposeProxyModel* self);
QObject* QTransposeProxyModel_Sender(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnSender(const QTransposeProxyModel* self, intptr_t slot);
QObject* QTransposeProxyModel_QBaseSender(const QTransposeProxyModel* self);
int QTransposeProxyModel_SenderSignalIndex(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnSenderSignalIndex(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseSenderSignalIndex(const QTransposeProxyModel* self);
int QTransposeProxyModel_Receivers(const QTransposeProxyModel* self, const char* signal);
void QTransposeProxyModel_OnReceivers(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseReceivers(const QTransposeProxyModel* self, const char* signal);
bool QTransposeProxyModel_IsSignalConnected(const QTransposeProxyModel* self, QMetaMethod* signal);
void QTransposeProxyModel_OnIsSignalConnected(const QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseIsSignalConnected(const QTransposeProxyModel* self, QMetaMethod* signal);
void QTransposeProxyModel_Delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
