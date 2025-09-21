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
libqt_string KNSCore__ProvidersModel_Tr(const char* s);
libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_RoleNames(const KNSCore__ProvidersModel* self);
QVariant* KNSCore__ProvidersModel_Data(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role);
int KNSCore__ProvidersModel_RowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
QObject* KNSCore__ProvidersModel_Engine(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_SetEngine(KNSCore__ProvidersModel* self, QObject* engine);
void KNSCore__ProvidersModel_EngineChanged(KNSCore__ProvidersModel* self);
libqt_string KNSCore__ProvidersModel_Tr2(const char* s, const char* c);
libqt_string KNSCore__ProvidersModel_Tr3(const char* s, const char* c, int n);
void KNSCore__ProvidersModel_OnMetacall(KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseMetacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3);
void KNSCore__ProvidersModel_OnRoleNames(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_QBaseRoleNames(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnData(const KNSCore__ProvidersModel* self, intptr_t slot);
QVariant* KNSCore__ProvidersModel_QBaseData(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role);
void KNSCore__ProvidersModel_OnRowCount(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseRowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
QModelIndex* KNSCore__ProvidersModel_Index(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnIndex(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_QBaseIndex(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KNSCore__ProvidersModel_Sibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx);
void KNSCore__ProvidersModel_OnSibling(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_QBaseSibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx);
bool KNSCore__ProvidersModel_DropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnDropMimeData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseDropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ProvidersModel_Flags(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnFlags(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseFlags(const KNSCore__ProvidersModel* self, const QModelIndex* index);
bool KNSCore__ProvidersModel_SetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role);
void KNSCore__ProvidersModel_OnSetData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseSetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KNSCore__ProvidersModel_HeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role);
void KNSCore__ProvidersModel_OnHeaderData(const KNSCore__ProvidersModel* self, intptr_t slot);
QVariant* KNSCore__ProvidersModel_QBaseHeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role);
bool KNSCore__ProvidersModel_SetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role);
void KNSCore__ProvidersModel_OnSetHeaderData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseSetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_ItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnItemData(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_QBaseItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index);
bool KNSCore__ProvidersModel_SetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KNSCore__ProvidersModel_OnSetItemData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseSetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KNSCore__ProvidersModel_ClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnClearItemData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_MimeTypes(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnMimeTypes(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_QBaseMimeTypes(const KNSCore__ProvidersModel* self);
QMimeData* KNSCore__ProvidersModel_MimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KNSCore__ProvidersModel_OnMimeData(const KNSCore__ProvidersModel* self, intptr_t slot);
QMimeData* KNSCore__ProvidersModel_QBaseMimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KNSCore__ProvidersModel_CanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnCanDropMimeData(const KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseCanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KNSCore__ProvidersModel_SupportedDropActions(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSupportedDropActions(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseSupportedDropActions(const KNSCore__ProvidersModel* self);
int KNSCore__ProvidersModel_SupportedDragActions(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSupportedDragActions(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseSupportedDragActions(const KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_InsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnInsertRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseInsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_InsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseInsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_RemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseRemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_RemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseRemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent);
bool KNSCore__ProvidersModel_MoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ProvidersModel_OnMoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KNSCore__ProvidersModel_MoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ProvidersModel_OnMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KNSCore__ProvidersModel_FetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnFetchMore(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseFetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent);
bool KNSCore__ProvidersModel_CanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
void KNSCore__ProvidersModel_OnCanFetchMore(const KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseCanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent);
void KNSCore__ProvidersModel_Sort(KNSCore__ProvidersModel* self, int column, int order);
void KNSCore__ProvidersModel_OnSort(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseSort(KNSCore__ProvidersModel* self, int column, int order);
QModelIndex* KNSCore__ProvidersModel_Buddy(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnBuddy(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_QBaseBuddy(const KNSCore__ProvidersModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_Match(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KNSCore__ProvidersModel_OnMatch(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_QBaseMatch(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KNSCore__ProvidersModel_Span(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_OnSpan(const KNSCore__ProvidersModel* self, intptr_t slot);
QSize* KNSCore__ProvidersModel_QBaseSpan(const KNSCore__ProvidersModel* self, const QModelIndex* index);
void KNSCore__ProvidersModel_MultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KNSCore__ProvidersModel_OnMultiData(const KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseMultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KNSCore__ProvidersModel_Submit(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSubmit(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseSubmit(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_Revert(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnRevert(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseRevert(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_ResetInternalData(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnResetInternalData(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseResetInternalData(KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_Event(KNSCore__ProvidersModel* self, QEvent* event);
void KNSCore__ProvidersModel_OnEvent(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseEvent(KNSCore__ProvidersModel* self, QEvent* event);
bool KNSCore__ProvidersModel_EventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event);
void KNSCore__ProvidersModel_OnEventFilter(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseEventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event);
void KNSCore__ProvidersModel_TimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event);
void KNSCore__ProvidersModel_OnTimerEvent(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseTimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event);
void KNSCore__ProvidersModel_ChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event);
void KNSCore__ProvidersModel_OnChildEvent(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event);
void KNSCore__ProvidersModel_CustomEvent(KNSCore__ProvidersModel* self, QEvent* event);
void KNSCore__ProvidersModel_OnCustomEvent(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseCustomEvent(KNSCore__ProvidersModel* self, QEvent* event);
void KNSCore__ProvidersModel_ConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_OnConnectNotify(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_DisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_OnDisconnectNotify(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseDisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal);
QModelIndex* KNSCore__ProvidersModel_CreateIndex(const KNSCore__ProvidersModel* self, int row, int column);
void KNSCore__ProvidersModel_OnCreateIndex(const KNSCore__ProvidersModel* self, intptr_t slot);
QModelIndex* KNSCore__ProvidersModel_QBaseCreateIndex(const KNSCore__ProvidersModel* self, int row, int column);
void KNSCore__ProvidersModel_EncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KNSCore__ProvidersModel_OnEncodeData(const KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KNSCore__ProvidersModel_DecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ProvidersModel_OnDecodeData(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseDecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KNSCore__ProvidersModel_BeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginInsertRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseBeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndInsertRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndInsertRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndInsertRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseBeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndRemoveRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndRemoveRows(KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_BeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ProvidersModel_OnBeginMoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseBeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KNSCore__ProvidersModel_EndMoveRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndMoveRows(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndMoveRows(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseBeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndInsertColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndInsertColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_OnBeginRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseBeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last);
void KNSCore__ProvidersModel_EndRemoveColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndRemoveColumns(KNSCore__ProvidersModel* self);
bool KNSCore__ProvidersModel_BeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ProvidersModel_OnBeginMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseBeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KNSCore__ProvidersModel_EndMoveColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndMoveColumns(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_BeginResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnBeginResetModel(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseBeginResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_EndResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnEndResetModel(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseEndResetModel(KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_ChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ProvidersModel_OnChangePersistentIndex(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to);
void KNSCore__ProvidersModel_ChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KNSCore__ProvidersModel_OnChangePersistentIndexList(KNSCore__ProvidersModel* self, intptr_t slot);
void KNSCore__ProvidersModel_QBaseChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_PersistentIndexList(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnPersistentIndexList(const KNSCore__ProvidersModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_QBasePersistentIndexList(const KNSCore__ProvidersModel* self);
QObject* KNSCore__ProvidersModel_Sender(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSender(const KNSCore__ProvidersModel* self, intptr_t slot);
QObject* KNSCore__ProvidersModel_QBaseSender(const KNSCore__ProvidersModel* self);
int KNSCore__ProvidersModel_SenderSignalIndex(const KNSCore__ProvidersModel* self);
void KNSCore__ProvidersModel_OnSenderSignalIndex(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseSenderSignalIndex(const KNSCore__ProvidersModel* self);
int KNSCore__ProvidersModel_Receivers(const KNSCore__ProvidersModel* self, const char* signal);
void KNSCore__ProvidersModel_OnReceivers(const KNSCore__ProvidersModel* self, intptr_t slot);
int KNSCore__ProvidersModel_QBaseReceivers(const KNSCore__ProvidersModel* self, const char* signal);
bool KNSCore__ProvidersModel_IsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_OnIsSignalConnected(const KNSCore__ProvidersModel* self, intptr_t slot);
bool KNSCore__ProvidersModel_QBaseIsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal);
void KNSCore__ProvidersModel_Delete(KNSCore__ProvidersModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
