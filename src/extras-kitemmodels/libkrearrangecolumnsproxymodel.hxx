#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKREARRANGECOLUMNSPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKREARRANGECOLUMNSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRearrangeColumnsProxyModel so that we can call protected methods
class VirtualKRearrangeColumnsProxyModel final : public KRearrangeColumnsProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKRearrangeColumnsProxyModel = true;

    // Virtual class public types (including callbacks)
    using KRearrangeColumnsProxyModel_Metacall_Callback = int (*)(KRearrangeColumnsProxyModel*, int, int, void**);
    using KRearrangeColumnsProxyModel_ColumnCount_Callback = int (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_RowCount_Callback = int (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Index_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_Parent_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_MapToSource_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_HeaderData_Callback = QVariant* (*)(const KRearrangeColumnsProxyModel*, int, int, int);
    using KRearrangeColumnsProxyModel_HasChildren_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Sibling_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_DropMimeData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KRearrangeColumnsProxyModel*, QItemSelection*);
    using KRearrangeColumnsProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KRearrangeColumnsProxyModel*, QItemSelection*);
    using KRearrangeColumnsProxyModel_Match_Callback = QModelIndex** (*)(const KRearrangeColumnsProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KRearrangeColumnsProxyModel_SetSourceModel_Callback = void (*)(KRearrangeColumnsProxyModel*, QAbstractItemModel*);
    using KRearrangeColumnsProxyModel_InsertColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_InsertRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_RemoveColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_RemoveRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_MoveRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_MoveColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_Submit_Callback = bool (*)();
    using KRearrangeColumnsProxyModel_Revert_Callback = void (*)();
    using KRearrangeColumnsProxyModel_Data_Callback = QVariant* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Flags_Callback = int (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_SetData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, QVariant*, int);
    using KRearrangeColumnsProxyModel_SetItemData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KRearrangeColumnsProxyModel_SetHeaderData_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QVariant*, int);
    using KRearrangeColumnsProxyModel_ClearItemData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Buddy_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_CanFetchMore_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_FetchMore_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Sort_Callback = void (*)(KRearrangeColumnsProxyModel*, int, int);
    using KRearrangeColumnsProxyModel_Span_Callback = QSize* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_MimeData_Callback = QMimeData* (*)(const KRearrangeColumnsProxyModel*, libqt_list /* of QModelIndex* */);
    using KRearrangeColumnsProxyModel_CanDropMimeData_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_MimeTypes_Callback = const char** (*)();
    using KRearrangeColumnsProxyModel_SupportedDragActions_Callback = int (*)();
    using KRearrangeColumnsProxyModel_SupportedDropActions_Callback = int (*)();
    using KRearrangeColumnsProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KRearrangeColumnsProxyModel_MultiData_Callback = void (*)(const KRearrangeColumnsProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KRearrangeColumnsProxyModel_ResetInternalData_Callback = void (*)();
    using KRearrangeColumnsProxyModel_Event_Callback = bool (*)(KRearrangeColumnsProxyModel*, QEvent*);
    using KRearrangeColumnsProxyModel_EventFilter_Callback = bool (*)(KRearrangeColumnsProxyModel*, QObject*, QEvent*);
    using KRearrangeColumnsProxyModel_TimerEvent_Callback = void (*)(KRearrangeColumnsProxyModel*, QTimerEvent*);
    using KRearrangeColumnsProxyModel_ChildEvent_Callback = void (*)(KRearrangeColumnsProxyModel*, QChildEvent*);
    using KRearrangeColumnsProxyModel_CustomEvent_Callback = void (*)(KRearrangeColumnsProxyModel*, QEvent*);
    using KRearrangeColumnsProxyModel_ConnectNotify_Callback = void (*)(KRearrangeColumnsProxyModel*, QMetaMethod*);
    using KRearrangeColumnsProxyModel_DisconnectNotify_Callback = void (*)(KRearrangeColumnsProxyModel*, QMetaMethod*);
    using KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_Callback = void (*)(KRearrangeColumnsProxyModel*, bool);
    using KRearrangeColumnsProxyModel_SetHandleSourceDataChanges_Callback = void (*)(KRearrangeColumnsProxyModel*, bool);
    using KRearrangeColumnsProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, int, int, void*);
    using KRearrangeColumnsProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, int, int);
    using KRearrangeColumnsProxyModel_EncodeData_Callback = void (*)(const KRearrangeColumnsProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KRearrangeColumnsProxyModel_DecodeData_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KRearrangeColumnsProxyModel_BeginInsertRows_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int);
    using KRearrangeColumnsProxyModel_EndInsertRows_Callback = void (*)();
    using KRearrangeColumnsProxyModel_BeginRemoveRows_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int);
    using KRearrangeColumnsProxyModel_EndRemoveRows_Callback = void (*)();
    using KRearrangeColumnsProxyModel_BeginMoveRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_EndMoveRows_Callback = void (*)();
    using KRearrangeColumnsProxyModel_BeginInsertColumns_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int);
    using KRearrangeColumnsProxyModel_EndInsertColumns_Callback = void (*)();
    using KRearrangeColumnsProxyModel_BeginRemoveColumns_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int);
    using KRearrangeColumnsProxyModel_EndRemoveColumns_Callback = void (*)();
    using KRearrangeColumnsProxyModel_BeginMoveColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_EndMoveColumns_Callback = void (*)();
    using KRearrangeColumnsProxyModel_BeginResetModel_Callback = void (*)();
    using KRearrangeColumnsProxyModel_EndResetModel_Callback = void (*)();
    using KRearrangeColumnsProxyModel_ChangePersistentIndex_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*, QModelIndex*);
    using KRearrangeColumnsProxyModel_ChangePersistentIndexList_Callback = void (*)(KRearrangeColumnsProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KRearrangeColumnsProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KRearrangeColumnsProxyModel_Sender_Callback = QObject* (*)();
    using KRearrangeColumnsProxyModel_SenderSignalIndex_Callback = int (*)();
    using KRearrangeColumnsProxyModel_Receivers_Callback = int (*)(const KRearrangeColumnsProxyModel*, const char*);
    using KRearrangeColumnsProxyModel_IsSignalConnected_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KRearrangeColumnsProxyModel_Metacall_Callback krearrangecolumnsproxymodel_metacall_callback = nullptr;
    KRearrangeColumnsProxyModel_ColumnCount_Callback krearrangecolumnsproxymodel_columncount_callback = nullptr;
    KRearrangeColumnsProxyModel_RowCount_Callback krearrangecolumnsproxymodel_rowcount_callback = nullptr;
    KRearrangeColumnsProxyModel_Index_Callback krearrangecolumnsproxymodel_index_callback = nullptr;
    KRearrangeColumnsProxyModel_Parent_Callback krearrangecolumnsproxymodel_parent_callback = nullptr;
    KRearrangeColumnsProxyModel_MapFromSource_Callback krearrangecolumnsproxymodel_mapfromsource_callback = nullptr;
    KRearrangeColumnsProxyModel_MapToSource_Callback krearrangecolumnsproxymodel_maptosource_callback = nullptr;
    KRearrangeColumnsProxyModel_HeaderData_Callback krearrangecolumnsproxymodel_headerdata_callback = nullptr;
    KRearrangeColumnsProxyModel_HasChildren_Callback krearrangecolumnsproxymodel_haschildren_callback = nullptr;
    KRearrangeColumnsProxyModel_Sibling_Callback krearrangecolumnsproxymodel_sibling_callback = nullptr;
    KRearrangeColumnsProxyModel_DropMimeData_Callback krearrangecolumnsproxymodel_dropmimedata_callback = nullptr;
    KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback krearrangecolumnsproxymodel_mapselectionfromsource_callback = nullptr;
    KRearrangeColumnsProxyModel_MapSelectionToSource_Callback krearrangecolumnsproxymodel_mapselectiontosource_callback = nullptr;
    KRearrangeColumnsProxyModel_Match_Callback krearrangecolumnsproxymodel_match_callback = nullptr;
    KRearrangeColumnsProxyModel_SetSourceModel_Callback krearrangecolumnsproxymodel_setsourcemodel_callback = nullptr;
    KRearrangeColumnsProxyModel_InsertColumns_Callback krearrangecolumnsproxymodel_insertcolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_InsertRows_Callback krearrangecolumnsproxymodel_insertrows_callback = nullptr;
    KRearrangeColumnsProxyModel_RemoveColumns_Callback krearrangecolumnsproxymodel_removecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_RemoveRows_Callback krearrangecolumnsproxymodel_removerows_callback = nullptr;
    KRearrangeColumnsProxyModel_MoveRows_Callback krearrangecolumnsproxymodel_moverows_callback = nullptr;
    KRearrangeColumnsProxyModel_MoveColumns_Callback krearrangecolumnsproxymodel_movecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_Submit_Callback krearrangecolumnsproxymodel_submit_callback = nullptr;
    KRearrangeColumnsProxyModel_Revert_Callback krearrangecolumnsproxymodel_revert_callback = nullptr;
    KRearrangeColumnsProxyModel_Data_Callback krearrangecolumnsproxymodel_data_callback = nullptr;
    KRearrangeColumnsProxyModel_ItemData_Callback krearrangecolumnsproxymodel_itemdata_callback = nullptr;
    KRearrangeColumnsProxyModel_Flags_Callback krearrangecolumnsproxymodel_flags_callback = nullptr;
    KRearrangeColumnsProxyModel_SetData_Callback krearrangecolumnsproxymodel_setdata_callback = nullptr;
    KRearrangeColumnsProxyModel_SetItemData_Callback krearrangecolumnsproxymodel_setitemdata_callback = nullptr;
    KRearrangeColumnsProxyModel_SetHeaderData_Callback krearrangecolumnsproxymodel_setheaderdata_callback = nullptr;
    KRearrangeColumnsProxyModel_ClearItemData_Callback krearrangecolumnsproxymodel_clearitemdata_callback = nullptr;
    KRearrangeColumnsProxyModel_Buddy_Callback krearrangecolumnsproxymodel_buddy_callback = nullptr;
    KRearrangeColumnsProxyModel_CanFetchMore_Callback krearrangecolumnsproxymodel_canfetchmore_callback = nullptr;
    KRearrangeColumnsProxyModel_FetchMore_Callback krearrangecolumnsproxymodel_fetchmore_callback = nullptr;
    KRearrangeColumnsProxyModel_Sort_Callback krearrangecolumnsproxymodel_sort_callback = nullptr;
    KRearrangeColumnsProxyModel_Span_Callback krearrangecolumnsproxymodel_span_callback = nullptr;
    KRearrangeColumnsProxyModel_MimeData_Callback krearrangecolumnsproxymodel_mimedata_callback = nullptr;
    KRearrangeColumnsProxyModel_CanDropMimeData_Callback krearrangecolumnsproxymodel_candropmimedata_callback = nullptr;
    KRearrangeColumnsProxyModel_MimeTypes_Callback krearrangecolumnsproxymodel_mimetypes_callback = nullptr;
    KRearrangeColumnsProxyModel_SupportedDragActions_Callback krearrangecolumnsproxymodel_supporteddragactions_callback = nullptr;
    KRearrangeColumnsProxyModel_SupportedDropActions_Callback krearrangecolumnsproxymodel_supporteddropactions_callback = nullptr;
    KRearrangeColumnsProxyModel_RoleNames_Callback krearrangecolumnsproxymodel_rolenames_callback = nullptr;
    KRearrangeColumnsProxyModel_MultiData_Callback krearrangecolumnsproxymodel_multidata_callback = nullptr;
    KRearrangeColumnsProxyModel_ResetInternalData_Callback krearrangecolumnsproxymodel_resetinternaldata_callback = nullptr;
    KRearrangeColumnsProxyModel_Event_Callback krearrangecolumnsproxymodel_event_callback = nullptr;
    KRearrangeColumnsProxyModel_EventFilter_Callback krearrangecolumnsproxymodel_eventfilter_callback = nullptr;
    KRearrangeColumnsProxyModel_TimerEvent_Callback krearrangecolumnsproxymodel_timerevent_callback = nullptr;
    KRearrangeColumnsProxyModel_ChildEvent_Callback krearrangecolumnsproxymodel_childevent_callback = nullptr;
    KRearrangeColumnsProxyModel_CustomEvent_Callback krearrangecolumnsproxymodel_customevent_callback = nullptr;
    KRearrangeColumnsProxyModel_ConnectNotify_Callback krearrangecolumnsproxymodel_connectnotify_callback = nullptr;
    KRearrangeColumnsProxyModel_DisconnectNotify_Callback krearrangecolumnsproxymodel_disconnectnotify_callback = nullptr;
    KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_Callback krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
    KRearrangeColumnsProxyModel_SetHandleSourceDataChanges_Callback krearrangecolumnsproxymodel_sethandlesourcedatachanges_callback = nullptr;
    KRearrangeColumnsProxyModel_CreateSourceIndex_Callback krearrangecolumnsproxymodel_createsourceindex_callback = nullptr;
    KRearrangeColumnsProxyModel_CreateIndex_Callback krearrangecolumnsproxymodel_createindex_callback = nullptr;
    KRearrangeColumnsProxyModel_EncodeData_Callback krearrangecolumnsproxymodel_encodedata_callback = nullptr;
    KRearrangeColumnsProxyModel_DecodeData_Callback krearrangecolumnsproxymodel_decodedata_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginInsertRows_Callback krearrangecolumnsproxymodel_begininsertrows_callback = nullptr;
    KRearrangeColumnsProxyModel_EndInsertRows_Callback krearrangecolumnsproxymodel_endinsertrows_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginRemoveRows_Callback krearrangecolumnsproxymodel_beginremoverows_callback = nullptr;
    KRearrangeColumnsProxyModel_EndRemoveRows_Callback krearrangecolumnsproxymodel_endremoverows_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginMoveRows_Callback krearrangecolumnsproxymodel_beginmoverows_callback = nullptr;
    KRearrangeColumnsProxyModel_EndMoveRows_Callback krearrangecolumnsproxymodel_endmoverows_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginInsertColumns_Callback krearrangecolumnsproxymodel_begininsertcolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_EndInsertColumns_Callback krearrangecolumnsproxymodel_endinsertcolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginRemoveColumns_Callback krearrangecolumnsproxymodel_beginremovecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_EndRemoveColumns_Callback krearrangecolumnsproxymodel_endremovecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginMoveColumns_Callback krearrangecolumnsproxymodel_beginmovecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_EndMoveColumns_Callback krearrangecolumnsproxymodel_endmovecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_BeginResetModel_Callback krearrangecolumnsproxymodel_beginresetmodel_callback = nullptr;
    KRearrangeColumnsProxyModel_EndResetModel_Callback krearrangecolumnsproxymodel_endresetmodel_callback = nullptr;
    KRearrangeColumnsProxyModel_ChangePersistentIndex_Callback krearrangecolumnsproxymodel_changepersistentindex_callback = nullptr;
    KRearrangeColumnsProxyModel_ChangePersistentIndexList_Callback krearrangecolumnsproxymodel_changepersistentindexlist_callback = nullptr;
    KRearrangeColumnsProxyModel_PersistentIndexList_Callback krearrangecolumnsproxymodel_persistentindexlist_callback = nullptr;
    KRearrangeColumnsProxyModel_Sender_Callback krearrangecolumnsproxymodel_sender_callback = nullptr;
    KRearrangeColumnsProxyModel_SenderSignalIndex_Callback krearrangecolumnsproxymodel_sendersignalindex_callback = nullptr;
    KRearrangeColumnsProxyModel_Receivers_Callback krearrangecolumnsproxymodel_receivers_callback = nullptr;
    KRearrangeColumnsProxyModel_IsSignalConnected_Callback krearrangecolumnsproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool krearrangecolumnsproxymodel_metacall_isbase = false;
    mutable bool krearrangecolumnsproxymodel_columncount_isbase = false;
    mutable bool krearrangecolumnsproxymodel_rowcount_isbase = false;
    mutable bool krearrangecolumnsproxymodel_index_isbase = false;
    mutable bool krearrangecolumnsproxymodel_parent_isbase = false;
    mutable bool krearrangecolumnsproxymodel_mapfromsource_isbase = false;
    mutable bool krearrangecolumnsproxymodel_maptosource_isbase = false;
    mutable bool krearrangecolumnsproxymodel_headerdata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_haschildren_isbase = false;
    mutable bool krearrangecolumnsproxymodel_sibling_isbase = false;
    mutable bool krearrangecolumnsproxymodel_dropmimedata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_mapselectionfromsource_isbase = false;
    mutable bool krearrangecolumnsproxymodel_mapselectiontosource_isbase = false;
    mutable bool krearrangecolumnsproxymodel_match_isbase = false;
    mutable bool krearrangecolumnsproxymodel_setsourcemodel_isbase = false;
    mutable bool krearrangecolumnsproxymodel_insertcolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_insertrows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_removecolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_removerows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_moverows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_movecolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_submit_isbase = false;
    mutable bool krearrangecolumnsproxymodel_revert_isbase = false;
    mutable bool krearrangecolumnsproxymodel_data_isbase = false;
    mutable bool krearrangecolumnsproxymodel_itemdata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_flags_isbase = false;
    mutable bool krearrangecolumnsproxymodel_setdata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_setitemdata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_setheaderdata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_clearitemdata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_buddy_isbase = false;
    mutable bool krearrangecolumnsproxymodel_canfetchmore_isbase = false;
    mutable bool krearrangecolumnsproxymodel_fetchmore_isbase = false;
    mutable bool krearrangecolumnsproxymodel_sort_isbase = false;
    mutable bool krearrangecolumnsproxymodel_span_isbase = false;
    mutable bool krearrangecolumnsproxymodel_mimedata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_candropmimedata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_mimetypes_isbase = false;
    mutable bool krearrangecolumnsproxymodel_supporteddragactions_isbase = false;
    mutable bool krearrangecolumnsproxymodel_supporteddropactions_isbase = false;
    mutable bool krearrangecolumnsproxymodel_rolenames_isbase = false;
    mutable bool krearrangecolumnsproxymodel_multidata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_resetinternaldata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_event_isbase = false;
    mutable bool krearrangecolumnsproxymodel_eventfilter_isbase = false;
    mutable bool krearrangecolumnsproxymodel_timerevent_isbase = false;
    mutable bool krearrangecolumnsproxymodel_childevent_isbase = false;
    mutable bool krearrangecolumnsproxymodel_customevent_isbase = false;
    mutable bool krearrangecolumnsproxymodel_connectnotify_isbase = false;
    mutable bool krearrangecolumnsproxymodel_disconnectnotify_isbase = false;
    mutable bool krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_isbase = false;
    mutable bool krearrangecolumnsproxymodel_sethandlesourcedatachanges_isbase = false;
    mutable bool krearrangecolumnsproxymodel_createsourceindex_isbase = false;
    mutable bool krearrangecolumnsproxymodel_createindex_isbase = false;
    mutable bool krearrangecolumnsproxymodel_encodedata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_decodedata_isbase = false;
    mutable bool krearrangecolumnsproxymodel_begininsertrows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endinsertrows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_beginremoverows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endremoverows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_beginmoverows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endmoverows_isbase = false;
    mutable bool krearrangecolumnsproxymodel_begininsertcolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endinsertcolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_beginremovecolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endremovecolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_beginmovecolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endmovecolumns_isbase = false;
    mutable bool krearrangecolumnsproxymodel_beginresetmodel_isbase = false;
    mutable bool krearrangecolumnsproxymodel_endresetmodel_isbase = false;
    mutable bool krearrangecolumnsproxymodel_changepersistentindex_isbase = false;
    mutable bool krearrangecolumnsproxymodel_changepersistentindexlist_isbase = false;
    mutable bool krearrangecolumnsproxymodel_persistentindexlist_isbase = false;
    mutable bool krearrangecolumnsproxymodel_sender_isbase = false;
    mutable bool krearrangecolumnsproxymodel_sendersignalindex_isbase = false;
    mutable bool krearrangecolumnsproxymodel_receivers_isbase = false;
    mutable bool krearrangecolumnsproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKRearrangeColumnsProxyModel() : KRearrangeColumnsProxyModel() {};
    VirtualKRearrangeColumnsProxyModel(QObject* parent) : KRearrangeColumnsProxyModel(parent) {};

    ~VirtualKRearrangeColumnsProxyModel() {
        krearrangecolumnsproxymodel_metacall_callback = nullptr;
        krearrangecolumnsproxymodel_columncount_callback = nullptr;
        krearrangecolumnsproxymodel_rowcount_callback = nullptr;
        krearrangecolumnsproxymodel_index_callback = nullptr;
        krearrangecolumnsproxymodel_parent_callback = nullptr;
        krearrangecolumnsproxymodel_mapfromsource_callback = nullptr;
        krearrangecolumnsproxymodel_maptosource_callback = nullptr;
        krearrangecolumnsproxymodel_headerdata_callback = nullptr;
        krearrangecolumnsproxymodel_haschildren_callback = nullptr;
        krearrangecolumnsproxymodel_sibling_callback = nullptr;
        krearrangecolumnsproxymodel_dropmimedata_callback = nullptr;
        krearrangecolumnsproxymodel_mapselectionfromsource_callback = nullptr;
        krearrangecolumnsproxymodel_mapselectiontosource_callback = nullptr;
        krearrangecolumnsproxymodel_match_callback = nullptr;
        krearrangecolumnsproxymodel_setsourcemodel_callback = nullptr;
        krearrangecolumnsproxymodel_insertcolumns_callback = nullptr;
        krearrangecolumnsproxymodel_insertrows_callback = nullptr;
        krearrangecolumnsproxymodel_removecolumns_callback = nullptr;
        krearrangecolumnsproxymodel_removerows_callback = nullptr;
        krearrangecolumnsproxymodel_moverows_callback = nullptr;
        krearrangecolumnsproxymodel_movecolumns_callback = nullptr;
        krearrangecolumnsproxymodel_submit_callback = nullptr;
        krearrangecolumnsproxymodel_revert_callback = nullptr;
        krearrangecolumnsproxymodel_data_callback = nullptr;
        krearrangecolumnsproxymodel_itemdata_callback = nullptr;
        krearrangecolumnsproxymodel_flags_callback = nullptr;
        krearrangecolumnsproxymodel_setdata_callback = nullptr;
        krearrangecolumnsproxymodel_setitemdata_callback = nullptr;
        krearrangecolumnsproxymodel_setheaderdata_callback = nullptr;
        krearrangecolumnsproxymodel_clearitemdata_callback = nullptr;
        krearrangecolumnsproxymodel_buddy_callback = nullptr;
        krearrangecolumnsproxymodel_canfetchmore_callback = nullptr;
        krearrangecolumnsproxymodel_fetchmore_callback = nullptr;
        krearrangecolumnsproxymodel_sort_callback = nullptr;
        krearrangecolumnsproxymodel_span_callback = nullptr;
        krearrangecolumnsproxymodel_mimedata_callback = nullptr;
        krearrangecolumnsproxymodel_candropmimedata_callback = nullptr;
        krearrangecolumnsproxymodel_mimetypes_callback = nullptr;
        krearrangecolumnsproxymodel_supporteddragactions_callback = nullptr;
        krearrangecolumnsproxymodel_supporteddropactions_callback = nullptr;
        krearrangecolumnsproxymodel_rolenames_callback = nullptr;
        krearrangecolumnsproxymodel_multidata_callback = nullptr;
        krearrangecolumnsproxymodel_resetinternaldata_callback = nullptr;
        krearrangecolumnsproxymodel_event_callback = nullptr;
        krearrangecolumnsproxymodel_eventfilter_callback = nullptr;
        krearrangecolumnsproxymodel_timerevent_callback = nullptr;
        krearrangecolumnsproxymodel_childevent_callback = nullptr;
        krearrangecolumnsproxymodel_customevent_callback = nullptr;
        krearrangecolumnsproxymodel_connectnotify_callback = nullptr;
        krearrangecolumnsproxymodel_disconnectnotify_callback = nullptr;
        krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
        krearrangecolumnsproxymodel_sethandlesourcedatachanges_callback = nullptr;
        krearrangecolumnsproxymodel_createsourceindex_callback = nullptr;
        krearrangecolumnsproxymodel_createindex_callback = nullptr;
        krearrangecolumnsproxymodel_encodedata_callback = nullptr;
        krearrangecolumnsproxymodel_decodedata_callback = nullptr;
        krearrangecolumnsproxymodel_begininsertrows_callback = nullptr;
        krearrangecolumnsproxymodel_endinsertrows_callback = nullptr;
        krearrangecolumnsproxymodel_beginremoverows_callback = nullptr;
        krearrangecolumnsproxymodel_endremoverows_callback = nullptr;
        krearrangecolumnsproxymodel_beginmoverows_callback = nullptr;
        krearrangecolumnsproxymodel_endmoverows_callback = nullptr;
        krearrangecolumnsproxymodel_begininsertcolumns_callback = nullptr;
        krearrangecolumnsproxymodel_endinsertcolumns_callback = nullptr;
        krearrangecolumnsproxymodel_beginremovecolumns_callback = nullptr;
        krearrangecolumnsproxymodel_endremovecolumns_callback = nullptr;
        krearrangecolumnsproxymodel_beginmovecolumns_callback = nullptr;
        krearrangecolumnsproxymodel_endmovecolumns_callback = nullptr;
        krearrangecolumnsproxymodel_beginresetmodel_callback = nullptr;
        krearrangecolumnsproxymodel_endresetmodel_callback = nullptr;
        krearrangecolumnsproxymodel_changepersistentindex_callback = nullptr;
        krearrangecolumnsproxymodel_changepersistentindexlist_callback = nullptr;
        krearrangecolumnsproxymodel_persistentindexlist_callback = nullptr;
        krearrangecolumnsproxymodel_sender_callback = nullptr;
        krearrangecolumnsproxymodel_sendersignalindex_callback = nullptr;
        krearrangecolumnsproxymodel_receivers_callback = nullptr;
        krearrangecolumnsproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKRearrangeColumnsProxyModel_Metacall_Callback(KRearrangeColumnsProxyModel_Metacall_Callback cb) { krearrangecolumnsproxymodel_metacall_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ColumnCount_Callback(KRearrangeColumnsProxyModel_ColumnCount_Callback cb) { krearrangecolumnsproxymodel_columncount_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_RowCount_Callback(KRearrangeColumnsProxyModel_RowCount_Callback cb) { krearrangecolumnsproxymodel_rowcount_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Index_Callback(KRearrangeColumnsProxyModel_Index_Callback cb) { krearrangecolumnsproxymodel_index_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Parent_Callback(KRearrangeColumnsProxyModel_Parent_Callback cb) { krearrangecolumnsproxymodel_parent_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MapFromSource_Callback(KRearrangeColumnsProxyModel_MapFromSource_Callback cb) { krearrangecolumnsproxymodel_mapfromsource_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MapToSource_Callback(KRearrangeColumnsProxyModel_MapToSource_Callback cb) { krearrangecolumnsproxymodel_maptosource_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_HeaderData_Callback(KRearrangeColumnsProxyModel_HeaderData_Callback cb) { krearrangecolumnsproxymodel_headerdata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_HasChildren_Callback(KRearrangeColumnsProxyModel_HasChildren_Callback cb) { krearrangecolumnsproxymodel_haschildren_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Sibling_Callback(KRearrangeColumnsProxyModel_Sibling_Callback cb) { krearrangecolumnsproxymodel_sibling_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_DropMimeData_Callback(KRearrangeColumnsProxyModel_DropMimeData_Callback cb) { krearrangecolumnsproxymodel_dropmimedata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MapSelectionFromSource_Callback(KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback cb) { krearrangecolumnsproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MapSelectionToSource_Callback(KRearrangeColumnsProxyModel_MapSelectionToSource_Callback cb) { krearrangecolumnsproxymodel_mapselectiontosource_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Match_Callback(KRearrangeColumnsProxyModel_Match_Callback cb) { krearrangecolumnsproxymodel_match_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SetSourceModel_Callback(KRearrangeColumnsProxyModel_SetSourceModel_Callback cb) { krearrangecolumnsproxymodel_setsourcemodel_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_InsertColumns_Callback(KRearrangeColumnsProxyModel_InsertColumns_Callback cb) { krearrangecolumnsproxymodel_insertcolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_InsertRows_Callback(KRearrangeColumnsProxyModel_InsertRows_Callback cb) { krearrangecolumnsproxymodel_insertrows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_RemoveColumns_Callback(KRearrangeColumnsProxyModel_RemoveColumns_Callback cb) { krearrangecolumnsproxymodel_removecolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_RemoveRows_Callback(KRearrangeColumnsProxyModel_RemoveRows_Callback cb) { krearrangecolumnsproxymodel_removerows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MoveRows_Callback(KRearrangeColumnsProxyModel_MoveRows_Callback cb) { krearrangecolumnsproxymodel_moverows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MoveColumns_Callback(KRearrangeColumnsProxyModel_MoveColumns_Callback cb) { krearrangecolumnsproxymodel_movecolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Submit_Callback(KRearrangeColumnsProxyModel_Submit_Callback cb) { krearrangecolumnsproxymodel_submit_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Revert_Callback(KRearrangeColumnsProxyModel_Revert_Callback cb) { krearrangecolumnsproxymodel_revert_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Data_Callback(KRearrangeColumnsProxyModel_Data_Callback cb) { krearrangecolumnsproxymodel_data_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ItemData_Callback(KRearrangeColumnsProxyModel_ItemData_Callback cb) { krearrangecolumnsproxymodel_itemdata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Flags_Callback(KRearrangeColumnsProxyModel_Flags_Callback cb) { krearrangecolumnsproxymodel_flags_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SetData_Callback(KRearrangeColumnsProxyModel_SetData_Callback cb) { krearrangecolumnsproxymodel_setdata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SetItemData_Callback(KRearrangeColumnsProxyModel_SetItemData_Callback cb) { krearrangecolumnsproxymodel_setitemdata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SetHeaderData_Callback(KRearrangeColumnsProxyModel_SetHeaderData_Callback cb) { krearrangecolumnsproxymodel_setheaderdata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ClearItemData_Callback(KRearrangeColumnsProxyModel_ClearItemData_Callback cb) { krearrangecolumnsproxymodel_clearitemdata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Buddy_Callback(KRearrangeColumnsProxyModel_Buddy_Callback cb) { krearrangecolumnsproxymodel_buddy_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_CanFetchMore_Callback(KRearrangeColumnsProxyModel_CanFetchMore_Callback cb) { krearrangecolumnsproxymodel_canfetchmore_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_FetchMore_Callback(KRearrangeColumnsProxyModel_FetchMore_Callback cb) { krearrangecolumnsproxymodel_fetchmore_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Sort_Callback(KRearrangeColumnsProxyModel_Sort_Callback cb) { krearrangecolumnsproxymodel_sort_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Span_Callback(KRearrangeColumnsProxyModel_Span_Callback cb) { krearrangecolumnsproxymodel_span_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MimeData_Callback(KRearrangeColumnsProxyModel_MimeData_Callback cb) { krearrangecolumnsproxymodel_mimedata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_CanDropMimeData_Callback(KRearrangeColumnsProxyModel_CanDropMimeData_Callback cb) { krearrangecolumnsproxymodel_candropmimedata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MimeTypes_Callback(KRearrangeColumnsProxyModel_MimeTypes_Callback cb) { krearrangecolumnsproxymodel_mimetypes_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SupportedDragActions_Callback(KRearrangeColumnsProxyModel_SupportedDragActions_Callback cb) { krearrangecolumnsproxymodel_supporteddragactions_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SupportedDropActions_Callback(KRearrangeColumnsProxyModel_SupportedDropActions_Callback cb) { krearrangecolumnsproxymodel_supporteddropactions_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_RoleNames_Callback(KRearrangeColumnsProxyModel_RoleNames_Callback cb) { krearrangecolumnsproxymodel_rolenames_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_MultiData_Callback(KRearrangeColumnsProxyModel_MultiData_Callback cb) { krearrangecolumnsproxymodel_multidata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ResetInternalData_Callback(KRearrangeColumnsProxyModel_ResetInternalData_Callback cb) { krearrangecolumnsproxymodel_resetinternaldata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Event_Callback(KRearrangeColumnsProxyModel_Event_Callback cb) { krearrangecolumnsproxymodel_event_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EventFilter_Callback(KRearrangeColumnsProxyModel_EventFilter_Callback cb) { krearrangecolumnsproxymodel_eventfilter_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_TimerEvent_Callback(KRearrangeColumnsProxyModel_TimerEvent_Callback cb) { krearrangecolumnsproxymodel_timerevent_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ChildEvent_Callback(KRearrangeColumnsProxyModel_ChildEvent_Callback cb) { krearrangecolumnsproxymodel_childevent_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_CustomEvent_Callback(KRearrangeColumnsProxyModel_CustomEvent_Callback cb) { krearrangecolumnsproxymodel_customevent_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ConnectNotify_Callback(KRearrangeColumnsProxyModel_ConnectNotify_Callback cb) { krearrangecolumnsproxymodel_connectnotify_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_DisconnectNotify_Callback(KRearrangeColumnsProxyModel_DisconnectNotify_Callback cb) { krearrangecolumnsproxymodel_disconnectnotify_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_Callback(KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_Callback cb) { krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SetHandleSourceDataChanges_Callback(KRearrangeColumnsProxyModel_SetHandleSourceDataChanges_Callback cb) { krearrangecolumnsproxymodel_sethandlesourcedatachanges_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_CreateSourceIndex_Callback(KRearrangeColumnsProxyModel_CreateSourceIndex_Callback cb) { krearrangecolumnsproxymodel_createsourceindex_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_CreateIndex_Callback(KRearrangeColumnsProxyModel_CreateIndex_Callback cb) { krearrangecolumnsproxymodel_createindex_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EncodeData_Callback(KRearrangeColumnsProxyModel_EncodeData_Callback cb) { krearrangecolumnsproxymodel_encodedata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_DecodeData_Callback(KRearrangeColumnsProxyModel_DecodeData_Callback cb) { krearrangecolumnsproxymodel_decodedata_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginInsertRows_Callback(KRearrangeColumnsProxyModel_BeginInsertRows_Callback cb) { krearrangecolumnsproxymodel_begininsertrows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndInsertRows_Callback(KRearrangeColumnsProxyModel_EndInsertRows_Callback cb) { krearrangecolumnsproxymodel_endinsertrows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginRemoveRows_Callback(KRearrangeColumnsProxyModel_BeginRemoveRows_Callback cb) { krearrangecolumnsproxymodel_beginremoverows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndRemoveRows_Callback(KRearrangeColumnsProxyModel_EndRemoveRows_Callback cb) { krearrangecolumnsproxymodel_endremoverows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginMoveRows_Callback(KRearrangeColumnsProxyModel_BeginMoveRows_Callback cb) { krearrangecolumnsproxymodel_beginmoverows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndMoveRows_Callback(KRearrangeColumnsProxyModel_EndMoveRows_Callback cb) { krearrangecolumnsproxymodel_endmoverows_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginInsertColumns_Callback(KRearrangeColumnsProxyModel_BeginInsertColumns_Callback cb) { krearrangecolumnsproxymodel_begininsertcolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndInsertColumns_Callback(KRearrangeColumnsProxyModel_EndInsertColumns_Callback cb) { krearrangecolumnsproxymodel_endinsertcolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginRemoveColumns_Callback(KRearrangeColumnsProxyModel_BeginRemoveColumns_Callback cb) { krearrangecolumnsproxymodel_beginremovecolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndRemoveColumns_Callback(KRearrangeColumnsProxyModel_EndRemoveColumns_Callback cb) { krearrangecolumnsproxymodel_endremovecolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginMoveColumns_Callback(KRearrangeColumnsProxyModel_BeginMoveColumns_Callback cb) { krearrangecolumnsproxymodel_beginmovecolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndMoveColumns_Callback(KRearrangeColumnsProxyModel_EndMoveColumns_Callback cb) { krearrangecolumnsproxymodel_endmovecolumns_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_BeginResetModel_Callback(KRearrangeColumnsProxyModel_BeginResetModel_Callback cb) { krearrangecolumnsproxymodel_beginresetmodel_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_EndResetModel_Callback(KRearrangeColumnsProxyModel_EndResetModel_Callback cb) { krearrangecolumnsproxymodel_endresetmodel_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ChangePersistentIndex_Callback(KRearrangeColumnsProxyModel_ChangePersistentIndex_Callback cb) { krearrangecolumnsproxymodel_changepersistentindex_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_ChangePersistentIndexList_Callback(KRearrangeColumnsProxyModel_ChangePersistentIndexList_Callback cb) { krearrangecolumnsproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_PersistentIndexList_Callback(KRearrangeColumnsProxyModel_PersistentIndexList_Callback cb) { krearrangecolumnsproxymodel_persistentindexlist_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Sender_Callback(KRearrangeColumnsProxyModel_Sender_Callback cb) { krearrangecolumnsproxymodel_sender_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_SenderSignalIndex_Callback(KRearrangeColumnsProxyModel_SenderSignalIndex_Callback cb) { krearrangecolumnsproxymodel_sendersignalindex_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_Receivers_Callback(KRearrangeColumnsProxyModel_Receivers_Callback cb) { krearrangecolumnsproxymodel_receivers_callback = cb; }
    inline void setKRearrangeColumnsProxyModel_IsSignalConnected_Callback(KRearrangeColumnsProxyModel_IsSignalConnected_Callback cb) { krearrangecolumnsproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKRearrangeColumnsProxyModel_Metacall_IsBase(bool value) const { krearrangecolumnsproxymodel_metacall_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ColumnCount_IsBase(bool value) const { krearrangecolumnsproxymodel_columncount_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_RowCount_IsBase(bool value) const { krearrangecolumnsproxymodel_rowcount_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Index_IsBase(bool value) const { krearrangecolumnsproxymodel_index_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Parent_IsBase(bool value) const { krearrangecolumnsproxymodel_parent_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MapFromSource_IsBase(bool value) const { krearrangecolumnsproxymodel_mapfromsource_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MapToSource_IsBase(bool value) const { krearrangecolumnsproxymodel_maptosource_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_HeaderData_IsBase(bool value) const { krearrangecolumnsproxymodel_headerdata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_HasChildren_IsBase(bool value) const { krearrangecolumnsproxymodel_haschildren_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Sibling_IsBase(bool value) const { krearrangecolumnsproxymodel_sibling_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_DropMimeData_IsBase(bool value) const { krearrangecolumnsproxymodel_dropmimedata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MapSelectionFromSource_IsBase(bool value) const { krearrangecolumnsproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MapSelectionToSource_IsBase(bool value) const { krearrangecolumnsproxymodel_mapselectiontosource_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Match_IsBase(bool value) const { krearrangecolumnsproxymodel_match_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SetSourceModel_IsBase(bool value) const { krearrangecolumnsproxymodel_setsourcemodel_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_InsertColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_insertcolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_InsertRows_IsBase(bool value) const { krearrangecolumnsproxymodel_insertrows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_RemoveColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_removecolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_RemoveRows_IsBase(bool value) const { krearrangecolumnsproxymodel_removerows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MoveRows_IsBase(bool value) const { krearrangecolumnsproxymodel_moverows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MoveColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_movecolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Submit_IsBase(bool value) const { krearrangecolumnsproxymodel_submit_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Revert_IsBase(bool value) const { krearrangecolumnsproxymodel_revert_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Data_IsBase(bool value) const { krearrangecolumnsproxymodel_data_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ItemData_IsBase(bool value) const { krearrangecolumnsproxymodel_itemdata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Flags_IsBase(bool value) const { krearrangecolumnsproxymodel_flags_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SetData_IsBase(bool value) const { krearrangecolumnsproxymodel_setdata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SetItemData_IsBase(bool value) const { krearrangecolumnsproxymodel_setitemdata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SetHeaderData_IsBase(bool value) const { krearrangecolumnsproxymodel_setheaderdata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ClearItemData_IsBase(bool value) const { krearrangecolumnsproxymodel_clearitemdata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Buddy_IsBase(bool value) const { krearrangecolumnsproxymodel_buddy_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_CanFetchMore_IsBase(bool value) const { krearrangecolumnsproxymodel_canfetchmore_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_FetchMore_IsBase(bool value) const { krearrangecolumnsproxymodel_fetchmore_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Sort_IsBase(bool value) const { krearrangecolumnsproxymodel_sort_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Span_IsBase(bool value) const { krearrangecolumnsproxymodel_span_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MimeData_IsBase(bool value) const { krearrangecolumnsproxymodel_mimedata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_CanDropMimeData_IsBase(bool value) const { krearrangecolumnsproxymodel_candropmimedata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MimeTypes_IsBase(bool value) const { krearrangecolumnsproxymodel_mimetypes_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SupportedDragActions_IsBase(bool value) const { krearrangecolumnsproxymodel_supporteddragactions_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SupportedDropActions_IsBase(bool value) const { krearrangecolumnsproxymodel_supporteddropactions_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_RoleNames_IsBase(bool value) const { krearrangecolumnsproxymodel_rolenames_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_MultiData_IsBase(bool value) const { krearrangecolumnsproxymodel_multidata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ResetInternalData_IsBase(bool value) const { krearrangecolumnsproxymodel_resetinternaldata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Event_IsBase(bool value) const { krearrangecolumnsproxymodel_event_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EventFilter_IsBase(bool value) const { krearrangecolumnsproxymodel_eventfilter_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_TimerEvent_IsBase(bool value) const { krearrangecolumnsproxymodel_timerevent_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ChildEvent_IsBase(bool value) const { krearrangecolumnsproxymodel_childevent_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_CustomEvent_IsBase(bool value) const { krearrangecolumnsproxymodel_customevent_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ConnectNotify_IsBase(bool value) const { krearrangecolumnsproxymodel_connectnotify_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_DisconnectNotify_IsBase(bool value) const { krearrangecolumnsproxymodel_disconnectnotify_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_IsBase(bool value) const { krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SetHandleSourceDataChanges_IsBase(bool value) const { krearrangecolumnsproxymodel_sethandlesourcedatachanges_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_CreateSourceIndex_IsBase(bool value) const { krearrangecolumnsproxymodel_createsourceindex_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_CreateIndex_IsBase(bool value) const { krearrangecolumnsproxymodel_createindex_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EncodeData_IsBase(bool value) const { krearrangecolumnsproxymodel_encodedata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_DecodeData_IsBase(bool value) const { krearrangecolumnsproxymodel_decodedata_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginInsertRows_IsBase(bool value) const { krearrangecolumnsproxymodel_begininsertrows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndInsertRows_IsBase(bool value) const { krearrangecolumnsproxymodel_endinsertrows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginRemoveRows_IsBase(bool value) const { krearrangecolumnsproxymodel_beginremoverows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndRemoveRows_IsBase(bool value) const { krearrangecolumnsproxymodel_endremoverows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginMoveRows_IsBase(bool value) const { krearrangecolumnsproxymodel_beginmoverows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndMoveRows_IsBase(bool value) const { krearrangecolumnsproxymodel_endmoverows_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginInsertColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_begininsertcolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndInsertColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_endinsertcolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginRemoveColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_beginremovecolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndRemoveColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_endremovecolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginMoveColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_beginmovecolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndMoveColumns_IsBase(bool value) const { krearrangecolumnsproxymodel_endmovecolumns_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_BeginResetModel_IsBase(bool value) const { krearrangecolumnsproxymodel_beginresetmodel_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_EndResetModel_IsBase(bool value) const { krearrangecolumnsproxymodel_endresetmodel_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ChangePersistentIndex_IsBase(bool value) const { krearrangecolumnsproxymodel_changepersistentindex_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_ChangePersistentIndexList_IsBase(bool value) const { krearrangecolumnsproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_PersistentIndexList_IsBase(bool value) const { krearrangecolumnsproxymodel_persistentindexlist_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Sender_IsBase(bool value) const { krearrangecolumnsproxymodel_sender_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_SenderSignalIndex_IsBase(bool value) const { krearrangecolumnsproxymodel_sendersignalindex_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_Receivers_IsBase(bool value) const { krearrangecolumnsproxymodel_receivers_isbase = value; }
    inline void setKRearrangeColumnsProxyModel_IsSignalConnected_IsBase(bool value) const { krearrangecolumnsproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krearrangecolumnsproxymodel_metacall_isbase) {
            krearrangecolumnsproxymodel_metacall_isbase = false;
            return KRearrangeColumnsProxyModel::qt_metacall(param1, param2, param3);
        } else if (krearrangecolumnsproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = krearrangecolumnsproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_columncount_isbase) {
            krearrangecolumnsproxymodel_columncount_isbase = false;
            return KRearrangeColumnsProxyModel::columnCount(parent);
        } else if (krearrangecolumnsproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = krearrangecolumnsproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_rowcount_isbase) {
            krearrangecolumnsproxymodel_rowcount_isbase = false;
            return KRearrangeColumnsProxyModel::rowCount(parent);
        } else if (krearrangecolumnsproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = krearrangecolumnsproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_index_isbase) {
            krearrangecolumnsproxymodel_index_isbase = false;
            return KRearrangeColumnsProxyModel::index(row, column, parent);
        } else if (krearrangecolumnsproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (krearrangecolumnsproxymodel_parent_isbase) {
            krearrangecolumnsproxymodel_parent_isbase = false;
            return KRearrangeColumnsProxyModel::parent(child);
        } else if (krearrangecolumnsproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (krearrangecolumnsproxymodel_mapfromsource_isbase) {
            krearrangecolumnsproxymodel_mapfromsource_isbase = false;
            return KRearrangeColumnsProxyModel::mapFromSource(sourceIndex);
        } else if (krearrangecolumnsproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (krearrangecolumnsproxymodel_maptosource_isbase) {
            krearrangecolumnsproxymodel_maptosource_isbase = false;
            return KRearrangeColumnsProxyModel::mapToSource(proxyIndex);
        } else if (krearrangecolumnsproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (krearrangecolumnsproxymodel_headerdata_isbase) {
            krearrangecolumnsproxymodel_headerdata_isbase = false;
            return KRearrangeColumnsProxyModel::headerData(section, orientation, role);
        } else if (krearrangecolumnsproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = krearrangecolumnsproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_haschildren_isbase) {
            krearrangecolumnsproxymodel_haschildren_isbase = false;
            return KRearrangeColumnsProxyModel::hasChildren(parent);
        } else if (krearrangecolumnsproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (krearrangecolumnsproxymodel_sibling_isbase) {
            krearrangecolumnsproxymodel_sibling_isbase = false;
            return KRearrangeColumnsProxyModel::sibling(row, column, idx);
        } else if (krearrangecolumnsproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_dropmimedata_isbase) {
            krearrangecolumnsproxymodel_dropmimedata_isbase = false;
            return KRearrangeColumnsProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (krearrangecolumnsproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (krearrangecolumnsproxymodel_mapselectionfromsource_isbase) {
            krearrangecolumnsproxymodel_mapselectionfromsource_isbase = false;
            return KRearrangeColumnsProxyModel::mapSelectionFromSource(selection);
        } else if (krearrangecolumnsproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = krearrangecolumnsproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (krearrangecolumnsproxymodel_mapselectiontosource_isbase) {
            krearrangecolumnsproxymodel_mapselectiontosource_isbase = false;
            return KRearrangeColumnsProxyModel::mapSelectionToSource(selection);
        } else if (krearrangecolumnsproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = krearrangecolumnsproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (krearrangecolumnsproxymodel_match_isbase) {
            krearrangecolumnsproxymodel_match_isbase = false;
            return KRearrangeColumnsProxyModel::match(start, role, value, hits, flags);
        } else if (krearrangecolumnsproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = krearrangecolumnsproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KRearrangeColumnsProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (krearrangecolumnsproxymodel_setsourcemodel_isbase) {
            krearrangecolumnsproxymodel_setsourcemodel_isbase = false;
            KRearrangeColumnsProxyModel::setSourceModel(sourceModel);
        } else if (krearrangecolumnsproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            krearrangecolumnsproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_insertcolumns_isbase) {
            krearrangecolumnsproxymodel_insertcolumns_isbase = false;
            return KRearrangeColumnsProxyModel::insertColumns(column, count, parent);
        } else if (krearrangecolumnsproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_insertrows_isbase) {
            krearrangecolumnsproxymodel_insertrows_isbase = false;
            return KRearrangeColumnsProxyModel::insertRows(row, count, parent);
        } else if (krearrangecolumnsproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_removecolumns_isbase) {
            krearrangecolumnsproxymodel_removecolumns_isbase = false;
            return KRearrangeColumnsProxyModel::removeColumns(column, count, parent);
        } else if (krearrangecolumnsproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_removerows_isbase) {
            krearrangecolumnsproxymodel_removerows_isbase = false;
            return KRearrangeColumnsProxyModel::removeRows(row, count, parent);
        } else if (krearrangecolumnsproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (krearrangecolumnsproxymodel_moverows_isbase) {
            krearrangecolumnsproxymodel_moverows_isbase = false;
            return KRearrangeColumnsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (krearrangecolumnsproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = krearrangecolumnsproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (krearrangecolumnsproxymodel_movecolumns_isbase) {
            krearrangecolumnsproxymodel_movecolumns_isbase = false;
            return KRearrangeColumnsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (krearrangecolumnsproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = krearrangecolumnsproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (krearrangecolumnsproxymodel_submit_isbase) {
            krearrangecolumnsproxymodel_submit_isbase = false;
            return KRearrangeColumnsProxyModel::submit();
        } else if (krearrangecolumnsproxymodel_submit_callback != nullptr) {
            bool callback_ret = krearrangecolumnsproxymodel_submit_callback();
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (krearrangecolumnsproxymodel_revert_isbase) {
            krearrangecolumnsproxymodel_revert_isbase = false;
            KRearrangeColumnsProxyModel::revert();
        } else if (krearrangecolumnsproxymodel_revert_callback != nullptr) {
            krearrangecolumnsproxymodel_revert_callback();
        } else {
            KRearrangeColumnsProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (krearrangecolumnsproxymodel_data_isbase) {
            krearrangecolumnsproxymodel_data_isbase = false;
            return KRearrangeColumnsProxyModel::data(proxyIndex, role);
        } else if (krearrangecolumnsproxymodel_data_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;

            QVariant* callback_ret = krearrangecolumnsproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::data(proxyIndex, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_itemdata_isbase) {
            krearrangecolumnsproxymodel_itemdata_isbase = false;
            return KRearrangeColumnsProxyModel::itemData(index);
        } else if (krearrangecolumnsproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = krearrangecolumnsproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KRearrangeColumnsProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_flags_isbase) {
            krearrangecolumnsproxymodel_flags_isbase = false;
            return KRearrangeColumnsProxyModel::flags(index);
        } else if (krearrangecolumnsproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = krearrangecolumnsproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (krearrangecolumnsproxymodel_setdata_isbase) {
            krearrangecolumnsproxymodel_setdata_isbase = false;
            return KRearrangeColumnsProxyModel::setData(index, value, role);
        } else if (krearrangecolumnsproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = krearrangecolumnsproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (krearrangecolumnsproxymodel_setitemdata_isbase) {
            krearrangecolumnsproxymodel_setitemdata_isbase = false;
            return KRearrangeColumnsProxyModel::setItemData(index, roles);
        } else if (krearrangecolumnsproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = krearrangecolumnsproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (krearrangecolumnsproxymodel_setheaderdata_isbase) {
            krearrangecolumnsproxymodel_setheaderdata_isbase = false;
            return KRearrangeColumnsProxyModel::setHeaderData(section, orientation, value, role);
        } else if (krearrangecolumnsproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = krearrangecolumnsproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (krearrangecolumnsproxymodel_clearitemdata_isbase) {
            krearrangecolumnsproxymodel_clearitemdata_isbase = false;
            return KRearrangeColumnsProxyModel::clearItemData(index);
        } else if (krearrangecolumnsproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = krearrangecolumnsproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_buddy_isbase) {
            krearrangecolumnsproxymodel_buddy_isbase = false;
            return KRearrangeColumnsProxyModel::buddy(index);
        } else if (krearrangecolumnsproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_canfetchmore_isbase) {
            krearrangecolumnsproxymodel_canfetchmore_isbase = false;
            return KRearrangeColumnsProxyModel::canFetchMore(parent);
        } else if (krearrangecolumnsproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_fetchmore_isbase) {
            krearrangecolumnsproxymodel_fetchmore_isbase = false;
            KRearrangeColumnsProxyModel::fetchMore(parent);
        } else if (krearrangecolumnsproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            krearrangecolumnsproxymodel_fetchmore_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (krearrangecolumnsproxymodel_sort_isbase) {
            krearrangecolumnsproxymodel_sort_isbase = false;
            KRearrangeColumnsProxyModel::sort(column, order);
        } else if (krearrangecolumnsproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            krearrangecolumnsproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            KRearrangeColumnsProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_span_isbase) {
            krearrangecolumnsproxymodel_span_isbase = false;
            return KRearrangeColumnsProxyModel::span(index);
        } else if (krearrangecolumnsproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = krearrangecolumnsproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (krearrangecolumnsproxymodel_mimedata_isbase) {
            krearrangecolumnsproxymodel_mimedata_isbase = false;
            return KRearrangeColumnsProxyModel::mimeData(indexes);
        } else if (krearrangecolumnsproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = krearrangecolumnsproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_candropmimedata_isbase) {
            krearrangecolumnsproxymodel_candropmimedata_isbase = false;
            return KRearrangeColumnsProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (krearrangecolumnsproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = krearrangecolumnsproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (krearrangecolumnsproxymodel_mimetypes_isbase) {
            krearrangecolumnsproxymodel_mimetypes_isbase = false;
            return KRearrangeColumnsProxyModel::mimeTypes();
        } else if (krearrangecolumnsproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = krearrangecolumnsproxymodel_mimetypes_callback();
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
            return KRearrangeColumnsProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (krearrangecolumnsproxymodel_supporteddragactions_isbase) {
            krearrangecolumnsproxymodel_supporteddragactions_isbase = false;
            return KRearrangeColumnsProxyModel::supportedDragActions();
        } else if (krearrangecolumnsproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = krearrangecolumnsproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (krearrangecolumnsproxymodel_supporteddropactions_isbase) {
            krearrangecolumnsproxymodel_supporteddropactions_isbase = false;
            return KRearrangeColumnsProxyModel::supportedDropActions();
        } else if (krearrangecolumnsproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = krearrangecolumnsproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (krearrangecolumnsproxymodel_rolenames_isbase) {
            krearrangecolumnsproxymodel_rolenames_isbase = false;
            return KRearrangeColumnsProxyModel::roleNames();
        } else if (krearrangecolumnsproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = krearrangecolumnsproxymodel_rolenames_callback();
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
            return KRearrangeColumnsProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (krearrangecolumnsproxymodel_multidata_isbase) {
            krearrangecolumnsproxymodel_multidata_isbase = false;
            KRearrangeColumnsProxyModel::multiData(index, roleDataSpan);
        } else if (krearrangecolumnsproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            krearrangecolumnsproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KRearrangeColumnsProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (krearrangecolumnsproxymodel_resetinternaldata_isbase) {
            krearrangecolumnsproxymodel_resetinternaldata_isbase = false;
            KRearrangeColumnsProxyModel::resetInternalData();
        } else if (krearrangecolumnsproxymodel_resetinternaldata_callback != nullptr) {
            krearrangecolumnsproxymodel_resetinternaldata_callback();
        } else {
            KRearrangeColumnsProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (krearrangecolumnsproxymodel_event_isbase) {
            krearrangecolumnsproxymodel_event_isbase = false;
            return KRearrangeColumnsProxyModel::event(event);
        } else if (krearrangecolumnsproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = krearrangecolumnsproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (krearrangecolumnsproxymodel_eventfilter_isbase) {
            krearrangecolumnsproxymodel_eventfilter_isbase = false;
            return KRearrangeColumnsProxyModel::eventFilter(watched, event);
        } else if (krearrangecolumnsproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = krearrangecolumnsproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (krearrangecolumnsproxymodel_timerevent_isbase) {
            krearrangecolumnsproxymodel_timerevent_isbase = false;
            KRearrangeColumnsProxyModel::timerEvent(event);
        } else if (krearrangecolumnsproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            krearrangecolumnsproxymodel_timerevent_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krearrangecolumnsproxymodel_childevent_isbase) {
            krearrangecolumnsproxymodel_childevent_isbase = false;
            KRearrangeColumnsProxyModel::childEvent(event);
        } else if (krearrangecolumnsproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            krearrangecolumnsproxymodel_childevent_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krearrangecolumnsproxymodel_customevent_isbase) {
            krearrangecolumnsproxymodel_customevent_isbase = false;
            KRearrangeColumnsProxyModel::customEvent(event);
        } else if (krearrangecolumnsproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            krearrangecolumnsproxymodel_customevent_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krearrangecolumnsproxymodel_connectnotify_isbase) {
            krearrangecolumnsproxymodel_connectnotify_isbase = false;
            KRearrangeColumnsProxyModel::connectNotify(signal);
        } else if (krearrangecolumnsproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krearrangecolumnsproxymodel_connectnotify_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krearrangecolumnsproxymodel_disconnectnotify_isbase) {
            krearrangecolumnsproxymodel_disconnectnotify_isbase = false;
            KRearrangeColumnsProxyModel::disconnectNotify(signal);
        } else if (krearrangecolumnsproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krearrangecolumnsproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceLayoutChanges(bool handleSourceLayoutChanges) {
        if (krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_isbase) {
            krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_isbase = false;
            KRearrangeColumnsProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        } else if (krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_callback != nullptr) {
            bool cbval1 = handleSourceLayoutChanges;

            krearrangecolumnsproxymodel_sethandlesourcelayoutchanges_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceDataChanges(bool handleSourceDataChanges) {
        if (krearrangecolumnsproxymodel_sethandlesourcedatachanges_isbase) {
            krearrangecolumnsproxymodel_sethandlesourcedatachanges_isbase = false;
            KRearrangeColumnsProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        } else if (krearrangecolumnsproxymodel_sethandlesourcedatachanges_callback != nullptr) {
            bool cbval1 = handleSourceDataChanges;

            krearrangecolumnsproxymodel_sethandlesourcedatachanges_callback(this, cbval1);
        } else {
            KRearrangeColumnsProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (krearrangecolumnsproxymodel_createsourceindex_isbase) {
            krearrangecolumnsproxymodel_createsourceindex_isbase = false;
            return KRearrangeColumnsProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (krearrangecolumnsproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (krearrangecolumnsproxymodel_createindex_isbase) {
            krearrangecolumnsproxymodel_createindex_isbase = false;
            return KRearrangeColumnsProxyModel::createIndex(row, column);
        } else if (krearrangecolumnsproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = krearrangecolumnsproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (krearrangecolumnsproxymodel_encodedata_isbase) {
            krearrangecolumnsproxymodel_encodedata_isbase = false;
            KRearrangeColumnsProxyModel::encodeData(indexes, stream);
        } else if (krearrangecolumnsproxymodel_encodedata_callback != nullptr) {
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

            krearrangecolumnsproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KRearrangeColumnsProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (krearrangecolumnsproxymodel_decodedata_isbase) {
            krearrangecolumnsproxymodel_decodedata_isbase = false;
            return KRearrangeColumnsProxyModel::decodeData(row, column, parent, stream);
        } else if (krearrangecolumnsproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = krearrangecolumnsproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (krearrangecolumnsproxymodel_begininsertrows_isbase) {
            krearrangecolumnsproxymodel_begininsertrows_isbase = false;
            KRearrangeColumnsProxyModel::beginInsertRows(parent, first, last);
        } else if (krearrangecolumnsproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            krearrangecolumnsproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KRearrangeColumnsProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (krearrangecolumnsproxymodel_endinsertrows_isbase) {
            krearrangecolumnsproxymodel_endinsertrows_isbase = false;
            KRearrangeColumnsProxyModel::endInsertRows();
        } else if (krearrangecolumnsproxymodel_endinsertrows_callback != nullptr) {
            krearrangecolumnsproxymodel_endinsertrows_callback();
        } else {
            KRearrangeColumnsProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (krearrangecolumnsproxymodel_beginremoverows_isbase) {
            krearrangecolumnsproxymodel_beginremoverows_isbase = false;
            KRearrangeColumnsProxyModel::beginRemoveRows(parent, first, last);
        } else if (krearrangecolumnsproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            krearrangecolumnsproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KRearrangeColumnsProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (krearrangecolumnsproxymodel_endremoverows_isbase) {
            krearrangecolumnsproxymodel_endremoverows_isbase = false;
            KRearrangeColumnsProxyModel::endRemoveRows();
        } else if (krearrangecolumnsproxymodel_endremoverows_callback != nullptr) {
            krearrangecolumnsproxymodel_endremoverows_callback();
        } else {
            KRearrangeColumnsProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (krearrangecolumnsproxymodel_beginmoverows_isbase) {
            krearrangecolumnsproxymodel_beginmoverows_isbase = false;
            return KRearrangeColumnsProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (krearrangecolumnsproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = krearrangecolumnsproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (krearrangecolumnsproxymodel_endmoverows_isbase) {
            krearrangecolumnsproxymodel_endmoverows_isbase = false;
            KRearrangeColumnsProxyModel::endMoveRows();
        } else if (krearrangecolumnsproxymodel_endmoverows_callback != nullptr) {
            krearrangecolumnsproxymodel_endmoverows_callback();
        } else {
            KRearrangeColumnsProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (krearrangecolumnsproxymodel_begininsertcolumns_isbase) {
            krearrangecolumnsproxymodel_begininsertcolumns_isbase = false;
            KRearrangeColumnsProxyModel::beginInsertColumns(parent, first, last);
        } else if (krearrangecolumnsproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            krearrangecolumnsproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KRearrangeColumnsProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (krearrangecolumnsproxymodel_endinsertcolumns_isbase) {
            krearrangecolumnsproxymodel_endinsertcolumns_isbase = false;
            KRearrangeColumnsProxyModel::endInsertColumns();
        } else if (krearrangecolumnsproxymodel_endinsertcolumns_callback != nullptr) {
            krearrangecolumnsproxymodel_endinsertcolumns_callback();
        } else {
            KRearrangeColumnsProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (krearrangecolumnsproxymodel_beginremovecolumns_isbase) {
            krearrangecolumnsproxymodel_beginremovecolumns_isbase = false;
            KRearrangeColumnsProxyModel::beginRemoveColumns(parent, first, last);
        } else if (krearrangecolumnsproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            krearrangecolumnsproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KRearrangeColumnsProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (krearrangecolumnsproxymodel_endremovecolumns_isbase) {
            krearrangecolumnsproxymodel_endremovecolumns_isbase = false;
            KRearrangeColumnsProxyModel::endRemoveColumns();
        } else if (krearrangecolumnsproxymodel_endremovecolumns_callback != nullptr) {
            krearrangecolumnsproxymodel_endremovecolumns_callback();
        } else {
            KRearrangeColumnsProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (krearrangecolumnsproxymodel_beginmovecolumns_isbase) {
            krearrangecolumnsproxymodel_beginmovecolumns_isbase = false;
            return KRearrangeColumnsProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (krearrangecolumnsproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = krearrangecolumnsproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (krearrangecolumnsproxymodel_endmovecolumns_isbase) {
            krearrangecolumnsproxymodel_endmovecolumns_isbase = false;
            KRearrangeColumnsProxyModel::endMoveColumns();
        } else if (krearrangecolumnsproxymodel_endmovecolumns_callback != nullptr) {
            krearrangecolumnsproxymodel_endmovecolumns_callback();
        } else {
            KRearrangeColumnsProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (krearrangecolumnsproxymodel_beginresetmodel_isbase) {
            krearrangecolumnsproxymodel_beginresetmodel_isbase = false;
            KRearrangeColumnsProxyModel::beginResetModel();
        } else if (krearrangecolumnsproxymodel_beginresetmodel_callback != nullptr) {
            krearrangecolumnsproxymodel_beginresetmodel_callback();
        } else {
            KRearrangeColumnsProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (krearrangecolumnsproxymodel_endresetmodel_isbase) {
            krearrangecolumnsproxymodel_endresetmodel_isbase = false;
            KRearrangeColumnsProxyModel::endResetModel();
        } else if (krearrangecolumnsproxymodel_endresetmodel_callback != nullptr) {
            krearrangecolumnsproxymodel_endresetmodel_callback();
        } else {
            KRearrangeColumnsProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (krearrangecolumnsproxymodel_changepersistentindex_isbase) {
            krearrangecolumnsproxymodel_changepersistentindex_isbase = false;
            KRearrangeColumnsProxyModel::changePersistentIndex(from, to);
        } else if (krearrangecolumnsproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            krearrangecolumnsproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KRearrangeColumnsProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (krearrangecolumnsproxymodel_changepersistentindexlist_isbase) {
            krearrangecolumnsproxymodel_changepersistentindexlist_isbase = false;
            KRearrangeColumnsProxyModel::changePersistentIndexList(from, to);
        } else if (krearrangecolumnsproxymodel_changepersistentindexlist_callback != nullptr) {
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

            krearrangecolumnsproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KRearrangeColumnsProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (krearrangecolumnsproxymodel_persistentindexlist_isbase) {
            krearrangecolumnsproxymodel_persistentindexlist_isbase = false;
            return KRearrangeColumnsProxyModel::persistentIndexList();
        } else if (krearrangecolumnsproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = krearrangecolumnsproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KRearrangeColumnsProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (krearrangecolumnsproxymodel_sender_isbase) {
            krearrangecolumnsproxymodel_sender_isbase = false;
            return KRearrangeColumnsProxyModel::sender();
        } else if (krearrangecolumnsproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = krearrangecolumnsproxymodel_sender_callback();
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (krearrangecolumnsproxymodel_sendersignalindex_isbase) {
            krearrangecolumnsproxymodel_sendersignalindex_isbase = false;
            return KRearrangeColumnsProxyModel::senderSignalIndex();
        } else if (krearrangecolumnsproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = krearrangecolumnsproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (krearrangecolumnsproxymodel_receivers_isbase) {
            krearrangecolumnsproxymodel_receivers_isbase = false;
            return KRearrangeColumnsProxyModel::receivers(signal);
        } else if (krearrangecolumnsproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = krearrangecolumnsproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRearrangeColumnsProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (krearrangecolumnsproxymodel_issignalconnected_isbase) {
            krearrangecolumnsproxymodel_issignalconnected_isbase = false;
            return KRearrangeColumnsProxyModel::isSignalConnected(signal);
        } else if (krearrangecolumnsproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = krearrangecolumnsproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRearrangeColumnsProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KRearrangeColumnsProxyModel_ResetInternalData(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseResetInternalData(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_TimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event);
    friend void KRearrangeColumnsProxyModel_QBaseTimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event);
    friend void KRearrangeColumnsProxyModel_ChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event);
    friend void KRearrangeColumnsProxyModel_QBaseChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event);
    friend void KRearrangeColumnsProxyModel_CustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event);
    friend void KRearrangeColumnsProxyModel_QBaseCustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event);
    friend void KRearrangeColumnsProxyModel_ConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KRearrangeColumnsProxyModel_QBaseConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KRearrangeColumnsProxyModel_DisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KRearrangeColumnsProxyModel_QBaseDisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges(KRearrangeColumnsProxyModel* self, bool handleSourceLayoutChanges);
    friend void KRearrangeColumnsProxyModel_QBaseSetHandleSourceLayoutChanges(KRearrangeColumnsProxyModel* self, bool handleSourceLayoutChanges);
    friend void KRearrangeColumnsProxyModel_SetHandleSourceDataChanges(KRearrangeColumnsProxyModel* self, bool handleSourceDataChanges);
    friend void KRearrangeColumnsProxyModel_QBaseSetHandleSourceDataChanges(KRearrangeColumnsProxyModel* self, bool handleSourceDataChanges);
    friend QModelIndex* KRearrangeColumnsProxyModel_CreateSourceIndex(const KRearrangeColumnsProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KRearrangeColumnsProxyModel_QBaseCreateSourceIndex(const KRearrangeColumnsProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KRearrangeColumnsProxyModel_CreateIndex(const KRearrangeColumnsProxyModel* self, int row, int column);
    friend QModelIndex* KRearrangeColumnsProxyModel_QBaseCreateIndex(const KRearrangeColumnsProxyModel* self, int row, int column);
    friend void KRearrangeColumnsProxyModel_EncodeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KRearrangeColumnsProxyModel_QBaseEncodeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KRearrangeColumnsProxyModel_DecodeData(KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KRearrangeColumnsProxyModel_QBaseDecodeData(KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KRearrangeColumnsProxyModel_BeginInsertRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_QBaseBeginInsertRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_EndInsertRows(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndInsertRows(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_BeginRemoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_QBaseBeginRemoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_EndRemoveRows(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndRemoveRows(KRearrangeColumnsProxyModel* self);
    friend bool KRearrangeColumnsProxyModel_BeginMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KRearrangeColumnsProxyModel_QBaseBeginMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KRearrangeColumnsProxyModel_EndMoveRows(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndMoveRows(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_BeginInsertColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_QBaseBeginInsertColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_EndInsertColumns(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndInsertColumns(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_BeginRemoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_QBaseBeginRemoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KRearrangeColumnsProxyModel_EndRemoveColumns(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndRemoveColumns(KRearrangeColumnsProxyModel* self);
    friend bool KRearrangeColumnsProxyModel_BeginMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KRearrangeColumnsProxyModel_QBaseBeginMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KRearrangeColumnsProxyModel_EndMoveColumns(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndMoveColumns(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_BeginResetModel(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseBeginResetModel(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_EndResetModel(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_QBaseEndResetModel(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_ChangePersistentIndex(KRearrangeColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KRearrangeColumnsProxyModel_QBaseChangePersistentIndex(KRearrangeColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KRearrangeColumnsProxyModel_ChangePersistentIndexList(KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KRearrangeColumnsProxyModel_QBaseChangePersistentIndexList(KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_PersistentIndexList(const KRearrangeColumnsProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_QBasePersistentIndexList(const KRearrangeColumnsProxyModel* self);
    friend QObject* KRearrangeColumnsProxyModel_Sender(const KRearrangeColumnsProxyModel* self);
    friend QObject* KRearrangeColumnsProxyModel_QBaseSender(const KRearrangeColumnsProxyModel* self);
    friend int KRearrangeColumnsProxyModel_SenderSignalIndex(const KRearrangeColumnsProxyModel* self);
    friend int KRearrangeColumnsProxyModel_QBaseSenderSignalIndex(const KRearrangeColumnsProxyModel* self);
    friend int KRearrangeColumnsProxyModel_Receivers(const KRearrangeColumnsProxyModel* self, const char* signal);
    friend int KRearrangeColumnsProxyModel_QBaseReceivers(const KRearrangeColumnsProxyModel* self, const char* signal);
    friend bool KRearrangeColumnsProxyModel_IsSignalConnected(const KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
    friend bool KRearrangeColumnsProxyModel_QBaseIsSignalConnected(const KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
};

#endif
