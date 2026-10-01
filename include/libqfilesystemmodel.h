#pragma once
#ifndef LIBQFILESYSTEMMODEL_H
#define LIBQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QFileInfo QFileInfo;
typedef struct QFileSystemModel QFileSystemModel;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimeZone QTimeZone;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QFileSystemModel* QFileSystemModel_new();
QFileSystemModel* QFileSystemModel_new2(QObject* parent);
QMetaObject* QFileSystemModel_MetaObject(const QFileSystemModel* self);
void* QFileSystemModel_Metacast(QFileSystemModel* self, const char* param1);
int QFileSystemModel_Metacall(QFileSystemModel* self, int param1, int param2, void** param3);
libqt_string QFileSystemModel_Tr(const char* s);
void QFileSystemModel_RootPathChanged(QFileSystemModel* self, const libqt_string newPath);
void QFileSystemModel_Connect_RootPathChanged(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_FileRenamed(QFileSystemModel* self, const libqt_string path, const libqt_string oldName, const libqt_string newName);
void QFileSystemModel_Connect_FileRenamed(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, const libqt_string path);
void QFileSystemModel_Connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, const libqt_string path);
QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, const QModelIndex* child);
QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx);
bool QFileSystemModel_HasChildren(const QFileSystemModel* self, const QModelIndex* parent);
bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, const QModelIndex* parent);
void QFileSystemModel_FetchMore(QFileSystemModel* self, const QModelIndex* parent);
int QFileSystemModel_RowCount(const QFileSystemModel* self, const QModelIndex* parent);
int QFileSystemModel_ColumnCount(const QFileSystemModel* self, const QModelIndex* parent);
QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self);
QVariant* QFileSystemModel_Data(const QFileSystemModel* self, const QModelIndex* index, int role);
bool QFileSystemModel_SetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation, int role);
int QFileSystemModel_Flags(const QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_Sort(QFileSystemModel* self, int column, int order);
libqt_list /* of libqt_string */ QFileSystemModel_MimeTypes(const QFileSystemModel* self);
QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool QFileSystemModel_DropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self);
libqt_map /* of int to libqt_string */ QFileSystemModel_RoleNames(const QFileSystemModel* self);
QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, const libqt_string path);
libqt_string QFileSystemModel_RootPath(const QFileSystemModel* self);
QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self);
void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider);
QAbstractFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self);
void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters);
int QFileSystemModel_Filter(const QFileSystemModel* self);
void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable);
bool QFileSystemModel_ResolveSymlinks(const QFileSystemModel* self);
void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable);
bool QFileSystemModel_IsReadOnly(const QFileSystemModel* self);
void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable);
bool QFileSystemModel_NameFilterDisables(const QFileSystemModel* self);
void QFileSystemModel_SetNameFilters(QFileSystemModel* self, const libqt_list /* of libqt_string */ filters);
libqt_list /* of libqt_string */ QFileSystemModel_NameFilters(const QFileSystemModel* self);
void QFileSystemModel_SetOption(QFileSystemModel* self, int option);
bool QFileSystemModel_TestOption(const QFileSystemModel* self, int option);
void QFileSystemModel_SetOptions(QFileSystemModel* self, int options);
int QFileSystemModel_Options(const QFileSystemModel* self);
libqt_string QFileSystemModel_FilePath(const QFileSystemModel* self, const QModelIndex* index);
bool QFileSystemModel_IsDir(const QFileSystemModel* self, const QModelIndex* index);
long long QFileSystemModel_Size(const QFileSystemModel* self, const QModelIndex* index);
libqt_string QFileSystemModel_Type(const QFileSystemModel* self, const QModelIndex* index);
QDateTime* QFileSystemModel_LastModified(const QFileSystemModel* self, const QModelIndex* index);
QDateTime* QFileSystemModel_LastModified2(const QFileSystemModel* self, const QModelIndex* index, const QTimeZone* tz);
QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, const QModelIndex* parent, const libqt_string name);
bool QFileSystemModel_Rmdir(QFileSystemModel* self, const QModelIndex* index);
libqt_string QFileSystemModel_FileName(const QFileSystemModel* self, const QModelIndex* index);
QIcon* QFileSystemModel_FileIcon(const QFileSystemModel* self, const QModelIndex* index);
int QFileSystemModel_Permissions(const QFileSystemModel* self, const QModelIndex* index);
QFileInfo* QFileSystemModel_FileInfo(const QFileSystemModel* self, const QModelIndex* index);
bool QFileSystemModel_Remove(QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_TimerEvent(QFileSystemModel* self, QTimerEvent* event);
bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event);
libqt_string QFileSystemModel_Tr2(const char* s, const char* c);
libqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n);
QModelIndex* QFileSystemModel_Index22(const QFileSystemModel* self, const libqt_string path, int column);
QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role);
void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on);
void QFileSystemModel_OnMetaObject(QFileSystemModel* self, intptr_t slot);
QMetaObject* QFileSystemModel_SuperMetaObject(const QFileSystemModel* self);
void QFileSystemModel_OnMetacast(QFileSystemModel* self, intptr_t slot);
void* QFileSystemModel_SuperMetacast(QFileSystemModel* self, const char* param1);
void QFileSystemModel_OnMetacall(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_SuperMetacall(QFileSystemModel* self, int param1, int param2, void** param3);
void QFileSystemModel_OnIndex(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_SuperIndex(const QFileSystemModel* self, int row, int column, const QModelIndex* parent);
void QFileSystemModel_OnParent(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_SuperParent(const QFileSystemModel* self, const QModelIndex* child);
void QFileSystemModel_OnSibling(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_SuperSibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx);
void QFileSystemModel_OnHasChildren(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperHasChildren(const QFileSystemModel* self, const QModelIndex* parent);
void QFileSystemModel_OnCanFetchMore(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperCanFetchMore(const QFileSystemModel* self, const QModelIndex* parent);
void QFileSystemModel_OnFetchMore(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperFetchMore(QFileSystemModel* self, const QModelIndex* parent);
void QFileSystemModel_OnRowCount(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_SuperRowCount(const QFileSystemModel* self, const QModelIndex* parent);
void QFileSystemModel_OnColumnCount(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_SuperColumnCount(const QFileSystemModel* self, const QModelIndex* parent);
void QFileSystemModel_OnData(QFileSystemModel* self, intptr_t slot);
QVariant* QFileSystemModel_SuperData(const QFileSystemModel* self, const QModelIndex* index, int role);
void QFileSystemModel_OnSetData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperSetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role);
void QFileSystemModel_OnHeaderData(QFileSystemModel* self, intptr_t slot);
QVariant* QFileSystemModel_SuperHeaderData(const QFileSystemModel* self, int section, int orientation, int role);
void QFileSystemModel_OnFlags(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_SuperFlags(const QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_OnSort(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperSort(QFileSystemModel* self, int column, int order);
void QFileSystemModel_OnMimeTypes(QFileSystemModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QFileSystemModel_SuperMimeTypes(const QFileSystemModel* self);
void QFileSystemModel_OnMimeData(QFileSystemModel* self, intptr_t slot);
QMimeData* QFileSystemModel_SuperMimeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes);
void QFileSystemModel_OnDropMimeData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperDropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QFileSystemModel_OnSupportedDropActions(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_SuperSupportedDropActions(const QFileSystemModel* self);
void QFileSystemModel_OnRoleNames(QFileSystemModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QFileSystemModel_SuperRoleNames(const QFileSystemModel* self);
void QFileSystemModel_OnTimerEvent(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperTimerEvent(QFileSystemModel* self, QTimerEvent* event);
void QFileSystemModel_OnEvent(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperEvent(QFileSystemModel* self, QEvent* event);
bool QFileSystemModel_SetHeaderData(QFileSystemModel* self, int section, int orientation, const QVariant* value, int role);
void QFileSystemModel_OnSetHeaderData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperSetHeaderData(QFileSystemModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ QFileSystemModel_ItemData(const QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_OnItemData(QFileSystemModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QFileSystemModel_SuperItemData(const QFileSystemModel* self, const QModelIndex* index);
bool QFileSystemModel_SetItemData(QFileSystemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void QFileSystemModel_OnSetItemData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperSetItemData(QFileSystemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool QFileSystemModel_ClearItemData(QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_OnClearItemData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperClearItemData(QFileSystemModel* self, const QModelIndex* index);
bool QFileSystemModel_CanDropMimeData(const QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QFileSystemModel_OnCanDropMimeData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperCanDropMimeData(const QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int QFileSystemModel_SupportedDragActions(const QFileSystemModel* self);
void QFileSystemModel_OnSupportedDragActions(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_SuperSupportedDragActions(const QFileSystemModel* self);
bool QFileSystemModel_InsertRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent);
void QFileSystemModel_OnInsertRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperInsertRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent);
bool QFileSystemModel_InsertColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent);
void QFileSystemModel_OnInsertColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperInsertColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent);
bool QFileSystemModel_RemoveRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent);
void QFileSystemModel_OnRemoveRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperRemoveRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent);
bool QFileSystemModel_RemoveColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent);
void QFileSystemModel_OnRemoveColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperRemoveColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent);
bool QFileSystemModel_MoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QFileSystemModel_OnMoveRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QFileSystemModel_MoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QFileSystemModel_OnMoveColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
QModelIndex* QFileSystemModel_Buddy(const QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_OnBuddy(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_SuperBuddy(const QFileSystemModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ QFileSystemModel_Match(const QFileSystemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QFileSystemModel_OnMatch(QFileSystemModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QFileSystemModel_SuperMatch(const QFileSystemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QFileSystemModel_Span(const QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_OnSpan(QFileSystemModel* self, intptr_t slot);
QSize* QFileSystemModel_SuperSpan(const QFileSystemModel* self, const QModelIndex* index);
void QFileSystemModel_MultiData(const QFileSystemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QFileSystemModel_OnMultiData(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperMultiData(const QFileSystemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QFileSystemModel_Submit(QFileSystemModel* self);
void QFileSystemModel_OnSubmit(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperSubmit(QFileSystemModel* self);
void QFileSystemModel_Revert(QFileSystemModel* self);
void QFileSystemModel_OnRevert(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperRevert(QFileSystemModel* self);
void QFileSystemModel_ResetInternalData(QFileSystemModel* self);
void QFileSystemModel_OnResetInternalData(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperResetInternalData(QFileSystemModel* self);
bool QFileSystemModel_EventFilter(QFileSystemModel* self, QObject* watched, QEvent* event);
void QFileSystemModel_OnEventFilter(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_SuperEventFilter(QFileSystemModel* self, QObject* watched, QEvent* event);
void QFileSystemModel_ChildEvent(QFileSystemModel* self, QChildEvent* event);
void QFileSystemModel_OnChildEvent(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperChildEvent(QFileSystemModel* self, QChildEvent* event);
void QFileSystemModel_CustomEvent(QFileSystemModel* self, QEvent* event);
void QFileSystemModel_OnCustomEvent(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperCustomEvent(QFileSystemModel* self, QEvent* event);
void QFileSystemModel_ConnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
void QFileSystemModel_OnConnectNotify(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperConnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
void QFileSystemModel_DisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
void QFileSystemModel_OnDisconnectNotify(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_SuperDisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
QModelIndex* QFileSystemModel_CreateIndex(const QFileSystemModel* self, int row, int column);
void QFileSystemModel_EncodeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QFileSystemModel_DecodeData(QFileSystemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void QFileSystemModel_BeginInsertRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
void QFileSystemModel_EndInsertRows(QFileSystemModel* self);
void QFileSystemModel_BeginRemoveRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
void QFileSystemModel_EndRemoveRows(QFileSystemModel* self);
bool QFileSystemModel_BeginMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void QFileSystemModel_EndMoveRows(QFileSystemModel* self);
void QFileSystemModel_BeginInsertColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
void QFileSystemModel_EndInsertColumns(QFileSystemModel* self);
void QFileSystemModel_BeginRemoveColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
void QFileSystemModel_EndRemoveColumns(QFileSystemModel* self);
bool QFileSystemModel_BeginMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void QFileSystemModel_EndMoveColumns(QFileSystemModel* self);
void QFileSystemModel_BeginResetModel(QFileSystemModel* self);
void QFileSystemModel_EndResetModel(QFileSystemModel* self);
void QFileSystemModel_ChangePersistentIndex(QFileSystemModel* self, const QModelIndex* from, const QModelIndex* to);
void QFileSystemModel_ChangePersistentIndexList(QFileSystemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QFileSystemModel_PersistentIndexList(const QFileSystemModel* self);
QObject* QFileSystemModel_Sender(const QFileSystemModel* self);
int QFileSystemModel_SenderSignalIndex(const QFileSystemModel* self);
int QFileSystemModel_Receivers(const QFileSystemModel* self, const char* signal);
bool QFileSystemModel_IsSignalConnected(const QFileSystemModel* self, const QMetaMethod* signal);
void QFileSystemModel_Delete(QFileSystemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
