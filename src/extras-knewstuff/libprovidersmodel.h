#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBPROVIDERSMODEL_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBPROVIDERSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProvidersModel)
typedef KNSCore::ProvidersModel KNSCore__ProvidersModel;
#endif
#else
typedef struct KNSCore__ProvidersModel KNSCore__ProvidersModel;
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

KNSCore__ProvidersModel* KNSCore__ProvidersModel_new();
KNSCore__ProvidersModel* KNSCore__ProvidersModel_new2(QObject* parent);
QMetaObject* KNSCore__ProvidersModel_MetaObject(const KNSCore__ProvidersModel* self);
void* KNSCore__ProvidersModel_Metacast(KNSCore__ProvidersModel* self, const char* param1);
int KNSCore__ProvidersModel_Metacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3);
libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_RoleNames(const KNSCore__ProvidersModel* self);
QVariant* KNSCore__ProvidersModel_Data(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role);
int KNSCore__ProvidersModel_RowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
QObject* KNSCore__ProvidersModel_Engine(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_SetEngine(KNSCore__ProvidersModel* self, QObject* engine);
void KNSCore__ProvidersModel_EngineChanged(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnMetaObject(const KNSCore__ProvidersModel* self, intptr_t slot);
QMetaObject* KNSCore__ProvidersModel_SuperMetaObject(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnMetacast(KNSCore__ProvidersModel* self, intptr_t slot);
void* KNSCore__ProvidersModel_SuperMetacast(KNSCore__ProvidersModel* self, const char* param1);
void KNSCore__ProvidersModel_OnMetacall(KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperMetacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3);
void KNSCore__ProvidersModel_OnRoleNames(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_SuperRoleNames(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnData(const KNSCore__ProvidersModel* self, intptr_t slot);
QVariant* KNSCore__ProvidersModel_SuperData(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role);
void KNSCore__ProvidersModel_OnRowCount(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperRowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
QModelIndex* KNSCore__ProvidersModel_Index(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnIndex(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_SuperIndex(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KNSCore__ProvidersModel_Sibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx);
void KNSCore__ProvidersModel_OnSibling(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_SuperSibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx);
bool KNSCore__ProvidersModel_DropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnDropMimeData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperDropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ProvidersModel_Flags(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnFlags(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperFlags(const KNSCore__ProvidersModel* self, const QModelIndex* index);
bool KNSCore__ProvidersModel_SetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role);
void KNSCore__ProvidersModel_OnSetData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperSetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KNSCore__ProvidersModel_HeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role);
void KNSCore__ProvidersModel_OnHeaderData(const KNSCore__ProvidersModel* self, intptr_t slot);
QVariant* KNSCore__ProvidersModel_SuperHeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role);
bool KNSCore__ProvidersModel_SetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role);
void KNSCore__ProvidersModel_OnSetHeaderData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperSetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_ItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnItemData(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_SuperItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index);
bool KNSCore__ProvidersModel_SetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KNSCore__ProvidersModel_OnSetItemData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperSetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KNSCore__ProvidersModel_ClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnClearItemData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_MimeTypes(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnMimeTypes(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_SuperMimeTypes(const KNSCore__ProvidersModel* self);
QMimeData* KNSCore__ProvidersModel_MimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KNSCore__ProvidersModel_OnMimeData(const KNSCore__ProvidersModel* self, intptr_t slot);
QMimeData* KNSCore__ProvidersModel_SuperMimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KNSCore__ProvidersModel_CanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnCanDropMimeData(const KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperCanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ProvidersModel_SupportedDropActions(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSupportedDropActions(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperSupportedDropActions(const KNSCore__ProvidersModel* self);
int KNSCore__ProvidersModel_SupportedDragActions(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSupportedDragActions(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperSupportedDragActions(const KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_InsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnInsertRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperInsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_InsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperInsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_RemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperRemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_RemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperRemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_MoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ProvidersModel_OnMoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KNSCore__ProvidersModel_MoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ProvidersModel_OnMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ProvidersModel_FetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnFetchMore(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperFetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent);
bool KNSCore__ProvidersModel_CanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnCanFetchMore(const KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperCanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
void KNSCore__ProvidersModel_Sort(KNSCore__ProvidersModel* self, int column, int order);
void KNSCore__ProvidersModel_OnSort(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperSort(KNSCore__ProvidersModel* self, int column, int order);
QModelIndex* KNSCore__ProvidersModel_Buddy(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnBuddy(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_SuperBuddy(const KNSCore__ProvidersModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_Match(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KNSCore__ProvidersModel_OnMatch(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_SuperMatch(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KNSCore__ProvidersModel_Span(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnSpan(const KNSCore__ProvidersModel* self, intptr_t slot);
QSize* KNSCore__ProvidersModel_SuperSpan(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_MultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KNSCore__ProvidersModel_OnMultiData(const KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperMultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KNSCore__ProvidersModel_Submit(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSubmit(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperSubmit(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_Revert(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnRevert(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperRevert(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_ResetInternalData(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnResetInternalData(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperResetInternalData(KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_Event(KNSCore__ProvidersModel* self, QEvent* event);
void KNSCore__ProvidersModel_OnEvent(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperEvent(KNSCore__ProvidersModel* self, QEvent* event);
bool KNSCore__ProvidersModel_EventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event);
void KNSCore__ProvidersModel_OnEventFilter(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperEventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event);
void KNSCore__ProvidersModel_TimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event);
void KNSCore__ProvidersModel_OnTimerEvent(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperTimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event);
void KNSCore__ProvidersModel_ChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event);
void KNSCore__ProvidersModel_OnChildEvent(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event);
void KNSCore__ProvidersModel_CustomEvent(KNSCore__ProvidersModel* self, QEvent* event);
void KNSCore__ProvidersModel_OnCustomEvent(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperCustomEvent(KNSCore__ProvidersModel* self, QEvent* event);
void KNSCore__ProvidersModel_ConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_OnConnectNotify(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_DisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_OnDisconnectNotify(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperDisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
QModelIndex* KNSCore__ProvidersModel_CreateIndex(const KNSCore__ProvidersModel* self, int row, int column);
void KNSCore__ProvidersModel_OnCreateIndex(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_SuperCreateIndex(const KNSCore__ProvidersModel* self, int row, int column);
void KNSCore__ProvidersModel_EncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KNSCore__ProvidersModel_OnEncodeData(const KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KNSCore__ProvidersModel_DecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ProvidersModel_OnDecodeData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperDecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ProvidersModel_BeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginInsertRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperBeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndInsertRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndInsertRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndInsertRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperBeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndRemoveRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndRemoveRows(KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_BeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ProvidersModel_OnBeginMoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperBeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ProvidersModel_EndMoveRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndMoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndMoveRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperBeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndInsertColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndInsertColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperBeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndRemoveColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndRemoveColumns(KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_BeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ProvidersModel_OnBeginMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperBeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ProvidersModel_EndMoveColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndMoveColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnBeginResetModel(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperBeginResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_EndResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndResetModel(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperEndResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_ChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ProvidersModel_OnChangePersistentIndex(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ProvidersModel_ChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KNSCore__ProvidersModel_OnChangePersistentIndexList(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_SuperChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_PersistentIndexList(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnPersistentIndexList(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_SuperPersistentIndexList(const KNSCore__ProvidersModel* self);
QObject* KNSCore__ProvidersModel_Sender(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSender(const KNSCore__ProvidersModel* self, intptr_t slot);
QObject* KNSCore__ProvidersModel_SuperSender(const KNSCore__ProvidersModel* self);
int KNSCore__ProvidersModel_SenderSignalIndex(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSenderSignalIndex(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperSenderSignalIndex(const KNSCore__ProvidersModel* self);
int KNSCore__ProvidersModel_Receivers(const KNSCore__ProvidersModel* self, const char* signal);
void KNSCore__ProvidersModel_OnReceivers(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_SuperReceivers(const KNSCore__ProvidersModel* self, const char* signal);
bool KNSCore__ProvidersModel_IsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_OnIsSignalConnected(const KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_SuperIsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_Delete(KNSCore__ProvidersModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
