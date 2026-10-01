#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBCODECOMPLETIONMODEL_H
#define EXTRAS_KTEXTEDITOR_LIBCODECOMPLETIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__CodeCompletionModel)
typedef KTextEditor::CodeCompletionModel KTextEditor__CodeCompletionModel;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range)
typedef KTextEditor::Range KTextEditor__Range;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__CodeCompletionModel KTextEditor__CodeCompletionModel;
typedef struct KTextEditor__Range KTextEditor__Range;
typedef struct KTextEditor__View KTextEditor__View;
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
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KTextEditor__CodeCompletionModel* KTextEditor__CodeCompletionModel_new(QObject* parent);
QMetaObject* KTextEditor__CodeCompletionModel_MetaObject(const KTextEditor__CodeCompletionModel* self);
void* KTextEditor__CodeCompletionModel_Metacast(KTextEditor__CodeCompletionModel* self, const char* param1);
int KTextEditor__CodeCompletionModel_Metacall(KTextEditor__CodeCompletionModel* self, int param1, int param2, void** param3);
libqt_string KTextEditor__CodeCompletionModel_Tr(const char* s);
void KTextEditor__CodeCompletionModel_SetRowCount(KTextEditor__CodeCompletionModel* self, int rowCount);
void KTextEditor__CodeCompletionModel_CompletionInvoked(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* range, int invocationType);
void KTextEditor__CodeCompletionModel_ExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* word, const QModelIndex* index);
int KTextEditor__CodeCompletionModel_ColumnCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
QModelIndex* KTextEditor__CodeCompletionModel_Index(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent);
libqt_map /* of int to QVariant* */ KTextEditor__CodeCompletionModel_ItemData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
QModelIndex* KTextEditor__CodeCompletionModel_Parent(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
int KTextEditor__CodeCompletionModel_RowCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_HasGroups(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_WaitForReset(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_Connect_WaitForReset(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_HasGroupsChanged(KTextEditor__CodeCompletionModel* self, KTextEditor__CodeCompletionModel* model, bool hasGroups);
void KTextEditor__CodeCompletionModel_Connect_HasGroupsChanged(KTextEditor__CodeCompletionModel* self, intptr_t slot);
libqt_string KTextEditor__CodeCompletionModel_Tr2(const char* s, const char* c);
libqt_string KTextEditor__CodeCompletionModel_Tr3(const char* s, const char* c, int n);
void KTextEditor__CodeCompletionModel_OnMetaObject(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QMetaObject* KTextEditor__CodeCompletionModel_SuperMetaObject(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnMetacast(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void* KTextEditor__CodeCompletionModel_SuperMetacast(KTextEditor__CodeCompletionModel* self, const char* param1);
void KTextEditor__CodeCompletionModel_OnMetacall(KTextEditor__CodeCompletionModel* self, intptr_t slot);
int KTextEditor__CodeCompletionModel_SuperMetacall(KTextEditor__CodeCompletionModel* self, int param1, int param2, void** param3);
void KTextEditor__CodeCompletionModel_OnCompletionInvoked(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperCompletionInvoked(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* range, int invocationType);
void KTextEditor__CodeCompletionModel_OnExecuteCompletionItem(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* word, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnColumnCount(KTextEditor__CodeCompletionModel* self, intptr_t slot);
int KTextEditor__CodeCompletionModel_SuperColumnCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnIndex(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QModelIndex* KTextEditor__CodeCompletionModel_SuperIndex(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KTextEditor__CodeCompletionModel_SuperItemData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnParent(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QModelIndex* KTextEditor__CodeCompletionModel_SuperParent(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnRowCount(KTextEditor__CodeCompletionModel* self, intptr_t slot);
int KTextEditor__CodeCompletionModel_SuperRowCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
QModelIndex* KTextEditor__CodeCompletionModel_Sibling(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* idx);
void KTextEditor__CodeCompletionModel_OnSibling(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QModelIndex* KTextEditor__CodeCompletionModel_SuperSibling(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* idx);
bool KTextEditor__CodeCompletionModel_HasChildren(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnHasChildren(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperHasChildren(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
QVariant* KTextEditor__CodeCompletionModel_Data(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, int role);
void KTextEditor__CodeCompletionModel_OnData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SetData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const QVariant* value, int role);
void KTextEditor__CodeCompletionModel_OnSetData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperSetData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KTextEditor__CodeCompletionModel_HeaderData(const KTextEditor__CodeCompletionModel* self, int section, int orientation, int role);
void KTextEditor__CodeCompletionModel_OnHeaderData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QVariant* KTextEditor__CodeCompletionModel_SuperHeaderData(const KTextEditor__CodeCompletionModel* self, int section, int orientation, int role);
bool KTextEditor__CodeCompletionModel_SetHeaderData(KTextEditor__CodeCompletionModel* self, int section, int orientation, const QVariant* value, int role);
void KTextEditor__CodeCompletionModel_OnSetHeaderData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperSetHeaderData(KTextEditor__CodeCompletionModel* self, int section, int orientation, const QVariant* value, int role);
bool KTextEditor__CodeCompletionModel_SetItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KTextEditor__CodeCompletionModel_OnSetItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperSetItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KTextEditor__CodeCompletionModel_ClearItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnClearItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperClearItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KTextEditor__CodeCompletionModel_MimeTypes(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnMimeTypes(KTextEditor__CodeCompletionModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KTextEditor__CodeCompletionModel_SuperMimeTypes(const KTextEditor__CodeCompletionModel* self);
QMimeData* KTextEditor__CodeCompletionModel_MimeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KTextEditor__CodeCompletionModel_OnMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QMimeData* KTextEditor__CodeCompletionModel_SuperMimeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KTextEditor__CodeCompletionModel_CanDropMimeData(const KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnCanDropMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperCanDropMimeData(const KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_DropMimeData(KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnDropMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperDropMimeData(KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KTextEditor__CodeCompletionModel_SupportedDropActions(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnSupportedDropActions(KTextEditor__CodeCompletionModel* self, intptr_t slot);
int KTextEditor__CodeCompletionModel_SuperSupportedDropActions(const KTextEditor__CodeCompletionModel* self);
int KTextEditor__CodeCompletionModel_SupportedDragActions(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnSupportedDragActions(KTextEditor__CodeCompletionModel* self, intptr_t slot);
int KTextEditor__CodeCompletionModel_SuperSupportedDragActions(const KTextEditor__CodeCompletionModel* self);
bool KTextEditor__CodeCompletionModel_InsertRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnInsertRows(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperInsertRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_InsertColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnInsertColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperInsertColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_RemoveRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnRemoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperRemoveRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_RemoveColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnRemoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperRemoveColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_MoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KTextEditor__CodeCompletionModel_OnMoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KTextEditor__CodeCompletionModel_MoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KTextEditor__CodeCompletionModel_OnMoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KTextEditor__CodeCompletionModel_FetchMore(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnFetchMore(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperFetchMore(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
bool KTextEditor__CodeCompletionModel_CanFetchMore(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
void KTextEditor__CodeCompletionModel_OnCanFetchMore(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperCanFetchMore(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent);
int KTextEditor__CodeCompletionModel_Flags(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnFlags(KTextEditor__CodeCompletionModel* self, intptr_t slot);
int KTextEditor__CodeCompletionModel_SuperFlags(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_Sort(KTextEditor__CodeCompletionModel* self, int column, int order);
void KTextEditor__CodeCompletionModel_OnSort(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperSort(KTextEditor__CodeCompletionModel* self, int column, int order);
QModelIndex* KTextEditor__CodeCompletionModel_Buddy(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnBuddy(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QModelIndex* KTextEditor__CodeCompletionModel_SuperBuddy(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_Match(const KTextEditor__CodeCompletionModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KTextEditor__CodeCompletionModel_OnMatch(KTextEditor__CodeCompletionModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_SuperMatch(const KTextEditor__CodeCompletionModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KTextEditor__CodeCompletionModel_Span(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
void KTextEditor__CodeCompletionModel_OnSpan(KTextEditor__CodeCompletionModel* self, intptr_t slot);
QSize* KTextEditor__CodeCompletionModel_SuperSpan(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ KTextEditor__CodeCompletionModel_RoleNames(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnRoleNames(KTextEditor__CodeCompletionModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KTextEditor__CodeCompletionModel_SuperRoleNames(const KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_MultiData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KTextEditor__CodeCompletionModel_OnMultiData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperMultiData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool KTextEditor__CodeCompletionModel_Submit(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnSubmit(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperSubmit(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_Revert(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnRevert(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperRevert(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_ResetInternalData(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_OnResetInternalData(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperResetInternalData(KTextEditor__CodeCompletionModel* self);
bool KTextEditor__CodeCompletionModel_Event(KTextEditor__CodeCompletionModel* self, QEvent* event);
void KTextEditor__CodeCompletionModel_OnEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperEvent(KTextEditor__CodeCompletionModel* self, QEvent* event);
bool KTextEditor__CodeCompletionModel_EventFilter(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event);
void KTextEditor__CodeCompletionModel_OnEventFilter(KTextEditor__CodeCompletionModel* self, intptr_t slot);
bool KTextEditor__CodeCompletionModel_SuperEventFilter(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event);
void KTextEditor__CodeCompletionModel_TimerEvent(KTextEditor__CodeCompletionModel* self, QTimerEvent* event);
void KTextEditor__CodeCompletionModel_OnTimerEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperTimerEvent(KTextEditor__CodeCompletionModel* self, QTimerEvent* event);
void KTextEditor__CodeCompletionModel_ChildEvent(KTextEditor__CodeCompletionModel* self, QChildEvent* event);
void KTextEditor__CodeCompletionModel_OnChildEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperChildEvent(KTextEditor__CodeCompletionModel* self, QChildEvent* event);
void KTextEditor__CodeCompletionModel_CustomEvent(KTextEditor__CodeCompletionModel* self, QEvent* event);
void KTextEditor__CodeCompletionModel_OnCustomEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperCustomEvent(KTextEditor__CodeCompletionModel* self, QEvent* event);
void KTextEditor__CodeCompletionModel_ConnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal);
void KTextEditor__CodeCompletionModel_OnConnectNotify(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperConnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal);
void KTextEditor__CodeCompletionModel_DisconnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal);
void KTextEditor__CodeCompletionModel_OnDisconnectNotify(KTextEditor__CodeCompletionModel* self, intptr_t slot);
void KTextEditor__CodeCompletionModel_SuperDisconnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal);
void KTextEditor__CodeCompletionModel_SetHasGroups(KTextEditor__CodeCompletionModel* self, bool hasGroups);
QModelIndex* KTextEditor__CodeCompletionModel_CreateIndex(const KTextEditor__CodeCompletionModel* self, int row, int column);
void KTextEditor__CodeCompletionModel_EncodeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KTextEditor__CodeCompletionModel_DecodeData(KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KTextEditor__CodeCompletionModel_BeginInsertRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
void KTextEditor__CodeCompletionModel_EndInsertRows(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_BeginRemoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
void KTextEditor__CodeCompletionModel_EndRemoveRows(KTextEditor__CodeCompletionModel* self);
bool KTextEditor__CodeCompletionModel_BeginMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KTextEditor__CodeCompletionModel_EndMoveRows(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_BeginInsertColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
void KTextEditor__CodeCompletionModel_EndInsertColumns(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_BeginRemoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
void KTextEditor__CodeCompletionModel_EndRemoveColumns(KTextEditor__CodeCompletionModel* self);
bool KTextEditor__CodeCompletionModel_BeginMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KTextEditor__CodeCompletionModel_EndMoveColumns(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_BeginResetModel(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_EndResetModel(KTextEditor__CodeCompletionModel* self);
void KTextEditor__CodeCompletionModel_ChangePersistentIndex(KTextEditor__CodeCompletionModel* self, const QModelIndex* from, const QModelIndex* to);
void KTextEditor__CodeCompletionModel_ChangePersistentIndexList(KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_PersistentIndexList(const KTextEditor__CodeCompletionModel* self);
QObject* KTextEditor__CodeCompletionModel_Sender(const KTextEditor__CodeCompletionModel* self);
int KTextEditor__CodeCompletionModel_SenderSignalIndex(const KTextEditor__CodeCompletionModel* self);
int KTextEditor__CodeCompletionModel_Receivers(const KTextEditor__CodeCompletionModel* self, const char* signal);
bool KTextEditor__CodeCompletionModel_IsSignalConnected(const KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal);
void KTextEditor__CodeCompletionModel_Delete(KTextEditor__CodeCompletionModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
