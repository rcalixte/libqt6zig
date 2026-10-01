#pragma once
#ifndef PDF_LIBQPDFBOOKMARKMODEL_H
#define PDF_LIBQPDFBOOKMARKMODEL_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QPdfBookmarkModel QPdfBookmarkModel;
typedef struct QPdfDocument QPdfDocument;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfBookmarkModel* QPdfBookmarkModel_new();
QPdfBookmarkModel* QPdfBookmarkModel_new2(QObject* parent);
QMetaObject* QPdfBookmarkModel_MetaObject(const QPdfBookmarkModel* self);
void* QPdfBookmarkModel_Metacast(QPdfBookmarkModel* self, const char* param1);
int QPdfBookmarkModel_Metacall(QPdfBookmarkModel* self, int param1, int param2, void** param3);
libqt_string QPdfBookmarkModel_Tr(const char* s);
QPdfDocument* QPdfBookmarkModel_Document(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_SetDocument(QPdfBookmarkModel* self, QPdfDocument* document);
QVariant* QPdfBookmarkModel_Data(const QPdfBookmarkModel* self, const QModelIndex* index, int role);
QModelIndex* QPdfBookmarkModel_Index(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QPdfBookmarkModel_Parent(const QPdfBookmarkModel* self, const QModelIndex* index);
int QPdfBookmarkModel_RowCount(const QPdfBookmarkModel* self, const QModelIndex* parent);
int QPdfBookmarkModel_ColumnCount(const QPdfBookmarkModel* self, const QModelIndex* parent);
libqt_map /* of int to libqt_string */ QPdfBookmarkModel_RoleNames(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_DocumentChanged(QPdfBookmarkModel* self, QPdfDocument* document);
void QPdfBookmarkModel_Connect_DocumentChanged(QPdfBookmarkModel* self, intptr_t slot);
libqt_string QPdfBookmarkModel_Tr2(const char* s, const char* c);
libqt_string QPdfBookmarkModel_Tr3(const char* s, const char* c, int n);
void QPdfBookmarkModel_OnMetaObject(QPdfBookmarkModel* self, intptr_t slot);
QMetaObject* QPdfBookmarkModel_SuperMetaObject(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnMetacast(QPdfBookmarkModel* self, intptr_t slot);
void* QPdfBookmarkModel_SuperMetacast(QPdfBookmarkModel* self, const char* param1);
void QPdfBookmarkModel_OnMetacall(QPdfBookmarkModel* self, intptr_t slot);
int QPdfBookmarkModel_SuperMetacall(QPdfBookmarkModel* self, int param1, int param2, void** param3);
void QPdfBookmarkModel_OnData(QPdfBookmarkModel* self, intptr_t slot);
QVariant* QPdfBookmarkModel_SuperData(const QPdfBookmarkModel* self, const QModelIndex* index, int role);
void QPdfBookmarkModel_OnIndex(QPdfBookmarkModel* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_SuperIndex(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent);
void QPdfBookmarkModel_OnParent(QPdfBookmarkModel* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_SuperParent(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_OnRowCount(QPdfBookmarkModel* self, intptr_t slot);
int QPdfBookmarkModel_SuperRowCount(const QPdfBookmarkModel* self, const QModelIndex* parent);
void QPdfBookmarkModel_OnColumnCount(QPdfBookmarkModel* self, intptr_t slot);
int QPdfBookmarkModel_SuperColumnCount(const QPdfBookmarkModel* self, const QModelIndex* parent);
void QPdfBookmarkModel_OnRoleNames(QPdfBookmarkModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QPdfBookmarkModel_SuperRoleNames(const QPdfBookmarkModel* self);
QModelIndex* QPdfBookmarkModel_Sibling(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* idx);
void QPdfBookmarkModel_OnSibling(QPdfBookmarkModel* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_SuperSibling(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* idx);
bool QPdfBookmarkModel_HasChildren(const QPdfBookmarkModel* self, const QModelIndex* parent);
void QPdfBookmarkModel_OnHasChildren(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperHasChildren(const QPdfBookmarkModel* self, const QModelIndex* parent);
bool QPdfBookmarkModel_SetData(QPdfBookmarkModel* self, const QModelIndex* index, const QVariant* value, int role);
void QPdfBookmarkModel_OnSetData(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperSetData(QPdfBookmarkModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* QPdfBookmarkModel_HeaderData(const QPdfBookmarkModel* self, int section, int orientation, int role);
void QPdfBookmarkModel_OnHeaderData(QPdfBookmarkModel* self, intptr_t slot);
QVariant* QPdfBookmarkModel_SuperHeaderData(const QPdfBookmarkModel* self, int section, int orientation, int role);
bool QPdfBookmarkModel_SetHeaderData(QPdfBookmarkModel* self, int section, int orientation, const QVariant* value, int role);
void QPdfBookmarkModel_OnSetHeaderData(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperSetHeaderData(QPdfBookmarkModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ QPdfBookmarkModel_ItemData(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_OnItemData(QPdfBookmarkModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QPdfBookmarkModel_SuperItemData(const QPdfBookmarkModel* self, const QModelIndex* index);
bool QPdfBookmarkModel_SetItemData(QPdfBookmarkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QPdfBookmarkModel_OnSetItemData(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperSetItemData(QPdfBookmarkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QPdfBookmarkModel_ClearItemData(QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_OnClearItemData(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperClearItemData(QPdfBookmarkModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ QPdfBookmarkModel_MimeTypes(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnMimeTypes(QPdfBookmarkModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QPdfBookmarkModel_SuperMimeTypes(const QPdfBookmarkModel* self);
QMimeData* QPdfBookmarkModel_MimeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QPdfBookmarkModel_OnMimeData(QPdfBookmarkModel* self, intptr_t slot);
QMimeData* QPdfBookmarkModel_SuperMimeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QPdfBookmarkModel_CanDropMimeData(const QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfBookmarkModel_OnCanDropMimeData(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperCanDropMimeData(const QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool QPdfBookmarkModel_DropMimeData(QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QPdfBookmarkModel_OnDropMimeData(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperDropMimeData(QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QPdfBookmarkModel_SupportedDropActions(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnSupportedDropActions(QPdfBookmarkModel* self, intptr_t slot);
int QPdfBookmarkModel_SuperSupportedDropActions(const QPdfBookmarkModel* self);
int QPdfBookmarkModel_SupportedDragActions(const QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnSupportedDragActions(QPdfBookmarkModel* self, intptr_t slot);
int QPdfBookmarkModel_SuperSupportedDragActions(const QPdfBookmarkModel* self);
bool QPdfBookmarkModel_InsertRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent);
void QPdfBookmarkModel_OnInsertRows(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperInsertRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent);
bool QPdfBookmarkModel_InsertColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent);
void QPdfBookmarkModel_OnInsertColumns(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperInsertColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent);
bool QPdfBookmarkModel_RemoveRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent);
void QPdfBookmarkModel_OnRemoveRows(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperRemoveRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent);
bool QPdfBookmarkModel_RemoveColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent);
void QPdfBookmarkModel_OnRemoveColumns(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperRemoveColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent);
bool QPdfBookmarkModel_MoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfBookmarkModel_OnMoveRows(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QPdfBookmarkModel_MoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfBookmarkModel_OnMoveColumns(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QPdfBookmarkModel_FetchMore(QPdfBookmarkModel* self, const QModelIndex* parent);
void QPdfBookmarkModel_OnFetchMore(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperFetchMore(QPdfBookmarkModel* self, const QModelIndex* parent);
bool QPdfBookmarkModel_CanFetchMore(const QPdfBookmarkModel* self, const QModelIndex* parent);
void QPdfBookmarkModel_OnCanFetchMore(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperCanFetchMore(const QPdfBookmarkModel* self, const QModelIndex* parent);
int QPdfBookmarkModel_Flags(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_OnFlags(QPdfBookmarkModel* self, intptr_t slot);
int QPdfBookmarkModel_SuperFlags(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_Sort(QPdfBookmarkModel* self, int column, int order);
void QPdfBookmarkModel_OnSort(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperSort(QPdfBookmarkModel* self, int column, int order);
QModelIndex* QPdfBookmarkModel_Buddy(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_OnBuddy(QPdfBookmarkModel* self, intptr_t slot);
QModelIndex* QPdfBookmarkModel_SuperBuddy(const QPdfBookmarkModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_Match(const QPdfBookmarkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QPdfBookmarkModel_OnMatch(QPdfBookmarkModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_SuperMatch(const QPdfBookmarkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QPdfBookmarkModel_Span(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_OnSpan(QPdfBookmarkModel* self, intptr_t slot);
QSize* QPdfBookmarkModel_SuperSpan(const QPdfBookmarkModel* self, const QModelIndex* index);
void QPdfBookmarkModel_MultiData(const QPdfBookmarkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QPdfBookmarkModel_OnMultiData(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperMultiData(const QPdfBookmarkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QPdfBookmarkModel_Submit(QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnSubmit(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperSubmit(QPdfBookmarkModel* self);
void QPdfBookmarkModel_Revert(QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnRevert(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperRevert(QPdfBookmarkModel* self);
void QPdfBookmarkModel_ResetInternalData(QPdfBookmarkModel* self);
void QPdfBookmarkModel_OnResetInternalData(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperResetInternalData(QPdfBookmarkModel* self);
bool QPdfBookmarkModel_Event(QPdfBookmarkModel* self, QEvent* event);
void QPdfBookmarkModel_OnEvent(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperEvent(QPdfBookmarkModel* self, QEvent* event);
bool QPdfBookmarkModel_EventFilter(QPdfBookmarkModel* self, QObject* watched, QEvent* event);
void QPdfBookmarkModel_OnEventFilter(QPdfBookmarkModel* self, intptr_t slot);
bool QPdfBookmarkModel_SuperEventFilter(QPdfBookmarkModel* self, QObject* watched, QEvent* event);
void QPdfBookmarkModel_TimerEvent(QPdfBookmarkModel* self, QTimerEvent* event);
void QPdfBookmarkModel_OnTimerEvent(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperTimerEvent(QPdfBookmarkModel* self, QTimerEvent* event);
void QPdfBookmarkModel_ChildEvent(QPdfBookmarkModel* self, QChildEvent* event);
void QPdfBookmarkModel_OnChildEvent(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperChildEvent(QPdfBookmarkModel* self, QChildEvent* event);
void QPdfBookmarkModel_CustomEvent(QPdfBookmarkModel* self, QEvent* event);
void QPdfBookmarkModel_OnCustomEvent(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperCustomEvent(QPdfBookmarkModel* self, QEvent* event);
void QPdfBookmarkModel_ConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
void QPdfBookmarkModel_OnConnectNotify(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
void QPdfBookmarkModel_DisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
void QPdfBookmarkModel_OnDisconnectNotify(QPdfBookmarkModel* self, intptr_t slot);
void QPdfBookmarkModel_SuperDisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
QModelIndex* QPdfBookmarkModel_CreateIndex(const QPdfBookmarkModel* self, int row, int column);
void QPdfBookmarkModel_EncodeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QPdfBookmarkModel_DecodeData(QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QPdfBookmarkModel_BeginInsertRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_EndInsertRows(QPdfBookmarkModel* self);
void QPdfBookmarkModel_BeginRemoveRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_EndRemoveRows(QPdfBookmarkModel* self);
bool QPdfBookmarkModel_BeginMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QPdfBookmarkModel_EndMoveRows(QPdfBookmarkModel* self);
void QPdfBookmarkModel_BeginInsertColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_EndInsertColumns(QPdfBookmarkModel* self);
void QPdfBookmarkModel_BeginRemoveColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
void QPdfBookmarkModel_EndRemoveColumns(QPdfBookmarkModel* self);
bool QPdfBookmarkModel_BeginMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QPdfBookmarkModel_EndMoveColumns(QPdfBookmarkModel* self);
void QPdfBookmarkModel_BeginResetModel(QPdfBookmarkModel* self);
void QPdfBookmarkModel_EndResetModel(QPdfBookmarkModel* self);
void QPdfBookmarkModel_ChangePersistentIndex(QPdfBookmarkModel* self, const QModelIndex* from, const QModelIndex* to);
void QPdfBookmarkModel_ChangePersistentIndexList(QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_PersistentIndexList(const QPdfBookmarkModel* self);
QObject* QPdfBookmarkModel_Sender(const QPdfBookmarkModel* self);
int QPdfBookmarkModel_SenderSignalIndex(const QPdfBookmarkModel* self);
int QPdfBookmarkModel_Receivers(const QPdfBookmarkModel* self, const char* signal);
bool QPdfBookmarkModel_IsSignalConnected(const QPdfBookmarkModel* self, const QMetaMethod* signal);
void QPdfBookmarkModel_Delete(QPdfBookmarkModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
