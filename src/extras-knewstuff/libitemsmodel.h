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
void KNSCore__ItemsModel_OnMetaObject(const KNSCore__ItemsModel* self, intptr_t slot);
QMetaObject* KNSCore__ItemsModel_SuperMetaObject(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnMetacast(KNSCore__ItemsModel* self, intptr_t slot);
void* KNSCore__ItemsModel_SuperMetacast(KNSCore__ItemsModel* self, const char* param1);
void KNSCore__ItemsModel_OnMetacall(KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperMetacall(KNSCore__ItemsModel* self, int param1, int param2, void** param3);
void KNSCore__ItemsModel_OnRowCount(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperRowCount(const KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_OnData(const KNSCore__ItemsModel* self, intptr_t slot);
QVariant* KNSCore__ItemsModel_SuperData(const KNSCore__ItemsModel* self, const QModelIndex* index, int role);
QModelIndex* KNSCore__ItemsModel_Index(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent);
void KNSCore__ItemsModel_OnIndex(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_SuperIndex(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KNSCore__ItemsModel_Sibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx);
void KNSCore__ItemsModel_OnSibling(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_SuperSibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx);
bool KNSCore__ItemsModel_DropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ItemsModel_OnDropMimeData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperDropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ItemsModel_Flags(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnFlags(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperFlags(const KNSCore__ItemsModel* self, const QModelIndex* index);
bool KNSCore__ItemsModel_SetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role);
void KNSCore__ItemsModel_OnSetData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperSetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KNSCore__ItemsModel_HeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role);
void KNSCore__ItemsModel_OnHeaderData(const KNSCore__ItemsModel* self, intptr_t slot);
QVariant* KNSCore__ItemsModel_SuperHeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role);
bool KNSCore__ItemsModel_SetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role);
void KNSCore__ItemsModel_OnSetHeaderData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperSetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_ItemData(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnItemData(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_SuperItemData(const KNSCore__ItemsModel* self, const QModelIndex* index);
bool KNSCore__ItemsModel_SetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KNSCore__ItemsModel_OnSetItemData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperSetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KNSCore__ItemsModel_ClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnClearItemData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KNSCore__ItemsModel_MimeTypes(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnMimeTypes(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KNSCore__ItemsModel_SuperMimeTypes(const KNSCore__ItemsModel* self);
QMimeData* KNSCore__ItemsModel_MimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KNSCore__ItemsModel_OnMimeData(const KNSCore__ItemsModel* self, intptr_t slot);
QMimeData* KNSCore__ItemsModel_SuperMimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KNSCore__ItemsModel_CanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ItemsModel_OnCanDropMimeData(const KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperCanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ItemsModel_SupportedDropActions(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSupportedDropActions(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperSupportedDropActions(const KNSCore__ItemsModel* self);
int KNSCore__ItemsModel_SupportedDragActions(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSupportedDragActions(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperSupportedDragActions(const KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_InsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnInsertRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperInsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_InsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnInsertColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperInsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_RemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnRemoveRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperRemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_RemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ItemsModel_OnRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperRemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ItemsModel_MoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ItemsModel_OnMoveRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KNSCore__ItemsModel_MoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ItemsModel_OnMoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ItemsModel_FetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_OnFetchMore(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperFetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent);
bool KNSCore__ItemsModel_CanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_OnCanFetchMore(const KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperCanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent);
void KNSCore__ItemsModel_Sort(KNSCore__ItemsModel* self, int column, int order);
void KNSCore__ItemsModel_OnSort(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperSort(KNSCore__ItemsModel* self, int column, int order);
QModelIndex* KNSCore__ItemsModel_Buddy(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnBuddy(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_SuperBuddy(const KNSCore__ItemsModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_Match(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KNSCore__ItemsModel_OnMatch(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_SuperMatch(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KNSCore__ItemsModel_Span(const KNSCore__ItemsModel* self, const QModelIndex* index);
void KNSCore__ItemsModel_OnSpan(const KNSCore__ItemsModel* self, intptr_t slot);
QSize* KNSCore__ItemsModel_SuperSpan(const KNSCore__ItemsModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_RoleNames(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnRoleNames(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_SuperRoleNames(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_MultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KNSCore__ItemsModel_OnMultiData(const KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperMultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KNSCore__ItemsModel_Submit(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSubmit(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperSubmit(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_Revert(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnRevert(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperRevert(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_ResetInternalData(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnResetInternalData(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperResetInternalData(KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_Event(KNSCore__ItemsModel* self, QEvent* event);
void KNSCore__ItemsModel_OnEvent(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperEvent(KNSCore__ItemsModel* self, QEvent* event);
bool KNSCore__ItemsModel_EventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event);
void KNSCore__ItemsModel_OnEventFilter(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperEventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event);
void KNSCore__ItemsModel_TimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event);
void KNSCore__ItemsModel_OnTimerEvent(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperTimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event);
void KNSCore__ItemsModel_ChildEvent(KNSCore__ItemsModel* self, QChildEvent* event);
void KNSCore__ItemsModel_OnChildEvent(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperChildEvent(KNSCore__ItemsModel* self, QChildEvent* event);
void KNSCore__ItemsModel_CustomEvent(KNSCore__ItemsModel* self, QEvent* event);
void KNSCore__ItemsModel_OnCustomEvent(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperCustomEvent(KNSCore__ItemsModel* self, QEvent* event);
void KNSCore__ItemsModel_ConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_OnConnectNotify(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_DisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_OnDisconnectNotify(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperDisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal);
QModelIndex* KNSCore__ItemsModel_CreateIndex(const KNSCore__ItemsModel* self, int row, int column);
void KNSCore__ItemsModel_OnCreateIndex(const KNSCore__ItemsModel* self, intptr_t slot);
QModelIndex* KNSCore__ItemsModel_SuperCreateIndex(const KNSCore__ItemsModel* self, int row, int column);
void KNSCore__ItemsModel_EncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KNSCore__ItemsModel_OnEncodeData(const KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KNSCore__ItemsModel_DecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ItemsModel_OnDecodeData(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperDecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ItemsModel_BeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginInsertRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperBeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndInsertRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndInsertRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndInsertRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginRemoveRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperBeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndRemoveRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndRemoveRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndRemoveRows(KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_BeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ItemsModel_OnBeginMoveRows(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperBeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ItemsModel_EndMoveRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndMoveRows(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndMoveRows(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginInsertColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperBeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndInsertColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndInsertColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndInsertColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_OnBeginRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperBeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ItemsModel_EndRemoveColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndRemoveColumns(KNSCore__ItemsModel* self);
bool KNSCore__ItemsModel_BeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ItemsModel_OnBeginMoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperBeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ItemsModel_EndMoveColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndMoveColumns(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndMoveColumns(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_BeginResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnBeginResetModel(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperBeginResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_EndResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnEndResetModel(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperEndResetModel(KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_ChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ItemsModel_OnChangePersistentIndex(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ItemsModel_ChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KNSCore__ItemsModel_OnChangePersistentIndexList(KNSCore__ItemsModel* self, intptr_t slot);
void KNSCore__ItemsModel_SuperChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_PersistentIndexList(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnPersistentIndexList(const KNSCore__ItemsModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_SuperPersistentIndexList(const KNSCore__ItemsModel* self);
QObject* KNSCore__ItemsModel_Sender(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSender(const KNSCore__ItemsModel* self, intptr_t slot);
QObject* KNSCore__ItemsModel_SuperSender(const KNSCore__ItemsModel* self);
int KNSCore__ItemsModel_SenderSignalIndex(const KNSCore__ItemsModel* self);
void KNSCore__ItemsModel_OnSenderSignalIndex(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperSenderSignalIndex(const KNSCore__ItemsModel* self);
int KNSCore__ItemsModel_Receivers(const KNSCore__ItemsModel* self, const char* signal);
void KNSCore__ItemsModel_OnReceivers(const KNSCore__ItemsModel* self, intptr_t slot);
int KNSCore__ItemsModel_SuperReceivers(const KNSCore__ItemsModel* self, const char* signal);
bool KNSCore__ItemsModel_IsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_OnIsSignalConnected(const KNSCore__ItemsModel* self, intptr_t slot);
bool KNSCore__ItemsModel_SuperIsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal);
void KNSCore__ItemsModel_Delete(KNSCore__ItemsModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
