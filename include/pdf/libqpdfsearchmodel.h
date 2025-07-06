#pragma once
#ifndef SRC_PDFC_LIBQPDFSEARCHMODEL_H
#define SRC_PDFC_LIBQPDFSEARCHMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfLink QPdfLink;
typedef struct QPdfSearchModel QPdfSearchModel;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfSearchModel* QPdfSearchModel_new();
QPdfSearchModel* QPdfSearchModel_new2(QObject* parent);
QMetaObject* QPdfSearchModel_MetaObject(const QPdfSearchModel* self);
void* QPdfSearchModel_Metacast(QPdfSearchModel* self, const char* param1);
int QPdfSearchModel_Metacall(QPdfSearchModel* self, int param1, int param2, void** param3);
void QPdfSearchModel_OnMetacall(QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseMetacall(QPdfSearchModel* self, int param1, int param2, void** param3);
libqt_string QPdfSearchModel_Tr(const char* s);
libqt_list /* of QPdfLink* */ QPdfSearchModel_ResultsOnPage(const QPdfSearchModel* self, int page);
QPdfLink* QPdfSearchModel_ResultAtIndex(const QPdfSearchModel* self, int index);
QPdfDocument* QPdfSearchModel_Document(const QPdfSearchModel* self);
libqt_string QPdfSearchModel_SearchString(const QPdfSearchModel* self);
libqt_map /* of int to libqt_string */ QPdfSearchModel_RoleNames(const QPdfSearchModel* self);
void QPdfSearchModel_OnRoleNames(const QPdfSearchModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QPdfSearchModel_QBaseRoleNames(const QPdfSearchModel* self);
int QPdfSearchModel_RowCount(const QPdfSearchModel* self, const QModelIndex* parent);
void QPdfSearchModel_OnRowCount(const QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseRowCount(const QPdfSearchModel* self, const QModelIndex* parent);
QVariant* QPdfSearchModel_Data(const QPdfSearchModel* self, const QModelIndex* index, int role);
void QPdfSearchModel_OnData(const QPdfSearchModel* self, intptr_t slot);
QVariant* QPdfSearchModel_QBaseData(const QPdfSearchModel* self, const QModelIndex* index, int role);
int QPdfSearchModel_Count(const QPdfSearchModel* self);
void QPdfSearchModel_SetSearchString(QPdfSearchModel* self, const libqt_string searchString);
void QPdfSearchModel_SetDocument(QPdfSearchModel* self, QPdfDocument* document);
void QPdfSearchModel_DocumentChanged(QPdfSearchModel* self);
void QPdfSearchModel_Connect_DocumentChanged(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_SearchStringChanged(QPdfSearchModel* self);
void QPdfSearchModel_Connect_SearchStringChanged(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_CountChanged(QPdfSearchModel* self);
void QPdfSearchModel_Connect_CountChanged(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_TimerEvent(QPdfSearchModel* self, QTimerEvent* event);
void QPdfSearchModel_OnTimerEvent(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseTimerEvent(QPdfSearchModel* self, QTimerEvent* event);
libqt_string QPdfSearchModel_Tr2(const char* s, const char* c);
libqt_string QPdfSearchModel_Tr3(const char* s, const char* c, int n);
QModelIndex* QPdfSearchModel_Index(const QPdfSearchModel* self, int row, int column, const QModelIndex* parent);
void QPdfSearchModel_OnIndex(const QPdfSearchModel* self, intptr_t slot);
QModelIndex* QPdfSearchModel_QBaseIndex(const QPdfSearchModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QPdfSearchModel_Sibling(const QPdfSearchModel* self, int row, int column, const QModelIndex* idx);
void QPdfSearchModel_OnSibling(const QPdfSearchModel* self, intptr_t slot);
QModelIndex* QPdfSearchModel_QBaseSibling(const QPdfSearchModel* self, int row, int column, const QModelIndex* idx);
bool QPdfSearchModel_DropMimeData(QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfSearchModel_OnDropMimeData(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseDropMimeData(QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfSearchModel_Flags(const QPdfSearchModel* self, const QModelIndex* index);
void QPdfSearchModel_OnFlags(const QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseFlags(const QPdfSearchModel* self, const QModelIndex* index);
bool QPdfSearchModel_SetData(QPdfSearchModel* self, const QModelIndex* index, const QVariant* value, int role);
void QPdfSearchModel_OnSetData(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseSetData(QPdfSearchModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* QPdfSearchModel_HeaderData(const QPdfSearchModel* self, int section, int orientation, int role);
void QPdfSearchModel_OnHeaderData(const QPdfSearchModel* self, intptr_t slot);
QVariant* QPdfSearchModel_QBaseHeaderData(const QPdfSearchModel* self, int section, int orientation, int role);
bool QPdfSearchModel_SetHeaderData(QPdfSearchModel* self, int section, int orientation, const QVariant* value, int role);
void QPdfSearchModel_OnSetHeaderData(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseSetHeaderData(QPdfSearchModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ QPdfSearchModel_ItemData(const QPdfSearchModel* self, const QModelIndex* index);
void QPdfSearchModel_OnItemData(const QPdfSearchModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QPdfSearchModel_QBaseItemData(const QPdfSearchModel* self, const QModelIndex* index);
bool QPdfSearchModel_SetItemData(QPdfSearchModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QPdfSearchModel_OnSetItemData(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseSetItemData(QPdfSearchModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QPdfSearchModel_ClearItemData(QPdfSearchModel* self, const QModelIndex* index);
void QPdfSearchModel_OnClearItemData(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseClearItemData(QPdfSearchModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ QPdfSearchModel_MimeTypes(const QPdfSearchModel* self);
void QPdfSearchModel_OnMimeTypes(const QPdfSearchModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QPdfSearchModel_QBaseMimeTypes(const QPdfSearchModel* self);
QMimeData* QPdfSearchModel_MimeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QPdfSearchModel_OnMimeData(const QPdfSearchModel* self, intptr_t slot);
QMimeData* QPdfSearchModel_QBaseMimeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QPdfSearchModel_CanDropMimeData(const QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfSearchModel_OnCanDropMimeData(const QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseCanDropMimeData(const QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfSearchModel_SupportedDropActions(const QPdfSearchModel* self);
void QPdfSearchModel_OnSupportedDropActions(const QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseSupportedDropActions(const QPdfSearchModel* self);
int QPdfSearchModel_SupportedDragActions(const QPdfSearchModel* self);
void QPdfSearchModel_OnSupportedDragActions(const QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseSupportedDragActions(const QPdfSearchModel* self);
bool QPdfSearchModel_InsertRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent);
void QPdfSearchModel_OnInsertRows(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseInsertRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent);
bool QPdfSearchModel_InsertColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent);
void QPdfSearchModel_OnInsertColumns(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseInsertColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent);
bool QPdfSearchModel_RemoveRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent);
void QPdfSearchModel_OnRemoveRows(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseRemoveRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent);
bool QPdfSearchModel_RemoveColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent);
void QPdfSearchModel_OnRemoveColumns(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseRemoveColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent);
bool QPdfSearchModel_MoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfSearchModel_OnMoveRows(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QPdfSearchModel_MoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfSearchModel_OnMoveColumns(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfSearchModel_FetchMore(QPdfSearchModel* self, const QModelIndex* parent);
void QPdfSearchModel_OnFetchMore(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseFetchMore(QPdfSearchModel* self, const QModelIndex* parent);
bool QPdfSearchModel_CanFetchMore(const QPdfSearchModel* self, const QModelIndex* parent);
void QPdfSearchModel_OnCanFetchMore(const QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseCanFetchMore(const QPdfSearchModel* self, const QModelIndex* parent);
void QPdfSearchModel_Sort(QPdfSearchModel* self, int column, int order);
void QPdfSearchModel_OnSort(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseSort(QPdfSearchModel* self, int column, int order);
QModelIndex* QPdfSearchModel_Buddy(const QPdfSearchModel* self, const QModelIndex* index);
void QPdfSearchModel_OnBuddy(const QPdfSearchModel* self, intptr_t slot);
QModelIndex* QPdfSearchModel_QBaseBuddy(const QPdfSearchModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QPdfSearchModel_Match(const QPdfSearchModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QPdfSearchModel_OnMatch(const QPdfSearchModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfSearchModel_QBaseMatch(const QPdfSearchModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QPdfSearchModel_Span(const QPdfSearchModel* self, const QModelIndex* index);
void QPdfSearchModel_OnSpan(const QPdfSearchModel* self, intptr_t slot);
QSize* QPdfSearchModel_QBaseSpan(const QPdfSearchModel* self, const QModelIndex* index);
void QPdfSearchModel_MultiData(const QPdfSearchModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QPdfSearchModel_OnMultiData(const QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseMultiData(const QPdfSearchModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QPdfSearchModel_Submit(QPdfSearchModel* self);
void QPdfSearchModel_OnSubmit(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseSubmit(QPdfSearchModel* self);
void QPdfSearchModel_Revert(QPdfSearchModel* self);
void QPdfSearchModel_OnRevert(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseRevert(QPdfSearchModel* self);
void QPdfSearchModel_ResetInternalData(QPdfSearchModel* self);
void QPdfSearchModel_OnResetInternalData(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseResetInternalData(QPdfSearchModel* self);
bool QPdfSearchModel_Event(QPdfSearchModel* self, QEvent* event);
void QPdfSearchModel_OnEvent(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseEvent(QPdfSearchModel* self, QEvent* event);
bool QPdfSearchModel_EventFilter(QPdfSearchModel* self, QObject* watched, QEvent* event);
void QPdfSearchModel_OnEventFilter(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseEventFilter(QPdfSearchModel* self, QObject* watched, QEvent* event);
void QPdfSearchModel_ChildEvent(QPdfSearchModel* self, QChildEvent* event);
void QPdfSearchModel_OnChildEvent(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseChildEvent(QPdfSearchModel* self, QChildEvent* event);
void QPdfSearchModel_CustomEvent(QPdfSearchModel* self, QEvent* event);
void QPdfSearchModel_OnCustomEvent(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseCustomEvent(QPdfSearchModel* self, QEvent* event);
void QPdfSearchModel_ConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
void QPdfSearchModel_OnConnectNotify(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
void QPdfSearchModel_DisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
void QPdfSearchModel_OnDisconnectNotify(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseDisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
void QPdfSearchModel_UpdatePage(QPdfSearchModel* self, int page);
void QPdfSearchModel_OnUpdatePage(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseUpdatePage(QPdfSearchModel* self, int page);
QModelIndex* QPdfSearchModel_CreateIndex(const QPdfSearchModel* self, int row, int column);
void QPdfSearchModel_OnCreateIndex(const QPdfSearchModel* self, intptr_t slot);
QModelIndex* QPdfSearchModel_QBaseCreateIndex(const QPdfSearchModel* self, int row, int column);
void QPdfSearchModel_EncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QPdfSearchModel_OnEncodeData(const QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QPdfSearchModel_DecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfSearchModel_OnDecodeData(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseDecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfSearchModel_BeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_OnBeginInsertRows(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseBeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_EndInsertRows(QPdfSearchModel* self);
void QPdfSearchModel_OnEndInsertRows(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndInsertRows(QPdfSearchModel* self);
void QPdfSearchModel_BeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_OnBeginRemoveRows(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseBeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_EndRemoveRows(QPdfSearchModel* self);
void QPdfSearchModel_OnEndRemoveRows(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndRemoveRows(QPdfSearchModel* self);
bool QPdfSearchModel_BeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfSearchModel_OnBeginMoveRows(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseBeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfSearchModel_EndMoveRows(QPdfSearchModel* self);
void QPdfSearchModel_OnEndMoveRows(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndMoveRows(QPdfSearchModel* self);
void QPdfSearchModel_BeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_OnBeginInsertColumns(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseBeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_EndInsertColumns(QPdfSearchModel* self);
void QPdfSearchModel_OnEndInsertColumns(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndInsertColumns(QPdfSearchModel* self);
void QPdfSearchModel_BeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_OnBeginRemoveColumns(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseBeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
void QPdfSearchModel_EndRemoveColumns(QPdfSearchModel* self);
void QPdfSearchModel_OnEndRemoveColumns(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndRemoveColumns(QPdfSearchModel* self);
bool QPdfSearchModel_BeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfSearchModel_OnBeginMoveColumns(QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseBeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfSearchModel_EndMoveColumns(QPdfSearchModel* self);
void QPdfSearchModel_OnEndMoveColumns(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndMoveColumns(QPdfSearchModel* self);
void QPdfSearchModel_BeginResetModel(QPdfSearchModel* self);
void QPdfSearchModel_OnBeginResetModel(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseBeginResetModel(QPdfSearchModel* self);
void QPdfSearchModel_EndResetModel(QPdfSearchModel* self);
void QPdfSearchModel_OnEndResetModel(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseEndResetModel(QPdfSearchModel* self);
void QPdfSearchModel_ChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfSearchModel_OnChangePersistentIndex(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfSearchModel_ChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void QPdfSearchModel_OnChangePersistentIndexList(QPdfSearchModel* self, intptr_t slot);
void QPdfSearchModel_QBaseChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QPdfSearchModel_PersistentIndexList(const QPdfSearchModel* self);
void QPdfSearchModel_OnPersistentIndexList(const QPdfSearchModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfSearchModel_QBasePersistentIndexList(const QPdfSearchModel* self);
QObject* QPdfSearchModel_Sender(const QPdfSearchModel* self);
void QPdfSearchModel_OnSender(const QPdfSearchModel* self, intptr_t slot);
QObject* QPdfSearchModel_QBaseSender(const QPdfSearchModel* self);
int QPdfSearchModel_SenderSignalIndex(const QPdfSearchModel* self);
void QPdfSearchModel_OnSenderSignalIndex(const QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseSenderSignalIndex(const QPdfSearchModel* self);
int QPdfSearchModel_Receivers(const QPdfSearchModel* self, const char* signal);
void QPdfSearchModel_OnReceivers(const QPdfSearchModel* self, intptr_t slot);
int QPdfSearchModel_QBaseReceivers(const QPdfSearchModel* self, const char* signal);
bool QPdfSearchModel_IsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal);
void QPdfSearchModel_OnIsSignalConnected(const QPdfSearchModel* self, intptr_t slot);
bool QPdfSearchModel_QBaseIsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal);
void QPdfSearchModel_Delete(QPdfSearchModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
