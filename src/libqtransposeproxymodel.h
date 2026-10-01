#pragma once
#ifndef LIBQTRANSPOSEPROXYMODEL_H
#define LIBQTRANSPOSEPROXYMODEL_H

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
typedef struct QTransposeProxyModel QTransposeProxyModel;
typedef struct QVariant QVariant;
#endif

QTransposeProxyModel* QTransposeProxyModel_new();
QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent);
QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self);
void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1);
int QTransposeProxyModel_Metacall(QTransposeProxyModel* self, int param1, int param2, void** param3);
libqt_string QTransposeProxyModel_Tr(const char* s);
void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, const QModelIndex* parent);
int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent);
QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role);
bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, const QModelIndex* index);
libqt_map /* of int to QVariant* */ QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, const QModelIndex* index);
QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, const QModelIndex* index);
QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent);
bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order);
libqt_string QTransposeProxyModel_Tr2(const char* s, const char* c);
libqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n);
void QTransposeProxyModel_OnMetaObject(QTransposeProxyModel* self, intptr_t slot);
QMetaObject* QTransposeProxyModel_SuperMetaObject(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnMetacast(QTransposeProxyModel* self, intptr_t slot);
void* QTransposeProxyModel_SuperMetacast(QTransposeProxyModel* self, const char* param1);
void QTransposeProxyModel_OnMetacall(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_SuperMetacall(QTransposeProxyModel* self, int param1, int param2, void** param3);
void QTransposeProxyModel_OnSetSourceModel(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperSetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
void QTransposeProxyModel_OnRowCount(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_SuperRowCount(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnColumnCount(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_SuperColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnHeaderData(QTransposeProxyModel* self, intptr_t slot);
QVariant* QTransposeProxyModel_SuperHeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
void QTransposeProxyModel_OnSetHeaderData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperSetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role);
void QTransposeProxyModel_OnSetItemData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperSetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QTransposeProxyModel_OnSpan(QTransposeProxyModel* self, intptr_t slot);
QSize* QTransposeProxyModel_SuperSpan(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnItemData(QTransposeProxyModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QTransposeProxyModel_SuperItemData(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnMapFromSource(QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_SuperMapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex);
void QTransposeProxyModel_OnMapToSource(QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_SuperMapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex);
void QTransposeProxyModel_OnParent(QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_SuperParent(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnIndex(QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_SuperIndex(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent);
void QTransposeProxyModel_OnInsertRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperInsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnRemoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperRemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnMoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_OnInsertColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperInsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnRemoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperRemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnMoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_OnSort(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperSort(QTransposeProxyModel* self, int column, int order);
QItemSelection* QTransposeProxyModel_MapSelectionToSource(const QTransposeProxyModel* self, const QItemSelection* selection);
void QTransposeProxyModel_OnMapSelectionToSource(QTransposeProxyModel* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_SuperMapSelectionToSource(const QTransposeProxyModel* self, const QItemSelection* selection);
QItemSelection* QTransposeProxyModel_MapSelectionFromSource(const QTransposeProxyModel* self, const QItemSelection* selection);
void QTransposeProxyModel_OnMapSelectionFromSource(QTransposeProxyModel* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_SuperMapSelectionFromSource(const QTransposeProxyModel* self, const QItemSelection* selection);
bool QTransposeProxyModel_Submit(QTransposeProxyModel* self);
void QTransposeProxyModel_OnSubmit(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperSubmit(QTransposeProxyModel* self);
void QTransposeProxyModel_Revert(QTransposeProxyModel* self);
void QTransposeProxyModel_OnRevert(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperRevert(QTransposeProxyModel* self);
QVariant* QTransposeProxyModel_Data(const QTransposeProxyModel* self, const QModelIndex* proxyIndex, int role);
void QTransposeProxyModel_OnData(QTransposeProxyModel* self, intptr_t slot);
QVariant* QTransposeProxyModel_SuperData(const QTransposeProxyModel* self, const QModelIndex* proxyIndex, int role);
int QTransposeProxyModel_Flags(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnFlags(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_SuperFlags(const QTransposeProxyModel* self, const QModelIndex* index);
bool QTransposeProxyModel_SetData(QTransposeProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
void QTransposeProxyModel_OnSetData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperSetData(QTransposeProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
bool QTransposeProxyModel_ClearItemData(QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnClearItemData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperClearItemData(QTransposeProxyModel* self, const QModelIndex* index);
QModelIndex* QTransposeProxyModel_Buddy(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnBuddy(QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_SuperBuddy(const QTransposeProxyModel* self, const QModelIndex* index);
bool QTransposeProxyModel_CanFetchMore(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnCanFetchMore(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperCanFetchMore(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_FetchMore(QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnFetchMore(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperFetchMore(QTransposeProxyModel* self, const QModelIndex* parent);
bool QTransposeProxyModel_HasChildren(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnHasChildren(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperHasChildren(const QTransposeProxyModel* self, const QModelIndex* parent);
QModelIndex* QTransposeProxyModel_Sibling(const QTransposeProxyModel* self, int row, int column, const QModelIndex* idx);
void QTransposeProxyModel_OnSibling(QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_SuperSibling(const QTransposeProxyModel* self, int row, int column, const QModelIndex* idx);
QMimeData* QTransposeProxyModel_MimeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QTransposeProxyModel_OnMimeData(QTransposeProxyModel* self, intptr_t slot);
QMimeData* QTransposeProxyModel_SuperMimeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QTransposeProxyModel_CanDropMimeData(const QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QTransposeProxyModel_OnCanDropMimeData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperCanDropMimeData(const QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool QTransposeProxyModel_DropMimeData(QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QTransposeProxyModel_OnDropMimeData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperDropMimeData(QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
libqt_list /* of libqt_string */ QTransposeProxyModel_MimeTypes(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnMimeTypes(QTransposeProxyModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QTransposeProxyModel_SuperMimeTypes(const QTransposeProxyModel* self);
int QTransposeProxyModel_SupportedDragActions(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnSupportedDragActions(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_SuperSupportedDragActions(const QTransposeProxyModel* self);
int QTransposeProxyModel_SupportedDropActions(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnSupportedDropActions(QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_SuperSupportedDropActions(const QTransposeProxyModel* self);
libqt_map /* of int to libqt_string */ QTransposeProxyModel_RoleNames(const QTransposeProxyModel* self);
void QTransposeProxyModel_OnRoleNames(QTransposeProxyModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QTransposeProxyModel_SuperRoleNames(const QTransposeProxyModel* self);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_Match(const QTransposeProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QTransposeProxyModel_OnMatch(QTransposeProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_SuperMatch(const QTransposeProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QTransposeProxyModel_MultiData(const QTransposeProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QTransposeProxyModel_OnMultiData(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperMultiData(const QTransposeProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QTransposeProxyModel_ResetInternalData(QTransposeProxyModel* self);
void QTransposeProxyModel_OnResetInternalData(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperResetInternalData(QTransposeProxyModel* self);
bool QTransposeProxyModel_Event(QTransposeProxyModel* self, QEvent* event);
void QTransposeProxyModel_OnEvent(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperEvent(QTransposeProxyModel* self, QEvent* event);
bool QTransposeProxyModel_EventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event);
void QTransposeProxyModel_OnEventFilter(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_SuperEventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event);
void QTransposeProxyModel_TimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
void QTransposeProxyModel_OnTimerEvent(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperTimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
void QTransposeProxyModel_ChildEvent(QTransposeProxyModel* self, QChildEvent* event);
void QTransposeProxyModel_OnChildEvent(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperChildEvent(QTransposeProxyModel* self, QChildEvent* event);
void QTransposeProxyModel_CustomEvent(QTransposeProxyModel* self, QEvent* event);
void QTransposeProxyModel_OnCustomEvent(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperCustomEvent(QTransposeProxyModel* self, QEvent* event);
void QTransposeProxyModel_ConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
void QTransposeProxyModel_OnConnectNotify(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
void QTransposeProxyModel_DisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
void QTransposeProxyModel_OnDisconnectNotify(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_SuperDisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
QModelIndex* QTransposeProxyModel_CreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
QModelIndex* QTransposeProxyModel_CreateIndex(const QTransposeProxyModel* self, int row, int column);
void QTransposeProxyModel_EncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QTransposeProxyModel_DecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QTransposeProxyModel_BeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndInsertRows(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndRemoveRows(QTransposeProxyModel* self);
bool QTransposeProxyModel_BeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QTransposeProxyModel_EndMoveRows(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndInsertColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
void QTransposeProxyModel_EndRemoveColumns(QTransposeProxyModel* self);
bool QTransposeProxyModel_BeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QTransposeProxyModel_EndMoveColumns(QTransposeProxyModel* self);
void QTransposeProxyModel_BeginResetModel(QTransposeProxyModel* self);
void QTransposeProxyModel_EndResetModel(QTransposeProxyModel* self);
void QTransposeProxyModel_ChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to);
void QTransposeProxyModel_ChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QTransposeProxyModel_PersistentIndexList(const QTransposeProxyModel* self);
QObject* QTransposeProxyModel_Sender(const QTransposeProxyModel* self);
int QTransposeProxyModel_SenderSignalIndex(const QTransposeProxyModel* self);
int QTransposeProxyModel_Receivers(const QTransposeProxyModel* self, const char* signal);
bool QTransposeProxyModel_IsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal);
void QTransposeProxyModel_Delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
