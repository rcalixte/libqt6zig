#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKCHECKABLEPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKCHECKABLEPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCheckableProxyModel so that we can call protected methods
class VirtualKCheckableProxyModel final : public KCheckableProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKCheckableProxyModel = true;

    // Virtual class public types (including callbacks)
    using KCheckableProxyModel_Metacall_Callback = int (*)(KCheckableProxyModel*, int, int, void**);
    using KCheckableProxyModel_Flags_Callback = int (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Data_Callback = QVariant* (*)(const KCheckableProxyModel*, QModelIndex*, int);
    using KCheckableProxyModel_SetData_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, QVariant*, int);
    using KCheckableProxyModel_SetSourceModel_Callback = void (*)(KCheckableProxyModel*, QAbstractItemModel*);
    using KCheckableProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KCheckableProxyModel_Select_Callback = bool (*)(KCheckableProxyModel*, QItemSelection*, int);
    using KCheckableProxyModel_ColumnCount_Callback = int (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Index_Callback = QModelIndex* (*)(const KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_MapToSource_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Parent_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_RowCount_Callback = int (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_HeaderData_Callback = QVariant* (*)(const KCheckableProxyModel*, int, int, int);
    using KCheckableProxyModel_DropMimeData_Callback = bool (*)(KCheckableProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCheckableProxyModel_Sibling_Callback = QModelIndex* (*)(const KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KCheckableProxyModel*, QItemSelection*);
    using KCheckableProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KCheckableProxyModel*, QItemSelection*);
    using KCheckableProxyModel_Match_Callback = QModelIndex** (*)(const KCheckableProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KCheckableProxyModel_InsertColumns_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_InsertRows_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_RemoveColumns_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_RemoveRows_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_MoveRows_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCheckableProxyModel_MoveColumns_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCheckableProxyModel_Submit_Callback = bool (*)();
    using KCheckableProxyModel_Revert_Callback = void (*)();
    using KCheckableProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_SetItemData_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KCheckableProxyModel_SetHeaderData_Callback = bool (*)(KCheckableProxyModel*, int, int, QVariant*, int);
    using KCheckableProxyModel_ClearItemData_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Buddy_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_CanFetchMore_Callback = bool (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_FetchMore_Callback = void (*)(KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Sort_Callback = void (*)(KCheckableProxyModel*, int, int);
    using KCheckableProxyModel_Span_Callback = QSize* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_HasChildren_Callback = bool (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_MimeData_Callback = QMimeData* (*)(const KCheckableProxyModel*, libqt_list /* of QModelIndex* */);
    using KCheckableProxyModel_CanDropMimeData_Callback = bool (*)(const KCheckableProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCheckableProxyModel_MimeTypes_Callback = const char** (*)();
    using KCheckableProxyModel_SupportedDragActions_Callback = int (*)();
    using KCheckableProxyModel_SupportedDropActions_Callback = int (*)();
    using KCheckableProxyModel_MultiData_Callback = void (*)(const KCheckableProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KCheckableProxyModel_ResetInternalData_Callback = void (*)();
    using KCheckableProxyModel_Event_Callback = bool (*)(KCheckableProxyModel*, QEvent*);
    using KCheckableProxyModel_EventFilter_Callback = bool (*)(KCheckableProxyModel*, QObject*, QEvent*);
    using KCheckableProxyModel_TimerEvent_Callback = void (*)(KCheckableProxyModel*, QTimerEvent*);
    using KCheckableProxyModel_ChildEvent_Callback = void (*)(KCheckableProxyModel*, QChildEvent*);
    using KCheckableProxyModel_CustomEvent_Callback = void (*)(KCheckableProxyModel*, QEvent*);
    using KCheckableProxyModel_ConnectNotify_Callback = void (*)(KCheckableProxyModel*, QMetaMethod*);
    using KCheckableProxyModel_DisconnectNotify_Callback = void (*)(KCheckableProxyModel*, QMetaMethod*);
    using KCheckableProxyModel_SetHandleSourceLayoutChanges_Callback = void (*)(KCheckableProxyModel*, bool);
    using KCheckableProxyModel_SetHandleSourceDataChanges_Callback = void (*)(KCheckableProxyModel*, bool);
    using KCheckableProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KCheckableProxyModel*, int, int, void*);
    using KCheckableProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KCheckableProxyModel*, int, int);
    using KCheckableProxyModel_EncodeData_Callback = void (*)(const KCheckableProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KCheckableProxyModel_DecodeData_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KCheckableProxyModel_BeginInsertRows_Callback = void (*)(KCheckableProxyModel*, QModelIndex*, int, int);
    using KCheckableProxyModel_EndInsertRows_Callback = void (*)();
    using KCheckableProxyModel_BeginRemoveRows_Callback = void (*)(KCheckableProxyModel*, QModelIndex*, int, int);
    using KCheckableProxyModel_EndRemoveRows_Callback = void (*)();
    using KCheckableProxyModel_BeginMoveRows_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCheckableProxyModel_EndMoveRows_Callback = void (*)();
    using KCheckableProxyModel_BeginInsertColumns_Callback = void (*)(KCheckableProxyModel*, QModelIndex*, int, int);
    using KCheckableProxyModel_EndInsertColumns_Callback = void (*)();
    using KCheckableProxyModel_BeginRemoveColumns_Callback = void (*)(KCheckableProxyModel*, QModelIndex*, int, int);
    using KCheckableProxyModel_EndRemoveColumns_Callback = void (*)();
    using KCheckableProxyModel_BeginMoveColumns_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCheckableProxyModel_EndMoveColumns_Callback = void (*)();
    using KCheckableProxyModel_BeginResetModel_Callback = void (*)();
    using KCheckableProxyModel_EndResetModel_Callback = void (*)();
    using KCheckableProxyModel_ChangePersistentIndex_Callback = void (*)(KCheckableProxyModel*, QModelIndex*, QModelIndex*);
    using KCheckableProxyModel_ChangePersistentIndexList_Callback = void (*)(KCheckableProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KCheckableProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KCheckableProxyModel_Sender_Callback = QObject* (*)();
    using KCheckableProxyModel_SenderSignalIndex_Callback = int (*)();
    using KCheckableProxyModel_Receivers_Callback = int (*)(const KCheckableProxyModel*, const char*);
    using KCheckableProxyModel_IsSignalConnected_Callback = bool (*)(const KCheckableProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCheckableProxyModel_Metacall_Callback kcheckableproxymodel_metacall_callback = nullptr;
    KCheckableProxyModel_Flags_Callback kcheckableproxymodel_flags_callback = nullptr;
    KCheckableProxyModel_Data_Callback kcheckableproxymodel_data_callback = nullptr;
    KCheckableProxyModel_SetData_Callback kcheckableproxymodel_setdata_callback = nullptr;
    KCheckableProxyModel_SetSourceModel_Callback kcheckableproxymodel_setsourcemodel_callback = nullptr;
    KCheckableProxyModel_RoleNames_Callback kcheckableproxymodel_rolenames_callback = nullptr;
    KCheckableProxyModel_Select_Callback kcheckableproxymodel_select_callback = nullptr;
    KCheckableProxyModel_ColumnCount_Callback kcheckableproxymodel_columncount_callback = nullptr;
    KCheckableProxyModel_Index_Callback kcheckableproxymodel_index_callback = nullptr;
    KCheckableProxyModel_MapFromSource_Callback kcheckableproxymodel_mapfromsource_callback = nullptr;
    KCheckableProxyModel_MapToSource_Callback kcheckableproxymodel_maptosource_callback = nullptr;
    KCheckableProxyModel_Parent_Callback kcheckableproxymodel_parent_callback = nullptr;
    KCheckableProxyModel_RowCount_Callback kcheckableproxymodel_rowcount_callback = nullptr;
    KCheckableProxyModel_HeaderData_Callback kcheckableproxymodel_headerdata_callback = nullptr;
    KCheckableProxyModel_DropMimeData_Callback kcheckableproxymodel_dropmimedata_callback = nullptr;
    KCheckableProxyModel_Sibling_Callback kcheckableproxymodel_sibling_callback = nullptr;
    KCheckableProxyModel_MapSelectionFromSource_Callback kcheckableproxymodel_mapselectionfromsource_callback = nullptr;
    KCheckableProxyModel_MapSelectionToSource_Callback kcheckableproxymodel_mapselectiontosource_callback = nullptr;
    KCheckableProxyModel_Match_Callback kcheckableproxymodel_match_callback = nullptr;
    KCheckableProxyModel_InsertColumns_Callback kcheckableproxymodel_insertcolumns_callback = nullptr;
    KCheckableProxyModel_InsertRows_Callback kcheckableproxymodel_insertrows_callback = nullptr;
    KCheckableProxyModel_RemoveColumns_Callback kcheckableproxymodel_removecolumns_callback = nullptr;
    KCheckableProxyModel_RemoveRows_Callback kcheckableproxymodel_removerows_callback = nullptr;
    KCheckableProxyModel_MoveRows_Callback kcheckableproxymodel_moverows_callback = nullptr;
    KCheckableProxyModel_MoveColumns_Callback kcheckableproxymodel_movecolumns_callback = nullptr;
    KCheckableProxyModel_Submit_Callback kcheckableproxymodel_submit_callback = nullptr;
    KCheckableProxyModel_Revert_Callback kcheckableproxymodel_revert_callback = nullptr;
    KCheckableProxyModel_ItemData_Callback kcheckableproxymodel_itemdata_callback = nullptr;
    KCheckableProxyModel_SetItemData_Callback kcheckableproxymodel_setitemdata_callback = nullptr;
    KCheckableProxyModel_SetHeaderData_Callback kcheckableproxymodel_setheaderdata_callback = nullptr;
    KCheckableProxyModel_ClearItemData_Callback kcheckableproxymodel_clearitemdata_callback = nullptr;
    KCheckableProxyModel_Buddy_Callback kcheckableproxymodel_buddy_callback = nullptr;
    KCheckableProxyModel_CanFetchMore_Callback kcheckableproxymodel_canfetchmore_callback = nullptr;
    KCheckableProxyModel_FetchMore_Callback kcheckableproxymodel_fetchmore_callback = nullptr;
    KCheckableProxyModel_Sort_Callback kcheckableproxymodel_sort_callback = nullptr;
    KCheckableProxyModel_Span_Callback kcheckableproxymodel_span_callback = nullptr;
    KCheckableProxyModel_HasChildren_Callback kcheckableproxymodel_haschildren_callback = nullptr;
    KCheckableProxyModel_MimeData_Callback kcheckableproxymodel_mimedata_callback = nullptr;
    KCheckableProxyModel_CanDropMimeData_Callback kcheckableproxymodel_candropmimedata_callback = nullptr;
    KCheckableProxyModel_MimeTypes_Callback kcheckableproxymodel_mimetypes_callback = nullptr;
    KCheckableProxyModel_SupportedDragActions_Callback kcheckableproxymodel_supporteddragactions_callback = nullptr;
    KCheckableProxyModel_SupportedDropActions_Callback kcheckableproxymodel_supporteddropactions_callback = nullptr;
    KCheckableProxyModel_MultiData_Callback kcheckableproxymodel_multidata_callback = nullptr;
    KCheckableProxyModel_ResetInternalData_Callback kcheckableproxymodel_resetinternaldata_callback = nullptr;
    KCheckableProxyModel_Event_Callback kcheckableproxymodel_event_callback = nullptr;
    KCheckableProxyModel_EventFilter_Callback kcheckableproxymodel_eventfilter_callback = nullptr;
    KCheckableProxyModel_TimerEvent_Callback kcheckableproxymodel_timerevent_callback = nullptr;
    KCheckableProxyModel_ChildEvent_Callback kcheckableproxymodel_childevent_callback = nullptr;
    KCheckableProxyModel_CustomEvent_Callback kcheckableproxymodel_customevent_callback = nullptr;
    KCheckableProxyModel_ConnectNotify_Callback kcheckableproxymodel_connectnotify_callback = nullptr;
    KCheckableProxyModel_DisconnectNotify_Callback kcheckableproxymodel_disconnectnotify_callback = nullptr;
    KCheckableProxyModel_SetHandleSourceLayoutChanges_Callback kcheckableproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
    KCheckableProxyModel_SetHandleSourceDataChanges_Callback kcheckableproxymodel_sethandlesourcedatachanges_callback = nullptr;
    KCheckableProxyModel_CreateSourceIndex_Callback kcheckableproxymodel_createsourceindex_callback = nullptr;
    KCheckableProxyModel_CreateIndex_Callback kcheckableproxymodel_createindex_callback = nullptr;
    KCheckableProxyModel_EncodeData_Callback kcheckableproxymodel_encodedata_callback = nullptr;
    KCheckableProxyModel_DecodeData_Callback kcheckableproxymodel_decodedata_callback = nullptr;
    KCheckableProxyModel_BeginInsertRows_Callback kcheckableproxymodel_begininsertrows_callback = nullptr;
    KCheckableProxyModel_EndInsertRows_Callback kcheckableproxymodel_endinsertrows_callback = nullptr;
    KCheckableProxyModel_BeginRemoveRows_Callback kcheckableproxymodel_beginremoverows_callback = nullptr;
    KCheckableProxyModel_EndRemoveRows_Callback kcheckableproxymodel_endremoverows_callback = nullptr;
    KCheckableProxyModel_BeginMoveRows_Callback kcheckableproxymodel_beginmoverows_callback = nullptr;
    KCheckableProxyModel_EndMoveRows_Callback kcheckableproxymodel_endmoverows_callback = nullptr;
    KCheckableProxyModel_BeginInsertColumns_Callback kcheckableproxymodel_begininsertcolumns_callback = nullptr;
    KCheckableProxyModel_EndInsertColumns_Callback kcheckableproxymodel_endinsertcolumns_callback = nullptr;
    KCheckableProxyModel_BeginRemoveColumns_Callback kcheckableproxymodel_beginremovecolumns_callback = nullptr;
    KCheckableProxyModel_EndRemoveColumns_Callback kcheckableproxymodel_endremovecolumns_callback = nullptr;
    KCheckableProxyModel_BeginMoveColumns_Callback kcheckableproxymodel_beginmovecolumns_callback = nullptr;
    KCheckableProxyModel_EndMoveColumns_Callback kcheckableproxymodel_endmovecolumns_callback = nullptr;
    KCheckableProxyModel_BeginResetModel_Callback kcheckableproxymodel_beginresetmodel_callback = nullptr;
    KCheckableProxyModel_EndResetModel_Callback kcheckableproxymodel_endresetmodel_callback = nullptr;
    KCheckableProxyModel_ChangePersistentIndex_Callback kcheckableproxymodel_changepersistentindex_callback = nullptr;
    KCheckableProxyModel_ChangePersistentIndexList_Callback kcheckableproxymodel_changepersistentindexlist_callback = nullptr;
    KCheckableProxyModel_PersistentIndexList_Callback kcheckableproxymodel_persistentindexlist_callback = nullptr;
    KCheckableProxyModel_Sender_Callback kcheckableproxymodel_sender_callback = nullptr;
    KCheckableProxyModel_SenderSignalIndex_Callback kcheckableproxymodel_sendersignalindex_callback = nullptr;
    KCheckableProxyModel_Receivers_Callback kcheckableproxymodel_receivers_callback = nullptr;
    KCheckableProxyModel_IsSignalConnected_Callback kcheckableproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcheckableproxymodel_metacall_isbase = false;
    mutable bool kcheckableproxymodel_flags_isbase = false;
    mutable bool kcheckableproxymodel_data_isbase = false;
    mutable bool kcheckableproxymodel_setdata_isbase = false;
    mutable bool kcheckableproxymodel_setsourcemodel_isbase = false;
    mutable bool kcheckableproxymodel_rolenames_isbase = false;
    mutable bool kcheckableproxymodel_select_isbase = false;
    mutable bool kcheckableproxymodel_columncount_isbase = false;
    mutable bool kcheckableproxymodel_index_isbase = false;
    mutable bool kcheckableproxymodel_mapfromsource_isbase = false;
    mutable bool kcheckableproxymodel_maptosource_isbase = false;
    mutable bool kcheckableproxymodel_parent_isbase = false;
    mutable bool kcheckableproxymodel_rowcount_isbase = false;
    mutable bool kcheckableproxymodel_headerdata_isbase = false;
    mutable bool kcheckableproxymodel_dropmimedata_isbase = false;
    mutable bool kcheckableproxymodel_sibling_isbase = false;
    mutable bool kcheckableproxymodel_mapselectionfromsource_isbase = false;
    mutable bool kcheckableproxymodel_mapselectiontosource_isbase = false;
    mutable bool kcheckableproxymodel_match_isbase = false;
    mutable bool kcheckableproxymodel_insertcolumns_isbase = false;
    mutable bool kcheckableproxymodel_insertrows_isbase = false;
    mutable bool kcheckableproxymodel_removecolumns_isbase = false;
    mutable bool kcheckableproxymodel_removerows_isbase = false;
    mutable bool kcheckableproxymodel_moverows_isbase = false;
    mutable bool kcheckableproxymodel_movecolumns_isbase = false;
    mutable bool kcheckableproxymodel_submit_isbase = false;
    mutable bool kcheckableproxymodel_revert_isbase = false;
    mutable bool kcheckableproxymodel_itemdata_isbase = false;
    mutable bool kcheckableproxymodel_setitemdata_isbase = false;
    mutable bool kcheckableproxymodel_setheaderdata_isbase = false;
    mutable bool kcheckableproxymodel_clearitemdata_isbase = false;
    mutable bool kcheckableproxymodel_buddy_isbase = false;
    mutable bool kcheckableproxymodel_canfetchmore_isbase = false;
    mutable bool kcheckableproxymodel_fetchmore_isbase = false;
    mutable bool kcheckableproxymodel_sort_isbase = false;
    mutable bool kcheckableproxymodel_span_isbase = false;
    mutable bool kcheckableproxymodel_haschildren_isbase = false;
    mutable bool kcheckableproxymodel_mimedata_isbase = false;
    mutable bool kcheckableproxymodel_candropmimedata_isbase = false;
    mutable bool kcheckableproxymodel_mimetypes_isbase = false;
    mutable bool kcheckableproxymodel_supporteddragactions_isbase = false;
    mutable bool kcheckableproxymodel_supporteddropactions_isbase = false;
    mutable bool kcheckableproxymodel_multidata_isbase = false;
    mutable bool kcheckableproxymodel_resetinternaldata_isbase = false;
    mutable bool kcheckableproxymodel_event_isbase = false;
    mutable bool kcheckableproxymodel_eventfilter_isbase = false;
    mutable bool kcheckableproxymodel_timerevent_isbase = false;
    mutable bool kcheckableproxymodel_childevent_isbase = false;
    mutable bool kcheckableproxymodel_customevent_isbase = false;
    mutable bool kcheckableproxymodel_connectnotify_isbase = false;
    mutable bool kcheckableproxymodel_disconnectnotify_isbase = false;
    mutable bool kcheckableproxymodel_sethandlesourcelayoutchanges_isbase = false;
    mutable bool kcheckableproxymodel_sethandlesourcedatachanges_isbase = false;
    mutable bool kcheckableproxymodel_createsourceindex_isbase = false;
    mutable bool kcheckableproxymodel_createindex_isbase = false;
    mutable bool kcheckableproxymodel_encodedata_isbase = false;
    mutable bool kcheckableproxymodel_decodedata_isbase = false;
    mutable bool kcheckableproxymodel_begininsertrows_isbase = false;
    mutable bool kcheckableproxymodel_endinsertrows_isbase = false;
    mutable bool kcheckableproxymodel_beginremoverows_isbase = false;
    mutable bool kcheckableproxymodel_endremoverows_isbase = false;
    mutable bool kcheckableproxymodel_beginmoverows_isbase = false;
    mutable bool kcheckableproxymodel_endmoverows_isbase = false;
    mutable bool kcheckableproxymodel_begininsertcolumns_isbase = false;
    mutable bool kcheckableproxymodel_endinsertcolumns_isbase = false;
    mutable bool kcheckableproxymodel_beginremovecolumns_isbase = false;
    mutable bool kcheckableproxymodel_endremovecolumns_isbase = false;
    mutable bool kcheckableproxymodel_beginmovecolumns_isbase = false;
    mutable bool kcheckableproxymodel_endmovecolumns_isbase = false;
    mutable bool kcheckableproxymodel_beginresetmodel_isbase = false;
    mutable bool kcheckableproxymodel_endresetmodel_isbase = false;
    mutable bool kcheckableproxymodel_changepersistentindex_isbase = false;
    mutable bool kcheckableproxymodel_changepersistentindexlist_isbase = false;
    mutable bool kcheckableproxymodel_persistentindexlist_isbase = false;
    mutable bool kcheckableproxymodel_sender_isbase = false;
    mutable bool kcheckableproxymodel_sendersignalindex_isbase = false;
    mutable bool kcheckableproxymodel_receivers_isbase = false;
    mutable bool kcheckableproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKCheckableProxyModel() : KCheckableProxyModel() {};
    VirtualKCheckableProxyModel(QObject* parent) : KCheckableProxyModel(parent) {};

    ~VirtualKCheckableProxyModel() {
        kcheckableproxymodel_metacall_callback = nullptr;
        kcheckableproxymodel_flags_callback = nullptr;
        kcheckableproxymodel_data_callback = nullptr;
        kcheckableproxymodel_setdata_callback = nullptr;
        kcheckableproxymodel_setsourcemodel_callback = nullptr;
        kcheckableproxymodel_rolenames_callback = nullptr;
        kcheckableproxymodel_select_callback = nullptr;
        kcheckableproxymodel_columncount_callback = nullptr;
        kcheckableproxymodel_index_callback = nullptr;
        kcheckableproxymodel_mapfromsource_callback = nullptr;
        kcheckableproxymodel_maptosource_callback = nullptr;
        kcheckableproxymodel_parent_callback = nullptr;
        kcheckableproxymodel_rowcount_callback = nullptr;
        kcheckableproxymodel_headerdata_callback = nullptr;
        kcheckableproxymodel_dropmimedata_callback = nullptr;
        kcheckableproxymodel_sibling_callback = nullptr;
        kcheckableproxymodel_mapselectionfromsource_callback = nullptr;
        kcheckableproxymodel_mapselectiontosource_callback = nullptr;
        kcheckableproxymodel_match_callback = nullptr;
        kcheckableproxymodel_insertcolumns_callback = nullptr;
        kcheckableproxymodel_insertrows_callback = nullptr;
        kcheckableproxymodel_removecolumns_callback = nullptr;
        kcheckableproxymodel_removerows_callback = nullptr;
        kcheckableproxymodel_moverows_callback = nullptr;
        kcheckableproxymodel_movecolumns_callback = nullptr;
        kcheckableproxymodel_submit_callback = nullptr;
        kcheckableproxymodel_revert_callback = nullptr;
        kcheckableproxymodel_itemdata_callback = nullptr;
        kcheckableproxymodel_setitemdata_callback = nullptr;
        kcheckableproxymodel_setheaderdata_callback = nullptr;
        kcheckableproxymodel_clearitemdata_callback = nullptr;
        kcheckableproxymodel_buddy_callback = nullptr;
        kcheckableproxymodel_canfetchmore_callback = nullptr;
        kcheckableproxymodel_fetchmore_callback = nullptr;
        kcheckableproxymodel_sort_callback = nullptr;
        kcheckableproxymodel_span_callback = nullptr;
        kcheckableproxymodel_haschildren_callback = nullptr;
        kcheckableproxymodel_mimedata_callback = nullptr;
        kcheckableproxymodel_candropmimedata_callback = nullptr;
        kcheckableproxymodel_mimetypes_callback = nullptr;
        kcheckableproxymodel_supporteddragactions_callback = nullptr;
        kcheckableproxymodel_supporteddropactions_callback = nullptr;
        kcheckableproxymodel_multidata_callback = nullptr;
        kcheckableproxymodel_resetinternaldata_callback = nullptr;
        kcheckableproxymodel_event_callback = nullptr;
        kcheckableproxymodel_eventfilter_callback = nullptr;
        kcheckableproxymodel_timerevent_callback = nullptr;
        kcheckableproxymodel_childevent_callback = nullptr;
        kcheckableproxymodel_customevent_callback = nullptr;
        kcheckableproxymodel_connectnotify_callback = nullptr;
        kcheckableproxymodel_disconnectnotify_callback = nullptr;
        kcheckableproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
        kcheckableproxymodel_sethandlesourcedatachanges_callback = nullptr;
        kcheckableproxymodel_createsourceindex_callback = nullptr;
        kcheckableproxymodel_createindex_callback = nullptr;
        kcheckableproxymodel_encodedata_callback = nullptr;
        kcheckableproxymodel_decodedata_callback = nullptr;
        kcheckableproxymodel_begininsertrows_callback = nullptr;
        kcheckableproxymodel_endinsertrows_callback = nullptr;
        kcheckableproxymodel_beginremoverows_callback = nullptr;
        kcheckableproxymodel_endremoverows_callback = nullptr;
        kcheckableproxymodel_beginmoverows_callback = nullptr;
        kcheckableproxymodel_endmoverows_callback = nullptr;
        kcheckableproxymodel_begininsertcolumns_callback = nullptr;
        kcheckableproxymodel_endinsertcolumns_callback = nullptr;
        kcheckableproxymodel_beginremovecolumns_callback = nullptr;
        kcheckableproxymodel_endremovecolumns_callback = nullptr;
        kcheckableproxymodel_beginmovecolumns_callback = nullptr;
        kcheckableproxymodel_endmovecolumns_callback = nullptr;
        kcheckableproxymodel_beginresetmodel_callback = nullptr;
        kcheckableproxymodel_endresetmodel_callback = nullptr;
        kcheckableproxymodel_changepersistentindex_callback = nullptr;
        kcheckableproxymodel_changepersistentindexlist_callback = nullptr;
        kcheckableproxymodel_persistentindexlist_callback = nullptr;
        kcheckableproxymodel_sender_callback = nullptr;
        kcheckableproxymodel_sendersignalindex_callback = nullptr;
        kcheckableproxymodel_receivers_callback = nullptr;
        kcheckableproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCheckableProxyModel_Metacall_Callback(KCheckableProxyModel_Metacall_Callback cb) { kcheckableproxymodel_metacall_callback = cb; }
    inline void setKCheckableProxyModel_Flags_Callback(KCheckableProxyModel_Flags_Callback cb) { kcheckableproxymodel_flags_callback = cb; }
    inline void setKCheckableProxyModel_Data_Callback(KCheckableProxyModel_Data_Callback cb) { kcheckableproxymodel_data_callback = cb; }
    inline void setKCheckableProxyModel_SetData_Callback(KCheckableProxyModel_SetData_Callback cb) { kcheckableproxymodel_setdata_callback = cb; }
    inline void setKCheckableProxyModel_SetSourceModel_Callback(KCheckableProxyModel_SetSourceModel_Callback cb) { kcheckableproxymodel_setsourcemodel_callback = cb; }
    inline void setKCheckableProxyModel_RoleNames_Callback(KCheckableProxyModel_RoleNames_Callback cb) { kcheckableproxymodel_rolenames_callback = cb; }
    inline void setKCheckableProxyModel_Select_Callback(KCheckableProxyModel_Select_Callback cb) { kcheckableproxymodel_select_callback = cb; }
    inline void setKCheckableProxyModel_ColumnCount_Callback(KCheckableProxyModel_ColumnCount_Callback cb) { kcheckableproxymodel_columncount_callback = cb; }
    inline void setKCheckableProxyModel_Index_Callback(KCheckableProxyModel_Index_Callback cb) { kcheckableproxymodel_index_callback = cb; }
    inline void setKCheckableProxyModel_MapFromSource_Callback(KCheckableProxyModel_MapFromSource_Callback cb) { kcheckableproxymodel_mapfromsource_callback = cb; }
    inline void setKCheckableProxyModel_MapToSource_Callback(KCheckableProxyModel_MapToSource_Callback cb) { kcheckableproxymodel_maptosource_callback = cb; }
    inline void setKCheckableProxyModel_Parent_Callback(KCheckableProxyModel_Parent_Callback cb) { kcheckableproxymodel_parent_callback = cb; }
    inline void setKCheckableProxyModel_RowCount_Callback(KCheckableProxyModel_RowCount_Callback cb) { kcheckableproxymodel_rowcount_callback = cb; }
    inline void setKCheckableProxyModel_HeaderData_Callback(KCheckableProxyModel_HeaderData_Callback cb) { kcheckableproxymodel_headerdata_callback = cb; }
    inline void setKCheckableProxyModel_DropMimeData_Callback(KCheckableProxyModel_DropMimeData_Callback cb) { kcheckableproxymodel_dropmimedata_callback = cb; }
    inline void setKCheckableProxyModel_Sibling_Callback(KCheckableProxyModel_Sibling_Callback cb) { kcheckableproxymodel_sibling_callback = cb; }
    inline void setKCheckableProxyModel_MapSelectionFromSource_Callback(KCheckableProxyModel_MapSelectionFromSource_Callback cb) { kcheckableproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKCheckableProxyModel_MapSelectionToSource_Callback(KCheckableProxyModel_MapSelectionToSource_Callback cb) { kcheckableproxymodel_mapselectiontosource_callback = cb; }
    inline void setKCheckableProxyModel_Match_Callback(KCheckableProxyModel_Match_Callback cb) { kcheckableproxymodel_match_callback = cb; }
    inline void setKCheckableProxyModel_InsertColumns_Callback(KCheckableProxyModel_InsertColumns_Callback cb) { kcheckableproxymodel_insertcolumns_callback = cb; }
    inline void setKCheckableProxyModel_InsertRows_Callback(KCheckableProxyModel_InsertRows_Callback cb) { kcheckableproxymodel_insertrows_callback = cb; }
    inline void setKCheckableProxyModel_RemoveColumns_Callback(KCheckableProxyModel_RemoveColumns_Callback cb) { kcheckableproxymodel_removecolumns_callback = cb; }
    inline void setKCheckableProxyModel_RemoveRows_Callback(KCheckableProxyModel_RemoveRows_Callback cb) { kcheckableproxymodel_removerows_callback = cb; }
    inline void setKCheckableProxyModel_MoveRows_Callback(KCheckableProxyModel_MoveRows_Callback cb) { kcheckableproxymodel_moverows_callback = cb; }
    inline void setKCheckableProxyModel_MoveColumns_Callback(KCheckableProxyModel_MoveColumns_Callback cb) { kcheckableproxymodel_movecolumns_callback = cb; }
    inline void setKCheckableProxyModel_Submit_Callback(KCheckableProxyModel_Submit_Callback cb) { kcheckableproxymodel_submit_callback = cb; }
    inline void setKCheckableProxyModel_Revert_Callback(KCheckableProxyModel_Revert_Callback cb) { kcheckableproxymodel_revert_callback = cb; }
    inline void setKCheckableProxyModel_ItemData_Callback(KCheckableProxyModel_ItemData_Callback cb) { kcheckableproxymodel_itemdata_callback = cb; }
    inline void setKCheckableProxyModel_SetItemData_Callback(KCheckableProxyModel_SetItemData_Callback cb) { kcheckableproxymodel_setitemdata_callback = cb; }
    inline void setKCheckableProxyModel_SetHeaderData_Callback(KCheckableProxyModel_SetHeaderData_Callback cb) { kcheckableproxymodel_setheaderdata_callback = cb; }
    inline void setKCheckableProxyModel_ClearItemData_Callback(KCheckableProxyModel_ClearItemData_Callback cb) { kcheckableproxymodel_clearitemdata_callback = cb; }
    inline void setKCheckableProxyModel_Buddy_Callback(KCheckableProxyModel_Buddy_Callback cb) { kcheckableproxymodel_buddy_callback = cb; }
    inline void setKCheckableProxyModel_CanFetchMore_Callback(KCheckableProxyModel_CanFetchMore_Callback cb) { kcheckableproxymodel_canfetchmore_callback = cb; }
    inline void setKCheckableProxyModel_FetchMore_Callback(KCheckableProxyModel_FetchMore_Callback cb) { kcheckableproxymodel_fetchmore_callback = cb; }
    inline void setKCheckableProxyModel_Sort_Callback(KCheckableProxyModel_Sort_Callback cb) { kcheckableproxymodel_sort_callback = cb; }
    inline void setKCheckableProxyModel_Span_Callback(KCheckableProxyModel_Span_Callback cb) { kcheckableproxymodel_span_callback = cb; }
    inline void setKCheckableProxyModel_HasChildren_Callback(KCheckableProxyModel_HasChildren_Callback cb) { kcheckableproxymodel_haschildren_callback = cb; }
    inline void setKCheckableProxyModel_MimeData_Callback(KCheckableProxyModel_MimeData_Callback cb) { kcheckableproxymodel_mimedata_callback = cb; }
    inline void setKCheckableProxyModel_CanDropMimeData_Callback(KCheckableProxyModel_CanDropMimeData_Callback cb) { kcheckableproxymodel_candropmimedata_callback = cb; }
    inline void setKCheckableProxyModel_MimeTypes_Callback(KCheckableProxyModel_MimeTypes_Callback cb) { kcheckableproxymodel_mimetypes_callback = cb; }
    inline void setKCheckableProxyModel_SupportedDragActions_Callback(KCheckableProxyModel_SupportedDragActions_Callback cb) { kcheckableproxymodel_supporteddragactions_callback = cb; }
    inline void setKCheckableProxyModel_SupportedDropActions_Callback(KCheckableProxyModel_SupportedDropActions_Callback cb) { kcheckableproxymodel_supporteddropactions_callback = cb; }
    inline void setKCheckableProxyModel_MultiData_Callback(KCheckableProxyModel_MultiData_Callback cb) { kcheckableproxymodel_multidata_callback = cb; }
    inline void setKCheckableProxyModel_ResetInternalData_Callback(KCheckableProxyModel_ResetInternalData_Callback cb) { kcheckableproxymodel_resetinternaldata_callback = cb; }
    inline void setKCheckableProxyModel_Event_Callback(KCheckableProxyModel_Event_Callback cb) { kcheckableproxymodel_event_callback = cb; }
    inline void setKCheckableProxyModel_EventFilter_Callback(KCheckableProxyModel_EventFilter_Callback cb) { kcheckableproxymodel_eventfilter_callback = cb; }
    inline void setKCheckableProxyModel_TimerEvent_Callback(KCheckableProxyModel_TimerEvent_Callback cb) { kcheckableproxymodel_timerevent_callback = cb; }
    inline void setKCheckableProxyModel_ChildEvent_Callback(KCheckableProxyModel_ChildEvent_Callback cb) { kcheckableproxymodel_childevent_callback = cb; }
    inline void setKCheckableProxyModel_CustomEvent_Callback(KCheckableProxyModel_CustomEvent_Callback cb) { kcheckableproxymodel_customevent_callback = cb; }
    inline void setKCheckableProxyModel_ConnectNotify_Callback(KCheckableProxyModel_ConnectNotify_Callback cb) { kcheckableproxymodel_connectnotify_callback = cb; }
    inline void setKCheckableProxyModel_DisconnectNotify_Callback(KCheckableProxyModel_DisconnectNotify_Callback cb) { kcheckableproxymodel_disconnectnotify_callback = cb; }
    inline void setKCheckableProxyModel_SetHandleSourceLayoutChanges_Callback(KCheckableProxyModel_SetHandleSourceLayoutChanges_Callback cb) { kcheckableproxymodel_sethandlesourcelayoutchanges_callback = cb; }
    inline void setKCheckableProxyModel_SetHandleSourceDataChanges_Callback(KCheckableProxyModel_SetHandleSourceDataChanges_Callback cb) { kcheckableproxymodel_sethandlesourcedatachanges_callback = cb; }
    inline void setKCheckableProxyModel_CreateSourceIndex_Callback(KCheckableProxyModel_CreateSourceIndex_Callback cb) { kcheckableproxymodel_createsourceindex_callback = cb; }
    inline void setKCheckableProxyModel_CreateIndex_Callback(KCheckableProxyModel_CreateIndex_Callback cb) { kcheckableproxymodel_createindex_callback = cb; }
    inline void setKCheckableProxyModel_EncodeData_Callback(KCheckableProxyModel_EncodeData_Callback cb) { kcheckableproxymodel_encodedata_callback = cb; }
    inline void setKCheckableProxyModel_DecodeData_Callback(KCheckableProxyModel_DecodeData_Callback cb) { kcheckableproxymodel_decodedata_callback = cb; }
    inline void setKCheckableProxyModel_BeginInsertRows_Callback(KCheckableProxyModel_BeginInsertRows_Callback cb) { kcheckableproxymodel_begininsertrows_callback = cb; }
    inline void setKCheckableProxyModel_EndInsertRows_Callback(KCheckableProxyModel_EndInsertRows_Callback cb) { kcheckableproxymodel_endinsertrows_callback = cb; }
    inline void setKCheckableProxyModel_BeginRemoveRows_Callback(KCheckableProxyModel_BeginRemoveRows_Callback cb) { kcheckableproxymodel_beginremoverows_callback = cb; }
    inline void setKCheckableProxyModel_EndRemoveRows_Callback(KCheckableProxyModel_EndRemoveRows_Callback cb) { kcheckableproxymodel_endremoverows_callback = cb; }
    inline void setKCheckableProxyModel_BeginMoveRows_Callback(KCheckableProxyModel_BeginMoveRows_Callback cb) { kcheckableproxymodel_beginmoverows_callback = cb; }
    inline void setKCheckableProxyModel_EndMoveRows_Callback(KCheckableProxyModel_EndMoveRows_Callback cb) { kcheckableproxymodel_endmoverows_callback = cb; }
    inline void setKCheckableProxyModel_BeginInsertColumns_Callback(KCheckableProxyModel_BeginInsertColumns_Callback cb) { kcheckableproxymodel_begininsertcolumns_callback = cb; }
    inline void setKCheckableProxyModel_EndInsertColumns_Callback(KCheckableProxyModel_EndInsertColumns_Callback cb) { kcheckableproxymodel_endinsertcolumns_callback = cb; }
    inline void setKCheckableProxyModel_BeginRemoveColumns_Callback(KCheckableProxyModel_BeginRemoveColumns_Callback cb) { kcheckableproxymodel_beginremovecolumns_callback = cb; }
    inline void setKCheckableProxyModel_EndRemoveColumns_Callback(KCheckableProxyModel_EndRemoveColumns_Callback cb) { kcheckableproxymodel_endremovecolumns_callback = cb; }
    inline void setKCheckableProxyModel_BeginMoveColumns_Callback(KCheckableProxyModel_BeginMoveColumns_Callback cb) { kcheckableproxymodel_beginmovecolumns_callback = cb; }
    inline void setKCheckableProxyModel_EndMoveColumns_Callback(KCheckableProxyModel_EndMoveColumns_Callback cb) { kcheckableproxymodel_endmovecolumns_callback = cb; }
    inline void setKCheckableProxyModel_BeginResetModel_Callback(KCheckableProxyModel_BeginResetModel_Callback cb) { kcheckableproxymodel_beginresetmodel_callback = cb; }
    inline void setKCheckableProxyModel_EndResetModel_Callback(KCheckableProxyModel_EndResetModel_Callback cb) { kcheckableproxymodel_endresetmodel_callback = cb; }
    inline void setKCheckableProxyModel_ChangePersistentIndex_Callback(KCheckableProxyModel_ChangePersistentIndex_Callback cb) { kcheckableproxymodel_changepersistentindex_callback = cb; }
    inline void setKCheckableProxyModel_ChangePersistentIndexList_Callback(KCheckableProxyModel_ChangePersistentIndexList_Callback cb) { kcheckableproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKCheckableProxyModel_PersistentIndexList_Callback(KCheckableProxyModel_PersistentIndexList_Callback cb) { kcheckableproxymodel_persistentindexlist_callback = cb; }
    inline void setKCheckableProxyModel_Sender_Callback(KCheckableProxyModel_Sender_Callback cb) { kcheckableproxymodel_sender_callback = cb; }
    inline void setKCheckableProxyModel_SenderSignalIndex_Callback(KCheckableProxyModel_SenderSignalIndex_Callback cb) { kcheckableproxymodel_sendersignalindex_callback = cb; }
    inline void setKCheckableProxyModel_Receivers_Callback(KCheckableProxyModel_Receivers_Callback cb) { kcheckableproxymodel_receivers_callback = cb; }
    inline void setKCheckableProxyModel_IsSignalConnected_Callback(KCheckableProxyModel_IsSignalConnected_Callback cb) { kcheckableproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCheckableProxyModel_Metacall_IsBase(bool value) const { kcheckableproxymodel_metacall_isbase = value; }
    inline void setKCheckableProxyModel_Flags_IsBase(bool value) const { kcheckableproxymodel_flags_isbase = value; }
    inline void setKCheckableProxyModel_Data_IsBase(bool value) const { kcheckableproxymodel_data_isbase = value; }
    inline void setKCheckableProxyModel_SetData_IsBase(bool value) const { kcheckableproxymodel_setdata_isbase = value; }
    inline void setKCheckableProxyModel_SetSourceModel_IsBase(bool value) const { kcheckableproxymodel_setsourcemodel_isbase = value; }
    inline void setKCheckableProxyModel_RoleNames_IsBase(bool value) const { kcheckableproxymodel_rolenames_isbase = value; }
    inline void setKCheckableProxyModel_Select_IsBase(bool value) const { kcheckableproxymodel_select_isbase = value; }
    inline void setKCheckableProxyModel_ColumnCount_IsBase(bool value) const { kcheckableproxymodel_columncount_isbase = value; }
    inline void setKCheckableProxyModel_Index_IsBase(bool value) const { kcheckableproxymodel_index_isbase = value; }
    inline void setKCheckableProxyModel_MapFromSource_IsBase(bool value) const { kcheckableproxymodel_mapfromsource_isbase = value; }
    inline void setKCheckableProxyModel_MapToSource_IsBase(bool value) const { kcheckableproxymodel_maptosource_isbase = value; }
    inline void setKCheckableProxyModel_Parent_IsBase(bool value) const { kcheckableproxymodel_parent_isbase = value; }
    inline void setKCheckableProxyModel_RowCount_IsBase(bool value) const { kcheckableproxymodel_rowcount_isbase = value; }
    inline void setKCheckableProxyModel_HeaderData_IsBase(bool value) const { kcheckableproxymodel_headerdata_isbase = value; }
    inline void setKCheckableProxyModel_DropMimeData_IsBase(bool value) const { kcheckableproxymodel_dropmimedata_isbase = value; }
    inline void setKCheckableProxyModel_Sibling_IsBase(bool value) const { kcheckableproxymodel_sibling_isbase = value; }
    inline void setKCheckableProxyModel_MapSelectionFromSource_IsBase(bool value) const { kcheckableproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKCheckableProxyModel_MapSelectionToSource_IsBase(bool value) const { kcheckableproxymodel_mapselectiontosource_isbase = value; }
    inline void setKCheckableProxyModel_Match_IsBase(bool value) const { kcheckableproxymodel_match_isbase = value; }
    inline void setKCheckableProxyModel_InsertColumns_IsBase(bool value) const { kcheckableproxymodel_insertcolumns_isbase = value; }
    inline void setKCheckableProxyModel_InsertRows_IsBase(bool value) const { kcheckableproxymodel_insertrows_isbase = value; }
    inline void setKCheckableProxyModel_RemoveColumns_IsBase(bool value) const { kcheckableproxymodel_removecolumns_isbase = value; }
    inline void setKCheckableProxyModel_RemoveRows_IsBase(bool value) const { kcheckableproxymodel_removerows_isbase = value; }
    inline void setKCheckableProxyModel_MoveRows_IsBase(bool value) const { kcheckableproxymodel_moverows_isbase = value; }
    inline void setKCheckableProxyModel_MoveColumns_IsBase(bool value) const { kcheckableproxymodel_movecolumns_isbase = value; }
    inline void setKCheckableProxyModel_Submit_IsBase(bool value) const { kcheckableproxymodel_submit_isbase = value; }
    inline void setKCheckableProxyModel_Revert_IsBase(bool value) const { kcheckableproxymodel_revert_isbase = value; }
    inline void setKCheckableProxyModel_ItemData_IsBase(bool value) const { kcheckableproxymodel_itemdata_isbase = value; }
    inline void setKCheckableProxyModel_SetItemData_IsBase(bool value) const { kcheckableproxymodel_setitemdata_isbase = value; }
    inline void setKCheckableProxyModel_SetHeaderData_IsBase(bool value) const { kcheckableproxymodel_setheaderdata_isbase = value; }
    inline void setKCheckableProxyModel_ClearItemData_IsBase(bool value) const { kcheckableproxymodel_clearitemdata_isbase = value; }
    inline void setKCheckableProxyModel_Buddy_IsBase(bool value) const { kcheckableproxymodel_buddy_isbase = value; }
    inline void setKCheckableProxyModel_CanFetchMore_IsBase(bool value) const { kcheckableproxymodel_canfetchmore_isbase = value; }
    inline void setKCheckableProxyModel_FetchMore_IsBase(bool value) const { kcheckableproxymodel_fetchmore_isbase = value; }
    inline void setKCheckableProxyModel_Sort_IsBase(bool value) const { kcheckableproxymodel_sort_isbase = value; }
    inline void setKCheckableProxyModel_Span_IsBase(bool value) const { kcheckableproxymodel_span_isbase = value; }
    inline void setKCheckableProxyModel_HasChildren_IsBase(bool value) const { kcheckableproxymodel_haschildren_isbase = value; }
    inline void setKCheckableProxyModel_MimeData_IsBase(bool value) const { kcheckableproxymodel_mimedata_isbase = value; }
    inline void setKCheckableProxyModel_CanDropMimeData_IsBase(bool value) const { kcheckableproxymodel_candropmimedata_isbase = value; }
    inline void setKCheckableProxyModel_MimeTypes_IsBase(bool value) const { kcheckableproxymodel_mimetypes_isbase = value; }
    inline void setKCheckableProxyModel_SupportedDragActions_IsBase(bool value) const { kcheckableproxymodel_supporteddragactions_isbase = value; }
    inline void setKCheckableProxyModel_SupportedDropActions_IsBase(bool value) const { kcheckableproxymodel_supporteddropactions_isbase = value; }
    inline void setKCheckableProxyModel_MultiData_IsBase(bool value) const { kcheckableproxymodel_multidata_isbase = value; }
    inline void setKCheckableProxyModel_ResetInternalData_IsBase(bool value) const { kcheckableproxymodel_resetinternaldata_isbase = value; }
    inline void setKCheckableProxyModel_Event_IsBase(bool value) const { kcheckableproxymodel_event_isbase = value; }
    inline void setKCheckableProxyModel_EventFilter_IsBase(bool value) const { kcheckableproxymodel_eventfilter_isbase = value; }
    inline void setKCheckableProxyModel_TimerEvent_IsBase(bool value) const { kcheckableproxymodel_timerevent_isbase = value; }
    inline void setKCheckableProxyModel_ChildEvent_IsBase(bool value) const { kcheckableproxymodel_childevent_isbase = value; }
    inline void setKCheckableProxyModel_CustomEvent_IsBase(bool value) const { kcheckableproxymodel_customevent_isbase = value; }
    inline void setKCheckableProxyModel_ConnectNotify_IsBase(bool value) const { kcheckableproxymodel_connectnotify_isbase = value; }
    inline void setKCheckableProxyModel_DisconnectNotify_IsBase(bool value) const { kcheckableproxymodel_disconnectnotify_isbase = value; }
    inline void setKCheckableProxyModel_SetHandleSourceLayoutChanges_IsBase(bool value) const { kcheckableproxymodel_sethandlesourcelayoutchanges_isbase = value; }
    inline void setKCheckableProxyModel_SetHandleSourceDataChanges_IsBase(bool value) const { kcheckableproxymodel_sethandlesourcedatachanges_isbase = value; }
    inline void setKCheckableProxyModel_CreateSourceIndex_IsBase(bool value) const { kcheckableproxymodel_createsourceindex_isbase = value; }
    inline void setKCheckableProxyModel_CreateIndex_IsBase(bool value) const { kcheckableproxymodel_createindex_isbase = value; }
    inline void setKCheckableProxyModel_EncodeData_IsBase(bool value) const { kcheckableproxymodel_encodedata_isbase = value; }
    inline void setKCheckableProxyModel_DecodeData_IsBase(bool value) const { kcheckableproxymodel_decodedata_isbase = value; }
    inline void setKCheckableProxyModel_BeginInsertRows_IsBase(bool value) const { kcheckableproxymodel_begininsertrows_isbase = value; }
    inline void setKCheckableProxyModel_EndInsertRows_IsBase(bool value) const { kcheckableproxymodel_endinsertrows_isbase = value; }
    inline void setKCheckableProxyModel_BeginRemoveRows_IsBase(bool value) const { kcheckableproxymodel_beginremoverows_isbase = value; }
    inline void setKCheckableProxyModel_EndRemoveRows_IsBase(bool value) const { kcheckableproxymodel_endremoverows_isbase = value; }
    inline void setKCheckableProxyModel_BeginMoveRows_IsBase(bool value) const { kcheckableproxymodel_beginmoverows_isbase = value; }
    inline void setKCheckableProxyModel_EndMoveRows_IsBase(bool value) const { kcheckableproxymodel_endmoverows_isbase = value; }
    inline void setKCheckableProxyModel_BeginInsertColumns_IsBase(bool value) const { kcheckableproxymodel_begininsertcolumns_isbase = value; }
    inline void setKCheckableProxyModel_EndInsertColumns_IsBase(bool value) const { kcheckableproxymodel_endinsertcolumns_isbase = value; }
    inline void setKCheckableProxyModel_BeginRemoveColumns_IsBase(bool value) const { kcheckableproxymodel_beginremovecolumns_isbase = value; }
    inline void setKCheckableProxyModel_EndRemoveColumns_IsBase(bool value) const { kcheckableproxymodel_endremovecolumns_isbase = value; }
    inline void setKCheckableProxyModel_BeginMoveColumns_IsBase(bool value) const { kcheckableproxymodel_beginmovecolumns_isbase = value; }
    inline void setKCheckableProxyModel_EndMoveColumns_IsBase(bool value) const { kcheckableproxymodel_endmovecolumns_isbase = value; }
    inline void setKCheckableProxyModel_BeginResetModel_IsBase(bool value) const { kcheckableproxymodel_beginresetmodel_isbase = value; }
    inline void setKCheckableProxyModel_EndResetModel_IsBase(bool value) const { kcheckableproxymodel_endresetmodel_isbase = value; }
    inline void setKCheckableProxyModel_ChangePersistentIndex_IsBase(bool value) const { kcheckableproxymodel_changepersistentindex_isbase = value; }
    inline void setKCheckableProxyModel_ChangePersistentIndexList_IsBase(bool value) const { kcheckableproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKCheckableProxyModel_PersistentIndexList_IsBase(bool value) const { kcheckableproxymodel_persistentindexlist_isbase = value; }
    inline void setKCheckableProxyModel_Sender_IsBase(bool value) const { kcheckableproxymodel_sender_isbase = value; }
    inline void setKCheckableProxyModel_SenderSignalIndex_IsBase(bool value) const { kcheckableproxymodel_sendersignalindex_isbase = value; }
    inline void setKCheckableProxyModel_Receivers_IsBase(bool value) const { kcheckableproxymodel_receivers_isbase = value; }
    inline void setKCheckableProxyModel_IsSignalConnected_IsBase(bool value) const { kcheckableproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcheckableproxymodel_metacall_isbase) {
            kcheckableproxymodel_metacall_isbase = false;
            return KCheckableProxyModel::qt_metacall(param1, param2, param3);
        } else if (kcheckableproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcheckableproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCheckableProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcheckableproxymodel_flags_isbase) {
            kcheckableproxymodel_flags_isbase = false;
            return KCheckableProxyModel::flags(index);
        } else if (kcheckableproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kcheckableproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KCheckableProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcheckableproxymodel_data_isbase) {
            kcheckableproxymodel_data_isbase = false;
            return KCheckableProxyModel::data(index, role);
        } else if (kcheckableproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kcheckableproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcheckableproxymodel_setdata_isbase) {
            kcheckableproxymodel_setdata_isbase = false;
            return KCheckableProxyModel::setData(index, value, role);
        } else if (kcheckableproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kcheckableproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCheckableProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kcheckableproxymodel_setsourcemodel_isbase) {
            kcheckableproxymodel_setsourcemodel_isbase = false;
            KCheckableProxyModel::setSourceModel(sourceModel);
        } else if (kcheckableproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            kcheckableproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            KCheckableProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcheckableproxymodel_rolenames_isbase) {
            kcheckableproxymodel_rolenames_isbase = false;
            return KCheckableProxyModel::roleNames();
        } else if (kcheckableproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kcheckableproxymodel_rolenames_callback();
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
            return KCheckableProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (kcheckableproxymodel_select_isbase) {
            kcheckableproxymodel_select_isbase = false;
            return KCheckableProxyModel::select(selection, command);
        } else if (kcheckableproxymodel_select_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);

            bool callback_ret = kcheckableproxymodel_select_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCheckableProxyModel::select(selection, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_columncount_isbase) {
            kcheckableproxymodel_columncount_isbase = false;
            return KCheckableProxyModel::columnCount(parent);
        } else if (kcheckableproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kcheckableproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCheckableProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcheckableproxymodel_index_isbase) {
            kcheckableproxymodel_index_isbase = false;
            return KCheckableProxyModel::index(row, column, parent);
        } else if (kcheckableproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kcheckableproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kcheckableproxymodel_mapfromsource_isbase) {
            kcheckableproxymodel_mapfromsource_isbase = false;
            return KCheckableProxyModel::mapFromSource(sourceIndex);
        } else if (kcheckableproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = kcheckableproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kcheckableproxymodel_maptosource_isbase) {
            kcheckableproxymodel_maptosource_isbase = false;
            return KCheckableProxyModel::mapToSource(proxyIndex);
        } else if (kcheckableproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = kcheckableproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kcheckableproxymodel_parent_isbase) {
            kcheckableproxymodel_parent_isbase = false;
            return KCheckableProxyModel::parent(child);
        } else if (kcheckableproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = kcheckableproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_rowcount_isbase) {
            kcheckableproxymodel_rowcount_isbase = false;
            return KCheckableProxyModel::rowCount(parent);
        } else if (kcheckableproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kcheckableproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCheckableProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcheckableproxymodel_headerdata_isbase) {
            kcheckableproxymodel_headerdata_isbase = false;
            return KCheckableProxyModel::headerData(section, orientation, role);
        } else if (kcheckableproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kcheckableproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcheckableproxymodel_dropmimedata_isbase) {
            kcheckableproxymodel_dropmimedata_isbase = false;
            return KCheckableProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (kcheckableproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KCheckableProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcheckableproxymodel_sibling_isbase) {
            kcheckableproxymodel_sibling_isbase = false;
            return KCheckableProxyModel::sibling(row, column, idx);
        } else if (kcheckableproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kcheckableproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kcheckableproxymodel_mapselectionfromsource_isbase) {
            kcheckableproxymodel_mapselectionfromsource_isbase = false;
            return KCheckableProxyModel::mapSelectionFromSource(selection);
        } else if (kcheckableproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kcheckableproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kcheckableproxymodel_mapselectiontosource_isbase) {
            kcheckableproxymodel_mapselectiontosource_isbase = false;
            return KCheckableProxyModel::mapSelectionToSource(selection);
        } else if (kcheckableproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kcheckableproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcheckableproxymodel_match_isbase) {
            kcheckableproxymodel_match_isbase = false;
            return KCheckableProxyModel::match(start, role, value, hits, flags);
        } else if (kcheckableproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kcheckableproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KCheckableProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_insertcolumns_isbase) {
            kcheckableproxymodel_insertcolumns_isbase = false;
            return KCheckableProxyModel::insertColumns(column, count, parent);
        } else if (kcheckableproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCheckableProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_insertrows_isbase) {
            kcheckableproxymodel_insertrows_isbase = false;
            return KCheckableProxyModel::insertRows(row, count, parent);
        } else if (kcheckableproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCheckableProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_removecolumns_isbase) {
            kcheckableproxymodel_removecolumns_isbase = false;
            return KCheckableProxyModel::removeColumns(column, count, parent);
        } else if (kcheckableproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCheckableProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_removerows_isbase) {
            kcheckableproxymodel_removerows_isbase = false;
            return KCheckableProxyModel::removeRows(row, count, parent);
        } else if (kcheckableproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCheckableProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcheckableproxymodel_moverows_isbase) {
            kcheckableproxymodel_moverows_isbase = false;
            return KCheckableProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kcheckableproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kcheckableproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KCheckableProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcheckableproxymodel_movecolumns_isbase) {
            kcheckableproxymodel_movecolumns_isbase = false;
            return KCheckableProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kcheckableproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kcheckableproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KCheckableProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcheckableproxymodel_submit_isbase) {
            kcheckableproxymodel_submit_isbase = false;
            return KCheckableProxyModel::submit();
        } else if (kcheckableproxymodel_submit_callback != nullptr) {
            bool callback_ret = kcheckableproxymodel_submit_callback();
            return callback_ret;
        } else {
            return KCheckableProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcheckableproxymodel_revert_isbase) {
            kcheckableproxymodel_revert_isbase = false;
            KCheckableProxyModel::revert();
        } else if (kcheckableproxymodel_revert_callback != nullptr) {
            kcheckableproxymodel_revert_callback();
        } else {
            KCheckableProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcheckableproxymodel_itemdata_isbase) {
            kcheckableproxymodel_itemdata_isbase = false;
            return KCheckableProxyModel::itemData(index);
        } else if (kcheckableproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kcheckableproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KCheckableProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcheckableproxymodel_setitemdata_isbase) {
            kcheckableproxymodel_setitemdata_isbase = false;
            return KCheckableProxyModel::setItemData(index, roles);
        } else if (kcheckableproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kcheckableproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCheckableProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcheckableproxymodel_setheaderdata_isbase) {
            kcheckableproxymodel_setheaderdata_isbase = false;
            return KCheckableProxyModel::setHeaderData(section, orientation, value, role);
        } else if (kcheckableproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kcheckableproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KCheckableProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcheckableproxymodel_clearitemdata_isbase) {
            kcheckableproxymodel_clearitemdata_isbase = false;
            return KCheckableProxyModel::clearItemData(index);
        } else if (kcheckableproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kcheckableproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCheckableProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcheckableproxymodel_buddy_isbase) {
            kcheckableproxymodel_buddy_isbase = false;
            return KCheckableProxyModel::buddy(index);
        } else if (kcheckableproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kcheckableproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_canfetchmore_isbase) {
            kcheckableproxymodel_canfetchmore_isbase = false;
            return KCheckableProxyModel::canFetchMore(parent);
        } else if (kcheckableproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCheckableProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcheckableproxymodel_fetchmore_isbase) {
            kcheckableproxymodel_fetchmore_isbase = false;
            KCheckableProxyModel::fetchMore(parent);
        } else if (kcheckableproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kcheckableproxymodel_fetchmore_callback(this, cbval1);
        } else {
            KCheckableProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcheckableproxymodel_sort_isbase) {
            kcheckableproxymodel_sort_isbase = false;
            KCheckableProxyModel::sort(column, order);
        } else if (kcheckableproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kcheckableproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            KCheckableProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcheckableproxymodel_span_isbase) {
            kcheckableproxymodel_span_isbase = false;
            return KCheckableProxyModel::span(index);
        } else if (kcheckableproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kcheckableproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_haschildren_isbase) {
            kcheckableproxymodel_haschildren_isbase = false;
            return KCheckableProxyModel::hasChildren(parent);
        } else if (kcheckableproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCheckableProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcheckableproxymodel_mimedata_isbase) {
            kcheckableproxymodel_mimedata_isbase = false;
            return KCheckableProxyModel::mimeData(indexes);
        } else if (kcheckableproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kcheckableproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCheckableProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcheckableproxymodel_candropmimedata_isbase) {
            kcheckableproxymodel_candropmimedata_isbase = false;
            return KCheckableProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (kcheckableproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcheckableproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KCheckableProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcheckableproxymodel_mimetypes_isbase) {
            kcheckableproxymodel_mimetypes_isbase = false;
            return KCheckableProxyModel::mimeTypes();
        } else if (kcheckableproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kcheckableproxymodel_mimetypes_callback();
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
            return KCheckableProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcheckableproxymodel_supporteddragactions_isbase) {
            kcheckableproxymodel_supporteddragactions_isbase = false;
            return KCheckableProxyModel::supportedDragActions();
        } else if (kcheckableproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kcheckableproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KCheckableProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcheckableproxymodel_supporteddropactions_isbase) {
            kcheckableproxymodel_supporteddropactions_isbase = false;
            return KCheckableProxyModel::supportedDropActions();
        } else if (kcheckableproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kcheckableproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KCheckableProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcheckableproxymodel_multidata_isbase) {
            kcheckableproxymodel_multidata_isbase = false;
            KCheckableProxyModel::multiData(index, roleDataSpan);
        } else if (kcheckableproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kcheckableproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KCheckableProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcheckableproxymodel_resetinternaldata_isbase) {
            kcheckableproxymodel_resetinternaldata_isbase = false;
            KCheckableProxyModel::resetInternalData();
        } else if (kcheckableproxymodel_resetinternaldata_callback != nullptr) {
            kcheckableproxymodel_resetinternaldata_callback();
        } else {
            KCheckableProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcheckableproxymodel_event_isbase) {
            kcheckableproxymodel_event_isbase = false;
            return KCheckableProxyModel::event(event);
        } else if (kcheckableproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcheckableproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCheckableProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcheckableproxymodel_eventfilter_isbase) {
            kcheckableproxymodel_eventfilter_isbase = false;
            return KCheckableProxyModel::eventFilter(watched, event);
        } else if (kcheckableproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcheckableproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCheckableProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcheckableproxymodel_timerevent_isbase) {
            kcheckableproxymodel_timerevent_isbase = false;
            KCheckableProxyModel::timerEvent(event);
        } else if (kcheckableproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcheckableproxymodel_timerevent_callback(this, cbval1);
        } else {
            KCheckableProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcheckableproxymodel_childevent_isbase) {
            kcheckableproxymodel_childevent_isbase = false;
            KCheckableProxyModel::childEvent(event);
        } else if (kcheckableproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcheckableproxymodel_childevent_callback(this, cbval1);
        } else {
            KCheckableProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcheckableproxymodel_customevent_isbase) {
            kcheckableproxymodel_customevent_isbase = false;
            KCheckableProxyModel::customEvent(event);
        } else if (kcheckableproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcheckableproxymodel_customevent_callback(this, cbval1);
        } else {
            KCheckableProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcheckableproxymodel_connectnotify_isbase) {
            kcheckableproxymodel_connectnotify_isbase = false;
            KCheckableProxyModel::connectNotify(signal);
        } else if (kcheckableproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcheckableproxymodel_connectnotify_callback(this, cbval1);
        } else {
            KCheckableProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcheckableproxymodel_disconnectnotify_isbase) {
            kcheckableproxymodel_disconnectnotify_isbase = false;
            KCheckableProxyModel::disconnectNotify(signal);
        } else if (kcheckableproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcheckableproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            KCheckableProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceLayoutChanges(bool handleSourceLayoutChanges) {
        if (kcheckableproxymodel_sethandlesourcelayoutchanges_isbase) {
            kcheckableproxymodel_sethandlesourcelayoutchanges_isbase = false;
            KCheckableProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        } else if (kcheckableproxymodel_sethandlesourcelayoutchanges_callback != nullptr) {
            bool cbval1 = handleSourceLayoutChanges;

            kcheckableproxymodel_sethandlesourcelayoutchanges_callback(this, cbval1);
        } else {
            KCheckableProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceDataChanges(bool handleSourceDataChanges) {
        if (kcheckableproxymodel_sethandlesourcedatachanges_isbase) {
            kcheckableproxymodel_sethandlesourcedatachanges_isbase = false;
            KCheckableProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        } else if (kcheckableproxymodel_sethandlesourcedatachanges_callback != nullptr) {
            bool cbval1 = handleSourceDataChanges;

            kcheckableproxymodel_sethandlesourcedatachanges_callback(this, cbval1);
        } else {
            KCheckableProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (kcheckableproxymodel_createsourceindex_isbase) {
            kcheckableproxymodel_createsourceindex_isbase = false;
            return KCheckableProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (kcheckableproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = kcheckableproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kcheckableproxymodel_createindex_isbase) {
            kcheckableproxymodel_createindex_isbase = false;
            return KCheckableProxyModel::createIndex(row, column);
        } else if (kcheckableproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kcheckableproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KCheckableProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kcheckableproxymodel_encodedata_isbase) {
            kcheckableproxymodel_encodedata_isbase = false;
            KCheckableProxyModel::encodeData(indexes, stream);
        } else if (kcheckableproxymodel_encodedata_callback != nullptr) {
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

            kcheckableproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KCheckableProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kcheckableproxymodel_decodedata_isbase) {
            kcheckableproxymodel_decodedata_isbase = false;
            return KCheckableProxyModel::decodeData(row, column, parent, stream);
        } else if (kcheckableproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kcheckableproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KCheckableProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kcheckableproxymodel_begininsertrows_isbase) {
            kcheckableproxymodel_begininsertrows_isbase = false;
            KCheckableProxyModel::beginInsertRows(parent, first, last);
        } else if (kcheckableproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcheckableproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCheckableProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kcheckableproxymodel_endinsertrows_isbase) {
            kcheckableproxymodel_endinsertrows_isbase = false;
            KCheckableProxyModel::endInsertRows();
        } else if (kcheckableproxymodel_endinsertrows_callback != nullptr) {
            kcheckableproxymodel_endinsertrows_callback();
        } else {
            KCheckableProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kcheckableproxymodel_beginremoverows_isbase) {
            kcheckableproxymodel_beginremoverows_isbase = false;
            KCheckableProxyModel::beginRemoveRows(parent, first, last);
        } else if (kcheckableproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcheckableproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCheckableProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kcheckableproxymodel_endremoverows_isbase) {
            kcheckableproxymodel_endremoverows_isbase = false;
            KCheckableProxyModel::endRemoveRows();
        } else if (kcheckableproxymodel_endremoverows_callback != nullptr) {
            kcheckableproxymodel_endremoverows_callback();
        } else {
            KCheckableProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kcheckableproxymodel_beginmoverows_isbase) {
            kcheckableproxymodel_beginmoverows_isbase = false;
            return KCheckableProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kcheckableproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kcheckableproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KCheckableProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kcheckableproxymodel_endmoverows_isbase) {
            kcheckableproxymodel_endmoverows_isbase = false;
            KCheckableProxyModel::endMoveRows();
        } else if (kcheckableproxymodel_endmoverows_callback != nullptr) {
            kcheckableproxymodel_endmoverows_callback();
        } else {
            KCheckableProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kcheckableproxymodel_begininsertcolumns_isbase) {
            kcheckableproxymodel_begininsertcolumns_isbase = false;
            KCheckableProxyModel::beginInsertColumns(parent, first, last);
        } else if (kcheckableproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcheckableproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCheckableProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kcheckableproxymodel_endinsertcolumns_isbase) {
            kcheckableproxymodel_endinsertcolumns_isbase = false;
            KCheckableProxyModel::endInsertColumns();
        } else if (kcheckableproxymodel_endinsertcolumns_callback != nullptr) {
            kcheckableproxymodel_endinsertcolumns_callback();
        } else {
            KCheckableProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kcheckableproxymodel_beginremovecolumns_isbase) {
            kcheckableproxymodel_beginremovecolumns_isbase = false;
            KCheckableProxyModel::beginRemoveColumns(parent, first, last);
        } else if (kcheckableproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcheckableproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCheckableProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kcheckableproxymodel_endremovecolumns_isbase) {
            kcheckableproxymodel_endremovecolumns_isbase = false;
            KCheckableProxyModel::endRemoveColumns();
        } else if (kcheckableproxymodel_endremovecolumns_callback != nullptr) {
            kcheckableproxymodel_endremovecolumns_callback();
        } else {
            KCheckableProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kcheckableproxymodel_beginmovecolumns_isbase) {
            kcheckableproxymodel_beginmovecolumns_isbase = false;
            return KCheckableProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kcheckableproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kcheckableproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KCheckableProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kcheckableproxymodel_endmovecolumns_isbase) {
            kcheckableproxymodel_endmovecolumns_isbase = false;
            KCheckableProxyModel::endMoveColumns();
        } else if (kcheckableproxymodel_endmovecolumns_callback != nullptr) {
            kcheckableproxymodel_endmovecolumns_callback();
        } else {
            KCheckableProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kcheckableproxymodel_beginresetmodel_isbase) {
            kcheckableproxymodel_beginresetmodel_isbase = false;
            KCheckableProxyModel::beginResetModel();
        } else if (kcheckableproxymodel_beginresetmodel_callback != nullptr) {
            kcheckableproxymodel_beginresetmodel_callback();
        } else {
            KCheckableProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kcheckableproxymodel_endresetmodel_isbase) {
            kcheckableproxymodel_endresetmodel_isbase = false;
            KCheckableProxyModel::endResetModel();
        } else if (kcheckableproxymodel_endresetmodel_callback != nullptr) {
            kcheckableproxymodel_endresetmodel_callback();
        } else {
            KCheckableProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kcheckableproxymodel_changepersistentindex_isbase) {
            kcheckableproxymodel_changepersistentindex_isbase = false;
            KCheckableProxyModel::changePersistentIndex(from, to);
        } else if (kcheckableproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kcheckableproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KCheckableProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kcheckableproxymodel_changepersistentindexlist_isbase) {
            kcheckableproxymodel_changepersistentindexlist_isbase = false;
            KCheckableProxyModel::changePersistentIndexList(from, to);
        } else if (kcheckableproxymodel_changepersistentindexlist_callback != nullptr) {
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

            kcheckableproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KCheckableProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kcheckableproxymodel_persistentindexlist_isbase) {
            kcheckableproxymodel_persistentindexlist_isbase = false;
            return KCheckableProxyModel::persistentIndexList();
        } else if (kcheckableproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kcheckableproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KCheckableProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcheckableproxymodel_sender_isbase) {
            kcheckableproxymodel_sender_isbase = false;
            return KCheckableProxyModel::sender();
        } else if (kcheckableproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = kcheckableproxymodel_sender_callback();
            return callback_ret;
        } else {
            return KCheckableProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcheckableproxymodel_sendersignalindex_isbase) {
            kcheckableproxymodel_sendersignalindex_isbase = false;
            return KCheckableProxyModel::senderSignalIndex();
        } else if (kcheckableproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kcheckableproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCheckableProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcheckableproxymodel_receivers_isbase) {
            kcheckableproxymodel_receivers_isbase = false;
            return KCheckableProxyModel::receivers(signal);
        } else if (kcheckableproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcheckableproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCheckableProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcheckableproxymodel_issignalconnected_isbase) {
            kcheckableproxymodel_issignalconnected_isbase = false;
            return KCheckableProxyModel::isSignalConnected(signal);
        } else if (kcheckableproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcheckableproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCheckableProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KCheckableProxyModel_Select(KCheckableProxyModel* self, const QItemSelection* selection, int command);
    friend bool KCheckableProxyModel_QBaseSelect(KCheckableProxyModel* self, const QItemSelection* selection, int command);
    friend void KCheckableProxyModel_ResetInternalData(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseResetInternalData(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_TimerEvent(KCheckableProxyModel* self, QTimerEvent* event);
    friend void KCheckableProxyModel_QBaseTimerEvent(KCheckableProxyModel* self, QTimerEvent* event);
    friend void KCheckableProxyModel_ChildEvent(KCheckableProxyModel* self, QChildEvent* event);
    friend void KCheckableProxyModel_QBaseChildEvent(KCheckableProxyModel* self, QChildEvent* event);
    friend void KCheckableProxyModel_CustomEvent(KCheckableProxyModel* self, QEvent* event);
    friend void KCheckableProxyModel_QBaseCustomEvent(KCheckableProxyModel* self, QEvent* event);
    friend void KCheckableProxyModel_ConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal);
    friend void KCheckableProxyModel_QBaseConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal);
    friend void KCheckableProxyModel_DisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal);
    friend void KCheckableProxyModel_QBaseDisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal);
    friend void KCheckableProxyModel_SetHandleSourceLayoutChanges(KCheckableProxyModel* self, bool handleSourceLayoutChanges);
    friend void KCheckableProxyModel_QBaseSetHandleSourceLayoutChanges(KCheckableProxyModel* self, bool handleSourceLayoutChanges);
    friend void KCheckableProxyModel_SetHandleSourceDataChanges(KCheckableProxyModel* self, bool handleSourceDataChanges);
    friend void KCheckableProxyModel_QBaseSetHandleSourceDataChanges(KCheckableProxyModel* self, bool handleSourceDataChanges);
    friend QModelIndex* KCheckableProxyModel_CreateSourceIndex(const KCheckableProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KCheckableProxyModel_QBaseCreateSourceIndex(const KCheckableProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KCheckableProxyModel_CreateIndex(const KCheckableProxyModel* self, int row, int column);
    friend QModelIndex* KCheckableProxyModel_QBaseCreateIndex(const KCheckableProxyModel* self, int row, int column);
    friend void KCheckableProxyModel_EncodeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KCheckableProxyModel_QBaseEncodeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KCheckableProxyModel_DecodeData(KCheckableProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KCheckableProxyModel_QBaseDecodeData(KCheckableProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KCheckableProxyModel_BeginInsertRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_QBaseBeginInsertRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_EndInsertRows(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndInsertRows(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_BeginRemoveRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_QBaseBeginRemoveRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_EndRemoveRows(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndRemoveRows(KCheckableProxyModel* self);
    friend bool KCheckableProxyModel_BeginMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KCheckableProxyModel_QBaseBeginMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KCheckableProxyModel_EndMoveRows(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndMoveRows(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_BeginInsertColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_QBaseBeginInsertColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_EndInsertColumns(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndInsertColumns(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_BeginRemoveColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_QBaseBeginRemoveColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KCheckableProxyModel_EndRemoveColumns(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndRemoveColumns(KCheckableProxyModel* self);
    friend bool KCheckableProxyModel_BeginMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KCheckableProxyModel_QBaseBeginMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KCheckableProxyModel_EndMoveColumns(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndMoveColumns(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_BeginResetModel(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseBeginResetModel(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_EndResetModel(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_QBaseEndResetModel(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_ChangePersistentIndex(KCheckableProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KCheckableProxyModel_QBaseChangePersistentIndex(KCheckableProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KCheckableProxyModel_ChangePersistentIndexList(KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KCheckableProxyModel_QBaseChangePersistentIndexList(KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KCheckableProxyModel_PersistentIndexList(const KCheckableProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KCheckableProxyModel_QBasePersistentIndexList(const KCheckableProxyModel* self);
    friend QObject* KCheckableProxyModel_Sender(const KCheckableProxyModel* self);
    friend QObject* KCheckableProxyModel_QBaseSender(const KCheckableProxyModel* self);
    friend int KCheckableProxyModel_SenderSignalIndex(const KCheckableProxyModel* self);
    friend int KCheckableProxyModel_QBaseSenderSignalIndex(const KCheckableProxyModel* self);
    friend int KCheckableProxyModel_Receivers(const KCheckableProxyModel* self, const char* signal);
    friend int KCheckableProxyModel_QBaseReceivers(const KCheckableProxyModel* self, const char* signal);
    friend bool KCheckableProxyModel_IsSignalConnected(const KCheckableProxyModel* self, const QMetaMethod* signal);
    friend bool KCheckableProxyModel_QBaseIsSignalConnected(const KCheckableProxyModel* self, const QMetaMethod* signal);
};

#endif
