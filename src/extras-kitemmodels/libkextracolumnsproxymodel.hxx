#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKEXTRACOLUMNSPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKEXTRACOLUMNSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KExtraColumnsProxyModel so that we can call protected methods
class VirtualKExtraColumnsProxyModel : public KExtraColumnsProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKExtraColumnsProxyModel = true;

    // Virtual class public types (including callbacks)
    using KExtraColumnsProxyModel_Metacall_Callback = int (*)(KExtraColumnsProxyModel*, int, int, void**);
    using KExtraColumnsProxyModel_ExtraColumnData_Callback = QVariant* (*)(const KExtraColumnsProxyModel*, QModelIndex*, int, int, int);
    using KExtraColumnsProxyModel_SetExtraColumnData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QVariant*, int);
    using KExtraColumnsProxyModel_SetSourceModel_Callback = void (*)(KExtraColumnsProxyModel*, QAbstractItemModel*);
    using KExtraColumnsProxyModel_MapToSource_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KExtraColumnsProxyModel*, QItemSelection*);
    using KExtraColumnsProxyModel_ColumnCount_Callback = int (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_Data_Callback = QVariant* (*)(const KExtraColumnsProxyModel*, QModelIndex*, int);
    using KExtraColumnsProxyModel_SetData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, QVariant*, int);
    using KExtraColumnsProxyModel_Sibling_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_Buddy_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_Flags_Callback = int (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_HasChildren_Callback = bool (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_HeaderData_Callback = QVariant* (*)(const KExtraColumnsProxyModel*, int, int, int);
    using KExtraColumnsProxyModel_Index_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_Parent_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_RowCount_Callback = int (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_DropMimeData_Callback = bool (*)(KExtraColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KExtraColumnsProxyModel*, QItemSelection*);
    using KExtraColumnsProxyModel_Match_Callback = QModelIndex** (*)(const KExtraColumnsProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KExtraColumnsProxyModel_InsertColumns_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_InsertRows_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_RemoveColumns_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_RemoveRows_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_MoveRows_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KExtraColumnsProxyModel_MoveColumns_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KExtraColumnsProxyModel_Submit_Callback = bool (*)();
    using KExtraColumnsProxyModel_Revert_Callback = void (*)();
    using KExtraColumnsProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_SetItemData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KExtraColumnsProxyModel_SetHeaderData_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QVariant*, int);
    using KExtraColumnsProxyModel_ClearItemData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_CanFetchMore_Callback = bool (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_FetchMore_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_Sort_Callback = void (*)(KExtraColumnsProxyModel*, int, int);
    using KExtraColumnsProxyModel_Span_Callback = QSize* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_MimeData_Callback = QMimeData* (*)(const KExtraColumnsProxyModel*, libqt_list /* of QModelIndex* */);
    using KExtraColumnsProxyModel_CanDropMimeData_Callback = bool (*)(const KExtraColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_MimeTypes_Callback = const char** (*)();
    using KExtraColumnsProxyModel_SupportedDragActions_Callback = int (*)();
    using KExtraColumnsProxyModel_SupportedDropActions_Callback = int (*)();
    using KExtraColumnsProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KExtraColumnsProxyModel_MultiData_Callback = void (*)(const KExtraColumnsProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KExtraColumnsProxyModel_ResetInternalData_Callback = void (*)();
    using KExtraColumnsProxyModel_Event_Callback = bool (*)(KExtraColumnsProxyModel*, QEvent*);
    using KExtraColumnsProxyModel_EventFilter_Callback = bool (*)(KExtraColumnsProxyModel*, QObject*, QEvent*);
    using KExtraColumnsProxyModel_TimerEvent_Callback = void (*)(KExtraColumnsProxyModel*, QTimerEvent*);
    using KExtraColumnsProxyModel_ChildEvent_Callback = void (*)(KExtraColumnsProxyModel*, QChildEvent*);
    using KExtraColumnsProxyModel_CustomEvent_Callback = void (*)(KExtraColumnsProxyModel*, QEvent*);
    using KExtraColumnsProxyModel_ConnectNotify_Callback = void (*)(KExtraColumnsProxyModel*, QMetaMethod*);
    using KExtraColumnsProxyModel_DisconnectNotify_Callback = void (*)(KExtraColumnsProxyModel*, QMetaMethod*);
    using KExtraColumnsProxyModel_SetHandleSourceLayoutChanges_Callback = void (*)(KExtraColumnsProxyModel*, bool);
    using KExtraColumnsProxyModel_SetHandleSourceDataChanges_Callback = void (*)(KExtraColumnsProxyModel*, bool);
    using KExtraColumnsProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, int, int, void*);
    using KExtraColumnsProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, int, int);
    using KExtraColumnsProxyModel_EncodeData_Callback = void (*)(const KExtraColumnsProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KExtraColumnsProxyModel_DecodeData_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KExtraColumnsProxyModel_BeginInsertRows_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int);
    using KExtraColumnsProxyModel_EndInsertRows_Callback = void (*)();
    using KExtraColumnsProxyModel_BeginRemoveRows_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int);
    using KExtraColumnsProxyModel_EndRemoveRows_Callback = void (*)();
    using KExtraColumnsProxyModel_BeginMoveRows_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KExtraColumnsProxyModel_EndMoveRows_Callback = void (*)();
    using KExtraColumnsProxyModel_BeginInsertColumns_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int);
    using KExtraColumnsProxyModel_EndInsertColumns_Callback = void (*)();
    using KExtraColumnsProxyModel_BeginRemoveColumns_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int);
    using KExtraColumnsProxyModel_EndRemoveColumns_Callback = void (*)();
    using KExtraColumnsProxyModel_BeginMoveColumns_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KExtraColumnsProxyModel_EndMoveColumns_Callback = void (*)();
    using KExtraColumnsProxyModel_BeginResetModel_Callback = void (*)();
    using KExtraColumnsProxyModel_EndResetModel_Callback = void (*)();
    using KExtraColumnsProxyModel_ChangePersistentIndex_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*, QModelIndex*);
    using KExtraColumnsProxyModel_ChangePersistentIndexList_Callback = void (*)(KExtraColumnsProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KExtraColumnsProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KExtraColumnsProxyModel_Sender_Callback = QObject* (*)();
    using KExtraColumnsProxyModel_SenderSignalIndex_Callback = int (*)();
    using KExtraColumnsProxyModel_Receivers_Callback = int (*)(const KExtraColumnsProxyModel*, const char*);
    using KExtraColumnsProxyModel_IsSignalConnected_Callback = bool (*)(const KExtraColumnsProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KExtraColumnsProxyModel_Metacall_Callback kextracolumnsproxymodel_metacall_callback = nullptr;
    KExtraColumnsProxyModel_ExtraColumnData_Callback kextracolumnsproxymodel_extracolumndata_callback = nullptr;
    KExtraColumnsProxyModel_SetExtraColumnData_Callback kextracolumnsproxymodel_setextracolumndata_callback = nullptr;
    KExtraColumnsProxyModel_SetSourceModel_Callback kextracolumnsproxymodel_setsourcemodel_callback = nullptr;
    KExtraColumnsProxyModel_MapToSource_Callback kextracolumnsproxymodel_maptosource_callback = nullptr;
    KExtraColumnsProxyModel_MapSelectionToSource_Callback kextracolumnsproxymodel_mapselectiontosource_callback = nullptr;
    KExtraColumnsProxyModel_ColumnCount_Callback kextracolumnsproxymodel_columncount_callback = nullptr;
    KExtraColumnsProxyModel_Data_Callback kextracolumnsproxymodel_data_callback = nullptr;
    KExtraColumnsProxyModel_SetData_Callback kextracolumnsproxymodel_setdata_callback = nullptr;
    KExtraColumnsProxyModel_Sibling_Callback kextracolumnsproxymodel_sibling_callback = nullptr;
    KExtraColumnsProxyModel_Buddy_Callback kextracolumnsproxymodel_buddy_callback = nullptr;
    KExtraColumnsProxyModel_Flags_Callback kextracolumnsproxymodel_flags_callback = nullptr;
    KExtraColumnsProxyModel_HasChildren_Callback kextracolumnsproxymodel_haschildren_callback = nullptr;
    KExtraColumnsProxyModel_HeaderData_Callback kextracolumnsproxymodel_headerdata_callback = nullptr;
    KExtraColumnsProxyModel_Index_Callback kextracolumnsproxymodel_index_callback = nullptr;
    KExtraColumnsProxyModel_Parent_Callback kextracolumnsproxymodel_parent_callback = nullptr;
    KExtraColumnsProxyModel_MapFromSource_Callback kextracolumnsproxymodel_mapfromsource_callback = nullptr;
    KExtraColumnsProxyModel_RowCount_Callback kextracolumnsproxymodel_rowcount_callback = nullptr;
    KExtraColumnsProxyModel_DropMimeData_Callback kextracolumnsproxymodel_dropmimedata_callback = nullptr;
    KExtraColumnsProxyModel_MapSelectionFromSource_Callback kextracolumnsproxymodel_mapselectionfromsource_callback = nullptr;
    KExtraColumnsProxyModel_Match_Callback kextracolumnsproxymodel_match_callback = nullptr;
    KExtraColumnsProxyModel_InsertColumns_Callback kextracolumnsproxymodel_insertcolumns_callback = nullptr;
    KExtraColumnsProxyModel_InsertRows_Callback kextracolumnsproxymodel_insertrows_callback = nullptr;
    KExtraColumnsProxyModel_RemoveColumns_Callback kextracolumnsproxymodel_removecolumns_callback = nullptr;
    KExtraColumnsProxyModel_RemoveRows_Callback kextracolumnsproxymodel_removerows_callback = nullptr;
    KExtraColumnsProxyModel_MoveRows_Callback kextracolumnsproxymodel_moverows_callback = nullptr;
    KExtraColumnsProxyModel_MoveColumns_Callback kextracolumnsproxymodel_movecolumns_callback = nullptr;
    KExtraColumnsProxyModel_Submit_Callback kextracolumnsproxymodel_submit_callback = nullptr;
    KExtraColumnsProxyModel_Revert_Callback kextracolumnsproxymodel_revert_callback = nullptr;
    KExtraColumnsProxyModel_ItemData_Callback kextracolumnsproxymodel_itemdata_callback = nullptr;
    KExtraColumnsProxyModel_SetItemData_Callback kextracolumnsproxymodel_setitemdata_callback = nullptr;
    KExtraColumnsProxyModel_SetHeaderData_Callback kextracolumnsproxymodel_setheaderdata_callback = nullptr;
    KExtraColumnsProxyModel_ClearItemData_Callback kextracolumnsproxymodel_clearitemdata_callback = nullptr;
    KExtraColumnsProxyModel_CanFetchMore_Callback kextracolumnsproxymodel_canfetchmore_callback = nullptr;
    KExtraColumnsProxyModel_FetchMore_Callback kextracolumnsproxymodel_fetchmore_callback = nullptr;
    KExtraColumnsProxyModel_Sort_Callback kextracolumnsproxymodel_sort_callback = nullptr;
    KExtraColumnsProxyModel_Span_Callback kextracolumnsproxymodel_span_callback = nullptr;
    KExtraColumnsProxyModel_MimeData_Callback kextracolumnsproxymodel_mimedata_callback = nullptr;
    KExtraColumnsProxyModel_CanDropMimeData_Callback kextracolumnsproxymodel_candropmimedata_callback = nullptr;
    KExtraColumnsProxyModel_MimeTypes_Callback kextracolumnsproxymodel_mimetypes_callback = nullptr;
    KExtraColumnsProxyModel_SupportedDragActions_Callback kextracolumnsproxymodel_supporteddragactions_callback = nullptr;
    KExtraColumnsProxyModel_SupportedDropActions_Callback kextracolumnsproxymodel_supporteddropactions_callback = nullptr;
    KExtraColumnsProxyModel_RoleNames_Callback kextracolumnsproxymodel_rolenames_callback = nullptr;
    KExtraColumnsProxyModel_MultiData_Callback kextracolumnsproxymodel_multidata_callback = nullptr;
    KExtraColumnsProxyModel_ResetInternalData_Callback kextracolumnsproxymodel_resetinternaldata_callback = nullptr;
    KExtraColumnsProxyModel_Event_Callback kextracolumnsproxymodel_event_callback = nullptr;
    KExtraColumnsProxyModel_EventFilter_Callback kextracolumnsproxymodel_eventfilter_callback = nullptr;
    KExtraColumnsProxyModel_TimerEvent_Callback kextracolumnsproxymodel_timerevent_callback = nullptr;
    KExtraColumnsProxyModel_ChildEvent_Callback kextracolumnsproxymodel_childevent_callback = nullptr;
    KExtraColumnsProxyModel_CustomEvent_Callback kextracolumnsproxymodel_customevent_callback = nullptr;
    KExtraColumnsProxyModel_ConnectNotify_Callback kextracolumnsproxymodel_connectnotify_callback = nullptr;
    KExtraColumnsProxyModel_DisconnectNotify_Callback kextracolumnsproxymodel_disconnectnotify_callback = nullptr;
    KExtraColumnsProxyModel_SetHandleSourceLayoutChanges_Callback kextracolumnsproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
    KExtraColumnsProxyModel_SetHandleSourceDataChanges_Callback kextracolumnsproxymodel_sethandlesourcedatachanges_callback = nullptr;
    KExtraColumnsProxyModel_CreateSourceIndex_Callback kextracolumnsproxymodel_createsourceindex_callback = nullptr;
    KExtraColumnsProxyModel_CreateIndex_Callback kextracolumnsproxymodel_createindex_callback = nullptr;
    KExtraColumnsProxyModel_EncodeData_Callback kextracolumnsproxymodel_encodedata_callback = nullptr;
    KExtraColumnsProxyModel_DecodeData_Callback kextracolumnsproxymodel_decodedata_callback = nullptr;
    KExtraColumnsProxyModel_BeginInsertRows_Callback kextracolumnsproxymodel_begininsertrows_callback = nullptr;
    KExtraColumnsProxyModel_EndInsertRows_Callback kextracolumnsproxymodel_endinsertrows_callback = nullptr;
    KExtraColumnsProxyModel_BeginRemoveRows_Callback kextracolumnsproxymodel_beginremoverows_callback = nullptr;
    KExtraColumnsProxyModel_EndRemoveRows_Callback kextracolumnsproxymodel_endremoverows_callback = nullptr;
    KExtraColumnsProxyModel_BeginMoveRows_Callback kextracolumnsproxymodel_beginmoverows_callback = nullptr;
    KExtraColumnsProxyModel_EndMoveRows_Callback kextracolumnsproxymodel_endmoverows_callback = nullptr;
    KExtraColumnsProxyModel_BeginInsertColumns_Callback kextracolumnsproxymodel_begininsertcolumns_callback = nullptr;
    KExtraColumnsProxyModel_EndInsertColumns_Callback kextracolumnsproxymodel_endinsertcolumns_callback = nullptr;
    KExtraColumnsProxyModel_BeginRemoveColumns_Callback kextracolumnsproxymodel_beginremovecolumns_callback = nullptr;
    KExtraColumnsProxyModel_EndRemoveColumns_Callback kextracolumnsproxymodel_endremovecolumns_callback = nullptr;
    KExtraColumnsProxyModel_BeginMoveColumns_Callback kextracolumnsproxymodel_beginmovecolumns_callback = nullptr;
    KExtraColumnsProxyModel_EndMoveColumns_Callback kextracolumnsproxymodel_endmovecolumns_callback = nullptr;
    KExtraColumnsProxyModel_BeginResetModel_Callback kextracolumnsproxymodel_beginresetmodel_callback = nullptr;
    KExtraColumnsProxyModel_EndResetModel_Callback kextracolumnsproxymodel_endresetmodel_callback = nullptr;
    KExtraColumnsProxyModel_ChangePersistentIndex_Callback kextracolumnsproxymodel_changepersistentindex_callback = nullptr;
    KExtraColumnsProxyModel_ChangePersistentIndexList_Callback kextracolumnsproxymodel_changepersistentindexlist_callback = nullptr;
    KExtraColumnsProxyModel_PersistentIndexList_Callback kextracolumnsproxymodel_persistentindexlist_callback = nullptr;
    KExtraColumnsProxyModel_Sender_Callback kextracolumnsproxymodel_sender_callback = nullptr;
    KExtraColumnsProxyModel_SenderSignalIndex_Callback kextracolumnsproxymodel_sendersignalindex_callback = nullptr;
    KExtraColumnsProxyModel_Receivers_Callback kextracolumnsproxymodel_receivers_callback = nullptr;
    KExtraColumnsProxyModel_IsSignalConnected_Callback kextracolumnsproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kextracolumnsproxymodel_metacall_isbase = false;
    mutable bool kextracolumnsproxymodel_extracolumndata_isbase = false;
    mutable bool kextracolumnsproxymodel_setextracolumndata_isbase = false;
    mutable bool kextracolumnsproxymodel_setsourcemodel_isbase = false;
    mutable bool kextracolumnsproxymodel_maptosource_isbase = false;
    mutable bool kextracolumnsproxymodel_mapselectiontosource_isbase = false;
    mutable bool kextracolumnsproxymodel_columncount_isbase = false;
    mutable bool kextracolumnsproxymodel_data_isbase = false;
    mutable bool kextracolumnsproxymodel_setdata_isbase = false;
    mutable bool kextracolumnsproxymodel_sibling_isbase = false;
    mutable bool kextracolumnsproxymodel_buddy_isbase = false;
    mutable bool kextracolumnsproxymodel_flags_isbase = false;
    mutable bool kextracolumnsproxymodel_haschildren_isbase = false;
    mutable bool kextracolumnsproxymodel_headerdata_isbase = false;
    mutable bool kextracolumnsproxymodel_index_isbase = false;
    mutable bool kextracolumnsproxymodel_parent_isbase = false;
    mutable bool kextracolumnsproxymodel_mapfromsource_isbase = false;
    mutable bool kextracolumnsproxymodel_rowcount_isbase = false;
    mutable bool kextracolumnsproxymodel_dropmimedata_isbase = false;
    mutable bool kextracolumnsproxymodel_mapselectionfromsource_isbase = false;
    mutable bool kextracolumnsproxymodel_match_isbase = false;
    mutable bool kextracolumnsproxymodel_insertcolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_insertrows_isbase = false;
    mutable bool kextracolumnsproxymodel_removecolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_removerows_isbase = false;
    mutable bool kextracolumnsproxymodel_moverows_isbase = false;
    mutable bool kextracolumnsproxymodel_movecolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_submit_isbase = false;
    mutable bool kextracolumnsproxymodel_revert_isbase = false;
    mutable bool kextracolumnsproxymodel_itemdata_isbase = false;
    mutable bool kextracolumnsproxymodel_setitemdata_isbase = false;
    mutable bool kextracolumnsproxymodel_setheaderdata_isbase = false;
    mutable bool kextracolumnsproxymodel_clearitemdata_isbase = false;
    mutable bool kextracolumnsproxymodel_canfetchmore_isbase = false;
    mutable bool kextracolumnsproxymodel_fetchmore_isbase = false;
    mutable bool kextracolumnsproxymodel_sort_isbase = false;
    mutable bool kextracolumnsproxymodel_span_isbase = false;
    mutable bool kextracolumnsproxymodel_mimedata_isbase = false;
    mutable bool kextracolumnsproxymodel_candropmimedata_isbase = false;
    mutable bool kextracolumnsproxymodel_mimetypes_isbase = false;
    mutable bool kextracolumnsproxymodel_supporteddragactions_isbase = false;
    mutable bool kextracolumnsproxymodel_supporteddropactions_isbase = false;
    mutable bool kextracolumnsproxymodel_rolenames_isbase = false;
    mutable bool kextracolumnsproxymodel_multidata_isbase = false;
    mutable bool kextracolumnsproxymodel_resetinternaldata_isbase = false;
    mutable bool kextracolumnsproxymodel_event_isbase = false;
    mutable bool kextracolumnsproxymodel_eventfilter_isbase = false;
    mutable bool kextracolumnsproxymodel_timerevent_isbase = false;
    mutable bool kextracolumnsproxymodel_childevent_isbase = false;
    mutable bool kextracolumnsproxymodel_customevent_isbase = false;
    mutable bool kextracolumnsproxymodel_connectnotify_isbase = false;
    mutable bool kextracolumnsproxymodel_disconnectnotify_isbase = false;
    mutable bool kextracolumnsproxymodel_sethandlesourcelayoutchanges_isbase = false;
    mutable bool kextracolumnsproxymodel_sethandlesourcedatachanges_isbase = false;
    mutable bool kextracolumnsproxymodel_createsourceindex_isbase = false;
    mutable bool kextracolumnsproxymodel_createindex_isbase = false;
    mutable bool kextracolumnsproxymodel_encodedata_isbase = false;
    mutable bool kextracolumnsproxymodel_decodedata_isbase = false;
    mutable bool kextracolumnsproxymodel_begininsertrows_isbase = false;
    mutable bool kextracolumnsproxymodel_endinsertrows_isbase = false;
    mutable bool kextracolumnsproxymodel_beginremoverows_isbase = false;
    mutable bool kextracolumnsproxymodel_endremoverows_isbase = false;
    mutable bool kextracolumnsproxymodel_beginmoverows_isbase = false;
    mutable bool kextracolumnsproxymodel_endmoverows_isbase = false;
    mutable bool kextracolumnsproxymodel_begininsertcolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_endinsertcolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_beginremovecolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_endremovecolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_beginmovecolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_endmovecolumns_isbase = false;
    mutable bool kextracolumnsproxymodel_beginresetmodel_isbase = false;
    mutable bool kextracolumnsproxymodel_endresetmodel_isbase = false;
    mutable bool kextracolumnsproxymodel_changepersistentindex_isbase = false;
    mutable bool kextracolumnsproxymodel_changepersistentindexlist_isbase = false;
    mutable bool kextracolumnsproxymodel_persistentindexlist_isbase = false;
    mutable bool kextracolumnsproxymodel_sender_isbase = false;
    mutable bool kextracolumnsproxymodel_sendersignalindex_isbase = false;
    mutable bool kextracolumnsproxymodel_receivers_isbase = false;
    mutable bool kextracolumnsproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKExtraColumnsProxyModel() : KExtraColumnsProxyModel() {};
    VirtualKExtraColumnsProxyModel(QObject* parent) : KExtraColumnsProxyModel(parent) {};

    ~VirtualKExtraColumnsProxyModel() {
        kextracolumnsproxymodel_metacall_callback = nullptr;
        kextracolumnsproxymodel_extracolumndata_callback = nullptr;
        kextracolumnsproxymodel_setextracolumndata_callback = nullptr;
        kextracolumnsproxymodel_setsourcemodel_callback = nullptr;
        kextracolumnsproxymodel_maptosource_callback = nullptr;
        kextracolumnsproxymodel_mapselectiontosource_callback = nullptr;
        kextracolumnsproxymodel_columncount_callback = nullptr;
        kextracolumnsproxymodel_data_callback = nullptr;
        kextracolumnsproxymodel_setdata_callback = nullptr;
        kextracolumnsproxymodel_sibling_callback = nullptr;
        kextracolumnsproxymodel_buddy_callback = nullptr;
        kextracolumnsproxymodel_flags_callback = nullptr;
        kextracolumnsproxymodel_haschildren_callback = nullptr;
        kextracolumnsproxymodel_headerdata_callback = nullptr;
        kextracolumnsproxymodel_index_callback = nullptr;
        kextracolumnsproxymodel_parent_callback = nullptr;
        kextracolumnsproxymodel_mapfromsource_callback = nullptr;
        kextracolumnsproxymodel_rowcount_callback = nullptr;
        kextracolumnsproxymodel_dropmimedata_callback = nullptr;
        kextracolumnsproxymodel_mapselectionfromsource_callback = nullptr;
        kextracolumnsproxymodel_match_callback = nullptr;
        kextracolumnsproxymodel_insertcolumns_callback = nullptr;
        kextracolumnsproxymodel_insertrows_callback = nullptr;
        kextracolumnsproxymodel_removecolumns_callback = nullptr;
        kextracolumnsproxymodel_removerows_callback = nullptr;
        kextracolumnsproxymodel_moverows_callback = nullptr;
        kextracolumnsproxymodel_movecolumns_callback = nullptr;
        kextracolumnsproxymodel_submit_callback = nullptr;
        kextracolumnsproxymodel_revert_callback = nullptr;
        kextracolumnsproxymodel_itemdata_callback = nullptr;
        kextracolumnsproxymodel_setitemdata_callback = nullptr;
        kextracolumnsproxymodel_setheaderdata_callback = nullptr;
        kextracolumnsproxymodel_clearitemdata_callback = nullptr;
        kextracolumnsproxymodel_canfetchmore_callback = nullptr;
        kextracolumnsproxymodel_fetchmore_callback = nullptr;
        kextracolumnsproxymodel_sort_callback = nullptr;
        kextracolumnsproxymodel_span_callback = nullptr;
        kextracolumnsproxymodel_mimedata_callback = nullptr;
        kextracolumnsproxymodel_candropmimedata_callback = nullptr;
        kextracolumnsproxymodel_mimetypes_callback = nullptr;
        kextracolumnsproxymodel_supporteddragactions_callback = nullptr;
        kextracolumnsproxymodel_supporteddropactions_callback = nullptr;
        kextracolumnsproxymodel_rolenames_callback = nullptr;
        kextracolumnsproxymodel_multidata_callback = nullptr;
        kextracolumnsproxymodel_resetinternaldata_callback = nullptr;
        kextracolumnsproxymodel_event_callback = nullptr;
        kextracolumnsproxymodel_eventfilter_callback = nullptr;
        kextracolumnsproxymodel_timerevent_callback = nullptr;
        kextracolumnsproxymodel_childevent_callback = nullptr;
        kextracolumnsproxymodel_customevent_callback = nullptr;
        kextracolumnsproxymodel_connectnotify_callback = nullptr;
        kextracolumnsproxymodel_disconnectnotify_callback = nullptr;
        kextracolumnsproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
        kextracolumnsproxymodel_sethandlesourcedatachanges_callback = nullptr;
        kextracolumnsproxymodel_createsourceindex_callback = nullptr;
        kextracolumnsproxymodel_createindex_callback = nullptr;
        kextracolumnsproxymodel_encodedata_callback = nullptr;
        kextracolumnsproxymodel_decodedata_callback = nullptr;
        kextracolumnsproxymodel_begininsertrows_callback = nullptr;
        kextracolumnsproxymodel_endinsertrows_callback = nullptr;
        kextracolumnsproxymodel_beginremoverows_callback = nullptr;
        kextracolumnsproxymodel_endremoverows_callback = nullptr;
        kextracolumnsproxymodel_beginmoverows_callback = nullptr;
        kextracolumnsproxymodel_endmoverows_callback = nullptr;
        kextracolumnsproxymodel_begininsertcolumns_callback = nullptr;
        kextracolumnsproxymodel_endinsertcolumns_callback = nullptr;
        kextracolumnsproxymodel_beginremovecolumns_callback = nullptr;
        kextracolumnsproxymodel_endremovecolumns_callback = nullptr;
        kextracolumnsproxymodel_beginmovecolumns_callback = nullptr;
        kextracolumnsproxymodel_endmovecolumns_callback = nullptr;
        kextracolumnsproxymodel_beginresetmodel_callback = nullptr;
        kextracolumnsproxymodel_endresetmodel_callback = nullptr;
        kextracolumnsproxymodel_changepersistentindex_callback = nullptr;
        kextracolumnsproxymodel_changepersistentindexlist_callback = nullptr;
        kextracolumnsproxymodel_persistentindexlist_callback = nullptr;
        kextracolumnsproxymodel_sender_callback = nullptr;
        kextracolumnsproxymodel_sendersignalindex_callback = nullptr;
        kextracolumnsproxymodel_receivers_callback = nullptr;
        kextracolumnsproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKExtraColumnsProxyModel_Metacall_Callback(KExtraColumnsProxyModel_Metacall_Callback cb) { kextracolumnsproxymodel_metacall_callback = cb; }
    inline void setKExtraColumnsProxyModel_ExtraColumnData_Callback(KExtraColumnsProxyModel_ExtraColumnData_Callback cb) { kextracolumnsproxymodel_extracolumndata_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetExtraColumnData_Callback(KExtraColumnsProxyModel_SetExtraColumnData_Callback cb) { kextracolumnsproxymodel_setextracolumndata_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetSourceModel_Callback(KExtraColumnsProxyModel_SetSourceModel_Callback cb) { kextracolumnsproxymodel_setsourcemodel_callback = cb; }
    inline void setKExtraColumnsProxyModel_MapToSource_Callback(KExtraColumnsProxyModel_MapToSource_Callback cb) { kextracolumnsproxymodel_maptosource_callback = cb; }
    inline void setKExtraColumnsProxyModel_MapSelectionToSource_Callback(KExtraColumnsProxyModel_MapSelectionToSource_Callback cb) { kextracolumnsproxymodel_mapselectiontosource_callback = cb; }
    inline void setKExtraColumnsProxyModel_ColumnCount_Callback(KExtraColumnsProxyModel_ColumnCount_Callback cb) { kextracolumnsproxymodel_columncount_callback = cb; }
    inline void setKExtraColumnsProxyModel_Data_Callback(KExtraColumnsProxyModel_Data_Callback cb) { kextracolumnsproxymodel_data_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetData_Callback(KExtraColumnsProxyModel_SetData_Callback cb) { kextracolumnsproxymodel_setdata_callback = cb; }
    inline void setKExtraColumnsProxyModel_Sibling_Callback(KExtraColumnsProxyModel_Sibling_Callback cb) { kextracolumnsproxymodel_sibling_callback = cb; }
    inline void setKExtraColumnsProxyModel_Buddy_Callback(KExtraColumnsProxyModel_Buddy_Callback cb) { kextracolumnsproxymodel_buddy_callback = cb; }
    inline void setKExtraColumnsProxyModel_Flags_Callback(KExtraColumnsProxyModel_Flags_Callback cb) { kextracolumnsproxymodel_flags_callback = cb; }
    inline void setKExtraColumnsProxyModel_HasChildren_Callback(KExtraColumnsProxyModel_HasChildren_Callback cb) { kextracolumnsproxymodel_haschildren_callback = cb; }
    inline void setKExtraColumnsProxyModel_HeaderData_Callback(KExtraColumnsProxyModel_HeaderData_Callback cb) { kextracolumnsproxymodel_headerdata_callback = cb; }
    inline void setKExtraColumnsProxyModel_Index_Callback(KExtraColumnsProxyModel_Index_Callback cb) { kextracolumnsproxymodel_index_callback = cb; }
    inline void setKExtraColumnsProxyModel_Parent_Callback(KExtraColumnsProxyModel_Parent_Callback cb) { kextracolumnsproxymodel_parent_callback = cb; }
    inline void setKExtraColumnsProxyModel_MapFromSource_Callback(KExtraColumnsProxyModel_MapFromSource_Callback cb) { kextracolumnsproxymodel_mapfromsource_callback = cb; }
    inline void setKExtraColumnsProxyModel_RowCount_Callback(KExtraColumnsProxyModel_RowCount_Callback cb) { kextracolumnsproxymodel_rowcount_callback = cb; }
    inline void setKExtraColumnsProxyModel_DropMimeData_Callback(KExtraColumnsProxyModel_DropMimeData_Callback cb) { kextracolumnsproxymodel_dropmimedata_callback = cb; }
    inline void setKExtraColumnsProxyModel_MapSelectionFromSource_Callback(KExtraColumnsProxyModel_MapSelectionFromSource_Callback cb) { kextracolumnsproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKExtraColumnsProxyModel_Match_Callback(KExtraColumnsProxyModel_Match_Callback cb) { kextracolumnsproxymodel_match_callback = cb; }
    inline void setKExtraColumnsProxyModel_InsertColumns_Callback(KExtraColumnsProxyModel_InsertColumns_Callback cb) { kextracolumnsproxymodel_insertcolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_InsertRows_Callback(KExtraColumnsProxyModel_InsertRows_Callback cb) { kextracolumnsproxymodel_insertrows_callback = cb; }
    inline void setKExtraColumnsProxyModel_RemoveColumns_Callback(KExtraColumnsProxyModel_RemoveColumns_Callback cb) { kextracolumnsproxymodel_removecolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_RemoveRows_Callback(KExtraColumnsProxyModel_RemoveRows_Callback cb) { kextracolumnsproxymodel_removerows_callback = cb; }
    inline void setKExtraColumnsProxyModel_MoveRows_Callback(KExtraColumnsProxyModel_MoveRows_Callback cb) { kextracolumnsproxymodel_moverows_callback = cb; }
    inline void setKExtraColumnsProxyModel_MoveColumns_Callback(KExtraColumnsProxyModel_MoveColumns_Callback cb) { kextracolumnsproxymodel_movecolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_Submit_Callback(KExtraColumnsProxyModel_Submit_Callback cb) { kextracolumnsproxymodel_submit_callback = cb; }
    inline void setKExtraColumnsProxyModel_Revert_Callback(KExtraColumnsProxyModel_Revert_Callback cb) { kextracolumnsproxymodel_revert_callback = cb; }
    inline void setKExtraColumnsProxyModel_ItemData_Callback(KExtraColumnsProxyModel_ItemData_Callback cb) { kextracolumnsproxymodel_itemdata_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetItemData_Callback(KExtraColumnsProxyModel_SetItemData_Callback cb) { kextracolumnsproxymodel_setitemdata_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetHeaderData_Callback(KExtraColumnsProxyModel_SetHeaderData_Callback cb) { kextracolumnsproxymodel_setheaderdata_callback = cb; }
    inline void setKExtraColumnsProxyModel_ClearItemData_Callback(KExtraColumnsProxyModel_ClearItemData_Callback cb) { kextracolumnsproxymodel_clearitemdata_callback = cb; }
    inline void setKExtraColumnsProxyModel_CanFetchMore_Callback(KExtraColumnsProxyModel_CanFetchMore_Callback cb) { kextracolumnsproxymodel_canfetchmore_callback = cb; }
    inline void setKExtraColumnsProxyModel_FetchMore_Callback(KExtraColumnsProxyModel_FetchMore_Callback cb) { kextracolumnsproxymodel_fetchmore_callback = cb; }
    inline void setKExtraColumnsProxyModel_Sort_Callback(KExtraColumnsProxyModel_Sort_Callback cb) { kextracolumnsproxymodel_sort_callback = cb; }
    inline void setKExtraColumnsProxyModel_Span_Callback(KExtraColumnsProxyModel_Span_Callback cb) { kextracolumnsproxymodel_span_callback = cb; }
    inline void setKExtraColumnsProxyModel_MimeData_Callback(KExtraColumnsProxyModel_MimeData_Callback cb) { kextracolumnsproxymodel_mimedata_callback = cb; }
    inline void setKExtraColumnsProxyModel_CanDropMimeData_Callback(KExtraColumnsProxyModel_CanDropMimeData_Callback cb) { kextracolumnsproxymodel_candropmimedata_callback = cb; }
    inline void setKExtraColumnsProxyModel_MimeTypes_Callback(KExtraColumnsProxyModel_MimeTypes_Callback cb) { kextracolumnsproxymodel_mimetypes_callback = cb; }
    inline void setKExtraColumnsProxyModel_SupportedDragActions_Callback(KExtraColumnsProxyModel_SupportedDragActions_Callback cb) { kextracolumnsproxymodel_supporteddragactions_callback = cb; }
    inline void setKExtraColumnsProxyModel_SupportedDropActions_Callback(KExtraColumnsProxyModel_SupportedDropActions_Callback cb) { kextracolumnsproxymodel_supporteddropactions_callback = cb; }
    inline void setKExtraColumnsProxyModel_RoleNames_Callback(KExtraColumnsProxyModel_RoleNames_Callback cb) { kextracolumnsproxymodel_rolenames_callback = cb; }
    inline void setKExtraColumnsProxyModel_MultiData_Callback(KExtraColumnsProxyModel_MultiData_Callback cb) { kextracolumnsproxymodel_multidata_callback = cb; }
    inline void setKExtraColumnsProxyModel_ResetInternalData_Callback(KExtraColumnsProxyModel_ResetInternalData_Callback cb) { kextracolumnsproxymodel_resetinternaldata_callback = cb; }
    inline void setKExtraColumnsProxyModel_Event_Callback(KExtraColumnsProxyModel_Event_Callback cb) { kextracolumnsproxymodel_event_callback = cb; }
    inline void setKExtraColumnsProxyModel_EventFilter_Callback(KExtraColumnsProxyModel_EventFilter_Callback cb) { kextracolumnsproxymodel_eventfilter_callback = cb; }
    inline void setKExtraColumnsProxyModel_TimerEvent_Callback(KExtraColumnsProxyModel_TimerEvent_Callback cb) { kextracolumnsproxymodel_timerevent_callback = cb; }
    inline void setKExtraColumnsProxyModel_ChildEvent_Callback(KExtraColumnsProxyModel_ChildEvent_Callback cb) { kextracolumnsproxymodel_childevent_callback = cb; }
    inline void setKExtraColumnsProxyModel_CustomEvent_Callback(KExtraColumnsProxyModel_CustomEvent_Callback cb) { kextracolumnsproxymodel_customevent_callback = cb; }
    inline void setKExtraColumnsProxyModel_ConnectNotify_Callback(KExtraColumnsProxyModel_ConnectNotify_Callback cb) { kextracolumnsproxymodel_connectnotify_callback = cb; }
    inline void setKExtraColumnsProxyModel_DisconnectNotify_Callback(KExtraColumnsProxyModel_DisconnectNotify_Callback cb) { kextracolumnsproxymodel_disconnectnotify_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetHandleSourceLayoutChanges_Callback(KExtraColumnsProxyModel_SetHandleSourceLayoutChanges_Callback cb) { kextracolumnsproxymodel_sethandlesourcelayoutchanges_callback = cb; }
    inline void setKExtraColumnsProxyModel_SetHandleSourceDataChanges_Callback(KExtraColumnsProxyModel_SetHandleSourceDataChanges_Callback cb) { kextracolumnsproxymodel_sethandlesourcedatachanges_callback = cb; }
    inline void setKExtraColumnsProxyModel_CreateSourceIndex_Callback(KExtraColumnsProxyModel_CreateSourceIndex_Callback cb) { kextracolumnsproxymodel_createsourceindex_callback = cb; }
    inline void setKExtraColumnsProxyModel_CreateIndex_Callback(KExtraColumnsProxyModel_CreateIndex_Callback cb) { kextracolumnsproxymodel_createindex_callback = cb; }
    inline void setKExtraColumnsProxyModel_EncodeData_Callback(KExtraColumnsProxyModel_EncodeData_Callback cb) { kextracolumnsproxymodel_encodedata_callback = cb; }
    inline void setKExtraColumnsProxyModel_DecodeData_Callback(KExtraColumnsProxyModel_DecodeData_Callback cb) { kextracolumnsproxymodel_decodedata_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginInsertRows_Callback(KExtraColumnsProxyModel_BeginInsertRows_Callback cb) { kextracolumnsproxymodel_begininsertrows_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndInsertRows_Callback(KExtraColumnsProxyModel_EndInsertRows_Callback cb) { kextracolumnsproxymodel_endinsertrows_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginRemoveRows_Callback(KExtraColumnsProxyModel_BeginRemoveRows_Callback cb) { kextracolumnsproxymodel_beginremoverows_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndRemoveRows_Callback(KExtraColumnsProxyModel_EndRemoveRows_Callback cb) { kextracolumnsproxymodel_endremoverows_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginMoveRows_Callback(KExtraColumnsProxyModel_BeginMoveRows_Callback cb) { kextracolumnsproxymodel_beginmoverows_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndMoveRows_Callback(KExtraColumnsProxyModel_EndMoveRows_Callback cb) { kextracolumnsproxymodel_endmoverows_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginInsertColumns_Callback(KExtraColumnsProxyModel_BeginInsertColumns_Callback cb) { kextracolumnsproxymodel_begininsertcolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndInsertColumns_Callback(KExtraColumnsProxyModel_EndInsertColumns_Callback cb) { kextracolumnsproxymodel_endinsertcolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginRemoveColumns_Callback(KExtraColumnsProxyModel_BeginRemoveColumns_Callback cb) { kextracolumnsproxymodel_beginremovecolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndRemoveColumns_Callback(KExtraColumnsProxyModel_EndRemoveColumns_Callback cb) { kextracolumnsproxymodel_endremovecolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginMoveColumns_Callback(KExtraColumnsProxyModel_BeginMoveColumns_Callback cb) { kextracolumnsproxymodel_beginmovecolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndMoveColumns_Callback(KExtraColumnsProxyModel_EndMoveColumns_Callback cb) { kextracolumnsproxymodel_endmovecolumns_callback = cb; }
    inline void setKExtraColumnsProxyModel_BeginResetModel_Callback(KExtraColumnsProxyModel_BeginResetModel_Callback cb) { kextracolumnsproxymodel_beginresetmodel_callback = cb; }
    inline void setKExtraColumnsProxyModel_EndResetModel_Callback(KExtraColumnsProxyModel_EndResetModel_Callback cb) { kextracolumnsproxymodel_endresetmodel_callback = cb; }
    inline void setKExtraColumnsProxyModel_ChangePersistentIndex_Callback(KExtraColumnsProxyModel_ChangePersistentIndex_Callback cb) { kextracolumnsproxymodel_changepersistentindex_callback = cb; }
    inline void setKExtraColumnsProxyModel_ChangePersistentIndexList_Callback(KExtraColumnsProxyModel_ChangePersistentIndexList_Callback cb) { kextracolumnsproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKExtraColumnsProxyModel_PersistentIndexList_Callback(KExtraColumnsProxyModel_PersistentIndexList_Callback cb) { kextracolumnsproxymodel_persistentindexlist_callback = cb; }
    inline void setKExtraColumnsProxyModel_Sender_Callback(KExtraColumnsProxyModel_Sender_Callback cb) { kextracolumnsproxymodel_sender_callback = cb; }
    inline void setKExtraColumnsProxyModel_SenderSignalIndex_Callback(KExtraColumnsProxyModel_SenderSignalIndex_Callback cb) { kextracolumnsproxymodel_sendersignalindex_callback = cb; }
    inline void setKExtraColumnsProxyModel_Receivers_Callback(KExtraColumnsProxyModel_Receivers_Callback cb) { kextracolumnsproxymodel_receivers_callback = cb; }
    inline void setKExtraColumnsProxyModel_IsSignalConnected_Callback(KExtraColumnsProxyModel_IsSignalConnected_Callback cb) { kextracolumnsproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKExtraColumnsProxyModel_Metacall_IsBase(bool value) const { kextracolumnsproxymodel_metacall_isbase = value; }
    inline void setKExtraColumnsProxyModel_ExtraColumnData_IsBase(bool value) const { kextracolumnsproxymodel_extracolumndata_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetExtraColumnData_IsBase(bool value) const { kextracolumnsproxymodel_setextracolumndata_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetSourceModel_IsBase(bool value) const { kextracolumnsproxymodel_setsourcemodel_isbase = value; }
    inline void setKExtraColumnsProxyModel_MapToSource_IsBase(bool value) const { kextracolumnsproxymodel_maptosource_isbase = value; }
    inline void setKExtraColumnsProxyModel_MapSelectionToSource_IsBase(bool value) const { kextracolumnsproxymodel_mapselectiontosource_isbase = value; }
    inline void setKExtraColumnsProxyModel_ColumnCount_IsBase(bool value) const { kextracolumnsproxymodel_columncount_isbase = value; }
    inline void setKExtraColumnsProxyModel_Data_IsBase(bool value) const { kextracolumnsproxymodel_data_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetData_IsBase(bool value) const { kextracolumnsproxymodel_setdata_isbase = value; }
    inline void setKExtraColumnsProxyModel_Sibling_IsBase(bool value) const { kextracolumnsproxymodel_sibling_isbase = value; }
    inline void setKExtraColumnsProxyModel_Buddy_IsBase(bool value) const { kextracolumnsproxymodel_buddy_isbase = value; }
    inline void setKExtraColumnsProxyModel_Flags_IsBase(bool value) const { kextracolumnsproxymodel_flags_isbase = value; }
    inline void setKExtraColumnsProxyModel_HasChildren_IsBase(bool value) const { kextracolumnsproxymodel_haschildren_isbase = value; }
    inline void setKExtraColumnsProxyModel_HeaderData_IsBase(bool value) const { kextracolumnsproxymodel_headerdata_isbase = value; }
    inline void setKExtraColumnsProxyModel_Index_IsBase(bool value) const { kextracolumnsproxymodel_index_isbase = value; }
    inline void setKExtraColumnsProxyModel_Parent_IsBase(bool value) const { kextracolumnsproxymodel_parent_isbase = value; }
    inline void setKExtraColumnsProxyModel_MapFromSource_IsBase(bool value) const { kextracolumnsproxymodel_mapfromsource_isbase = value; }
    inline void setKExtraColumnsProxyModel_RowCount_IsBase(bool value) const { kextracolumnsproxymodel_rowcount_isbase = value; }
    inline void setKExtraColumnsProxyModel_DropMimeData_IsBase(bool value) const { kextracolumnsproxymodel_dropmimedata_isbase = value; }
    inline void setKExtraColumnsProxyModel_MapSelectionFromSource_IsBase(bool value) const { kextracolumnsproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKExtraColumnsProxyModel_Match_IsBase(bool value) const { kextracolumnsproxymodel_match_isbase = value; }
    inline void setKExtraColumnsProxyModel_InsertColumns_IsBase(bool value) const { kextracolumnsproxymodel_insertcolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_InsertRows_IsBase(bool value) const { kextracolumnsproxymodel_insertrows_isbase = value; }
    inline void setKExtraColumnsProxyModel_RemoveColumns_IsBase(bool value) const { kextracolumnsproxymodel_removecolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_RemoveRows_IsBase(bool value) const { kextracolumnsproxymodel_removerows_isbase = value; }
    inline void setKExtraColumnsProxyModel_MoveRows_IsBase(bool value) const { kextracolumnsproxymodel_moverows_isbase = value; }
    inline void setKExtraColumnsProxyModel_MoveColumns_IsBase(bool value) const { kextracolumnsproxymodel_movecolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_Submit_IsBase(bool value) const { kextracolumnsproxymodel_submit_isbase = value; }
    inline void setKExtraColumnsProxyModel_Revert_IsBase(bool value) const { kextracolumnsproxymodel_revert_isbase = value; }
    inline void setKExtraColumnsProxyModel_ItemData_IsBase(bool value) const { kextracolumnsproxymodel_itemdata_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetItemData_IsBase(bool value) const { kextracolumnsproxymodel_setitemdata_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetHeaderData_IsBase(bool value) const { kextracolumnsproxymodel_setheaderdata_isbase = value; }
    inline void setKExtraColumnsProxyModel_ClearItemData_IsBase(bool value) const { kextracolumnsproxymodel_clearitemdata_isbase = value; }
    inline void setKExtraColumnsProxyModel_CanFetchMore_IsBase(bool value) const { kextracolumnsproxymodel_canfetchmore_isbase = value; }
    inline void setKExtraColumnsProxyModel_FetchMore_IsBase(bool value) const { kextracolumnsproxymodel_fetchmore_isbase = value; }
    inline void setKExtraColumnsProxyModel_Sort_IsBase(bool value) const { kextracolumnsproxymodel_sort_isbase = value; }
    inline void setKExtraColumnsProxyModel_Span_IsBase(bool value) const { kextracolumnsproxymodel_span_isbase = value; }
    inline void setKExtraColumnsProxyModel_MimeData_IsBase(bool value) const { kextracolumnsproxymodel_mimedata_isbase = value; }
    inline void setKExtraColumnsProxyModel_CanDropMimeData_IsBase(bool value) const { kextracolumnsproxymodel_candropmimedata_isbase = value; }
    inline void setKExtraColumnsProxyModel_MimeTypes_IsBase(bool value) const { kextracolumnsproxymodel_mimetypes_isbase = value; }
    inline void setKExtraColumnsProxyModel_SupportedDragActions_IsBase(bool value) const { kextracolumnsproxymodel_supporteddragactions_isbase = value; }
    inline void setKExtraColumnsProxyModel_SupportedDropActions_IsBase(bool value) const { kextracolumnsproxymodel_supporteddropactions_isbase = value; }
    inline void setKExtraColumnsProxyModel_RoleNames_IsBase(bool value) const { kextracolumnsproxymodel_rolenames_isbase = value; }
    inline void setKExtraColumnsProxyModel_MultiData_IsBase(bool value) const { kextracolumnsproxymodel_multidata_isbase = value; }
    inline void setKExtraColumnsProxyModel_ResetInternalData_IsBase(bool value) const { kextracolumnsproxymodel_resetinternaldata_isbase = value; }
    inline void setKExtraColumnsProxyModel_Event_IsBase(bool value) const { kextracolumnsproxymodel_event_isbase = value; }
    inline void setKExtraColumnsProxyModel_EventFilter_IsBase(bool value) const { kextracolumnsproxymodel_eventfilter_isbase = value; }
    inline void setKExtraColumnsProxyModel_TimerEvent_IsBase(bool value) const { kextracolumnsproxymodel_timerevent_isbase = value; }
    inline void setKExtraColumnsProxyModel_ChildEvent_IsBase(bool value) const { kextracolumnsproxymodel_childevent_isbase = value; }
    inline void setKExtraColumnsProxyModel_CustomEvent_IsBase(bool value) const { kextracolumnsproxymodel_customevent_isbase = value; }
    inline void setKExtraColumnsProxyModel_ConnectNotify_IsBase(bool value) const { kextracolumnsproxymodel_connectnotify_isbase = value; }
    inline void setKExtraColumnsProxyModel_DisconnectNotify_IsBase(bool value) const { kextracolumnsproxymodel_disconnectnotify_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetHandleSourceLayoutChanges_IsBase(bool value) const { kextracolumnsproxymodel_sethandlesourcelayoutchanges_isbase = value; }
    inline void setKExtraColumnsProxyModel_SetHandleSourceDataChanges_IsBase(bool value) const { kextracolumnsproxymodel_sethandlesourcedatachanges_isbase = value; }
    inline void setKExtraColumnsProxyModel_CreateSourceIndex_IsBase(bool value) const { kextracolumnsproxymodel_createsourceindex_isbase = value; }
    inline void setKExtraColumnsProxyModel_CreateIndex_IsBase(bool value) const { kextracolumnsproxymodel_createindex_isbase = value; }
    inline void setKExtraColumnsProxyModel_EncodeData_IsBase(bool value) const { kextracolumnsproxymodel_encodedata_isbase = value; }
    inline void setKExtraColumnsProxyModel_DecodeData_IsBase(bool value) const { kextracolumnsproxymodel_decodedata_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginInsertRows_IsBase(bool value) const { kextracolumnsproxymodel_begininsertrows_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndInsertRows_IsBase(bool value) const { kextracolumnsproxymodel_endinsertrows_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginRemoveRows_IsBase(bool value) const { kextracolumnsproxymodel_beginremoverows_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndRemoveRows_IsBase(bool value) const { kextracolumnsproxymodel_endremoverows_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginMoveRows_IsBase(bool value) const { kextracolumnsproxymodel_beginmoverows_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndMoveRows_IsBase(bool value) const { kextracolumnsproxymodel_endmoverows_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginInsertColumns_IsBase(bool value) const { kextracolumnsproxymodel_begininsertcolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndInsertColumns_IsBase(bool value) const { kextracolumnsproxymodel_endinsertcolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginRemoveColumns_IsBase(bool value) const { kextracolumnsproxymodel_beginremovecolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndRemoveColumns_IsBase(bool value) const { kextracolumnsproxymodel_endremovecolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginMoveColumns_IsBase(bool value) const { kextracolumnsproxymodel_beginmovecolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndMoveColumns_IsBase(bool value) const { kextracolumnsproxymodel_endmovecolumns_isbase = value; }
    inline void setKExtraColumnsProxyModel_BeginResetModel_IsBase(bool value) const { kextracolumnsproxymodel_beginresetmodel_isbase = value; }
    inline void setKExtraColumnsProxyModel_EndResetModel_IsBase(bool value) const { kextracolumnsproxymodel_endresetmodel_isbase = value; }
    inline void setKExtraColumnsProxyModel_ChangePersistentIndex_IsBase(bool value) const { kextracolumnsproxymodel_changepersistentindex_isbase = value; }
    inline void setKExtraColumnsProxyModel_ChangePersistentIndexList_IsBase(bool value) const { kextracolumnsproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKExtraColumnsProxyModel_PersistentIndexList_IsBase(bool value) const { kextracolumnsproxymodel_persistentindexlist_isbase = value; }
    inline void setKExtraColumnsProxyModel_Sender_IsBase(bool value) const { kextracolumnsproxymodel_sender_isbase = value; }
    inline void setKExtraColumnsProxyModel_SenderSignalIndex_IsBase(bool value) const { kextracolumnsproxymodel_sendersignalindex_isbase = value; }
    inline void setKExtraColumnsProxyModel_Receivers_IsBase(bool value) const { kextracolumnsproxymodel_receivers_isbase = value; }
    inline void setKExtraColumnsProxyModel_IsSignalConnected_IsBase(bool value) const { kextracolumnsproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kextracolumnsproxymodel_metacall_isbase) {
            kextracolumnsproxymodel_metacall_isbase = false;
            return KExtraColumnsProxyModel::qt_metacall(param1, param2, param3);
        } else if (kextracolumnsproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kextracolumnsproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extraColumnData(const QModelIndex& parent, int row, int extraColumn, int role) const override {
        if (kextracolumnsproxymodel_extracolumndata_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = row;
            int cbval3 = extraColumn;
            int cbval4 = role;

            QVariant* callback_ret = kextracolumnsproxymodel_extracolumndata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setExtraColumnData(const QModelIndex& parent, int row, int extraColumn, const QVariant& data, int role) override {
        if (kextracolumnsproxymodel_setextracolumndata_isbase) {
            kextracolumnsproxymodel_setextracolumndata_isbase = false;
            return KExtraColumnsProxyModel::setExtraColumnData(parent, row, extraColumn, data, role);
        } else if (kextracolumnsproxymodel_setextracolumndata_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = row;
            int cbval3 = extraColumn;
            const QVariant& data_ret = data;
            // Cast returned reference into pointer
            QVariant* cbval4 = const_cast<QVariant*>(&data_ret);
            int cbval5 = role;

            bool callback_ret = kextracolumnsproxymodel_setextracolumndata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::setExtraColumnData(parent, row, extraColumn, data, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* model) override {
        if (kextracolumnsproxymodel_setsourcemodel_isbase) {
            kextracolumnsproxymodel_setsourcemodel_isbase = false;
            KExtraColumnsProxyModel::setSourceModel(model);
        } else if (kextracolumnsproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kextracolumnsproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::setSourceModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kextracolumnsproxymodel_maptosource_isbase) {
            kextracolumnsproxymodel_maptosource_isbase = false;
            return KExtraColumnsProxyModel::mapToSource(proxyIndex);
        } else if (kextracolumnsproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = kextracolumnsproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kextracolumnsproxymodel_mapselectiontosource_isbase) {
            kextracolumnsproxymodel_mapselectiontosource_isbase = false;
            return KExtraColumnsProxyModel::mapSelectionToSource(selection);
        } else if (kextracolumnsproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kextracolumnsproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_columncount_isbase) {
            kextracolumnsproxymodel_columncount_isbase = false;
            return KExtraColumnsProxyModel::columnCount(parent);
        } else if (kextracolumnsproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kextracolumnsproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kextracolumnsproxymodel_data_isbase) {
            kextracolumnsproxymodel_data_isbase = false;
            return KExtraColumnsProxyModel::data(index, role);
        } else if (kextracolumnsproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kextracolumnsproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kextracolumnsproxymodel_setdata_isbase) {
            kextracolumnsproxymodel_setdata_isbase = false;
            return KExtraColumnsProxyModel::setData(index, value, role);
        } else if (kextracolumnsproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kextracolumnsproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kextracolumnsproxymodel_sibling_isbase) {
            kextracolumnsproxymodel_sibling_isbase = false;
            return KExtraColumnsProxyModel::sibling(row, column, idx);
        } else if (kextracolumnsproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kextracolumnsproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_buddy_isbase) {
            kextracolumnsproxymodel_buddy_isbase = false;
            return KExtraColumnsProxyModel::buddy(index);
        } else if (kextracolumnsproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kextracolumnsproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_flags_isbase) {
            kextracolumnsproxymodel_flags_isbase = false;
            return KExtraColumnsProxyModel::flags(index);
        } else if (kextracolumnsproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kextracolumnsproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_haschildren_isbase) {
            kextracolumnsproxymodel_haschildren_isbase = false;
            return KExtraColumnsProxyModel::hasChildren(index);
        } else if (kextracolumnsproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kextracolumnsproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::hasChildren(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kextracolumnsproxymodel_headerdata_isbase) {
            kextracolumnsproxymodel_headerdata_isbase = false;
            return KExtraColumnsProxyModel::headerData(section, orientation, role);
        } else if (kextracolumnsproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kextracolumnsproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_index_isbase) {
            kextracolumnsproxymodel_index_isbase = false;
            return KExtraColumnsProxyModel::index(row, column, parent);
        } else if (kextracolumnsproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kextracolumnsproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kextracolumnsproxymodel_parent_isbase) {
            kextracolumnsproxymodel_parent_isbase = false;
            return KExtraColumnsProxyModel::parent(child);
        } else if (kextracolumnsproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = kextracolumnsproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kextracolumnsproxymodel_mapfromsource_isbase) {
            kextracolumnsproxymodel_mapfromsource_isbase = false;
            return KExtraColumnsProxyModel::mapFromSource(sourceIndex);
        } else if (kextracolumnsproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = kextracolumnsproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_rowcount_isbase) {
            kextracolumnsproxymodel_rowcount_isbase = false;
            return KExtraColumnsProxyModel::rowCount(parent);
        } else if (kextracolumnsproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kextracolumnsproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_dropmimedata_isbase) {
            kextracolumnsproxymodel_dropmimedata_isbase = false;
            return KExtraColumnsProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (kextracolumnsproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kextracolumnsproxymodel_mapselectionfromsource_isbase) {
            kextracolumnsproxymodel_mapselectionfromsource_isbase = false;
            return KExtraColumnsProxyModel::mapSelectionFromSource(selection);
        } else if (kextracolumnsproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kextracolumnsproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kextracolumnsproxymodel_match_isbase) {
            kextracolumnsproxymodel_match_isbase = false;
            return KExtraColumnsProxyModel::match(start, role, value, hits, flags);
        } else if (kextracolumnsproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kextracolumnsproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KExtraColumnsProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_insertcolumns_isbase) {
            kextracolumnsproxymodel_insertcolumns_isbase = false;
            return KExtraColumnsProxyModel::insertColumns(column, count, parent);
        } else if (kextracolumnsproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_insertrows_isbase) {
            kextracolumnsproxymodel_insertrows_isbase = false;
            return KExtraColumnsProxyModel::insertRows(row, count, parent);
        } else if (kextracolumnsproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_removecolumns_isbase) {
            kextracolumnsproxymodel_removecolumns_isbase = false;
            return KExtraColumnsProxyModel::removeColumns(column, count, parent);
        } else if (kextracolumnsproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_removerows_isbase) {
            kextracolumnsproxymodel_removerows_isbase = false;
            return KExtraColumnsProxyModel::removeRows(row, count, parent);
        } else if (kextracolumnsproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kextracolumnsproxymodel_moverows_isbase) {
            kextracolumnsproxymodel_moverows_isbase = false;
            return KExtraColumnsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kextracolumnsproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kextracolumnsproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kextracolumnsproxymodel_movecolumns_isbase) {
            kextracolumnsproxymodel_movecolumns_isbase = false;
            return KExtraColumnsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kextracolumnsproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kextracolumnsproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kextracolumnsproxymodel_submit_isbase) {
            kextracolumnsproxymodel_submit_isbase = false;
            return KExtraColumnsProxyModel::submit();
        } else if (kextracolumnsproxymodel_submit_callback != nullptr) {
            bool callback_ret = kextracolumnsproxymodel_submit_callback();
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kextracolumnsproxymodel_revert_isbase) {
            kextracolumnsproxymodel_revert_isbase = false;
            KExtraColumnsProxyModel::revert();
        } else if (kextracolumnsproxymodel_revert_callback != nullptr) {
            kextracolumnsproxymodel_revert_callback();
        } else {
            KExtraColumnsProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_itemdata_isbase) {
            kextracolumnsproxymodel_itemdata_isbase = false;
            return KExtraColumnsProxyModel::itemData(index);
        } else if (kextracolumnsproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kextracolumnsproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KExtraColumnsProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kextracolumnsproxymodel_setitemdata_isbase) {
            kextracolumnsproxymodel_setitemdata_isbase = false;
            return KExtraColumnsProxyModel::setItemData(index, roles);
        } else if (kextracolumnsproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kextracolumnsproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kextracolumnsproxymodel_setheaderdata_isbase) {
            kextracolumnsproxymodel_setheaderdata_isbase = false;
            return KExtraColumnsProxyModel::setHeaderData(section, orientation, value, role);
        } else if (kextracolumnsproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kextracolumnsproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kextracolumnsproxymodel_clearitemdata_isbase) {
            kextracolumnsproxymodel_clearitemdata_isbase = false;
            return KExtraColumnsProxyModel::clearItemData(index);
        } else if (kextracolumnsproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kextracolumnsproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_canfetchmore_isbase) {
            kextracolumnsproxymodel_canfetchmore_isbase = false;
            return KExtraColumnsProxyModel::canFetchMore(parent);
        } else if (kextracolumnsproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_fetchmore_isbase) {
            kextracolumnsproxymodel_fetchmore_isbase = false;
            KExtraColumnsProxyModel::fetchMore(parent);
        } else if (kextracolumnsproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kextracolumnsproxymodel_fetchmore_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kextracolumnsproxymodel_sort_isbase) {
            kextracolumnsproxymodel_sort_isbase = false;
            KExtraColumnsProxyModel::sort(column, order);
        } else if (kextracolumnsproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kextracolumnsproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            KExtraColumnsProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_span_isbase) {
            kextracolumnsproxymodel_span_isbase = false;
            return KExtraColumnsProxyModel::span(index);
        } else if (kextracolumnsproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kextracolumnsproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kextracolumnsproxymodel_mimedata_isbase) {
            kextracolumnsproxymodel_mimedata_isbase = false;
            return KExtraColumnsProxyModel::mimeData(indexes);
        } else if (kextracolumnsproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kextracolumnsproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_candropmimedata_isbase) {
            kextracolumnsproxymodel_candropmimedata_isbase = false;
            return KExtraColumnsProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (kextracolumnsproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kextracolumnsproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kextracolumnsproxymodel_mimetypes_isbase) {
            kextracolumnsproxymodel_mimetypes_isbase = false;
            return KExtraColumnsProxyModel::mimeTypes();
        } else if (kextracolumnsproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kextracolumnsproxymodel_mimetypes_callback();
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
            return KExtraColumnsProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kextracolumnsproxymodel_supporteddragactions_isbase) {
            kextracolumnsproxymodel_supporteddragactions_isbase = false;
            return KExtraColumnsProxyModel::supportedDragActions();
        } else if (kextracolumnsproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kextracolumnsproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kextracolumnsproxymodel_supporteddropactions_isbase) {
            kextracolumnsproxymodel_supporteddropactions_isbase = false;
            return KExtraColumnsProxyModel::supportedDropActions();
        } else if (kextracolumnsproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kextracolumnsproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kextracolumnsproxymodel_rolenames_isbase) {
            kextracolumnsproxymodel_rolenames_isbase = false;
            return KExtraColumnsProxyModel::roleNames();
        } else if (kextracolumnsproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kextracolumnsproxymodel_rolenames_callback();
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
            return KExtraColumnsProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kextracolumnsproxymodel_multidata_isbase) {
            kextracolumnsproxymodel_multidata_isbase = false;
            KExtraColumnsProxyModel::multiData(index, roleDataSpan);
        } else if (kextracolumnsproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kextracolumnsproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KExtraColumnsProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kextracolumnsproxymodel_resetinternaldata_isbase) {
            kextracolumnsproxymodel_resetinternaldata_isbase = false;
            KExtraColumnsProxyModel::resetInternalData();
        } else if (kextracolumnsproxymodel_resetinternaldata_callback != nullptr) {
            kextracolumnsproxymodel_resetinternaldata_callback();
        } else {
            KExtraColumnsProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kextracolumnsproxymodel_event_isbase) {
            kextracolumnsproxymodel_event_isbase = false;
            return KExtraColumnsProxyModel::event(event);
        } else if (kextracolumnsproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kextracolumnsproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kextracolumnsproxymodel_eventfilter_isbase) {
            kextracolumnsproxymodel_eventfilter_isbase = false;
            return KExtraColumnsProxyModel::eventFilter(watched, event);
        } else if (kextracolumnsproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kextracolumnsproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kextracolumnsproxymodel_timerevent_isbase) {
            kextracolumnsproxymodel_timerevent_isbase = false;
            KExtraColumnsProxyModel::timerEvent(event);
        } else if (kextracolumnsproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kextracolumnsproxymodel_timerevent_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kextracolumnsproxymodel_childevent_isbase) {
            kextracolumnsproxymodel_childevent_isbase = false;
            KExtraColumnsProxyModel::childEvent(event);
        } else if (kextracolumnsproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kextracolumnsproxymodel_childevent_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kextracolumnsproxymodel_customevent_isbase) {
            kextracolumnsproxymodel_customevent_isbase = false;
            KExtraColumnsProxyModel::customEvent(event);
        } else if (kextracolumnsproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kextracolumnsproxymodel_customevent_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kextracolumnsproxymodel_connectnotify_isbase) {
            kextracolumnsproxymodel_connectnotify_isbase = false;
            KExtraColumnsProxyModel::connectNotify(signal);
        } else if (kextracolumnsproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kextracolumnsproxymodel_connectnotify_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kextracolumnsproxymodel_disconnectnotify_isbase) {
            kextracolumnsproxymodel_disconnectnotify_isbase = false;
            KExtraColumnsProxyModel::disconnectNotify(signal);
        } else if (kextracolumnsproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kextracolumnsproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceLayoutChanges(bool handleSourceLayoutChanges) {
        if (kextracolumnsproxymodel_sethandlesourcelayoutchanges_isbase) {
            kextracolumnsproxymodel_sethandlesourcelayoutchanges_isbase = false;
            KExtraColumnsProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        } else if (kextracolumnsproxymodel_sethandlesourcelayoutchanges_callback != nullptr) {
            bool cbval1 = handleSourceLayoutChanges;

            kextracolumnsproxymodel_sethandlesourcelayoutchanges_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceDataChanges(bool handleSourceDataChanges) {
        if (kextracolumnsproxymodel_sethandlesourcedatachanges_isbase) {
            kextracolumnsproxymodel_sethandlesourcedatachanges_isbase = false;
            KExtraColumnsProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        } else if (kextracolumnsproxymodel_sethandlesourcedatachanges_callback != nullptr) {
            bool cbval1 = handleSourceDataChanges;

            kextracolumnsproxymodel_sethandlesourcedatachanges_callback(this, cbval1);
        } else {
            KExtraColumnsProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (kextracolumnsproxymodel_createsourceindex_isbase) {
            kextracolumnsproxymodel_createsourceindex_isbase = false;
            return KExtraColumnsProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (kextracolumnsproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = kextracolumnsproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kextracolumnsproxymodel_createindex_isbase) {
            kextracolumnsproxymodel_createindex_isbase = false;
            return KExtraColumnsProxyModel::createIndex(row, column);
        } else if (kextracolumnsproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kextracolumnsproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KExtraColumnsProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kextracolumnsproxymodel_encodedata_isbase) {
            kextracolumnsproxymodel_encodedata_isbase = false;
            KExtraColumnsProxyModel::encodeData(indexes, stream);
        } else if (kextracolumnsproxymodel_encodedata_callback != nullptr) {
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

            kextracolumnsproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KExtraColumnsProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kextracolumnsproxymodel_decodedata_isbase) {
            kextracolumnsproxymodel_decodedata_isbase = false;
            return KExtraColumnsProxyModel::decodeData(row, column, parent, stream);
        } else if (kextracolumnsproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kextracolumnsproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kextracolumnsproxymodel_begininsertrows_isbase) {
            kextracolumnsproxymodel_begininsertrows_isbase = false;
            KExtraColumnsProxyModel::beginInsertRows(parent, first, last);
        } else if (kextracolumnsproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kextracolumnsproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KExtraColumnsProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kextracolumnsproxymodel_endinsertrows_isbase) {
            kextracolumnsproxymodel_endinsertrows_isbase = false;
            KExtraColumnsProxyModel::endInsertRows();
        } else if (kextracolumnsproxymodel_endinsertrows_callback != nullptr) {
            kextracolumnsproxymodel_endinsertrows_callback();
        } else {
            KExtraColumnsProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kextracolumnsproxymodel_beginremoverows_isbase) {
            kextracolumnsproxymodel_beginremoverows_isbase = false;
            KExtraColumnsProxyModel::beginRemoveRows(parent, first, last);
        } else if (kextracolumnsproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kextracolumnsproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KExtraColumnsProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kextracolumnsproxymodel_endremoverows_isbase) {
            kextracolumnsproxymodel_endremoverows_isbase = false;
            KExtraColumnsProxyModel::endRemoveRows();
        } else if (kextracolumnsproxymodel_endremoverows_callback != nullptr) {
            kextracolumnsproxymodel_endremoverows_callback();
        } else {
            KExtraColumnsProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kextracolumnsproxymodel_beginmoverows_isbase) {
            kextracolumnsproxymodel_beginmoverows_isbase = false;
            return KExtraColumnsProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kextracolumnsproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kextracolumnsproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kextracolumnsproxymodel_endmoverows_isbase) {
            kextracolumnsproxymodel_endmoverows_isbase = false;
            KExtraColumnsProxyModel::endMoveRows();
        } else if (kextracolumnsproxymodel_endmoverows_callback != nullptr) {
            kextracolumnsproxymodel_endmoverows_callback();
        } else {
            KExtraColumnsProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kextracolumnsproxymodel_begininsertcolumns_isbase) {
            kextracolumnsproxymodel_begininsertcolumns_isbase = false;
            KExtraColumnsProxyModel::beginInsertColumns(parent, first, last);
        } else if (kextracolumnsproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kextracolumnsproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KExtraColumnsProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kextracolumnsproxymodel_endinsertcolumns_isbase) {
            kextracolumnsproxymodel_endinsertcolumns_isbase = false;
            KExtraColumnsProxyModel::endInsertColumns();
        } else if (kextracolumnsproxymodel_endinsertcolumns_callback != nullptr) {
            kextracolumnsproxymodel_endinsertcolumns_callback();
        } else {
            KExtraColumnsProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kextracolumnsproxymodel_beginremovecolumns_isbase) {
            kextracolumnsproxymodel_beginremovecolumns_isbase = false;
            KExtraColumnsProxyModel::beginRemoveColumns(parent, first, last);
        } else if (kextracolumnsproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kextracolumnsproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KExtraColumnsProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kextracolumnsproxymodel_endremovecolumns_isbase) {
            kextracolumnsproxymodel_endremovecolumns_isbase = false;
            KExtraColumnsProxyModel::endRemoveColumns();
        } else if (kextracolumnsproxymodel_endremovecolumns_callback != nullptr) {
            kextracolumnsproxymodel_endremovecolumns_callback();
        } else {
            KExtraColumnsProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kextracolumnsproxymodel_beginmovecolumns_isbase) {
            kextracolumnsproxymodel_beginmovecolumns_isbase = false;
            return KExtraColumnsProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kextracolumnsproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kextracolumnsproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kextracolumnsproxymodel_endmovecolumns_isbase) {
            kextracolumnsproxymodel_endmovecolumns_isbase = false;
            KExtraColumnsProxyModel::endMoveColumns();
        } else if (kextracolumnsproxymodel_endmovecolumns_callback != nullptr) {
            kextracolumnsproxymodel_endmovecolumns_callback();
        } else {
            KExtraColumnsProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kextracolumnsproxymodel_beginresetmodel_isbase) {
            kextracolumnsproxymodel_beginresetmodel_isbase = false;
            KExtraColumnsProxyModel::beginResetModel();
        } else if (kextracolumnsproxymodel_beginresetmodel_callback != nullptr) {
            kextracolumnsproxymodel_beginresetmodel_callback();
        } else {
            KExtraColumnsProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kextracolumnsproxymodel_endresetmodel_isbase) {
            kextracolumnsproxymodel_endresetmodel_isbase = false;
            KExtraColumnsProxyModel::endResetModel();
        } else if (kextracolumnsproxymodel_endresetmodel_callback != nullptr) {
            kextracolumnsproxymodel_endresetmodel_callback();
        } else {
            KExtraColumnsProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kextracolumnsproxymodel_changepersistentindex_isbase) {
            kextracolumnsproxymodel_changepersistentindex_isbase = false;
            KExtraColumnsProxyModel::changePersistentIndex(from, to);
        } else if (kextracolumnsproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kextracolumnsproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KExtraColumnsProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kextracolumnsproxymodel_changepersistentindexlist_isbase) {
            kextracolumnsproxymodel_changepersistentindexlist_isbase = false;
            KExtraColumnsProxyModel::changePersistentIndexList(from, to);
        } else if (kextracolumnsproxymodel_changepersistentindexlist_callback != nullptr) {
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

            kextracolumnsproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KExtraColumnsProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kextracolumnsproxymodel_persistentindexlist_isbase) {
            kextracolumnsproxymodel_persistentindexlist_isbase = false;
            return KExtraColumnsProxyModel::persistentIndexList();
        } else if (kextracolumnsproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kextracolumnsproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KExtraColumnsProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kextracolumnsproxymodel_sender_isbase) {
            kextracolumnsproxymodel_sender_isbase = false;
            return KExtraColumnsProxyModel::sender();
        } else if (kextracolumnsproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = kextracolumnsproxymodel_sender_callback();
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kextracolumnsproxymodel_sendersignalindex_isbase) {
            kextracolumnsproxymodel_sendersignalindex_isbase = false;
            return KExtraColumnsProxyModel::senderSignalIndex();
        } else if (kextracolumnsproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kextracolumnsproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kextracolumnsproxymodel_receivers_isbase) {
            kextracolumnsproxymodel_receivers_isbase = false;
            return KExtraColumnsProxyModel::receivers(signal);
        } else if (kextracolumnsproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kextracolumnsproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KExtraColumnsProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kextracolumnsproxymodel_issignalconnected_isbase) {
            kextracolumnsproxymodel_issignalconnected_isbase = false;
            return KExtraColumnsProxyModel::isSignalConnected(signal);
        } else if (kextracolumnsproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kextracolumnsproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KExtraColumnsProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KExtraColumnsProxyModel_ResetInternalData(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseResetInternalData(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_TimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event);
    friend void KExtraColumnsProxyModel_QBaseTimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event);
    friend void KExtraColumnsProxyModel_ChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event);
    friend void KExtraColumnsProxyModel_QBaseChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event);
    friend void KExtraColumnsProxyModel_CustomEvent(KExtraColumnsProxyModel* self, QEvent* event);
    friend void KExtraColumnsProxyModel_QBaseCustomEvent(KExtraColumnsProxyModel* self, QEvent* event);
    friend void KExtraColumnsProxyModel_ConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KExtraColumnsProxyModel_QBaseConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KExtraColumnsProxyModel_DisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KExtraColumnsProxyModel_QBaseDisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KExtraColumnsProxyModel_SetHandleSourceLayoutChanges(KExtraColumnsProxyModel* self, bool handleSourceLayoutChanges);
    friend void KExtraColumnsProxyModel_QBaseSetHandleSourceLayoutChanges(KExtraColumnsProxyModel* self, bool handleSourceLayoutChanges);
    friend void KExtraColumnsProxyModel_SetHandleSourceDataChanges(KExtraColumnsProxyModel* self, bool handleSourceDataChanges);
    friend void KExtraColumnsProxyModel_QBaseSetHandleSourceDataChanges(KExtraColumnsProxyModel* self, bool handleSourceDataChanges);
    friend QModelIndex* KExtraColumnsProxyModel_CreateSourceIndex(const KExtraColumnsProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KExtraColumnsProxyModel_QBaseCreateSourceIndex(const KExtraColumnsProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KExtraColumnsProxyModel_CreateIndex(const KExtraColumnsProxyModel* self, int row, int column);
    friend QModelIndex* KExtraColumnsProxyModel_QBaseCreateIndex(const KExtraColumnsProxyModel* self, int row, int column);
    friend void KExtraColumnsProxyModel_EncodeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KExtraColumnsProxyModel_QBaseEncodeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KExtraColumnsProxyModel_DecodeData(KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KExtraColumnsProxyModel_QBaseDecodeData(KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KExtraColumnsProxyModel_BeginInsertRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_QBaseBeginInsertRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_EndInsertRows(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndInsertRows(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_BeginRemoveRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_QBaseBeginRemoveRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_EndRemoveRows(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndRemoveRows(KExtraColumnsProxyModel* self);
    friend bool KExtraColumnsProxyModel_BeginMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KExtraColumnsProxyModel_QBaseBeginMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KExtraColumnsProxyModel_EndMoveRows(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndMoveRows(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_BeginInsertColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_QBaseBeginInsertColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_EndInsertColumns(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndInsertColumns(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_BeginRemoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_QBaseBeginRemoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KExtraColumnsProxyModel_EndRemoveColumns(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndRemoveColumns(KExtraColumnsProxyModel* self);
    friend bool KExtraColumnsProxyModel_BeginMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KExtraColumnsProxyModel_QBaseBeginMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KExtraColumnsProxyModel_EndMoveColumns(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndMoveColumns(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_BeginResetModel(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseBeginResetModel(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_EndResetModel(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_QBaseEndResetModel(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_ChangePersistentIndex(KExtraColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KExtraColumnsProxyModel_QBaseChangePersistentIndex(KExtraColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KExtraColumnsProxyModel_ChangePersistentIndexList(KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KExtraColumnsProxyModel_QBaseChangePersistentIndexList(KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_PersistentIndexList(const KExtraColumnsProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_QBasePersistentIndexList(const KExtraColumnsProxyModel* self);
    friend QObject* KExtraColumnsProxyModel_Sender(const KExtraColumnsProxyModel* self);
    friend QObject* KExtraColumnsProxyModel_QBaseSender(const KExtraColumnsProxyModel* self);
    friend int KExtraColumnsProxyModel_SenderSignalIndex(const KExtraColumnsProxyModel* self);
    friend int KExtraColumnsProxyModel_QBaseSenderSignalIndex(const KExtraColumnsProxyModel* self);
    friend int KExtraColumnsProxyModel_Receivers(const KExtraColumnsProxyModel* self, const char* signal);
    friend int KExtraColumnsProxyModel_QBaseReceivers(const KExtraColumnsProxyModel* self, const char* signal);
    friend bool KExtraColumnsProxyModel_IsSignalConnected(const KExtraColumnsProxyModel* self, const QMetaMethod* signal);
    friend bool KExtraColumnsProxyModel_QBaseIsSignalConnected(const KExtraColumnsProxyModel* self, const QMetaMethod* signal);
};

#endif
