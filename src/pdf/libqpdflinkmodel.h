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
QPdfDocument* QPdfLinkModel_Document(const QPdfLinkModel* self);
libqt_map /* of int to libqt_string */ QPdfLinkModel_RoleNames(const QPdfLinkModel* self);
int QPdfLinkModel_RowCount(const QPdfLinkModel* self, const QModelIndex* parent);
QVariant* QPdfLinkModel_Data(const QPdfLinkModel* self, const QModelIndex* index, int role);
int QPdfLinkModel_Page(const QPdfLinkModel* self);
QPdfLink* QPdfLinkModel_LinkAt(const QPdfLinkModel* self, QPointF* point);
void QPdfLinkModel_SetDocument(QPdfLinkModel* self, QPdfDocument* document);
void QPdfLinkModel_SetPage(QPdfLinkModel* self, int page);
void QPdfLinkModel_DocumentChanged(QPdfLinkModel* self);
void QPdfLinkModel_Connect_DocumentChanged(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_PageChanged(QPdfLinkModel* self, int page);
void QPdfLinkModel_Connect_PageChanged(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_OnMetaObject(const QPdfLinkModel* self, intptr_t slot);
QMetaObject* QPdfLinkModel_SuperMetaObject(const QPdfLinkModel* self);
void QPdfLinkModel_OnMetacast(QPdfLinkModel* self, intptr_t slot);
void* QPdfLinkModel_SuperMetacast(QPdfLinkModel* self, const char* param1);
void QPdfLinkModel_OnMetacall(QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperMetacall(QPdfLinkModel* self, int param1, int param2, void** param3);
void QPdfLinkModel_OnRoleNames(const QPdfLinkModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QPdfLinkModel_SuperRoleNames(const QPdfLinkModel* self);
void QPdfLinkModel_OnRowCount(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperRowCount(const QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_OnData(const QPdfLinkModel* self, intptr_t slot);
QVariant* QPdfLinkModel_SuperData(const QPdfLinkModel* self, const QModelIndex* index, int role);
QModelIndex* QPdfLinkModel_Index(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent);
void QPdfLinkModel_OnIndex(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_SuperIndex(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QPdfLinkModel_Sibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx);
void QPdfLinkModel_OnSibling(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_SuperSibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx);
bool QPdfLinkModel_DropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfLinkModel_OnDropMimeData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperDropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfLinkModel_Flags(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnFlags(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperFlags(const QPdfLinkModel* self, const QModelIndex* index);
bool QPdfLinkModel_SetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role);
void QPdfLinkModel_OnSetData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperSetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* QPdfLinkModel_HeaderData(const QPdfLinkModel* self, int section, int orientation, int role);
void QPdfLinkModel_OnHeaderData(const QPdfLinkModel* self, intptr_t slot);
QVariant* QPdfLinkModel_SuperHeaderData(const QPdfLinkModel* self, int section, int orientation, int role);
bool QPdfLinkModel_SetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role);
void QPdfLinkModel_OnSetHeaderData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperSetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ QPdfLinkModel_ItemData(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnItemData(const QPdfLinkModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QPdfLinkModel_SuperItemData(const QPdfLinkModel* self, const QModelIndex* index);
bool QPdfLinkModel_SetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QPdfLinkModel_OnSetItemData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperSetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QPdfLinkModel_ClearItemData(QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnClearItemData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperClearItemData(QPdfLinkModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ QPdfLinkModel_MimeTypes(const QPdfLinkModel* self);
void QPdfLinkModel_OnMimeTypes(const QPdfLinkModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QPdfLinkModel_SuperMimeTypes(const QPdfLinkModel* self);
QMimeData* QPdfLinkModel_MimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QPdfLinkModel_OnMimeData(const QPdfLinkModel* self, intptr_t slot);
QMimeData* QPdfLinkModel_SuperMimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QPdfLinkModel_CanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfLinkModel_OnCanDropMimeData(const QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperCanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfLinkModel_SupportedDropActions(const QPdfLinkModel* self);
void QPdfLinkModel_OnSupportedDropActions(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperSupportedDropActions(const QPdfLinkModel* self);
int QPdfLinkModel_SupportedDragActions(const QPdfLinkModel* self);
void QPdfLinkModel_OnSupportedDragActions(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperSupportedDragActions(const QPdfLinkModel* self);
bool QPdfLinkModel_InsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
void QPdfLinkModel_OnInsertRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperInsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
bool QPdfLinkModel_InsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
void QPdfLinkModel_OnInsertColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperInsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
bool QPdfLinkModel_RemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
void QPdfLinkModel_OnRemoveRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperRemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent);
bool QPdfLinkModel_RemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
void QPdfLinkModel_OnRemoveColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperRemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent);
bool QPdfLinkModel_MoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfLinkModel_OnMoveRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QPdfLinkModel_MoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfLinkModel_OnMoveColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfLinkModel_FetchMore(QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_OnFetchMore(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperFetchMore(QPdfLinkModel* self, const QModelIndex* parent);
bool QPdfLinkModel_CanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_OnCanFetchMore(const QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperCanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent);
void QPdfLinkModel_Sort(QPdfLinkModel* self, int column, int order);
void QPdfLinkModel_OnSort(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperSort(QPdfLinkModel* self, int column, int order);
QModelIndex* QPdfLinkModel_Buddy(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnBuddy(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_SuperBuddy(const QPdfLinkModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QPdfLinkModel_Match(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QPdfLinkModel_OnMatch(const QPdfLinkModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfLinkModel_SuperMatch(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QPdfLinkModel_Span(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_OnSpan(const QPdfLinkModel* self, intptr_t slot);
QSize* QPdfLinkModel_SuperSpan(const QPdfLinkModel* self, const QModelIndex* index);
void QPdfLinkModel_MultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QPdfLinkModel_OnMultiData(const QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperMultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QPdfLinkModel_Submit(QPdfLinkModel* self);
void QPdfLinkModel_OnSubmit(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperSubmit(QPdfLinkModel* self);
void QPdfLinkModel_Revert(QPdfLinkModel* self);
void QPdfLinkModel_OnRevert(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperRevert(QPdfLinkModel* self);
void QPdfLinkModel_ResetInternalData(QPdfLinkModel* self);
void QPdfLinkModel_OnResetInternalData(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperResetInternalData(QPdfLinkModel* self);
bool QPdfLinkModel_Event(QPdfLinkModel* self, QEvent* event);
void QPdfLinkModel_OnEvent(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperEvent(QPdfLinkModel* self, QEvent* event);
bool QPdfLinkModel_EventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event);
void QPdfLinkModel_OnEventFilter(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperEventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event);
void QPdfLinkModel_TimerEvent(QPdfLinkModel* self, QTimerEvent* event);
void QPdfLinkModel_OnTimerEvent(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperTimerEvent(QPdfLinkModel* self, QTimerEvent* event);
void QPdfLinkModel_ChildEvent(QPdfLinkModel* self, QChildEvent* event);
void QPdfLinkModel_OnChildEvent(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperChildEvent(QPdfLinkModel* self, QChildEvent* event);
void QPdfLinkModel_CustomEvent(QPdfLinkModel* self, QEvent* event);
void QPdfLinkModel_OnCustomEvent(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperCustomEvent(QPdfLinkModel* self, QEvent* event);
void QPdfLinkModel_ConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_OnConnectNotify(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_DisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_OnDisconnectNotify(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperDisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
QModelIndex* QPdfLinkModel_CreateIndex(const QPdfLinkModel* self, int row, int column);
void QPdfLinkModel_OnCreateIndex(const QPdfLinkModel* self, intptr_t slot);
QModelIndex* QPdfLinkModel_SuperCreateIndex(const QPdfLinkModel* self, int row, int column);
void QPdfLinkModel_EncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QPdfLinkModel_OnEncodeData(const QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QPdfLinkModel_DecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfLinkModel_OnDecodeData(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperDecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfLinkModel_BeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginInsertRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperBeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndInsertRows(QPdfLinkModel* self);
void QPdfLinkModel_OnEndInsertRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndInsertRows(QPdfLinkModel* self);
void QPdfLinkModel_BeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginRemoveRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperBeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndRemoveRows(QPdfLinkModel* self);
void QPdfLinkModel_OnEndRemoveRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndRemoveRows(QPdfLinkModel* self);
bool QPdfLinkModel_BeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfLinkModel_OnBeginMoveRows(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperBeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfLinkModel_EndMoveRows(QPdfLinkModel* self);
void QPdfLinkModel_OnEndMoveRows(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndMoveRows(QPdfLinkModel* self);
void QPdfLinkModel_BeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginInsertColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperBeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndInsertColumns(QPdfLinkModel* self);
void QPdfLinkModel_OnEndInsertColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndInsertColumns(QPdfLinkModel* self);
void QPdfLinkModel_BeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_OnBeginRemoveColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperBeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
void QPdfLinkModel_EndRemoveColumns(QPdfLinkModel* self);
void QPdfLinkModel_OnEndRemoveColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndRemoveColumns(QPdfLinkModel* self);
bool QPdfLinkModel_BeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfLinkModel_OnBeginMoveColumns(QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperBeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfLinkModel_EndMoveColumns(QPdfLinkModel* self);
void QPdfLinkModel_OnEndMoveColumns(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndMoveColumns(QPdfLinkModel* self);
void QPdfLinkModel_BeginResetModel(QPdfLinkModel* self);
void QPdfLinkModel_OnBeginResetModel(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperBeginResetModel(QPdfLinkModel* self);
void QPdfLinkModel_EndResetModel(QPdfLinkModel* self);
void QPdfLinkModel_OnEndResetModel(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperEndResetModel(QPdfLinkModel* self);
void QPdfLinkModel_ChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfLinkModel_OnChangePersistentIndex(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfLinkModel_ChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void QPdfLinkModel_OnChangePersistentIndexList(QPdfLinkModel* self, intptr_t slot);
void QPdfLinkModel_SuperChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QPdfLinkModel_PersistentIndexList(const QPdfLinkModel* self);
void QPdfLinkModel_OnPersistentIndexList(const QPdfLinkModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfLinkModel_SuperPersistentIndexList(const QPdfLinkModel* self);
QObject* QPdfLinkModel_Sender(const QPdfLinkModel* self);
void QPdfLinkModel_OnSender(const QPdfLinkModel* self, intptr_t slot);
QObject* QPdfLinkModel_SuperSender(const QPdfLinkModel* self);
int QPdfLinkModel_SenderSignalIndex(const QPdfLinkModel* self);
void QPdfLinkModel_OnSenderSignalIndex(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperSenderSignalIndex(const QPdfLinkModel* self);
int QPdfLinkModel_Receivers(const QPdfLinkModel* self, const char* signal);
void QPdfLinkModel_OnReceivers(const QPdfLinkModel* self, intptr_t slot);
int QPdfLinkModel_SuperReceivers(const QPdfLinkModel* self, const char* signal);
bool QPdfLinkModel_IsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_OnIsSignalConnected(const QPdfLinkModel* self, intptr_t slot);
bool QPdfLinkModel_SuperIsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal);
void QPdfLinkModel_Delete(QPdfLinkModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
