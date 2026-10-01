#pragma once
#ifndef LIBQABSTRACTPROXYMODEL_H
#define LIBQABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractProxyModel* QAbstractProxyModel_new();
QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent);
QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self);
void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1);
int QAbstractProxyModel_Metacall(QAbstractProxyModel* self, int param1, int param2, void** param3);
libqt_string QAbstractProxyModel_Tr(const char* s);
void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex);
QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection);
QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection);
bool QAbstractProxyModel_Submit(QAbstractProxyModel* self);
void QAbstractProxyModel_Revert(QAbstractProxyModel* self);
QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role);
QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role);
libqt_map /* of int to QVariant* */ QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, const QModelIndex* index);
int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, const QModelIndex* index);
bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role);
bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, const QModelIndex* index);
QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, const QModelIndex* index);
bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order);
QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, const QModelIndex* index);
bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, const QModelIndex* parent);
QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx);
QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
libqt_list /* of libqt_string */ QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self);
libqt_map /* of int to libqt_string */ QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self);
libqt_string QAbstractProxyModel_Tr2(const char* s, const char* c);
libqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n);
void QAbstractProxyModel_OnMetaObject(QAbstractProxyModel* self, intptr_t slot);
QMetaObject* QAbstractProxyModel_SuperMetaObject(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnMetacast(QAbstractProxyModel* self, intptr_t slot);
void* QAbstractProxyModel_SuperMetacast(QAbstractProxyModel* self, const char* param1);
void QAbstractProxyModel_OnMetacall(QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_SuperMetacall(QAbstractProxyModel* self, int param1, int param2, void** param3);
void QAbstractProxyModel_OnSetSourceModel(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperSetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
void QAbstractProxyModel_OnMapToSource(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_OnMapFromSource(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_OnMapSelectionToSource(QAbstractProxyModel* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_SuperMapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection);
void QAbstractProxyModel_OnMapSelectionFromSource(QAbstractProxyModel* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_SuperMapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection);
void QAbstractProxyModel_OnSubmit(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperSubmit(QAbstractProxyModel* self);
void QAbstractProxyModel_OnRevert(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperRevert(QAbstractProxyModel* self);
void QAbstractProxyModel_OnData(QAbstractProxyModel* self, intptr_t slot);
QVariant* QAbstractProxyModel_SuperData(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role);
void QAbstractProxyModel_OnHeaderData(QAbstractProxyModel* self, intptr_t slot);
QVariant* QAbstractProxyModel_SuperHeaderData(const QAbstractProxyModel* self, int section, int orientation, int role);
void QAbstractProxyModel_OnItemData(QAbstractProxyModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QAbstractProxyModel_SuperItemData(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnFlags(QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_SuperFlags(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnSetData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperSetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
void QAbstractProxyModel_OnSetItemData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperSetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QAbstractProxyModel_OnSetHeaderData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperSetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role);
void QAbstractProxyModel_OnClearItemData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperClearItemData(QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnBuddy(QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_SuperBuddy(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnCanFetchMore(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperCanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnFetchMore(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperFetchMore(QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnSort(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperSort(QAbstractProxyModel* self, int column, int order);
void QAbstractProxyModel_OnSpan(QAbstractProxyModel* self, intptr_t slot);
QSize* QAbstractProxyModel_SuperSpan(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnHasChildren(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperHasChildren(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnSibling(QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_SuperSibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx);
void QAbstractProxyModel_OnMimeData(QAbstractProxyModel* self, intptr_t slot);
QMimeData* QAbstractProxyModel_SuperMimeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QAbstractProxyModel_OnCanDropMimeData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperCanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QAbstractProxyModel_OnDropMimeData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperDropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QAbstractProxyModel_OnMimeTypes(QAbstractProxyModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QAbstractProxyModel_SuperMimeTypes(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnSupportedDragActions(QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_SuperSupportedDragActions(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnSupportedDropActions(QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_SuperSupportedDropActions(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnRoleNames(QAbstractProxyModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QAbstractProxyModel_SuperRoleNames(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_Index(const QAbstractProxyModel* self, int row, int column, const QModelIndex* parent);
void QAbstractProxyModel_OnIndex(QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_Parent(const QAbstractProxyModel* self, const QModelIndex* child);
void QAbstractProxyModel_OnParent(QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_RowCount(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnRowCount(QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_ColumnCount(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnColumnCount(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_InsertRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent);
void QAbstractProxyModel_OnInsertRows(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperInsertRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent);
bool QAbstractProxyModel_InsertColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent);
void QAbstractProxyModel_OnInsertColumns(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperInsertColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent);
bool QAbstractProxyModel_RemoveRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent);
void QAbstractProxyModel_OnRemoveRows(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperRemoveRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent);
bool QAbstractProxyModel_RemoveColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent);
void QAbstractProxyModel_OnRemoveColumns(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperRemoveColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent);
bool QAbstractProxyModel_MoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QAbstractProxyModel_OnMoveRows(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QAbstractProxyModel_MoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QAbstractProxyModel_OnMoveColumns(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
libqt_list /* of QModelIndex* */ QAbstractProxyModel_Match(const QAbstractProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QAbstractProxyModel_OnMatch(QAbstractProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QAbstractProxyModel_SuperMatch(const QAbstractProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QAbstractProxyModel_MultiData(const QAbstractProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QAbstractProxyModel_OnMultiData(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperMultiData(const QAbstractProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QAbstractProxyModel_ResetInternalData(QAbstractProxyModel* self);
void QAbstractProxyModel_OnResetInternalData(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperResetInternalData(QAbstractProxyModel* self);
bool QAbstractProxyModel_Event(QAbstractProxyModel* self, QEvent* event);
void QAbstractProxyModel_OnEvent(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperEvent(QAbstractProxyModel* self, QEvent* event);
bool QAbstractProxyModel_EventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event);
void QAbstractProxyModel_OnEventFilter(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_SuperEventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event);
void QAbstractProxyModel_TimerEvent(QAbstractProxyModel* self, QTimerEvent* event);
void QAbstractProxyModel_OnTimerEvent(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperTimerEvent(QAbstractProxyModel* self, QTimerEvent* event);
void QAbstractProxyModel_ChildEvent(QAbstractProxyModel* self, QChildEvent* event);
void QAbstractProxyModel_OnChildEvent(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperChildEvent(QAbstractProxyModel* self, QChildEvent* event);
void QAbstractProxyModel_CustomEvent(QAbstractProxyModel* self, QEvent* event);
void QAbstractProxyModel_OnCustomEvent(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperCustomEvent(QAbstractProxyModel* self, QEvent* event);
void QAbstractProxyModel_ConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
void QAbstractProxyModel_OnConnectNotify(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
void QAbstractProxyModel_DisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
void QAbstractProxyModel_OnDisconnectNotify(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_SuperDisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
QModelIndex* QAbstractProxyModel_CreateIndex(const QAbstractProxyModel* self, int row, int column);
void QAbstractProxyModel_EncodeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QAbstractProxyModel_DecodeData(QAbstractProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QAbstractProxyModel_BeginInsertRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
void QAbstractProxyModel_EndInsertRows(QAbstractProxyModel* self);
void QAbstractProxyModel_BeginRemoveRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
void QAbstractProxyModel_EndRemoveRows(QAbstractProxyModel* self);
bool QAbstractProxyModel_BeginMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QAbstractProxyModel_EndMoveRows(QAbstractProxyModel* self);
void QAbstractProxyModel_BeginInsertColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
void QAbstractProxyModel_EndInsertColumns(QAbstractProxyModel* self);
void QAbstractProxyModel_BeginRemoveColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
void QAbstractProxyModel_EndRemoveColumns(QAbstractProxyModel* self);
bool QAbstractProxyModel_BeginMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QAbstractProxyModel_EndMoveColumns(QAbstractProxyModel* self);
void QAbstractProxyModel_BeginResetModel(QAbstractProxyModel* self);
void QAbstractProxyModel_EndResetModel(QAbstractProxyModel* self);
void QAbstractProxyModel_ChangePersistentIndex(QAbstractProxyModel* self, const QModelIndex* from, const QModelIndex* to);
void QAbstractProxyModel_ChangePersistentIndexList(QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QAbstractProxyModel_PersistentIndexList(const QAbstractProxyModel* self);
QObject* QAbstractProxyModel_Sender(const QAbstractProxyModel* self);
int QAbstractProxyModel_SenderSignalIndex(const QAbstractProxyModel* self);
int QAbstractProxyModel_Receivers(const QAbstractProxyModel* self, const char* signal);
bool QAbstractProxyModel_IsSignalConnected(const QAbstractProxyModel* self, const QMetaMethod* signal);
void QAbstractProxyModel_Connect_SourceModelChanged(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_Delete(QAbstractProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
