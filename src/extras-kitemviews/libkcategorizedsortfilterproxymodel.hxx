#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKCATEGORIZEDSORTFILTERPROXYMODEL_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKCATEGORIZEDSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCategorizedSortFilterProxyModel so that we can call protected methods
class VirtualKCategorizedSortFilterProxyModel final : public KCategorizedSortFilterProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKCategorizedSortFilterProxyModel = true;

    // Virtual class public types (including callbacks)
    using KCategorizedSortFilterProxyModel_MetaObject_Callback = QMetaObject* (*)();
    using KCategorizedSortFilterProxyModel_Metacast_Callback = void* (*)(KCategorizedSortFilterProxyModel*, const char*);
    using KCategorizedSortFilterProxyModel_Metacall_Callback = int (*)(KCategorizedSortFilterProxyModel*, int, int, void**);
    using KCategorizedSortFilterProxyModel_Sort_Callback = void (*)(KCategorizedSortFilterProxyModel*, int, int);
    using KCategorizedSortFilterProxyModel_LessThan_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SubSortLessThan_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_CompareCategories_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SetSourceModel_Callback = void (*)(KCategorizedSortFilterProxyModel*, QAbstractItemModel*);
    using KCategorizedSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KCategorizedSortFilterProxyModel*, QItemSelection*);
    using KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KCategorizedSortFilterProxyModel*, QItemSelection*);
    using KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_RowCount_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_ColumnCount_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_HasChildren_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Data_Callback = QVariant* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_SetData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, QVariant*, int);
    using KCategorizedSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const KCategorizedSortFilterProxyModel*, int, int, int);
    using KCategorizedSortFilterProxyModel_SetHeaderData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QVariant*, int);
    using KCategorizedSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */);
    using KCategorizedSortFilterProxyModel_DropMimeData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_InsertRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_InsertColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_RemoveRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_RemoveColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_FetchMore_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Flags_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KCategorizedSortFilterProxyModel_Span_Callback = QSize* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_MimeTypes_Callback = const char** (*)();
    using KCategorizedSortFilterProxyModel_SupportedDropActions_Callback = int (*)();
    using KCategorizedSortFilterProxyModel_Submit_Callback = bool (*)();
    using KCategorizedSortFilterProxyModel_Revert_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SetItemData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KCategorizedSortFilterProxyModel_ClearItemData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SupportedDragActions_Callback = int (*)();
    using KCategorizedSortFilterProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KCategorizedSortFilterProxyModel_MoveRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_MoveColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_MultiData_Callback = void (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KCategorizedSortFilterProxyModel_ResetInternalData_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_Event_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QEvent*);
    using KCategorizedSortFilterProxyModel_EventFilter_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QObject*, QEvent*);
    using KCategorizedSortFilterProxyModel_TimerEvent_Callback = void (*)(KCategorizedSortFilterProxyModel*, QTimerEvent*);
    using KCategorizedSortFilterProxyModel_ChildEvent_Callback = void (*)(KCategorizedSortFilterProxyModel*, QChildEvent*);
    using KCategorizedSortFilterProxyModel_CustomEvent_Callback = void (*)(KCategorizedSortFilterProxyModel*, QEvent*);
    using KCategorizedSortFilterProxyModel_ConnectNotify_Callback = void (*)(KCategorizedSortFilterProxyModel*, QMetaMethod*);
    using KCategorizedSortFilterProxyModel_DisconnectNotify_Callback = void (*)(KCategorizedSortFilterProxyModel*, QMetaMethod*);
    using KCategorizedSortFilterProxyModel_InvalidateFilter_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_InvalidateRowsFilter_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_InvalidateColumnsFilter_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, int, int, void*);
    using KCategorizedSortFilterProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, int, int);
    using KCategorizedSortFilterProxyModel_EncodeData_Callback = void (*)(const KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KCategorizedSortFilterProxyModel_DecodeData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KCategorizedSortFilterProxyModel_BeginInsertRows_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int);
    using KCategorizedSortFilterProxyModel_EndInsertRows_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_BeginRemoveRows_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int);
    using KCategorizedSortFilterProxyModel_EndRemoveRows_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_BeginMoveRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_EndMoveRows_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_BeginInsertColumns_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int);
    using KCategorizedSortFilterProxyModel_EndInsertColumns_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_BeginRemoveColumns_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int);
    using KCategorizedSortFilterProxyModel_EndRemoveColumns_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_BeginMoveColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_EndMoveColumns_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_BeginResetModel_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_EndResetModel_Callback = void (*)();
    using KCategorizedSortFilterProxyModel_ChangePersistentIndex_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_ChangePersistentIndexList_Callback = void (*)(KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KCategorizedSortFilterProxyModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using KCategorizedSortFilterProxyModel_Sender_Callback = QObject* (*)();
    using KCategorizedSortFilterProxyModel_SenderSignalIndex_Callback = int (*)();
    using KCategorizedSortFilterProxyModel_Receivers_Callback = int (*)(const KCategorizedSortFilterProxyModel*, const char*);
    using KCategorizedSortFilterProxyModel_IsSignalConnected_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCategorizedSortFilterProxyModel_MetaObject_Callback kcategorizedsortfilterproxymodel_metaobject_callback = nullptr;
    KCategorizedSortFilterProxyModel_Metacast_Callback kcategorizedsortfilterproxymodel_metacast_callback = nullptr;
    KCategorizedSortFilterProxyModel_Metacall_Callback kcategorizedsortfilterproxymodel_metacall_callback = nullptr;
    KCategorizedSortFilterProxyModel_Sort_Callback kcategorizedsortfilterproxymodel_sort_callback = nullptr;
    KCategorizedSortFilterProxyModel_LessThan_Callback kcategorizedsortfilterproxymodel_lessthan_callback = nullptr;
    KCategorizedSortFilterProxyModel_SubSortLessThan_Callback kcategorizedsortfilterproxymodel_subsortlessthan_callback = nullptr;
    KCategorizedSortFilterProxyModel_CompareCategories_Callback kcategorizedsortfilterproxymodel_comparecategories_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetSourceModel_Callback kcategorizedsortfilterproxymodel_setsourcemodel_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapToSource_Callback kcategorizedsortfilterproxymodel_maptosource_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapFromSource_Callback kcategorizedsortfilterproxymodel_mapfromsource_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback kcategorizedsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback kcategorizedsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback kcategorizedsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback kcategorizedsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    KCategorizedSortFilterProxyModel_Index_Callback kcategorizedsortfilterproxymodel_index_callback = nullptr;
    KCategorizedSortFilterProxyModel_Parent_Callback kcategorizedsortfilterproxymodel_parent_callback = nullptr;
    KCategorizedSortFilterProxyModel_Sibling_Callback kcategorizedsortfilterproxymodel_sibling_callback = nullptr;
    KCategorizedSortFilterProxyModel_RowCount_Callback kcategorizedsortfilterproxymodel_rowcount_callback = nullptr;
    KCategorizedSortFilterProxyModel_ColumnCount_Callback kcategorizedsortfilterproxymodel_columncount_callback = nullptr;
    KCategorizedSortFilterProxyModel_HasChildren_Callback kcategorizedsortfilterproxymodel_haschildren_callback = nullptr;
    KCategorizedSortFilterProxyModel_Data_Callback kcategorizedsortfilterproxymodel_data_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetData_Callback kcategorizedsortfilterproxymodel_setdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_HeaderData_Callback kcategorizedsortfilterproxymodel_headerdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetHeaderData_Callback kcategorizedsortfilterproxymodel_setheaderdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_MimeData_Callback kcategorizedsortfilterproxymodel_mimedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_DropMimeData_Callback kcategorizedsortfilterproxymodel_dropmimedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_InsertRows_Callback kcategorizedsortfilterproxymodel_insertrows_callback = nullptr;
    KCategorizedSortFilterProxyModel_InsertColumns_Callback kcategorizedsortfilterproxymodel_insertcolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_RemoveRows_Callback kcategorizedsortfilterproxymodel_removerows_callback = nullptr;
    KCategorizedSortFilterProxyModel_RemoveColumns_Callback kcategorizedsortfilterproxymodel_removecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_FetchMore_Callback kcategorizedsortfilterproxymodel_fetchmore_callback = nullptr;
    KCategorizedSortFilterProxyModel_CanFetchMore_Callback kcategorizedsortfilterproxymodel_canfetchmore_callback = nullptr;
    KCategorizedSortFilterProxyModel_Flags_Callback kcategorizedsortfilterproxymodel_flags_callback = nullptr;
    KCategorizedSortFilterProxyModel_Buddy_Callback kcategorizedsortfilterproxymodel_buddy_callback = nullptr;
    KCategorizedSortFilterProxyModel_Match_Callback kcategorizedsortfilterproxymodel_match_callback = nullptr;
    KCategorizedSortFilterProxyModel_Span_Callback kcategorizedsortfilterproxymodel_span_callback = nullptr;
    KCategorizedSortFilterProxyModel_MimeTypes_Callback kcategorizedsortfilterproxymodel_mimetypes_callback = nullptr;
    KCategorizedSortFilterProxyModel_SupportedDropActions_Callback kcategorizedsortfilterproxymodel_supporteddropactions_callback = nullptr;
    KCategorizedSortFilterProxyModel_Submit_Callback kcategorizedsortfilterproxymodel_submit_callback = nullptr;
    KCategorizedSortFilterProxyModel_Revert_Callback kcategorizedsortfilterproxymodel_revert_callback = nullptr;
    KCategorizedSortFilterProxyModel_ItemData_Callback kcategorizedsortfilterproxymodel_itemdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetItemData_Callback kcategorizedsortfilterproxymodel_setitemdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_ClearItemData_Callback kcategorizedsortfilterproxymodel_clearitemdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_CanDropMimeData_Callback kcategorizedsortfilterproxymodel_candropmimedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_SupportedDragActions_Callback kcategorizedsortfilterproxymodel_supporteddragactions_callback = nullptr;
    KCategorizedSortFilterProxyModel_RoleNames_Callback kcategorizedsortfilterproxymodel_rolenames_callback = nullptr;
    KCategorizedSortFilterProxyModel_MoveRows_Callback kcategorizedsortfilterproxymodel_moverows_callback = nullptr;
    KCategorizedSortFilterProxyModel_MoveColumns_Callback kcategorizedsortfilterproxymodel_movecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_MultiData_Callback kcategorizedsortfilterproxymodel_multidata_callback = nullptr;
    KCategorizedSortFilterProxyModel_ResetInternalData_Callback kcategorizedsortfilterproxymodel_resetinternaldata_callback = nullptr;
    KCategorizedSortFilterProxyModel_Event_Callback kcategorizedsortfilterproxymodel_event_callback = nullptr;
    KCategorizedSortFilterProxyModel_EventFilter_Callback kcategorizedsortfilterproxymodel_eventfilter_callback = nullptr;
    KCategorizedSortFilterProxyModel_TimerEvent_Callback kcategorizedsortfilterproxymodel_timerevent_callback = nullptr;
    KCategorizedSortFilterProxyModel_ChildEvent_Callback kcategorizedsortfilterproxymodel_childevent_callback = nullptr;
    KCategorizedSortFilterProxyModel_CustomEvent_Callback kcategorizedsortfilterproxymodel_customevent_callback = nullptr;
    KCategorizedSortFilterProxyModel_ConnectNotify_Callback kcategorizedsortfilterproxymodel_connectnotify_callback = nullptr;
    KCategorizedSortFilterProxyModel_DisconnectNotify_Callback kcategorizedsortfilterproxymodel_disconnectnotify_callback = nullptr;
    KCategorizedSortFilterProxyModel_InvalidateFilter_Callback kcategorizedsortfilterproxymodel_invalidatefilter_callback = nullptr;
    KCategorizedSortFilterProxyModel_InvalidateRowsFilter_Callback kcategorizedsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
    KCategorizedSortFilterProxyModel_InvalidateColumnsFilter_Callback kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
    KCategorizedSortFilterProxyModel_CreateSourceIndex_Callback kcategorizedsortfilterproxymodel_createsourceindex_callback = nullptr;
    KCategorizedSortFilterProxyModel_CreateIndex_Callback kcategorizedsortfilterproxymodel_createindex_callback = nullptr;
    KCategorizedSortFilterProxyModel_EncodeData_Callback kcategorizedsortfilterproxymodel_encodedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_DecodeData_Callback kcategorizedsortfilterproxymodel_decodedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginInsertRows_Callback kcategorizedsortfilterproxymodel_begininsertrows_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndInsertRows_Callback kcategorizedsortfilterproxymodel_endinsertrows_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginRemoveRows_Callback kcategorizedsortfilterproxymodel_beginremoverows_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndRemoveRows_Callback kcategorizedsortfilterproxymodel_endremoverows_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginMoveRows_Callback kcategorizedsortfilterproxymodel_beginmoverows_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndMoveRows_Callback kcategorizedsortfilterproxymodel_endmoverows_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginInsertColumns_Callback kcategorizedsortfilterproxymodel_begininsertcolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndInsertColumns_Callback kcategorizedsortfilterproxymodel_endinsertcolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginRemoveColumns_Callback kcategorizedsortfilterproxymodel_beginremovecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndRemoveColumns_Callback kcategorizedsortfilterproxymodel_endremovecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginMoveColumns_Callback kcategorizedsortfilterproxymodel_beginmovecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndMoveColumns_Callback kcategorizedsortfilterproxymodel_endmovecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_BeginResetModel_Callback kcategorizedsortfilterproxymodel_beginresetmodel_callback = nullptr;
    KCategorizedSortFilterProxyModel_EndResetModel_Callback kcategorizedsortfilterproxymodel_endresetmodel_callback = nullptr;
    KCategorizedSortFilterProxyModel_ChangePersistentIndex_Callback kcategorizedsortfilterproxymodel_changepersistentindex_callback = nullptr;
    KCategorizedSortFilterProxyModel_ChangePersistentIndexList_Callback kcategorizedsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
    KCategorizedSortFilterProxyModel_PersistentIndexList_Callback kcategorizedsortfilterproxymodel_persistentindexlist_callback = nullptr;
    KCategorizedSortFilterProxyModel_Sender_Callback kcategorizedsortfilterproxymodel_sender_callback = nullptr;
    KCategorizedSortFilterProxyModel_SenderSignalIndex_Callback kcategorizedsortfilterproxymodel_sendersignalindex_callback = nullptr;
    KCategorizedSortFilterProxyModel_Receivers_Callback kcategorizedsortfilterproxymodel_receivers_callback = nullptr;
    KCategorizedSortFilterProxyModel_IsSignalConnected_Callback kcategorizedsortfilterproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcategorizedsortfilterproxymodel_metaobject_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_metacast_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_metacall_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_sort_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_lessthan_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_subsortlessthan_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_comparecategories_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_setsourcemodel_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_maptosource_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_mapfromsource_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_mapselectiontosource_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_mapselectionfromsource_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_filteracceptsrow_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_filteracceptscolumn_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_index_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_parent_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_sibling_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_rowcount_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_columncount_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_haschildren_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_data_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_setdata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_headerdata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_setheaderdata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_mimedata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_dropmimedata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_insertrows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_insertcolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_removerows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_removecolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_fetchmore_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_canfetchmore_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_flags_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_buddy_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_match_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_span_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_mimetypes_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_supporteddropactions_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_submit_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_revert_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_itemdata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_setitemdata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_clearitemdata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_candropmimedata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_supporteddragactions_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_rolenames_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_moverows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_movecolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_multidata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_resetinternaldata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_event_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_eventfilter_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_timerevent_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_childevent_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_customevent_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_connectnotify_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_disconnectnotify_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_invalidatefilter_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_invalidaterowsfilter_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_createsourceindex_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_createindex_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_encodedata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_decodedata_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_begininsertrows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endinsertrows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_beginremoverows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endremoverows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_beginmoverows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endmoverows_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_begininsertcolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endinsertcolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_beginremovecolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endremovecolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_beginmovecolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endmovecolumns_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_beginresetmodel_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_endresetmodel_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_changepersistentindex_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_changepersistentindexlist_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_persistentindexlist_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_sender_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_sendersignalindex_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_receivers_isbase = false;
    mutable bool kcategorizedsortfilterproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKCategorizedSortFilterProxyModel() : KCategorizedSortFilterProxyModel() {};
    VirtualKCategorizedSortFilterProxyModel(QObject* parent) : KCategorizedSortFilterProxyModel(parent) {};

    // Callback setters
    inline void setKCategorizedSortFilterProxyModel_MetaObject_Callback(KCategorizedSortFilterProxyModel_MetaObject_Callback cb) { kcategorizedsortfilterproxymodel_metaobject_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Metacast_Callback(KCategorizedSortFilterProxyModel_Metacast_Callback cb) { kcategorizedsortfilterproxymodel_metacast_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Metacall_Callback(KCategorizedSortFilterProxyModel_Metacall_Callback cb) { kcategorizedsortfilterproxymodel_metacall_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Sort_Callback(KCategorizedSortFilterProxyModel_Sort_Callback cb) { kcategorizedsortfilterproxymodel_sort_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_LessThan_Callback(KCategorizedSortFilterProxyModel_LessThan_Callback cb) { kcategorizedsortfilterproxymodel_lessthan_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SubSortLessThan_Callback(KCategorizedSortFilterProxyModel_SubSortLessThan_Callback cb) { kcategorizedsortfilterproxymodel_subsortlessthan_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_CompareCategories_Callback(KCategorizedSortFilterProxyModel_CompareCategories_Callback cb) { kcategorizedsortfilterproxymodel_comparecategories_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SetSourceModel_Callback(KCategorizedSortFilterProxyModel_SetSourceModel_Callback cb) { kcategorizedsortfilterproxymodel_setsourcemodel_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MapToSource_Callback(KCategorizedSortFilterProxyModel_MapToSource_Callback cb) { kcategorizedsortfilterproxymodel_maptosource_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MapFromSource_Callback(KCategorizedSortFilterProxyModel_MapFromSource_Callback cb) { kcategorizedsortfilterproxymodel_mapfromsource_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MapSelectionToSource_Callback(KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback cb) { kcategorizedsortfilterproxymodel_mapselectiontosource_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback(KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback cb) { kcategorizedsortfilterproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback(KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback cb) { kcategorizedsortfilterproxymodel_filteracceptsrow_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback(KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback cb) { kcategorizedsortfilterproxymodel_filteracceptscolumn_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Index_Callback(KCategorizedSortFilterProxyModel_Index_Callback cb) { kcategorizedsortfilterproxymodel_index_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Parent_Callback(KCategorizedSortFilterProxyModel_Parent_Callback cb) { kcategorizedsortfilterproxymodel_parent_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Sibling_Callback(KCategorizedSortFilterProxyModel_Sibling_Callback cb) { kcategorizedsortfilterproxymodel_sibling_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_RowCount_Callback(KCategorizedSortFilterProxyModel_RowCount_Callback cb) { kcategorizedsortfilterproxymodel_rowcount_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ColumnCount_Callback(KCategorizedSortFilterProxyModel_ColumnCount_Callback cb) { kcategorizedsortfilterproxymodel_columncount_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_HasChildren_Callback(KCategorizedSortFilterProxyModel_HasChildren_Callback cb) { kcategorizedsortfilterproxymodel_haschildren_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Data_Callback(KCategorizedSortFilterProxyModel_Data_Callback cb) { kcategorizedsortfilterproxymodel_data_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SetData_Callback(KCategorizedSortFilterProxyModel_SetData_Callback cb) { kcategorizedsortfilterproxymodel_setdata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_HeaderData_Callback(KCategorizedSortFilterProxyModel_HeaderData_Callback cb) { kcategorizedsortfilterproxymodel_headerdata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SetHeaderData_Callback(KCategorizedSortFilterProxyModel_SetHeaderData_Callback cb) { kcategorizedsortfilterproxymodel_setheaderdata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MimeData_Callback(KCategorizedSortFilterProxyModel_MimeData_Callback cb) { kcategorizedsortfilterproxymodel_mimedata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_DropMimeData_Callback(KCategorizedSortFilterProxyModel_DropMimeData_Callback cb) { kcategorizedsortfilterproxymodel_dropmimedata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_InsertRows_Callback(KCategorizedSortFilterProxyModel_InsertRows_Callback cb) { kcategorizedsortfilterproxymodel_insertrows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_InsertColumns_Callback(KCategorizedSortFilterProxyModel_InsertColumns_Callback cb) { kcategorizedsortfilterproxymodel_insertcolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_RemoveRows_Callback(KCategorizedSortFilterProxyModel_RemoveRows_Callback cb) { kcategorizedsortfilterproxymodel_removerows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_RemoveColumns_Callback(KCategorizedSortFilterProxyModel_RemoveColumns_Callback cb) { kcategorizedsortfilterproxymodel_removecolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_FetchMore_Callback(KCategorizedSortFilterProxyModel_FetchMore_Callback cb) { kcategorizedsortfilterproxymodel_fetchmore_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_CanFetchMore_Callback(KCategorizedSortFilterProxyModel_CanFetchMore_Callback cb) { kcategorizedsortfilterproxymodel_canfetchmore_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Flags_Callback(KCategorizedSortFilterProxyModel_Flags_Callback cb) { kcategorizedsortfilterproxymodel_flags_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Buddy_Callback(KCategorizedSortFilterProxyModel_Buddy_Callback cb) { kcategorizedsortfilterproxymodel_buddy_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Match_Callback(KCategorizedSortFilterProxyModel_Match_Callback cb) { kcategorizedsortfilterproxymodel_match_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Span_Callback(KCategorizedSortFilterProxyModel_Span_Callback cb) { kcategorizedsortfilterproxymodel_span_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MimeTypes_Callback(KCategorizedSortFilterProxyModel_MimeTypes_Callback cb) { kcategorizedsortfilterproxymodel_mimetypes_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SupportedDropActions_Callback(KCategorizedSortFilterProxyModel_SupportedDropActions_Callback cb) { kcategorizedsortfilterproxymodel_supporteddropactions_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Submit_Callback(KCategorizedSortFilterProxyModel_Submit_Callback cb) { kcategorizedsortfilterproxymodel_submit_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Revert_Callback(KCategorizedSortFilterProxyModel_Revert_Callback cb) { kcategorizedsortfilterproxymodel_revert_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ItemData_Callback(KCategorizedSortFilterProxyModel_ItemData_Callback cb) { kcategorizedsortfilterproxymodel_itemdata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SetItemData_Callback(KCategorizedSortFilterProxyModel_SetItemData_Callback cb) { kcategorizedsortfilterproxymodel_setitemdata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ClearItemData_Callback(KCategorizedSortFilterProxyModel_ClearItemData_Callback cb) { kcategorizedsortfilterproxymodel_clearitemdata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_CanDropMimeData_Callback(KCategorizedSortFilterProxyModel_CanDropMimeData_Callback cb) { kcategorizedsortfilterproxymodel_candropmimedata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SupportedDragActions_Callback(KCategorizedSortFilterProxyModel_SupportedDragActions_Callback cb) { kcategorizedsortfilterproxymodel_supporteddragactions_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_RoleNames_Callback(KCategorizedSortFilterProxyModel_RoleNames_Callback cb) { kcategorizedsortfilterproxymodel_rolenames_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MoveRows_Callback(KCategorizedSortFilterProxyModel_MoveRows_Callback cb) { kcategorizedsortfilterproxymodel_moverows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MoveColumns_Callback(KCategorizedSortFilterProxyModel_MoveColumns_Callback cb) { kcategorizedsortfilterproxymodel_movecolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_MultiData_Callback(KCategorizedSortFilterProxyModel_MultiData_Callback cb) { kcategorizedsortfilterproxymodel_multidata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ResetInternalData_Callback(KCategorizedSortFilterProxyModel_ResetInternalData_Callback cb) { kcategorizedsortfilterproxymodel_resetinternaldata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Event_Callback(KCategorizedSortFilterProxyModel_Event_Callback cb) { kcategorizedsortfilterproxymodel_event_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EventFilter_Callback(KCategorizedSortFilterProxyModel_EventFilter_Callback cb) { kcategorizedsortfilterproxymodel_eventfilter_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_TimerEvent_Callback(KCategorizedSortFilterProxyModel_TimerEvent_Callback cb) { kcategorizedsortfilterproxymodel_timerevent_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ChildEvent_Callback(KCategorizedSortFilterProxyModel_ChildEvent_Callback cb) { kcategorizedsortfilterproxymodel_childevent_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_CustomEvent_Callback(KCategorizedSortFilterProxyModel_CustomEvent_Callback cb) { kcategorizedsortfilterproxymodel_customevent_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ConnectNotify_Callback(KCategorizedSortFilterProxyModel_ConnectNotify_Callback cb) { kcategorizedsortfilterproxymodel_connectnotify_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_DisconnectNotify_Callback(KCategorizedSortFilterProxyModel_DisconnectNotify_Callback cb) { kcategorizedsortfilterproxymodel_disconnectnotify_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_InvalidateFilter_Callback(KCategorizedSortFilterProxyModel_InvalidateFilter_Callback cb) { kcategorizedsortfilterproxymodel_invalidatefilter_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_InvalidateRowsFilter_Callback(KCategorizedSortFilterProxyModel_InvalidateRowsFilter_Callback cb) { kcategorizedsortfilterproxymodel_invalidaterowsfilter_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_InvalidateColumnsFilter_Callback(KCategorizedSortFilterProxyModel_InvalidateColumnsFilter_Callback cb) { kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_CreateSourceIndex_Callback(KCategorizedSortFilterProxyModel_CreateSourceIndex_Callback cb) { kcategorizedsortfilterproxymodel_createsourceindex_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_CreateIndex_Callback(KCategorizedSortFilterProxyModel_CreateIndex_Callback cb) { kcategorizedsortfilterproxymodel_createindex_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EncodeData_Callback(KCategorizedSortFilterProxyModel_EncodeData_Callback cb) { kcategorizedsortfilterproxymodel_encodedata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_DecodeData_Callback(KCategorizedSortFilterProxyModel_DecodeData_Callback cb) { kcategorizedsortfilterproxymodel_decodedata_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginInsertRows_Callback(KCategorizedSortFilterProxyModel_BeginInsertRows_Callback cb) { kcategorizedsortfilterproxymodel_begininsertrows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndInsertRows_Callback(KCategorizedSortFilterProxyModel_EndInsertRows_Callback cb) { kcategorizedsortfilterproxymodel_endinsertrows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginRemoveRows_Callback(KCategorizedSortFilterProxyModel_BeginRemoveRows_Callback cb) { kcategorizedsortfilterproxymodel_beginremoverows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndRemoveRows_Callback(KCategorizedSortFilterProxyModel_EndRemoveRows_Callback cb) { kcategorizedsortfilterproxymodel_endremoverows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginMoveRows_Callback(KCategorizedSortFilterProxyModel_BeginMoveRows_Callback cb) { kcategorizedsortfilterproxymodel_beginmoverows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndMoveRows_Callback(KCategorizedSortFilterProxyModel_EndMoveRows_Callback cb) { kcategorizedsortfilterproxymodel_endmoverows_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginInsertColumns_Callback(KCategorizedSortFilterProxyModel_BeginInsertColumns_Callback cb) { kcategorizedsortfilterproxymodel_begininsertcolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndInsertColumns_Callback(KCategorizedSortFilterProxyModel_EndInsertColumns_Callback cb) { kcategorizedsortfilterproxymodel_endinsertcolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginRemoveColumns_Callback(KCategorizedSortFilterProxyModel_BeginRemoveColumns_Callback cb) { kcategorizedsortfilterproxymodel_beginremovecolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndRemoveColumns_Callback(KCategorizedSortFilterProxyModel_EndRemoveColumns_Callback cb) { kcategorizedsortfilterproxymodel_endremovecolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginMoveColumns_Callback(KCategorizedSortFilterProxyModel_BeginMoveColumns_Callback cb) { kcategorizedsortfilterproxymodel_beginmovecolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndMoveColumns_Callback(KCategorizedSortFilterProxyModel_EndMoveColumns_Callback cb) { kcategorizedsortfilterproxymodel_endmovecolumns_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_BeginResetModel_Callback(KCategorizedSortFilterProxyModel_BeginResetModel_Callback cb) { kcategorizedsortfilterproxymodel_beginresetmodel_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_EndResetModel_Callback(KCategorizedSortFilterProxyModel_EndResetModel_Callback cb) { kcategorizedsortfilterproxymodel_endresetmodel_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ChangePersistentIndex_Callback(KCategorizedSortFilterProxyModel_ChangePersistentIndex_Callback cb) { kcategorizedsortfilterproxymodel_changepersistentindex_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_ChangePersistentIndexList_Callback(KCategorizedSortFilterProxyModel_ChangePersistentIndexList_Callback cb) { kcategorizedsortfilterproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_PersistentIndexList_Callback(KCategorizedSortFilterProxyModel_PersistentIndexList_Callback cb) { kcategorizedsortfilterproxymodel_persistentindexlist_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Sender_Callback(KCategorizedSortFilterProxyModel_Sender_Callback cb) { kcategorizedsortfilterproxymodel_sender_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_SenderSignalIndex_Callback(KCategorizedSortFilterProxyModel_SenderSignalIndex_Callback cb) { kcategorizedsortfilterproxymodel_sendersignalindex_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_Receivers_Callback(KCategorizedSortFilterProxyModel_Receivers_Callback cb) { kcategorizedsortfilterproxymodel_receivers_callback = cb; }
    inline void setKCategorizedSortFilterProxyModel_IsSignalConnected_Callback(KCategorizedSortFilterProxyModel_IsSignalConnected_Callback cb) { kcategorizedsortfilterproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCategorizedSortFilterProxyModel_MetaObject_IsBase(bool value) const { kcategorizedsortfilterproxymodel_metaobject_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Metacast_IsBase(bool value) const { kcategorizedsortfilterproxymodel_metacast_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Metacall_IsBase(bool value) const { kcategorizedsortfilterproxymodel_metacall_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Sort_IsBase(bool value) const { kcategorizedsortfilterproxymodel_sort_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_LessThan_IsBase(bool value) const { kcategorizedsortfilterproxymodel_lessthan_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SubSortLessThan_IsBase(bool value) const { kcategorizedsortfilterproxymodel_subsortlessthan_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_CompareCategories_IsBase(bool value) const { kcategorizedsortfilterproxymodel_comparecategories_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SetSourceModel_IsBase(bool value) const { kcategorizedsortfilterproxymodel_setsourcemodel_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MapToSource_IsBase(bool value) const { kcategorizedsortfilterproxymodel_maptosource_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MapFromSource_IsBase(bool value) const { kcategorizedsortfilterproxymodel_mapfromsource_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MapSelectionToSource_IsBase(bool value) const { kcategorizedsortfilterproxymodel_mapselectiontosource_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MapSelectionFromSource_IsBase(bool value) const { kcategorizedsortfilterproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_FilterAcceptsRow_IsBase(bool value) const { kcategorizedsortfilterproxymodel_filteracceptsrow_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_FilterAcceptsColumn_IsBase(bool value) const { kcategorizedsortfilterproxymodel_filteracceptscolumn_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Index_IsBase(bool value) const { kcategorizedsortfilterproxymodel_index_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Parent_IsBase(bool value) const { kcategorizedsortfilterproxymodel_parent_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Sibling_IsBase(bool value) const { kcategorizedsortfilterproxymodel_sibling_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_RowCount_IsBase(bool value) const { kcategorizedsortfilterproxymodel_rowcount_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ColumnCount_IsBase(bool value) const { kcategorizedsortfilterproxymodel_columncount_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_HasChildren_IsBase(bool value) const { kcategorizedsortfilterproxymodel_haschildren_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Data_IsBase(bool value) const { kcategorizedsortfilterproxymodel_data_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SetData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_setdata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_HeaderData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_headerdata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SetHeaderData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_setheaderdata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MimeData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_mimedata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_DropMimeData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_dropmimedata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_InsertRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_insertrows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_InsertColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_insertcolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_RemoveRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_removerows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_RemoveColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_removecolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_FetchMore_IsBase(bool value) const { kcategorizedsortfilterproxymodel_fetchmore_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_CanFetchMore_IsBase(bool value) const { kcategorizedsortfilterproxymodel_canfetchmore_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Flags_IsBase(bool value) const { kcategorizedsortfilterproxymodel_flags_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Buddy_IsBase(bool value) const { kcategorizedsortfilterproxymodel_buddy_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Match_IsBase(bool value) const { kcategorizedsortfilterproxymodel_match_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Span_IsBase(bool value) const { kcategorizedsortfilterproxymodel_span_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MimeTypes_IsBase(bool value) const { kcategorizedsortfilterproxymodel_mimetypes_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SupportedDropActions_IsBase(bool value) const { kcategorizedsortfilterproxymodel_supporteddropactions_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Submit_IsBase(bool value) const { kcategorizedsortfilterproxymodel_submit_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Revert_IsBase(bool value) const { kcategorizedsortfilterproxymodel_revert_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ItemData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_itemdata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SetItemData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_setitemdata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ClearItemData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_clearitemdata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_CanDropMimeData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_candropmimedata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SupportedDragActions_IsBase(bool value) const { kcategorizedsortfilterproxymodel_supporteddragactions_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_RoleNames_IsBase(bool value) const { kcategorizedsortfilterproxymodel_rolenames_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MoveRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_moverows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MoveColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_movecolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_MultiData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_multidata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ResetInternalData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_resetinternaldata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Event_IsBase(bool value) const { kcategorizedsortfilterproxymodel_event_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EventFilter_IsBase(bool value) const { kcategorizedsortfilterproxymodel_eventfilter_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_TimerEvent_IsBase(bool value) const { kcategorizedsortfilterproxymodel_timerevent_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ChildEvent_IsBase(bool value) const { kcategorizedsortfilterproxymodel_childevent_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_CustomEvent_IsBase(bool value) const { kcategorizedsortfilterproxymodel_customevent_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ConnectNotify_IsBase(bool value) const { kcategorizedsortfilterproxymodel_connectnotify_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_DisconnectNotify_IsBase(bool value) const { kcategorizedsortfilterproxymodel_disconnectnotify_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_InvalidateFilter_IsBase(bool value) const { kcategorizedsortfilterproxymodel_invalidatefilter_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_InvalidateRowsFilter_IsBase(bool value) const { kcategorizedsortfilterproxymodel_invalidaterowsfilter_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_InvalidateColumnsFilter_IsBase(bool value) const { kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_CreateSourceIndex_IsBase(bool value) const { kcategorizedsortfilterproxymodel_createsourceindex_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_CreateIndex_IsBase(bool value) const { kcategorizedsortfilterproxymodel_createindex_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EncodeData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_encodedata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_DecodeData_IsBase(bool value) const { kcategorizedsortfilterproxymodel_decodedata_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginInsertRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_begininsertrows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndInsertRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endinsertrows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginRemoveRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_beginremoverows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndRemoveRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endremoverows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginMoveRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_beginmoverows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndMoveRows_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endmoverows_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginInsertColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_begininsertcolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndInsertColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endinsertcolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginRemoveColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_beginremovecolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndRemoveColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endremovecolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginMoveColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_beginmovecolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndMoveColumns_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endmovecolumns_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_BeginResetModel_IsBase(bool value) const { kcategorizedsortfilterproxymodel_beginresetmodel_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_EndResetModel_IsBase(bool value) const { kcategorizedsortfilterproxymodel_endresetmodel_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ChangePersistentIndex_IsBase(bool value) const { kcategorizedsortfilterproxymodel_changepersistentindex_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_ChangePersistentIndexList_IsBase(bool value) const { kcategorizedsortfilterproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_PersistentIndexList_IsBase(bool value) const { kcategorizedsortfilterproxymodel_persistentindexlist_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Sender_IsBase(bool value) const { kcategorizedsortfilterproxymodel_sender_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_SenderSignalIndex_IsBase(bool value) const { kcategorizedsortfilterproxymodel_sendersignalindex_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_Receivers_IsBase(bool value) const { kcategorizedsortfilterproxymodel_receivers_isbase = value; }
    inline void setKCategorizedSortFilterProxyModel_IsSignalConnected_IsBase(bool value) const { kcategorizedsortfilterproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcategorizedsortfilterproxymodel_metaobject_isbase) {
            kcategorizedsortfilterproxymodel_metaobject_isbase = false;
            return KCategorizedSortFilterProxyModel::metaObject();
        }
        auto metaobject_cb = kcategorizedsortfilterproxymodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcategorizedsortfilterproxymodel_metacast_isbase) {
            kcategorizedsortfilterproxymodel_metacast_isbase = false;
            return KCategorizedSortFilterProxyModel::qt_metacast(param1);
        }
        auto metacast_cb = kcategorizedsortfilterproxymodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcategorizedsortfilterproxymodel_metacall_isbase) {
            kcategorizedsortfilterproxymodel_metacall_isbase = false;
            return KCategorizedSortFilterProxyModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcategorizedsortfilterproxymodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcategorizedsortfilterproxymodel_sort_isbase) {
            kcategorizedsortfilterproxymodel_sort_isbase = false;
            KCategorizedSortFilterProxyModel::sort(column, order);
            return;
        }
        auto sort_cb = kcategorizedsortfilterproxymodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        KCategorizedSortFilterProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kcategorizedsortfilterproxymodel_lessthan_isbase) {
            kcategorizedsortfilterproxymodel_lessthan_isbase = false;
            return KCategorizedSortFilterProxyModel::lessThan(left, right);
        }
        auto lessthan_cb = kcategorizedsortfilterproxymodel_lessthan_callback;
        if (lessthan_cb) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);

            bool callback_ret = lessthan_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::lessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool subSortLessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kcategorizedsortfilterproxymodel_subsortlessthan_isbase) {
            kcategorizedsortfilterproxymodel_subsortlessthan_isbase = false;
            return KCategorizedSortFilterProxyModel::subSortLessThan(left, right);
        }
        auto subsortlessthan_cb = kcategorizedsortfilterproxymodel_subsortlessthan_callback;
        if (subsortlessthan_cb) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);

            bool callback_ret = subsortlessthan_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::subSortLessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compareCategories(const QModelIndex& left, const QModelIndex& right) const override {
        if (kcategorizedsortfilterproxymodel_comparecategories_isbase) {
            kcategorizedsortfilterproxymodel_comparecategories_isbase = false;
            return KCategorizedSortFilterProxyModel::compareCategories(left, right);
        }
        auto comparecategories_cb = kcategorizedsortfilterproxymodel_comparecategories_callback;
        if (comparecategories_cb) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);

            int callback_ret = comparecategories_cb(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::compareCategories(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kcategorizedsortfilterproxymodel_setsourcemodel_isbase) {
            kcategorizedsortfilterproxymodel_setsourcemodel_isbase = false;
            KCategorizedSortFilterProxyModel::setSourceModel(sourceModel);
            return;
        }
        auto setsourcemodel_cb = kcategorizedsortfilterproxymodel_setsourcemodel_callback;
        if (setsourcemodel_cb) {
            QAbstractItemModel* cbval1 = sourceModel;

            setsourcemodel_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kcategorizedsortfilterproxymodel_maptosource_isbase) {
            kcategorizedsortfilterproxymodel_maptosource_isbase = false;
            return KCategorizedSortFilterProxyModel::mapToSource(proxyIndex);
        }
        auto maptosource_cb = kcategorizedsortfilterproxymodel_maptosource_callback;
        if (maptosource_cb) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = maptosource_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kcategorizedsortfilterproxymodel_mapfromsource_isbase) {
            kcategorizedsortfilterproxymodel_mapfromsource_isbase = false;
            return KCategorizedSortFilterProxyModel::mapFromSource(sourceIndex);
        }
        auto mapfromsource_cb = kcategorizedsortfilterproxymodel_mapfromsource_callback;
        if (mapfromsource_cb) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = mapfromsource_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (kcategorizedsortfilterproxymodel_mapselectiontosource_isbase) {
            kcategorizedsortfilterproxymodel_mapselectiontosource_isbase = false;
            return KCategorizedSortFilterProxyModel::mapSelectionToSource(proxySelection);
        }
        auto mapselectiontosource_cb = kcategorizedsortfilterproxymodel_mapselectiontosource_callback;
        if (mapselectiontosource_cb) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);

            QItemSelection* callback_ret = mapselectiontosource_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::mapSelectionToSource(proxySelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (kcategorizedsortfilterproxymodel_mapselectionfromsource_isbase) {
            kcategorizedsortfilterproxymodel_mapselectionfromsource_isbase = false;
            return KCategorizedSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        }
        auto mapselectionfromsource_cb = kcategorizedsortfilterproxymodel_mapselectionfromsource_callback;
        if (mapselectionfromsource_cb) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);

            QItemSelection* callback_ret = mapselectionfromsource_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (kcategorizedsortfilterproxymodel_filteracceptsrow_isbase) {
            kcategorizedsortfilterproxymodel_filteracceptsrow_isbase = false;
            return KCategorizedSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        }
        auto filteracceptsrow_cb = kcategorizedsortfilterproxymodel_filteracceptsrow_callback;
        if (filteracceptsrow_cb) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);

            bool callback_ret = filteracceptsrow_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (kcategorizedsortfilterproxymodel_filteracceptscolumn_isbase) {
            kcategorizedsortfilterproxymodel_filteracceptscolumn_isbase = false;
            return KCategorizedSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        }
        auto filteracceptscolumn_cb = kcategorizedsortfilterproxymodel_filteracceptscolumn_callback;
        if (filteracceptscolumn_cb) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);

            bool callback_ret = filteracceptscolumn_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_index_isbase) {
            kcategorizedsortfilterproxymodel_index_isbase = false;
            return KCategorizedSortFilterProxyModel::index(row, column, parent);
        }
        auto index_cb = kcategorizedsortfilterproxymodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kcategorizedsortfilterproxymodel_parent_isbase) {
            kcategorizedsortfilterproxymodel_parent_isbase = false;
            return KCategorizedSortFilterProxyModel::parent(child);
        }
        auto parent_cb = kcategorizedsortfilterproxymodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcategorizedsortfilterproxymodel_sibling_isbase) {
            kcategorizedsortfilterproxymodel_sibling_isbase = false;
            return KCategorizedSortFilterProxyModel::sibling(row, column, idx);
        }
        auto sibling_cb = kcategorizedsortfilterproxymodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_rowcount_isbase) {
            kcategorizedsortfilterproxymodel_rowcount_isbase = false;
            return KCategorizedSortFilterProxyModel::rowCount(parent);
        }
        auto rowcount_cb = kcategorizedsortfilterproxymodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_columncount_isbase) {
            kcategorizedsortfilterproxymodel_columncount_isbase = false;
            return KCategorizedSortFilterProxyModel::columnCount(parent);
        }
        auto columncount_cb = kcategorizedsortfilterproxymodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_haschildren_isbase) {
            kcategorizedsortfilterproxymodel_haschildren_isbase = false;
            return KCategorizedSortFilterProxyModel::hasChildren(parent);
        }
        auto haschildren_cb = kcategorizedsortfilterproxymodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcategorizedsortfilterproxymodel_data_isbase) {
            kcategorizedsortfilterproxymodel_data_isbase = false;
            return KCategorizedSortFilterProxyModel::data(index, role);
        }
        auto data_cb = kcategorizedsortfilterproxymodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcategorizedsortfilterproxymodel_setdata_isbase) {
            kcategorizedsortfilterproxymodel_setdata_isbase = false;
            return KCategorizedSortFilterProxyModel::setData(index, value, role);
        }
        auto setdata_cb = kcategorizedsortfilterproxymodel_setdata_callback;
        if (setdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = setdata_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcategorizedsortfilterproxymodel_headerdata_isbase) {
            kcategorizedsortfilterproxymodel_headerdata_isbase = false;
            return KCategorizedSortFilterProxyModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = kcategorizedsortfilterproxymodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcategorizedsortfilterproxymodel_setheaderdata_isbase) {
            kcategorizedsortfilterproxymodel_setheaderdata_isbase = false;
            return KCategorizedSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = kcategorizedsortfilterproxymodel_setheaderdata_callback;
        if (setheaderdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = setheaderdata_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcategorizedsortfilterproxymodel_mimedata_isbase) {
            kcategorizedsortfilterproxymodel_mimedata_isbase = false;
            return KCategorizedSortFilterProxyModel::mimeData(indexes);
        }
        auto mimedata_cb = kcategorizedsortfilterproxymodel_mimedata_callback;
        if (mimedata_cb) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size())));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = mimedata_cb(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_dropmimedata_isbase) {
            kcategorizedsortfilterproxymodel_dropmimedata_isbase = false;
            return KCategorizedSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = kcategorizedsortfilterproxymodel_dropmimedata_callback;
        if (dropmimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = dropmimedata_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_insertrows_isbase) {
            kcategorizedsortfilterproxymodel_insertrows_isbase = false;
            return KCategorizedSortFilterProxyModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = kcategorizedsortfilterproxymodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_insertcolumns_isbase) {
            kcategorizedsortfilterproxymodel_insertcolumns_isbase = false;
            return KCategorizedSortFilterProxyModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = kcategorizedsortfilterproxymodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_removerows_isbase) {
            kcategorizedsortfilterproxymodel_removerows_isbase = false;
            return KCategorizedSortFilterProxyModel::removeRows(row, count, parent);
        }
        auto removerows_cb = kcategorizedsortfilterproxymodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_removecolumns_isbase) {
            kcategorizedsortfilterproxymodel_removecolumns_isbase = false;
            return KCategorizedSortFilterProxyModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = kcategorizedsortfilterproxymodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_fetchmore_isbase) {
            kcategorizedsortfilterproxymodel_fetchmore_isbase = false;
            KCategorizedSortFilterProxyModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = kcategorizedsortfilterproxymodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_canfetchmore_isbase) {
            kcategorizedsortfilterproxymodel_canfetchmore_isbase = false;
            return KCategorizedSortFilterProxyModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = kcategorizedsortfilterproxymodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_flags_isbase) {
            kcategorizedsortfilterproxymodel_flags_isbase = false;
            return KCategorizedSortFilterProxyModel::flags(index);
        }
        auto flags_cb = kcategorizedsortfilterproxymodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_buddy_isbase) {
            kcategorizedsortfilterproxymodel_buddy_isbase = false;
            return KCategorizedSortFilterProxyModel::buddy(index);
        }
        auto buddy_cb = kcategorizedsortfilterproxymodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcategorizedsortfilterproxymodel_match_isbase) {
            kcategorizedsortfilterproxymodel_match_isbase = false;
            return KCategorizedSortFilterProxyModel::match(start, role, value, hits, flags);
        }
        auto match_cb = kcategorizedsortfilterproxymodel_match_callback;
        if (match_cb) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = match_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCategorizedSortFilterProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_span_isbase) {
            kcategorizedsortfilterproxymodel_span_isbase = false;
            return KCategorizedSortFilterProxyModel::span(index);
        }
        auto span_cb = kcategorizedsortfilterproxymodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcategorizedsortfilterproxymodel_mimetypes_isbase) {
            kcategorizedsortfilterproxymodel_mimetypes_isbase = false;
            return KCategorizedSortFilterProxyModel::mimeTypes();
        }
        auto mimetypes_cb = kcategorizedsortfilterproxymodel_mimetypes_callback;
        if (mimetypes_cb) {
            const char** callback_ret = mimetypes_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KCategorizedSortFilterProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcategorizedsortfilterproxymodel_supporteddropactions_isbase) {
            kcategorizedsortfilterproxymodel_supporteddropactions_isbase = false;
            return KCategorizedSortFilterProxyModel::supportedDropActions();
        }
        auto supporteddropactions_cb = kcategorizedsortfilterproxymodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcategorizedsortfilterproxymodel_submit_isbase) {
            kcategorizedsortfilterproxymodel_submit_isbase = false;
            return KCategorizedSortFilterProxyModel::submit();
        }
        auto submit_cb = kcategorizedsortfilterproxymodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcategorizedsortfilterproxymodel_revert_isbase) {
            kcategorizedsortfilterproxymodel_revert_isbase = false;
            KCategorizedSortFilterProxyModel::revert();
            return;
        }
        auto revert_cb = kcategorizedsortfilterproxymodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_itemdata_isbase) {
            kcategorizedsortfilterproxymodel_itemdata_isbase = false;
            return KCategorizedSortFilterProxyModel::itemData(index);
        }
        auto itemdata_cb = kcategorizedsortfilterproxymodel_itemdata_callback;
        if (itemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = itemdata_cb(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        }
        return KCategorizedSortFilterProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcategorizedsortfilterproxymodel_setitemdata_isbase) {
            kcategorizedsortfilterproxymodel_setitemdata_isbase = false;
            return KCategorizedSortFilterProxyModel::setItemData(index, roles);
        }
        auto setitemdata_cb = kcategorizedsortfilterproxymodel_setitemdata_callback;
        if (setitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QMap<int, QVariant>& roles_ret = roles;
            // Convert QMap<> from C++ memory to manually-managed C memory
            int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
            QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
            int roles_ctr = 0;
            for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
                roles_karr[roles_ctr] = roles_itr->first;
                roles_varr[roles_ctr] = new QVariant(roles_itr->second);
                roles_ctr++;
            }
            libqt_map roles_out;
            roles_out.len = roles_ret.size();
            roles_out.keys = static_cast<void*>(roles_karr);
            roles_out.values = static_cast<void*>(roles_varr);
            libqt_map /* of int to QVariant* */ cbval2 = roles_out;

            bool callback_ret = setitemdata_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcategorizedsortfilterproxymodel_clearitemdata_isbase) {
            kcategorizedsortfilterproxymodel_clearitemdata_isbase = false;
            return KCategorizedSortFilterProxyModel::clearItemData(index);
        }
        auto clearitemdata_cb = kcategorizedsortfilterproxymodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_candropmimedata_isbase) {
            kcategorizedsortfilterproxymodel_candropmimedata_isbase = false;
            return KCategorizedSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = kcategorizedsortfilterproxymodel_candropmimedata_callback;
        if (candropmimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = candropmimedata_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcategorizedsortfilterproxymodel_supporteddragactions_isbase) {
            kcategorizedsortfilterproxymodel_supporteddragactions_isbase = false;
            return KCategorizedSortFilterProxyModel::supportedDragActions();
        }
        auto supporteddragactions_cb = kcategorizedsortfilterproxymodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcategorizedsortfilterproxymodel_rolenames_isbase) {
            kcategorizedsortfilterproxymodel_rolenames_isbase = false;
            return KCategorizedSortFilterProxyModel::roleNames();
        }
        auto rolenames_cb = kcategorizedsortfilterproxymodel_rolenames_callback;
        if (rolenames_cb) {
            libqt_map /* of int to libqt_string */ callback_ret = rolenames_cb();
            QHash<int, QByteArray> callback_ret_QHash;
            callback_ret_QHash.reserve(callback_ret.len);
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QByteArray callback_ret_varr_i_QByteArray(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QHash[static_cast<int>(callback_ret_karr[i])] = callback_ret_varr_i_QByteArray;
            }
            return callback_ret_QHash;
        }
        return KCategorizedSortFilterProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcategorizedsortfilterproxymodel_moverows_isbase) {
            kcategorizedsortfilterproxymodel_moverows_isbase = false;
            return KCategorizedSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = kcategorizedsortfilterproxymodel_moverows_callback;
        if (moverows_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = moverows_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcategorizedsortfilterproxymodel_movecolumns_isbase) {
            kcategorizedsortfilterproxymodel_movecolumns_isbase = false;
            return KCategorizedSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = kcategorizedsortfilterproxymodel_movecolumns_callback;
        if (movecolumns_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = movecolumns_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcategorizedsortfilterproxymodel_multidata_isbase) {
            kcategorizedsortfilterproxymodel_multidata_isbase = false;
            KCategorizedSortFilterProxyModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = kcategorizedsortfilterproxymodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        KCategorizedSortFilterProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcategorizedsortfilterproxymodel_resetinternaldata_isbase) {
            kcategorizedsortfilterproxymodel_resetinternaldata_isbase = false;
            KCategorizedSortFilterProxyModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = kcategorizedsortfilterproxymodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcategorizedsortfilterproxymodel_event_isbase) {
            kcategorizedsortfilterproxymodel_event_isbase = false;
            return KCategorizedSortFilterProxyModel::event(event);
        }
        auto event_cb = kcategorizedsortfilterproxymodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcategorizedsortfilterproxymodel_eventfilter_isbase) {
            kcategorizedsortfilterproxymodel_eventfilter_isbase = false;
            return KCategorizedSortFilterProxyModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcategorizedsortfilterproxymodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcategorizedsortfilterproxymodel_timerevent_isbase) {
            kcategorizedsortfilterproxymodel_timerevent_isbase = false;
            KCategorizedSortFilterProxyModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcategorizedsortfilterproxymodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcategorizedsortfilterproxymodel_childevent_isbase) {
            kcategorizedsortfilterproxymodel_childevent_isbase = false;
            KCategorizedSortFilterProxyModel::childEvent(event);
            return;
        }
        auto childevent_cb = kcategorizedsortfilterproxymodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcategorizedsortfilterproxymodel_customevent_isbase) {
            kcategorizedsortfilterproxymodel_customevent_isbase = false;
            KCategorizedSortFilterProxyModel::customEvent(event);
            return;
        }
        auto customevent_cb = kcategorizedsortfilterproxymodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcategorizedsortfilterproxymodel_connectnotify_isbase) {
            kcategorizedsortfilterproxymodel_connectnotify_isbase = false;
            KCategorizedSortFilterProxyModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcategorizedsortfilterproxymodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcategorizedsortfilterproxymodel_disconnectnotify_isbase) {
            kcategorizedsortfilterproxymodel_disconnectnotify_isbase = false;
            KCategorizedSortFilterProxyModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcategorizedsortfilterproxymodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void invalidateFilter() {
        if (kcategorizedsortfilterproxymodel_invalidatefilter_isbase) {
            kcategorizedsortfilterproxymodel_invalidatefilter_isbase = false;
            KCategorizedSortFilterProxyModel::invalidateFilter();
            return;
        }
        auto invalidatefilter_cb = kcategorizedsortfilterproxymodel_invalidatefilter_callback;
        if (invalidatefilter_cb) {
            invalidatefilter_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::invalidateFilter();
    }

    // Virtual method for C ABI access and custom callback
    void invalidateRowsFilter() {
        if (kcategorizedsortfilterproxymodel_invalidaterowsfilter_isbase) {
            kcategorizedsortfilterproxymodel_invalidaterowsfilter_isbase = false;
            KCategorizedSortFilterProxyModel::invalidateRowsFilter();
            return;
        }
        auto invalidaterowsfilter_cb = kcategorizedsortfilterproxymodel_invalidaterowsfilter_callback;
        if (invalidaterowsfilter_cb) {
            invalidaterowsfilter_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::invalidateRowsFilter();
    }

    // Virtual method for C ABI access and custom callback
    void invalidateColumnsFilter() {
        if (kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_isbase) {
            kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
            KCategorizedSortFilterProxyModel::invalidateColumnsFilter();
            return;
        }
        auto invalidatecolumnsfilter_cb = kcategorizedsortfilterproxymodel_invalidatecolumnsfilter_callback;
        if (invalidatecolumnsfilter_cb) {
            invalidatecolumnsfilter_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::invalidateColumnsFilter();
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (kcategorizedsortfilterproxymodel_createsourceindex_isbase) {
            kcategorizedsortfilterproxymodel_createsourceindex_isbase = false;
            return KCategorizedSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        }
        auto createsourceindex_cb = kcategorizedsortfilterproxymodel_createsourceindex_callback;
        if (createsourceindex_cb) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = createsourceindex_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kcategorizedsortfilterproxymodel_createindex_isbase) {
            kcategorizedsortfilterproxymodel_createindex_isbase = false;
            return KCategorizedSortFilterProxyModel::createIndex(row, column);
        }
        auto createindex_cb = kcategorizedsortfilterproxymodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KCategorizedSortFilterProxyModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kcategorizedsortfilterproxymodel_encodedata_isbase) {
            kcategorizedsortfilterproxymodel_encodedata_isbase = false;
            KCategorizedSortFilterProxyModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = kcategorizedsortfilterproxymodel_encodedata_callback;
        if (encodedata_cb) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size())));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval2 = &stream_ret;

            encodedata_cb(this, cbval1, cbval2);
            free(indexes_arr);
            return;
        }
        KCategorizedSortFilterProxyModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kcategorizedsortfilterproxymodel_decodedata_isbase) {
            kcategorizedsortfilterproxymodel_decodedata_isbase = false;
            return KCategorizedSortFilterProxyModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = kcategorizedsortfilterproxymodel_decodedata_callback;
        if (decodedata_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = decodedata_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kcategorizedsortfilterproxymodel_begininsertrows_isbase) {
            kcategorizedsortfilterproxymodel_begininsertrows_isbase = false;
            KCategorizedSortFilterProxyModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = kcategorizedsortfilterproxymodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategorizedSortFilterProxyModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kcategorizedsortfilterproxymodel_endinsertrows_isbase) {
            kcategorizedsortfilterproxymodel_endinsertrows_isbase = false;
            KCategorizedSortFilterProxyModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = kcategorizedsortfilterproxymodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kcategorizedsortfilterproxymodel_beginremoverows_isbase) {
            kcategorizedsortfilterproxymodel_beginremoverows_isbase = false;
            KCategorizedSortFilterProxyModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = kcategorizedsortfilterproxymodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategorizedSortFilterProxyModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kcategorizedsortfilterproxymodel_endremoverows_isbase) {
            kcategorizedsortfilterproxymodel_endremoverows_isbase = false;
            KCategorizedSortFilterProxyModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = kcategorizedsortfilterproxymodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kcategorizedsortfilterproxymodel_beginmoverows_isbase) {
            kcategorizedsortfilterproxymodel_beginmoverows_isbase = false;
            return KCategorizedSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = kcategorizedsortfilterproxymodel_beginmoverows_callback;
        if (beginmoverows_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = beginmoverows_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kcategorizedsortfilterproxymodel_endmoverows_isbase) {
            kcategorizedsortfilterproxymodel_endmoverows_isbase = false;
            KCategorizedSortFilterProxyModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = kcategorizedsortfilterproxymodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kcategorizedsortfilterproxymodel_begininsertcolumns_isbase) {
            kcategorizedsortfilterproxymodel_begininsertcolumns_isbase = false;
            KCategorizedSortFilterProxyModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = kcategorizedsortfilterproxymodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategorizedSortFilterProxyModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kcategorizedsortfilterproxymodel_endinsertcolumns_isbase) {
            kcategorizedsortfilterproxymodel_endinsertcolumns_isbase = false;
            KCategorizedSortFilterProxyModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = kcategorizedsortfilterproxymodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kcategorizedsortfilterproxymodel_beginremovecolumns_isbase) {
            kcategorizedsortfilterproxymodel_beginremovecolumns_isbase = false;
            KCategorizedSortFilterProxyModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = kcategorizedsortfilterproxymodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategorizedSortFilterProxyModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kcategorizedsortfilterproxymodel_endremovecolumns_isbase) {
            kcategorizedsortfilterproxymodel_endremovecolumns_isbase = false;
            KCategorizedSortFilterProxyModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = kcategorizedsortfilterproxymodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kcategorizedsortfilterproxymodel_beginmovecolumns_isbase) {
            kcategorizedsortfilterproxymodel_beginmovecolumns_isbase = false;
            return KCategorizedSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = kcategorizedsortfilterproxymodel_beginmovecolumns_callback;
        if (beginmovecolumns_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = beginmovecolumns_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kcategorizedsortfilterproxymodel_endmovecolumns_isbase) {
            kcategorizedsortfilterproxymodel_endmovecolumns_isbase = false;
            KCategorizedSortFilterProxyModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = kcategorizedsortfilterproxymodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kcategorizedsortfilterproxymodel_beginresetmodel_isbase) {
            kcategorizedsortfilterproxymodel_beginresetmodel_isbase = false;
            KCategorizedSortFilterProxyModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = kcategorizedsortfilterproxymodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kcategorizedsortfilterproxymodel_endresetmodel_isbase) {
            kcategorizedsortfilterproxymodel_endresetmodel_isbase = false;
            KCategorizedSortFilterProxyModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = kcategorizedsortfilterproxymodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        KCategorizedSortFilterProxyModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kcategorizedsortfilterproxymodel_changepersistentindex_isbase) {
            kcategorizedsortfilterproxymodel_changepersistentindex_isbase = false;
            KCategorizedSortFilterProxyModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = kcategorizedsortfilterproxymodel_changepersistentindex_callback;
        if (changepersistentindex_cb) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            changepersistentindex_cb(this, cbval1, cbval2);
            return;
        }
        KCategorizedSortFilterProxyModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kcategorizedsortfilterproxymodel_changepersistentindexlist_isbase) {
            kcategorizedsortfilterproxymodel_changepersistentindexlist_isbase = false;
            KCategorizedSortFilterProxyModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = kcategorizedsortfilterproxymodel_changepersistentindexlist_callback;
        if (changepersistentindexlist_cb) {
            const QList<QModelIndex>& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (from_ret.size())));
            for (qsizetype i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (to_ret.size())));
            for (qsizetype i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            changepersistentindexlist_cb(this, cbval1, cbval2);
            free(from_arr);
            free(to_arr);
            return;
        }
        KCategorizedSortFilterProxyModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kcategorizedsortfilterproxymodel_persistentindexlist_isbase) {
            kcategorizedsortfilterproxymodel_persistentindexlist_isbase = false;
            return KCategorizedSortFilterProxyModel::persistentIndexList();
        }
        auto persistentindexlist_cb = kcategorizedsortfilterproxymodel_persistentindexlist_callback;
        if (persistentindexlist_cb) {
            libqt_list /* of QModelIndex* */ callback_ret = persistentindexlist_cb();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCategorizedSortFilterProxyModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcategorizedsortfilterproxymodel_sender_isbase) {
            kcategorizedsortfilterproxymodel_sender_isbase = false;
            return KCategorizedSortFilterProxyModel::sender();
        }
        auto sender_cb = kcategorizedsortfilterproxymodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcategorizedsortfilterproxymodel_sendersignalindex_isbase) {
            kcategorizedsortfilterproxymodel_sendersignalindex_isbase = false;
            return KCategorizedSortFilterProxyModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcategorizedsortfilterproxymodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcategorizedsortfilterproxymodel_receivers_isbase) {
            kcategorizedsortfilterproxymodel_receivers_isbase = false;
            return KCategorizedSortFilterProxyModel::receivers(signal);
        }
        auto receivers_cb = kcategorizedsortfilterproxymodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcategorizedsortfilterproxymodel_issignalconnected_isbase) {
            kcategorizedsortfilterproxymodel_issignalconnected_isbase = false;
            return KCategorizedSortFilterProxyModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcategorizedsortfilterproxymodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KCategorizedSortFilterProxyModel_LessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KCategorizedSortFilterProxyModel_SuperLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KCategorizedSortFilterProxyModel_SubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KCategorizedSortFilterProxyModel_SuperSubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend int KCategorizedSortFilterProxyModel_CompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend int KCategorizedSortFilterProxyModel_SuperCompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KCategorizedSortFilterProxyModel_FilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool KCategorizedSortFilterProxyModel_FilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend void KCategorizedSortFilterProxyModel_ResetInternalData(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperResetInternalData(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_TimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event);
    friend void KCategorizedSortFilterProxyModel_SuperTimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event);
    friend void KCategorizedSortFilterProxyModel_ChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event);
    friend void KCategorizedSortFilterProxyModel_SuperChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event);
    friend void KCategorizedSortFilterProxyModel_CustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event);
    friend void KCategorizedSortFilterProxyModel_SuperCustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event);
    friend void KCategorizedSortFilterProxyModel_ConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KCategorizedSortFilterProxyModel_SuperConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KCategorizedSortFilterProxyModel_DisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KCategorizedSortFilterProxyModel_SuperDisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KCategorizedSortFilterProxyModel_InvalidateFilter(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperInvalidateFilter(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_InvalidateRowsFilter(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperInvalidateRowsFilter(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_InvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperInvalidateColumnsFilter(KCategorizedSortFilterProxyModel* self);
    friend QModelIndex* KCategorizedSortFilterProxyModel_CreateSourceIndex(const KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KCategorizedSortFilterProxyModel_SuperCreateSourceIndex(const KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KCategorizedSortFilterProxyModel_CreateIndex(const KCategorizedSortFilterProxyModel* self, int row, int column);
    friend QModelIndex* KCategorizedSortFilterProxyModel_SuperCreateIndex(const KCategorizedSortFilterProxyModel* self, int row, int column);
    friend void KCategorizedSortFilterProxyModel_EncodeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KCategorizedSortFilterProxyModel_SuperEncodeData(const KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KCategorizedSortFilterProxyModel_DecodeData(KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KCategorizedSortFilterProxyModel_SuperDecodeData(KCategorizedSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KCategorizedSortFilterProxyModel_BeginInsertRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_SuperBeginInsertRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_EndInsertRows(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndInsertRows(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_BeginRemoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_SuperBeginRemoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_EndRemoveRows(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndRemoveRows(KCategorizedSortFilterProxyModel* self);
    friend bool KCategorizedSortFilterProxyModel_BeginMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KCategorizedSortFilterProxyModel_SuperBeginMoveRows(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KCategorizedSortFilterProxyModel_EndMoveRows(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndMoveRows(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_BeginInsertColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_SuperBeginInsertColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_EndInsertColumns(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndInsertColumns(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_BeginRemoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_SuperBeginRemoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCategorizedSortFilterProxyModel_EndRemoveColumns(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndRemoveColumns(KCategorizedSortFilterProxyModel* self);
    friend bool KCategorizedSortFilterProxyModel_BeginMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KCategorizedSortFilterProxyModel_SuperBeginMoveColumns(KCategorizedSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KCategorizedSortFilterProxyModel_EndMoveColumns(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndMoveColumns(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_BeginResetModel(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperBeginResetModel(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_EndResetModel(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperEndResetModel(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_ChangePersistentIndex(KCategorizedSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KCategorizedSortFilterProxyModel_SuperChangePersistentIndex(KCategorizedSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KCategorizedSortFilterProxyModel_ChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KCategorizedSortFilterProxyModel_SuperChangePersistentIndexList(KCategorizedSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_PersistentIndexList(const KCategorizedSortFilterProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KCategorizedSortFilterProxyModel_SuperPersistentIndexList(const KCategorizedSortFilterProxyModel* self);
    friend QObject* KCategorizedSortFilterProxyModel_Sender(const KCategorizedSortFilterProxyModel* self);
    friend QObject* KCategorizedSortFilterProxyModel_SuperSender(const KCategorizedSortFilterProxyModel* self);
    friend int KCategorizedSortFilterProxyModel_SenderSignalIndex(const KCategorizedSortFilterProxyModel* self);
    friend int KCategorizedSortFilterProxyModel_SuperSenderSignalIndex(const KCategorizedSortFilterProxyModel* self);
    friend int KCategorizedSortFilterProxyModel_Receivers(const KCategorizedSortFilterProxyModel* self, const char* signal);
    friend int KCategorizedSortFilterProxyModel_SuperReceivers(const KCategorizedSortFilterProxyModel* self, const char* signal);
    friend bool KCategorizedSortFilterProxyModel_IsSignalConnected(const KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
    friend bool KCategorizedSortFilterProxyModel_SuperIsSignalConnected(const KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
};

#endif
