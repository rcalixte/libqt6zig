#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKSELECTIONPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKSELECTIONPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectionProxyModel so that we can call protected methods
class VirtualKSelectionProxyModel final : public KSelectionProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKSelectionProxyModel = true;

    // Virtual class public types (including callbacks)
    using KSelectionProxyModel_Metacall_Callback = int (*)(KSelectionProxyModel*, int, int, void**);
    using KSelectionProxyModel_SetSourceModel_Callback = void (*)(KSelectionProxyModel*, QAbstractItemModel*);
    using KSelectionProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_MapToSource_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KSelectionProxyModel*, QItemSelection*);
    using KSelectionProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KSelectionProxyModel*, QItemSelection*);
    using KSelectionProxyModel_Flags_Callback = int (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Data_Callback = QVariant* (*)(const KSelectionProxyModel*, QModelIndex*, int);
    using KSelectionProxyModel_RowCount_Callback = int (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_HeaderData_Callback = QVariant* (*)(const KSelectionProxyModel*, int, int, int);
    using KSelectionProxyModel_MimeData_Callback = QMimeData* (*)(const KSelectionProxyModel*, libqt_list /* of QModelIndex* */);
    using KSelectionProxyModel_MimeTypes_Callback = const char** (*)();
    using KSelectionProxyModel_SupportedDropActions_Callback = int (*)();
    using KSelectionProxyModel_DropMimeData_Callback = bool (*)(KSelectionProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KSelectionProxyModel_HasChildren_Callback = bool (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Index_Callback = QModelIndex* (*)(const KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_Parent_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_ColumnCount_Callback = int (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Match_Callback = QModelIndex** (*)(const KSelectionProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KSelectionProxyModel_Submit_Callback = bool (*)();
    using KSelectionProxyModel_Revert_Callback = void (*)();
    using KSelectionProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_SetData_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, QVariant*, int);
    using KSelectionProxyModel_SetItemData_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KSelectionProxyModel_SetHeaderData_Callback = bool (*)(KSelectionProxyModel*, int, int, QVariant*, int);
    using KSelectionProxyModel_ClearItemData_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Buddy_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_CanFetchMore_Callback = bool (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_FetchMore_Callback = void (*)(KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Sort_Callback = void (*)(KSelectionProxyModel*, int, int);
    using KSelectionProxyModel_Span_Callback = QSize* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Sibling_Callback = QModelIndex* (*)(const KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_CanDropMimeData_Callback = bool (*)(const KSelectionProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KSelectionProxyModel_SupportedDragActions_Callback = int (*)();
    using KSelectionProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KSelectionProxyModel_InsertRows_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_InsertColumns_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_RemoveRows_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_RemoveColumns_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_MoveRows_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KSelectionProxyModel_MoveColumns_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KSelectionProxyModel_MultiData_Callback = void (*)(const KSelectionProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KSelectionProxyModel_ResetInternalData_Callback = void (*)();
    using KSelectionProxyModel_Event_Callback = bool (*)(KSelectionProxyModel*, QEvent*);
    using KSelectionProxyModel_EventFilter_Callback = bool (*)(KSelectionProxyModel*, QObject*, QEvent*);
    using KSelectionProxyModel_TimerEvent_Callback = void (*)(KSelectionProxyModel*, QTimerEvent*);
    using KSelectionProxyModel_ChildEvent_Callback = void (*)(KSelectionProxyModel*, QChildEvent*);
    using KSelectionProxyModel_CustomEvent_Callback = void (*)(KSelectionProxyModel*, QEvent*);
    using KSelectionProxyModel_ConnectNotify_Callback = void (*)(KSelectionProxyModel*, QMetaMethod*);
    using KSelectionProxyModel_DisconnectNotify_Callback = void (*)(KSelectionProxyModel*, QMetaMethod*);
    using KSelectionProxyModel_SourceRootIndexes_Callback = QPersistentModelIndex** (*)();
    using KSelectionProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const KSelectionProxyModel*, int, int, void*);
    using KSelectionProxyModel_CreateIndex_Callback = QModelIndex* (*)(const KSelectionProxyModel*, int, int);
    using KSelectionProxyModel_EncodeData_Callback = void (*)(const KSelectionProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KSelectionProxyModel_DecodeData_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*, QDataStream*);
    using KSelectionProxyModel_BeginInsertRows_Callback = void (*)(KSelectionProxyModel*, QModelIndex*, int, int);
    using KSelectionProxyModel_EndInsertRows_Callback = void (*)();
    using KSelectionProxyModel_BeginRemoveRows_Callback = void (*)(KSelectionProxyModel*, QModelIndex*, int, int);
    using KSelectionProxyModel_EndRemoveRows_Callback = void (*)();
    using KSelectionProxyModel_BeginMoveRows_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KSelectionProxyModel_EndMoveRows_Callback = void (*)();
    using KSelectionProxyModel_BeginInsertColumns_Callback = void (*)(KSelectionProxyModel*, QModelIndex*, int, int);
    using KSelectionProxyModel_EndInsertColumns_Callback = void (*)();
    using KSelectionProxyModel_BeginRemoveColumns_Callback = void (*)(KSelectionProxyModel*, QModelIndex*, int, int);
    using KSelectionProxyModel_EndRemoveColumns_Callback = void (*)();
    using KSelectionProxyModel_BeginMoveColumns_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KSelectionProxyModel_EndMoveColumns_Callback = void (*)();
    using KSelectionProxyModel_BeginResetModel_Callback = void (*)();
    using KSelectionProxyModel_EndResetModel_Callback = void (*)();
    using KSelectionProxyModel_ChangePersistentIndex_Callback = void (*)(KSelectionProxyModel*, QModelIndex*, QModelIndex*);
    using KSelectionProxyModel_ChangePersistentIndexList_Callback = void (*)(KSelectionProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KSelectionProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KSelectionProxyModel_Sender_Callback = QObject* (*)();
    using KSelectionProxyModel_SenderSignalIndex_Callback = int (*)();
    using KSelectionProxyModel_Receivers_Callback = int (*)(const KSelectionProxyModel*, const char*);
    using KSelectionProxyModel_IsSignalConnected_Callback = bool (*)(const KSelectionProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSelectionProxyModel_Metacall_Callback kselectionproxymodel_metacall_callback = nullptr;
    KSelectionProxyModel_SetSourceModel_Callback kselectionproxymodel_setsourcemodel_callback = nullptr;
    KSelectionProxyModel_MapFromSource_Callback kselectionproxymodel_mapfromsource_callback = nullptr;
    KSelectionProxyModel_MapToSource_Callback kselectionproxymodel_maptosource_callback = nullptr;
    KSelectionProxyModel_MapSelectionFromSource_Callback kselectionproxymodel_mapselectionfromsource_callback = nullptr;
    KSelectionProxyModel_MapSelectionToSource_Callback kselectionproxymodel_mapselectiontosource_callback = nullptr;
    KSelectionProxyModel_Flags_Callback kselectionproxymodel_flags_callback = nullptr;
    KSelectionProxyModel_Data_Callback kselectionproxymodel_data_callback = nullptr;
    KSelectionProxyModel_RowCount_Callback kselectionproxymodel_rowcount_callback = nullptr;
    KSelectionProxyModel_HeaderData_Callback kselectionproxymodel_headerdata_callback = nullptr;
    KSelectionProxyModel_MimeData_Callback kselectionproxymodel_mimedata_callback = nullptr;
    KSelectionProxyModel_MimeTypes_Callback kselectionproxymodel_mimetypes_callback = nullptr;
    KSelectionProxyModel_SupportedDropActions_Callback kselectionproxymodel_supporteddropactions_callback = nullptr;
    KSelectionProxyModel_DropMimeData_Callback kselectionproxymodel_dropmimedata_callback = nullptr;
    KSelectionProxyModel_HasChildren_Callback kselectionproxymodel_haschildren_callback = nullptr;
    KSelectionProxyModel_Index_Callback kselectionproxymodel_index_callback = nullptr;
    KSelectionProxyModel_Parent_Callback kselectionproxymodel_parent_callback = nullptr;
    KSelectionProxyModel_ColumnCount_Callback kselectionproxymodel_columncount_callback = nullptr;
    KSelectionProxyModel_Match_Callback kselectionproxymodel_match_callback = nullptr;
    KSelectionProxyModel_Submit_Callback kselectionproxymodel_submit_callback = nullptr;
    KSelectionProxyModel_Revert_Callback kselectionproxymodel_revert_callback = nullptr;
    KSelectionProxyModel_ItemData_Callback kselectionproxymodel_itemdata_callback = nullptr;
    KSelectionProxyModel_SetData_Callback kselectionproxymodel_setdata_callback = nullptr;
    KSelectionProxyModel_SetItemData_Callback kselectionproxymodel_setitemdata_callback = nullptr;
    KSelectionProxyModel_SetHeaderData_Callback kselectionproxymodel_setheaderdata_callback = nullptr;
    KSelectionProxyModel_ClearItemData_Callback kselectionproxymodel_clearitemdata_callback = nullptr;
    KSelectionProxyModel_Buddy_Callback kselectionproxymodel_buddy_callback = nullptr;
    KSelectionProxyModel_CanFetchMore_Callback kselectionproxymodel_canfetchmore_callback = nullptr;
    KSelectionProxyModel_FetchMore_Callback kselectionproxymodel_fetchmore_callback = nullptr;
    KSelectionProxyModel_Sort_Callback kselectionproxymodel_sort_callback = nullptr;
    KSelectionProxyModel_Span_Callback kselectionproxymodel_span_callback = nullptr;
    KSelectionProxyModel_Sibling_Callback kselectionproxymodel_sibling_callback = nullptr;
    KSelectionProxyModel_CanDropMimeData_Callback kselectionproxymodel_candropmimedata_callback = nullptr;
    KSelectionProxyModel_SupportedDragActions_Callback kselectionproxymodel_supporteddragactions_callback = nullptr;
    KSelectionProxyModel_RoleNames_Callback kselectionproxymodel_rolenames_callback = nullptr;
    KSelectionProxyModel_InsertRows_Callback kselectionproxymodel_insertrows_callback = nullptr;
    KSelectionProxyModel_InsertColumns_Callback kselectionproxymodel_insertcolumns_callback = nullptr;
    KSelectionProxyModel_RemoveRows_Callback kselectionproxymodel_removerows_callback = nullptr;
    KSelectionProxyModel_RemoveColumns_Callback kselectionproxymodel_removecolumns_callback = nullptr;
    KSelectionProxyModel_MoveRows_Callback kselectionproxymodel_moverows_callback = nullptr;
    KSelectionProxyModel_MoveColumns_Callback kselectionproxymodel_movecolumns_callback = nullptr;
    KSelectionProxyModel_MultiData_Callback kselectionproxymodel_multidata_callback = nullptr;
    KSelectionProxyModel_ResetInternalData_Callback kselectionproxymodel_resetinternaldata_callback = nullptr;
    KSelectionProxyModel_Event_Callback kselectionproxymodel_event_callback = nullptr;
    KSelectionProxyModel_EventFilter_Callback kselectionproxymodel_eventfilter_callback = nullptr;
    KSelectionProxyModel_TimerEvent_Callback kselectionproxymodel_timerevent_callback = nullptr;
    KSelectionProxyModel_ChildEvent_Callback kselectionproxymodel_childevent_callback = nullptr;
    KSelectionProxyModel_CustomEvent_Callback kselectionproxymodel_customevent_callback = nullptr;
    KSelectionProxyModel_ConnectNotify_Callback kselectionproxymodel_connectnotify_callback = nullptr;
    KSelectionProxyModel_DisconnectNotify_Callback kselectionproxymodel_disconnectnotify_callback = nullptr;
    KSelectionProxyModel_SourceRootIndexes_Callback kselectionproxymodel_sourcerootindexes_callback = nullptr;
    KSelectionProxyModel_CreateSourceIndex_Callback kselectionproxymodel_createsourceindex_callback = nullptr;
    KSelectionProxyModel_CreateIndex_Callback kselectionproxymodel_createindex_callback = nullptr;
    KSelectionProxyModel_EncodeData_Callback kselectionproxymodel_encodedata_callback = nullptr;
    KSelectionProxyModel_DecodeData_Callback kselectionproxymodel_decodedata_callback = nullptr;
    KSelectionProxyModel_BeginInsertRows_Callback kselectionproxymodel_begininsertrows_callback = nullptr;
    KSelectionProxyModel_EndInsertRows_Callback kselectionproxymodel_endinsertrows_callback = nullptr;
    KSelectionProxyModel_BeginRemoveRows_Callback kselectionproxymodel_beginremoverows_callback = nullptr;
    KSelectionProxyModel_EndRemoveRows_Callback kselectionproxymodel_endremoverows_callback = nullptr;
    KSelectionProxyModel_BeginMoveRows_Callback kselectionproxymodel_beginmoverows_callback = nullptr;
    KSelectionProxyModel_EndMoveRows_Callback kselectionproxymodel_endmoverows_callback = nullptr;
    KSelectionProxyModel_BeginInsertColumns_Callback kselectionproxymodel_begininsertcolumns_callback = nullptr;
    KSelectionProxyModel_EndInsertColumns_Callback kselectionproxymodel_endinsertcolumns_callback = nullptr;
    KSelectionProxyModel_BeginRemoveColumns_Callback kselectionproxymodel_beginremovecolumns_callback = nullptr;
    KSelectionProxyModel_EndRemoveColumns_Callback kselectionproxymodel_endremovecolumns_callback = nullptr;
    KSelectionProxyModel_BeginMoveColumns_Callback kselectionproxymodel_beginmovecolumns_callback = nullptr;
    KSelectionProxyModel_EndMoveColumns_Callback kselectionproxymodel_endmovecolumns_callback = nullptr;
    KSelectionProxyModel_BeginResetModel_Callback kselectionproxymodel_beginresetmodel_callback = nullptr;
    KSelectionProxyModel_EndResetModel_Callback kselectionproxymodel_endresetmodel_callback = nullptr;
    KSelectionProxyModel_ChangePersistentIndex_Callback kselectionproxymodel_changepersistentindex_callback = nullptr;
    KSelectionProxyModel_ChangePersistentIndexList_Callback kselectionproxymodel_changepersistentindexlist_callback = nullptr;
    KSelectionProxyModel_PersistentIndexList_Callback kselectionproxymodel_persistentindexlist_callback = nullptr;
    KSelectionProxyModel_Sender_Callback kselectionproxymodel_sender_callback = nullptr;
    KSelectionProxyModel_SenderSignalIndex_Callback kselectionproxymodel_sendersignalindex_callback = nullptr;
    KSelectionProxyModel_Receivers_Callback kselectionproxymodel_receivers_callback = nullptr;
    KSelectionProxyModel_IsSignalConnected_Callback kselectionproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kselectionproxymodel_metacall_isbase = false;
    mutable bool kselectionproxymodel_setsourcemodel_isbase = false;
    mutable bool kselectionproxymodel_mapfromsource_isbase = false;
    mutable bool kselectionproxymodel_maptosource_isbase = false;
    mutable bool kselectionproxymodel_mapselectionfromsource_isbase = false;
    mutable bool kselectionproxymodel_mapselectiontosource_isbase = false;
    mutable bool kselectionproxymodel_flags_isbase = false;
    mutable bool kselectionproxymodel_data_isbase = false;
    mutable bool kselectionproxymodel_rowcount_isbase = false;
    mutable bool kselectionproxymodel_headerdata_isbase = false;
    mutable bool kselectionproxymodel_mimedata_isbase = false;
    mutable bool kselectionproxymodel_mimetypes_isbase = false;
    mutable bool kselectionproxymodel_supporteddropactions_isbase = false;
    mutable bool kselectionproxymodel_dropmimedata_isbase = false;
    mutable bool kselectionproxymodel_haschildren_isbase = false;
    mutable bool kselectionproxymodel_index_isbase = false;
    mutable bool kselectionproxymodel_parent_isbase = false;
    mutable bool kselectionproxymodel_columncount_isbase = false;
    mutable bool kselectionproxymodel_match_isbase = false;
    mutable bool kselectionproxymodel_submit_isbase = false;
    mutable bool kselectionproxymodel_revert_isbase = false;
    mutable bool kselectionproxymodel_itemdata_isbase = false;
    mutable bool kselectionproxymodel_setdata_isbase = false;
    mutable bool kselectionproxymodel_setitemdata_isbase = false;
    mutable bool kselectionproxymodel_setheaderdata_isbase = false;
    mutable bool kselectionproxymodel_clearitemdata_isbase = false;
    mutable bool kselectionproxymodel_buddy_isbase = false;
    mutable bool kselectionproxymodel_canfetchmore_isbase = false;
    mutable bool kselectionproxymodel_fetchmore_isbase = false;
    mutable bool kselectionproxymodel_sort_isbase = false;
    mutable bool kselectionproxymodel_span_isbase = false;
    mutable bool kselectionproxymodel_sibling_isbase = false;
    mutable bool kselectionproxymodel_candropmimedata_isbase = false;
    mutable bool kselectionproxymodel_supporteddragactions_isbase = false;
    mutable bool kselectionproxymodel_rolenames_isbase = false;
    mutable bool kselectionproxymodel_insertrows_isbase = false;
    mutable bool kselectionproxymodel_insertcolumns_isbase = false;
    mutable bool kselectionproxymodel_removerows_isbase = false;
    mutable bool kselectionproxymodel_removecolumns_isbase = false;
    mutable bool kselectionproxymodel_moverows_isbase = false;
    mutable bool kselectionproxymodel_movecolumns_isbase = false;
    mutable bool kselectionproxymodel_multidata_isbase = false;
    mutable bool kselectionproxymodel_resetinternaldata_isbase = false;
    mutable bool kselectionproxymodel_event_isbase = false;
    mutable bool kselectionproxymodel_eventfilter_isbase = false;
    mutable bool kselectionproxymodel_timerevent_isbase = false;
    mutable bool kselectionproxymodel_childevent_isbase = false;
    mutable bool kselectionproxymodel_customevent_isbase = false;
    mutable bool kselectionproxymodel_connectnotify_isbase = false;
    mutable bool kselectionproxymodel_disconnectnotify_isbase = false;
    mutable bool kselectionproxymodel_sourcerootindexes_isbase = false;
    mutable bool kselectionproxymodel_createsourceindex_isbase = false;
    mutable bool kselectionproxymodel_createindex_isbase = false;
    mutable bool kselectionproxymodel_encodedata_isbase = false;
    mutable bool kselectionproxymodel_decodedata_isbase = false;
    mutable bool kselectionproxymodel_begininsertrows_isbase = false;
    mutable bool kselectionproxymodel_endinsertrows_isbase = false;
    mutable bool kselectionproxymodel_beginremoverows_isbase = false;
    mutable bool kselectionproxymodel_endremoverows_isbase = false;
    mutable bool kselectionproxymodel_beginmoverows_isbase = false;
    mutable bool kselectionproxymodel_endmoverows_isbase = false;
    mutable bool kselectionproxymodel_begininsertcolumns_isbase = false;
    mutable bool kselectionproxymodel_endinsertcolumns_isbase = false;
    mutable bool kselectionproxymodel_beginremovecolumns_isbase = false;
    mutable bool kselectionproxymodel_endremovecolumns_isbase = false;
    mutable bool kselectionproxymodel_beginmovecolumns_isbase = false;
    mutable bool kselectionproxymodel_endmovecolumns_isbase = false;
    mutable bool kselectionproxymodel_beginresetmodel_isbase = false;
    mutable bool kselectionproxymodel_endresetmodel_isbase = false;
    mutable bool kselectionproxymodel_changepersistentindex_isbase = false;
    mutable bool kselectionproxymodel_changepersistentindexlist_isbase = false;
    mutable bool kselectionproxymodel_persistentindexlist_isbase = false;
    mutable bool kselectionproxymodel_sender_isbase = false;
    mutable bool kselectionproxymodel_sendersignalindex_isbase = false;
    mutable bool kselectionproxymodel_receivers_isbase = false;
    mutable bool kselectionproxymodel_issignalconnected_isbase = false;

  public:
    VirtualKSelectionProxyModel(QItemSelectionModel* selectionModel) : KSelectionProxyModel(selectionModel) {};
    VirtualKSelectionProxyModel() : KSelectionProxyModel() {};
    VirtualKSelectionProxyModel(QItemSelectionModel* selectionModel, QObject* parent) : KSelectionProxyModel(selectionModel, parent) {};

    ~VirtualKSelectionProxyModel() {
        kselectionproxymodel_metacall_callback = nullptr;
        kselectionproxymodel_setsourcemodel_callback = nullptr;
        kselectionproxymodel_mapfromsource_callback = nullptr;
        kselectionproxymodel_maptosource_callback = nullptr;
        kselectionproxymodel_mapselectionfromsource_callback = nullptr;
        kselectionproxymodel_mapselectiontosource_callback = nullptr;
        kselectionproxymodel_flags_callback = nullptr;
        kselectionproxymodel_data_callback = nullptr;
        kselectionproxymodel_rowcount_callback = nullptr;
        kselectionproxymodel_headerdata_callback = nullptr;
        kselectionproxymodel_mimedata_callback = nullptr;
        kselectionproxymodel_mimetypes_callback = nullptr;
        kselectionproxymodel_supporteddropactions_callback = nullptr;
        kselectionproxymodel_dropmimedata_callback = nullptr;
        kselectionproxymodel_haschildren_callback = nullptr;
        kselectionproxymodel_index_callback = nullptr;
        kselectionproxymodel_parent_callback = nullptr;
        kselectionproxymodel_columncount_callback = nullptr;
        kselectionproxymodel_match_callback = nullptr;
        kselectionproxymodel_submit_callback = nullptr;
        kselectionproxymodel_revert_callback = nullptr;
        kselectionproxymodel_itemdata_callback = nullptr;
        kselectionproxymodel_setdata_callback = nullptr;
        kselectionproxymodel_setitemdata_callback = nullptr;
        kselectionproxymodel_setheaderdata_callback = nullptr;
        kselectionproxymodel_clearitemdata_callback = nullptr;
        kselectionproxymodel_buddy_callback = nullptr;
        kselectionproxymodel_canfetchmore_callback = nullptr;
        kselectionproxymodel_fetchmore_callback = nullptr;
        kselectionproxymodel_sort_callback = nullptr;
        kselectionproxymodel_span_callback = nullptr;
        kselectionproxymodel_sibling_callback = nullptr;
        kselectionproxymodel_candropmimedata_callback = nullptr;
        kselectionproxymodel_supporteddragactions_callback = nullptr;
        kselectionproxymodel_rolenames_callback = nullptr;
        kselectionproxymodel_insertrows_callback = nullptr;
        kselectionproxymodel_insertcolumns_callback = nullptr;
        kselectionproxymodel_removerows_callback = nullptr;
        kselectionproxymodel_removecolumns_callback = nullptr;
        kselectionproxymodel_moverows_callback = nullptr;
        kselectionproxymodel_movecolumns_callback = nullptr;
        kselectionproxymodel_multidata_callback = nullptr;
        kselectionproxymodel_resetinternaldata_callback = nullptr;
        kselectionproxymodel_event_callback = nullptr;
        kselectionproxymodel_eventfilter_callback = nullptr;
        kselectionproxymodel_timerevent_callback = nullptr;
        kselectionproxymodel_childevent_callback = nullptr;
        kselectionproxymodel_customevent_callback = nullptr;
        kselectionproxymodel_connectnotify_callback = nullptr;
        kselectionproxymodel_disconnectnotify_callback = nullptr;
        kselectionproxymodel_sourcerootindexes_callback = nullptr;
        kselectionproxymodel_createsourceindex_callback = nullptr;
        kselectionproxymodel_createindex_callback = nullptr;
        kselectionproxymodel_encodedata_callback = nullptr;
        kselectionproxymodel_decodedata_callback = nullptr;
        kselectionproxymodel_begininsertrows_callback = nullptr;
        kselectionproxymodel_endinsertrows_callback = nullptr;
        kselectionproxymodel_beginremoverows_callback = nullptr;
        kselectionproxymodel_endremoverows_callback = nullptr;
        kselectionproxymodel_beginmoverows_callback = nullptr;
        kselectionproxymodel_endmoverows_callback = nullptr;
        kselectionproxymodel_begininsertcolumns_callback = nullptr;
        kselectionproxymodel_endinsertcolumns_callback = nullptr;
        kselectionproxymodel_beginremovecolumns_callback = nullptr;
        kselectionproxymodel_endremovecolumns_callback = nullptr;
        kselectionproxymodel_beginmovecolumns_callback = nullptr;
        kselectionproxymodel_endmovecolumns_callback = nullptr;
        kselectionproxymodel_beginresetmodel_callback = nullptr;
        kselectionproxymodel_endresetmodel_callback = nullptr;
        kselectionproxymodel_changepersistentindex_callback = nullptr;
        kselectionproxymodel_changepersistentindexlist_callback = nullptr;
        kselectionproxymodel_persistentindexlist_callback = nullptr;
        kselectionproxymodel_sender_callback = nullptr;
        kselectionproxymodel_sendersignalindex_callback = nullptr;
        kselectionproxymodel_receivers_callback = nullptr;
        kselectionproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSelectionProxyModel_Metacall_Callback(KSelectionProxyModel_Metacall_Callback cb) { kselectionproxymodel_metacall_callback = cb; }
    inline void setKSelectionProxyModel_SetSourceModel_Callback(KSelectionProxyModel_SetSourceModel_Callback cb) { kselectionproxymodel_setsourcemodel_callback = cb; }
    inline void setKSelectionProxyModel_MapFromSource_Callback(KSelectionProxyModel_MapFromSource_Callback cb) { kselectionproxymodel_mapfromsource_callback = cb; }
    inline void setKSelectionProxyModel_MapToSource_Callback(KSelectionProxyModel_MapToSource_Callback cb) { kselectionproxymodel_maptosource_callback = cb; }
    inline void setKSelectionProxyModel_MapSelectionFromSource_Callback(KSelectionProxyModel_MapSelectionFromSource_Callback cb) { kselectionproxymodel_mapselectionfromsource_callback = cb; }
    inline void setKSelectionProxyModel_MapSelectionToSource_Callback(KSelectionProxyModel_MapSelectionToSource_Callback cb) { kselectionproxymodel_mapselectiontosource_callback = cb; }
    inline void setKSelectionProxyModel_Flags_Callback(KSelectionProxyModel_Flags_Callback cb) { kselectionproxymodel_flags_callback = cb; }
    inline void setKSelectionProxyModel_Data_Callback(KSelectionProxyModel_Data_Callback cb) { kselectionproxymodel_data_callback = cb; }
    inline void setKSelectionProxyModel_RowCount_Callback(KSelectionProxyModel_RowCount_Callback cb) { kselectionproxymodel_rowcount_callback = cb; }
    inline void setKSelectionProxyModel_HeaderData_Callback(KSelectionProxyModel_HeaderData_Callback cb) { kselectionproxymodel_headerdata_callback = cb; }
    inline void setKSelectionProxyModel_MimeData_Callback(KSelectionProxyModel_MimeData_Callback cb) { kselectionproxymodel_mimedata_callback = cb; }
    inline void setKSelectionProxyModel_MimeTypes_Callback(KSelectionProxyModel_MimeTypes_Callback cb) { kselectionproxymodel_mimetypes_callback = cb; }
    inline void setKSelectionProxyModel_SupportedDropActions_Callback(KSelectionProxyModel_SupportedDropActions_Callback cb) { kselectionproxymodel_supporteddropactions_callback = cb; }
    inline void setKSelectionProxyModel_DropMimeData_Callback(KSelectionProxyModel_DropMimeData_Callback cb) { kselectionproxymodel_dropmimedata_callback = cb; }
    inline void setKSelectionProxyModel_HasChildren_Callback(KSelectionProxyModel_HasChildren_Callback cb) { kselectionproxymodel_haschildren_callback = cb; }
    inline void setKSelectionProxyModel_Index_Callback(KSelectionProxyModel_Index_Callback cb) { kselectionproxymodel_index_callback = cb; }
    inline void setKSelectionProxyModel_Parent_Callback(KSelectionProxyModel_Parent_Callback cb) { kselectionproxymodel_parent_callback = cb; }
    inline void setKSelectionProxyModel_ColumnCount_Callback(KSelectionProxyModel_ColumnCount_Callback cb) { kselectionproxymodel_columncount_callback = cb; }
    inline void setKSelectionProxyModel_Match_Callback(KSelectionProxyModel_Match_Callback cb) { kselectionproxymodel_match_callback = cb; }
    inline void setKSelectionProxyModel_Submit_Callback(KSelectionProxyModel_Submit_Callback cb) { kselectionproxymodel_submit_callback = cb; }
    inline void setKSelectionProxyModel_Revert_Callback(KSelectionProxyModel_Revert_Callback cb) { kselectionproxymodel_revert_callback = cb; }
    inline void setKSelectionProxyModel_ItemData_Callback(KSelectionProxyModel_ItemData_Callback cb) { kselectionproxymodel_itemdata_callback = cb; }
    inline void setKSelectionProxyModel_SetData_Callback(KSelectionProxyModel_SetData_Callback cb) { kselectionproxymodel_setdata_callback = cb; }
    inline void setKSelectionProxyModel_SetItemData_Callback(KSelectionProxyModel_SetItemData_Callback cb) { kselectionproxymodel_setitemdata_callback = cb; }
    inline void setKSelectionProxyModel_SetHeaderData_Callback(KSelectionProxyModel_SetHeaderData_Callback cb) { kselectionproxymodel_setheaderdata_callback = cb; }
    inline void setKSelectionProxyModel_ClearItemData_Callback(KSelectionProxyModel_ClearItemData_Callback cb) { kselectionproxymodel_clearitemdata_callback = cb; }
    inline void setKSelectionProxyModel_Buddy_Callback(KSelectionProxyModel_Buddy_Callback cb) { kselectionproxymodel_buddy_callback = cb; }
    inline void setKSelectionProxyModel_CanFetchMore_Callback(KSelectionProxyModel_CanFetchMore_Callback cb) { kselectionproxymodel_canfetchmore_callback = cb; }
    inline void setKSelectionProxyModel_FetchMore_Callback(KSelectionProxyModel_FetchMore_Callback cb) { kselectionproxymodel_fetchmore_callback = cb; }
    inline void setKSelectionProxyModel_Sort_Callback(KSelectionProxyModel_Sort_Callback cb) { kselectionproxymodel_sort_callback = cb; }
    inline void setKSelectionProxyModel_Span_Callback(KSelectionProxyModel_Span_Callback cb) { kselectionproxymodel_span_callback = cb; }
    inline void setKSelectionProxyModel_Sibling_Callback(KSelectionProxyModel_Sibling_Callback cb) { kselectionproxymodel_sibling_callback = cb; }
    inline void setKSelectionProxyModel_CanDropMimeData_Callback(KSelectionProxyModel_CanDropMimeData_Callback cb) { kselectionproxymodel_candropmimedata_callback = cb; }
    inline void setKSelectionProxyModel_SupportedDragActions_Callback(KSelectionProxyModel_SupportedDragActions_Callback cb) { kselectionproxymodel_supporteddragactions_callback = cb; }
    inline void setKSelectionProxyModel_RoleNames_Callback(KSelectionProxyModel_RoleNames_Callback cb) { kselectionproxymodel_rolenames_callback = cb; }
    inline void setKSelectionProxyModel_InsertRows_Callback(KSelectionProxyModel_InsertRows_Callback cb) { kselectionproxymodel_insertrows_callback = cb; }
    inline void setKSelectionProxyModel_InsertColumns_Callback(KSelectionProxyModel_InsertColumns_Callback cb) { kselectionproxymodel_insertcolumns_callback = cb; }
    inline void setKSelectionProxyModel_RemoveRows_Callback(KSelectionProxyModel_RemoveRows_Callback cb) { kselectionproxymodel_removerows_callback = cb; }
    inline void setKSelectionProxyModel_RemoveColumns_Callback(KSelectionProxyModel_RemoveColumns_Callback cb) { kselectionproxymodel_removecolumns_callback = cb; }
    inline void setKSelectionProxyModel_MoveRows_Callback(KSelectionProxyModel_MoveRows_Callback cb) { kselectionproxymodel_moverows_callback = cb; }
    inline void setKSelectionProxyModel_MoveColumns_Callback(KSelectionProxyModel_MoveColumns_Callback cb) { kselectionproxymodel_movecolumns_callback = cb; }
    inline void setKSelectionProxyModel_MultiData_Callback(KSelectionProxyModel_MultiData_Callback cb) { kselectionproxymodel_multidata_callback = cb; }
    inline void setKSelectionProxyModel_ResetInternalData_Callback(KSelectionProxyModel_ResetInternalData_Callback cb) { kselectionproxymodel_resetinternaldata_callback = cb; }
    inline void setKSelectionProxyModel_Event_Callback(KSelectionProxyModel_Event_Callback cb) { kselectionproxymodel_event_callback = cb; }
    inline void setKSelectionProxyModel_EventFilter_Callback(KSelectionProxyModel_EventFilter_Callback cb) { kselectionproxymodel_eventfilter_callback = cb; }
    inline void setKSelectionProxyModel_TimerEvent_Callback(KSelectionProxyModel_TimerEvent_Callback cb) { kselectionproxymodel_timerevent_callback = cb; }
    inline void setKSelectionProxyModel_ChildEvent_Callback(KSelectionProxyModel_ChildEvent_Callback cb) { kselectionproxymodel_childevent_callback = cb; }
    inline void setKSelectionProxyModel_CustomEvent_Callback(KSelectionProxyModel_CustomEvent_Callback cb) { kselectionproxymodel_customevent_callback = cb; }
    inline void setKSelectionProxyModel_ConnectNotify_Callback(KSelectionProxyModel_ConnectNotify_Callback cb) { kselectionproxymodel_connectnotify_callback = cb; }
    inline void setKSelectionProxyModel_DisconnectNotify_Callback(KSelectionProxyModel_DisconnectNotify_Callback cb) { kselectionproxymodel_disconnectnotify_callback = cb; }
    inline void setKSelectionProxyModel_SourceRootIndexes_Callback(KSelectionProxyModel_SourceRootIndexes_Callback cb) { kselectionproxymodel_sourcerootindexes_callback = cb; }
    inline void setKSelectionProxyModel_CreateSourceIndex_Callback(KSelectionProxyModel_CreateSourceIndex_Callback cb) { kselectionproxymodel_createsourceindex_callback = cb; }
    inline void setKSelectionProxyModel_CreateIndex_Callback(KSelectionProxyModel_CreateIndex_Callback cb) { kselectionproxymodel_createindex_callback = cb; }
    inline void setKSelectionProxyModel_EncodeData_Callback(KSelectionProxyModel_EncodeData_Callback cb) { kselectionproxymodel_encodedata_callback = cb; }
    inline void setKSelectionProxyModel_DecodeData_Callback(KSelectionProxyModel_DecodeData_Callback cb) { kselectionproxymodel_decodedata_callback = cb; }
    inline void setKSelectionProxyModel_BeginInsertRows_Callback(KSelectionProxyModel_BeginInsertRows_Callback cb) { kselectionproxymodel_begininsertrows_callback = cb; }
    inline void setKSelectionProxyModel_EndInsertRows_Callback(KSelectionProxyModel_EndInsertRows_Callback cb) { kselectionproxymodel_endinsertrows_callback = cb; }
    inline void setKSelectionProxyModel_BeginRemoveRows_Callback(KSelectionProxyModel_BeginRemoveRows_Callback cb) { kselectionproxymodel_beginremoverows_callback = cb; }
    inline void setKSelectionProxyModel_EndRemoveRows_Callback(KSelectionProxyModel_EndRemoveRows_Callback cb) { kselectionproxymodel_endremoverows_callback = cb; }
    inline void setKSelectionProxyModel_BeginMoveRows_Callback(KSelectionProxyModel_BeginMoveRows_Callback cb) { kselectionproxymodel_beginmoverows_callback = cb; }
    inline void setKSelectionProxyModel_EndMoveRows_Callback(KSelectionProxyModel_EndMoveRows_Callback cb) { kselectionproxymodel_endmoverows_callback = cb; }
    inline void setKSelectionProxyModel_BeginInsertColumns_Callback(KSelectionProxyModel_BeginInsertColumns_Callback cb) { kselectionproxymodel_begininsertcolumns_callback = cb; }
    inline void setKSelectionProxyModel_EndInsertColumns_Callback(KSelectionProxyModel_EndInsertColumns_Callback cb) { kselectionproxymodel_endinsertcolumns_callback = cb; }
    inline void setKSelectionProxyModel_BeginRemoveColumns_Callback(KSelectionProxyModel_BeginRemoveColumns_Callback cb) { kselectionproxymodel_beginremovecolumns_callback = cb; }
    inline void setKSelectionProxyModel_EndRemoveColumns_Callback(KSelectionProxyModel_EndRemoveColumns_Callback cb) { kselectionproxymodel_endremovecolumns_callback = cb; }
    inline void setKSelectionProxyModel_BeginMoveColumns_Callback(KSelectionProxyModel_BeginMoveColumns_Callback cb) { kselectionproxymodel_beginmovecolumns_callback = cb; }
    inline void setKSelectionProxyModel_EndMoveColumns_Callback(KSelectionProxyModel_EndMoveColumns_Callback cb) { kselectionproxymodel_endmovecolumns_callback = cb; }
    inline void setKSelectionProxyModel_BeginResetModel_Callback(KSelectionProxyModel_BeginResetModel_Callback cb) { kselectionproxymodel_beginresetmodel_callback = cb; }
    inline void setKSelectionProxyModel_EndResetModel_Callback(KSelectionProxyModel_EndResetModel_Callback cb) { kselectionproxymodel_endresetmodel_callback = cb; }
    inline void setKSelectionProxyModel_ChangePersistentIndex_Callback(KSelectionProxyModel_ChangePersistentIndex_Callback cb) { kselectionproxymodel_changepersistentindex_callback = cb; }
    inline void setKSelectionProxyModel_ChangePersistentIndexList_Callback(KSelectionProxyModel_ChangePersistentIndexList_Callback cb) { kselectionproxymodel_changepersistentindexlist_callback = cb; }
    inline void setKSelectionProxyModel_PersistentIndexList_Callback(KSelectionProxyModel_PersistentIndexList_Callback cb) { kselectionproxymodel_persistentindexlist_callback = cb; }
    inline void setKSelectionProxyModel_Sender_Callback(KSelectionProxyModel_Sender_Callback cb) { kselectionproxymodel_sender_callback = cb; }
    inline void setKSelectionProxyModel_SenderSignalIndex_Callback(KSelectionProxyModel_SenderSignalIndex_Callback cb) { kselectionproxymodel_sendersignalindex_callback = cb; }
    inline void setKSelectionProxyModel_Receivers_Callback(KSelectionProxyModel_Receivers_Callback cb) { kselectionproxymodel_receivers_callback = cb; }
    inline void setKSelectionProxyModel_IsSignalConnected_Callback(KSelectionProxyModel_IsSignalConnected_Callback cb) { kselectionproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSelectionProxyModel_Metacall_IsBase(bool value) const { kselectionproxymodel_metacall_isbase = value; }
    inline void setKSelectionProxyModel_SetSourceModel_IsBase(bool value) const { kselectionproxymodel_setsourcemodel_isbase = value; }
    inline void setKSelectionProxyModel_MapFromSource_IsBase(bool value) const { kselectionproxymodel_mapfromsource_isbase = value; }
    inline void setKSelectionProxyModel_MapToSource_IsBase(bool value) const { kselectionproxymodel_maptosource_isbase = value; }
    inline void setKSelectionProxyModel_MapSelectionFromSource_IsBase(bool value) const { kselectionproxymodel_mapselectionfromsource_isbase = value; }
    inline void setKSelectionProxyModel_MapSelectionToSource_IsBase(bool value) const { kselectionproxymodel_mapselectiontosource_isbase = value; }
    inline void setKSelectionProxyModel_Flags_IsBase(bool value) const { kselectionproxymodel_flags_isbase = value; }
    inline void setKSelectionProxyModel_Data_IsBase(bool value) const { kselectionproxymodel_data_isbase = value; }
    inline void setKSelectionProxyModel_RowCount_IsBase(bool value) const { kselectionproxymodel_rowcount_isbase = value; }
    inline void setKSelectionProxyModel_HeaderData_IsBase(bool value) const { kselectionproxymodel_headerdata_isbase = value; }
    inline void setKSelectionProxyModel_MimeData_IsBase(bool value) const { kselectionproxymodel_mimedata_isbase = value; }
    inline void setKSelectionProxyModel_MimeTypes_IsBase(bool value) const { kselectionproxymodel_mimetypes_isbase = value; }
    inline void setKSelectionProxyModel_SupportedDropActions_IsBase(bool value) const { kselectionproxymodel_supporteddropactions_isbase = value; }
    inline void setKSelectionProxyModel_DropMimeData_IsBase(bool value) const { kselectionproxymodel_dropmimedata_isbase = value; }
    inline void setKSelectionProxyModel_HasChildren_IsBase(bool value) const { kselectionproxymodel_haschildren_isbase = value; }
    inline void setKSelectionProxyModel_Index_IsBase(bool value) const { kselectionproxymodel_index_isbase = value; }
    inline void setKSelectionProxyModel_Parent_IsBase(bool value) const { kselectionproxymodel_parent_isbase = value; }
    inline void setKSelectionProxyModel_ColumnCount_IsBase(bool value) const { kselectionproxymodel_columncount_isbase = value; }
    inline void setKSelectionProxyModel_Match_IsBase(bool value) const { kselectionproxymodel_match_isbase = value; }
    inline void setKSelectionProxyModel_Submit_IsBase(bool value) const { kselectionproxymodel_submit_isbase = value; }
    inline void setKSelectionProxyModel_Revert_IsBase(bool value) const { kselectionproxymodel_revert_isbase = value; }
    inline void setKSelectionProxyModel_ItemData_IsBase(bool value) const { kselectionproxymodel_itemdata_isbase = value; }
    inline void setKSelectionProxyModel_SetData_IsBase(bool value) const { kselectionproxymodel_setdata_isbase = value; }
    inline void setKSelectionProxyModel_SetItemData_IsBase(bool value) const { kselectionproxymodel_setitemdata_isbase = value; }
    inline void setKSelectionProxyModel_SetHeaderData_IsBase(bool value) const { kselectionproxymodel_setheaderdata_isbase = value; }
    inline void setKSelectionProxyModel_ClearItemData_IsBase(bool value) const { kselectionproxymodel_clearitemdata_isbase = value; }
    inline void setKSelectionProxyModel_Buddy_IsBase(bool value) const { kselectionproxymodel_buddy_isbase = value; }
    inline void setKSelectionProxyModel_CanFetchMore_IsBase(bool value) const { kselectionproxymodel_canfetchmore_isbase = value; }
    inline void setKSelectionProxyModel_FetchMore_IsBase(bool value) const { kselectionproxymodel_fetchmore_isbase = value; }
    inline void setKSelectionProxyModel_Sort_IsBase(bool value) const { kselectionproxymodel_sort_isbase = value; }
    inline void setKSelectionProxyModel_Span_IsBase(bool value) const { kselectionproxymodel_span_isbase = value; }
    inline void setKSelectionProxyModel_Sibling_IsBase(bool value) const { kselectionproxymodel_sibling_isbase = value; }
    inline void setKSelectionProxyModel_CanDropMimeData_IsBase(bool value) const { kselectionproxymodel_candropmimedata_isbase = value; }
    inline void setKSelectionProxyModel_SupportedDragActions_IsBase(bool value) const { kselectionproxymodel_supporteddragactions_isbase = value; }
    inline void setKSelectionProxyModel_RoleNames_IsBase(bool value) const { kselectionproxymodel_rolenames_isbase = value; }
    inline void setKSelectionProxyModel_InsertRows_IsBase(bool value) const { kselectionproxymodel_insertrows_isbase = value; }
    inline void setKSelectionProxyModel_InsertColumns_IsBase(bool value) const { kselectionproxymodel_insertcolumns_isbase = value; }
    inline void setKSelectionProxyModel_RemoveRows_IsBase(bool value) const { kselectionproxymodel_removerows_isbase = value; }
    inline void setKSelectionProxyModel_RemoveColumns_IsBase(bool value) const { kselectionproxymodel_removecolumns_isbase = value; }
    inline void setKSelectionProxyModel_MoveRows_IsBase(bool value) const { kselectionproxymodel_moverows_isbase = value; }
    inline void setKSelectionProxyModel_MoveColumns_IsBase(bool value) const { kselectionproxymodel_movecolumns_isbase = value; }
    inline void setKSelectionProxyModel_MultiData_IsBase(bool value) const { kselectionproxymodel_multidata_isbase = value; }
    inline void setKSelectionProxyModel_ResetInternalData_IsBase(bool value) const { kselectionproxymodel_resetinternaldata_isbase = value; }
    inline void setKSelectionProxyModel_Event_IsBase(bool value) const { kselectionproxymodel_event_isbase = value; }
    inline void setKSelectionProxyModel_EventFilter_IsBase(bool value) const { kselectionproxymodel_eventfilter_isbase = value; }
    inline void setKSelectionProxyModel_TimerEvent_IsBase(bool value) const { kselectionproxymodel_timerevent_isbase = value; }
    inline void setKSelectionProxyModel_ChildEvent_IsBase(bool value) const { kselectionproxymodel_childevent_isbase = value; }
    inline void setKSelectionProxyModel_CustomEvent_IsBase(bool value) const { kselectionproxymodel_customevent_isbase = value; }
    inline void setKSelectionProxyModel_ConnectNotify_IsBase(bool value) const { kselectionproxymodel_connectnotify_isbase = value; }
    inline void setKSelectionProxyModel_DisconnectNotify_IsBase(bool value) const { kselectionproxymodel_disconnectnotify_isbase = value; }
    inline void setKSelectionProxyModel_SourceRootIndexes_IsBase(bool value) const { kselectionproxymodel_sourcerootindexes_isbase = value; }
    inline void setKSelectionProxyModel_CreateSourceIndex_IsBase(bool value) const { kselectionproxymodel_createsourceindex_isbase = value; }
    inline void setKSelectionProxyModel_CreateIndex_IsBase(bool value) const { kselectionproxymodel_createindex_isbase = value; }
    inline void setKSelectionProxyModel_EncodeData_IsBase(bool value) const { kselectionproxymodel_encodedata_isbase = value; }
    inline void setKSelectionProxyModel_DecodeData_IsBase(bool value) const { kselectionproxymodel_decodedata_isbase = value; }
    inline void setKSelectionProxyModel_BeginInsertRows_IsBase(bool value) const { kselectionproxymodel_begininsertrows_isbase = value; }
    inline void setKSelectionProxyModel_EndInsertRows_IsBase(bool value) const { kselectionproxymodel_endinsertrows_isbase = value; }
    inline void setKSelectionProxyModel_BeginRemoveRows_IsBase(bool value) const { kselectionproxymodel_beginremoverows_isbase = value; }
    inline void setKSelectionProxyModel_EndRemoveRows_IsBase(bool value) const { kselectionproxymodel_endremoverows_isbase = value; }
    inline void setKSelectionProxyModel_BeginMoveRows_IsBase(bool value) const { kselectionproxymodel_beginmoverows_isbase = value; }
    inline void setKSelectionProxyModel_EndMoveRows_IsBase(bool value) const { kselectionproxymodel_endmoverows_isbase = value; }
    inline void setKSelectionProxyModel_BeginInsertColumns_IsBase(bool value) const { kselectionproxymodel_begininsertcolumns_isbase = value; }
    inline void setKSelectionProxyModel_EndInsertColumns_IsBase(bool value) const { kselectionproxymodel_endinsertcolumns_isbase = value; }
    inline void setKSelectionProxyModel_BeginRemoveColumns_IsBase(bool value) const { kselectionproxymodel_beginremovecolumns_isbase = value; }
    inline void setKSelectionProxyModel_EndRemoveColumns_IsBase(bool value) const { kselectionproxymodel_endremovecolumns_isbase = value; }
    inline void setKSelectionProxyModel_BeginMoveColumns_IsBase(bool value) const { kselectionproxymodel_beginmovecolumns_isbase = value; }
    inline void setKSelectionProxyModel_EndMoveColumns_IsBase(bool value) const { kselectionproxymodel_endmovecolumns_isbase = value; }
    inline void setKSelectionProxyModel_BeginResetModel_IsBase(bool value) const { kselectionproxymodel_beginresetmodel_isbase = value; }
    inline void setKSelectionProxyModel_EndResetModel_IsBase(bool value) const { kselectionproxymodel_endresetmodel_isbase = value; }
    inline void setKSelectionProxyModel_ChangePersistentIndex_IsBase(bool value) const { kselectionproxymodel_changepersistentindex_isbase = value; }
    inline void setKSelectionProxyModel_ChangePersistentIndexList_IsBase(bool value) const { kselectionproxymodel_changepersistentindexlist_isbase = value; }
    inline void setKSelectionProxyModel_PersistentIndexList_IsBase(bool value) const { kselectionproxymodel_persistentindexlist_isbase = value; }
    inline void setKSelectionProxyModel_Sender_IsBase(bool value) const { kselectionproxymodel_sender_isbase = value; }
    inline void setKSelectionProxyModel_SenderSignalIndex_IsBase(bool value) const { kselectionproxymodel_sendersignalindex_isbase = value; }
    inline void setKSelectionProxyModel_Receivers_IsBase(bool value) const { kselectionproxymodel_receivers_isbase = value; }
    inline void setKSelectionProxyModel_IsSignalConnected_IsBase(bool value) const { kselectionproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectionproxymodel_metacall_isbase) {
            kselectionproxymodel_metacall_isbase = false;
            return KSelectionProxyModel::qt_metacall(param1, param2, param3);
        } else if (kselectionproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kselectionproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kselectionproxymodel_setsourcemodel_isbase) {
            kselectionproxymodel_setsourcemodel_isbase = false;
            KSelectionProxyModel::setSourceModel(sourceModel);
        } else if (kselectionproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            kselectionproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            KSelectionProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kselectionproxymodel_mapfromsource_isbase) {
            kselectionproxymodel_mapfromsource_isbase = false;
            return KSelectionProxyModel::mapFromSource(sourceIndex);
        } else if (kselectionproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = kselectionproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kselectionproxymodel_maptosource_isbase) {
            kselectionproxymodel_maptosource_isbase = false;
            return KSelectionProxyModel::mapToSource(proxyIndex);
        } else if (kselectionproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = kselectionproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kselectionproxymodel_mapselectionfromsource_isbase) {
            kselectionproxymodel_mapselectionfromsource_isbase = false;
            return KSelectionProxyModel::mapSelectionFromSource(selection);
        } else if (kselectionproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kselectionproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kselectionproxymodel_mapselectiontosource_isbase) {
            kselectionproxymodel_mapselectiontosource_isbase = false;
            return KSelectionProxyModel::mapSelectionToSource(selection);
        } else if (kselectionproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = kselectionproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kselectionproxymodel_flags_isbase) {
            kselectionproxymodel_flags_isbase = false;
            return KSelectionProxyModel::flags(index);
        } else if (kselectionproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kselectionproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KSelectionProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kselectionproxymodel_data_isbase) {
            kselectionproxymodel_data_isbase = false;
            return KSelectionProxyModel::data(index, role);
        } else if (kselectionproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kselectionproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kselectionproxymodel_rowcount_isbase) {
            kselectionproxymodel_rowcount_isbase = false;
            return KSelectionProxyModel::rowCount(parent);
        } else if (kselectionproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kselectionproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kselectionproxymodel_headerdata_isbase) {
            kselectionproxymodel_headerdata_isbase = false;
            return KSelectionProxyModel::headerData(section, orientation, role);
        } else if (kselectionproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kselectionproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kselectionproxymodel_mimedata_isbase) {
            kselectionproxymodel_mimedata_isbase = false;
            return KSelectionProxyModel::mimeData(indexes);
        } else if (kselectionproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kselectionproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kselectionproxymodel_mimetypes_isbase) {
            kselectionproxymodel_mimetypes_isbase = false;
            return KSelectionProxyModel::mimeTypes();
        } else if (kselectionproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kselectionproxymodel_mimetypes_callback();
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
            return KSelectionProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kselectionproxymodel_supporteddropactions_isbase) {
            kselectionproxymodel_supporteddropactions_isbase = false;
            return KSelectionProxyModel::supportedDropActions();
        } else if (kselectionproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kselectionproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KSelectionProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kselectionproxymodel_dropmimedata_isbase) {
            kselectionproxymodel_dropmimedata_isbase = false;
            return KSelectionProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (kselectionproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KSelectionProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kselectionproxymodel_haschildren_isbase) {
            kselectionproxymodel_haschildren_isbase = false;
            return KSelectionProxyModel::hasChildren(parent);
        } else if (kselectionproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int param1, int param2, const QModelIndex& param3) const override {
        if (kselectionproxymodel_index_isbase) {
            kselectionproxymodel_index_isbase = false;
            return KSelectionProxyModel::index(param1, param2, param3);
        } else if (kselectionproxymodel_index_callback != nullptr) {
            int cbval1 = param1;
            int cbval2 = param2;
            const QModelIndex& param3_ret = param3;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&param3_ret);

            QModelIndex* callback_ret = kselectionproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::index(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& param1) const override {
        if (kselectionproxymodel_parent_isbase) {
            kselectionproxymodel_parent_isbase = false;
            return KSelectionProxyModel::parent(param1);
        } else if (kselectionproxymodel_parent_callback != nullptr) {
            const QModelIndex& param1_ret = param1;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&param1_ret);

            QModelIndex* callback_ret = kselectionproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::parent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& param1) const override {
        if (kselectionproxymodel_columncount_isbase) {
            kselectionproxymodel_columncount_isbase = false;
            return KSelectionProxyModel::columnCount(param1);
        } else if (kselectionproxymodel_columncount_callback != nullptr) {
            const QModelIndex& param1_ret = param1;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&param1_ret);

            int callback_ret = kselectionproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionProxyModel::columnCount(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kselectionproxymodel_match_isbase) {
            kselectionproxymodel_match_isbase = false;
            return KSelectionProxyModel::match(start, role, value, hits, flags);
        } else if (kselectionproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kselectionproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KSelectionProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kselectionproxymodel_submit_isbase) {
            kselectionproxymodel_submit_isbase = false;
            return KSelectionProxyModel::submit();
        } else if (kselectionproxymodel_submit_callback != nullptr) {
            bool callback_ret = kselectionproxymodel_submit_callback();
            return callback_ret;
        } else {
            return KSelectionProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kselectionproxymodel_revert_isbase) {
            kselectionproxymodel_revert_isbase = false;
            KSelectionProxyModel::revert();
        } else if (kselectionproxymodel_revert_callback != nullptr) {
            kselectionproxymodel_revert_callback();
        } else {
            KSelectionProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kselectionproxymodel_itemdata_isbase) {
            kselectionproxymodel_itemdata_isbase = false;
            return KSelectionProxyModel::itemData(index);
        } else if (kselectionproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kselectionproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KSelectionProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kselectionproxymodel_setdata_isbase) {
            kselectionproxymodel_setdata_isbase = false;
            return KSelectionProxyModel::setData(index, value, role);
        } else if (kselectionproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kselectionproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSelectionProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kselectionproxymodel_setitemdata_isbase) {
            kselectionproxymodel_setitemdata_isbase = false;
            return KSelectionProxyModel::setItemData(index, roles);
        } else if (kselectionproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kselectionproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSelectionProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kselectionproxymodel_setheaderdata_isbase) {
            kselectionproxymodel_setheaderdata_isbase = false;
            return KSelectionProxyModel::setHeaderData(section, orientation, value, role);
        } else if (kselectionproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kselectionproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KSelectionProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kselectionproxymodel_clearitemdata_isbase) {
            kselectionproxymodel_clearitemdata_isbase = false;
            return KSelectionProxyModel::clearItemData(index);
        } else if (kselectionproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kselectionproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kselectionproxymodel_buddy_isbase) {
            kselectionproxymodel_buddy_isbase = false;
            return KSelectionProxyModel::buddy(index);
        } else if (kselectionproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kselectionproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kselectionproxymodel_canfetchmore_isbase) {
            kselectionproxymodel_canfetchmore_isbase = false;
            return KSelectionProxyModel::canFetchMore(parent);
        } else if (kselectionproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kselectionproxymodel_fetchmore_isbase) {
            kselectionproxymodel_fetchmore_isbase = false;
            KSelectionProxyModel::fetchMore(parent);
        } else if (kselectionproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kselectionproxymodel_fetchmore_callback(this, cbval1);
        } else {
            KSelectionProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kselectionproxymodel_sort_isbase) {
            kselectionproxymodel_sort_isbase = false;
            KSelectionProxyModel::sort(column, order);
        } else if (kselectionproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kselectionproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            KSelectionProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kselectionproxymodel_span_isbase) {
            kselectionproxymodel_span_isbase = false;
            return KSelectionProxyModel::span(index);
        } else if (kselectionproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kselectionproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kselectionproxymodel_sibling_isbase) {
            kselectionproxymodel_sibling_isbase = false;
            return KSelectionProxyModel::sibling(row, column, idx);
        } else if (kselectionproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kselectionproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kselectionproxymodel_candropmimedata_isbase) {
            kselectionproxymodel_candropmimedata_isbase = false;
            return KSelectionProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (kselectionproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KSelectionProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kselectionproxymodel_supporteddragactions_isbase) {
            kselectionproxymodel_supporteddragactions_isbase = false;
            return KSelectionProxyModel::supportedDragActions();
        } else if (kselectionproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kselectionproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KSelectionProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kselectionproxymodel_rolenames_isbase) {
            kselectionproxymodel_rolenames_isbase = false;
            return KSelectionProxyModel::roleNames();
        } else if (kselectionproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kselectionproxymodel_rolenames_callback();
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
            return KSelectionProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_insertrows_isbase) {
            kselectionproxymodel_insertrows_isbase = false;
            return KSelectionProxyModel::insertRows(row, count, parent);
        } else if (kselectionproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSelectionProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_insertcolumns_isbase) {
            kselectionproxymodel_insertcolumns_isbase = false;
            return KSelectionProxyModel::insertColumns(column, count, parent);
        } else if (kselectionproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSelectionProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_removerows_isbase) {
            kselectionproxymodel_removerows_isbase = false;
            return KSelectionProxyModel::removeRows(row, count, parent);
        } else if (kselectionproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSelectionProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_removecolumns_isbase) {
            kselectionproxymodel_removecolumns_isbase = false;
            return KSelectionProxyModel::removeColumns(column, count, parent);
        } else if (kselectionproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kselectionproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSelectionProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kselectionproxymodel_moverows_isbase) {
            kselectionproxymodel_moverows_isbase = false;
            return KSelectionProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kselectionproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kselectionproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KSelectionProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kselectionproxymodel_movecolumns_isbase) {
            kselectionproxymodel_movecolumns_isbase = false;
            return KSelectionProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kselectionproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kselectionproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KSelectionProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kselectionproxymodel_multidata_isbase) {
            kselectionproxymodel_multidata_isbase = false;
            KSelectionProxyModel::multiData(index, roleDataSpan);
        } else if (kselectionproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kselectionproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KSelectionProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kselectionproxymodel_resetinternaldata_isbase) {
            kselectionproxymodel_resetinternaldata_isbase = false;
            KSelectionProxyModel::resetInternalData();
        } else if (kselectionproxymodel_resetinternaldata_callback != nullptr) {
            kselectionproxymodel_resetinternaldata_callback();
        } else {
            KSelectionProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectionproxymodel_event_isbase) {
            kselectionproxymodel_event_isbase = false;
            return KSelectionProxyModel::event(event);
        } else if (kselectionproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kselectionproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectionproxymodel_eventfilter_isbase) {
            kselectionproxymodel_eventfilter_isbase = false;
            return KSelectionProxyModel::eventFilter(watched, event);
        } else if (kselectionproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kselectionproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSelectionProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectionproxymodel_timerevent_isbase) {
            kselectionproxymodel_timerevent_isbase = false;
            KSelectionProxyModel::timerEvent(event);
        } else if (kselectionproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kselectionproxymodel_timerevent_callback(this, cbval1);
        } else {
            KSelectionProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectionproxymodel_childevent_isbase) {
            kselectionproxymodel_childevent_isbase = false;
            KSelectionProxyModel::childEvent(event);
        } else if (kselectionproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kselectionproxymodel_childevent_callback(this, cbval1);
        } else {
            KSelectionProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectionproxymodel_customevent_isbase) {
            kselectionproxymodel_customevent_isbase = false;
            KSelectionProxyModel::customEvent(event);
        } else if (kselectionproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kselectionproxymodel_customevent_callback(this, cbval1);
        } else {
            KSelectionProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectionproxymodel_connectnotify_isbase) {
            kselectionproxymodel_connectnotify_isbase = false;
            KSelectionProxyModel::connectNotify(signal);
        } else if (kselectionproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kselectionproxymodel_connectnotify_callback(this, cbval1);
        } else {
            KSelectionProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectionproxymodel_disconnectnotify_isbase) {
            kselectionproxymodel_disconnectnotify_isbase = false;
            KSelectionProxyModel::disconnectNotify(signal);
        } else if (kselectionproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kselectionproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            KSelectionProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QPersistentModelIndex> sourceRootIndexes() const {
        if (kselectionproxymodel_sourcerootindexes_isbase) {
            kselectionproxymodel_sourcerootindexes_isbase = false;
            return KSelectionProxyModel::sourceRootIndexes();
        } else if (kselectionproxymodel_sourcerootindexes_callback != nullptr) {
            QPersistentModelIndex** callback_ret = kselectionproxymodel_sourcerootindexes_callback();
            QList<QPersistentModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QPersistentModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KSelectionProxyModel::sourceRootIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (kselectionproxymodel_createsourceindex_isbase) {
            kselectionproxymodel_createsourceindex_isbase = false;
            return KSelectionProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (kselectionproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = kselectionproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kselectionproxymodel_createindex_isbase) {
            kselectionproxymodel_createindex_isbase = false;
            return KSelectionProxyModel::createIndex(row, column);
        } else if (kselectionproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kselectionproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KSelectionProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kselectionproxymodel_encodedata_isbase) {
            kselectionproxymodel_encodedata_isbase = false;
            KSelectionProxyModel::encodeData(indexes, stream);
        } else if (kselectionproxymodel_encodedata_callback != nullptr) {
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

            kselectionproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KSelectionProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kselectionproxymodel_decodedata_isbase) {
            kselectionproxymodel_decodedata_isbase = false;
            return KSelectionProxyModel::decodeData(row, column, parent, stream);
        } else if (kselectionproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kselectionproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KSelectionProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kselectionproxymodel_begininsertrows_isbase) {
            kselectionproxymodel_begininsertrows_isbase = false;
            KSelectionProxyModel::beginInsertRows(parent, first, last);
        } else if (kselectionproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kselectionproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KSelectionProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kselectionproxymodel_endinsertrows_isbase) {
            kselectionproxymodel_endinsertrows_isbase = false;
            KSelectionProxyModel::endInsertRows();
        } else if (kselectionproxymodel_endinsertrows_callback != nullptr) {
            kselectionproxymodel_endinsertrows_callback();
        } else {
            KSelectionProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kselectionproxymodel_beginremoverows_isbase) {
            kselectionproxymodel_beginremoverows_isbase = false;
            KSelectionProxyModel::beginRemoveRows(parent, first, last);
        } else if (kselectionproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kselectionproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KSelectionProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kselectionproxymodel_endremoverows_isbase) {
            kselectionproxymodel_endremoverows_isbase = false;
            KSelectionProxyModel::endRemoveRows();
        } else if (kselectionproxymodel_endremoverows_callback != nullptr) {
            kselectionproxymodel_endremoverows_callback();
        } else {
            KSelectionProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kselectionproxymodel_beginmoverows_isbase) {
            kselectionproxymodel_beginmoverows_isbase = false;
            return KSelectionProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kselectionproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kselectionproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KSelectionProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kselectionproxymodel_endmoverows_isbase) {
            kselectionproxymodel_endmoverows_isbase = false;
            KSelectionProxyModel::endMoveRows();
        } else if (kselectionproxymodel_endmoverows_callback != nullptr) {
            kselectionproxymodel_endmoverows_callback();
        } else {
            KSelectionProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kselectionproxymodel_begininsertcolumns_isbase) {
            kselectionproxymodel_begininsertcolumns_isbase = false;
            KSelectionProxyModel::beginInsertColumns(parent, first, last);
        } else if (kselectionproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kselectionproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KSelectionProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kselectionproxymodel_endinsertcolumns_isbase) {
            kselectionproxymodel_endinsertcolumns_isbase = false;
            KSelectionProxyModel::endInsertColumns();
        } else if (kselectionproxymodel_endinsertcolumns_callback != nullptr) {
            kselectionproxymodel_endinsertcolumns_callback();
        } else {
            KSelectionProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kselectionproxymodel_beginremovecolumns_isbase) {
            kselectionproxymodel_beginremovecolumns_isbase = false;
            KSelectionProxyModel::beginRemoveColumns(parent, first, last);
        } else if (kselectionproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kselectionproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KSelectionProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kselectionproxymodel_endremovecolumns_isbase) {
            kselectionproxymodel_endremovecolumns_isbase = false;
            KSelectionProxyModel::endRemoveColumns();
        } else if (kselectionproxymodel_endremovecolumns_callback != nullptr) {
            kselectionproxymodel_endremovecolumns_callback();
        } else {
            KSelectionProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kselectionproxymodel_beginmovecolumns_isbase) {
            kselectionproxymodel_beginmovecolumns_isbase = false;
            return KSelectionProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kselectionproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kselectionproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KSelectionProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kselectionproxymodel_endmovecolumns_isbase) {
            kselectionproxymodel_endmovecolumns_isbase = false;
            KSelectionProxyModel::endMoveColumns();
        } else if (kselectionproxymodel_endmovecolumns_callback != nullptr) {
            kselectionproxymodel_endmovecolumns_callback();
        } else {
            KSelectionProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kselectionproxymodel_beginresetmodel_isbase) {
            kselectionproxymodel_beginresetmodel_isbase = false;
            KSelectionProxyModel::beginResetModel();
        } else if (kselectionproxymodel_beginresetmodel_callback != nullptr) {
            kselectionproxymodel_beginresetmodel_callback();
        } else {
            KSelectionProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kselectionproxymodel_endresetmodel_isbase) {
            kselectionproxymodel_endresetmodel_isbase = false;
            KSelectionProxyModel::endResetModel();
        } else if (kselectionproxymodel_endresetmodel_callback != nullptr) {
            kselectionproxymodel_endresetmodel_callback();
        } else {
            KSelectionProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kselectionproxymodel_changepersistentindex_isbase) {
            kselectionproxymodel_changepersistentindex_isbase = false;
            KSelectionProxyModel::changePersistentIndex(from, to);
        } else if (kselectionproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kselectionproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KSelectionProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kselectionproxymodel_changepersistentindexlist_isbase) {
            kselectionproxymodel_changepersistentindexlist_isbase = false;
            KSelectionProxyModel::changePersistentIndexList(from, to);
        } else if (kselectionproxymodel_changepersistentindexlist_callback != nullptr) {
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

            kselectionproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KSelectionProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kselectionproxymodel_persistentindexlist_isbase) {
            kselectionproxymodel_persistentindexlist_isbase = false;
            return KSelectionProxyModel::persistentIndexList();
        } else if (kselectionproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kselectionproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KSelectionProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kselectionproxymodel_sender_isbase) {
            kselectionproxymodel_sender_isbase = false;
            return KSelectionProxyModel::sender();
        } else if (kselectionproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = kselectionproxymodel_sender_callback();
            return callback_ret;
        } else {
            return KSelectionProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kselectionproxymodel_sendersignalindex_isbase) {
            kselectionproxymodel_sendersignalindex_isbase = false;
            return KSelectionProxyModel::senderSignalIndex();
        } else if (kselectionproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kselectionproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kselectionproxymodel_receivers_isbase) {
            kselectionproxymodel_receivers_isbase = false;
            return KSelectionProxyModel::receivers(signal);
        } else if (kselectionproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kselectionproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectionProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kselectionproxymodel_issignalconnected_isbase) {
            kselectionproxymodel_issignalconnected_isbase = false;
            return KSelectionProxyModel::isSignalConnected(signal);
        } else if (kselectionproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kselectionproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectionProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSelectionProxyModel_ResetInternalData(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseResetInternalData(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_TimerEvent(KSelectionProxyModel* self, QTimerEvent* event);
    friend void KSelectionProxyModel_QBaseTimerEvent(KSelectionProxyModel* self, QTimerEvent* event);
    friend void KSelectionProxyModel_ChildEvent(KSelectionProxyModel* self, QChildEvent* event);
    friend void KSelectionProxyModel_QBaseChildEvent(KSelectionProxyModel* self, QChildEvent* event);
    friend void KSelectionProxyModel_CustomEvent(KSelectionProxyModel* self, QEvent* event);
    friend void KSelectionProxyModel_QBaseCustomEvent(KSelectionProxyModel* self, QEvent* event);
    friend void KSelectionProxyModel_ConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal);
    friend void KSelectionProxyModel_QBaseConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal);
    friend void KSelectionProxyModel_DisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal);
    friend void KSelectionProxyModel_QBaseDisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal);
    friend libqt_list /* of QPersistentModelIndex* */ KSelectionProxyModel_SourceRootIndexes(const KSelectionProxyModel* self);
    friend libqt_list /* of QPersistentModelIndex* */ KSelectionProxyModel_QBaseSourceRootIndexes(const KSelectionProxyModel* self);
    friend QModelIndex* KSelectionProxyModel_CreateSourceIndex(const KSelectionProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KSelectionProxyModel_QBaseCreateSourceIndex(const KSelectionProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* KSelectionProxyModel_CreateIndex(const KSelectionProxyModel* self, int row, int column);
    friend QModelIndex* KSelectionProxyModel_QBaseCreateIndex(const KSelectionProxyModel* self, int row, int column);
    friend void KSelectionProxyModel_EncodeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KSelectionProxyModel_QBaseEncodeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KSelectionProxyModel_DecodeData(KSelectionProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KSelectionProxyModel_QBaseDecodeData(KSelectionProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KSelectionProxyModel_BeginInsertRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_QBaseBeginInsertRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_EndInsertRows(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndInsertRows(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_BeginRemoveRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_QBaseBeginRemoveRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_EndRemoveRows(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndRemoveRows(KSelectionProxyModel* self);
    friend bool KSelectionProxyModel_BeginMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KSelectionProxyModel_QBaseBeginMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KSelectionProxyModel_EndMoveRows(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndMoveRows(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_BeginInsertColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_QBaseBeginInsertColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_EndInsertColumns(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndInsertColumns(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_BeginRemoveColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_QBaseBeginRemoveColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void KSelectionProxyModel_EndRemoveColumns(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndRemoveColumns(KSelectionProxyModel* self);
    friend bool KSelectionProxyModel_BeginMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KSelectionProxyModel_QBaseBeginMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KSelectionProxyModel_EndMoveColumns(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndMoveColumns(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_BeginResetModel(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseBeginResetModel(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_EndResetModel(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_QBaseEndResetModel(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_ChangePersistentIndex(KSelectionProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KSelectionProxyModel_QBaseChangePersistentIndex(KSelectionProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KSelectionProxyModel_ChangePersistentIndexList(KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KSelectionProxyModel_QBaseChangePersistentIndexList(KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KSelectionProxyModel_PersistentIndexList(const KSelectionProxyModel* self);
    friend libqt_list /* of QModelIndex* */ KSelectionProxyModel_QBasePersistentIndexList(const KSelectionProxyModel* self);
    friend QObject* KSelectionProxyModel_Sender(const KSelectionProxyModel* self);
    friend QObject* KSelectionProxyModel_QBaseSender(const KSelectionProxyModel* self);
    friend int KSelectionProxyModel_SenderSignalIndex(const KSelectionProxyModel* self);
    friend int KSelectionProxyModel_QBaseSenderSignalIndex(const KSelectionProxyModel* self);
    friend int KSelectionProxyModel_Receivers(const KSelectionProxyModel* self, const char* signal);
    friend int KSelectionProxyModel_QBaseReceivers(const KSelectionProxyModel* self, const char* signal);
    friend bool KSelectionProxyModel_IsSignalConnected(const KSelectionProxyModel* self, const QMetaMethod* signal);
    friend bool KSelectionProxyModel_QBaseIsSignalConnected(const KSelectionProxyModel* self, const QMetaMethod* signal);
};

#endif
