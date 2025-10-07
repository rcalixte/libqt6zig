#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBKCOLUMNHEADERSMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBKCOLUMNHEADERSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColumnHeadersModel KColumnHeadersModel;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
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

KColumnHeadersModel* KColumnHeadersModel_new();
KColumnHeadersModel* KColumnHeadersModel_new2(QObject* parent);
QMetaObject* KColumnHeadersModel_MetaObject(const KColumnHeadersModel* self);
void* KColumnHeadersModel_Metacast(KColumnHeadersModel* self, const char* param1);
int KColumnHeadersModel_Metacall(KColumnHeadersModel* self, int param1, int param2, void** param3);
libqt_string KColumnHeadersModel_Tr(const char* s);
int KColumnHeadersModel_RowCount(const KColumnHeadersModel* self, const QModelIndex* parent);
QVariant* KColumnHeadersModel_Data(const KColumnHeadersModel* self, const QModelIndex* index, int role);
libqt_map /* of int to libqt_string */ KColumnHeadersModel_RoleNames(const KColumnHeadersModel* self);
QAbstractItemModel* KColumnHeadersModel_SourceModel(const KColumnHeadersModel* self);
void KColumnHeadersModel_SetSourceModel(KColumnHeadersModel* self, QAbstractItemModel* newSourceModel);
int KColumnHeadersModel_SortColumn(const KColumnHeadersModel* self);
void KColumnHeadersModel_SetSortColumn(KColumnHeadersModel* self, int newSortColumn);
int KColumnHeadersModel_SortOrder(const KColumnHeadersModel* self);
void KColumnHeadersModel_SetSortOrder(KColumnHeadersModel* self, int newSortOrder);
void KColumnHeadersModel_SourceModelChanged(KColumnHeadersModel* self);
void KColumnHeadersModel_Connect_SourceModelChanged(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_SortColumnChanged(KColumnHeadersModel* self);
void KColumnHeadersModel_Connect_SortColumnChanged(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_SortOrderChanged(KColumnHeadersModel* self);
void KColumnHeadersModel_Connect_SortOrderChanged(KColumnHeadersModel* self, intptr_t slot);
libqt_string KColumnHeadersModel_Tr2(const char* s, const char* c);
libqt_string KColumnHeadersModel_Tr3(const char* s, const char* c, int n);
void KColumnHeadersModel_OnMetacall(KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseMetacall(KColumnHeadersModel* self, int param1, int param2, void** param3);
void KColumnHeadersModel_OnRowCount(const KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseRowCount(const KColumnHeadersModel* self, const QModelIndex* parent);
void KColumnHeadersModel_OnData(const KColumnHeadersModel* self, intptr_t slot);
QVariant* KColumnHeadersModel_QBaseData(const KColumnHeadersModel* self, const QModelIndex* index, int role);
void KColumnHeadersModel_OnRoleNames(const KColumnHeadersModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KColumnHeadersModel_QBaseRoleNames(const KColumnHeadersModel* self);
QModelIndex* KColumnHeadersModel_Index(const KColumnHeadersModel* self, int row, int column, const QModelIndex* parent);
void KColumnHeadersModel_OnIndex(const KColumnHeadersModel* self, intptr_t slot);
QModelIndex* KColumnHeadersModel_QBaseIndex(const KColumnHeadersModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KColumnHeadersModel_Sibling(const KColumnHeadersModel* self, int row, int column, const QModelIndex* idx);
void KColumnHeadersModel_OnSibling(const KColumnHeadersModel* self, intptr_t slot);
QModelIndex* KColumnHeadersModel_QBaseSibling(const KColumnHeadersModel* self, int row, int column, const QModelIndex* idx);
bool KColumnHeadersModel_DropMimeData(KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KColumnHeadersModel_OnDropMimeData(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseDropMimeData(KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KColumnHeadersModel_Flags(const KColumnHeadersModel* self, const QModelIndex* index);
void KColumnHeadersModel_OnFlags(const KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseFlags(const KColumnHeadersModel* self, const QModelIndex* index);
bool KColumnHeadersModel_SetData(KColumnHeadersModel* self, const QModelIndex* index, const QVariant* value, int role);
void KColumnHeadersModel_OnSetData(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseSetData(KColumnHeadersModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KColumnHeadersModel_HeaderData(const KColumnHeadersModel* self, int section, int orientation, int role);
void KColumnHeadersModel_OnHeaderData(const KColumnHeadersModel* self, intptr_t slot);
QVariant* KColumnHeadersModel_QBaseHeaderData(const KColumnHeadersModel* self, int section, int orientation, int role);
bool KColumnHeadersModel_SetHeaderData(KColumnHeadersModel* self, int section, int orientation, const QVariant* value, int role);
void KColumnHeadersModel_OnSetHeaderData(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseSetHeaderData(KColumnHeadersModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KColumnHeadersModel_ItemData(const KColumnHeadersModel* self, const QModelIndex* index);
void KColumnHeadersModel_OnItemData(const KColumnHeadersModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KColumnHeadersModel_QBaseItemData(const KColumnHeadersModel* self, const QModelIndex* index);
bool KColumnHeadersModel_SetItemData(KColumnHeadersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KColumnHeadersModel_OnSetItemData(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseSetItemData(KColumnHeadersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KColumnHeadersModel_ClearItemData(KColumnHeadersModel* self, const QModelIndex* index);
void KColumnHeadersModel_OnClearItemData(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseClearItemData(KColumnHeadersModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KColumnHeadersModel_MimeTypes(const KColumnHeadersModel* self);
void KColumnHeadersModel_OnMimeTypes(const KColumnHeadersModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KColumnHeadersModel_QBaseMimeTypes(const KColumnHeadersModel* self);
QMimeData* KColumnHeadersModel_MimeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KColumnHeadersModel_OnMimeData(const KColumnHeadersModel* self, intptr_t slot);
QMimeData* KColumnHeadersModel_QBaseMimeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KColumnHeadersModel_CanDropMimeData(const KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KColumnHeadersModel_OnCanDropMimeData(const KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseCanDropMimeData(const KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KColumnHeadersModel_SupportedDropActions(const KColumnHeadersModel* self);
void KColumnHeadersModel_OnSupportedDropActions(const KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseSupportedDropActions(const KColumnHeadersModel* self);
int KColumnHeadersModel_SupportedDragActions(const KColumnHeadersModel* self);
void KColumnHeadersModel_OnSupportedDragActions(const KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseSupportedDragActions(const KColumnHeadersModel* self);
bool KColumnHeadersModel_InsertRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent);
void KColumnHeadersModel_OnInsertRows(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseInsertRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent);
bool KColumnHeadersModel_InsertColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent);
void KColumnHeadersModel_OnInsertColumns(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseInsertColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent);
bool KColumnHeadersModel_RemoveRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent);
void KColumnHeadersModel_OnRemoveRows(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseRemoveRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent);
bool KColumnHeadersModel_RemoveColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent);
void KColumnHeadersModel_OnRemoveColumns(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseRemoveColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent);
bool KColumnHeadersModel_MoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KColumnHeadersModel_OnMoveRows(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KColumnHeadersModel_MoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KColumnHeadersModel_OnMoveColumns(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KColumnHeadersModel_FetchMore(KColumnHeadersModel* self, const QModelIndex* parent);
void KColumnHeadersModel_OnFetchMore(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseFetchMore(KColumnHeadersModel* self, const QModelIndex* parent);
bool KColumnHeadersModel_CanFetchMore(const KColumnHeadersModel* self, const QModelIndex* parent);
void KColumnHeadersModel_OnCanFetchMore(const KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseCanFetchMore(const KColumnHeadersModel* self, const QModelIndex* parent);
void KColumnHeadersModel_Sort(KColumnHeadersModel* self, int column, int order);
void KColumnHeadersModel_OnSort(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseSort(KColumnHeadersModel* self, int column, int order);
QModelIndex* KColumnHeadersModel_Buddy(const KColumnHeadersModel* self, const QModelIndex* index);
void KColumnHeadersModel_OnBuddy(const KColumnHeadersModel* self, intptr_t slot);
QModelIndex* KColumnHeadersModel_QBaseBuddy(const KColumnHeadersModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KColumnHeadersModel_Match(const KColumnHeadersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KColumnHeadersModel_OnMatch(const KColumnHeadersModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KColumnHeadersModel_QBaseMatch(const KColumnHeadersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KColumnHeadersModel_Span(const KColumnHeadersModel* self, const QModelIndex* index);
void KColumnHeadersModel_OnSpan(const KColumnHeadersModel* self, intptr_t slot);
QSize* KColumnHeadersModel_QBaseSpan(const KColumnHeadersModel* self, const QModelIndex* index);
void KColumnHeadersModel_MultiData(const KColumnHeadersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KColumnHeadersModel_OnMultiData(const KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseMultiData(const KColumnHeadersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KColumnHeadersModel_Submit(KColumnHeadersModel* self);
void KColumnHeadersModel_OnSubmit(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseSubmit(KColumnHeadersModel* self);
void KColumnHeadersModel_Revert(KColumnHeadersModel* self);
void KColumnHeadersModel_OnRevert(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseRevert(KColumnHeadersModel* self);
void KColumnHeadersModel_ResetInternalData(KColumnHeadersModel* self);
void KColumnHeadersModel_OnResetInternalData(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseResetInternalData(KColumnHeadersModel* self);
bool KColumnHeadersModel_Event(KColumnHeadersModel* self, QEvent* event);
void KColumnHeadersModel_OnEvent(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseEvent(KColumnHeadersModel* self, QEvent* event);
bool KColumnHeadersModel_EventFilter(KColumnHeadersModel* self, QObject* watched, QEvent* event);
void KColumnHeadersModel_OnEventFilter(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseEventFilter(KColumnHeadersModel* self, QObject* watched, QEvent* event);
void KColumnHeadersModel_TimerEvent(KColumnHeadersModel* self, QTimerEvent* event);
void KColumnHeadersModel_OnTimerEvent(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseTimerEvent(KColumnHeadersModel* self, QTimerEvent* event);
void KColumnHeadersModel_ChildEvent(KColumnHeadersModel* self, QChildEvent* event);
void KColumnHeadersModel_OnChildEvent(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseChildEvent(KColumnHeadersModel* self, QChildEvent* event);
void KColumnHeadersModel_CustomEvent(KColumnHeadersModel* self, QEvent* event);
void KColumnHeadersModel_OnCustomEvent(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseCustomEvent(KColumnHeadersModel* self, QEvent* event);
void KColumnHeadersModel_ConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
void KColumnHeadersModel_OnConnectNotify(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
void KColumnHeadersModel_DisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
void KColumnHeadersModel_OnDisconnectNotify(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseDisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
QModelIndex* KColumnHeadersModel_CreateIndex(const KColumnHeadersModel* self, int row, int column);
void KColumnHeadersModel_OnCreateIndex(const KColumnHeadersModel* self, intptr_t slot);
QModelIndex* KColumnHeadersModel_QBaseCreateIndex(const KColumnHeadersModel* self, int row, int column);
void KColumnHeadersModel_EncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KColumnHeadersModel_OnEncodeData(const KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KColumnHeadersModel_DecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KColumnHeadersModel_OnDecodeData(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseDecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KColumnHeadersModel_BeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_OnBeginInsertRows(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseBeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_EndInsertRows(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndInsertRows(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndInsertRows(KColumnHeadersModel* self);
void KColumnHeadersModel_BeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_OnBeginRemoveRows(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseBeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_EndRemoveRows(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndRemoveRows(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndRemoveRows(KColumnHeadersModel* self);
bool KColumnHeadersModel_BeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KColumnHeadersModel_OnBeginMoveRows(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseBeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KColumnHeadersModel_EndMoveRows(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndMoveRows(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndMoveRows(KColumnHeadersModel* self);
void KColumnHeadersModel_BeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_OnBeginInsertColumns(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseBeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_EndInsertColumns(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndInsertColumns(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndInsertColumns(KColumnHeadersModel* self);
void KColumnHeadersModel_BeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_OnBeginRemoveColumns(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseBeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
void KColumnHeadersModel_EndRemoveColumns(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndRemoveColumns(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndRemoveColumns(KColumnHeadersModel* self);
bool KColumnHeadersModel_BeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KColumnHeadersModel_OnBeginMoveColumns(KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseBeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KColumnHeadersModel_EndMoveColumns(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndMoveColumns(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndMoveColumns(KColumnHeadersModel* self);
void KColumnHeadersModel_BeginResetModel(KColumnHeadersModel* self);
void KColumnHeadersModel_OnBeginResetModel(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseBeginResetModel(KColumnHeadersModel* self);
void KColumnHeadersModel_EndResetModel(KColumnHeadersModel* self);
void KColumnHeadersModel_OnEndResetModel(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseEndResetModel(KColumnHeadersModel* self);
void KColumnHeadersModel_ChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to);
void KColumnHeadersModel_OnChangePersistentIndex(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to);
void KColumnHeadersModel_ChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KColumnHeadersModel_OnChangePersistentIndexList(KColumnHeadersModel* self, intptr_t slot);
void KColumnHeadersModel_QBaseChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KColumnHeadersModel_PersistentIndexList(const KColumnHeadersModel* self);
void KColumnHeadersModel_OnPersistentIndexList(const KColumnHeadersModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KColumnHeadersModel_QBasePersistentIndexList(const KColumnHeadersModel* self);
QObject* KColumnHeadersModel_Sender(const KColumnHeadersModel* self);
void KColumnHeadersModel_OnSender(const KColumnHeadersModel* self, intptr_t slot);
QObject* KColumnHeadersModel_QBaseSender(const KColumnHeadersModel* self);
int KColumnHeadersModel_SenderSignalIndex(const KColumnHeadersModel* self);
void KColumnHeadersModel_OnSenderSignalIndex(const KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseSenderSignalIndex(const KColumnHeadersModel* self);
int KColumnHeadersModel_Receivers(const KColumnHeadersModel* self, const char* signal);
void KColumnHeadersModel_OnReceivers(const KColumnHeadersModel* self, intptr_t slot);
int KColumnHeadersModel_QBaseReceivers(const KColumnHeadersModel* self, const char* signal);
bool KColumnHeadersModel_IsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal);
void KColumnHeadersModel_OnIsSignalConnected(const KColumnHeadersModel* self, intptr_t slot);
bool KColumnHeadersModel_QBaseIsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal);
void KColumnHeadersModel_Delete(KColumnHeadersModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
