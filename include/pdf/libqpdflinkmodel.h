#pragma once
#ifndef SRC_PDFC_LIBQPDFLINKMODEL_H
#define SRC_PDFC_LIBQPDFLINKMODEL_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QPdfLinkModel QPdfLinkModel;
typedef struct QPointF QPointF;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfLinkModel* QPdfLinkModel_new();
QPdfLinkModel* QPdfLinkModel_new2(QObject* parent);
QMetaObject* QPdfLinkModel_MetaObject(const QPdfLinkModel* self);
void* QPdfLinkModel_Metacast(QPdfLinkModel* self, const char* param1);
int QPdfLinkModel_Metacall(QPdfLinkModel* self, int param1, int param2, void** param3);
void QPdfLinkModel_OnMetacall(QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseMetacall(QPdfLinkModel* self, int param1, int param2, void** param3);
libqt_string QPdfLinkModel_Tr(const char* s);
QPdfDocument* QPdfLinkModel_Document(const QPdfLinkModel* self);
libqt_map /* of int to libqt_string */ QPdfLinkModel_RoleNames(const QPdfLinkModel* self);
void QPdfLinkModel_OnRoleNames(const QPdfLinkModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QPdfLinkModel_QBaseRoleNames(const QPdfLinkModel* self);
int QPdfLinkModel_RowCount(const QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_OnRowCount(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseRowCount(const QPdfLinkModel* self, const QModelIndex* parent);
QVariant* QPdfLinkModel_Data(const QPdfLinkModel* self, const QModelIndex* index, int role);
void QPdfLinkModel_OnData(const QPdfLinkModel* self, intptr_t slot);
QVariant* QPdfLinkModel_QBaseData(const QPdfLinkModel* self, const QModelIndex* index, int role);
int QPdfLinkModel_Page(const QPdfLinkModel* self);
QPdfLink* QPdfLinkModel_LinkAt(const QPdfLinkModel* self, QPointF* point);
void QPdfLinkModel_SetDocument(QPdfLinkModel* self, QPdfDocument* document);
void QPdfLinkModel_SetPage(QPdfLinkModel* self, int page);
void QPdfLinkModel_DocumentChanged(QPdfLinkModel* self);
void QPdfLinkModel_Connect_DocumentChanged(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_PageChanged(QPdfLinkModel* self, int page);
void QPdfLinkModel_Connect_PageChanged(QPdfLinkModel* self, intptr_t slot);
libqt_string QPdfLinkModel_Tr2(const char* s, const char* c);
libqt_string QPdfLinkModel_Tr3(const char* s, const char* c, int n);
QModelIndex* QPdfLinkModel_Index(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent);
void QPdfLinkModel_OnIndex(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_QBaseIndex(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QPdfLinkModel_Sibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx);
void QPdfLinkModel_OnSibling(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_QBaseSibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx);
bool QPdfLinkModel_DropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfLinkModel_OnDropMimeData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseDropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfLinkModel_Flags(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnFlags(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseFlags(const QPdfLinkModel* self, const QModelIndex* index);
bool QPdfLinkModel_SetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role);
void QPdfLinkModel_OnSetData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseSetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* QPdfLinkModel_HeaderData(const QPdfLinkModel* self, int section, int orientation, int role);
void QPdfLinkModel_OnHeaderData(const QPdfLinkModel* self, intptr_t slot);
QVariant* QPdfLinkModel_QBaseHeaderData(const QPdfLinkModel* self, int section, int orientation, int role);
bool QPdfLinkModel_SetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role);
void QPdfLinkModel_OnSetHeaderData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseSetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ QPdfLinkModel_ItemData(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnItemData(const QPdfLinkModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QPdfLinkModel_QBaseItemData(const QPdfLinkModel* self, const QModelIndex* index);
bool QPdfLinkModel_SetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QPdfLinkModel_OnSetItemData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseSetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QPdfLinkModel_ClearItemData(QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnClearItemData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseClearItemData(QPdfLinkModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ QPdfLinkModel_MimeTypes(const QPdfLinkModel* self);
void QPdfLinkModel_OnMimeTypes(const QPdfLinkModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QPdfLinkModel_QBaseMimeTypes(const QPdfLinkModel* self);
QMimeData* QPdfLinkModel_MimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QPdfLinkModel_OnMimeData(const QPdfLinkModel* self, intptr_t slot);
QMimeData* QPdfLinkModel_QBaseMimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QPdfLinkModel_CanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfLinkModel_OnCanDropMimeData(const QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseCanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfLinkModel_SupportedDropActions(const QPdfLinkModel* self);
void QPdfLinkModel_OnSupportedDropActions(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseSupportedDropActions(const QPdfLinkModel* self);
int QPdfLinkModel_SupportedDragActions(const QPdfLinkModel* self);
void QPdfLinkModel_OnSupportedDragActions(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseSupportedDragActions(const QPdfLinkModel* self);
bool QPdfLinkModel_InsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
void QPdfLinkModel_OnInsertRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseInsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
bool QPdfLinkModel_InsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
void QPdfLinkModel_OnInsertColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseInsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
bool QPdfLinkModel_RemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
void QPdfLinkModel_OnRemoveRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseRemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
bool QPdfLinkModel_RemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
void QPdfLinkModel_OnRemoveColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseRemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
bool QPdfLinkModel_MoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfLinkModel_OnMoveRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QPdfLinkModel_MoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfLinkModel_OnMoveColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfLinkModel_FetchMore(QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_OnFetchMore(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseFetchMore(QPdfLinkModel* self, const QModelIndex* parent);
bool QPdfLinkModel_CanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_OnCanFetchMore(const QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseCanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_Sort(QPdfLinkModel* self, int column, int order);
void QPdfLinkModel_OnSort(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseSort(QPdfLinkModel* self, int column, int order);
QModelIndex* QPdfLinkModel_Buddy(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnBuddy(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_QBaseBuddy(const QPdfLinkModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QPdfLinkModel_Match(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QPdfLinkModel_OnMatch(const QPdfLinkModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfLinkModel_QBaseMatch(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QPdfLinkModel_Span(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnSpan(const QPdfLinkModel* self, intptr_t slot);
QSize* QPdfLinkModel_QBaseSpan(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_MultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QPdfLinkModel_OnMultiData(const QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseMultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QPdfLinkModel_Submit(QPdfLinkModel* self);
void QPdfLinkModel_OnSubmit(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseSubmit(QPdfLinkModel* self);
void QPdfLinkModel_Revert(QPdfLinkModel* self);
void QPdfLinkModel_OnRevert(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseRevert(QPdfLinkModel* self);
void QPdfLinkModel_ResetInternalData(QPdfLinkModel* self);
void QPdfLinkModel_OnResetInternalData(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseResetInternalData(QPdfLinkModel* self);
bool QPdfLinkModel_Event(QPdfLinkModel* self, QEvent* event);
void QPdfLinkModel_OnEvent(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseEvent(QPdfLinkModel* self, QEvent* event);
bool QPdfLinkModel_EventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event);
void QPdfLinkModel_OnEventFilter(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseEventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event);
void QPdfLinkModel_TimerEvent(QPdfLinkModel* self, QTimerEvent* event);
void QPdfLinkModel_OnTimerEvent(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseTimerEvent(QPdfLinkModel* self, QTimerEvent* event);
void QPdfLinkModel_ChildEvent(QPdfLinkModel* self, QChildEvent* event);
void QPdfLinkModel_OnChildEvent(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseChildEvent(QPdfLinkModel* self, QChildEvent* event);
void QPdfLinkModel_CustomEvent(QPdfLinkModel* self, QEvent* event);
void QPdfLinkModel_OnCustomEvent(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseCustomEvent(QPdfLinkModel* self, QEvent* event);
void QPdfLinkModel_ConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_OnConnectNotify(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_DisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_OnDisconnectNotify(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseDisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
QModelIndex* QPdfLinkModel_CreateIndex(const QPdfLinkModel* self, int row, int column);
void QPdfLinkModel_OnCreateIndex(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_QBaseCreateIndex(const QPdfLinkModel* self, int row, int column);
void QPdfLinkModel_EncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QPdfLinkModel_OnEncodeData(const QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QPdfLinkModel_DecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfLinkModel_OnDecodeData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseDecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfLinkModel_BeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginInsertRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseBeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndInsertRows(QPdfLinkModel* self);
void QPdfLinkModel_OnEndInsertRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndInsertRows(QPdfLinkModel* self);
void QPdfLinkModel_BeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginRemoveRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseBeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndRemoveRows(QPdfLinkModel* self);
void QPdfLinkModel_OnEndRemoveRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndRemoveRows(QPdfLinkModel* self);
bool QPdfLinkModel_BeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfLinkModel_OnBeginMoveRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseBeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfLinkModel_EndMoveRows(QPdfLinkModel* self);
void QPdfLinkModel_OnEndMoveRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndMoveRows(QPdfLinkModel* self);
void QPdfLinkModel_BeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginInsertColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseBeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndInsertColumns(QPdfLinkModel* self);
void QPdfLinkModel_OnEndInsertColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndInsertColumns(QPdfLinkModel* self);
void QPdfLinkModel_BeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginRemoveColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseBeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndRemoveColumns(QPdfLinkModel* self);
void QPdfLinkModel_OnEndRemoveColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndRemoveColumns(QPdfLinkModel* self);
bool QPdfLinkModel_BeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfLinkModel_OnBeginMoveColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseBeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfLinkModel_EndMoveColumns(QPdfLinkModel* self);
void QPdfLinkModel_OnEndMoveColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndMoveColumns(QPdfLinkModel* self);
void QPdfLinkModel_BeginResetModel(QPdfLinkModel* self);
void QPdfLinkModel_OnBeginResetModel(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseBeginResetModel(QPdfLinkModel* self);
void QPdfLinkModel_EndResetModel(QPdfLinkModel* self);
void QPdfLinkModel_OnEndResetModel(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseEndResetModel(QPdfLinkModel* self);
void QPdfLinkModel_ChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfLinkModel_OnChangePersistentIndex(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfLinkModel_ChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void QPdfLinkModel_OnChangePersistentIndexList(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_QBaseChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QPdfLinkModel_PersistentIndexList(const QPdfLinkModel* self);
void QPdfLinkModel_OnPersistentIndexList(const QPdfLinkModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfLinkModel_QBasePersistentIndexList(const QPdfLinkModel* self);
QObject* QPdfLinkModel_Sender(const QPdfLinkModel* self);
void QPdfLinkModel_OnSender(const QPdfLinkModel* self, intptr_t slot);
QObject* QPdfLinkModel_QBaseSender(const QPdfLinkModel* self);
int QPdfLinkModel_SenderSignalIndex(const QPdfLinkModel* self);
void QPdfLinkModel_OnSenderSignalIndex(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseSenderSignalIndex(const QPdfLinkModel* self);
int QPdfLinkModel_Receivers(const QPdfLinkModel* self, const char* signal);
void QPdfLinkModel_OnReceivers(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_QBaseReceivers(const QPdfLinkModel* self, const char* signal);
bool QPdfLinkModel_IsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_OnIsSignalConnected(const QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_QBaseIsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_Delete(QPdfLinkModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
