#pragma once
#ifndef SRCC_LIBQSTRINGLISTMODEL_H
#define SRCC_LIBQSTRINGLISTMODEL_H

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
typedef struct QStringListModel QStringListModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(const libqt_list /* of libqt_string */ strings);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(const libqt_list /* of libqt_string */ strings, QObject* parent);
QMetaObject* QStringListModel_MetaObject(const QStringListModel* self);
void* QStringListModel_Metacast(QStringListModel* self, const char* param1);
int QStringListModel_Metacall(QStringListModel* self, int param1, int param2, void** param3);
int QStringListModel_RowCount(const QStringListModel* self, const QModelIndex* parent);
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, const QModelIndex* idx);
QVariant* QStringListModel_Data(const QStringListModel* self, const QModelIndex* index, int role);
bool QStringListModel_SetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role);
bool QStringListModel_ClearItemData(QStringListModel* self, const QModelIndex* index);
int QStringListModel_Flags(const QStringListModel* self, const QModelIndex* index);
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
bool QStringListModel_MoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
libqt_map /* of int to QVariant* */ QStringListModel_ItemData(const QStringListModel* self, const QModelIndex* index);
bool QStringListModel_SetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QStringListModel_Sort(QStringListModel* self, int column, int order);
libqt_list /* of libqt_string */ QStringListModel_StringList(const QStringListModel* self);
void QStringListModel_SetStringList(QStringListModel* self, const libqt_list /* of libqt_string */ strings);
int QStringListModel_SupportedDropActions(const QStringListModel* self);
void QStringListModel_OnMetaObject(const QStringListModel* self, intptr_t slot);
QMetaObject* QStringListModel_SuperMetaObject(const QStringListModel* self);
void QStringListModel_OnMetacast(QStringListModel* self, intptr_t slot);
void* QStringListModel_SuperMetacast(QStringListModel* self, const char* param1);
void QStringListModel_OnMetacall(QStringListModel* self, intptr_t slot);
int QStringListModel_SuperMetacall(QStringListModel* self, int param1, int param2, void** param3);
void QStringListModel_OnRowCount(const QStringListModel* self, intptr_t slot);
int QStringListModel_SuperRowCount(const QStringListModel* self, const QModelIndex* parent);
void QStringListModel_OnSibling(const QStringListModel* self, intptr_t slot);
QModelIndex* QStringListModel_SuperSibling(const QStringListModel* self, int row, int column, const QModelIndex* idx);
void QStringListModel_OnData(const QStringListModel* self, intptr_t slot);
QVariant* QStringListModel_SuperData(const QStringListModel* self, const QModelIndex* index, int role);
void QStringListModel_OnSetData(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperSetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role);
void QStringListModel_OnClearItemData(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperClearItemData(QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnFlags(const QStringListModel* self, intptr_t slot);
int QStringListModel_SuperFlags(const QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnInsertRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperInsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
void QStringListModel_OnRemoveRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperRemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
void QStringListModel_OnMoveRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QStringListModel_OnItemData(const QStringListModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QStringListModel_SuperItemData(const QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnSetItemData(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperSetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QStringListModel_OnSort(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperSort(QStringListModel* self, int column, int order);
void QStringListModel_OnSupportedDropActions(const QStringListModel* self, intptr_t slot);
int QStringListModel_SuperSupportedDropActions(const QStringListModel* self);
QModelIndex* QStringListModel_Index(const QStringListModel* self, int row, int column, const QModelIndex* parent);
void QStringListModel_OnIndex(const QStringListModel* self, intptr_t slot);
QModelIndex* QStringListModel_SuperIndex(const QStringListModel* self, int row, int column, const QModelIndex* parent);
bool QStringListModel_DropMimeData(QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QStringListModel_OnDropMimeData(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperDropMimeData(QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
QVariant* QStringListModel_HeaderData(const QStringListModel* self, int section, int orientation, int role);
void QStringListModel_OnHeaderData(const QStringListModel* self, intptr_t slot);
QVariant* QStringListModel_SuperHeaderData(const QStringListModel* self, int section, int orientation, int role);
bool QStringListModel_SetHeaderData(QStringListModel* self, int section, int orientation, const QVariant* value, int role);
void QStringListModel_OnSetHeaderData(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperSetHeaderData(QStringListModel* self, int section, int orientation, const QVariant* value, int role);
libqt_list /* of libqt_string */ QStringListModel_MimeTypes(const QStringListModel* self);
void QStringListModel_OnMimeTypes(const QStringListModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QStringListModel_SuperMimeTypes(const QStringListModel* self);
QMimeData* QStringListModel_MimeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QStringListModel_OnMimeData(const QStringListModel* self, intptr_t slot);
QMimeData* QStringListModel_SuperMimeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QStringListModel_CanDropMimeData(const QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QStringListModel_OnCanDropMimeData(const QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperCanDropMimeData(const QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QStringListModel_SupportedDragActions(const QStringListModel* self);
void QStringListModel_OnSupportedDragActions(const QStringListModel* self, intptr_t slot);
int QStringListModel_SuperSupportedDragActions(const QStringListModel* self);
bool QStringListModel_InsertColumns(QStringListModel* self, int column, int count, const QModelIndex* parent);
void QStringListModel_OnInsertColumns(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperInsertColumns(QStringListModel* self, int column, int count, const QModelIndex* parent);
bool QStringListModel_RemoveColumns(QStringListModel* self, int column, int count, const QModelIndex* parent);
void QStringListModel_OnRemoveColumns(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperRemoveColumns(QStringListModel* self, int column, int count, const QModelIndex* parent);
bool QStringListModel_MoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QStringListModel_OnMoveColumns(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QStringListModel_FetchMore(QStringListModel* self, const QModelIndex* parent);
void QStringListModel_OnFetchMore(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperFetchMore(QStringListModel* self, const QModelIndex* parent);
bool QStringListModel_CanFetchMore(const QStringListModel* self, const QModelIndex* parent);
void QStringListModel_OnCanFetchMore(const QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperCanFetchMore(const QStringListModel* self, const QModelIndex* parent);
QModelIndex* QStringListModel_Buddy(const QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnBuddy(const QStringListModel* self, intptr_t slot);
QModelIndex* QStringListModel_SuperBuddy(const QStringListModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QStringListModel_Match(const QStringListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QStringListModel_OnMatch(const QStringListModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QStringListModel_SuperMatch(const QStringListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QStringListModel_Span(const QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnSpan(const QStringListModel* self, intptr_t slot);
QSize* QStringListModel_SuperSpan(const QStringListModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ QStringListModel_RoleNames(const QStringListModel* self);
void QStringListModel_OnRoleNames(const QStringListModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QStringListModel_SuperRoleNames(const QStringListModel* self);
void QStringListModel_MultiData(const QStringListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QStringListModel_OnMultiData(const QStringListModel* self, intptr_t slot);
void QStringListModel_SuperMultiData(const QStringListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QStringListModel_Submit(QStringListModel* self);
void QStringListModel_OnSubmit(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperSubmit(QStringListModel* self);
void QStringListModel_Revert(QStringListModel* self);
void QStringListModel_OnRevert(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperRevert(QStringListModel* self);
void QStringListModel_ResetInternalData(QStringListModel* self);
void QStringListModel_OnResetInternalData(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperResetInternalData(QStringListModel* self);
bool QStringListModel_Event(QStringListModel* self, QEvent* event);
void QStringListModel_OnEvent(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperEvent(QStringListModel* self, QEvent* event);
bool QStringListModel_EventFilter(QStringListModel* self, QObject* watched, QEvent* event);
void QStringListModel_OnEventFilter(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperEventFilter(QStringListModel* self, QObject* watched, QEvent* event);
void QStringListModel_TimerEvent(QStringListModel* self, QTimerEvent* event);
void QStringListModel_OnTimerEvent(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperTimerEvent(QStringListModel* self, QTimerEvent* event);
void QStringListModel_ChildEvent(QStringListModel* self, QChildEvent* event);
void QStringListModel_OnChildEvent(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperChildEvent(QStringListModel* self, QChildEvent* event);
void QStringListModel_CustomEvent(QStringListModel* self, QEvent* event);
void QStringListModel_OnCustomEvent(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperCustomEvent(QStringListModel* self, QEvent* event);
void QStringListModel_ConnectNotify(QStringListModel* self, const QMetaMethod* signal);
void QStringListModel_OnConnectNotify(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperConnectNotify(QStringListModel* self, const QMetaMethod* signal);
void QStringListModel_DisconnectNotify(QStringListModel* self, const QMetaMethod* signal);
void QStringListModel_OnDisconnectNotify(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperDisconnectNotify(QStringListModel* self, const QMetaMethod* signal);
QModelIndex* QStringListModel_CreateIndex(const QStringListModel* self, int row, int column);
void QStringListModel_OnCreateIndex(const QStringListModel* self, intptr_t slot);
QModelIndex* QStringListModel_SuperCreateIndex(const QStringListModel* self, int row, int column);
void QStringListModel_EncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QStringListModel_OnEncodeData(const QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QStringListModel_DecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QStringListModel_OnDecodeData(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperDecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QStringListModel_BeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_OnBeginInsertRows(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperBeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_EndInsertRows(QStringListModel* self);
void QStringListModel_OnEndInsertRows(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndInsertRows(QStringListModel* self);
void QStringListModel_BeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_OnBeginRemoveRows(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperBeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_EndRemoveRows(QStringListModel* self);
void QStringListModel_OnEndRemoveRows(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndRemoveRows(QStringListModel* self);
bool QStringListModel_BeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QStringListModel_OnBeginMoveRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperBeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QStringListModel_EndMoveRows(QStringListModel* self);
void QStringListModel_OnEndMoveRows(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndMoveRows(QStringListModel* self);
void QStringListModel_BeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_OnBeginInsertColumns(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperBeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_EndInsertColumns(QStringListModel* self);
void QStringListModel_OnEndInsertColumns(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndInsertColumns(QStringListModel* self);
void QStringListModel_BeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_OnBeginRemoveColumns(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperBeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
void QStringListModel_EndRemoveColumns(QStringListModel* self);
void QStringListModel_OnEndRemoveColumns(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndRemoveColumns(QStringListModel* self);
bool QStringListModel_BeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QStringListModel_OnBeginMoveColumns(QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperBeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QStringListModel_EndMoveColumns(QStringListModel* self);
void QStringListModel_OnEndMoveColumns(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndMoveColumns(QStringListModel* self);
void QStringListModel_BeginResetModel(QStringListModel* self);
void QStringListModel_OnBeginResetModel(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperBeginResetModel(QStringListModel* self);
void QStringListModel_EndResetModel(QStringListModel* self);
void QStringListModel_OnEndResetModel(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperEndResetModel(QStringListModel* self);
void QStringListModel_ChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to);
void QStringListModel_OnChangePersistentIndex(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to);
void QStringListModel_ChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void QStringListModel_OnChangePersistentIndexList(QStringListModel* self, intptr_t slot);
void QStringListModel_SuperChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QStringListModel_PersistentIndexList(const QStringListModel* self);
void QStringListModel_OnPersistentIndexList(const QStringListModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QStringListModel_SuperPersistentIndexList(const QStringListModel* self);
QObject* QStringListModel_Sender(const QStringListModel* self);
void QStringListModel_OnSender(const QStringListModel* self, intptr_t slot);
QObject* QStringListModel_SuperSender(const QStringListModel* self);
int QStringListModel_SenderSignalIndex(const QStringListModel* self);
void QStringListModel_OnSenderSignalIndex(const QStringListModel* self, intptr_t slot);
int QStringListModel_SuperSenderSignalIndex(const QStringListModel* self);
int QStringListModel_Receivers(const QStringListModel* self, const char* signal);
void QStringListModel_OnReceivers(const QStringListModel* self, intptr_t slot);
int QStringListModel_SuperReceivers(const QStringListModel* self, const char* signal);
bool QStringListModel_IsSignalConnected(const QStringListModel* self, const QMetaMethod* signal);
void QStringListModel_OnIsSignalConnected(const QStringListModel* self, intptr_t slot);
bool QStringListModel_SuperIsSignalConnected(const QStringListModel* self, const QMetaMethod* signal);
void QStringListModel_Delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
