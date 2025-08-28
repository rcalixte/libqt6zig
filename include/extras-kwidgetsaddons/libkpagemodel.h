#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKPAGEMODEL_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKPAGEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPageModel KPageModel;
typedef struct QAbstractItemModel QAbstractItemModel;
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

KPageModel* KPageModel_new();
KPageModel* KPageModel_new2(QObject* parent);
QMetaObject* KPageModel_MetaObject(const KPageModel* self);
void* KPageModel_Metacast(KPageModel* self, const char* param1);
int KPageModel_Metacall(KPageModel* self, int param1, int param2, void** param3);
libqt_string KPageModel_Tr(const char* s);
libqt_string KPageModel_Tr2(const char* s, const char* c);
libqt_string KPageModel_Tr3(const char* s, const char* c, int n);
void KPageModel_OnMetacall(KPageModel* self, intptr_t slot);
int KPageModel_QBaseMetacall(KPageModel* self, int param1, int param2, void** param3);
QModelIndex* KPageModel_Index(const KPageModel* self, int row, int column, const QModelIndex* parent);
void KPageModel_OnIndex(const KPageModel* self, intptr_t slot);
QModelIndex* KPageModel_QBaseIndex(const KPageModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KPageModel_Parent(const KPageModel* self, const QModelIndex* child);
void KPageModel_OnParent(const KPageModel* self, intptr_t slot);
QModelIndex* KPageModel_QBaseParent(const KPageModel* self, const QModelIndex* child);
QModelIndex* KPageModel_Sibling(const KPageModel* self, int row, int column, const QModelIndex* idx);
void KPageModel_OnSibling(const KPageModel* self, intptr_t slot);
QModelIndex* KPageModel_QBaseSibling(const KPageModel* self, int row, int column, const QModelIndex* idx);
int KPageModel_RowCount(const KPageModel* self, const QModelIndex* parent);
void KPageModel_OnRowCount(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseRowCount(const KPageModel* self, const QModelIndex* parent);
int KPageModel_ColumnCount(const KPageModel* self, const QModelIndex* parent);
void KPageModel_OnColumnCount(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseColumnCount(const KPageModel* self, const QModelIndex* parent);
bool KPageModel_HasChildren(const KPageModel* self, const QModelIndex* parent);
void KPageModel_OnHasChildren(const KPageModel* self, intptr_t slot);
bool KPageModel_QBaseHasChildren(const KPageModel* self, const QModelIndex* parent);
QVariant* KPageModel_Data(const KPageModel* self, const QModelIndex* index, int role);
void KPageModel_OnData(const KPageModel* self, intptr_t slot);
QVariant* KPageModel_QBaseData(const KPageModel* self, const QModelIndex* index, int role);
bool KPageModel_SetData(KPageModel* self, const QModelIndex* index, const QVariant* value, int role);
void KPageModel_OnSetData(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseSetData(KPageModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KPageModel_HeaderData(const KPageModel* self, int section, int orientation, int role);
void KPageModel_OnHeaderData(const KPageModel* self, intptr_t slot);
QVariant* KPageModel_QBaseHeaderData(const KPageModel* self, int section, int orientation, int role);
bool KPageModel_SetHeaderData(KPageModel* self, int section, int orientation, const QVariant* value, int role);
void KPageModel_OnSetHeaderData(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseSetHeaderData(KPageModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KPageModel_ItemData(const KPageModel* self, const QModelIndex* index);
void KPageModel_OnItemData(const KPageModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KPageModel_QBaseItemData(const KPageModel* self, const QModelIndex* index);
bool KPageModel_SetItemData(KPageModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KPageModel_OnSetItemData(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseSetItemData(KPageModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KPageModel_ClearItemData(KPageModel* self, const QModelIndex* index);
void KPageModel_OnClearItemData(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseClearItemData(KPageModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KPageModel_MimeTypes(const KPageModel* self);
void KPageModel_OnMimeTypes(const KPageModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KPageModel_QBaseMimeTypes(const KPageModel* self);
QMimeData* KPageModel_MimeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KPageModel_OnMimeData(const KPageModel* self, intptr_t slot);
QMimeData* KPageModel_QBaseMimeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KPageModel_CanDropMimeData(const KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KPageModel_OnCanDropMimeData(const KPageModel* self, intptr_t slot);
bool KPageModel_QBaseCanDropMimeData(const KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool KPageModel_DropMimeData(KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KPageModel_OnDropMimeData(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseDropMimeData(KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KPageModel_SupportedDropActions(const KPageModel* self);
void KPageModel_OnSupportedDropActions(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseSupportedDropActions(const KPageModel* self);
int KPageModel_SupportedDragActions(const KPageModel* self);
void KPageModel_OnSupportedDragActions(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseSupportedDragActions(const KPageModel* self);
bool KPageModel_InsertRows(KPageModel* self, int row, int count, const QModelIndex* parent);
void KPageModel_OnInsertRows(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseInsertRows(KPageModel* self, int row, int count, const QModelIndex* parent);
bool KPageModel_InsertColumns(KPageModel* self, int column, int count, const QModelIndex* parent);
void KPageModel_OnInsertColumns(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseInsertColumns(KPageModel* self, int column, int count, const QModelIndex* parent);
bool KPageModel_RemoveRows(KPageModel* self, int row, int count, const QModelIndex* parent);
void KPageModel_OnRemoveRows(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseRemoveRows(KPageModel* self, int row, int count, const QModelIndex* parent);
bool KPageModel_RemoveColumns(KPageModel* self, int column, int count, const QModelIndex* parent);
void KPageModel_OnRemoveColumns(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseRemoveColumns(KPageModel* self, int column, int count, const QModelIndex* parent);
bool KPageModel_MoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KPageModel_OnMoveRows(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KPageModel_MoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KPageModel_OnMoveColumns(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KPageModel_FetchMore(KPageModel* self, const QModelIndex* parent);
void KPageModel_OnFetchMore(KPageModel* self, intptr_t slot);
void KPageModel_QBaseFetchMore(KPageModel* self, const QModelIndex* parent);
bool KPageModel_CanFetchMore(const KPageModel* self, const QModelIndex* parent);
void KPageModel_OnCanFetchMore(const KPageModel* self, intptr_t slot);
bool KPageModel_QBaseCanFetchMore(const KPageModel* self, const QModelIndex* parent);
int KPageModel_Flags(const KPageModel* self, const QModelIndex* index);
void KPageModel_OnFlags(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseFlags(const KPageModel* self, const QModelIndex* index);
void KPageModel_Sort(KPageModel* self, int column, int order);
void KPageModel_OnSort(KPageModel* self, intptr_t slot);
void KPageModel_QBaseSort(KPageModel* self, int column, int order);
QModelIndex* KPageModel_Buddy(const KPageModel* self, const QModelIndex* index);
void KPageModel_OnBuddy(const KPageModel* self, intptr_t slot);
QModelIndex* KPageModel_QBaseBuddy(const KPageModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KPageModel_Match(const KPageModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KPageModel_OnMatch(const KPageModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KPageModel_QBaseMatch(const KPageModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KPageModel_Span(const KPageModel* self, const QModelIndex* index);
void KPageModel_OnSpan(const KPageModel* self, intptr_t slot);
QSize* KPageModel_QBaseSpan(const KPageModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ KPageModel_RoleNames(const KPageModel* self);
void KPageModel_OnRoleNames(const KPageModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KPageModel_QBaseRoleNames(const KPageModel* self);
void KPageModel_MultiData(const KPageModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KPageModel_OnMultiData(const KPageModel* self, intptr_t slot);
void KPageModel_QBaseMultiData(const KPageModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KPageModel_Submit(KPageModel* self);
void KPageModel_OnSubmit(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseSubmit(KPageModel* self);
void KPageModel_Revert(KPageModel* self);
void KPageModel_OnRevert(KPageModel* self, intptr_t slot);
void KPageModel_QBaseRevert(KPageModel* self);
void KPageModel_ResetInternalData(KPageModel* self);
void KPageModel_OnResetInternalData(KPageModel* self, intptr_t slot);
void KPageModel_QBaseResetInternalData(KPageModel* self);
bool KPageModel_Event(KPageModel* self, QEvent* event);
void KPageModel_OnEvent(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseEvent(KPageModel* self, QEvent* event);
bool KPageModel_EventFilter(KPageModel* self, QObject* watched, QEvent* event);
void KPageModel_OnEventFilter(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseEventFilter(KPageModel* self, QObject* watched, QEvent* event);
void KPageModel_TimerEvent(KPageModel* self, QTimerEvent* event);
void KPageModel_OnTimerEvent(KPageModel* self, intptr_t slot);
void KPageModel_QBaseTimerEvent(KPageModel* self, QTimerEvent* event);
void KPageModel_ChildEvent(KPageModel* self, QChildEvent* event);
void KPageModel_OnChildEvent(KPageModel* self, intptr_t slot);
void KPageModel_QBaseChildEvent(KPageModel* self, QChildEvent* event);
void KPageModel_CustomEvent(KPageModel* self, QEvent* event);
void KPageModel_OnCustomEvent(KPageModel* self, intptr_t slot);
void KPageModel_QBaseCustomEvent(KPageModel* self, QEvent* event);
void KPageModel_ConnectNotify(KPageModel* self, const QMetaMethod* signal);
void KPageModel_OnConnectNotify(KPageModel* self, intptr_t slot);
void KPageModel_QBaseConnectNotify(KPageModel* self, const QMetaMethod* signal);
void KPageModel_DisconnectNotify(KPageModel* self, const QMetaMethod* signal);
void KPageModel_OnDisconnectNotify(KPageModel* self, intptr_t slot);
void KPageModel_QBaseDisconnectNotify(KPageModel* self, const QMetaMethod* signal);
QModelIndex* KPageModel_CreateIndex(const KPageModel* self, int row, int column);
void KPageModel_OnCreateIndex(const KPageModel* self, intptr_t slot);
QModelIndex* KPageModel_QBaseCreateIndex(const KPageModel* self, int row, int column);
void KPageModel_EncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KPageModel_OnEncodeData(const KPageModel* self, intptr_t slot);
void KPageModel_QBaseEncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KPageModel_DecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KPageModel_OnDecodeData(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseDecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KPageModel_BeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_OnBeginInsertRows(KPageModel* self, intptr_t slot);
void KPageModel_QBaseBeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_EndInsertRows(KPageModel* self);
void KPageModel_OnEndInsertRows(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndInsertRows(KPageModel* self);
void KPageModel_BeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_OnBeginRemoveRows(KPageModel* self, intptr_t slot);
void KPageModel_QBaseBeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_EndRemoveRows(KPageModel* self);
void KPageModel_OnEndRemoveRows(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndRemoveRows(KPageModel* self);
bool KPageModel_BeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KPageModel_OnBeginMoveRows(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseBeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KPageModel_EndMoveRows(KPageModel* self);
void KPageModel_OnEndMoveRows(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndMoveRows(KPageModel* self);
void KPageModel_BeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_OnBeginInsertColumns(KPageModel* self, intptr_t slot);
void KPageModel_QBaseBeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_EndInsertColumns(KPageModel* self);
void KPageModel_OnEndInsertColumns(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndInsertColumns(KPageModel* self);
void KPageModel_BeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_OnBeginRemoveColumns(KPageModel* self, intptr_t slot);
void KPageModel_QBaseBeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
void KPageModel_EndRemoveColumns(KPageModel* self);
void KPageModel_OnEndRemoveColumns(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndRemoveColumns(KPageModel* self);
bool KPageModel_BeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KPageModel_OnBeginMoveColumns(KPageModel* self, intptr_t slot);
bool KPageModel_QBaseBeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KPageModel_EndMoveColumns(KPageModel* self);
void KPageModel_OnEndMoveColumns(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndMoveColumns(KPageModel* self);
void KPageModel_BeginResetModel(KPageModel* self);
void KPageModel_OnBeginResetModel(KPageModel* self, intptr_t slot);
void KPageModel_QBaseBeginResetModel(KPageModel* self);
void KPageModel_EndResetModel(KPageModel* self);
void KPageModel_OnEndResetModel(KPageModel* self, intptr_t slot);
void KPageModel_QBaseEndResetModel(KPageModel* self);
void KPageModel_ChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to);
void KPageModel_OnChangePersistentIndex(KPageModel* self, intptr_t slot);
void KPageModel_QBaseChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to);
void KPageModel_ChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KPageModel_OnChangePersistentIndexList(KPageModel* self, intptr_t slot);
void KPageModel_QBaseChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KPageModel_PersistentIndexList(const KPageModel* self);
void KPageModel_OnPersistentIndexList(const KPageModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KPageModel_QBasePersistentIndexList(const KPageModel* self);
QObject* KPageModel_Sender(const KPageModel* self);
void KPageModel_OnSender(const KPageModel* self, intptr_t slot);
QObject* KPageModel_QBaseSender(const KPageModel* self);
int KPageModel_SenderSignalIndex(const KPageModel* self);
void KPageModel_OnSenderSignalIndex(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseSenderSignalIndex(const KPageModel* self);
int KPageModel_Receivers(const KPageModel* self, const char* signal);
void KPageModel_OnReceivers(const KPageModel* self, intptr_t slot);
int KPageModel_QBaseReceivers(const KPageModel* self, const char* signal);
bool KPageModel_IsSignalConnected(const KPageModel* self, const QMetaMethod* signal);
void KPageModel_OnIsSignalConnected(const KPageModel* self, intptr_t slot);
bool KPageModel_QBaseIsSignalConnected(const KPageModel* self, const QMetaMethod* signal);
void KPageModel_Delete(KPageModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
