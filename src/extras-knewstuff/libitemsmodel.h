#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBITEMSMODEL_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBITEMSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::EngineBase KNSCore__EngineBase;
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ItemsModel)
typedef KNSCore::ItemsModel KNSCore__ItemsModel;
#endif
#else
typedef struct KJob KJob;
typedef struct KNSCore__EngineBase KNSCore__EngineBase;
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__ItemsModel KNSCore__ItemsModel;
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

KNSCore__ItemsModel* KNSCore__ItemsModel_new(KNSCore__EngineBase* engine);
KNSCore__ItemsModel* KNSCore__ItemsModel_new2(KNSCore__EngineBase* engine, QObject* parent);
QMetaObject* KNSCore__ItemsModel_MetaObject(const KNSCore__ItemsModel* self);
void* KNSCore__ItemsModel_Metacast(KNSCore__ItemsModel* self, const char* param1);
int KNSCore__ItemsModel_Metacall(KNSCore__ItemsModel* self, int param1, int param2, void** param3);
libqt_string KNSCore__ItemsModel_Tr(const char* s);
int KNSCore__ItemsModel_RowCount(const KNSCore__ItemsModel* self, const QModelIndex* parent);
QVariant* KNSCore__ItemsModel_Data(const KNSCore__ItemsModel* self, const QModelIndex* index, int role);
int KNSCore__ItemsModel_Row(const KNSCore__ItemsModel* self, const KNSCore__Entry* entry);
void KNSCore__ItemsModel_AddEntry(KNSCore__ItemsModel* self, const KNSCore__Entry* entry);
void KNSCore__ItemsModel_RemoveEntry(KNSCore__ItemsModel* self, const KNSCore__Entry* entry);
bool KNSCore__ItemsModel_HasPreviewImages(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_JobStarted(KNSCore__ItemsModel* self, KJob* param1, const libqt_string label);
void KNSCore__ItemsModel_Connect_JobStarted(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_LoadPreview(KNSCore__ItemsModel* self, const KNSCore__Entry* entry, int typeVal);
void KNSCore__ItemsModel_Connect_LoadPreview(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SlotEntryChanged(KNSCore__ItemsModel* self, const KNSCore__Entry* entry);
void KNSCore__ItemsModel_SlotEntriesLoaded(KNSCore__ItemsModel* self, const libqt_list /* of KNSCore__Entry* */ entries);
void KNSCore__ItemsModel_ClearEntries(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_SlotEntryPreviewLoaded(KNSCore__ItemsModel* self, const KNSCore__Entry* entry, int typeVal);
libqt_string KNSCore__ItemsModel_Tr2(const char* s, const char* c);
libqt_string KNSCore__ItemsModel_Tr3(const char* s, const char* c, int n);
void KNSCore__ItemsModel_OnMetacall(KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseMetacall(KNSCore__ItemsModel* self, int param1, int param2, void** param3);
void KNSCore__ItemsModel_OnRowCount(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseRowCount(const KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_OnData(const KNSCore__ItemsModel* self, intptr_t slot);
QVariant* KNSCore__ItemsModel_QBaseData(const KNSCore__ItemsModel* self, const QModelIndex* index, int role);
QModelIndex* KNSCore__ItemsModel_Index(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent);
void KNSCore__ItemsModel_OnIndex(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_QBaseIndex(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KNSCore__ItemsModel_Sibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx);
void KNSCore__ItemsModel_OnSibling(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_QBaseSibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx);
bool KNSCore__ItemsModel_DropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ItemsModel_OnDropMimeData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseDropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ItemsModel_Flags(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnFlags(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseFlags(const KNSCore__ItemsModel* self, const QModelIndex* index);
bool KNSCore__ItemsModel_SetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role);
void KNSCore__ItemsModel_OnSetData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseSetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KNSCore__ItemsModel_HeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role);
void KNSCore__ItemsModel_OnHeaderData(const KNSCore__ItemsModel* self, intptr_t slot);
QVariant* KNSCore__ItemsModel_QBaseHeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role);
bool KNSCore__ItemsModel_SetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role);
void KNSCore__ItemsModel_OnSetHeaderData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseSetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_ItemData(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnItemData(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_QBaseItemData(const KNSCore__ItemsModel* self, const QModelIndex* index);
bool KNSCore__ItemsModel_SetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KNSCore__ItemsModel_OnSetItemData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseSetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KNSCore__ItemsModel_ClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnClearItemData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KNSCore__ItemsModel_MimeTypes(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnMimeTypes(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KNSCore__ItemsModel_QBaseMimeTypes(const KNSCore__ItemsModel* self);
QMimeData* KNSCore__ItemsModel_MimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KNSCore__ItemsModel_OnMimeData(const KNSCore__ItemsModel* self, intptr_t slot);
QMimeData* KNSCore__ItemsModel_QBaseMimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KNSCore__ItemsModel_CanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ItemsModel_OnCanDropMimeData(const KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseCanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ItemsModel_SupportedDropActions(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSupportedDropActions(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseSupportedDropActions(const KNSCore__ItemsModel* self);
int KNSCore__ItemsModel_SupportedDragActions(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSupportedDragActions(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseSupportedDragActions(const KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_InsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnInsertRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseInsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_InsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnInsertColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseInsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_RemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnRemoveRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseRemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_RemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseRemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_MoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ItemsModel_OnMoveRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KNSCore__ItemsModel_MoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ItemsModel_OnMoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ItemsModel_FetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_OnFetchMore(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseFetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent);
bool KNSCore__ItemsModel_CanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_OnCanFetchMore(const KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseCanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_Sort(KNSCore__ItemsModel* self, int column, int order);
void KNSCore__ItemsModel_OnSort(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseSort(KNSCore__ItemsModel* self, int column, int order);
QModelIndex* KNSCore__ItemsModel_Buddy(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnBuddy(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_QBaseBuddy(const KNSCore__ItemsModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_Match(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KNSCore__ItemsModel_OnMatch(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_QBaseMatch(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KNSCore__ItemsModel_Span(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnSpan(const KNSCore__ItemsModel* self, intptr_t slot);
QSize* KNSCore__ItemsModel_QBaseSpan(const KNSCore__ItemsModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_RoleNames(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnRoleNames(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_QBaseRoleNames(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_MultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KNSCore__ItemsModel_OnMultiData(const KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseMultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KNSCore__ItemsModel_Submit(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSubmit(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseSubmit(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_Revert(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnRevert(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseRevert(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_ResetInternalData(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnResetInternalData(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseResetInternalData(KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_Event(KNSCore__ItemsModel* self, QEvent* event);
void KNSCore__ItemsModel_OnEvent(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseEvent(KNSCore__ItemsModel* self, QEvent* event);
bool KNSCore__ItemsModel_EventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event);
void KNSCore__ItemsModel_OnEventFilter(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseEventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event);
void KNSCore__ItemsModel_TimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event);
void KNSCore__ItemsModel_OnTimerEvent(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseTimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event);
void KNSCore__ItemsModel_ChildEvent(KNSCore__ItemsModel* self, QChildEvent* event);
void KNSCore__ItemsModel_OnChildEvent(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseChildEvent(KNSCore__ItemsModel* self, QChildEvent* event);
void KNSCore__ItemsModel_CustomEvent(KNSCore__ItemsModel* self, QEvent* event);
void KNSCore__ItemsModel_OnCustomEvent(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseCustomEvent(KNSCore__ItemsModel* self, QEvent* event);
void KNSCore__ItemsModel_ConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_OnConnectNotify(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_DisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_OnDisconnectNotify(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseDisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
QModelIndex* KNSCore__ItemsModel_CreateIndex(const KNSCore__ItemsModel* self, int row, int column);
void KNSCore__ItemsModel_OnCreateIndex(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_QBaseCreateIndex(const KNSCore__ItemsModel* self, int row, int column);
void KNSCore__ItemsModel_EncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KNSCore__ItemsModel_OnEncodeData(const KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KNSCore__ItemsModel_DecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ItemsModel_OnDecodeData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseDecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ItemsModel_BeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginInsertRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseBeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndInsertRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndInsertRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndInsertRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginRemoveRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseBeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndRemoveRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndRemoveRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndRemoveRows(KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_BeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ItemsModel_OnBeginMoveRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseBeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ItemsModel_EndMoveRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndMoveRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndMoveRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginInsertColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseBeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndInsertColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndInsertColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndInsertColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseBeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndRemoveColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndRemoveColumns(KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_BeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ItemsModel_OnBeginMoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseBeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ItemsModel_EndMoveColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndMoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndMoveColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnBeginResetModel(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseBeginResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_EndResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndResetModel(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseEndResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_ChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ItemsModel_OnChangePersistentIndex(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ItemsModel_ChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KNSCore__ItemsModel_OnChangePersistentIndexList(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_QBaseChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_PersistentIndexList(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnPersistentIndexList(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_QBasePersistentIndexList(const KNSCore__ItemsModel* self);
QObject* KNSCore__ItemsModel_Sender(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSender(const KNSCore__ItemsModel* self, intptr_t slot);
QObject* KNSCore__ItemsModel_QBaseSender(const KNSCore__ItemsModel* self);
int KNSCore__ItemsModel_SenderSignalIndex(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSenderSignalIndex(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseSenderSignalIndex(const KNSCore__ItemsModel* self);
int KNSCore__ItemsModel_Receivers(const KNSCore__ItemsModel* self, const char* signal);
void KNSCore__ItemsModel_OnReceivers(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_QBaseReceivers(const KNSCore__ItemsModel* self, const char* signal);
bool KNSCore__ItemsModel_IsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_OnIsSignalConnected(const KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_QBaseIsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_Delete(KNSCore__ItemsModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
