#pragma once
#ifndef SRC_SQLC_LIBQSQLQUERYMODEL_H
#define SRC_SQLC_LIBQSQLQUERYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t)
typedef Qt::Disambiguated_t Disambiguated_t;
#endif
#else
typedef struct Disambiguated_t Disambiguated_t;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractTableModel QAbstractTableModel;
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
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlError QSqlError;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlQueryModel QSqlQueryModel;
typedef struct QSqlRecord QSqlRecord;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSqlQueryModel* QSqlQueryModel_new();
QSqlQueryModel* QSqlQueryModel_new2(QObject* parent);
QMetaObject* QSqlQueryModel_MetaObject(const QSqlQueryModel* self);
void* QSqlQueryModel_Metacast(QSqlQueryModel* self, const char* param1);
int QSqlQueryModel_Metacall(QSqlQueryModel* self, int param1, int param2, void** param3);
libqt_string QSqlQueryModel_Tr(const char* s);
int QSqlQueryModel_RowCount(const QSqlQueryModel* self, const QModelIndex* parent);
int QSqlQueryModel_ColumnCount(const QSqlQueryModel* self, const QModelIndex* parent);
QSqlRecord* QSqlQueryModel_Record(const QSqlQueryModel* self, int row);
QSqlRecord* QSqlQueryModel_Record2(const QSqlQueryModel* self);
QVariant* QSqlQueryModel_Data(const QSqlQueryModel* self, const QModelIndex* item, int role);
QVariant* QSqlQueryModel_HeaderData(const QSqlQueryModel* self, int section, int orientation, int role);
bool QSqlQueryModel_SetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role);
bool QSqlQueryModel_InsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
bool QSqlQueryModel_RemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
void QSqlQueryModel_SetQuery(QSqlQueryModel* self, const QSqlQuery* query);
void QSqlQueryModel_SetQuery2(QSqlQueryModel* self, const libqt_string query);
QSqlQuery* QSqlQueryModel_Query(const QSqlQueryModel* self);
void QSqlQueryModel_Clear(QSqlQueryModel* self);
QSqlError* QSqlQueryModel_LastError(const QSqlQueryModel* self);
void QSqlQueryModel_FetchMore(QSqlQueryModel* self, const QModelIndex* parent);
bool QSqlQueryModel_CanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent);
libqt_map /* of int to libqt_string */ QSqlQueryModel_RoleNames(const QSqlQueryModel* self);
void QSqlQueryModel_QueryChange(QSqlQueryModel* self);
QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
libqt_string QSqlQueryModel_Tr2(const char* s, const char* c);
libqt_string QSqlQueryModel_Tr3(const char* s, const char* c, int n);
void QSqlQueryModel_SetQuery22(QSqlQueryModel* self, const libqt_string query, const QSqlDatabase* db);
QSqlQuery* QSqlQueryModel_Query1(const QSqlQueryModel* self, Disambiguated_t* param1);
void QSqlQueryModel_OnMetacall(QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseMetacall(QSqlQueryModel* self, int param1, int param2, void** param3);
void QSqlQueryModel_OnRowCount(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseRowCount(const QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnColumnCount(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseColumnCount(const QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnData(const QSqlQueryModel* self, intptr_t slot);
QVariant* QSqlQueryModel_QBaseData(const QSqlQueryModel* self, const QModelIndex* item, int role);
void QSqlQueryModel_OnHeaderData(const QSqlQueryModel* self, intptr_t slot);
QVariant* QSqlQueryModel_QBaseHeaderData(const QSqlQueryModel* self, int section, int orientation, int role);
void QSqlQueryModel_OnSetHeaderData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseSetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role);
void QSqlQueryModel_OnInsertColumns(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseInsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
void QSqlQueryModel_OnRemoveColumns(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseRemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
void QSqlQueryModel_OnClear(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseClear(QSqlQueryModel* self);
void QSqlQueryModel_OnFetchMore(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseFetchMore(QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnCanFetchMore(const QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseCanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnRoleNames(const QSqlQueryModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QSqlQueryModel_QBaseRoleNames(const QSqlQueryModel* self);
void QSqlQueryModel_OnQueryChange(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseQueryChange(QSqlQueryModel* self);
void QSqlQueryModel_OnIndexInQuery(const QSqlQueryModel* self, intptr_t slot);
QModelIndex* QSqlQueryModel_QBaseIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
QModelIndex* QSqlQueryModel_Index(const QSqlQueryModel* self, int row, int column, const QModelIndex* parent);
void QSqlQueryModel_OnIndex(const QSqlQueryModel* self, intptr_t slot);
QModelIndex* QSqlQueryModel_QBaseIndex(const QSqlQueryModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QSqlQueryModel_Sibling(const QSqlQueryModel* self, int row, int column, const QModelIndex* idx);
void QSqlQueryModel_OnSibling(const QSqlQueryModel* self, intptr_t slot);
QModelIndex* QSqlQueryModel_QBaseSibling(const QSqlQueryModel* self, int row, int column, const QModelIndex* idx);
bool QSqlQueryModel_DropMimeData(QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QSqlQueryModel_OnDropMimeData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseDropMimeData(QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QSqlQueryModel_Flags(const QSqlQueryModel* self, const QModelIndex* index);
void QSqlQueryModel_OnFlags(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseFlags(const QSqlQueryModel* self, const QModelIndex* index);
bool QSqlQueryModel_SetData(QSqlQueryModel* self, const QModelIndex* index, const QVariant* value, int role);
void QSqlQueryModel_OnSetData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseSetData(QSqlQueryModel* self, const QModelIndex* index, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ QSqlQueryModel_ItemData(const QSqlQueryModel* self, const QModelIndex* index);
void QSqlQueryModel_OnItemData(const QSqlQueryModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QSqlQueryModel_QBaseItemData(const QSqlQueryModel* self, const QModelIndex* index);
bool QSqlQueryModel_SetItemData(QSqlQueryModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QSqlQueryModel_OnSetItemData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseSetItemData(QSqlQueryModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QSqlQueryModel_ClearItemData(QSqlQueryModel* self, const QModelIndex* index);
void QSqlQueryModel_OnClearItemData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseClearItemData(QSqlQueryModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ QSqlQueryModel_MimeTypes(const QSqlQueryModel* self);
void QSqlQueryModel_OnMimeTypes(const QSqlQueryModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QSqlQueryModel_QBaseMimeTypes(const QSqlQueryModel* self);
QMimeData* QSqlQueryModel_MimeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QSqlQueryModel_OnMimeData(const QSqlQueryModel* self, intptr_t slot);
QMimeData* QSqlQueryModel_QBaseMimeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QSqlQueryModel_CanDropMimeData(const QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QSqlQueryModel_OnCanDropMimeData(const QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseCanDropMimeData(const QSqlQueryModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QSqlQueryModel_SupportedDropActions(const QSqlQueryModel* self);
void QSqlQueryModel_OnSupportedDropActions(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseSupportedDropActions(const QSqlQueryModel* self);
int QSqlQueryModel_SupportedDragActions(const QSqlQueryModel* self);
void QSqlQueryModel_OnSupportedDragActions(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseSupportedDragActions(const QSqlQueryModel* self);
bool QSqlQueryModel_InsertRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent);
void QSqlQueryModel_OnInsertRows(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseInsertRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent);
bool QSqlQueryModel_RemoveRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent);
void QSqlQueryModel_OnRemoveRows(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseRemoveRows(QSqlQueryModel* self, int row, int count, const QModelIndex* parent);
bool QSqlQueryModel_MoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QSqlQueryModel_OnMoveRows(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QSqlQueryModel_MoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QSqlQueryModel_OnMoveColumns(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QSqlQueryModel_Sort(QSqlQueryModel* self, int column, int order);
void QSqlQueryModel_OnSort(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseSort(QSqlQueryModel* self, int column, int order);
QModelIndex* QSqlQueryModel_Buddy(const QSqlQueryModel* self, const QModelIndex* index);
void QSqlQueryModel_OnBuddy(const QSqlQueryModel* self, intptr_t slot);
QModelIndex* QSqlQueryModel_QBaseBuddy(const QSqlQueryModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QSqlQueryModel_Match(const QSqlQueryModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QSqlQueryModel_OnMatch(const QSqlQueryModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QSqlQueryModel_QBaseMatch(const QSqlQueryModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QSqlQueryModel_Span(const QSqlQueryModel* self, const QModelIndex* index);
void QSqlQueryModel_OnSpan(const QSqlQueryModel* self, intptr_t slot);
QSize* QSqlQueryModel_QBaseSpan(const QSqlQueryModel* self, const QModelIndex* index);
void QSqlQueryModel_MultiData(const QSqlQueryModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QSqlQueryModel_OnMultiData(const QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseMultiData(const QSqlQueryModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QSqlQueryModel_Submit(QSqlQueryModel* self);
void QSqlQueryModel_OnSubmit(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseSubmit(QSqlQueryModel* self);
void QSqlQueryModel_Revert(QSqlQueryModel* self);
void QSqlQueryModel_OnRevert(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseRevert(QSqlQueryModel* self);
void QSqlQueryModel_ResetInternalData(QSqlQueryModel* self);
void QSqlQueryModel_OnResetInternalData(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseResetInternalData(QSqlQueryModel* self);
bool QSqlQueryModel_Event(QSqlQueryModel* self, QEvent* event);
void QSqlQueryModel_OnEvent(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseEvent(QSqlQueryModel* self, QEvent* event);
bool QSqlQueryModel_EventFilter(QSqlQueryModel* self, QObject* watched, QEvent* event);
void QSqlQueryModel_OnEventFilter(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseEventFilter(QSqlQueryModel* self, QObject* watched, QEvent* event);
void QSqlQueryModel_TimerEvent(QSqlQueryModel* self, QTimerEvent* event);
void QSqlQueryModel_OnTimerEvent(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseTimerEvent(QSqlQueryModel* self, QTimerEvent* event);
void QSqlQueryModel_ChildEvent(QSqlQueryModel* self, QChildEvent* event);
void QSqlQueryModel_OnChildEvent(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseChildEvent(QSqlQueryModel* self, QChildEvent* event);
void QSqlQueryModel_CustomEvent(QSqlQueryModel* self, QEvent* event);
void QSqlQueryModel_OnCustomEvent(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseCustomEvent(QSqlQueryModel* self, QEvent* event);
void QSqlQueryModel_ConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
void QSqlQueryModel_OnConnectNotify(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
void QSqlQueryModel_DisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
void QSqlQueryModel_OnDisconnectNotify(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseDisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginInsertRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self);
void QSqlQueryModel_OnEndInsertRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndInsertRows(QSqlQueryModel* self);
void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginRemoveRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self);
void QSqlQueryModel_OnEndRemoveRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndRemoveRows(QSqlQueryModel* self);
void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginInsertColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self);
void QSqlQueryModel_OnEndInsertColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndInsertColumns(QSqlQueryModel* self);
void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginRemoveColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self);
void QSqlQueryModel_OnEndRemoveColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndRemoveColumns(QSqlQueryModel* self);
void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self);
void QSqlQueryModel_OnBeginResetModel(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginResetModel(QSqlQueryModel* self);
void QSqlQueryModel_EndResetModel(QSqlQueryModel* self);
void QSqlQueryModel_OnEndResetModel(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndResetModel(QSqlQueryModel* self);
void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
void QSqlQueryModel_OnSetLastError(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseSetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
QModelIndex* QSqlQueryModel_CreateIndex(const QSqlQueryModel* self, int row, int column);
void QSqlQueryModel_OnCreateIndex(const QSqlQueryModel* self, intptr_t slot);
QModelIndex* QSqlQueryModel_QBaseCreateIndex(const QSqlQueryModel* self, int row, int column);
void QSqlQueryModel_EncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QSqlQueryModel_OnEncodeData(const QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QSqlQueryModel_DecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QSqlQueryModel_OnDecodeData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseDecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
bool QSqlQueryModel_BeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QSqlQueryModel_OnBeginMoveRows(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseBeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QSqlQueryModel_EndMoveRows(QSqlQueryModel* self);
void QSqlQueryModel_OnEndMoveRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndMoveRows(QSqlQueryModel* self);
bool QSqlQueryModel_BeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QSqlQueryModel_OnBeginMoveColumns(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseBeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QSqlQueryModel_EndMoveColumns(QSqlQueryModel* self);
void QSqlQueryModel_OnEndMoveColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndMoveColumns(QSqlQueryModel* self);
void QSqlQueryModel_ChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to);
void QSqlQueryModel_OnChangePersistentIndex(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to);
void QSqlQueryModel_ChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void QSqlQueryModel_OnChangePersistentIndexList(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QSqlQueryModel_PersistentIndexList(const QSqlQueryModel* self);
void QSqlQueryModel_OnPersistentIndexList(const QSqlQueryModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QSqlQueryModel_QBasePersistentIndexList(const QSqlQueryModel* self);
QObject* QSqlQueryModel_Sender(const QSqlQueryModel* self);
void QSqlQueryModel_OnSender(const QSqlQueryModel* self, intptr_t slot);
QObject* QSqlQueryModel_QBaseSender(const QSqlQueryModel* self);
int QSqlQueryModel_SenderSignalIndex(const QSqlQueryModel* self);
void QSqlQueryModel_OnSenderSignalIndex(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseSenderSignalIndex(const QSqlQueryModel* self);
int QSqlQueryModel_Receivers(const QSqlQueryModel* self, const char* signal);
void QSqlQueryModel_OnReceivers(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseReceivers(const QSqlQueryModel* self, const char* signal);
bool QSqlQueryModel_IsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal);
void QSqlQueryModel_OnIsSignalConnected(const QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseIsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal);
void QSqlQueryModel_Delete(QSqlQueryModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
