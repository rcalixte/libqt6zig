#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKDESCENDANTSPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKDESCENDANTSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDescendantsProxyModel so that we can call protected methods
class VirtualKDescendantsProxyModel final : public KDescendantsProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKDescendantsProxyModel = true;

    // Virtual class public types (including callbacks)
    using KDescendantsProxyModel_Metacall_Callback = int (*)(KDescendantsProxyModel*, int, int, void**);
    using KDescendantsProxyModel_SetSourceModel_Callback = void (*)(KDescendantsProxyModel*, QAbstractItemModel*);
    using KDescendantsProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_MapToSource_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Flags_Callback = int (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Data_Callback = QVariant* (*)(const KDescendantsProxyModel*, QModelIndex*, int);
    using KDescendantsProxyModel_RowCount_Callback = int (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_HeaderData_Callback = QVariant* (*)(const KDescendantsProxyModel*, int, int, int);
    using KDescendantsProxyModel_MimeData_Callback = QMimeData* (*)(const KDescendantsProxyModel*, libqt_list /* of QModelIndex* */);
    using KDescendantsProxyModel_MimeTypes_Callback = const char** (*)();
    using KDescendantsProxyModel_HasChildren_Callback = bool (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Index_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_Parent_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_ColumnCount_Callback = int (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KDescendantsProxyModel_SupportedDropActions_Callback = int (*)();
    using KDescendantsProxyModel_Match_Callback = QModelIndex** (*)(const KDescendantsProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KDescendantsProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KDescendantsProxyModel*, QItemSelection*);
    using KDescendantsProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KDescendantsProxyModel*, QItemSelection*);
    using KDescendantsProxyModel_Submit_Callback = bool (*)();
    using KDescendantsProxyModel_Revert_Callback = void (*)();
    using KDescendantsProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_SetData_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, QVariant*, int);
    using KDescendantsProxyModel_SetItemData_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KDescendantsProxyModel_SetHeaderData_Callback = bool (*)(KDescendantsProxyModel*, int, int, QVariant*, int);
    using KDescendantsProxyModel_ClearItemData_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Buddy_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_CanFetchMore_Callback = bool (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_FetchMore_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Sort_Callback = void (*)(KDescendantsProxyModel*, int, int);
    using KDescendantsProxyModel_Span_Callback = QSize* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Sibling_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_CanDropMimeData_Callback = bool (*)(const KDescendantsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDescendantsProxyModel_DropMimeData_Callback = bool (*)(KDescendantsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDescendantsProxyModel_SupportedDragActions_Callback = int (*)();
    using KDescendantsProxyModel_InsertRows_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_InsertColumns_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_RemoveRows_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_RemoveColumns_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_MoveRows_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDescendantsProxyModel_MoveColumns_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDescendantsProxyModel_MultiData_Callback = void (*)(const KDescendantsProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KDescendantsProxyModel_ResetInternalData_Callback = void (*)();
    using KDescendantsProxyModel_Event_Callback = bool (*)(KDescendantsProxyModel*, QEvent*);
    using KDescendantsProxyModel_EventFilter_Callback = bool (*)(KDescendantsProxyModel*, QObject*, QEvent*);
    using KDescendantsProxyModel_TimerEvent_Callback = void (*)(KDescendantsProxyModel*, QTimerEvent*);
    using KDescendantsProxyModel_ChildEvent_Callback = void (*)(KDescendantsProxyModel*, QChildEvent*);
    using KDescendantsProxyModel_CustomEvent_Callback = void (*)(KDescendantsProxyModel*, QEvent*);
    using KDescendantsProxyModel_ConnectNotify_Callback = void (*)(KDescendantsProxyModel*, QMetaMethod*);
    using KDescendantsProxyModel_DisconnectNotify_Callback = void (*)(KDescendantsProxyModel*, QMetaMethod*);
    using KDescendantsProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, int, int, void*);
    using KDescendantsProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, int, int);
    using KDescendantsProxyModel_EncodeData_Callback = void (*)(const KDescendantsProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KDescendantsProxyModel_DecodeData_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KDescendantsProxyModel_BeginInsertRows_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*, int, int);
    using KDescendantsProxyModel_EndInsertRows_Callback = void (*)();
    using KDescendantsProxyModel_BeginRemoveRows_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*, int, int);
    using KDescendantsProxyModel_EndRemoveRows_Callback = void (*)();
    using KDescendantsProxyModel_BeginMoveRows_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDescendantsProxyModel_EndMoveRows_Callback = void (*)();
    using KDescendantsProxyModel_BeginInsertColumns_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*, int, int);
    using KDescendantsProxyModel_EndInsertColumns_Callback = void (*)();
    using KDescendantsProxyModel_BeginRemoveColumns_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*, int, int);
    using KDescendantsProxyModel_EndRemoveColumns_Callback = void (*)();
    using KDescendantsProxyModel_BeginMoveColumns_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDescendantsProxyModel_EndMoveColumns_Callback = void (*)();
    using KDescendantsProxyModel_BeginResetModel_Callback = void (*)();
    using KDescendantsProxyModel_EndResetModel_Callback = void (*)();
    using KDescendantsProxyModel_ChangePersistentIndex_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*, QModelIndex*);
    using KDescendantsProxyModel_ChangePersistentIndexList_Callback = void (*)(KDescendantsProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KDescendantsProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KDescendantsProxyModel_Sender_Callback = QObject* (*)();
    using KDescendantsProxyModel_SenderSignalIndex_Callback = int (*)();
    using KDescendantsProxyModel_Receivers_Callback = int (*)(const KDescendantsProxyModel*, const char*);
    using KDescendantsProxyModel_IsSignalConnected_Callback = bool (*)(const KDescendantsProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDescendantsProxyModel_Metacall_Callback kdescendantsproxymodel_metacall_callback = nullptr;
    KDescendantsProxyModel_SetSourceModel_Callback kdescendantsproxymodel_setsourcemodel_callback = nullptr;
    KDescendantsProxyModel_MapFromSource_Callback kdescendantsproxymodel_mapfromsource_callback = nullptr;
    KDescendantsProxyModel_MapToSource_Callback kdescendantsproxymodel_maptosource_callback = nullptr;
    KDescendantsProxyModel_Flags_Callback kdescendantsproxymodel_flags_callback = nullptr;
    KDescendantsProxyModel_Data_Callback kdescendantsproxymodel_data_callback = nullptr;
    KDescendantsProxyModel_RowCount_Callback kdescendantsproxymodel_rowcount_callback = nullptr;
    KDescendantsProxyModel_HeaderData_Callback kdescendantsproxymodel_headerdata_callback = nullptr;
    KDescendantsProxyModel_MimeData_Callback kdescendantsproxymodel_mimedata_callback = nullptr;
    KDescendantsProxyModel_MimeTypes_Callback kdescendantsproxymodel_mimetypes_callback = nullptr;
    KDescendantsProxyModel_HasChildren_Callback kdescendantsproxymodel_haschildren_callback = nullptr;
    KDescendantsProxyModel_Index_Callback kdescendantsproxymodel_index_callback = nullptr;
    KDescendantsProxyModel_Parent_Callback kdescendantsproxymodel_parent_callback = nullptr;
    KDescendantsProxyModel_ColumnCount_Callback kdescendantsproxymodel_columncount_callback = nullptr;
    KDescendantsProxyModel_RoleNames_Callback kdescendantsproxymodel_rolenames_callback = nullptr;
    KDescendantsProxyModel_SupportedDropActions_Callback kdescendantsproxymodel_supporteddropactions_callback = nullptr;
    KDescendantsProxyModel_Match_Callback kdescendantsproxymodel_match_callback = nullptr;
    KDescendantsProxyModel_MapSelectionToSource_Callback kdescendantsproxymodel_mapselectiontosource_callback = nullptr;
    KDescendantsProxyModel_MapSelectionFromSource_Callback kdescendantsproxymodel_mapselectionfromsource_callback = nullptr;
    KDescendantsProxyModel_Submit_Callback kdescendantsproxymodel_submit_callback = nullptr;
    KDescendantsProxyModel_Revert_Callback kdescendantsproxymodel_revert_callback = nullptr;
    KDescendantsProxyModel_ItemData_Callback kdescendantsproxymodel_itemdata_callback = nullptr;
    KDescendantsProxyModel_SetData_Callback kdescendantsproxymodel_setdata_callback = nullptr;
    KDescendantsProxyModel_SetItemData_Callback kdescendantsproxymodel_setitemdata_callback = nullptr;
    KDescendantsProxyModel_SetHeaderData_Callback kdescendantsproxymodel_setheaderdata_callback = nullptr;
    KDescendantsProxyModel_ClearItemData_Callback kdescendantsproxymodel_clearitemdata_callback = nullptr;
    KDescendantsProxyModel_Buddy_Callback kdescendantsproxymodel_buddy_callback = nullptr;
    KDescendantsProxyModel_CanFetchMore_Callback kdescendantsproxymodel_canfetchmore_callback = nullptr;
    KDescendantsProxyModel_FetchMore_Callback kdescendantsproxymodel_fetchmore_callback = nullptr;
    KDescendantsProxyModel_Sort_Callback kdescendantsproxymodel_sort_callback = nullptr;
    KDescendantsProxyModel_Span_Callback kdescendantsproxymodel_span_callback = nullptr;
    KDescendantsProxyModel_Sibling_Callback kdescendantsproxymodel_sibling_callback = nullptr;
    KDescendantsProxyModel_CanDropMimeData_Callback kdescendantsproxymodel_candropmimedata_callback = nullptr;
    KDescendantsProxyModel_DropMimeData_Callback kdescendantsproxymodel_dropmimedata_callback = nullptr;
    KDescendantsProxyModel_SupportedDragActions_Callback kdescendantsproxymodel_supporteddragactions_callback = nullptr;
    KDescendantsProxyModel_InsertRows_Callback kdescendantsproxymodel_insertrows_callback = nullptr;
    KDescendantsProxyModel_InsertColumns_Callback kdescendantsproxymodel_insertcolumns_callback = nullptr;
    KDescendantsProxyModel_RemoveRows_Callback kdescendantsproxymodel_removerows_callback = nullptr;
    KDescendantsProxyModel_RemoveColumns_Callback kdescendantsproxymodel_removecolumns_callback = nullptr;
    KDescendantsProxyModel_MoveRows_Callback kdescendantsproxymodel_moverows_callback = nullptr;
    KDescendantsProxyModel_MoveColumns_Callback kdescendantsproxymodel_movecolumns_callback = nullptr;
    KDescendantsProxyModel_MultiData_Callback kdescendantsproxymodel_multidata_callback = nullptr;
    KDescendantsProxyModel_ResetInternalData_Callback kdescendantsproxymodel_resetinternaldata_callback = nullptr;
    KDescendantsProxyModel_Event_Callback kdescendantsproxymodel_event_callback = nullptr;
    KDescendantsProxyModel_EventFilter_Callback kdescendantsproxymodel_eventfilter_callback = nullptr;
    KDescendantsProxyModel_TimerEvent_Callback kdescendantsproxymodel_timerevent_callback = nullptr;
    KDescendantsProxyModel_ChildEvent_Callback kdescendantsproxymodel_childevent_callback = nullptr;
    KDescendantsProxyModel_CustomEvent_Callback kdescendantsproxymodel_customevent_callback = nullptr;
    KDescendantsProxyModel_ConnectNotify_Callback kdescendantsproxymodel_connectnotify_callback = nullptr;
    KDescendantsProxyModel_DisconnectNotify_Callback kdescendantsproxymodel_disconnectnotify_callback = nullptr;
    KDescendantsProxyModel_CreateSourceIndex_Callback kdescendantsproxymodel_createsourceindex_callback = nullptr;
    KDescendantsProxyModel_CreateIndex_Callback kdescendantsproxymodel_createindex_callback = nullptr;
    KDescendantsProxyModel_EncodeData_Callback kdescendantsproxymodel_encodedata_callback = nullptr;
    KDescendantsProxyModel_DecodeData_Callback kdescendantsproxymodel_decodedata_callback = nullptr;
    KDescendantsProxyModel_BeginInsertRows_Callback kdescendantsproxymodel_begininsertrows_callback = nullptr;
    KDescendantsProxyModel_EndInsertRows_Callback kdescendantsproxymodel_endinsertrows_callback = nullptr;
    KDescendantsProxyModel_BeginRemoveRows_Callback kdescendantsproxymodel_beginremoverows_callback = nullptr;
    KDescendantsProxyModel_EndRemoveRows_Callback kdescendantsproxymodel_endremoverows_callback = nullptr;
    KDescendantsProxyModel_BeginMoveRows_Callback kdescendantsproxymodel_beginmoverows_callback = nullptr;
    KDescendantsProxyModel_EndMoveRows_Callback kdescendantsproxymodel_endmoverows_callback = nullptr;
    KDescendantsProxyModel_BeginInsertColumns_Callback kdescendantsproxymodel_begininsertcolumns_callback = nullptr;
    KDescendantsProxyModel_EndInsertColumns_Callback kdescendantsproxymodel_endinsertcolumns_callback = nullptr;
    KDescendantsProxyModel_BeginRemoveColumns_Callback kdescendantsproxymodel_beginremovecolumns_callback = nullptr;
    KDescendantsProxyModel_EndRemoveColumns_Callback kdescendantsproxymodel_endremovecolumns_callback = nullptr;
    KDescendantsProxyModel_BeginMoveColumns_Callback kdescendantsproxymodel_beginmovecolumns_callback = nullptr;
    KDescendantsProxyModel_EndMoveColumns_Callback kdescendantsproxymodel_endmovecolumns_callback = nullptr;
    KDescendantsProxyModel_BeginResetModel_Callback kdescendantsproxymodel_beginresetmodel_callback = nullptr;
    KDescendantsProxyModel_EndResetModel_Callback kdescendantsproxymodel_endresetmodel_callback = nullptr;
    KDescendantsProxyModel_ChangePersistentIndex_Callback kdescendantsproxymodel_changepersistentindex_callback = nullptr;
    KDescendantsProxyModel_ChangePersistentIndexList_Callback kdescendantsproxymodel_changepersistentindexlist_callback = nullptr;
    KDescendantsProxyModel_PersistentIndexList_Callback kdescendantsproxymodel_persistentindexlist_callback = nullptr;
    KDescendantsProxyModel_Sender_Callback kdescendantsproxymodel_sender_callback = nullptr;
    KDescendantsProxyModel_SenderSignalIndex_Callback kdescendantsproxymodel_sendersignalindex_callback = nullptr;
    KDescendantsProxyModel_Receivers_Callback kdescendantsproxymodel_receivers_callback = nullptr;
    KDescendantsProxyModel_IsSignalConnected_Callback kdescendantsproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdescendantsproxymodel_metacall_isbase = false;
    mutable bool kdescendantsproxymodel_setsourcemodel_isbase = false;
    mutable bool kdescendantsproxymodel_mapfromsource_isbase = false;
    mutable bool kdescendantsproxymodel_maptosource_isbase = false;
    mutable bool kdescendantsproxymodel_flags_isbase = false;
    mutable bool kdescendantsproxymodel_data_isbase = false;
    mutable bool kdescendantsproxymodel_rowcount_isbase = false;
    mutable bool kdescendantsproxymodel_headerdata_isbase = false;
    mutable bool kdescendantsproxymodel_mimedata_isbase = false;
    mutable bool kdescendantsproxymodel_mimetypes_isbase = false;
    mutable bool kdescendantsproxymodel_haschildren_isbase = false;
    mutable bool kdescendantsproxymodel_index_isbase = false;
    mutable bool kdescendantsproxymodel_parent_isbase = false;
    mutable bool kdescendantsproxymodel_columncount_isbase = false;
    mutable bool kdescendantsproxymodel_rolenames_isbase = false;
    mutable bool kdescendantsproxymodel_supporteddropactions_isbase = false;
    mutable bool kdescendantsproxymodel_match_isbase = false;
    mutable bool kdescendantsproxymodel_mapselectiontosource_isbase = false;
    mutable bool kdescendantsproxymodel_mapselectionfromsource_isbase = false;
    mutable bool kdescendantsproxymodel_submit_isbase = false;
    mutable bool kdescendantsproxymodel_revert_isbase = false;
    mutable bool kdescendantsproxymodel_itemdata_isbase = false;
    mutable bool kdescendantsproxymodel_setdata_isbase = false;
    mutable bool kdescendantsproxymodel_setitemdata_isbase = false;
    mutable bool kdescendantsproxymodel_setheaderdata_isbase = false;
    mutable bool kdescendantsproxymodel_clearitemdata_isbase = false;
    mutable bool kdescendantsproxymodel_buddy_isbase = false;
    mutable bool kdescendantsproxymodel_canfetchmore_isbase = false;
    mutable bool kdescendantsproxymodel_fetchmore_isbase = false;
    mutable bool kdescendantsproxymodel_sort_isbase = false;
    mutable bool kdescendantsproxymodel_span_isbase = false;
    mutable bool kdescendantsproxymodel_sibling_isbase = false;
    mutable bool kdescendantsproxymodel_candropmimedata_isbase = false;
    mutable bool kdescendantsproxymodel_dropmimedata_isbase = false;
    mutable bool kdescendantsproxymodel_supporteddragactions_isbase = false;
    mutable bool kdescendantsproxymodel_insertrows_isbase = false;
    mutable bool kdescendantsproxymodel_insertcolumns_isbase = false;
    mutable bool kdescendantsproxymodel_removerows_isbase = false;
    mutable bool kdescendantsproxymodel_removecolumns_isbase = false;
    mutable bool kdescendantsproxymodel_moverows_isbase = false;
    mutable bool kdescendantsproxymodel_movecolumns_isbase = false;
    mutable bool kdescendantsproxymodel_multidata_isbase = false;
    mutable bool kdescendantsproxymodel_resetinternaldata_isbase = false;
    mutable bool kdescendantsproxymodel_event_isbase = false;
    mutable bool kdescendantsproxymodel_eventfilter_isbase = false;
    mutable bool kdescendantsproxymodel_timerevent_isbase = false;
    mutable bool kdescendantsproxymodel_childevent_isbase = false;
    mutable bool kdescendantsproxymodel_customevent_isbase = false;
    mutable bool kdescendantsproxymodel_connectnotify_isbase = false;
    mutable bool kdescendantsproxymodel_disconnectnotify_isbase = false;
    mutable bool kdescendantsproxymodel_createsourceindex_isbase = false;
    mutable bool kdescendantsproxymodel_createindex_isbase = false;
    mutable bool kdescendantsproxymodel_encodedata_isbase = false;
    mutable bool kdescendantsproxymodel_decodedata_isbase = false;
    mutable bool kdescendantsproxymodel_begininsertrows_isbase = false;
    mutable bool kdescendantsproxymodel_endinsertrows_isbase = false;
    mutable bool kdescendantsproxymodel_beginremoverows_isbase = false;
    mutable bool kdescendantsproxymodel_endremoverows_isbase = false;
    mutable bool kdescendantsproxymodel_beginmoverows_isbase = false;
    mutable bool kdescendantsproxymodel_endmoverows_isbase = false;
    mutable bool kdescendantsproxymodel_begininsertcolumns_isbase = false;
    mutable bool kdescendantsproxymodel_endinsertcolumns_isbase = false;
    mutable bool kdescendantsproxymodel_beginremovecolumns_isbase = false;
    mutable bool kdescendantsproxymodel_endremovecolumns_isbase = false;
    mutable bool kdescendantsproxymodel_beginmovecolumns_isbase = false;
    mutable bool kdescendantsproxymodel_endmovecolumns_isbase = false;
    mutable bool kdescendantsproxymodel_beginresetmodel_isbase = false;
    mutable bool kdescendantsproxymodel_endresetmodel_isbase = false;
    mutable bool kdescendantsproxymodel_changepersistentindex_isbase = false;
    mutable bool kdescendantsproxymodel_changepersistentindexlist_isbase = false;
    mutable bool kdescendantsproxymodel_persistentindexlist_isbase = false;
    mutable bool kdescendantsproxymodel_sender_isbase = false;
    mutable bool kdescendantsproxymodel_sendersignalindex_isbase = false;
    mutable bool kdescendantsproxymodel_receivers_isbase = false;
    mutable bool kdescendantsproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKDescendantsProxyModel() : KDescendantsProxyModel() {};
    VirtualKDescendantsProxyModel(QObject* parent) : KDescendantsProxyModel(parent) {};

    ~VirtualKDescendantsProxyModel() {
        kdescendantsproxymodel_metacall_callback = nullptr;
        kdescendantsproxymodel_setsourcemodel_callback = nullptr;
        kdescendantsproxymodel_mapfromsource_callback = nullptr;
        kdescendantsproxymodel_maptosource_callback = nullptr;
        kdescendantsproxymodel_flags_callback = nullptr;
        kdescendantsproxymodel_data_callback = nullptr;
        kdescendantsproxymodel_rowcount_callback = nullptr;
        kdescendantsproxymodel_headerdata_callback = nullptr;
        kdescendantsproxymodel_mimedata_callback = nullptr;
        kdescendantsproxymodel_mimetypes_callback = nullptr;
        kdescendantsproxymodel_haschildren_callback = nullptr;
        kdescendantsproxymodel_index_callback = nullptr;
        kdescendantsproxymodel_parent_callback = nullptr;
        kdescendantsproxymodel_columncount_callback = nullptr;
        kdescendantsproxymodel_rolenames_callback = nullptr;
        kdescendantsproxymodel_supporteddropactions_callback = nullptr;
        kdescendantsproxymodel_match_callback = nullptr;
        kdescendantsproxymodel_mapselectiontosource_callback = nullptr;
        kdescendantsproxymodel_mapselectionfromsource_callback = nullptr;
        kdescendantsproxymodel_submit_callback = nullptr;
        kdescendantsproxymodel_revert_callback = nullptr;
        kdescendantsproxymodel_itemdata_callback = nullptr;
        kdescendantsproxymodel_setdata_callback = nullptr;
        kdescendantsproxymodel_setitemdata_callback = nullptr;
        kdescendantsproxymodel_setheaderdata_callback = nullptr;
        kdescendantsproxymodel_clearitemdata_callback = nullptr;
        kdescendantsproxymodel_buddy_callback = nullptr;
        kdescendantsproxymodel_canfetchmore_callback = nullptr;
        kdescendantsproxymodel_fetchmore_callback = nullptr;
        kdescendantsproxymodel_sort_callback = nullptr;
        kdescendantsproxymodel_span_callback = nullptr;
        kdescendantsproxymodel_sibling_callback = nullptr;
        kdescendantsproxymodel_candropmimedata_callback = nullptr;
        kdescendantsproxymodel_dropmimedata_callback = nullptr;
        kdescendantsproxymodel_supporteddragactions_callback = nullptr;
        kdescendantsproxymodel_insertrows_callback = nullptr;
        kdescendantsproxymodel_insertcolumns_callback = nullptr;
        kdescendantsproxymodel_removerows_callback = nullptr;
        kdescendantsproxymodel_removecolumns_callback = nullptr;
        kdescendantsproxymodel_moverows_callback = nullptr;
        kdescendantsproxymodel_movecolumns_callback = nullptr;
        kdescendantsproxymodel_multidata_callback = nullptr;
        kdescendantsproxymodel_resetinternaldata_callback = nullptr;
        kdescendantsproxymodel_event_callback = nullptr;
        kdescendantsproxymodel_eventfilter_callback = nullptr;
        kdescendantsproxymodel_timerevent_callback = nullptr;
        kdescendantsproxymodel_childevent_callback = nullptr;
        kdescendantsproxymodel_customevent_callback = nullptr;
        kdescendantsproxymodel_connectnotify_callback = nullptr;
        kdescendantsproxymodel_disconnectnotify_callback = nullptr;
        kdescendantsproxymodel_createsourceindex_callback = nullptr;
        kdescendantsproxymodel_createindex_callback = nullptr;
        kdescendantsproxymodel_encodedata_callback = nullptr;
        kdescendantsproxymodel_decodedata_callback = nullptr;
        kdescendantsproxymodel_begininsertrows_callback = nullptr;
        kdescendantsproxymodel_endinsertrows_callback = nullptr;
        kdescendantsproxymodel_beginremoverows_callback = nullptr;
        kdescendantsproxymodel_endremoverows_callback = nullptr;
        kdescendantsproxymodel_beginmoverows_callback = nullptr;
        kdescendantsproxymodel_endmoverows_callback = nullptr;
        kdescendantsproxymodel_begininsertcolumns_callback = nullptr;
        kdescendantsproxymodel_endinsertcolumns_callback = nullptr;
        kdescendantsproxymodel_beginremovecolumns_callback = nullptr;
        kdescendantsproxymodel_endremovecolumns_callback = nullptr;
        kdescendantsproxymodel_beginmovecolumns_callback = nullptr;
        kdescendantsproxymodel_endmovecolumns_callback = nullptr;
        kdescendantsproxymodel_beginresetmodel_callback = nullptr;
        kdescendantsproxymodel_endresetmodel_callback = nullptr;
        kdescendantsproxymodel_changepersistentindex_callback = nullptr;
        kdescendantsproxymodel_changepersistentindexlist_callback = nullptr;
        kdescendantsproxymodel_persistentindexlist_callback = nullptr;
        kdescendantsproxymodel_sender_callback = nullptr;
        kdescendantsproxymodel_sendersignalindex_callback = nullptr;
        kdescendantsproxymodel_receivers_callback = nullptr;
        kdescendantsproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDescendantsProxyModel_Metacall_Callback(KDescendantsProxyModel_Metacall_Callback cb) { kdescendantsproxymodel_metacall_callback = cb; }
    inline void setKDescendantsProxyModel_SetSourceModel_Callback(KDescendantsProxyModel_SetSourceModel_Callback cb) { kdescendantsproxymodel_setsourcemodel_callback = cb; }
    inline void setKDescendantsProxyModel_MapFromSource_Callback(KDescendantsProxyModel_MapFromSource_Callback cb) { kdescendantsproxymodel_mapfromsource_callback = cb; }
    inline void setKDescendantsProxyModel_MapToSource_Callback(KDescendantsProxyModel_MapToSource_Callback cb) { kdescendantsproxymodel_maptosource_callback = cb; }
    inline void setKDescendantsProxyModel_Flags_Callback(KDescendantsProxyModel_Flags_Callback cb) { kdescendantsproxymodel_flags_callback = cb; }
    inline void setKDescendantsProxyModel_Data_Callback(KDescendantsProxyModel_Data_Callback cb) { kdescendantsproxymodel_data_callback = cb; }
    inline void setKDescendantsProxyModel_RowCount_Callback(KDescendantsProxyModel_RowCount_Callback cb) { kdescendantsproxymodel_rowcount_callback = cb; }
    inline void setKDescendantsProxyModel_HeaderData_Callback(KDescendantsProxyModel_HeaderData_Callback cb) { kdescendantsproxymodel_headerdata_callback = cb; }
    inline void setKDescendantsProxyModel_MimeData_Callback(KDescendantsProxyModel_MimeData_Callback cb) { kdescendantsproxymodel_mimedata_callback = cb; }
    inline void setKDescendantsProxyModel_MimeTypes_Callback(KDescendantsProxyModel_MimeTypes_Callback cb) { kdescendantsproxymodel_mimetypes_callback = cb; }
    inline void setKDescendantsProxyModel_HasChildren_Callback(KDescendantsProxyModel_HasChildren_Callback cb) { kdescendantsproxymodel_haschildren_callback = cb; }
    inline void setKDescendantsProxyModel_Index_Callback(KDescendantsProxyModel_Index_Callback cb) { kdescendantsproxymodel_index_callback = cb; }
    inline void setKDescendantsProxyModel_Parent_Callback(KDescendantsProxyModel_Parent_Callback cb) { kdescendantsproxymodel_parent_callback = cb; }
    inline void setKDescendantsProxyModel_ColumnCount_Callback(KDescendantsProxyModel_ColumnCount_Callback cb) { kdescendantsproxymodel_columncount_callback = cb; }
    inline void setKDescendantsProxyModel_RoleNames_Callback(KDescendantsProxyModel_RoleNames_Callback cb) { kdescendantsproxymodel_rolenames_callback = cb; }
    inline void setKDescendantsProxyModel_SupportedDropActions_Callback(KDescendantsProxyModel_SupportedDropActions_Callback cb) { kdescendantsproxymodel_supporteddropactions_callback = cb; }
    inline void setKDescendantsProxyModel_Match_Callback(KDescendantsProxyModel_Match_Callback cb) { kdescendantsproxymodel_match_callback = cb; }
    inline void setKDescendantsProxyModel_MapSelectionToSource_Callback(KDescendantsProxyModel_MapSelectionToSource_Callback cb) { kdescendantsproxymodel_mapselectiontosource_callback = cb; }
    inline void setKDescendantsProxyModel_MapSelectionFromSource_Callback(KDescendantsProxyModel_MapSelectionFromSource_Callback cb) { kdescendantsproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKDescendantsProxyModel_Submit_Callback(KDescendantsProxyModel_Submit_Callback cb) { kdescendantsproxymodel_submit_callback = cb; }
    inline void setKDescendantsProxyModel_Revert_Callback(KDescendantsProxyModel_Revert_Callback cb) { kdescendantsproxymodel_revert_callback = cb; }
    inline void setKDescendantsProxyModel_ItemData_Callback(KDescendantsProxyModel_ItemData_Callback cb) { kdescendantsproxymodel_itemdata_callback = cb; }
    inline void setKDescendantsProxyModel_SetData_Callback(KDescendantsProxyModel_SetData_Callback cb) { kdescendantsproxymodel_setdata_callback = cb; }
    inline void setKDescendantsProxyModel_SetItemData_Callback(KDescendantsProxyModel_SetItemData_Callback cb) { kdescendantsproxymodel_setitemdata_callback = cb; }
    inline void setKDescendantsProxyModel_SetHeaderData_Callback(KDescendantsProxyModel_SetHeaderData_Callback cb) { kdescendantsproxymodel_setheaderdata_callback = cb; }
    inline void setKDescendantsProxyModel_ClearItemData_Callback(KDescendantsProxyModel_ClearItemData_Callback cb) { kdescendantsproxymodel_clearitemdata_callback = cb; }
    inline void setKDescendantsProxyModel_Buddy_Callback(KDescendantsProxyModel_Buddy_Callback cb) { kdescendantsproxymodel_buddy_callback = cb; }
    inline void setKDescendantsProxyModel_CanFetchMore_Callback(KDescendantsProxyModel_CanFetchMore_Callback cb) { kdescendantsproxymodel_canfetchmore_callback = cb; }
    inline void setKDescendantsProxyModel_FetchMore_Callback(KDescendantsProxyModel_FetchMore_Callback cb) { kdescendantsproxymodel_fetchmore_callback = cb; }
    inline void setKDescendantsProxyModel_Sort_Callback(KDescendantsProxyModel_Sort_Callback cb) { kdescendantsproxymodel_sort_callback = cb; }
    inline void setKDescendantsProxyModel_Span_Callback(KDescendantsProxyModel_Span_Callback cb) { kdescendantsproxymodel_span_callback = cb; }
    inline void setKDescendantsProxyModel_Sibling_Callback(KDescendantsProxyModel_Sibling_Callback cb) { kdescendantsproxymodel_sibling_callback = cb; }
    inline void setKDescendantsProxyModel_CanDropMimeData_Callback(KDescendantsProxyModel_CanDropMimeData_Callback cb) { kdescendantsproxymodel_candropmimedata_callback = cb; }
    inline void setKDescendantsProxyModel_DropMimeData_Callback(KDescendantsProxyModel_DropMimeData_Callback cb) { kdescendantsproxymodel_dropmimedata_callback = cb; }
    inline void setKDescendantsProxyModel_SupportedDragActions_Callback(KDescendantsProxyModel_SupportedDragActions_Callback cb) { kdescendantsproxymodel_supporteddragactions_callback = cb; }
    inline void setKDescendantsProxyModel_InsertRows_Callback(KDescendantsProxyModel_InsertRows_Callback cb) { kdescendantsproxymodel_insertrows_callback = cb; }
    inline void setKDescendantsProxyModel_InsertColumns_Callback(KDescendantsProxyModel_InsertColumns_Callback cb) { kdescendantsproxymodel_insertcolumns_callback = cb; }
    inline void setKDescendantsProxyModel_RemoveRows_Callback(KDescendantsProxyModel_RemoveRows_Callback cb) { kdescendantsproxymodel_removerows_callback = cb; }
    inline void setKDescendantsProxyModel_RemoveColumns_Callback(KDescendantsProxyModel_RemoveColumns_Callback cb) { kdescendantsproxymodel_removecolumns_callback = cb; }
    inline void setKDescendantsProxyModel_MoveRows_Callback(KDescendantsProxyModel_MoveRows_Callback cb) { kdescendantsproxymodel_moverows_callback = cb; }
    inline void setKDescendantsProxyModel_MoveColumns_Callback(KDescendantsProxyModel_MoveColumns_Callback cb) { kdescendantsproxymodel_movecolumns_callback = cb; }
    inline void setKDescendantsProxyModel_MultiData_Callback(KDescendantsProxyModel_MultiData_Callback cb) { kdescendantsproxymodel_multidata_callback = cb; }
    inline void setKDescendantsProxyModel_ResetInternalData_Callback(KDescendantsProxyModel_ResetInternalData_Callback cb) { kdescendantsproxymodel_resetinternaldata_callback = cb; }
    inline void setKDescendantsProxyModel_Event_Callback(KDescendantsProxyModel_Event_Callback cb) { kdescendantsproxymodel_event_callback = cb; }
    inline void setKDescendantsProxyModel_EventFilter_Callback(KDescendantsProxyModel_EventFilter_Callback cb) { kdescendantsproxymodel_eventfilter_callback = cb; }
    inline void setKDescendantsProxyModel_TimerEvent_Callback(KDescendantsProxyModel_TimerEvent_Callback cb) { kdescendantsproxymodel_timerevent_callback = cb; }
    inline void setKDescendantsProxyModel_ChildEvent_Callback(KDescendantsProxyModel_ChildEvent_Callback cb) { kdescendantsproxymodel_childevent_callback = cb; }
    inline void setKDescendantsProxyModel_CustomEvent_Callback(KDescendantsProxyModel_CustomEvent_Callback cb) { kdescendantsproxymodel_customevent_callback = cb; }
    inline void setKDescendantsProxyModel_ConnectNotify_Callback(KDescendantsProxyModel_ConnectNotify_Callback cb) { kdescendantsproxymodel_connectnotify_callback = cb; }
    inline void setKDescendantsProxyModel_DisconnectNotify_Callback(KDescendantsProxyModel_DisconnectNotify_Callback cb) { kdescendantsproxymodel_disconnectnotify_callback = cb; }
    inline void setKDescendantsProxyModel_CreateSourceIndex_Callback(KDescendantsProxyModel_CreateSourceIndex_Callback cb) { kdescendantsproxymodel_createsourceindex_callback = cb; }
    inline void setKDescendantsProxyModel_CreateIndex_Callback(KDescendantsProxyModel_CreateIndex_Callback cb) { kdescendantsproxymodel_createindex_callback = cb; }
    inline void setKDescendantsProxyModel_EncodeData_Callback(KDescendantsProxyModel_EncodeData_Callback cb) { kdescendantsproxymodel_encodedata_callback = cb; }
    inline void setKDescendantsProxyModel_DecodeData_Callback(KDescendantsProxyModel_DecodeData_Callback cb) { kdescendantsproxymodel_decodedata_callback = cb; }
    inline void setKDescendantsProxyModel_BeginInsertRows_Callback(KDescendantsProxyModel_BeginInsertRows_Callback cb) { kdescendantsproxymodel_begininsertrows_callback = cb; }
    inline void setKDescendantsProxyModel_EndInsertRows_Callback(KDescendantsProxyModel_EndInsertRows_Callback cb) { kdescendantsproxymodel_endinsertrows_callback = cb; }
    inline void setKDescendantsProxyModel_BeginRemoveRows_Callback(KDescendantsProxyModel_BeginRemoveRows_Callback cb) { kdescendantsproxymodel_beginremoverows_callback = cb; }
    inline void setKDescendantsProxyModel_EndRemoveRows_Callback(KDescendantsProxyModel_EndRemoveRows_Callback cb) { kdescendantsproxymodel_endremoverows_callback = cb; }
    inline void setKDescendantsProxyModel_BeginMoveRows_Callback(KDescendantsProxyModel_BeginMoveRows_Callback cb) { kdescendantsproxymodel_beginmoverows_callback = cb; }
    inline void setKDescendantsProxyModel_EndMoveRows_Callback(KDescendantsProxyModel_EndMoveRows_Callback cb) { kdescendantsproxymodel_endmoverows_callback = cb; }
    inline void setKDescendantsProxyModel_BeginInsertColumns_Callback(KDescendantsProxyModel_BeginInsertColumns_Callback cb) { kdescendantsproxymodel_begininsertcolumns_callback = cb; }
    inline void setKDescendantsProxyModel_EndInsertColumns_Callback(KDescendantsProxyModel_EndInsertColumns_Callback cb) { kdescendantsproxymodel_endinsertcolumns_callback = cb; }
    inline void setKDescendantsProxyModel_BeginRemoveColumns_Callback(KDescendantsProxyModel_BeginRemoveColumns_Callback cb) { kdescendantsproxymodel_beginremovecolumns_callback = cb; }
    inline void setKDescendantsProxyModel_EndRemoveColumns_Callback(KDescendantsProxyModel_EndRemoveColumns_Callback cb) { kdescendantsproxymodel_endremovecolumns_callback = cb; }
    inline void setKDescendantsProxyModel_BeginMoveColumns_Callback(KDescendantsProxyModel_BeginMoveColumns_Callback cb) { kdescendantsproxymodel_beginmovecolumns_callback = cb; }
    inline void setKDescendantsProxyModel_EndMoveColumns_Callback(KDescendantsProxyModel_EndMoveColumns_Callback cb) { kdescendantsproxymodel_endmovecolumns_callback = cb; }
    inline void setKDescendantsProxyModel_BeginResetModel_Callback(KDescendantsProxyModel_BeginResetModel_Callback cb) { kdescendantsproxymodel_beginresetmodel_callback = cb; }
    inline void setKDescendantsProxyModel_EndResetModel_Callback(KDescendantsProxyModel_EndResetModel_Callback cb) { kdescendantsproxymodel_endresetmodel_callback = cb; }
    inline void setKDescendantsProxyModel_ChangePersistentIndex_Callback(KDescendantsProxyModel_ChangePersistentIndex_Callback cb) { kdescendantsproxymodel_changepersistentindex_callback = cb; }
    inline void setKDescendantsProxyModel_ChangePersistentIndexList_Callback(KDescendantsProxyModel_ChangePersistentIndexList_Callback cb) { kdescendantsproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKDescendantsProxyModel_PersistentIndexList_Callback(KDescendantsProxyModel_PersistentIndexList_Callback cb) { kdescendantsproxymodel_persistentindexlist_callback = cb; }
    inline void setKDescendantsProxyModel_Sender_Callback(KDescendantsProxyModel_Sender_Callback cb) { kdescendantsproxymodel_sender_callback = cb; }
    inline void setKDescendantsProxyModel_SenderSignalIndex_Callback(KDescendantsProxyModel_SenderSignalIndex_Callback cb) { kdescendantsproxymodel_sendersignalindex_callback = cb; }
    inline void setKDescendantsProxyModel_Receivers_Callback(KDescendantsProxyModel_Receivers_Callback cb) { kdescendantsproxymodel_receivers_callback = cb; }
    inline void setKDescendantsProxyModel_IsSignalConnected_Callback(KDescendantsProxyModel_IsSignalConnected_Callback cb) { kdescendantsproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDescendantsProxyModel_Metacall_IsBase(bool value) const { kdescendantsproxymodel_metacall_isbase = value; }
    inline void setKDescendantsProxyModel_SetSourceModel_IsBase(bool value) const { kdescendantsproxymodel_setsourcemodel_isbase = value; }
    inline void setKDescendantsProxyModel_MapFromSource_IsBase(bool value) const { kdescendantsproxymodel_mapfromsource_isbase = value; }
    inline void setKDescendantsProxyModel_MapToSource_IsBase(bool value) const { kdescendantsproxymodel_maptosource_isbase = value; }
    inline void setKDescendantsProxyModel_Flags_IsBase(bool value) const { kdescendantsproxymodel_flags_isbase = value; }
    inline void setKDescendantsProxyModel_Data_IsBase(bool value) const { kdescendantsproxymodel_data_isbase = value; }
    inline void setKDescendantsProxyModel_RowCount_IsBase(bool value) const { kdescendantsproxymodel_rowcount_isbase = value; }
    inline void setKDescendantsProxyModel_HeaderData_IsBase(bool value) const { kdescendantsproxymodel_headerdata_isbase = value; }
    inline void setKDescendantsProxyModel_MimeData_IsBase(bool value) const { kdescendantsproxymodel_mimedata_isbase = value; }
    inline void setKDescendantsProxyModel_MimeTypes_IsBase(bool value) const { kdescendantsproxymodel_mimetypes_isbase = value; }
    inline void setKDescendantsProxyModel_HasChildren_IsBase(bool value) const { kdescendantsproxymodel_haschildren_isbase = value; }
    inline void setKDescendantsProxyModel_Index_IsBase(bool value) const { kdescendantsproxymodel_index_isbase = value; }
    inline void setKDescendantsProxyModel_Parent_IsBase(bool value) const { kdescendantsproxymodel_parent_isbase = value; }
    inline void setKDescendantsProxyModel_ColumnCount_IsBase(bool value) const { kdescendantsproxymodel_columncount_isbase = value; }
    inline void setKDescendantsProxyModel_RoleNames_IsBase(bool value) const { kdescendantsproxymodel_rolenames_isbase = value; }
    inline void setKDescendantsProxyModel_SupportedDropActions_IsBase(bool value) const { kdescendantsproxymodel_supporteddropactions_isbase = value; }
    inline void setKDescendantsProxyModel_Match_IsBase(bool value) const { kdescendantsproxymodel_match_isbase = value; }
    inline void setKDescendantsProxyModel_MapSelectionToSource_IsBase(bool value) const { kdescendantsproxymodel_mapselectiontosource_isbase = value; }
    inline void setKDescendantsProxyModel_MapSelectionFromSource_IsBase(bool value) const { kdescendantsproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKDescendantsProxyModel_Submit_IsBase(bool value) const { kdescendantsproxymodel_submit_isbase = value; }
    inline void setKDescendantsProxyModel_Revert_IsBase(bool value) const { kdescendantsproxymodel_revert_isbase = value; }
    inline void setKDescendantsProxyModel_ItemData_IsBase(bool value) const { kdescendantsproxymodel_itemdata_isbase = value; }
    inline void setKDescendantsProxyModel_SetData_IsBase(bool value) const { kdescendantsproxymodel_setdata_isbase = value; }
    inline void setKDescendantsProxyModel_SetItemData_IsBase(bool value) const { kdescendantsproxymodel_setitemdata_isbase = value; }
    inline void setKDescendantsProxyModel_SetHeaderData_IsBase(bool value) const { kdescendantsproxymodel_setheaderdata_isbase = value; }
    inline void setKDescendantsProxyModel_ClearItemData_IsBase(bool value) const { kdescendantsproxymodel_clearitemdata_isbase = value; }
    inline void setKDescendantsProxyModel_Buddy_IsBase(bool value) const { kdescendantsproxymodel_buddy_isbase = value; }
    inline void setKDescendantsProxyModel_CanFetchMore_IsBase(bool value) const { kdescendantsproxymodel_canfetchmore_isbase = value; }
    inline void setKDescendantsProxyModel_FetchMore_IsBase(bool value) const { kdescendantsproxymodel_fetchmore_isbase = value; }
    inline void setKDescendantsProxyModel_Sort_IsBase(bool value) const { kdescendantsproxymodel_sort_isbase = value; }
    inline void setKDescendantsProxyModel_Span_IsBase(bool value) const { kdescendantsproxymodel_span_isbase = value; }
    inline void setKDescendantsProxyModel_Sibling_IsBase(bool value) const { kdescendantsproxymodel_sibling_isbase = value; }
    inline void setKDescendantsProxyModel_CanDropMimeData_IsBase(bool value) const { kdescendantsproxymodel_candropmimedata_isbase = value; }
    inline void setKDescendantsProxyModel_DropMimeData_IsBase(bool value) const { kdescendantsproxymodel_dropmimedata_isbase = value; }
    inline void setKDescendantsProxyModel_SupportedDragActions_IsBase(bool value) const { kdescendantsproxymodel_supporteddragactions_isbase = value; }
    inline void setKDescendantsProxyModel_InsertRows_IsBase(bool value) const { kdescendantsproxymodel_insertrows_isbase = value; }
    inline void setKDescendantsProxyModel_InsertColumns_IsBase(bool value) const { kdescendantsproxymodel_insertcolumns_isbase = value; }
    inline void setKDescendantsProxyModel_RemoveRows_IsBase(bool value) const { kdescendantsproxymodel_removerows_isbase = value; }
    inline void setKDescendantsProxyModel_RemoveColumns_IsBase(bool value) const { kdescendantsproxymodel_removecolumns_isbase = value; }
    inline void setKDescendantsProxyModel_MoveRows_IsBase(bool value) const { kdescendantsproxymodel_moverows_isbase = value; }
    inline void setKDescendantsProxyModel_MoveColumns_IsBase(bool value) const { kdescendantsproxymodel_movecolumns_isbase = value; }
    inline void setKDescendantsProxyModel_MultiData_IsBase(bool value) const { kdescendantsproxymodel_multidata_isbase = value; }
    inline void setKDescendantsProxyModel_ResetInternalData_IsBase(bool value) const { kdescendantsproxymodel_resetinternaldata_isbase = value; }
    inline void setKDescendantsProxyModel_Event_IsBase(bool value) const { kdescendantsproxymodel_event_isbase = value; }
    inline void setKDescendantsProxyModel_EventFilter_IsBase(bool value) const { kdescendantsproxymodel_eventfilter_isbase = value; }
    inline void setKDescendantsProxyModel_TimerEvent_IsBase(bool value) const { kdescendantsproxymodel_timerevent_isbase = value; }
    inline void setKDescendantsProxyModel_ChildEvent_IsBase(bool value) const { kdescendantsproxymodel_childevent_isbase = value; }
    inline void setKDescendantsProxyModel_CustomEvent_IsBase(bool value) const { kdescendantsproxymodel_customevent_isbase = value; }
    inline void setKDescendantsProxyModel_ConnectNotify_IsBase(bool value) const { kdescendantsproxymodel_connectnotify_isbase = value; }
    inline void setKDescendantsProxyModel_DisconnectNotify_IsBase(bool value) const { kdescendantsproxymodel_disconnectnotify_isbase = value; }
    inline void setKDescendantsProxyModel_CreateSourceIndex_IsBase(bool value) const { kdescendantsproxymodel_createsourceindex_isbase = value; }
    inline void setKDescendantsProxyModel_CreateIndex_IsBase(bool value) const { kdescendantsproxymodel_createindex_isbase = value; }
    inline void setKDescendantsProxyModel_EncodeData_IsBase(bool value) const { kdescendantsproxymodel_encodedata_isbase = value; }
    inline void setKDescendantsProxyModel_DecodeData_IsBase(bool value) const { kdescendantsproxymodel_decodedata_isbase = value; }
    inline void setKDescendantsProxyModel_BeginInsertRows_IsBase(bool value) const { kdescendantsproxymodel_begininsertrows_isbase = value; }
    inline void setKDescendantsProxyModel_EndInsertRows_IsBase(bool value) const { kdescendantsproxymodel_endinsertrows_isbase = value; }
    inline void setKDescendantsProxyModel_BeginRemoveRows_IsBase(bool value) const { kdescendantsproxymodel_beginremoverows_isbase = value; }
    inline void setKDescendantsProxyModel_EndRemoveRows_IsBase(bool value) const { kdescendantsproxymodel_endremoverows_isbase = value; }
    inline void setKDescendantsProxyModel_BeginMoveRows_IsBase(bool value) const { kdescendantsproxymodel_beginmoverows_isbase = value; }
    inline void setKDescendantsProxyModel_EndMoveRows_IsBase(bool value) const { kdescendantsproxymodel_endmoverows_isbase = value; }
    inline void setKDescendantsProxyModel_BeginInsertColumns_IsBase(bool value) const { kdescendantsproxymodel_begininsertcolumns_isbase = value; }
    inline void setKDescendantsProxyModel_EndInsertColumns_IsBase(bool value) const { kdescendantsproxymodel_endinsertcolumns_isbase = value; }
    inline void setKDescendantsProxyModel_BeginRemoveColumns_IsBase(bool value) const { kdescendantsproxymodel_beginremovecolumns_isbase = value; }
    inline void setKDescendantsProxyModel_EndRemoveColumns_IsBase(bool value) const { kdescendantsproxymodel_endremovecolumns_isbase = value; }
    inline void setKDescendantsProxyModel_BeginMoveColumns_IsBase(bool value) const { kdescendantsproxymodel_beginmovecolumns_isbase = value; }
    inline void setKDescendantsProxyModel_EndMoveColumns_IsBase(bool value) const { kdescendantsproxymodel_endmovecolumns_isbase = value; }
    inline void setKDescendantsProxyModel_BeginResetModel_IsBase(bool value) const { kdescendantsproxymodel_beginresetmodel_isbase = value; }
    inline void setKDescendantsProxyModel_EndResetModel_IsBase(bool value) const { kdescendantsproxymodel_endresetmodel_isbase = value; }
    inline void setKDescendantsProxyModel_ChangePersistentIndex_IsBase(bool value) const { kdescendantsproxymodel_changepersistentindex_isbase = value; }
    inline void setKDescendantsProxyModel_ChangePersistentIndexList_IsBase(bool value) const { kdescendantsproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKDescendantsProxyModel_PersistentIndexList_IsBase(bool value) const { kdescendantsproxymodel_persistentindexlist_isbase = value; }
    inline void setKDescendantsProxyModel_Sender_IsBase(bool value) const { kdescendantsproxymodel_sender_isbase = value; }
    inline void setKDescendantsProxyModel_SenderSignalIndex_IsBase(bool value) const { kdescendantsproxymodel_sendersignalindex_isbase = value; }
    inline void setKDescendantsProxyModel_Receivers_IsBase(bool value) const { kdescendantsproxymodel_receivers_isbase = value; }
    inline void setKDescendantsProxyModel_IsSignalConnected_IsBase(bool value) const { kdescendantsproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdescendantsproxymodel_metacall_isbase) {
            kdescendantsproxymodel_metacall_isbase = false;
            return KDescendantsProxyModel::qt_metacall(param1, param2, param3);
        } else if (kdescendantsproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdescendantsproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDescendantsProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* model) override {
        if (kdescendantsproxymodel_setsourcemodel_isbase) {
            kdescendantsproxymodel_setsourcemodel_isbase = false;
            KDescendantsProxyModel::setSourceModel(model);
        } else if (kdescendantsproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kdescendantsproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::setSourceModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kdescendantsproxymodel_mapfromsource_isbase) {
            kdescendantsproxymodel_mapfromsource_isbase = false;
            return KDescendantsProxyModel::mapFromSource(sourceIndex);
        } else if (kdescendantsproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = kdescendantsproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kdescendantsproxymodel_maptosource_isbase) {
            kdescendantsproxymodel_maptosource_isbase = false;
            return KDescendantsProxyModel::mapToSource(proxyIndex);
        } else if (kdescendantsproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = kdescendantsproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_flags_isbase) {
            kdescendantsproxymodel_flags_isbase = false;
            return KDescendantsProxyModel::flags(index);
        } else if (kdescendantsproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kdescendantsproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KDescendantsProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kdescendantsproxymodel_data_isbase) {
            kdescendantsproxymodel_data_isbase = false;
            return KDescendantsProxyModel::data(index, role);
        } else if (kdescendantsproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kdescendantsproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_rowcount_isbase) {
            kdescendantsproxymodel_rowcount_isbase = false;
            return KDescendantsProxyModel::rowCount(parent);
        } else if (kdescendantsproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kdescendantsproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDescendantsProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kdescendantsproxymodel_headerdata_isbase) {
            kdescendantsproxymodel_headerdata_isbase = false;
            return KDescendantsProxyModel::headerData(section, orientation, role);
        } else if (kdescendantsproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kdescendantsproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kdescendantsproxymodel_mimedata_isbase) {
            kdescendantsproxymodel_mimedata_isbase = false;
            return KDescendantsProxyModel::mimeData(indexes);
        } else if (kdescendantsproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kdescendantsproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kdescendantsproxymodel_mimetypes_isbase) {
            kdescendantsproxymodel_mimetypes_isbase = false;
            return KDescendantsProxyModel::mimeTypes();
        } else if (kdescendantsproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kdescendantsproxymodel_mimetypes_callback();
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
            return KDescendantsProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_haschildren_isbase) {
            kdescendantsproxymodel_haschildren_isbase = false;
            return KDescendantsProxyModel::hasChildren(parent);
        } else if (kdescendantsproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int param1, int param2, const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_index_isbase) {
            kdescendantsproxymodel_index_isbase = false;
            return KDescendantsProxyModel::index(param1, param2, parent);
        } else if (kdescendantsproxymodel_index_callback != nullptr) {
            int cbval1 = param1;
            int cbval2 = param2;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kdescendantsproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::index(param1, param2, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& param1) const override {
        if (kdescendantsproxymodel_parent_isbase) {
            kdescendantsproxymodel_parent_isbase = false;
            return KDescendantsProxyModel::parent(param1);
        } else if (kdescendantsproxymodel_parent_callback != nullptr) {
            const QModelIndex& param1_ret = param1;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&param1_ret);

            QModelIndex* callback_ret = kdescendantsproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::parent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_columncount_isbase) {
            kdescendantsproxymodel_columncount_isbase = false;
            return KDescendantsProxyModel::columnCount(index);
        } else if (kdescendantsproxymodel_columncount_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kdescendantsproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDescendantsProxyModel::columnCount(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kdescendantsproxymodel_rolenames_isbase) {
            kdescendantsproxymodel_rolenames_isbase = false;
            return KDescendantsProxyModel::roleNames();
        } else if (kdescendantsproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kdescendantsproxymodel_rolenames_callback();
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
            return KDescendantsProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kdescendantsproxymodel_supporteddropactions_isbase) {
            kdescendantsproxymodel_supporteddropactions_isbase = false;
            return KDescendantsProxyModel::supportedDropActions();
        } else if (kdescendantsproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kdescendantsproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KDescendantsProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kdescendantsproxymodel_match_isbase) {
            kdescendantsproxymodel_match_isbase = false;
            return KDescendantsProxyModel::match(start, role, value, hits, flags);
        } else if (kdescendantsproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kdescendantsproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KDescendantsProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kdescendantsproxymodel_mapselectiontosource_isbase) {
            kdescendantsproxymodel_mapselectiontosource_isbase = false;
            return KDescendantsProxyModel::mapSelectionToSource(selection);
        } else if (kdescendantsproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kdescendantsproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kdescendantsproxymodel_mapselectionfromsource_isbase) {
            kdescendantsproxymodel_mapselectionfromsource_isbase = false;
            return KDescendantsProxyModel::mapSelectionFromSource(selection);
        } else if (kdescendantsproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kdescendantsproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kdescendantsproxymodel_submit_isbase) {
            kdescendantsproxymodel_submit_isbase = false;
            return KDescendantsProxyModel::submit();
        } else if (kdescendantsproxymodel_submit_callback != nullptr) {
            bool callback_ret = kdescendantsproxymodel_submit_callback();
            return callback_ret;
        } else {
            return KDescendantsProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kdescendantsproxymodel_revert_isbase) {
            kdescendantsproxymodel_revert_isbase = false;
            KDescendantsProxyModel::revert();
        } else if (kdescendantsproxymodel_revert_callback != nullptr) {
            kdescendantsproxymodel_revert_callback();
        } else {
            KDescendantsProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_itemdata_isbase) {
            kdescendantsproxymodel_itemdata_isbase = false;
            return KDescendantsProxyModel::itemData(index);
        } else if (kdescendantsproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kdescendantsproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KDescendantsProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kdescendantsproxymodel_setdata_isbase) {
            kdescendantsproxymodel_setdata_isbase = false;
            return KDescendantsProxyModel::setData(index, value, role);
        } else if (kdescendantsproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kdescendantsproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kdescendantsproxymodel_setitemdata_isbase) {
            kdescendantsproxymodel_setitemdata_isbase = false;
            return KDescendantsProxyModel::setItemData(index, roles);
        } else if (kdescendantsproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kdescendantsproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kdescendantsproxymodel_setheaderdata_isbase) {
            kdescendantsproxymodel_setheaderdata_isbase = false;
            return KDescendantsProxyModel::setHeaderData(section, orientation, value, role);
        } else if (kdescendantsproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kdescendantsproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kdescendantsproxymodel_clearitemdata_isbase) {
            kdescendantsproxymodel_clearitemdata_isbase = false;
            return KDescendantsProxyModel::clearItemData(index);
        } else if (kdescendantsproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kdescendantsproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_buddy_isbase) {
            kdescendantsproxymodel_buddy_isbase = false;
            return KDescendantsProxyModel::buddy(index);
        } else if (kdescendantsproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kdescendantsproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_canfetchmore_isbase) {
            kdescendantsproxymodel_canfetchmore_isbase = false;
            return KDescendantsProxyModel::canFetchMore(parent);
        } else if (kdescendantsproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kdescendantsproxymodel_fetchmore_isbase) {
            kdescendantsproxymodel_fetchmore_isbase = false;
            KDescendantsProxyModel::fetchMore(parent);
        } else if (kdescendantsproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kdescendantsproxymodel_fetchmore_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kdescendantsproxymodel_sort_isbase) {
            kdescendantsproxymodel_sort_isbase = false;
            KDescendantsProxyModel::sort(column, order);
        } else if (kdescendantsproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kdescendantsproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            KDescendantsProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_span_isbase) {
            kdescendantsproxymodel_span_isbase = false;
            return KDescendantsProxyModel::span(index);
        } else if (kdescendantsproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kdescendantsproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kdescendantsproxymodel_sibling_isbase) {
            kdescendantsproxymodel_sibling_isbase = false;
            return KDescendantsProxyModel::sibling(row, column, idx);
        } else if (kdescendantsproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kdescendantsproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_candropmimedata_isbase) {
            kdescendantsproxymodel_candropmimedata_isbase = false;
            return KDescendantsProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (kdescendantsproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_dropmimedata_isbase) {
            kdescendantsproxymodel_dropmimedata_isbase = false;
            return KDescendantsProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (kdescendantsproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kdescendantsproxymodel_supporteddragactions_isbase) {
            kdescendantsproxymodel_supporteddragactions_isbase = false;
            return KDescendantsProxyModel::supportedDragActions();
        } else if (kdescendantsproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kdescendantsproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KDescendantsProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_insertrows_isbase) {
            kdescendantsproxymodel_insertrows_isbase = false;
            return KDescendantsProxyModel::insertRows(row, count, parent);
        } else if (kdescendantsproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_insertcolumns_isbase) {
            kdescendantsproxymodel_insertcolumns_isbase = false;
            return KDescendantsProxyModel::insertColumns(column, count, parent);
        } else if (kdescendantsproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_removerows_isbase) {
            kdescendantsproxymodel_removerows_isbase = false;
            return KDescendantsProxyModel::removeRows(row, count, parent);
        } else if (kdescendantsproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_removecolumns_isbase) {
            kdescendantsproxymodel_removecolumns_isbase = false;
            return KDescendantsProxyModel::removeColumns(column, count, parent);
        } else if (kdescendantsproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdescendantsproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdescendantsproxymodel_moverows_isbase) {
            kdescendantsproxymodel_moverows_isbase = false;
            return KDescendantsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kdescendantsproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kdescendantsproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdescendantsproxymodel_movecolumns_isbase) {
            kdescendantsproxymodel_movecolumns_isbase = false;
            return KDescendantsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kdescendantsproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kdescendantsproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kdescendantsproxymodel_multidata_isbase) {
            kdescendantsproxymodel_multidata_isbase = false;
            KDescendantsProxyModel::multiData(index, roleDataSpan);
        } else if (kdescendantsproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kdescendantsproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KDescendantsProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kdescendantsproxymodel_resetinternaldata_isbase) {
            kdescendantsproxymodel_resetinternaldata_isbase = false;
            KDescendantsProxyModel::resetInternalData();
        } else if (kdescendantsproxymodel_resetinternaldata_callback != nullptr) {
            kdescendantsproxymodel_resetinternaldata_callback();
        } else {
            KDescendantsProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdescendantsproxymodel_event_isbase) {
            kdescendantsproxymodel_event_isbase = false;
            return KDescendantsProxyModel::event(event);
        } else if (kdescendantsproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdescendantsproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdescendantsproxymodel_eventfilter_isbase) {
            kdescendantsproxymodel_eventfilter_isbase = false;
            return KDescendantsProxyModel::eventFilter(watched, event);
        } else if (kdescendantsproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdescendantsproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdescendantsproxymodel_timerevent_isbase) {
            kdescendantsproxymodel_timerevent_isbase = false;
            KDescendantsProxyModel::timerEvent(event);
        } else if (kdescendantsproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdescendantsproxymodel_timerevent_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdescendantsproxymodel_childevent_isbase) {
            kdescendantsproxymodel_childevent_isbase = false;
            KDescendantsProxyModel::childEvent(event);
        } else if (kdescendantsproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdescendantsproxymodel_childevent_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdescendantsproxymodel_customevent_isbase) {
            kdescendantsproxymodel_customevent_isbase = false;
            KDescendantsProxyModel::customEvent(event);
        } else if (kdescendantsproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdescendantsproxymodel_customevent_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdescendantsproxymodel_connectnotify_isbase) {
            kdescendantsproxymodel_connectnotify_isbase = false;
            KDescendantsProxyModel::connectNotify(signal);
        } else if (kdescendantsproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdescendantsproxymodel_connectnotify_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdescendantsproxymodel_disconnectnotify_isbase) {
            kdescendantsproxymodel_disconnectnotify_isbase = false;
            KDescendantsProxyModel::disconnectNotify(signal);
        } else if (kdescendantsproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdescendantsproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            KDescendantsProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (kdescendantsproxymodel_createsourceindex_isbase) {
            kdescendantsproxymodel_createsourceindex_isbase = false;
            return KDescendantsProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (kdescendantsproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = kdescendantsproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kdescendantsproxymodel_createindex_isbase) {
            kdescendantsproxymodel_createindex_isbase = false;
            return KDescendantsProxyModel::createIndex(row, column);
        } else if (kdescendantsproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kdescendantsproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KDescendantsProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kdescendantsproxymodel_encodedata_isbase) {
            kdescendantsproxymodel_encodedata_isbase = false;
            KDescendantsProxyModel::encodeData(indexes, stream);
        } else if (kdescendantsproxymodel_encodedata_callback != nullptr) {
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

            kdescendantsproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KDescendantsProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kdescendantsproxymodel_decodedata_isbase) {
            kdescendantsproxymodel_decodedata_isbase = false;
            return KDescendantsProxyModel::decodeData(row, column, parent, stream);
        } else if (kdescendantsproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kdescendantsproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kdescendantsproxymodel_begininsertrows_isbase) {
            kdescendantsproxymodel_begininsertrows_isbase = false;
            KDescendantsProxyModel::beginInsertRows(parent, first, last);
        } else if (kdescendantsproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdescendantsproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDescendantsProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kdescendantsproxymodel_endinsertrows_isbase) {
            kdescendantsproxymodel_endinsertrows_isbase = false;
            KDescendantsProxyModel::endInsertRows();
        } else if (kdescendantsproxymodel_endinsertrows_callback != nullptr) {
            kdescendantsproxymodel_endinsertrows_callback();
        } else {
            KDescendantsProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kdescendantsproxymodel_beginremoverows_isbase) {
            kdescendantsproxymodel_beginremoverows_isbase = false;
            KDescendantsProxyModel::beginRemoveRows(parent, first, last);
        } else if (kdescendantsproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdescendantsproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDescendantsProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kdescendantsproxymodel_endremoverows_isbase) {
            kdescendantsproxymodel_endremoverows_isbase = false;
            KDescendantsProxyModel::endRemoveRows();
        } else if (kdescendantsproxymodel_endremoverows_callback != nullptr) {
            kdescendantsproxymodel_endremoverows_callback();
        } else {
            KDescendantsProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kdescendantsproxymodel_beginmoverows_isbase) {
            kdescendantsproxymodel_beginmoverows_isbase = false;
            return KDescendantsProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kdescendantsproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kdescendantsproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kdescendantsproxymodel_endmoverows_isbase) {
            kdescendantsproxymodel_endmoverows_isbase = false;
            KDescendantsProxyModel::endMoveRows();
        } else if (kdescendantsproxymodel_endmoverows_callback != nullptr) {
            kdescendantsproxymodel_endmoverows_callback();
        } else {
            KDescendantsProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kdescendantsproxymodel_begininsertcolumns_isbase) {
            kdescendantsproxymodel_begininsertcolumns_isbase = false;
            KDescendantsProxyModel::beginInsertColumns(parent, first, last);
        } else if (kdescendantsproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdescendantsproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDescendantsProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kdescendantsproxymodel_endinsertcolumns_isbase) {
            kdescendantsproxymodel_endinsertcolumns_isbase = false;
            KDescendantsProxyModel::endInsertColumns();
        } else if (kdescendantsproxymodel_endinsertcolumns_callback != nullptr) {
            kdescendantsproxymodel_endinsertcolumns_callback();
        } else {
            KDescendantsProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kdescendantsproxymodel_beginremovecolumns_isbase) {
            kdescendantsproxymodel_beginremovecolumns_isbase = false;
            KDescendantsProxyModel::beginRemoveColumns(parent, first, last);
        } else if (kdescendantsproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdescendantsproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDescendantsProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kdescendantsproxymodel_endremovecolumns_isbase) {
            kdescendantsproxymodel_endremovecolumns_isbase = false;
            KDescendantsProxyModel::endRemoveColumns();
        } else if (kdescendantsproxymodel_endremovecolumns_callback != nullptr) {
            kdescendantsproxymodel_endremovecolumns_callback();
        } else {
            KDescendantsProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kdescendantsproxymodel_beginmovecolumns_isbase) {
            kdescendantsproxymodel_beginmovecolumns_isbase = false;
            return KDescendantsProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kdescendantsproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kdescendantsproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kdescendantsproxymodel_endmovecolumns_isbase) {
            kdescendantsproxymodel_endmovecolumns_isbase = false;
            KDescendantsProxyModel::endMoveColumns();
        } else if (kdescendantsproxymodel_endmovecolumns_callback != nullptr) {
            kdescendantsproxymodel_endmovecolumns_callback();
        } else {
            KDescendantsProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kdescendantsproxymodel_beginresetmodel_isbase) {
            kdescendantsproxymodel_beginresetmodel_isbase = false;
            KDescendantsProxyModel::beginResetModel();
        } else if (kdescendantsproxymodel_beginresetmodel_callback != nullptr) {
            kdescendantsproxymodel_beginresetmodel_callback();
        } else {
            KDescendantsProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kdescendantsproxymodel_endresetmodel_isbase) {
            kdescendantsproxymodel_endresetmodel_isbase = false;
            KDescendantsProxyModel::endResetModel();
        } else if (kdescendantsproxymodel_endresetmodel_callback != nullptr) {
            kdescendantsproxymodel_endresetmodel_callback();
        } else {
            KDescendantsProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kdescendantsproxymodel_changepersistentindex_isbase) {
            kdescendantsproxymodel_changepersistentindex_isbase = false;
            KDescendantsProxyModel::changePersistentIndex(from, to);
        } else if (kdescendantsproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kdescendantsproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KDescendantsProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kdescendantsproxymodel_changepersistentindexlist_isbase) {
            kdescendantsproxymodel_changepersistentindexlist_isbase = false;
            KDescendantsProxyModel::changePersistentIndexList(from, to);
        } else if (kdescendantsproxymodel_changepersistentindexlist_callback != nullptr) {
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

            kdescendantsproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KDescendantsProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kdescendantsproxymodel_persistentindexlist_isbase) {
            kdescendantsproxymodel_persistentindexlist_isbase = false;
            return KDescendantsProxyModel::persistentIndexList();
        } else if (kdescendantsproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kdescendantsproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KDescendantsProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdescendantsproxymodel_sender_isbase) {
            kdescendantsproxymodel_sender_isbase = false;
            return KDescendantsProxyModel::sender();
        } else if (kdescendantsproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = kdescendantsproxymodel_sender_callback();
            return callback_ret;
        } else {
            return KDescendantsProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdescendantsproxymodel_sendersignalindex_isbase) {
            kdescendantsproxymodel_sendersignalindex_isbase = false;
            return KDescendantsProxyModel::senderSignalIndex();
        } else if (kdescendantsproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kdescendantsproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDescendantsProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdescendantsproxymodel_receivers_isbase) {
            kdescendantsproxymodel_receivers_isbase = false;
            return KDescendantsProxyModel::receivers(signal);
        } else if (kdescendantsproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdescendantsproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDescendantsProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdescendantsproxymodel_issignalconnected_isbase) {
            kdescendantsproxymodel_issignalconnected_isbase = false;
            return KDescendantsProxyModel::isSignalConnected(signal);
        } else if (kdescendantsproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdescendantsproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDescendantsProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KDescendantsProxyModel_ResetInternalData(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseResetInternalData(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_TimerEvent(KDescendantsProxyModel* self, QTimerEvent* event);
    friend void KDescendantsProxyModel_QBaseTimerEvent(KDescendantsProxyModel* self, QTimerEvent* event);
    friend void KDescendantsProxyModel_ChildEvent(KDescendantsProxyModel* self, QChildEvent* event);
    friend void KDescendantsProxyModel_QBaseChildEvent(KDescendantsProxyModel* self, QChildEvent* event);
    friend void KDescendantsProxyModel_CustomEvent(KDescendantsProxyModel* self, QEvent* event);
    friend void KDescendantsProxyModel_QBaseCustomEvent(KDescendantsProxyModel* self, QEvent* event);
    friend void KDescendantsProxyModel_ConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal);
    friend void KDescendantsProxyModel_QBaseConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal);
    friend void KDescendantsProxyModel_DisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal);
    friend void KDescendantsProxyModel_QBaseDisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal);
    friend QModelIndex* KDescendantsProxyModel_CreateSourceIndex(const KDescendantsProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KDescendantsProxyModel_QBaseCreateSourceIndex(const KDescendantsProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KDescendantsProxyModel_CreateIndex(const KDescendantsProxyModel* self, int row, int column);
    friend QModelIndex* KDescendantsProxyModel_QBaseCreateIndex(const KDescendantsProxyModel* self, int row, int column);
    friend void KDescendantsProxyModel_EncodeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KDescendantsProxyModel_QBaseEncodeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KDescendantsProxyModel_DecodeData(KDescendantsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KDescendantsProxyModel_QBaseDecodeData(KDescendantsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KDescendantsProxyModel_BeginInsertRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_QBaseBeginInsertRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_EndInsertRows(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndInsertRows(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_BeginRemoveRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_QBaseBeginRemoveRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_EndRemoveRows(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndRemoveRows(KDescendantsProxyModel* self);
    friend bool KDescendantsProxyModel_BeginMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KDescendantsProxyModel_QBaseBeginMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KDescendantsProxyModel_EndMoveRows(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndMoveRows(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_BeginInsertColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_QBaseBeginInsertColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_EndInsertColumns(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndInsertColumns(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_BeginRemoveColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_QBaseBeginRemoveColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KDescendantsProxyModel_EndRemoveColumns(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndRemoveColumns(KDescendantsProxyModel* self);
    friend bool KDescendantsProxyModel_BeginMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KDescendantsProxyModel_QBaseBeginMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KDescendantsProxyModel_EndMoveColumns(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndMoveColumns(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_BeginResetModel(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseBeginResetModel(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_EndResetModel(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_QBaseEndResetModel(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_ChangePersistentIndex(KDescendantsProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KDescendantsProxyModel_QBaseChangePersistentIndex(KDescendantsProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KDescendantsProxyModel_ChangePersistentIndexList(KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KDescendantsProxyModel_QBaseChangePersistentIndexList(KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KDescendantsProxyModel_PersistentIndexList(const KDescendantsProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KDescendantsProxyModel_QBasePersistentIndexList(const KDescendantsProxyModel* self);
    friend QObject* KDescendantsProxyModel_Sender(const KDescendantsProxyModel* self);
    friend QObject* KDescendantsProxyModel_QBaseSender(const KDescendantsProxyModel* self);
    friend int KDescendantsProxyModel_SenderSignalIndex(const KDescendantsProxyModel* self);
    friend int KDescendantsProxyModel_QBaseSenderSignalIndex(const KDescendantsProxyModel* self);
    friend int KDescendantsProxyModel_Receivers(const KDescendantsProxyModel* self, const char* signal);
    friend int KDescendantsProxyModel_QBaseReceivers(const KDescendantsProxyModel* self, const char* signal);
    friend bool KDescendantsProxyModel_IsSignalConnected(const KDescendantsProxyModel* self, const QMetaMethod* signal);
    friend bool KDescendantsProxyModel_QBaseIsSignalConnected(const KDescendantsProxyModel* self, const QMetaMethod* signal);
};

#endif
