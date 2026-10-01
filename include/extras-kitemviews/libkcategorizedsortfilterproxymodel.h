#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_H
#define EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCategorizedSortFilterProxyModel KCategorizedSortFilterProxyModel;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QSortFilterProxyModel QSortFilterProxyModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KCategorizedSortFilterProxyModel* KCategorizedSortFilterProxyModel_new();
KCategorizedSortFilterProxyModel* KCategorizedSortFilterProxyModel_new2(QObject* parent);
QMetaObject* KCategorizedSortFilterProxyModel_MetaObject(const KCategorizedSortFilterProxyModel* self);
void* KCategorizedSortFilterProxyModel_Metacast(KCategorizedSortFilterProxyModel* self, const char* param1);
int KCategorizedSortFilterProxyModel_Metacall(KCategorizedSortFilterProxyModel* self, int param1, int param2, void** param3);
libqt_string KCategorizedSortFilterProxyModel_Tr(const char* s);
void KCategorizedSortFilterProxyModel_Sort(KCategorizedSortFilterProxyModel* self, int column, int order);
bool KCategorizedSortFilterProxyModel_IsCategorizedModel(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_SetCategorizedModel(KCategorizedSortFilterProxyModel* self, bool categorizedModel);
int KCategorizedSortFilterProxyModel_SortColumn(const KCategorizedSortFilterProxyModel* self);
int KCategorizedSortFilterProxyModel_SortOrder(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison(KCategorizedSortFilterProxyModel* self, bool sortCategoriesByNaturalComparison);
bool KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison(const KCategorizedSortFilterProxyModel* self);
bool KCategorizedSortFilterProxyModel_LessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
bool KCategorizedSortFilterProxyModel_SubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
int KCategorizedSortFilterProxyModel_CompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
libqt_string KCategorizedSortFilterProxyModel_Tr2(const char* s, const char* c);
libqt_string KCategorizedSortFilterProxyModel_Tr3(const char* s, const char* c, int n);
void KCategorizedSortFilterProxyModel_OnMetaObject(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QMetaObject* KCategorizedSortFilterProxyModel_SuperMetaObject(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnMetacast(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void* KCategorizedSortFilterProxyModel_SuperMetacast(KCategorizedSortFilterProxyModel* self, const char* param1);
void KCategorizedSortFilterProxyModel_OnMetacall(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperMetacall(KCategorizedSortFilterProxyModel* self, int param1, int param2, void** param3);
void KCategorizedSortFilterProxyModel_OnSort(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperSort(KCategorizedSortFilterProxyModel* self, int column, int order);
void KCategorizedSortFilterProxyModel_OnLessThan(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
void KCategorizedSortFilterProxyModel_OnSubSortLessThan(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperSubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
void KCategorizedSortFilterProxyModel_OnCompareCategories(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperCompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
void KCategorizedSortFilterProxyModel_SetSourceModel(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
void KCategorizedSortFilterProxyModel_OnSetSourceModel(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperSetSourceModel(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* KCategorizedSortFilterProxyModel_MapToSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* proxyIndex);
void KCategorizedSortFilterProxyModel_OnMapToSource(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QModelIndex* KCategorizedSortFilterProxyModel_SuperMapToSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* KCategorizedSortFilterProxyModel_MapFromSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceIndex);
void KCategorizedSortFilterProxyModel_OnMapFromSource(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QModelIndex* KCategorizedSortFilterProxyModel_SuperMapFromSource(const KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceIndex);
QItemSelection* KCategorizedSortFilterProxyModel_MapSelectionToSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* proxySelection);
void KCategorizedSortFilterProxyModel_OnMapSelectionToSource(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QItemSelection* KCategorizedSortFilterProxyModel_SuperMapSelectionToSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* proxySelection);
QItemSelection* KCategorizedSortFilterProxyModel_MapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* sourceSelection);
void KCategorizedSortFilterProxyModel_OnMapSelectionFromSource(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QItemSelection* KCategorizedSortFilterProxyModel_SuperMapSelectionFromSource(const KCategorizedSortFilterProxyModel* self, const QItemSelection* sourceSelection);
bool KCategorizedSortFilterProxyModel_FilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
void KCategorizedSortFilterProxyModel_OnFilterAcceptsRow(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
bool KCategorizedSortFilterProxyModel_FilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
void KCategorizedSortFilterProxyModel_OnFilterAcceptsColumn(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
QModelIndex* KCategorizedSortFilterProxyModel_Index(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnIndex(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QModelIndex* KCategorizedSortFilterProxyModel_SuperIndex(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* KCategorizedSortFilterProxyModel_Parent(const KCategorizedSortFilterProxyModel* self, const QModelIndex* child);
void KCategorizedSortFilterProxyModel_OnParent(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QModelIndex* KCategorizedSortFilterProxyModel_SuperParent(const KCategorizedSortFilterProxyModel* self, const QModelIndex* child);
QModelIndex* KCategorizedSortFilterProxyModel_Sibling(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* idx);
void KCategorizedSortFilterProxyModel_OnSibling(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QModelIndex* KCategorizedSortFilterProxyModel_SuperSibling(const KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* idx);
int KCategorizedSortFilterProxyModel_RowCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnRowCount(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperRowCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
int KCategorizedSortFilterProxyModel_ColumnCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnColumnCount(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperColumnCount(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
bool KCategorizedSortFilterProxyModel_HasChildren(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnHasChildren(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperHasChildren(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
QVariant* KCategorizedSortFilterProxyModel_Data(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, int role);
void KCategorizedSortFilterProxyModel_OnData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QVariant* KCategorizedSortFilterProxyModel_SuperData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, int role);
bool KCategorizedSortFilterProxyModel_SetData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
void KCategorizedSortFilterProxyModel_OnSetData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperSetData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* KCategorizedSortFilterProxyModel_HeaderData(const KCategorizedSortFilterProxyModel* self, int section, int orientation, int role);
void KCategorizedSortFilterProxyModel_OnHeaderData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QVariant* KCategorizedSortFilterProxyModel_SuperHeaderData(const KCategorizedSortFilterProxyModel* self, int section, int orientation, int role);
bool KCategorizedSortFilterProxyModel_SetHeaderData(KCategorizedSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role);
void KCategorizedSortFilterProxyModel_OnSetHeaderData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperSetHeaderData(KCategorizedSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role);
QMimeData* KCategorizedSortFilterProxyModel_MimeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes);
void KCategorizedSortFilterProxyModel_OnMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QMimeData* KCategorizedSortFilterProxyModel_SuperMimeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool KCategorizedSortFilterProxyModel_DropMimeData(KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnDropMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperDropMimeData(KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool KCategorizedSortFilterProxyModel_InsertRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnInsertRows(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperInsertRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
bool KCategorizedSortFilterProxyModel_InsertColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnInsertColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperInsertColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
bool KCategorizedSortFilterProxyModel_RemoveRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnRemoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperRemoveRows(KCategorizedSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
bool KCategorizedSortFilterProxyModel_RemoveColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnRemoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperRemoveColumns(KCategorizedSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_FetchMore(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnFetchMore(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperFetchMore(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
bool KCategorizedSortFilterProxyModel_CanFetchMore(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnCanFetchMore(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperCanFetchMore(const KCategorizedSortFilterProxyModel* self, const QModelIndex* parent);
int KCategorizedSortFilterProxyModel_Flags(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
void KCategorizedSortFilterProxyModel_OnFlags(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperFlags(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
QModelIndex* KCategorizedSortFilterProxyModel_Buddy(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
void KCategorizedSortFilterProxyModel_OnBuddy(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QModelIndex* KCategorizedSortFilterProxyModel_SuperBuddy(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_Match(const KCategorizedSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void KCategorizedSortFilterProxyModel_OnMatch(KCategorizedSortFilterProxyModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_SuperMatch(const KCategorizedSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* KCategorizedSortFilterProxyModel_Span(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
void KCategorizedSortFilterProxyModel_OnSpan(KCategorizedSortFilterProxyModel* self, intptr_t slot);
QSize* KCategorizedSortFilterProxyModel_SuperSpan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ KCategorizedSortFilterProxyModel_MimeTypes(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnMimeTypes(KCategorizedSortFilterProxyModel* self, intptr_t slot);
libqt_list /* of libqt_string */ KCategorizedSortFilterProxyModel_SuperMimeTypes(const KCategorizedSortFilterProxyModel* self);
int KCategorizedSortFilterProxyModel_SupportedDropActions(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnSupportedDropActions(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperSupportedDropActions(const KCategorizedSortFilterProxyModel* self);
bool KCategorizedSortFilterProxyModel_Submit(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnSubmit(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperSubmit(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_Revert(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnRevert(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperRevert(KCategorizedSortFilterProxyModel* self);
libqt_map /* of int to QVariant* */ KCategorizedSortFilterProxyModel_ItemData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
void KCategorizedSortFilterProxyModel_OnItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ KCategorizedSortFilterProxyModel_SuperItemData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
bool KCategorizedSortFilterProxyModel_SetItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void KCategorizedSortFilterProxyModel_OnSetItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperSetItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool KCategorizedSortFilterProxyModel_ClearItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
void KCategorizedSortFilterProxyModel_OnClearItemData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperClearItemData(KCategorizedSortFilterProxyModel* self, const QModelIndex* index);
bool KCategorizedSortFilterProxyModel_CanDropMimeData(const KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void KCategorizedSortFilterProxyModel_OnCanDropMimeData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperCanDropMimeData(const KCategorizedSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int KCategorizedSortFilterProxyModel_SupportedDragActions(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnSupportedDragActions(KCategorizedSortFilterProxyModel* self, intptr_t slot);
int KCategorizedSortFilterProxyModel_SuperSupportedDragActions(const KCategorizedSortFilterProxyModel* self);
libqt_map /* of int to libqt_string */ KCategorizedSortFilterProxyModel_RoleNames(const KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnRoleNames(KCategorizedSortFilterProxyModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ KCategorizedSortFilterProxyModel_SuperRoleNames(const KCategorizedSortFilterProxyModel* self);
bool KCategorizedSortFilterProxyModel_MoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void KCategorizedSortFilterProxyModel_OnMoveRows(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool KCategorizedSortFilterProxyModel_MoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KCategorizedSortFilterProxyModel_OnMoveColumns(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void KCategorizedSortFilterProxyModel_MultiData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KCategorizedSortFilterProxyModel_OnMultiData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperMultiData(const KCategorizedSortFilterProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void KCategorizedSortFilterProxyModel_ResetInternalData(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_OnResetInternalData(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperResetInternalData(KCategorizedSortFilterProxyModel* self);
bool KCategorizedSortFilterProxyModel_Event(KCategorizedSortFilterProxyModel* self, QEvent* event);
void KCategorizedSortFilterProxyModel_OnEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperEvent(KCategorizedSortFilterProxyModel* self, QEvent* event);
bool KCategorizedSortFilterProxyModel_EventFilter(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event);
void KCategorizedSortFilterProxyModel_OnEventFilter(KCategorizedSortFilterProxyModel* self, intptr_t slot);
bool KCategorizedSortFilterProxyModel_SuperEventFilter(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event);
void KCategorizedSortFilterProxyModel_TimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event);
void KCategorizedSortFilterProxyModel_OnTimerEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperTimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event);
void KCategorizedSortFilterProxyModel_ChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event);
void KCategorizedSortFilterProxyModel_OnChildEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event);
void KCategorizedSortFilterProxyModel_CustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event);
void KCategorizedSortFilterProxyModel_OnCustomEvent(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperCustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event);
void KCategorizedSortFilterProxyModel_ConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
void KCategorizedSortFilterProxyModel_OnConnectNotify(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
void KCategorizedSortFilterProxyModel_DisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
void KCategorizedSortFilterProxyModel_OnDisconnectNotify(KCategorizedSortFilterProxyModel* self, intptr_t slot);
void KCategorizedSortFilterProxyModel_SuperDisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
void KCategorizedSortFilterProxyModel_InvalidateFilter(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_InvalidateRowsFilter(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_InvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self);
QModelIndex* KCategorizedSortFilterProxyModel_CreateSourceIndex(const KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr);
QModelIndex* KCategorizedSortFilterProxyModel_CreateIndex(const KCategorizedSortFilterProxyModel* self, int row, int column);
void KCategorizedSortFilterProxyModel_EncodeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool KCategorizedSortFilterProxyModel_DecodeData(KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void KCategorizedSortFilterProxyModel_BeginInsertRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
void KCategorizedSortFilterProxyModel_EndInsertRows(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_BeginRemoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
void KCategorizedSortFilterProxyModel_EndRemoveRows(KCategorizedSortFilterProxyModel* self);
bool KCategorizedSortFilterProxyModel_BeginMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void KCategorizedSortFilterProxyModel_EndMoveRows(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_BeginInsertColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
void KCategorizedSortFilterProxyModel_EndInsertColumns(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_BeginRemoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
void KCategorizedSortFilterProxyModel_EndRemoveColumns(KCategorizedSortFilterProxyModel* self);
bool KCategorizedSortFilterProxyModel_BeginMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void KCategorizedSortFilterProxyModel_EndMoveColumns(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_BeginResetModel(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_EndResetModel(KCategorizedSortFilterProxyModel* self);
void KCategorizedSortFilterProxyModel_ChangePersistentIndex(KCategorizedSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
void KCategorizedSortFilterProxyModel_ChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_PersistentIndexList(const KCategorizedSortFilterProxyModel* self);
QObject* KCategorizedSortFilterProxyModel_Sender(const KCategorizedSortFilterProxyModel* self);
int KCategorizedSortFilterProxyModel_SenderSignalIndex(const KCategorizedSortFilterProxyModel* self);
int KCategorizedSortFilterProxyModel_Receivers(const KCategorizedSortFilterProxyModel* self, const char* signal);
bool KCategorizedSortFilterProxyModel_IsSignalConnected(const KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
void KCategorizedSortFilterProxyModel_Delete(KCategorizedSortFilterProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
