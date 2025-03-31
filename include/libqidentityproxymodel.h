#pragma once
#ifndef SRCC_LIBQIDENTITYPROXYMODEL_H
#define SRCC_LIBQIDENTITYPROXYMODEL_H

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
typedef struct QIdentityProxyModel QIdentityProxyModel;
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
typedef struct QVariant QVariant;
#endif

QIdentityProxyModel* QIdentityProxyModel_new();
QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent);
QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self);
void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1);
int QIdentityProxyModel_Metacall(QIdentityProxyModel* self, int param1, int param2, void** param3);
void QIdentityProxyModel_OnMetacall(QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseMetacall(QIdentityProxyModel* self, int param1, int param2, void** param3);
libqt_string QIdentityProxyModel_Tr(const char* s);
int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_OnColumnCount(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseColumnCount(const QIdentityProxyModel* self, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
void QIdentityProxyModel_OnIndex(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseIndex(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex);
void QIdentityProxyModel_OnMapFromSource(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseMapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex);
void QIdentityProxyModel_OnMapToSource(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseMapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, QModelIndex* child);
void QIdentityProxyModel_OnParent(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseParent(const QIdentityProxyModel* self, QModelIndex* child);
int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_OnRowCount(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseRowCount(const QIdentityProxyModel* self, QModelIndex* parent);
QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role);
void QIdentityProxyModel_OnHeaderData(const QIdentityProxyModel* self, intptr_t slot);
QVariant* QIdentityProxyModel_QBaseHeaderData(const QIdentityProxyModel* self, int section, int orientation, int role);
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QIdentityProxyModel_OnDropMimeData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseDropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
void QIdentityProxyModel_OnSibling(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseSibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx);
QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection);
void QIdentityProxyModel_OnMapSelectionFromSource(const QIdentityProxyModel* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_QBaseMapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection);
QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection);
void QIdentityProxyModel_OnMapSelectionToSource(const QIdentityProxyModel* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_QBaseMapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection);
libqt_list /* of QModelIndex* */ QIdentityProxyModel_Match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QIdentityProxyModel_OnMatch(const QIdentityProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBaseMatch(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
void QIdentityProxyModel_OnSetSourceModel(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseSetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
void QIdentityProxyModel_OnInsertColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseInsertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
void QIdentityProxyModel_OnInsertRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseInsertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
void QIdentityProxyModel_OnRemoveColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseRemoveColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent);
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
void QIdentityProxyModel_OnRemoveRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseRemoveRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent);
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QIdentityProxyModel_OnMoveRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseMoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QIdentityProxyModel_OnMoveColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseMoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
libqt_string QIdentityProxyModel_Tr2(const char* s, const char* c);
libqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n);
bool QIdentityProxyModel_Submit(QIdentityProxyModel* self);
void QIdentityProxyModel_OnSubmit(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseSubmit(QIdentityProxyModel* self);
void QIdentityProxyModel_Revert(QIdentityProxyModel* self);
void QIdentityProxyModel_OnRevert(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseRevert(QIdentityProxyModel* self);
QVariant* QIdentityProxyModel_Data(const QIdentityProxyModel* self, QModelIndex* proxyIndex, int role);
void QIdentityProxyModel_OnData(const QIdentityProxyModel* self, intptr_t slot);
QVariant* QIdentityProxyModel_QBaseData(const QIdentityProxyModel* self, QModelIndex* proxyIndex, int role);
libqt_map /* of int to QVariant* */ QIdentityProxyModel_ItemData(const QIdentityProxyModel* self, QModelIndex* index);
void QIdentityProxyModel_OnItemData(const QIdentityProxyModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QIdentityProxyModel_QBaseItemData(const QIdentityProxyModel* self, QModelIndex* index);
int QIdentityProxyModel_Flags(const QIdentityProxyModel* self, QModelIndex* index);
void QIdentityProxyModel_OnFlags(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseFlags(const QIdentityProxyModel* self, QModelIndex* index);
bool QIdentityProxyModel_SetData(QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role);
void QIdentityProxyModel_OnSetData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseSetData(QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role);
bool QIdentityProxyModel_SetItemData(QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
void QIdentityProxyModel_OnSetItemData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseSetItemData(QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
bool QIdentityProxyModel_SetHeaderData(QIdentityProxyModel* self, int section, int orientation, QVariant* value, int role);
void QIdentityProxyModel_OnSetHeaderData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseSetHeaderData(QIdentityProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QIdentityProxyModel_ClearItemData(QIdentityProxyModel* self, QModelIndex* index);
void QIdentityProxyModel_OnClearItemData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseClearItemData(QIdentityProxyModel* self, QModelIndex* index);
QModelIndex* QIdentityProxyModel_Buddy(const QIdentityProxyModel* self, QModelIndex* index);
void QIdentityProxyModel_OnBuddy(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseBuddy(const QIdentityProxyModel* self, QModelIndex* index);
bool QIdentityProxyModel_CanFetchMore(const QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_OnCanFetchMore(const QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseCanFetchMore(const QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_FetchMore(QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_OnFetchMore(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseFetchMore(QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_Sort(QIdentityProxyModel* self, int column, int order);
void QIdentityProxyModel_OnSort(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseSort(QIdentityProxyModel* self, int column, int order);
QSize* QIdentityProxyModel_Span(const QIdentityProxyModel* self, QModelIndex* index);
void QIdentityProxyModel_OnSpan(const QIdentityProxyModel* self, intptr_t slot);
QSize* QIdentityProxyModel_QBaseSpan(const QIdentityProxyModel* self, QModelIndex* index);
bool QIdentityProxyModel_HasChildren(const QIdentityProxyModel* self, QModelIndex* parent);
void QIdentityProxyModel_OnHasChildren(const QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseHasChildren(const QIdentityProxyModel* self, QModelIndex* parent);
QMimeData* QIdentityProxyModel_MimeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes);
void QIdentityProxyModel_OnMimeData(const QIdentityProxyModel* self, intptr_t slot);
QMimeData* QIdentityProxyModel_QBaseMimeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes);
bool QIdentityProxyModel_CanDropMimeData(const QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QIdentityProxyModel_OnCanDropMimeData(const QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseCanDropMimeData(const QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
libqt_list /* of libqt_string */ QIdentityProxyModel_MimeTypes(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnMimeTypes(const QIdentityProxyModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QIdentityProxyModel_QBaseMimeTypes(const QIdentityProxyModel* self);
int QIdentityProxyModel_SupportedDragActions(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnSupportedDragActions(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseSupportedDragActions(const QIdentityProxyModel* self);
int QIdentityProxyModel_SupportedDropActions(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnSupportedDropActions(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseSupportedDropActions(const QIdentityProxyModel* self);
libqt_map /* of int to libqt_string */ QIdentityProxyModel_RoleNames(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnRoleNames(const QIdentityProxyModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QIdentityProxyModel_QBaseRoleNames(const QIdentityProxyModel* self);
void QIdentityProxyModel_MultiData(const QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QIdentityProxyModel_OnMultiData(const QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseMultiData(const QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QIdentityProxyModel_ResetInternalData(QIdentityProxyModel* self);
void QIdentityProxyModel_OnResetInternalData(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseResetInternalData(QIdentityProxyModel* self);
bool QIdentityProxyModel_Event(QIdentityProxyModel* self, QEvent* event);
void QIdentityProxyModel_OnEvent(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseEvent(QIdentityProxyModel* self, QEvent* event);
bool QIdentityProxyModel_EventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event);
void QIdentityProxyModel_OnEventFilter(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseEventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event);
void QIdentityProxyModel_TimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
void QIdentityProxyModel_OnTimerEvent(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseTimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
void QIdentityProxyModel_ChildEvent(QIdentityProxyModel* self, QChildEvent* event);
void QIdentityProxyModel_OnChildEvent(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseChildEvent(QIdentityProxyModel* self, QChildEvent* event);
void QIdentityProxyModel_CustomEvent(QIdentityProxyModel* self, QEvent* event);
void QIdentityProxyModel_OnCustomEvent(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseCustomEvent(QIdentityProxyModel* self, QEvent* event);
void QIdentityProxyModel_ConnectNotify(QIdentityProxyModel* self, QMetaMethod* signal);
void QIdentityProxyModel_OnConnectNotify(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseConnectNotify(QIdentityProxyModel* self, QMetaMethod* signal);
void QIdentityProxyModel_DisconnectNotify(QIdentityProxyModel* self, QMetaMethod* signal);
void QIdentityProxyModel_OnDisconnectNotify(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseDisconnectNotify(QIdentityProxyModel* self, QMetaMethod* signal);
QModelIndex* QIdentityProxyModel_CreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr);
void QIdentityProxyModel_OnCreateSourceIndex(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseCreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr);
QModelIndex* QIdentityProxyModel_CreateIndex(const QIdentityProxyModel* self, int row, int column);
void QIdentityProxyModel_OnCreateIndex(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseCreateIndex(const QIdentityProxyModel* self, int row, int column);
void QIdentityProxyModel_EncodeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QIdentityProxyModel_OnEncodeData(const QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEncodeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QIdentityProxyModel_DecodeData(QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QIdentityProxyModel_OnDecodeData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseDecodeData(QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QIdentityProxyModel_BeginInsertRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_OnBeginInsertRows(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseBeginInsertRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_EndInsertRows(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndInsertRows(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndInsertRows(QIdentityProxyModel* self);
void QIdentityProxyModel_BeginRemoveRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_OnBeginRemoveRows(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseBeginRemoveRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_EndRemoveRows(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndRemoveRows(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndRemoveRows(QIdentityProxyModel* self);
bool QIdentityProxyModel_BeginMoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QIdentityProxyModel_OnBeginMoveRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseBeginMoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QIdentityProxyModel_EndMoveRows(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndMoveRows(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndMoveRows(QIdentityProxyModel* self);
void QIdentityProxyModel_BeginInsertColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_OnBeginInsertColumns(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseBeginInsertColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_EndInsertColumns(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndInsertColumns(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndInsertColumns(QIdentityProxyModel* self);
void QIdentityProxyModel_BeginRemoveColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_OnBeginRemoveColumns(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseBeginRemoveColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last);
void QIdentityProxyModel_EndRemoveColumns(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndRemoveColumns(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndRemoveColumns(QIdentityProxyModel* self);
bool QIdentityProxyModel_BeginMoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QIdentityProxyModel_OnBeginMoveColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseBeginMoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QIdentityProxyModel_EndMoveColumns(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndMoveColumns(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndMoveColumns(QIdentityProxyModel* self);
void QIdentityProxyModel_BeginResetModel(QIdentityProxyModel* self);
void QIdentityProxyModel_OnBeginResetModel(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseBeginResetModel(QIdentityProxyModel* self);
void QIdentityProxyModel_EndResetModel(QIdentityProxyModel* self);
void QIdentityProxyModel_OnEndResetModel(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseEndResetModel(QIdentityProxyModel* self);
void QIdentityProxyModel_ChangePersistentIndex(QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to);
void QIdentityProxyModel_OnChangePersistentIndex(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseChangePersistentIndex(QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to);
void QIdentityProxyModel_ChangePersistentIndexList(QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
void QIdentityProxyModel_OnChangePersistentIndexList(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseChangePersistentIndexList(QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QIdentityProxyModel_PersistentIndexList(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnPersistentIndexList(const QIdentityProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBasePersistentIndexList(const QIdentityProxyModel* self);
QObject* QIdentityProxyModel_Sender(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnSender(const QIdentityProxyModel* self, intptr_t slot);
QObject* QIdentityProxyModel_QBaseSender(const QIdentityProxyModel* self);
int QIdentityProxyModel_SenderSignalIndex(const QIdentityProxyModel* self);
void QIdentityProxyModel_OnSenderSignalIndex(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseSenderSignalIndex(const QIdentityProxyModel* self);
int QIdentityProxyModel_Receivers(const QIdentityProxyModel* self, const char* signal);
void QIdentityProxyModel_OnReceivers(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseReceivers(const QIdentityProxyModel* self, const char* signal);
bool QIdentityProxyModel_IsSignalConnected(const QIdentityProxyModel* self, QMetaMethod* signal);
void QIdentityProxyModel_OnIsSignalConnected(const QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseIsSignalConnected(const QIdentityProxyModel* self, QMetaMethod* signal);
void QIdentityProxyModel_Delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
