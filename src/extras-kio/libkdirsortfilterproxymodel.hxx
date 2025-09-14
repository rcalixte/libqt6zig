#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKDIRSORTFILTERPROXYMODEL_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKDIRSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirSortFilterProxyModel so that we can call protected methods
class VirtualKDirSortFilterProxyModel final : public KDirSortFilterProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKDirSortFilterProxyModel = true;

    // Virtual class public types (including callbacks)
    using KDirSortFilterProxyModel_Metacall_Callback = int (*)(KDirSortFilterProxyModel*, int, int, void**);
    using KDirSortFilterProxyModel_HasChildren_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_SubSortLessThan_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_Sort_Callback = void (*)(KDirSortFilterProxyModel*, int, int);
    using KDirSortFilterProxyModel_LessThan_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_CompareCategories_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_SetSourceModel_Callback = void (*)(KDirSortFilterProxyModel*, QAbstractItemModel*);
    using KDirSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KDirSortFilterProxyModel*, QItemSelection*);
    using KDirSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KDirSortFilterProxyModel*, QItemSelection*);
    using KDirSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const KDirSortFilterProxyModel*, int, QModelIndex*);
    using KDirSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const KDirSortFilterProxyModel*, int, QModelIndex*);
    using KDirSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_RowCount_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_ColumnCount_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Data_Callback = QVariant* (*)(const KDirSortFilterProxyModel*, QModelIndex*, int);
    using KDirSortFilterProxyModel_SetData_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, QVariant*, int);
    using KDirSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const KDirSortFilterProxyModel*, int, int, int);
    using KDirSortFilterProxyModel_SetHeaderData_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QVariant*, int);
    using KDirSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const KDirSortFilterProxyModel*, libqt_list /* of QModelIndex* */);
    using KDirSortFilterProxyModel_DropMimeData_Callback = bool (*)(KDirSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_InsertRows_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_InsertColumns_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_RemoveRows_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_RemoveColumns_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_FetchMore_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Flags_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Match_Callback = QModelIndex** (*)(const KDirSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KDirSortFilterProxyModel_Span_Callback = QSize* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_MimeTypes_Callback = const char** (*)();
    using KDirSortFilterProxyModel_SupportedDropActions_Callback = int (*)();
    using KDirSortFilterProxyModel_Submit_Callback = bool (*)();
    using KDirSortFilterProxyModel_Revert_Callback = void (*)();
    using KDirSortFilterProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_SetItemData_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KDirSortFilterProxyModel_ClearItemData_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const KDirSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_SupportedDragActions_Callback = int (*)();
    using KDirSortFilterProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KDirSortFilterProxyModel_MoveRows_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirSortFilterProxyModel_MoveColumns_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirSortFilterProxyModel_MultiData_Callback = void (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KDirSortFilterProxyModel_ResetInternalData_Callback = void (*)();
    using KDirSortFilterProxyModel_Event_Callback = bool (*)(KDirSortFilterProxyModel*, QEvent*);
    using KDirSortFilterProxyModel_EventFilter_Callback = bool (*)(KDirSortFilterProxyModel*, QObject*, QEvent*);
    using KDirSortFilterProxyModel_TimerEvent_Callback = void (*)(KDirSortFilterProxyModel*, QTimerEvent*);
    using KDirSortFilterProxyModel_ChildEvent_Callback = void (*)(KDirSortFilterProxyModel*, QChildEvent*);
    using KDirSortFilterProxyModel_CustomEvent_Callback = void (*)(KDirSortFilterProxyModel*, QEvent*);
    using KDirSortFilterProxyModel_ConnectNotify_Callback = void (*)(KDirSortFilterProxyModel*, QMetaMethod*);
    using KDirSortFilterProxyModel_DisconnectNotify_Callback = void (*)(KDirSortFilterProxyModel*, QMetaMethod*);
    using KDirSortFilterProxyModel_InvalidateFilter_Callback = void (*)();
    using KDirSortFilterProxyModel_InvalidateRowsFilter_Callback = void (*)();
    using KDirSortFilterProxyModel_InvalidateColumnsFilter_Callback = void (*)();
    using KDirSortFilterProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, int, int, void*);
    using KDirSortFilterProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, int, int);
    using KDirSortFilterProxyModel_EncodeData_Callback = void (*)(const KDirSortFilterProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KDirSortFilterProxyModel_DecodeData_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KDirSortFilterProxyModel_BeginInsertRows_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int);
    using KDirSortFilterProxyModel_EndInsertRows_Callback = void (*)();
    using KDirSortFilterProxyModel_BeginRemoveRows_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int);
    using KDirSortFilterProxyModel_EndRemoveRows_Callback = void (*)();
    using KDirSortFilterProxyModel_BeginMoveRows_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirSortFilterProxyModel_EndMoveRows_Callback = void (*)();
    using KDirSortFilterProxyModel_BeginInsertColumns_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int);
    using KDirSortFilterProxyModel_EndInsertColumns_Callback = void (*)();
    using KDirSortFilterProxyModel_BeginRemoveColumns_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int);
    using KDirSortFilterProxyModel_EndRemoveColumns_Callback = void (*)();
    using KDirSortFilterProxyModel_BeginMoveColumns_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirSortFilterProxyModel_EndMoveColumns_Callback = void (*)();
    using KDirSortFilterProxyModel_BeginResetModel_Callback = void (*)();
    using KDirSortFilterProxyModel_EndResetModel_Callback = void (*)();
    using KDirSortFilterProxyModel_ChangePersistentIndex_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_ChangePersistentIndexList_Callback = void (*)(KDirSortFilterProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KDirSortFilterProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KDirSortFilterProxyModel_Sender_Callback = QObject* (*)();
    using KDirSortFilterProxyModel_SenderSignalIndex_Callback = int (*)();
    using KDirSortFilterProxyModel_Receivers_Callback = int (*)(const KDirSortFilterProxyModel*, const char*);
    using KDirSortFilterProxyModel_IsSignalConnected_Callback = bool (*)(const KDirSortFilterProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDirSortFilterProxyModel_Metacall_Callback kdirsortfilterproxymodel_metacall_callback = nullptr;
    KDirSortFilterProxyModel_HasChildren_Callback kdirsortfilterproxymodel_haschildren_callback = nullptr;
    KDirSortFilterProxyModel_CanFetchMore_Callback kdirsortfilterproxymodel_canfetchmore_callback = nullptr;
    KDirSortFilterProxyModel_SubSortLessThan_Callback kdirsortfilterproxymodel_subsortlessthan_callback = nullptr;
    KDirSortFilterProxyModel_Sort_Callback kdirsortfilterproxymodel_sort_callback = nullptr;
    KDirSortFilterProxyModel_LessThan_Callback kdirsortfilterproxymodel_lessthan_callback = nullptr;
    KDirSortFilterProxyModel_CompareCategories_Callback kdirsortfilterproxymodel_comparecategories_callback = nullptr;
    KDirSortFilterProxyModel_SetSourceModel_Callback kdirsortfilterproxymodel_setsourcemodel_callback = nullptr;
    KDirSortFilterProxyModel_MapToSource_Callback kdirsortfilterproxymodel_maptosource_callback = nullptr;
    KDirSortFilterProxyModel_MapFromSource_Callback kdirsortfilterproxymodel_mapfromsource_callback = nullptr;
    KDirSortFilterProxyModel_MapSelectionToSource_Callback kdirsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    KDirSortFilterProxyModel_MapSelectionFromSource_Callback kdirsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    KDirSortFilterProxyModel_FilterAcceptsRow_Callback kdirsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    KDirSortFilterProxyModel_FilterAcceptsColumn_Callback kdirsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    KDirSortFilterProxyModel_Index_Callback kdirsortfilterproxymodel_index_callback = nullptr;
    KDirSortFilterProxyModel_Parent_Callback kdirsortfilterproxymodel_parent_callback = nullptr;
    KDirSortFilterProxyModel_Sibling_Callback kdirsortfilterproxymodel_sibling_callback = nullptr;
    KDirSortFilterProxyModel_RowCount_Callback kdirsortfilterproxymodel_rowcount_callback = nullptr;
    KDirSortFilterProxyModel_ColumnCount_Callback kdirsortfilterproxymodel_columncount_callback = nullptr;
    KDirSortFilterProxyModel_Data_Callback kdirsortfilterproxymodel_data_callback = nullptr;
    KDirSortFilterProxyModel_SetData_Callback kdirsortfilterproxymodel_setdata_callback = nullptr;
    KDirSortFilterProxyModel_HeaderData_Callback kdirsortfilterproxymodel_headerdata_callback = nullptr;
    KDirSortFilterProxyModel_SetHeaderData_Callback kdirsortfilterproxymodel_setheaderdata_callback = nullptr;
    KDirSortFilterProxyModel_MimeData_Callback kdirsortfilterproxymodel_mimedata_callback = nullptr;
    KDirSortFilterProxyModel_DropMimeData_Callback kdirsortfilterproxymodel_dropmimedata_callback = nullptr;
    KDirSortFilterProxyModel_InsertRows_Callback kdirsortfilterproxymodel_insertrows_callback = nullptr;
    KDirSortFilterProxyModel_InsertColumns_Callback kdirsortfilterproxymodel_insertcolumns_callback = nullptr;
    KDirSortFilterProxyModel_RemoveRows_Callback kdirsortfilterproxymodel_removerows_callback = nullptr;
    KDirSortFilterProxyModel_RemoveColumns_Callback kdirsortfilterproxymodel_removecolumns_callback = nullptr;
    KDirSortFilterProxyModel_FetchMore_Callback kdirsortfilterproxymodel_fetchmore_callback = nullptr;
    KDirSortFilterProxyModel_Flags_Callback kdirsortfilterproxymodel_flags_callback = nullptr;
    KDirSortFilterProxyModel_Buddy_Callback kdirsortfilterproxymodel_buddy_callback = nullptr;
    KDirSortFilterProxyModel_Match_Callback kdirsortfilterproxymodel_match_callback = nullptr;
    KDirSortFilterProxyModel_Span_Callback kdirsortfilterproxymodel_span_callback = nullptr;
    KDirSortFilterProxyModel_MimeTypes_Callback kdirsortfilterproxymodel_mimetypes_callback = nullptr;
    KDirSortFilterProxyModel_SupportedDropActions_Callback kdirsortfilterproxymodel_supporteddropactions_callback = nullptr;
    KDirSortFilterProxyModel_Submit_Callback kdirsortfilterproxymodel_submit_callback = nullptr;
    KDirSortFilterProxyModel_Revert_Callback kdirsortfilterproxymodel_revert_callback = nullptr;
    KDirSortFilterProxyModel_ItemData_Callback kdirsortfilterproxymodel_itemdata_callback = nullptr;
    KDirSortFilterProxyModel_SetItemData_Callback kdirsortfilterproxymodel_setitemdata_callback = nullptr;
    KDirSortFilterProxyModel_ClearItemData_Callback kdirsortfilterproxymodel_clearitemdata_callback = nullptr;
    KDirSortFilterProxyModel_CanDropMimeData_Callback kdirsortfilterproxymodel_candropmimedata_callback = nullptr;
    KDirSortFilterProxyModel_SupportedDragActions_Callback kdirsortfilterproxymodel_supporteddragactions_callback = nullptr;
    KDirSortFilterProxyModel_RoleNames_Callback kdirsortfilterproxymodel_rolenames_callback = nullptr;
    KDirSortFilterProxyModel_MoveRows_Callback kdirsortfilterproxymodel_moverows_callback = nullptr;
    KDirSortFilterProxyModel_MoveColumns_Callback kdirsortfilterproxymodel_movecolumns_callback = nullptr;
    KDirSortFilterProxyModel_MultiData_Callback kdirsortfilterproxymodel_multidata_callback = nullptr;
    KDirSortFilterProxyModel_ResetInternalData_Callback kdirsortfilterproxymodel_resetinternaldata_callback = nullptr;
    KDirSortFilterProxyModel_Event_Callback kdirsortfilterproxymodel_event_callback = nullptr;
    KDirSortFilterProxyModel_EventFilter_Callback kdirsortfilterproxymodel_eventfilter_callback = nullptr;
    KDirSortFilterProxyModel_TimerEvent_Callback kdirsortfilterproxymodel_timerevent_callback = nullptr;
    KDirSortFilterProxyModel_ChildEvent_Callback kdirsortfilterproxymodel_childevent_callback = nullptr;
    KDirSortFilterProxyModel_CustomEvent_Callback kdirsortfilterproxymodel_customevent_callback = nullptr;
    KDirSortFilterProxyModel_ConnectNotify_Callback kdirsortfilterproxymodel_connectnotify_callback = nullptr;
    KDirSortFilterProxyModel_DisconnectNotify_Callback kdirsortfilterproxymodel_disconnectnotify_callback = nullptr;
    KDirSortFilterProxyModel_InvalidateFilter_Callback kdirsortfilterproxymodel_invalidatefilter_callback = nullptr;
    KDirSortFilterProxyModel_InvalidateRowsFilter_Callback kdirsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
    KDirSortFilterProxyModel_InvalidateColumnsFilter_Callback kdirsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
    KDirSortFilterProxyModel_CreateSourceIndex_Callback kdirsortfilterproxymodel_createsourceindex_callback = nullptr;
    KDirSortFilterProxyModel_CreateIndex_Callback kdirsortfilterproxymodel_createindex_callback = nullptr;
    KDirSortFilterProxyModel_EncodeData_Callback kdirsortfilterproxymodel_encodedata_callback = nullptr;
    KDirSortFilterProxyModel_DecodeData_Callback kdirsortfilterproxymodel_decodedata_callback = nullptr;
    KDirSortFilterProxyModel_BeginInsertRows_Callback kdirsortfilterproxymodel_begininsertrows_callback = nullptr;
    KDirSortFilterProxyModel_EndInsertRows_Callback kdirsortfilterproxymodel_endinsertrows_callback = nullptr;
    KDirSortFilterProxyModel_BeginRemoveRows_Callback kdirsortfilterproxymodel_beginremoverows_callback = nullptr;
    KDirSortFilterProxyModel_EndRemoveRows_Callback kdirsortfilterproxymodel_endremoverows_callback = nullptr;
    KDirSortFilterProxyModel_BeginMoveRows_Callback kdirsortfilterproxymodel_beginmoverows_callback = nullptr;
    KDirSortFilterProxyModel_EndMoveRows_Callback kdirsortfilterproxymodel_endmoverows_callback = nullptr;
    KDirSortFilterProxyModel_BeginInsertColumns_Callback kdirsortfilterproxymodel_begininsertcolumns_callback = nullptr;
    KDirSortFilterProxyModel_EndInsertColumns_Callback kdirsortfilterproxymodel_endinsertcolumns_callback = nullptr;
    KDirSortFilterProxyModel_BeginRemoveColumns_Callback kdirsortfilterproxymodel_beginremovecolumns_callback = nullptr;
    KDirSortFilterProxyModel_EndRemoveColumns_Callback kdirsortfilterproxymodel_endremovecolumns_callback = nullptr;
    KDirSortFilterProxyModel_BeginMoveColumns_Callback kdirsortfilterproxymodel_beginmovecolumns_callback = nullptr;
    KDirSortFilterProxyModel_EndMoveColumns_Callback kdirsortfilterproxymodel_endmovecolumns_callback = nullptr;
    KDirSortFilterProxyModel_BeginResetModel_Callback kdirsortfilterproxymodel_beginresetmodel_callback = nullptr;
    KDirSortFilterProxyModel_EndResetModel_Callback kdirsortfilterproxymodel_endresetmodel_callback = nullptr;
    KDirSortFilterProxyModel_ChangePersistentIndex_Callback kdirsortfilterproxymodel_changepersistentindex_callback = nullptr;
    KDirSortFilterProxyModel_ChangePersistentIndexList_Callback kdirsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
    KDirSortFilterProxyModel_PersistentIndexList_Callback kdirsortfilterproxymodel_persistentindexlist_callback = nullptr;
    KDirSortFilterProxyModel_Sender_Callback kdirsortfilterproxymodel_sender_callback = nullptr;
    KDirSortFilterProxyModel_SenderSignalIndex_Callback kdirsortfilterproxymodel_sendersignalindex_callback = nullptr;
    KDirSortFilterProxyModel_Receivers_Callback kdirsortfilterproxymodel_receivers_callback = nullptr;
    KDirSortFilterProxyModel_IsSignalConnected_Callback kdirsortfilterproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdirsortfilterproxymodel_metacall_isbase = false;
    mutable bool kdirsortfilterproxymodel_haschildren_isbase = false;
    mutable bool kdirsortfilterproxymodel_canfetchmore_isbase = false;
    mutable bool kdirsortfilterproxymodel_subsortlessthan_isbase = false;
    mutable bool kdirsortfilterproxymodel_sort_isbase = false;
    mutable bool kdirsortfilterproxymodel_lessthan_isbase = false;
    mutable bool kdirsortfilterproxymodel_comparecategories_isbase = false;
    mutable bool kdirsortfilterproxymodel_setsourcemodel_isbase = false;
    mutable bool kdirsortfilterproxymodel_maptosource_isbase = false;
    mutable bool kdirsortfilterproxymodel_mapfromsource_isbase = false;
    mutable bool kdirsortfilterproxymodel_mapselectiontosource_isbase = false;
    mutable bool kdirsortfilterproxymodel_mapselectionfromsource_isbase = false;
    mutable bool kdirsortfilterproxymodel_filteracceptsrow_isbase = false;
    mutable bool kdirsortfilterproxymodel_filteracceptscolumn_isbase = false;
    mutable bool kdirsortfilterproxymodel_index_isbase = false;
    mutable bool kdirsortfilterproxymodel_parent_isbase = false;
    mutable bool kdirsortfilterproxymodel_sibling_isbase = false;
    mutable bool kdirsortfilterproxymodel_rowcount_isbase = false;
    mutable bool kdirsortfilterproxymodel_columncount_isbase = false;
    mutable bool kdirsortfilterproxymodel_data_isbase = false;
    mutable bool kdirsortfilterproxymodel_setdata_isbase = false;
    mutable bool kdirsortfilterproxymodel_headerdata_isbase = false;
    mutable bool kdirsortfilterproxymodel_setheaderdata_isbase = false;
    mutable bool kdirsortfilterproxymodel_mimedata_isbase = false;
    mutable bool kdirsortfilterproxymodel_dropmimedata_isbase = false;
    mutable bool kdirsortfilterproxymodel_insertrows_isbase = false;
    mutable bool kdirsortfilterproxymodel_insertcolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_removerows_isbase = false;
    mutable bool kdirsortfilterproxymodel_removecolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_fetchmore_isbase = false;
    mutable bool kdirsortfilterproxymodel_flags_isbase = false;
    mutable bool kdirsortfilterproxymodel_buddy_isbase = false;
    mutable bool kdirsortfilterproxymodel_match_isbase = false;
    mutable bool kdirsortfilterproxymodel_span_isbase = false;
    mutable bool kdirsortfilterproxymodel_mimetypes_isbase = false;
    mutable bool kdirsortfilterproxymodel_supporteddropactions_isbase = false;
    mutable bool kdirsortfilterproxymodel_submit_isbase = false;
    mutable bool kdirsortfilterproxymodel_revert_isbase = false;
    mutable bool kdirsortfilterproxymodel_itemdata_isbase = false;
    mutable bool kdirsortfilterproxymodel_setitemdata_isbase = false;
    mutable bool kdirsortfilterproxymodel_clearitemdata_isbase = false;
    mutable bool kdirsortfilterproxymodel_candropmimedata_isbase = false;
    mutable bool kdirsortfilterproxymodel_supporteddragactions_isbase = false;
    mutable bool kdirsortfilterproxymodel_rolenames_isbase = false;
    mutable bool kdirsortfilterproxymodel_moverows_isbase = false;
    mutable bool kdirsortfilterproxymodel_movecolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_multidata_isbase = false;
    mutable bool kdirsortfilterproxymodel_resetinternaldata_isbase = false;
    mutable bool kdirsortfilterproxymodel_event_isbase = false;
    mutable bool kdirsortfilterproxymodel_eventfilter_isbase = false;
    mutable bool kdirsortfilterproxymodel_timerevent_isbase = false;
    mutable bool kdirsortfilterproxymodel_childevent_isbase = false;
    mutable bool kdirsortfilterproxymodel_customevent_isbase = false;
    mutable bool kdirsortfilterproxymodel_connectnotify_isbase = false;
    mutable bool kdirsortfilterproxymodel_disconnectnotify_isbase = false;
    mutable bool kdirsortfilterproxymodel_invalidatefilter_isbase = false;
    mutable bool kdirsortfilterproxymodel_invalidaterowsfilter_isbase = false;
    mutable bool kdirsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
    mutable bool kdirsortfilterproxymodel_createsourceindex_isbase = false;
    mutable bool kdirsortfilterproxymodel_createindex_isbase = false;
    mutable bool kdirsortfilterproxymodel_encodedata_isbase = false;
    mutable bool kdirsortfilterproxymodel_decodedata_isbase = false;
    mutable bool kdirsortfilterproxymodel_begininsertrows_isbase = false;
    mutable bool kdirsortfilterproxymodel_endinsertrows_isbase = false;
    mutable bool kdirsortfilterproxymodel_beginremoverows_isbase = false;
    mutable bool kdirsortfilterproxymodel_endremoverows_isbase = false;
    mutable bool kdirsortfilterproxymodel_beginmoverows_isbase = false;
    mutable bool kdirsortfilterproxymodel_endmoverows_isbase = false;
    mutable bool kdirsortfilterproxymodel_begininsertcolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_endinsertcolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_beginremovecolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_endremovecolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_beginmovecolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_endmovecolumns_isbase = false;
    mutable bool kdirsortfilterproxymodel_beginresetmodel_isbase = false;
    mutable bool kdirsortfilterproxymodel_endresetmodel_isbase = false;
    mutable bool kdirsortfilterproxymodel_changepersistentindex_isbase = false;
    mutable bool kdirsortfilterproxymodel_changepersistentindexlist_isbase = false;
    mutable bool kdirsortfilterproxymodel_persistentindexlist_isbase = false;
    mutable bool kdirsortfilterproxymodel_sender_isbase = false;
    mutable bool kdirsortfilterproxymodel_sendersignalindex_isbase = false;
    mutable bool kdirsortfilterproxymodel_receivers_isbase = false;
    mutable bool kdirsortfilterproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKDirSortFilterProxyModel() : KDirSortFilterProxyModel() {};
    VirtualKDirSortFilterProxyModel(QObject* parent) : KDirSortFilterProxyModel(parent) {};

    ~VirtualKDirSortFilterProxyModel() {
        kdirsortfilterproxymodel_metacall_callback = nullptr;
        kdirsortfilterproxymodel_haschildren_callback = nullptr;
        kdirsortfilterproxymodel_canfetchmore_callback = nullptr;
        kdirsortfilterproxymodel_subsortlessthan_callback = nullptr;
        kdirsortfilterproxymodel_sort_callback = nullptr;
        kdirsortfilterproxymodel_lessthan_callback = nullptr;
        kdirsortfilterproxymodel_comparecategories_callback = nullptr;
        kdirsortfilterproxymodel_setsourcemodel_callback = nullptr;
        kdirsortfilterproxymodel_maptosource_callback = nullptr;
        kdirsortfilterproxymodel_mapfromsource_callback = nullptr;
        kdirsortfilterproxymodel_mapselectiontosource_callback = nullptr;
        kdirsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
        kdirsortfilterproxymodel_filteracceptsrow_callback = nullptr;
        kdirsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
        kdirsortfilterproxymodel_index_callback = nullptr;
        kdirsortfilterproxymodel_parent_callback = nullptr;
        kdirsortfilterproxymodel_sibling_callback = nullptr;
        kdirsortfilterproxymodel_rowcount_callback = nullptr;
        kdirsortfilterproxymodel_columncount_callback = nullptr;
        kdirsortfilterproxymodel_data_callback = nullptr;
        kdirsortfilterproxymodel_setdata_callback = nullptr;
        kdirsortfilterproxymodel_headerdata_callback = nullptr;
        kdirsortfilterproxymodel_setheaderdata_callback = nullptr;
        kdirsortfilterproxymodel_mimedata_callback = nullptr;
        kdirsortfilterproxymodel_dropmimedata_callback = nullptr;
        kdirsortfilterproxymodel_insertrows_callback = nullptr;
        kdirsortfilterproxymodel_insertcolumns_callback = nullptr;
        kdirsortfilterproxymodel_removerows_callback = nullptr;
        kdirsortfilterproxymodel_removecolumns_callback = nullptr;
        kdirsortfilterproxymodel_fetchmore_callback = nullptr;
        kdirsortfilterproxymodel_flags_callback = nullptr;
        kdirsortfilterproxymodel_buddy_callback = nullptr;
        kdirsortfilterproxymodel_match_callback = nullptr;
        kdirsortfilterproxymodel_span_callback = nullptr;
        kdirsortfilterproxymodel_mimetypes_callback = nullptr;
        kdirsortfilterproxymodel_supporteddropactions_callback = nullptr;
        kdirsortfilterproxymodel_submit_callback = nullptr;
        kdirsortfilterproxymodel_revert_callback = nullptr;
        kdirsortfilterproxymodel_itemdata_callback = nullptr;
        kdirsortfilterproxymodel_setitemdata_callback = nullptr;
        kdirsortfilterproxymodel_clearitemdata_callback = nullptr;
        kdirsortfilterproxymodel_candropmimedata_callback = nullptr;
        kdirsortfilterproxymodel_supporteddragactions_callback = nullptr;
        kdirsortfilterproxymodel_rolenames_callback = nullptr;
        kdirsortfilterproxymodel_moverows_callback = nullptr;
        kdirsortfilterproxymodel_movecolumns_callback = nullptr;
        kdirsortfilterproxymodel_multidata_callback = nullptr;
        kdirsortfilterproxymodel_resetinternaldata_callback = nullptr;
        kdirsortfilterproxymodel_event_callback = nullptr;
        kdirsortfilterproxymodel_eventfilter_callback = nullptr;
        kdirsortfilterproxymodel_timerevent_callback = nullptr;
        kdirsortfilterproxymodel_childevent_callback = nullptr;
        kdirsortfilterproxymodel_customevent_callback = nullptr;
        kdirsortfilterproxymodel_connectnotify_callback = nullptr;
        kdirsortfilterproxymodel_disconnectnotify_callback = nullptr;
        kdirsortfilterproxymodel_invalidatefilter_callback = nullptr;
        kdirsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
        kdirsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
        kdirsortfilterproxymodel_createsourceindex_callback = nullptr;
        kdirsortfilterproxymodel_createindex_callback = nullptr;
        kdirsortfilterproxymodel_encodedata_callback = nullptr;
        kdirsortfilterproxymodel_decodedata_callback = nullptr;
        kdirsortfilterproxymodel_begininsertrows_callback = nullptr;
        kdirsortfilterproxymodel_endinsertrows_callback = nullptr;
        kdirsortfilterproxymodel_beginremoverows_callback = nullptr;
        kdirsortfilterproxymodel_endremoverows_callback = nullptr;
        kdirsortfilterproxymodel_beginmoverows_callback = nullptr;
        kdirsortfilterproxymodel_endmoverows_callback = nullptr;
        kdirsortfilterproxymodel_begininsertcolumns_callback = nullptr;
        kdirsortfilterproxymodel_endinsertcolumns_callback = nullptr;
        kdirsortfilterproxymodel_beginremovecolumns_callback = nullptr;
        kdirsortfilterproxymodel_endremovecolumns_callback = nullptr;
        kdirsortfilterproxymodel_beginmovecolumns_callback = nullptr;
        kdirsortfilterproxymodel_endmovecolumns_callback = nullptr;
        kdirsortfilterproxymodel_beginresetmodel_callback = nullptr;
        kdirsortfilterproxymodel_endresetmodel_callback = nullptr;
        kdirsortfilterproxymodel_changepersistentindex_callback = nullptr;
        kdirsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
        kdirsortfilterproxymodel_persistentindexlist_callback = nullptr;
        kdirsortfilterproxymodel_sender_callback = nullptr;
        kdirsortfilterproxymodel_sendersignalindex_callback = nullptr;
        kdirsortfilterproxymodel_receivers_callback = nullptr;
        kdirsortfilterproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDirSortFilterProxyModel_Metacall_Callback(KDirSortFilterProxyModel_Metacall_Callback cb) { kdirsortfilterproxymodel_metacall_callback = cb; }
    inline void setKDirSortFilterProxyModel_HasChildren_Callback(KDirSortFilterProxyModel_HasChildren_Callback cb) { kdirsortfilterproxymodel_haschildren_callback = cb; }
    inline void setKDirSortFilterProxyModel_CanFetchMore_Callback(KDirSortFilterProxyModel_CanFetchMore_Callback cb) { kdirsortfilterproxymodel_canfetchmore_callback = cb; }
    inline void setKDirSortFilterProxyModel_SubSortLessThan_Callback(KDirSortFilterProxyModel_SubSortLessThan_Callback cb) { kdirsortfilterproxymodel_subsortlessthan_callback = cb; }
    inline void setKDirSortFilterProxyModel_Sort_Callback(KDirSortFilterProxyModel_Sort_Callback cb) { kdirsortfilterproxymodel_sort_callback = cb; }
    inline void setKDirSortFilterProxyModel_LessThan_Callback(KDirSortFilterProxyModel_LessThan_Callback cb) { kdirsortfilterproxymodel_lessthan_callback = cb; }
    inline void setKDirSortFilterProxyModel_CompareCategories_Callback(KDirSortFilterProxyModel_CompareCategories_Callback cb) { kdirsortfilterproxymodel_comparecategories_callback = cb; }
    inline void setKDirSortFilterProxyModel_SetSourceModel_Callback(KDirSortFilterProxyModel_SetSourceModel_Callback cb) { kdirsortfilterproxymodel_setsourcemodel_callback = cb; }
    inline void setKDirSortFilterProxyModel_MapToSource_Callback(KDirSortFilterProxyModel_MapToSource_Callback cb) { kdirsortfilterproxymodel_maptosource_callback = cb; }
    inline void setKDirSortFilterProxyModel_MapFromSource_Callback(KDirSortFilterProxyModel_MapFromSource_Callback cb) { kdirsortfilterproxymodel_mapfromsource_callback = cb; }
    inline void setKDirSortFilterProxyModel_MapSelectionToSource_Callback(KDirSortFilterProxyModel_MapSelectionToSource_Callback cb) { kdirsortfilterproxymodel_mapselectiontosource_callback = cb; }
    inline void setKDirSortFilterProxyModel_MapSelectionFromSource_Callback(KDirSortFilterProxyModel_MapSelectionFromSource_Callback cb) { kdirsortfilterproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKDirSortFilterProxyModel_FilterAcceptsRow_Callback(KDirSortFilterProxyModel_FilterAcceptsRow_Callback cb) { kdirsortfilterproxymodel_filteracceptsrow_callback = cb; }
    inline void setKDirSortFilterProxyModel_FilterAcceptsColumn_Callback(KDirSortFilterProxyModel_FilterAcceptsColumn_Callback cb) { kdirsortfilterproxymodel_filteracceptscolumn_callback = cb; }
    inline void setKDirSortFilterProxyModel_Index_Callback(KDirSortFilterProxyModel_Index_Callback cb) { kdirsortfilterproxymodel_index_callback = cb; }
    inline void setKDirSortFilterProxyModel_Parent_Callback(KDirSortFilterProxyModel_Parent_Callback cb) { kdirsortfilterproxymodel_parent_callback = cb; }
    inline void setKDirSortFilterProxyModel_Sibling_Callback(KDirSortFilterProxyModel_Sibling_Callback cb) { kdirsortfilterproxymodel_sibling_callback = cb; }
    inline void setKDirSortFilterProxyModel_RowCount_Callback(KDirSortFilterProxyModel_RowCount_Callback cb) { kdirsortfilterproxymodel_rowcount_callback = cb; }
    inline void setKDirSortFilterProxyModel_ColumnCount_Callback(KDirSortFilterProxyModel_ColumnCount_Callback cb) { kdirsortfilterproxymodel_columncount_callback = cb; }
    inline void setKDirSortFilterProxyModel_Data_Callback(KDirSortFilterProxyModel_Data_Callback cb) { kdirsortfilterproxymodel_data_callback = cb; }
    inline void setKDirSortFilterProxyModel_SetData_Callback(KDirSortFilterProxyModel_SetData_Callback cb) { kdirsortfilterproxymodel_setdata_callback = cb; }
    inline void setKDirSortFilterProxyModel_HeaderData_Callback(KDirSortFilterProxyModel_HeaderData_Callback cb) { kdirsortfilterproxymodel_headerdata_callback = cb; }
    inline void setKDirSortFilterProxyModel_SetHeaderData_Callback(KDirSortFilterProxyModel_SetHeaderData_Callback cb) { kdirsortfilterproxymodel_setheaderdata_callback = cb; }
    inline void setKDirSortFilterProxyModel_MimeData_Callback(KDirSortFilterProxyModel_MimeData_Callback cb) { kdirsortfilterproxymodel_mimedata_callback = cb; }
    inline void setKDirSortFilterProxyModel_DropMimeData_Callback(KDirSortFilterProxyModel_DropMimeData_Callback cb) { kdirsortfilterproxymodel_dropmimedata_callback = cb; }
    inline void setKDirSortFilterProxyModel_InsertRows_Callback(KDirSortFilterProxyModel_InsertRows_Callback cb) { kdirsortfilterproxymodel_insertrows_callback = cb; }
    inline void setKDirSortFilterProxyModel_InsertColumns_Callback(KDirSortFilterProxyModel_InsertColumns_Callback cb) { kdirsortfilterproxymodel_insertcolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_RemoveRows_Callback(KDirSortFilterProxyModel_RemoveRows_Callback cb) { kdirsortfilterproxymodel_removerows_callback = cb; }
    inline void setKDirSortFilterProxyModel_RemoveColumns_Callback(KDirSortFilterProxyModel_RemoveColumns_Callback cb) { kdirsortfilterproxymodel_removecolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_FetchMore_Callback(KDirSortFilterProxyModel_FetchMore_Callback cb) { kdirsortfilterproxymodel_fetchmore_callback = cb; }
    inline void setKDirSortFilterProxyModel_Flags_Callback(KDirSortFilterProxyModel_Flags_Callback cb) { kdirsortfilterproxymodel_flags_callback = cb; }
    inline void setKDirSortFilterProxyModel_Buddy_Callback(KDirSortFilterProxyModel_Buddy_Callback cb) { kdirsortfilterproxymodel_buddy_callback = cb; }
    inline void setKDirSortFilterProxyModel_Match_Callback(KDirSortFilterProxyModel_Match_Callback cb) { kdirsortfilterproxymodel_match_callback = cb; }
    inline void setKDirSortFilterProxyModel_Span_Callback(KDirSortFilterProxyModel_Span_Callback cb) { kdirsortfilterproxymodel_span_callback = cb; }
    inline void setKDirSortFilterProxyModel_MimeTypes_Callback(KDirSortFilterProxyModel_MimeTypes_Callback cb) { kdirsortfilterproxymodel_mimetypes_callback = cb; }
    inline void setKDirSortFilterProxyModel_SupportedDropActions_Callback(KDirSortFilterProxyModel_SupportedDropActions_Callback cb) { kdirsortfilterproxymodel_supporteddropactions_callback = cb; }
    inline void setKDirSortFilterProxyModel_Submit_Callback(KDirSortFilterProxyModel_Submit_Callback cb) { kdirsortfilterproxymodel_submit_callback = cb; }
    inline void setKDirSortFilterProxyModel_Revert_Callback(KDirSortFilterProxyModel_Revert_Callback cb) { kdirsortfilterproxymodel_revert_callback = cb; }
    inline void setKDirSortFilterProxyModel_ItemData_Callback(KDirSortFilterProxyModel_ItemData_Callback cb) { kdirsortfilterproxymodel_itemdata_callback = cb; }
    inline void setKDirSortFilterProxyModel_SetItemData_Callback(KDirSortFilterProxyModel_SetItemData_Callback cb) { kdirsortfilterproxymodel_setitemdata_callback = cb; }
    inline void setKDirSortFilterProxyModel_ClearItemData_Callback(KDirSortFilterProxyModel_ClearItemData_Callback cb) { kdirsortfilterproxymodel_clearitemdata_callback = cb; }
    inline void setKDirSortFilterProxyModel_CanDropMimeData_Callback(KDirSortFilterProxyModel_CanDropMimeData_Callback cb) { kdirsortfilterproxymodel_candropmimedata_callback = cb; }
    inline void setKDirSortFilterProxyModel_SupportedDragActions_Callback(KDirSortFilterProxyModel_SupportedDragActions_Callback cb) { kdirsortfilterproxymodel_supporteddragactions_callback = cb; }
    inline void setKDirSortFilterProxyModel_RoleNames_Callback(KDirSortFilterProxyModel_RoleNames_Callback cb) { kdirsortfilterproxymodel_rolenames_callback = cb; }
    inline void setKDirSortFilterProxyModel_MoveRows_Callback(KDirSortFilterProxyModel_MoveRows_Callback cb) { kdirsortfilterproxymodel_moverows_callback = cb; }
    inline void setKDirSortFilterProxyModel_MoveColumns_Callback(KDirSortFilterProxyModel_MoveColumns_Callback cb) { kdirsortfilterproxymodel_movecolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_MultiData_Callback(KDirSortFilterProxyModel_MultiData_Callback cb) { kdirsortfilterproxymodel_multidata_callback = cb; }
    inline void setKDirSortFilterProxyModel_ResetInternalData_Callback(KDirSortFilterProxyModel_ResetInternalData_Callback cb) { kdirsortfilterproxymodel_resetinternaldata_callback = cb; }
    inline void setKDirSortFilterProxyModel_Event_Callback(KDirSortFilterProxyModel_Event_Callback cb) { kdirsortfilterproxymodel_event_callback = cb; }
    inline void setKDirSortFilterProxyModel_EventFilter_Callback(KDirSortFilterProxyModel_EventFilter_Callback cb) { kdirsortfilterproxymodel_eventfilter_callback = cb; }
    inline void setKDirSortFilterProxyModel_TimerEvent_Callback(KDirSortFilterProxyModel_TimerEvent_Callback cb) { kdirsortfilterproxymodel_timerevent_callback = cb; }
    inline void setKDirSortFilterProxyModel_ChildEvent_Callback(KDirSortFilterProxyModel_ChildEvent_Callback cb) { kdirsortfilterproxymodel_childevent_callback = cb; }
    inline void setKDirSortFilterProxyModel_CustomEvent_Callback(KDirSortFilterProxyModel_CustomEvent_Callback cb) { kdirsortfilterproxymodel_customevent_callback = cb; }
    inline void setKDirSortFilterProxyModel_ConnectNotify_Callback(KDirSortFilterProxyModel_ConnectNotify_Callback cb) { kdirsortfilterproxymodel_connectnotify_callback = cb; }
    inline void setKDirSortFilterProxyModel_DisconnectNotify_Callback(KDirSortFilterProxyModel_DisconnectNotify_Callback cb) { kdirsortfilterproxymodel_disconnectnotify_callback = cb; }
    inline void setKDirSortFilterProxyModel_InvalidateFilter_Callback(KDirSortFilterProxyModel_InvalidateFilter_Callback cb) { kdirsortfilterproxymodel_invalidatefilter_callback = cb; }
    inline void setKDirSortFilterProxyModel_InvalidateRowsFilter_Callback(KDirSortFilterProxyModel_InvalidateRowsFilter_Callback cb) { kdirsortfilterproxymodel_invalidaterowsfilter_callback = cb; }
    inline void setKDirSortFilterProxyModel_InvalidateColumnsFilter_Callback(KDirSortFilterProxyModel_InvalidateColumnsFilter_Callback cb) { kdirsortfilterproxymodel_invalidatecolumnsfilter_callback = cb; }
    inline void setKDirSortFilterProxyModel_CreateSourceIndex_Callback(KDirSortFilterProxyModel_CreateSourceIndex_Callback cb) { kdirsortfilterproxymodel_createsourceindex_callback = cb; }
    inline void setKDirSortFilterProxyModel_CreateIndex_Callback(KDirSortFilterProxyModel_CreateIndex_Callback cb) { kdirsortfilterproxymodel_createindex_callback = cb; }
    inline void setKDirSortFilterProxyModel_EncodeData_Callback(KDirSortFilterProxyModel_EncodeData_Callback cb) { kdirsortfilterproxymodel_encodedata_callback = cb; }
    inline void setKDirSortFilterProxyModel_DecodeData_Callback(KDirSortFilterProxyModel_DecodeData_Callback cb) { kdirsortfilterproxymodel_decodedata_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginInsertRows_Callback(KDirSortFilterProxyModel_BeginInsertRows_Callback cb) { kdirsortfilterproxymodel_begininsertrows_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndInsertRows_Callback(KDirSortFilterProxyModel_EndInsertRows_Callback cb) { kdirsortfilterproxymodel_endinsertrows_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginRemoveRows_Callback(KDirSortFilterProxyModel_BeginRemoveRows_Callback cb) { kdirsortfilterproxymodel_beginremoverows_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndRemoveRows_Callback(KDirSortFilterProxyModel_EndRemoveRows_Callback cb) { kdirsortfilterproxymodel_endremoverows_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginMoveRows_Callback(KDirSortFilterProxyModel_BeginMoveRows_Callback cb) { kdirsortfilterproxymodel_beginmoverows_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndMoveRows_Callback(KDirSortFilterProxyModel_EndMoveRows_Callback cb) { kdirsortfilterproxymodel_endmoverows_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginInsertColumns_Callback(KDirSortFilterProxyModel_BeginInsertColumns_Callback cb) { kdirsortfilterproxymodel_begininsertcolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndInsertColumns_Callback(KDirSortFilterProxyModel_EndInsertColumns_Callback cb) { kdirsortfilterproxymodel_endinsertcolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginRemoveColumns_Callback(KDirSortFilterProxyModel_BeginRemoveColumns_Callback cb) { kdirsortfilterproxymodel_beginremovecolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndRemoveColumns_Callback(KDirSortFilterProxyModel_EndRemoveColumns_Callback cb) { kdirsortfilterproxymodel_endremovecolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginMoveColumns_Callback(KDirSortFilterProxyModel_BeginMoveColumns_Callback cb) { kdirsortfilterproxymodel_beginmovecolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndMoveColumns_Callback(KDirSortFilterProxyModel_EndMoveColumns_Callback cb) { kdirsortfilterproxymodel_endmovecolumns_callback = cb; }
    inline void setKDirSortFilterProxyModel_BeginResetModel_Callback(KDirSortFilterProxyModel_BeginResetModel_Callback cb) { kdirsortfilterproxymodel_beginresetmodel_callback = cb; }
    inline void setKDirSortFilterProxyModel_EndResetModel_Callback(KDirSortFilterProxyModel_EndResetModel_Callback cb) { kdirsortfilterproxymodel_endresetmodel_callback = cb; }
    inline void setKDirSortFilterProxyModel_ChangePersistentIndex_Callback(KDirSortFilterProxyModel_ChangePersistentIndex_Callback cb) { kdirsortfilterproxymodel_changepersistentindex_callback = cb; }
    inline void setKDirSortFilterProxyModel_ChangePersistentIndexList_Callback(KDirSortFilterProxyModel_ChangePersistentIndexList_Callback cb) { kdirsortfilterproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKDirSortFilterProxyModel_PersistentIndexList_Callback(KDirSortFilterProxyModel_PersistentIndexList_Callback cb) { kdirsortfilterproxymodel_persistentindexlist_callback = cb; }
    inline void setKDirSortFilterProxyModel_Sender_Callback(KDirSortFilterProxyModel_Sender_Callback cb) { kdirsortfilterproxymodel_sender_callback = cb; }
    inline void setKDirSortFilterProxyModel_SenderSignalIndex_Callback(KDirSortFilterProxyModel_SenderSignalIndex_Callback cb) { kdirsortfilterproxymodel_sendersignalindex_callback = cb; }
    inline void setKDirSortFilterProxyModel_Receivers_Callback(KDirSortFilterProxyModel_Receivers_Callback cb) { kdirsortfilterproxymodel_receivers_callback = cb; }
    inline void setKDirSortFilterProxyModel_IsSignalConnected_Callback(KDirSortFilterProxyModel_IsSignalConnected_Callback cb) { kdirsortfilterproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDirSortFilterProxyModel_Metacall_IsBase(bool value) const { kdirsortfilterproxymodel_metacall_isbase = value; }
    inline void setKDirSortFilterProxyModel_HasChildren_IsBase(bool value) const { kdirsortfilterproxymodel_haschildren_isbase = value; }
    inline void setKDirSortFilterProxyModel_CanFetchMore_IsBase(bool value) const { kdirsortfilterproxymodel_canfetchmore_isbase = value; }
    inline void setKDirSortFilterProxyModel_SubSortLessThan_IsBase(bool value) const { kdirsortfilterproxymodel_subsortlessthan_isbase = value; }
    inline void setKDirSortFilterProxyModel_Sort_IsBase(bool value) const { kdirsortfilterproxymodel_sort_isbase = value; }
    inline void setKDirSortFilterProxyModel_LessThan_IsBase(bool value) const { kdirsortfilterproxymodel_lessthan_isbase = value; }
    inline void setKDirSortFilterProxyModel_CompareCategories_IsBase(bool value) const { kdirsortfilterproxymodel_comparecategories_isbase = value; }
    inline void setKDirSortFilterProxyModel_SetSourceModel_IsBase(bool value) const { kdirsortfilterproxymodel_setsourcemodel_isbase = value; }
    inline void setKDirSortFilterProxyModel_MapToSource_IsBase(bool value) const { kdirsortfilterproxymodel_maptosource_isbase = value; }
    inline void setKDirSortFilterProxyModel_MapFromSource_IsBase(bool value) const { kdirsortfilterproxymodel_mapfromsource_isbase = value; }
    inline void setKDirSortFilterProxyModel_MapSelectionToSource_IsBase(bool value) const { kdirsortfilterproxymodel_mapselectiontosource_isbase = value; }
    inline void setKDirSortFilterProxyModel_MapSelectionFromSource_IsBase(bool value) const { kdirsortfilterproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKDirSortFilterProxyModel_FilterAcceptsRow_IsBase(bool value) const { kdirsortfilterproxymodel_filteracceptsrow_isbase = value; }
    inline void setKDirSortFilterProxyModel_FilterAcceptsColumn_IsBase(bool value) const { kdirsortfilterproxymodel_filteracceptscolumn_isbase = value; }
    inline void setKDirSortFilterProxyModel_Index_IsBase(bool value) const { kdirsortfilterproxymodel_index_isbase = value; }
    inline void setKDirSortFilterProxyModel_Parent_IsBase(bool value) const { kdirsortfilterproxymodel_parent_isbase = value; }
    inline void setKDirSortFilterProxyModel_Sibling_IsBase(bool value) const { kdirsortfilterproxymodel_sibling_isbase = value; }
    inline void setKDirSortFilterProxyModel_RowCount_IsBase(bool value) const { kdirsortfilterproxymodel_rowcount_isbase = value; }
    inline void setKDirSortFilterProxyModel_ColumnCount_IsBase(bool value) const { kdirsortfilterproxymodel_columncount_isbase = value; }
    inline void setKDirSortFilterProxyModel_Data_IsBase(bool value) const { kdirsortfilterproxymodel_data_isbase = value; }
    inline void setKDirSortFilterProxyModel_SetData_IsBase(bool value) const { kdirsortfilterproxymodel_setdata_isbase = value; }
    inline void setKDirSortFilterProxyModel_HeaderData_IsBase(bool value) const { kdirsortfilterproxymodel_headerdata_isbase = value; }
    inline void setKDirSortFilterProxyModel_SetHeaderData_IsBase(bool value) const { kdirsortfilterproxymodel_setheaderdata_isbase = value; }
    inline void setKDirSortFilterProxyModel_MimeData_IsBase(bool value) const { kdirsortfilterproxymodel_mimedata_isbase = value; }
    inline void setKDirSortFilterProxyModel_DropMimeData_IsBase(bool value) const { kdirsortfilterproxymodel_dropmimedata_isbase = value; }
    inline void setKDirSortFilterProxyModel_InsertRows_IsBase(bool value) const { kdirsortfilterproxymodel_insertrows_isbase = value; }
    inline void setKDirSortFilterProxyModel_InsertColumns_IsBase(bool value) const { kdirsortfilterproxymodel_insertcolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_RemoveRows_IsBase(bool value) const { kdirsortfilterproxymodel_removerows_isbase = value; }
    inline void setKDirSortFilterProxyModel_RemoveColumns_IsBase(bool value) const { kdirsortfilterproxymodel_removecolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_FetchMore_IsBase(bool value) const { kdirsortfilterproxymodel_fetchmore_isbase = value; }
    inline void setKDirSortFilterProxyModel_Flags_IsBase(bool value) const { kdirsortfilterproxymodel_flags_isbase = value; }
    inline void setKDirSortFilterProxyModel_Buddy_IsBase(bool value) const { kdirsortfilterproxymodel_buddy_isbase = value; }
    inline void setKDirSortFilterProxyModel_Match_IsBase(bool value) const { kdirsortfilterproxymodel_match_isbase = value; }
    inline void setKDirSortFilterProxyModel_Span_IsBase(bool value) const { kdirsortfilterproxymodel_span_isbase = value; }
    inline void setKDirSortFilterProxyModel_MimeTypes_IsBase(bool value) const { kdirsortfilterproxymodel_mimetypes_isbase = value; }
    inline void setKDirSortFilterProxyModel_SupportedDropActions_IsBase(bool value) const { kdirsortfilterproxymodel_supporteddropactions_isbase = value; }
    inline void setKDirSortFilterProxyModel_Submit_IsBase(bool value) const { kdirsortfilterproxymodel_submit_isbase = value; }
    inline void setKDirSortFilterProxyModel_Revert_IsBase(bool value) const { kdirsortfilterproxymodel_revert_isbase = value; }
    inline void setKDirSortFilterProxyModel_ItemData_IsBase(bool value) const { kdirsortfilterproxymodel_itemdata_isbase = value; }
    inline void setKDirSortFilterProxyModel_SetItemData_IsBase(bool value) const { kdirsortfilterproxymodel_setitemdata_isbase = value; }
    inline void setKDirSortFilterProxyModel_ClearItemData_IsBase(bool value) const { kdirsortfilterproxymodel_clearitemdata_isbase = value; }
    inline void setKDirSortFilterProxyModel_CanDropMimeData_IsBase(bool value) const { kdirsortfilterproxymodel_candropmimedata_isbase = value; }
    inline void setKDirSortFilterProxyModel_SupportedDragActions_IsBase(bool value) const { kdirsortfilterproxymodel_supporteddragactions_isbase = value; }
    inline void setKDirSortFilterProxyModel_RoleNames_IsBase(bool value) const { kdirsortfilterproxymodel_rolenames_isbase = value; }
    inline void setKDirSortFilterProxyModel_MoveRows_IsBase(bool value) const { kdirsortfilterproxymodel_moverows_isbase = value; }
    inline void setKDirSortFilterProxyModel_MoveColumns_IsBase(bool value) const { kdirsortfilterproxymodel_movecolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_MultiData_IsBase(bool value) const { kdirsortfilterproxymodel_multidata_isbase = value; }
    inline void setKDirSortFilterProxyModel_ResetInternalData_IsBase(bool value) const { kdirsortfilterproxymodel_resetinternaldata_isbase = value; }
    inline void setKDirSortFilterProxyModel_Event_IsBase(bool value) const { kdirsortfilterproxymodel_event_isbase = value; }
    inline void setKDirSortFilterProxyModel_EventFilter_IsBase(bool value) const { kdirsortfilterproxymodel_eventfilter_isbase = value; }
    inline void setKDirSortFilterProxyModel_TimerEvent_IsBase(bool value) const { kdirsortfilterproxymodel_timerevent_isbase = value; }
    inline void setKDirSortFilterProxyModel_ChildEvent_IsBase(bool value) const { kdirsortfilterproxymodel_childevent_isbase = value; }
    inline void setKDirSortFilterProxyModel_CustomEvent_IsBase(bool value) const { kdirsortfilterproxymodel_customevent_isbase = value; }
    inline void setKDirSortFilterProxyModel_ConnectNotify_IsBase(bool value) const { kdirsortfilterproxymodel_connectnotify_isbase = value; }
    inline void setKDirSortFilterProxyModel_DisconnectNotify_IsBase(bool value) const { kdirsortfilterproxymodel_disconnectnotify_isbase = value; }
    inline void setKDirSortFilterProxyModel_InvalidateFilter_IsBase(bool value) const { kdirsortfilterproxymodel_invalidatefilter_isbase = value; }
    inline void setKDirSortFilterProxyModel_InvalidateRowsFilter_IsBase(bool value) const { kdirsortfilterproxymodel_invalidaterowsfilter_isbase = value; }
    inline void setKDirSortFilterProxyModel_InvalidateColumnsFilter_IsBase(bool value) const { kdirsortfilterproxymodel_invalidatecolumnsfilter_isbase = value; }
    inline void setKDirSortFilterProxyModel_CreateSourceIndex_IsBase(bool value) const { kdirsortfilterproxymodel_createsourceindex_isbase = value; }
    inline void setKDirSortFilterProxyModel_CreateIndex_IsBase(bool value) const { kdirsortfilterproxymodel_createindex_isbase = value; }
    inline void setKDirSortFilterProxyModel_EncodeData_IsBase(bool value) const { kdirsortfilterproxymodel_encodedata_isbase = value; }
    inline void setKDirSortFilterProxyModel_DecodeData_IsBase(bool value) const { kdirsortfilterproxymodel_decodedata_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginInsertRows_IsBase(bool value) const { kdirsortfilterproxymodel_begininsertrows_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndInsertRows_IsBase(bool value) const { kdirsortfilterproxymodel_endinsertrows_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginRemoveRows_IsBase(bool value) const { kdirsortfilterproxymodel_beginremoverows_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndRemoveRows_IsBase(bool value) const { kdirsortfilterproxymodel_endremoverows_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginMoveRows_IsBase(bool value) const { kdirsortfilterproxymodel_beginmoverows_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndMoveRows_IsBase(bool value) const { kdirsortfilterproxymodel_endmoverows_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginInsertColumns_IsBase(bool value) const { kdirsortfilterproxymodel_begininsertcolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndInsertColumns_IsBase(bool value) const { kdirsortfilterproxymodel_endinsertcolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginRemoveColumns_IsBase(bool value) const { kdirsortfilterproxymodel_beginremovecolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndRemoveColumns_IsBase(bool value) const { kdirsortfilterproxymodel_endremovecolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginMoveColumns_IsBase(bool value) const { kdirsortfilterproxymodel_beginmovecolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndMoveColumns_IsBase(bool value) const { kdirsortfilterproxymodel_endmovecolumns_isbase = value; }
    inline void setKDirSortFilterProxyModel_BeginResetModel_IsBase(bool value) const { kdirsortfilterproxymodel_beginresetmodel_isbase = value; }
    inline void setKDirSortFilterProxyModel_EndResetModel_IsBase(bool value) const { kdirsortfilterproxymodel_endresetmodel_isbase = value; }
    inline void setKDirSortFilterProxyModel_ChangePersistentIndex_IsBase(bool value) const { kdirsortfilterproxymodel_changepersistentindex_isbase = value; }
    inline void setKDirSortFilterProxyModel_ChangePersistentIndexList_IsBase(bool value) const { kdirsortfilterproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKDirSortFilterProxyModel_PersistentIndexList_IsBase(bool value) const { kdirsortfilterproxymodel_persistentindexlist_isbase = value; }
    inline void setKDirSortFilterProxyModel_Sender_IsBase(bool value) const { kdirsortfilterproxymodel_sender_isbase = value; }
    inline void setKDirSortFilterProxyModel_SenderSignalIndex_IsBase(bool value) const { kdirsortfilterproxymodel_sendersignalindex_isbase = value; }
    inline void setKDirSortFilterProxyModel_Receivers_IsBase(bool value) const { kdirsortfilterproxymodel_receivers_isbase = value; }
    inline void setKDirSortFilterProxyModel_IsSignalConnected_IsBase(bool value) const { kdirsortfilterproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirsortfilterproxymodel_metacall_isbase) {
            kdirsortfilterproxymodel_metacall_isbase = false;
            return KDirSortFilterProxyModel::qt_metacall(param1, param2, param3);
        } else if (kdirsortfilterproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdirsortfilterproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_haschildren_isbase) {
            kdirsortfilterproxymodel_haschildren_isbase = false;
            return KDirSortFilterProxyModel::hasChildren(parent);
        } else if (kdirsortfilterproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_canfetchmore_isbase) {
            kdirsortfilterproxymodel_canfetchmore_isbase = false;
            return KDirSortFilterProxyModel::canFetchMore(parent);
        } else if (kdirsortfilterproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool subSortLessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kdirsortfilterproxymodel_subsortlessthan_isbase) {
            kdirsortfilterproxymodel_subsortlessthan_isbase = false;
            return KDirSortFilterProxyModel::subSortLessThan(left, right);
        } else if (kdirsortfilterproxymodel_subsortlessthan_callback != nullptr) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);

            bool callback_ret = kdirsortfilterproxymodel_subsortlessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::subSortLessThan(left, right);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kdirsortfilterproxymodel_sort_isbase) {
            kdirsortfilterproxymodel_sort_isbase = false;
            KDirSortFilterProxyModel::sort(column, order);
        } else if (kdirsortfilterproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kdirsortfilterproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            KDirSortFilterProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kdirsortfilterproxymodel_lessthan_isbase) {
            kdirsortfilterproxymodel_lessthan_isbase = false;
            return KDirSortFilterProxyModel::lessThan(left, right);
        } else if (kdirsortfilterproxymodel_lessthan_callback != nullptr) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);

            bool callback_ret = kdirsortfilterproxymodel_lessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::lessThan(left, right);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int compareCategories(const QModelIndex& left, const QModelIndex& right) const override {
        if (kdirsortfilterproxymodel_comparecategories_isbase) {
            kdirsortfilterproxymodel_comparecategories_isbase = false;
            return KDirSortFilterProxyModel::compareCategories(left, right);
        } else if (kdirsortfilterproxymodel_comparecategories_callback != nullptr) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);

            int callback_ret = kdirsortfilterproxymodel_comparecategories_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::compareCategories(left, right);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kdirsortfilterproxymodel_setsourcemodel_isbase) {
            kdirsortfilterproxymodel_setsourcemodel_isbase = false;
            KDirSortFilterProxyModel::setSourceModel(sourceModel);
        } else if (kdirsortfilterproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            kdirsortfilterproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kdirsortfilterproxymodel_maptosource_isbase) {
            kdirsortfilterproxymodel_maptosource_isbase = false;
            return KDirSortFilterProxyModel::mapToSource(proxyIndex);
        } else if (kdirsortfilterproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = kdirsortfilterproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kdirsortfilterproxymodel_mapfromsource_isbase) {
            kdirsortfilterproxymodel_mapfromsource_isbase = false;
            return KDirSortFilterProxyModel::mapFromSource(sourceIndex);
        } else if (kdirsortfilterproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = kdirsortfilterproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (kdirsortfilterproxymodel_mapselectiontosource_isbase) {
            kdirsortfilterproxymodel_mapselectiontosource_isbase = false;
            return KDirSortFilterProxyModel::mapSelectionToSource(proxySelection);
        } else if (kdirsortfilterproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);

            QItemSelection* callback_ret = kdirsortfilterproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::mapSelectionToSource(proxySelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (kdirsortfilterproxymodel_mapselectionfromsource_isbase) {
            kdirsortfilterproxymodel_mapselectionfromsource_isbase = false;
            return KDirSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        } else if (kdirsortfilterproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);

            QItemSelection* callback_ret = kdirsortfilterproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (kdirsortfilterproxymodel_filteracceptsrow_isbase) {
            kdirsortfilterproxymodel_filteracceptsrow_isbase = false;
            return KDirSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        } else if (kdirsortfilterproxymodel_filteracceptsrow_callback != nullptr) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (kdirsortfilterproxymodel_filteracceptscolumn_isbase) {
            kdirsortfilterproxymodel_filteracceptscolumn_isbase = false;
            return KDirSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        } else if (kdirsortfilterproxymodel_filteracceptscolumn_callback != nullptr) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_index_isbase) {
            kdirsortfilterproxymodel_index_isbase = false;
            return KDirSortFilterProxyModel::index(row, column, parent);
        } else if (kdirsortfilterproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kdirsortfilterproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kdirsortfilterproxymodel_parent_isbase) {
            kdirsortfilterproxymodel_parent_isbase = false;
            return KDirSortFilterProxyModel::parent(child);
        } else if (kdirsortfilterproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = kdirsortfilterproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kdirsortfilterproxymodel_sibling_isbase) {
            kdirsortfilterproxymodel_sibling_isbase = false;
            return KDirSortFilterProxyModel::sibling(row, column, idx);
        } else if (kdirsortfilterproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kdirsortfilterproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_rowcount_isbase) {
            kdirsortfilterproxymodel_rowcount_isbase = false;
            return KDirSortFilterProxyModel::rowCount(parent);
        } else if (kdirsortfilterproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kdirsortfilterproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_columncount_isbase) {
            kdirsortfilterproxymodel_columncount_isbase = false;
            return KDirSortFilterProxyModel::columnCount(parent);
        } else if (kdirsortfilterproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kdirsortfilterproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kdirsortfilterproxymodel_data_isbase) {
            kdirsortfilterproxymodel_data_isbase = false;
            return KDirSortFilterProxyModel::data(index, role);
        } else if (kdirsortfilterproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kdirsortfilterproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kdirsortfilterproxymodel_setdata_isbase) {
            kdirsortfilterproxymodel_setdata_isbase = false;
            return KDirSortFilterProxyModel::setData(index, value, role);
        } else if (kdirsortfilterproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kdirsortfilterproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kdirsortfilterproxymodel_headerdata_isbase) {
            kdirsortfilterproxymodel_headerdata_isbase = false;
            return KDirSortFilterProxyModel::headerData(section, orientation, role);
        } else if (kdirsortfilterproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kdirsortfilterproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kdirsortfilterproxymodel_setheaderdata_isbase) {
            kdirsortfilterproxymodel_setheaderdata_isbase = false;
            return KDirSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        } else if (kdirsortfilterproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kdirsortfilterproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kdirsortfilterproxymodel_mimedata_isbase) {
            kdirsortfilterproxymodel_mimedata_isbase = false;
            return KDirSortFilterProxyModel::mimeData(indexes);
        } else if (kdirsortfilterproxymodel_mimedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size() + 1)));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = kdirsortfilterproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_dropmimedata_isbase) {
            kdirsortfilterproxymodel_dropmimedata_isbase = false;
            return KDirSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (kdirsortfilterproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_insertrows_isbase) {
            kdirsortfilterproxymodel_insertrows_isbase = false;
            return KDirSortFilterProxyModel::insertRows(row, count, parent);
        } else if (kdirsortfilterproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_insertcolumns_isbase) {
            kdirsortfilterproxymodel_insertcolumns_isbase = false;
            return KDirSortFilterProxyModel::insertColumns(column, count, parent);
        } else if (kdirsortfilterproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_removerows_isbase) {
            kdirsortfilterproxymodel_removerows_isbase = false;
            return KDirSortFilterProxyModel::removeRows(row, count, parent);
        } else if (kdirsortfilterproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_removecolumns_isbase) {
            kdirsortfilterproxymodel_removecolumns_isbase = false;
            return KDirSortFilterProxyModel::removeColumns(column, count, parent);
        } else if (kdirsortfilterproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_fetchmore_isbase) {
            kdirsortfilterproxymodel_fetchmore_isbase = false;
            KDirSortFilterProxyModel::fetchMore(parent);
        } else if (kdirsortfilterproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kdirsortfilterproxymodel_fetchmore_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_flags_isbase) {
            kdirsortfilterproxymodel_flags_isbase = false;
            return KDirSortFilterProxyModel::flags(index);
        } else if (kdirsortfilterproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kdirsortfilterproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_buddy_isbase) {
            kdirsortfilterproxymodel_buddy_isbase = false;
            return KDirSortFilterProxyModel::buddy(index);
        } else if (kdirsortfilterproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kdirsortfilterproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kdirsortfilterproxymodel_match_isbase) {
            kdirsortfilterproxymodel_match_isbase = false;
            return KDirSortFilterProxyModel::match(start, role, value, hits, flags);
        } else if (kdirsortfilterproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kdirsortfilterproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KDirSortFilterProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_span_isbase) {
            kdirsortfilterproxymodel_span_isbase = false;
            return KDirSortFilterProxyModel::span(index);
        } else if (kdirsortfilterproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kdirsortfilterproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kdirsortfilterproxymodel_mimetypes_isbase) {
            kdirsortfilterproxymodel_mimetypes_isbase = false;
            return KDirSortFilterProxyModel::mimeTypes();
        } else if (kdirsortfilterproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kdirsortfilterproxymodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return KDirSortFilterProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kdirsortfilterproxymodel_supporteddropactions_isbase) {
            kdirsortfilterproxymodel_supporteddropactions_isbase = false;
            return KDirSortFilterProxyModel::supportedDropActions();
        } else if (kdirsortfilterproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kdirsortfilterproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kdirsortfilterproxymodel_submit_isbase) {
            kdirsortfilterproxymodel_submit_isbase = false;
            return KDirSortFilterProxyModel::submit();
        } else if (kdirsortfilterproxymodel_submit_callback != nullptr) {
            bool callback_ret = kdirsortfilterproxymodel_submit_callback();
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kdirsortfilterproxymodel_revert_isbase) {
            kdirsortfilterproxymodel_revert_isbase = false;
            KDirSortFilterProxyModel::revert();
        } else if (kdirsortfilterproxymodel_revert_callback != nullptr) {
            kdirsortfilterproxymodel_revert_callback();
        } else {
            KDirSortFilterProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_itemdata_isbase) {
            kdirsortfilterproxymodel_itemdata_isbase = false;
            return KDirSortFilterProxyModel::itemData(index);
        } else if (kdirsortfilterproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kdirsortfilterproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KDirSortFilterProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kdirsortfilterproxymodel_setitemdata_isbase) {
            kdirsortfilterproxymodel_setitemdata_isbase = false;
            return KDirSortFilterProxyModel::setItemData(index, roles);
        } else if (kdirsortfilterproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kdirsortfilterproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kdirsortfilterproxymodel_clearitemdata_isbase) {
            kdirsortfilterproxymodel_clearitemdata_isbase = false;
            return KDirSortFilterProxyModel::clearItemData(index);
        } else if (kdirsortfilterproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kdirsortfilterproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_candropmimedata_isbase) {
            kdirsortfilterproxymodel_candropmimedata_isbase = false;
            return KDirSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (kdirsortfilterproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirsortfilterproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kdirsortfilterproxymodel_supporteddragactions_isbase) {
            kdirsortfilterproxymodel_supporteddragactions_isbase = false;
            return KDirSortFilterProxyModel::supportedDragActions();
        } else if (kdirsortfilterproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kdirsortfilterproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kdirsortfilterproxymodel_rolenames_isbase) {
            kdirsortfilterproxymodel_rolenames_isbase = false;
            return KDirSortFilterProxyModel::roleNames();
        } else if (kdirsortfilterproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kdirsortfilterproxymodel_rolenames_callback();
            QHash<int, QByteArray> callback_ret_QMap;
            callback_ret_QMap.reserve(callback_ret.len);
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QByteArray callback_ret_varr_i_QByteArray(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = callback_ret_varr_i_QByteArray;
            }
            return callback_ret_QMap;
        } else {
            return KDirSortFilterProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirsortfilterproxymodel_moverows_isbase) {
            kdirsortfilterproxymodel_moverows_isbase = false;
            return KDirSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kdirsortfilterproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kdirsortfilterproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirsortfilterproxymodel_movecolumns_isbase) {
            kdirsortfilterproxymodel_movecolumns_isbase = false;
            return KDirSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kdirsortfilterproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kdirsortfilterproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kdirsortfilterproxymodel_multidata_isbase) {
            kdirsortfilterproxymodel_multidata_isbase = false;
            KDirSortFilterProxyModel::multiData(index, roleDataSpan);
        } else if (kdirsortfilterproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kdirsortfilterproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KDirSortFilterProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kdirsortfilterproxymodel_resetinternaldata_isbase) {
            kdirsortfilterproxymodel_resetinternaldata_isbase = false;
            KDirSortFilterProxyModel::resetInternalData();
        } else if (kdirsortfilterproxymodel_resetinternaldata_callback != nullptr) {
            kdirsortfilterproxymodel_resetinternaldata_callback();
        } else {
            KDirSortFilterProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirsortfilterproxymodel_event_isbase) {
            kdirsortfilterproxymodel_event_isbase = false;
            return KDirSortFilterProxyModel::event(event);
        } else if (kdirsortfilterproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdirsortfilterproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirsortfilterproxymodel_eventfilter_isbase) {
            kdirsortfilterproxymodel_eventfilter_isbase = false;
            return KDirSortFilterProxyModel::eventFilter(watched, event);
        } else if (kdirsortfilterproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdirsortfilterproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirsortfilterproxymodel_timerevent_isbase) {
            kdirsortfilterproxymodel_timerevent_isbase = false;
            KDirSortFilterProxyModel::timerEvent(event);
        } else if (kdirsortfilterproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdirsortfilterproxymodel_timerevent_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirsortfilterproxymodel_childevent_isbase) {
            kdirsortfilterproxymodel_childevent_isbase = false;
            KDirSortFilterProxyModel::childEvent(event);
        } else if (kdirsortfilterproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdirsortfilterproxymodel_childevent_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirsortfilterproxymodel_customevent_isbase) {
            kdirsortfilterproxymodel_customevent_isbase = false;
            KDirSortFilterProxyModel::customEvent(event);
        } else if (kdirsortfilterproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdirsortfilterproxymodel_customevent_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirsortfilterproxymodel_connectnotify_isbase) {
            kdirsortfilterproxymodel_connectnotify_isbase = false;
            KDirSortFilterProxyModel::connectNotify(signal);
        } else if (kdirsortfilterproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirsortfilterproxymodel_connectnotify_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirsortfilterproxymodel_disconnectnotify_isbase) {
            kdirsortfilterproxymodel_disconnectnotify_isbase = false;
            KDirSortFilterProxyModel::disconnectNotify(signal);
        } else if (kdirsortfilterproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirsortfilterproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            KDirSortFilterProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateFilter() {
        if (kdirsortfilterproxymodel_invalidatefilter_isbase) {
            kdirsortfilterproxymodel_invalidatefilter_isbase = false;
            KDirSortFilterProxyModel::invalidateFilter();
        } else if (kdirsortfilterproxymodel_invalidatefilter_callback != nullptr) {
            kdirsortfilterproxymodel_invalidatefilter_callback();
        } else {
            KDirSortFilterProxyModel::invalidateFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateRowsFilter() {
        if (kdirsortfilterproxymodel_invalidaterowsfilter_isbase) {
            kdirsortfilterproxymodel_invalidaterowsfilter_isbase = false;
            KDirSortFilterProxyModel::invalidateRowsFilter();
        } else if (kdirsortfilterproxymodel_invalidaterowsfilter_callback != nullptr) {
            kdirsortfilterproxymodel_invalidaterowsfilter_callback();
        } else {
            KDirSortFilterProxyModel::invalidateRowsFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateColumnsFilter() {
        if (kdirsortfilterproxymodel_invalidatecolumnsfilter_isbase) {
            kdirsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
            KDirSortFilterProxyModel::invalidateColumnsFilter();
        } else if (kdirsortfilterproxymodel_invalidatecolumnsfilter_callback != nullptr) {
            kdirsortfilterproxymodel_invalidatecolumnsfilter_callback();
        } else {
            KDirSortFilterProxyModel::invalidateColumnsFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (kdirsortfilterproxymodel_createsourceindex_isbase) {
            kdirsortfilterproxymodel_createsourceindex_isbase = false;
            return KDirSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (kdirsortfilterproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = kdirsortfilterproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kdirsortfilterproxymodel_createindex_isbase) {
            kdirsortfilterproxymodel_createindex_isbase = false;
            return KDirSortFilterProxyModel::createIndex(row, column);
        } else if (kdirsortfilterproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kdirsortfilterproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KDirSortFilterProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kdirsortfilterproxymodel_encodedata_isbase) {
            kdirsortfilterproxymodel_encodedata_isbase = false;
            KDirSortFilterProxyModel::encodeData(indexes, stream);
        } else if (kdirsortfilterproxymodel_encodedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size() + 1)));
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

            kdirsortfilterproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KDirSortFilterProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kdirsortfilterproxymodel_decodedata_isbase) {
            kdirsortfilterproxymodel_decodedata_isbase = false;
            return KDirSortFilterProxyModel::decodeData(row, column, parent, stream);
        } else if (kdirsortfilterproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kdirsortfilterproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kdirsortfilterproxymodel_begininsertrows_isbase) {
            kdirsortfilterproxymodel_begininsertrows_isbase = false;
            KDirSortFilterProxyModel::beginInsertRows(parent, first, last);
        } else if (kdirsortfilterproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirsortfilterproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirSortFilterProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kdirsortfilterproxymodel_endinsertrows_isbase) {
            kdirsortfilterproxymodel_endinsertrows_isbase = false;
            KDirSortFilterProxyModel::endInsertRows();
        } else if (kdirsortfilterproxymodel_endinsertrows_callback != nullptr) {
            kdirsortfilterproxymodel_endinsertrows_callback();
        } else {
            KDirSortFilterProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kdirsortfilterproxymodel_beginremoverows_isbase) {
            kdirsortfilterproxymodel_beginremoverows_isbase = false;
            KDirSortFilterProxyModel::beginRemoveRows(parent, first, last);
        } else if (kdirsortfilterproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirsortfilterproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirSortFilterProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kdirsortfilterproxymodel_endremoverows_isbase) {
            kdirsortfilterproxymodel_endremoverows_isbase = false;
            KDirSortFilterProxyModel::endRemoveRows();
        } else if (kdirsortfilterproxymodel_endremoverows_callback != nullptr) {
            kdirsortfilterproxymodel_endremoverows_callback();
        } else {
            KDirSortFilterProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kdirsortfilterproxymodel_beginmoverows_isbase) {
            kdirsortfilterproxymodel_beginmoverows_isbase = false;
            return KDirSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kdirsortfilterproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kdirsortfilterproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kdirsortfilterproxymodel_endmoverows_isbase) {
            kdirsortfilterproxymodel_endmoverows_isbase = false;
            KDirSortFilterProxyModel::endMoveRows();
        } else if (kdirsortfilterproxymodel_endmoverows_callback != nullptr) {
            kdirsortfilterproxymodel_endmoverows_callback();
        } else {
            KDirSortFilterProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kdirsortfilterproxymodel_begininsertcolumns_isbase) {
            kdirsortfilterproxymodel_begininsertcolumns_isbase = false;
            KDirSortFilterProxyModel::beginInsertColumns(parent, first, last);
        } else if (kdirsortfilterproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirsortfilterproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirSortFilterProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kdirsortfilterproxymodel_endinsertcolumns_isbase) {
            kdirsortfilterproxymodel_endinsertcolumns_isbase = false;
            KDirSortFilterProxyModel::endInsertColumns();
        } else if (kdirsortfilterproxymodel_endinsertcolumns_callback != nullptr) {
            kdirsortfilterproxymodel_endinsertcolumns_callback();
        } else {
            KDirSortFilterProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kdirsortfilterproxymodel_beginremovecolumns_isbase) {
            kdirsortfilterproxymodel_beginremovecolumns_isbase = false;
            KDirSortFilterProxyModel::beginRemoveColumns(parent, first, last);
        } else if (kdirsortfilterproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirsortfilterproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirSortFilterProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kdirsortfilterproxymodel_endremovecolumns_isbase) {
            kdirsortfilterproxymodel_endremovecolumns_isbase = false;
            KDirSortFilterProxyModel::endRemoveColumns();
        } else if (kdirsortfilterproxymodel_endremovecolumns_callback != nullptr) {
            kdirsortfilterproxymodel_endremovecolumns_callback();
        } else {
            KDirSortFilterProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kdirsortfilterproxymodel_beginmovecolumns_isbase) {
            kdirsortfilterproxymodel_beginmovecolumns_isbase = false;
            return KDirSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kdirsortfilterproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kdirsortfilterproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kdirsortfilterproxymodel_endmovecolumns_isbase) {
            kdirsortfilterproxymodel_endmovecolumns_isbase = false;
            KDirSortFilterProxyModel::endMoveColumns();
        } else if (kdirsortfilterproxymodel_endmovecolumns_callback != nullptr) {
            kdirsortfilterproxymodel_endmovecolumns_callback();
        } else {
            KDirSortFilterProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kdirsortfilterproxymodel_beginresetmodel_isbase) {
            kdirsortfilterproxymodel_beginresetmodel_isbase = false;
            KDirSortFilterProxyModel::beginResetModel();
        } else if (kdirsortfilterproxymodel_beginresetmodel_callback != nullptr) {
            kdirsortfilterproxymodel_beginresetmodel_callback();
        } else {
            KDirSortFilterProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kdirsortfilterproxymodel_endresetmodel_isbase) {
            kdirsortfilterproxymodel_endresetmodel_isbase = false;
            KDirSortFilterProxyModel::endResetModel();
        } else if (kdirsortfilterproxymodel_endresetmodel_callback != nullptr) {
            kdirsortfilterproxymodel_endresetmodel_callback();
        } else {
            KDirSortFilterProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kdirsortfilterproxymodel_changepersistentindex_isbase) {
            kdirsortfilterproxymodel_changepersistentindex_isbase = false;
            KDirSortFilterProxyModel::changePersistentIndex(from, to);
        } else if (kdirsortfilterproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kdirsortfilterproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KDirSortFilterProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kdirsortfilterproxymodel_changepersistentindexlist_isbase) {
            kdirsortfilterproxymodel_changepersistentindexlist_isbase = false;
            KDirSortFilterProxyModel::changePersistentIndexList(from, to);
        } else if (kdirsortfilterproxymodel_changepersistentindexlist_callback != nullptr) {
            const QList<QModelIndex>& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (from_ret.size() + 1)));
            for (qsizetype i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (to_ret.size() + 1)));
            for (qsizetype i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            kdirsortfilterproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KDirSortFilterProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kdirsortfilterproxymodel_persistentindexlist_isbase) {
            kdirsortfilterproxymodel_persistentindexlist_isbase = false;
            return KDirSortFilterProxyModel::persistentIndexList();
        } else if (kdirsortfilterproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kdirsortfilterproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KDirSortFilterProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdirsortfilterproxymodel_sender_isbase) {
            kdirsortfilterproxymodel_sender_isbase = false;
            return KDirSortFilterProxyModel::sender();
        } else if (kdirsortfilterproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = kdirsortfilterproxymodel_sender_callback();
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdirsortfilterproxymodel_sendersignalindex_isbase) {
            kdirsortfilterproxymodel_sendersignalindex_isbase = false;
            return KDirSortFilterProxyModel::senderSignalIndex();
        } else if (kdirsortfilterproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kdirsortfilterproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdirsortfilterproxymodel_receivers_isbase) {
            kdirsortfilterproxymodel_receivers_isbase = false;
            return KDirSortFilterProxyModel::receivers(signal);
        } else if (kdirsortfilterproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdirsortfilterproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirSortFilterProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdirsortfilterproxymodel_issignalconnected_isbase) {
            kdirsortfilterproxymodel_issignalconnected_isbase = false;
            return KDirSortFilterProxyModel::isSignalConnected(signal);
        } else if (kdirsortfilterproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdirsortfilterproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirSortFilterProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KDirSortFilterProxyModel_SubSortLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KDirSortFilterProxyModel_QBaseSubSortLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KDirSortFilterProxyModel_LessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KDirSortFilterProxyModel_QBaseLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend int KDirSortFilterProxyModel_CompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend int KDirSortFilterProxyModel_QBaseCompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KDirSortFilterProxyModel_FilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool KDirSortFilterProxyModel_QBaseFilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool KDirSortFilterProxyModel_FilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend bool KDirSortFilterProxyModel_QBaseFilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend void KDirSortFilterProxyModel_ResetInternalData(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseResetInternalData(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_TimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event);
    friend void KDirSortFilterProxyModel_QBaseTimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event);
    friend void KDirSortFilterProxyModel_ChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event);
    friend void KDirSortFilterProxyModel_QBaseChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event);
    friend void KDirSortFilterProxyModel_CustomEvent(KDirSortFilterProxyModel* self, QEvent* event);
    friend void KDirSortFilterProxyModel_QBaseCustomEvent(KDirSortFilterProxyModel* self, QEvent* event);
    friend void KDirSortFilterProxyModel_ConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KDirSortFilterProxyModel_QBaseConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KDirSortFilterProxyModel_DisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KDirSortFilterProxyModel_QBaseDisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KDirSortFilterProxyModel_InvalidateFilter(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseInvalidateFilter(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_InvalidateRowsFilter(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseInvalidateRowsFilter(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_InvalidateColumnsFilter(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseInvalidateColumnsFilter(KDirSortFilterProxyModel* self);
    friend QModelIndex* KDirSortFilterProxyModel_CreateSourceIndex(const KDirSortFilterProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KDirSortFilterProxyModel_QBaseCreateSourceIndex(const KDirSortFilterProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KDirSortFilterProxyModel_CreateIndex(const KDirSortFilterProxyModel* self, int row, int column);
    friend QModelIndex* KDirSortFilterProxyModel_QBaseCreateIndex(const KDirSortFilterProxyModel* self, int row, int column);
    friend void KDirSortFilterProxyModel_EncodeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KDirSortFilterProxyModel_QBaseEncodeData(const KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KDirSortFilterProxyModel_DecodeData(KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KDirSortFilterProxyModel_QBaseDecodeData(KDirSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KDirSortFilterProxyModel_BeginInsertRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_QBaseBeginInsertRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_EndInsertRows(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndInsertRows(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_BeginRemoveRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_QBaseBeginRemoveRows(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_EndRemoveRows(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndRemoveRows(KDirSortFilterProxyModel* self);
    friend bool KDirSortFilterProxyModel_BeginMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KDirSortFilterProxyModel_QBaseBeginMoveRows(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KDirSortFilterProxyModel_EndMoveRows(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndMoveRows(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_BeginInsertColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_QBaseBeginInsertColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_EndInsertColumns(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndInsertColumns(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_BeginRemoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_QBaseBeginRemoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirSortFilterProxyModel_EndRemoveColumns(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndRemoveColumns(KDirSortFilterProxyModel* self);
    friend bool KDirSortFilterProxyModel_BeginMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KDirSortFilterProxyModel_QBaseBeginMoveColumns(KDirSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KDirSortFilterProxyModel_EndMoveColumns(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndMoveColumns(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_BeginResetModel(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseBeginResetModel(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_EndResetModel(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_QBaseEndResetModel(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_ChangePersistentIndex(KDirSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KDirSortFilterProxyModel_QBaseChangePersistentIndex(KDirSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KDirSortFilterProxyModel_ChangePersistentIndexList(KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KDirSortFilterProxyModel_QBaseChangePersistentIndexList(KDirSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_PersistentIndexList(const KDirSortFilterProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KDirSortFilterProxyModel_QBasePersistentIndexList(const KDirSortFilterProxyModel* self);
    friend QObject* KDirSortFilterProxyModel_Sender(const KDirSortFilterProxyModel* self);
    friend QObject* KDirSortFilterProxyModel_QBaseSender(const KDirSortFilterProxyModel* self);
    friend int KDirSortFilterProxyModel_SenderSignalIndex(const KDirSortFilterProxyModel* self);
    friend int KDirSortFilterProxyModel_QBaseSenderSignalIndex(const KDirSortFilterProxyModel* self);
    friend int KDirSortFilterProxyModel_Receivers(const KDirSortFilterProxyModel* self, const char* signal);
    friend int KDirSortFilterProxyModel_QBaseReceivers(const KDirSortFilterProxyModel* self, const char* signal);
    friend bool KDirSortFilterProxyModel_IsSignalConnected(const KDirSortFilterProxyModel* self, const QMetaMethod* signal);
    friend bool KDirSortFilterProxyModel_QBaseIsSignalConnected(const KDirSortFilterProxyModel* self, const QMetaMethod* signal);
};

#endif
