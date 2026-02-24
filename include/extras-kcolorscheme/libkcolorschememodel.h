#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEC_LIBKCOLORSCHEMEMODEL_H
#define SRC_EXTRAS_KCOLORSCHEMEC_LIBKCOLORSCHEMEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorSchemeModel KColorSchemeModel;
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

KColorSchemeModel* KColorSchemeModel_new();
KColorSchemeModel* KColorSchemeModel_new2(QObject* parent);
QMetaObject* KColorSchemeModel_MetaObject(const KColorSchemeModel* self);
void* KColorSchemeModel_Metacast(KColorSchemeModel* self, const char* param1);
int KColorSchemeModel_Metacall(KColorSchemeModel* self, int param1, int param2, void** param3);
QVariant* KColorSchemeModel_Data(const KColorSchemeModel* self, const QModelIndex* index, int role);
int KColorSchemeModel_RowCount(const KColorSchemeModel* self, const QModelIndex* parent);
void KColorSchemeModel_OnMetaObject(const KColorSchemeModel* self, intptr_t slot);
QMetaObject* KColorSchemeModel_SuperMetaObject(const KColorSchemeModel* self);
void KColorSchemeModel_OnMetacast(KColorSchemeModel* self, intptr_t slot);
void* KColorSchemeModel_SuperMetacast(KColorSchemeModel* self, const char* param1);
void KColorSchemeModel_OnMetacall(KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperMetacall(KColorSchemeModel* self, int param1, int param2, void** param3);
void KColorSchemeModel_OnData(const KColorSchemeModel* self, intptr_t slot);
QVariant* KColorSchemeModel_SuperData(const KColorSchemeModel* self, const QModelIndex* index, int role);
void KColorSchemeModel_OnRowCount(const KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperRowCount(const KColorSchemeModel* self, const QModelIndex* parent);
QModelIndex* KColorSchemeModel_Index(const KColorSchemeModel* self, int row, int column, const QModelIndex* parent);
void KColorSchemeModel_OnIndex(const KColorSchemeModel* self, intptr_t slot);
QModelIndex* KColorSchemeModel_SuperIndex(const KColorSchemeModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KColorSchemeModel_Sibling(const KColorSchemeModel* self, int row, int column, const QModelIndex* idx);
void KColorSchemeModel_OnSibling(const KColorSchemeModel* self, intptr_t slot);
QModelIndex* KColorSchemeModel_SuperSibling(const KColorSchemeModel* self, int row, int column, const QModelIndex* idx);
bool KColorSchemeModel_DropMimeData(KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KColorSchemeModel_OnDropMimeData(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperDropMimeData(KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KColorSchemeModel_Flags(const KColorSchemeModel* self, const QModelIndex* index);
void KColorSchemeModel_OnFlags(const KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperFlags(const KColorSchemeModel* self, const QModelIndex* index);
bool KColorSchemeModel_SetData(KColorSchemeModel* self, const QModelIndex* index, const QVariant* value, int role);
void KColorSchemeModel_OnSetData(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperSetData(KColorSchemeModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KColorSchemeModel_HeaderData(const KColorSchemeModel* self, int section, int orientation, int role);
void KColorSchemeModel_OnHeaderData(const KColorSchemeModel* self, intptr_t slot);
QVariant* KColorSchemeModel_SuperHeaderData(const KColorSchemeModel* self, int section, int orientation, int role);
bool KColorSchemeModel_SetHeaderData(KColorSchemeModel* self, int section, int orientation, const QVariant* value, int role);
void KColorSchemeModel_OnSetHeaderData(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperSetHeaderData(KColorSchemeModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ KColorSchemeModel_ItemData(const KColorSchemeModel* self, const QModelIndex* index);
void KColorSchemeModel_OnItemData(const KColorSchemeModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KColorSchemeModel_SuperItemData(const KColorSchemeModel* self, const QModelIndex* index);
bool KColorSchemeModel_SetItemData(KColorSchemeModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KColorSchemeModel_OnSetItemData(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperSetItemData(KColorSchemeModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KColorSchemeModel_ClearItemData(KColorSchemeModel* self, const QModelIndex* index);
void KColorSchemeModel_OnClearItemData(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperClearItemData(KColorSchemeModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KColorSchemeModel_MimeTypes(const KColorSchemeModel* self);
void KColorSchemeModel_OnMimeTypes(const KColorSchemeModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KColorSchemeModel_SuperMimeTypes(const KColorSchemeModel* self);
QMimeData* KColorSchemeModel_MimeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KColorSchemeModel_OnMimeData(const KColorSchemeModel* self, intptr_t slot);
QMimeData* KColorSchemeModel_SuperMimeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KColorSchemeModel_CanDropMimeData(const KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KColorSchemeModel_OnCanDropMimeData(const KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperCanDropMimeData(const KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KColorSchemeModel_SupportedDropActions(const KColorSchemeModel* self);
void KColorSchemeModel_OnSupportedDropActions(const KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperSupportedDropActions(const KColorSchemeModel* self);
int KColorSchemeModel_SupportedDragActions(const KColorSchemeModel* self);
void KColorSchemeModel_OnSupportedDragActions(const KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperSupportedDragActions(const KColorSchemeModel* self);
bool KColorSchemeModel_InsertRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent);
void KColorSchemeModel_OnInsertRows(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperInsertRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent);
bool KColorSchemeModel_InsertColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent);
void KColorSchemeModel_OnInsertColumns(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperInsertColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent);
bool KColorSchemeModel_RemoveRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent);
void KColorSchemeModel_OnRemoveRows(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperRemoveRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent);
bool KColorSchemeModel_RemoveColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent);
void KColorSchemeModel_OnRemoveColumns(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperRemoveColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent);
bool KColorSchemeModel_MoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KColorSchemeModel_OnMoveRows(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KColorSchemeModel_MoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KColorSchemeModel_OnMoveColumns(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KColorSchemeModel_FetchMore(KColorSchemeModel* self, const QModelIndex* parent);
void KColorSchemeModel_OnFetchMore(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperFetchMore(KColorSchemeModel* self, const QModelIndex* parent);
bool KColorSchemeModel_CanFetchMore(const KColorSchemeModel* self, const QModelIndex* parent);
void KColorSchemeModel_OnCanFetchMore(const KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperCanFetchMore(const KColorSchemeModel* self, const QModelIndex* parent);
void KColorSchemeModel_Sort(KColorSchemeModel* self, int column, int order);
void KColorSchemeModel_OnSort(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperSort(KColorSchemeModel* self, int column, int order);
QModelIndex* KColorSchemeModel_Buddy(const KColorSchemeModel* self, const QModelIndex* index);
void KColorSchemeModel_OnBuddy(const KColorSchemeModel* self, intptr_t slot);
QModelIndex* KColorSchemeModel_SuperBuddy(const KColorSchemeModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KColorSchemeModel_Match(const KColorSchemeModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KColorSchemeModel_OnMatch(const KColorSchemeModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KColorSchemeModel_SuperMatch(const KColorSchemeModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KColorSchemeModel_Span(const KColorSchemeModel* self, const QModelIndex* index);
void KColorSchemeModel_OnSpan(const KColorSchemeModel* self, intptr_t slot);
QSize* KColorSchemeModel_SuperSpan(const KColorSchemeModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ KColorSchemeModel_RoleNames(const KColorSchemeModel* self);
void KColorSchemeModel_OnRoleNames(const KColorSchemeModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KColorSchemeModel_SuperRoleNames(const KColorSchemeModel* self);
void KColorSchemeModel_MultiData(const KColorSchemeModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KColorSchemeModel_OnMultiData(const KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperMultiData(const KColorSchemeModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KColorSchemeModel_Submit(KColorSchemeModel* self);
void KColorSchemeModel_OnSubmit(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperSubmit(KColorSchemeModel* self);
void KColorSchemeModel_Revert(KColorSchemeModel* self);
void KColorSchemeModel_OnRevert(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperRevert(KColorSchemeModel* self);
void KColorSchemeModel_ResetInternalData(KColorSchemeModel* self);
void KColorSchemeModel_OnResetInternalData(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperResetInternalData(KColorSchemeModel* self);
bool KColorSchemeModel_Event(KColorSchemeModel* self, QEvent* event);
void KColorSchemeModel_OnEvent(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperEvent(KColorSchemeModel* self, QEvent* event);
bool KColorSchemeModel_EventFilter(KColorSchemeModel* self, QObject* watched, QEvent* event);
void KColorSchemeModel_OnEventFilter(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperEventFilter(KColorSchemeModel* self, QObject* watched, QEvent* event);
void KColorSchemeModel_TimerEvent(KColorSchemeModel* self, QTimerEvent* event);
void KColorSchemeModel_OnTimerEvent(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperTimerEvent(KColorSchemeModel* self, QTimerEvent* event);
void KColorSchemeModel_ChildEvent(KColorSchemeModel* self, QChildEvent* event);
void KColorSchemeModel_OnChildEvent(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperChildEvent(KColorSchemeModel* self, QChildEvent* event);
void KColorSchemeModel_CustomEvent(KColorSchemeModel* self, QEvent* event);
void KColorSchemeModel_OnCustomEvent(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperCustomEvent(KColorSchemeModel* self, QEvent* event);
void KColorSchemeModel_ConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
void KColorSchemeModel_OnConnectNotify(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
void KColorSchemeModel_DisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
void KColorSchemeModel_OnDisconnectNotify(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperDisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
QModelIndex* KColorSchemeModel_CreateIndex(const KColorSchemeModel* self, int row, int column);
void KColorSchemeModel_OnCreateIndex(const KColorSchemeModel* self, intptr_t slot);
QModelIndex* KColorSchemeModel_SuperCreateIndex(const KColorSchemeModel* self, int row, int column);
void KColorSchemeModel_EncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void KColorSchemeModel_OnEncodeData(const KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KColorSchemeModel_DecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KColorSchemeModel_OnDecodeData(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperDecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KColorSchemeModel_BeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_OnBeginInsertRows(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperBeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_EndInsertRows(KColorSchemeModel* self);
void KColorSchemeModel_OnEndInsertRows(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndInsertRows(KColorSchemeModel* self);
void KColorSchemeModel_BeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_OnBeginRemoveRows(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperBeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_EndRemoveRows(KColorSchemeModel* self);
void KColorSchemeModel_OnEndRemoveRows(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndRemoveRows(KColorSchemeModel* self);
bool KColorSchemeModel_BeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KColorSchemeModel_OnBeginMoveRows(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperBeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KColorSchemeModel_EndMoveRows(KColorSchemeModel* self);
void KColorSchemeModel_OnEndMoveRows(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndMoveRows(KColorSchemeModel* self);
void KColorSchemeModel_BeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_OnBeginInsertColumns(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperBeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_EndInsertColumns(KColorSchemeModel* self);
void KColorSchemeModel_OnEndInsertColumns(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndInsertColumns(KColorSchemeModel* self);
void KColorSchemeModel_BeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_OnBeginRemoveColumns(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperBeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
void KColorSchemeModel_EndRemoveColumns(KColorSchemeModel* self);
void KColorSchemeModel_OnEndRemoveColumns(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndRemoveColumns(KColorSchemeModel* self);
bool KColorSchemeModel_BeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KColorSchemeModel_OnBeginMoveColumns(KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperBeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KColorSchemeModel_EndMoveColumns(KColorSchemeModel* self);
void KColorSchemeModel_OnEndMoveColumns(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndMoveColumns(KColorSchemeModel* self);
void KColorSchemeModel_BeginResetModel(KColorSchemeModel* self);
void KColorSchemeModel_OnBeginResetModel(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperBeginResetModel(KColorSchemeModel* self);
void KColorSchemeModel_EndResetModel(KColorSchemeModel* self);
void KColorSchemeModel_OnEndResetModel(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperEndResetModel(KColorSchemeModel* self);
void KColorSchemeModel_ChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to);
void KColorSchemeModel_OnChangePersistentIndex(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to);
void KColorSchemeModel_ChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void KColorSchemeModel_OnChangePersistentIndexList(KColorSchemeModel* self, intptr_t slot);
void KColorSchemeModel_SuperChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KColorSchemeModel_PersistentIndexList(const KColorSchemeModel* self);
void KColorSchemeModel_OnPersistentIndexList(const KColorSchemeModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KColorSchemeModel_SuperPersistentIndexList(const KColorSchemeModel* self);
QObject* KColorSchemeModel_Sender(const KColorSchemeModel* self);
void KColorSchemeModel_OnSender(const KColorSchemeModel* self, intptr_t slot);
QObject* KColorSchemeModel_SuperSender(const KColorSchemeModel* self);
int KColorSchemeModel_SenderSignalIndex(const KColorSchemeModel* self);
void KColorSchemeModel_OnSenderSignalIndex(const KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperSenderSignalIndex(const KColorSchemeModel* self);
int KColorSchemeModel_Receivers(const KColorSchemeModel* self, const char* signal);
void KColorSchemeModel_OnReceivers(const KColorSchemeModel* self, intptr_t slot);
int KColorSchemeModel_SuperReceivers(const KColorSchemeModel* self, const char* signal);
bool KColorSchemeModel_IsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal);
void KColorSchemeModel_OnIsSignalConnected(const KColorSchemeModel* self, intptr_t slot);
bool KColorSchemeModel_SuperIsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal);
void KColorSchemeModel_Delete(KColorSchemeModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
