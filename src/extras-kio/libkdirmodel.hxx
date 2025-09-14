#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKDIRMODEL_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKDIRMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirModel so that we can call protected methods
class VirtualKDirModel final : public KDirModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKDirModel = true;

    // Virtual class public types (including callbacks)
    using KDirModel_Metacall_Callback = int (*)(KDirModel*, int, int, void**);
    using KDirModel_CanFetchMore_Callback = bool (*)(const KDirModel*, QModelIndex*);
    using KDirModel_ColumnCount_Callback = int (*)(const KDirModel*, QModelIndex*);
    using KDirModel_Data_Callback = QVariant* (*)(const KDirModel*, QModelIndex*, int);
    using KDirModel_DropMimeData_Callback = bool (*)(KDirModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirModel_FetchMore_Callback = void (*)(KDirModel*, QModelIndex*);
    using KDirModel_Flags_Callback = int (*)(const KDirModel*, QModelIndex*);
    using KDirModel_HasChildren_Callback = bool (*)(const KDirModel*, QModelIndex*);
    using KDirModel_HeaderData_Callback = QVariant* (*)(const KDirModel*, int, int, int);
    using KDirModel_Index_Callback = QModelIndex* (*)(const KDirModel*, int, int, QModelIndex*);
    using KDirModel_MimeData_Callback = QMimeData* (*)(const KDirModel*, libqt_list /* of QModelIndex* */);
    using KDirModel_MimeTypes_Callback = const char** (*)();
    using KDirModel_Parent_Callback = QModelIndex* (*)(const KDirModel*, QModelIndex*);
    using KDirModel_Sibling_Callback = QModelIndex* (*)(const KDirModel*, int, int, QModelIndex*);
    using KDirModel_RowCount_Callback = int (*)(const KDirModel*, QModelIndex*);
    using KDirModel_SetData_Callback = bool (*)(KDirModel*, QModelIndex*, QVariant*, int);
    using KDirModel_Sort_Callback = void (*)(KDirModel*, int, int);
    using KDirModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KDirModel_SupportedDropActions_Callback = int (*)();
    using KDirModel_SetHeaderData_Callback = bool (*)(KDirModel*, int, int, QVariant*, int);
    using KDirModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KDirModel*, QModelIndex*);
    using KDirModel_SetItemData_Callback = bool (*)(KDirModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KDirModel_ClearItemData_Callback = bool (*)(KDirModel*, QModelIndex*);
    using KDirModel_CanDropMimeData_Callback = bool (*)(const KDirModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirModel_SupportedDragActions_Callback = int (*)();
    using KDirModel_MoveRows_Callback = bool (*)(KDirModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirModel_MoveColumns_Callback = bool (*)(KDirModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirModel_Buddy_Callback = QModelIndex* (*)(const KDirModel*, QModelIndex*);
    using KDirModel_Match_Callback = QModelIndex** (*)(const KDirModel*, QModelIndex*, int, QVariant*, int, int);
    using KDirModel_Span_Callback = QSize* (*)(const KDirModel*, QModelIndex*);
    using KDirModel_MultiData_Callback = void (*)(const KDirModel*, QModelIndex*, QModelRoleDataSpan*);
    using KDirModel_Submit_Callback = bool (*)();
    using KDirModel_Revert_Callback = void (*)();
    using KDirModel_ResetInternalData_Callback = void (*)();
    using KDirModel_Event_Callback = bool (*)(KDirModel*, QEvent*);
    using KDirModel_EventFilter_Callback = bool (*)(KDirModel*, QObject*, QEvent*);
    using KDirModel_TimerEvent_Callback = void (*)(KDirModel*, QTimerEvent*);
    using KDirModel_ChildEvent_Callback = void (*)(KDirModel*, QChildEvent*);
    using KDirModel_CustomEvent_Callback = void (*)(KDirModel*, QEvent*);
    using KDirModel_ConnectNotify_Callback = void (*)(KDirModel*, QMetaMethod*);
    using KDirModel_DisconnectNotify_Callback = void (*)(KDirModel*, QMetaMethod*);
    using KDirModel_CreateIndex_Callback = QModelIndex* (*)(const KDirModel*, int, int);
    using KDirModel_EncodeData_Callback = void (*)(const KDirModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KDirModel_DecodeData_Callback = bool (*)(KDirModel*, int, int, QModelIndex*, QDataStream*);
    using KDirModel_BeginInsertRows_Callback = void (*)(KDirModel*, QModelIndex*, int, int);
    using KDirModel_EndInsertRows_Callback = void (*)();
    using KDirModel_BeginRemoveRows_Callback = void (*)(KDirModel*, QModelIndex*, int, int);
    using KDirModel_EndRemoveRows_Callback = void (*)();
    using KDirModel_BeginMoveRows_Callback = bool (*)(KDirModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirModel_EndMoveRows_Callback = void (*)();
    using KDirModel_BeginInsertColumns_Callback = void (*)(KDirModel*, QModelIndex*, int, int);
    using KDirModel_EndInsertColumns_Callback = void (*)();
    using KDirModel_BeginRemoveColumns_Callback = void (*)(KDirModel*, QModelIndex*, int, int);
    using KDirModel_EndRemoveColumns_Callback = void (*)();
    using KDirModel_BeginMoveColumns_Callback = bool (*)(KDirModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirModel_EndMoveColumns_Callback = void (*)();
    using KDirModel_BeginResetModel_Callback = void (*)();
    using KDirModel_EndResetModel_Callback = void (*)();
    using KDirModel_ChangePersistentIndex_Callback = void (*)(KDirModel*, QModelIndex*, QModelIndex*);
    using KDirModel_ChangePersistentIndexList_Callback = void (*)(KDirModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KDirModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KDirModel_Sender_Callback = QObject* (*)();
    using KDirModel_SenderSignalIndex_Callback = int (*)();
    using KDirModel_Receivers_Callback = int (*)(const KDirModel*, const char*);
    using KDirModel_IsSignalConnected_Callback = bool (*)(const KDirModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDirModel_Metacall_Callback kdirmodel_metacall_callback = nullptr;
    KDirModel_CanFetchMore_Callback kdirmodel_canfetchmore_callback = nullptr;
    KDirModel_ColumnCount_Callback kdirmodel_columncount_callback = nullptr;
    KDirModel_Data_Callback kdirmodel_data_callback = nullptr;
    KDirModel_DropMimeData_Callback kdirmodel_dropmimedata_callback = nullptr;
    KDirModel_FetchMore_Callback kdirmodel_fetchmore_callback = nullptr;
    KDirModel_Flags_Callback kdirmodel_flags_callback = nullptr;
    KDirModel_HasChildren_Callback kdirmodel_haschildren_callback = nullptr;
    KDirModel_HeaderData_Callback kdirmodel_headerdata_callback = nullptr;
    KDirModel_Index_Callback kdirmodel_index_callback = nullptr;
    KDirModel_MimeData_Callback kdirmodel_mimedata_callback = nullptr;
    KDirModel_MimeTypes_Callback kdirmodel_mimetypes_callback = nullptr;
    KDirModel_Parent_Callback kdirmodel_parent_callback = nullptr;
    KDirModel_Sibling_Callback kdirmodel_sibling_callback = nullptr;
    KDirModel_RowCount_Callback kdirmodel_rowcount_callback = nullptr;
    KDirModel_SetData_Callback kdirmodel_setdata_callback = nullptr;
    KDirModel_Sort_Callback kdirmodel_sort_callback = nullptr;
    KDirModel_RoleNames_Callback kdirmodel_rolenames_callback = nullptr;
    KDirModel_SupportedDropActions_Callback kdirmodel_supporteddropactions_callback = nullptr;
    KDirModel_SetHeaderData_Callback kdirmodel_setheaderdata_callback = nullptr;
    KDirModel_ItemData_Callback kdirmodel_itemdata_callback = nullptr;
    KDirModel_SetItemData_Callback kdirmodel_setitemdata_callback = nullptr;
    KDirModel_ClearItemData_Callback kdirmodel_clearitemdata_callback = nullptr;
    KDirModel_CanDropMimeData_Callback kdirmodel_candropmimedata_callback = nullptr;
    KDirModel_SupportedDragActions_Callback kdirmodel_supporteddragactions_callback = nullptr;
    KDirModel_MoveRows_Callback kdirmodel_moverows_callback = nullptr;
    KDirModel_MoveColumns_Callback kdirmodel_movecolumns_callback = nullptr;
    KDirModel_Buddy_Callback kdirmodel_buddy_callback = nullptr;
    KDirModel_Match_Callback kdirmodel_match_callback = nullptr;
    KDirModel_Span_Callback kdirmodel_span_callback = nullptr;
    KDirModel_MultiData_Callback kdirmodel_multidata_callback = nullptr;
    KDirModel_Submit_Callback kdirmodel_submit_callback = nullptr;
    KDirModel_Revert_Callback kdirmodel_revert_callback = nullptr;
    KDirModel_ResetInternalData_Callback kdirmodel_resetinternaldata_callback = nullptr;
    KDirModel_Event_Callback kdirmodel_event_callback = nullptr;
    KDirModel_EventFilter_Callback kdirmodel_eventfilter_callback = nullptr;
    KDirModel_TimerEvent_Callback kdirmodel_timerevent_callback = nullptr;
    KDirModel_ChildEvent_Callback kdirmodel_childevent_callback = nullptr;
    KDirModel_CustomEvent_Callback kdirmodel_customevent_callback = nullptr;
    KDirModel_ConnectNotify_Callback kdirmodel_connectnotify_callback = nullptr;
    KDirModel_DisconnectNotify_Callback kdirmodel_disconnectnotify_callback = nullptr;
    KDirModel_CreateIndex_Callback kdirmodel_createindex_callback = nullptr;
    KDirModel_EncodeData_Callback kdirmodel_encodedata_callback = nullptr;
    KDirModel_DecodeData_Callback kdirmodel_decodedata_callback = nullptr;
    KDirModel_BeginInsertRows_Callback kdirmodel_begininsertrows_callback = nullptr;
    KDirModel_EndInsertRows_Callback kdirmodel_endinsertrows_callback = nullptr;
    KDirModel_BeginRemoveRows_Callback kdirmodel_beginremoverows_callback = nullptr;
    KDirModel_EndRemoveRows_Callback kdirmodel_endremoverows_callback = nullptr;
    KDirModel_BeginMoveRows_Callback kdirmodel_beginmoverows_callback = nullptr;
    KDirModel_EndMoveRows_Callback kdirmodel_endmoverows_callback = nullptr;
    KDirModel_BeginInsertColumns_Callback kdirmodel_begininsertcolumns_callback = nullptr;
    KDirModel_EndInsertColumns_Callback kdirmodel_endinsertcolumns_callback = nullptr;
    KDirModel_BeginRemoveColumns_Callback kdirmodel_beginremovecolumns_callback = nullptr;
    KDirModel_EndRemoveColumns_Callback kdirmodel_endremovecolumns_callback = nullptr;
    KDirModel_BeginMoveColumns_Callback kdirmodel_beginmovecolumns_callback = nullptr;
    KDirModel_EndMoveColumns_Callback kdirmodel_endmovecolumns_callback = nullptr;
    KDirModel_BeginResetModel_Callback kdirmodel_beginresetmodel_callback = nullptr;
    KDirModel_EndResetModel_Callback kdirmodel_endresetmodel_callback = nullptr;
    KDirModel_ChangePersistentIndex_Callback kdirmodel_changepersistentindex_callback = nullptr;
    KDirModel_ChangePersistentIndexList_Callback kdirmodel_changepersistentindexlist_callback = nullptr;
    KDirModel_PersistentIndexList_Callback kdirmodel_persistentindexlist_callback = nullptr;
    KDirModel_Sender_Callback kdirmodel_sender_callback = nullptr;
    KDirModel_SenderSignalIndex_Callback kdirmodel_sendersignalindex_callback = nullptr;
    KDirModel_Receivers_Callback kdirmodel_receivers_callback = nullptr;
    KDirModel_IsSignalConnected_Callback kdirmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdirmodel_metacall_isbase = false;
    mutable bool kdirmodel_canfetchmore_isbase = false;
    mutable bool kdirmodel_columncount_isbase = false;
    mutable bool kdirmodel_data_isbase = false;
    mutable bool kdirmodel_dropmimedata_isbase = false;
    mutable bool kdirmodel_fetchmore_isbase = false;
    mutable bool kdirmodel_flags_isbase = false;
    mutable bool kdirmodel_haschildren_isbase = false;
    mutable bool kdirmodel_headerdata_isbase = false;
    mutable bool kdirmodel_index_isbase = false;
    mutable bool kdirmodel_mimedata_isbase = false;
    mutable bool kdirmodel_mimetypes_isbase = false;
    mutable bool kdirmodel_parent_isbase = false;
    mutable bool kdirmodel_sibling_isbase = false;
    mutable bool kdirmodel_rowcount_isbase = false;
    mutable bool kdirmodel_setdata_isbase = false;
    mutable bool kdirmodel_sort_isbase = false;
    mutable bool kdirmodel_rolenames_isbase = false;
    mutable bool kdirmodel_supporteddropactions_isbase = false;
    mutable bool kdirmodel_setheaderdata_isbase = false;
    mutable bool kdirmodel_itemdata_isbase = false;
    mutable bool kdirmodel_setitemdata_isbase = false;
    mutable bool kdirmodel_clearitemdata_isbase = false;
    mutable bool kdirmodel_candropmimedata_isbase = false;
    mutable bool kdirmodel_supporteddragactions_isbase = false;
    mutable bool kdirmodel_moverows_isbase = false;
    mutable bool kdirmodel_movecolumns_isbase = false;
    mutable bool kdirmodel_buddy_isbase = false;
    mutable bool kdirmodel_match_isbase = false;
    mutable bool kdirmodel_span_isbase = false;
    mutable bool kdirmodel_multidata_isbase = false;
    mutable bool kdirmodel_submit_isbase = false;
    mutable bool kdirmodel_revert_isbase = false;
    mutable bool kdirmodel_resetinternaldata_isbase = false;
    mutable bool kdirmodel_event_isbase = false;
    mutable bool kdirmodel_eventfilter_isbase = false;
    mutable bool kdirmodel_timerevent_isbase = false;
    mutable bool kdirmodel_childevent_isbase = false;
    mutable bool kdirmodel_customevent_isbase = false;
    mutable bool kdirmodel_connectnotify_isbase = false;
    mutable bool kdirmodel_disconnectnotify_isbase = false;
    mutable bool kdirmodel_createindex_isbase = false;
    mutable bool kdirmodel_encodedata_isbase = false;
    mutable bool kdirmodel_decodedata_isbase = false;
    mutable bool kdirmodel_begininsertrows_isbase = false;
    mutable bool kdirmodel_endinsertrows_isbase = false;
    mutable bool kdirmodel_beginremoverows_isbase = false;
    mutable bool kdirmodel_endremoverows_isbase = false;
    mutable bool kdirmodel_beginmoverows_isbase = false;
    mutable bool kdirmodel_endmoverows_isbase = false;
    mutable bool kdirmodel_begininsertcolumns_isbase = false;
    mutable bool kdirmodel_endinsertcolumns_isbase = false;
    mutable bool kdirmodel_beginremovecolumns_isbase = false;
    mutable bool kdirmodel_endremovecolumns_isbase = false;
    mutable bool kdirmodel_beginmovecolumns_isbase = false;
    mutable bool kdirmodel_endmovecolumns_isbase = false;
    mutable bool kdirmodel_beginresetmodel_isbase = false;
    mutable bool kdirmodel_endresetmodel_isbase = false;
    mutable bool kdirmodel_changepersistentindex_isbase = false;
    mutable bool kdirmodel_changepersistentindexlist_isbase = false;
    mutable bool kdirmodel_persistentindexlist_isbase = false;
    mutable bool kdirmodel_sender_isbase = false;
    mutable bool kdirmodel_sendersignalindex_isbase = false;
    mutable bool kdirmodel_receivers_isbase = false;
    mutable bool kdirmodel_issignalconnected_isbase = false;

  public:
    VirtualKDirModel() : KDirModel() {};
    VirtualKDirModel(QObject* parent) : KDirModel(parent) {};

    ~VirtualKDirModel() {
        kdirmodel_metacall_callback = nullptr;
        kdirmodel_canfetchmore_callback = nullptr;
        kdirmodel_columncount_callback = nullptr;
        kdirmodel_data_callback = nullptr;
        kdirmodel_dropmimedata_callback = nullptr;
        kdirmodel_fetchmore_callback = nullptr;
        kdirmodel_flags_callback = nullptr;
        kdirmodel_haschildren_callback = nullptr;
        kdirmodel_headerdata_callback = nullptr;
        kdirmodel_index_callback = nullptr;
        kdirmodel_mimedata_callback = nullptr;
        kdirmodel_mimetypes_callback = nullptr;
        kdirmodel_parent_callback = nullptr;
        kdirmodel_sibling_callback = nullptr;
        kdirmodel_rowcount_callback = nullptr;
        kdirmodel_setdata_callback = nullptr;
        kdirmodel_sort_callback = nullptr;
        kdirmodel_rolenames_callback = nullptr;
        kdirmodel_supporteddropactions_callback = nullptr;
        kdirmodel_setheaderdata_callback = nullptr;
        kdirmodel_itemdata_callback = nullptr;
        kdirmodel_setitemdata_callback = nullptr;
        kdirmodel_clearitemdata_callback = nullptr;
        kdirmodel_candropmimedata_callback = nullptr;
        kdirmodel_supporteddragactions_callback = nullptr;
        kdirmodel_moverows_callback = nullptr;
        kdirmodel_movecolumns_callback = nullptr;
        kdirmodel_buddy_callback = nullptr;
        kdirmodel_match_callback = nullptr;
        kdirmodel_span_callback = nullptr;
        kdirmodel_multidata_callback = nullptr;
        kdirmodel_submit_callback = nullptr;
        kdirmodel_revert_callback = nullptr;
        kdirmodel_resetinternaldata_callback = nullptr;
        kdirmodel_event_callback = nullptr;
        kdirmodel_eventfilter_callback = nullptr;
        kdirmodel_timerevent_callback = nullptr;
        kdirmodel_childevent_callback = nullptr;
        kdirmodel_customevent_callback = nullptr;
        kdirmodel_connectnotify_callback = nullptr;
        kdirmodel_disconnectnotify_callback = nullptr;
        kdirmodel_createindex_callback = nullptr;
        kdirmodel_encodedata_callback = nullptr;
        kdirmodel_decodedata_callback = nullptr;
        kdirmodel_begininsertrows_callback = nullptr;
        kdirmodel_endinsertrows_callback = nullptr;
        kdirmodel_beginremoverows_callback = nullptr;
        kdirmodel_endremoverows_callback = nullptr;
        kdirmodel_beginmoverows_callback = nullptr;
        kdirmodel_endmoverows_callback = nullptr;
        kdirmodel_begininsertcolumns_callback = nullptr;
        kdirmodel_endinsertcolumns_callback = nullptr;
        kdirmodel_beginremovecolumns_callback = nullptr;
        kdirmodel_endremovecolumns_callback = nullptr;
        kdirmodel_beginmovecolumns_callback = nullptr;
        kdirmodel_endmovecolumns_callback = nullptr;
        kdirmodel_beginresetmodel_callback = nullptr;
        kdirmodel_endresetmodel_callback = nullptr;
        kdirmodel_changepersistentindex_callback = nullptr;
        kdirmodel_changepersistentindexlist_callback = nullptr;
        kdirmodel_persistentindexlist_callback = nullptr;
        kdirmodel_sender_callback = nullptr;
        kdirmodel_sendersignalindex_callback = nullptr;
        kdirmodel_receivers_callback = nullptr;
        kdirmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDirModel_Metacall_Callback(KDirModel_Metacall_Callback cb) { kdirmodel_metacall_callback = cb; }
    inline void setKDirModel_CanFetchMore_Callback(KDirModel_CanFetchMore_Callback cb) { kdirmodel_canfetchmore_callback = cb; }
    inline void setKDirModel_ColumnCount_Callback(KDirModel_ColumnCount_Callback cb) { kdirmodel_columncount_callback = cb; }
    inline void setKDirModel_Data_Callback(KDirModel_Data_Callback cb) { kdirmodel_data_callback = cb; }
    inline void setKDirModel_DropMimeData_Callback(KDirModel_DropMimeData_Callback cb) { kdirmodel_dropmimedata_callback = cb; }
    inline void setKDirModel_FetchMore_Callback(KDirModel_FetchMore_Callback cb) { kdirmodel_fetchmore_callback = cb; }
    inline void setKDirModel_Flags_Callback(KDirModel_Flags_Callback cb) { kdirmodel_flags_callback = cb; }
    inline void setKDirModel_HasChildren_Callback(KDirModel_HasChildren_Callback cb) { kdirmodel_haschildren_callback = cb; }
    inline void setKDirModel_HeaderData_Callback(KDirModel_HeaderData_Callback cb) { kdirmodel_headerdata_callback = cb; }
    inline void setKDirModel_Index_Callback(KDirModel_Index_Callback cb) { kdirmodel_index_callback = cb; }
    inline void setKDirModel_MimeData_Callback(KDirModel_MimeData_Callback cb) { kdirmodel_mimedata_callback = cb; }
    inline void setKDirModel_MimeTypes_Callback(KDirModel_MimeTypes_Callback cb) { kdirmodel_mimetypes_callback = cb; }
    inline void setKDirModel_Parent_Callback(KDirModel_Parent_Callback cb) { kdirmodel_parent_callback = cb; }
    inline void setKDirModel_Sibling_Callback(KDirModel_Sibling_Callback cb) { kdirmodel_sibling_callback = cb; }
    inline void setKDirModel_RowCount_Callback(KDirModel_RowCount_Callback cb) { kdirmodel_rowcount_callback = cb; }
    inline void setKDirModel_SetData_Callback(KDirModel_SetData_Callback cb) { kdirmodel_setdata_callback = cb; }
    inline void setKDirModel_Sort_Callback(KDirModel_Sort_Callback cb) { kdirmodel_sort_callback = cb; }
    inline void setKDirModel_RoleNames_Callback(KDirModel_RoleNames_Callback cb) { kdirmodel_rolenames_callback = cb; }
    inline void setKDirModel_SupportedDropActions_Callback(KDirModel_SupportedDropActions_Callback cb) { kdirmodel_supporteddropactions_callback = cb; }
    inline void setKDirModel_SetHeaderData_Callback(KDirModel_SetHeaderData_Callback cb) { kdirmodel_setheaderdata_callback = cb; }
    inline void setKDirModel_ItemData_Callback(KDirModel_ItemData_Callback cb) { kdirmodel_itemdata_callback = cb; }
    inline void setKDirModel_SetItemData_Callback(KDirModel_SetItemData_Callback cb) { kdirmodel_setitemdata_callback = cb; }
    inline void setKDirModel_ClearItemData_Callback(KDirModel_ClearItemData_Callback cb) { kdirmodel_clearitemdata_callback = cb; }
    inline void setKDirModel_CanDropMimeData_Callback(KDirModel_CanDropMimeData_Callback cb) { kdirmodel_candropmimedata_callback = cb; }
    inline void setKDirModel_SupportedDragActions_Callback(KDirModel_SupportedDragActions_Callback cb) { kdirmodel_supporteddragactions_callback = cb; }
    inline void setKDirModel_MoveRows_Callback(KDirModel_MoveRows_Callback cb) { kdirmodel_moverows_callback = cb; }
    inline void setKDirModel_MoveColumns_Callback(KDirModel_MoveColumns_Callback cb) { kdirmodel_movecolumns_callback = cb; }
    inline void setKDirModel_Buddy_Callback(KDirModel_Buddy_Callback cb) { kdirmodel_buddy_callback = cb; }
    inline void setKDirModel_Match_Callback(KDirModel_Match_Callback cb) { kdirmodel_match_callback = cb; }
    inline void setKDirModel_Span_Callback(KDirModel_Span_Callback cb) { kdirmodel_span_callback = cb; }
    inline void setKDirModel_MultiData_Callback(KDirModel_MultiData_Callback cb) { kdirmodel_multidata_callback = cb; }
    inline void setKDirModel_Submit_Callback(KDirModel_Submit_Callback cb) { kdirmodel_submit_callback = cb; }
    inline void setKDirModel_Revert_Callback(KDirModel_Revert_Callback cb) { kdirmodel_revert_callback = cb; }
    inline void setKDirModel_ResetInternalData_Callback(KDirModel_ResetInternalData_Callback cb) { kdirmodel_resetinternaldata_callback = cb; }
    inline void setKDirModel_Event_Callback(KDirModel_Event_Callback cb) { kdirmodel_event_callback = cb; }
    inline void setKDirModel_EventFilter_Callback(KDirModel_EventFilter_Callback cb) { kdirmodel_eventfilter_callback = cb; }
    inline void setKDirModel_TimerEvent_Callback(KDirModel_TimerEvent_Callback cb) { kdirmodel_timerevent_callback = cb; }
    inline void setKDirModel_ChildEvent_Callback(KDirModel_ChildEvent_Callback cb) { kdirmodel_childevent_callback = cb; }
    inline void setKDirModel_CustomEvent_Callback(KDirModel_CustomEvent_Callback cb) { kdirmodel_customevent_callback = cb; }
    inline void setKDirModel_ConnectNotify_Callback(KDirModel_ConnectNotify_Callback cb) { kdirmodel_connectnotify_callback = cb; }
    inline void setKDirModel_DisconnectNotify_Callback(KDirModel_DisconnectNotify_Callback cb) { kdirmodel_disconnectnotify_callback = cb; }
    inline void setKDirModel_CreateIndex_Callback(KDirModel_CreateIndex_Callback cb) { kdirmodel_createindex_callback = cb; }
    inline void setKDirModel_EncodeData_Callback(KDirModel_EncodeData_Callback cb) { kdirmodel_encodedata_callback = cb; }
    inline void setKDirModel_DecodeData_Callback(KDirModel_DecodeData_Callback cb) { kdirmodel_decodedata_callback = cb; }
    inline void setKDirModel_BeginInsertRows_Callback(KDirModel_BeginInsertRows_Callback cb) { kdirmodel_begininsertrows_callback = cb; }
    inline void setKDirModel_EndInsertRows_Callback(KDirModel_EndInsertRows_Callback cb) { kdirmodel_endinsertrows_callback = cb; }
    inline void setKDirModel_BeginRemoveRows_Callback(KDirModel_BeginRemoveRows_Callback cb) { kdirmodel_beginremoverows_callback = cb; }
    inline void setKDirModel_EndRemoveRows_Callback(KDirModel_EndRemoveRows_Callback cb) { kdirmodel_endremoverows_callback = cb; }
    inline void setKDirModel_BeginMoveRows_Callback(KDirModel_BeginMoveRows_Callback cb) { kdirmodel_beginmoverows_callback = cb; }
    inline void setKDirModel_EndMoveRows_Callback(KDirModel_EndMoveRows_Callback cb) { kdirmodel_endmoverows_callback = cb; }
    inline void setKDirModel_BeginInsertColumns_Callback(KDirModel_BeginInsertColumns_Callback cb) { kdirmodel_begininsertcolumns_callback = cb; }
    inline void setKDirModel_EndInsertColumns_Callback(KDirModel_EndInsertColumns_Callback cb) { kdirmodel_endinsertcolumns_callback = cb; }
    inline void setKDirModel_BeginRemoveColumns_Callback(KDirModel_BeginRemoveColumns_Callback cb) { kdirmodel_beginremovecolumns_callback = cb; }
    inline void setKDirModel_EndRemoveColumns_Callback(KDirModel_EndRemoveColumns_Callback cb) { kdirmodel_endremovecolumns_callback = cb; }
    inline void setKDirModel_BeginMoveColumns_Callback(KDirModel_BeginMoveColumns_Callback cb) { kdirmodel_beginmovecolumns_callback = cb; }
    inline void setKDirModel_EndMoveColumns_Callback(KDirModel_EndMoveColumns_Callback cb) { kdirmodel_endmovecolumns_callback = cb; }
    inline void setKDirModel_BeginResetModel_Callback(KDirModel_BeginResetModel_Callback cb) { kdirmodel_beginresetmodel_callback = cb; }
    inline void setKDirModel_EndResetModel_Callback(KDirModel_EndResetModel_Callback cb) { kdirmodel_endresetmodel_callback = cb; }
    inline void setKDirModel_ChangePersistentIndex_Callback(KDirModel_ChangePersistentIndex_Callback cb) { kdirmodel_changepersistentindex_callback = cb; }
    inline void setKDirModel_ChangePersistentIndexList_Callback(KDirModel_ChangePersistentIndexList_Callback cb) { kdirmodel_changepersistentindexlist_callback = cb; }
    inline void setKDirModel_PersistentIndexList_Callback(KDirModel_PersistentIndexList_Callback cb) { kdirmodel_persistentindexlist_callback = cb; }
    inline void setKDirModel_Sender_Callback(KDirModel_Sender_Callback cb) { kdirmodel_sender_callback = cb; }
    inline void setKDirModel_SenderSignalIndex_Callback(KDirModel_SenderSignalIndex_Callback cb) { kdirmodel_sendersignalindex_callback = cb; }
    inline void setKDirModel_Receivers_Callback(KDirModel_Receivers_Callback cb) { kdirmodel_receivers_callback = cb; }
    inline void setKDirModel_IsSignalConnected_Callback(KDirModel_IsSignalConnected_Callback cb) { kdirmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDirModel_Metacall_IsBase(bool value) const { kdirmodel_metacall_isbase = value; }
    inline void setKDirModel_CanFetchMore_IsBase(bool value) const { kdirmodel_canfetchmore_isbase = value; }
    inline void setKDirModel_ColumnCount_IsBase(bool value) const { kdirmodel_columncount_isbase = value; }
    inline void setKDirModel_Data_IsBase(bool value) const { kdirmodel_data_isbase = value; }
    inline void setKDirModel_DropMimeData_IsBase(bool value) const { kdirmodel_dropmimedata_isbase = value; }
    inline void setKDirModel_FetchMore_IsBase(bool value) const { kdirmodel_fetchmore_isbase = value; }
    inline void setKDirModel_Flags_IsBase(bool value) const { kdirmodel_flags_isbase = value; }
    inline void setKDirModel_HasChildren_IsBase(bool value) const { kdirmodel_haschildren_isbase = value; }
    inline void setKDirModel_HeaderData_IsBase(bool value) const { kdirmodel_headerdata_isbase = value; }
    inline void setKDirModel_Index_IsBase(bool value) const { kdirmodel_index_isbase = value; }
    inline void setKDirModel_MimeData_IsBase(bool value) const { kdirmodel_mimedata_isbase = value; }
    inline void setKDirModel_MimeTypes_IsBase(bool value) const { kdirmodel_mimetypes_isbase = value; }
    inline void setKDirModel_Parent_IsBase(bool value) const { kdirmodel_parent_isbase = value; }
    inline void setKDirModel_Sibling_IsBase(bool value) const { kdirmodel_sibling_isbase = value; }
    inline void setKDirModel_RowCount_IsBase(bool value) const { kdirmodel_rowcount_isbase = value; }
    inline void setKDirModel_SetData_IsBase(bool value) const { kdirmodel_setdata_isbase = value; }
    inline void setKDirModel_Sort_IsBase(bool value) const { kdirmodel_sort_isbase = value; }
    inline void setKDirModel_RoleNames_IsBase(bool value) const { kdirmodel_rolenames_isbase = value; }
    inline void setKDirModel_SupportedDropActions_IsBase(bool value) const { kdirmodel_supporteddropactions_isbase = value; }
    inline void setKDirModel_SetHeaderData_IsBase(bool value) const { kdirmodel_setheaderdata_isbase = value; }
    inline void setKDirModel_ItemData_IsBase(bool value) const { kdirmodel_itemdata_isbase = value; }
    inline void setKDirModel_SetItemData_IsBase(bool value) const { kdirmodel_setitemdata_isbase = value; }
    inline void setKDirModel_ClearItemData_IsBase(bool value) const { kdirmodel_clearitemdata_isbase = value; }
    inline void setKDirModel_CanDropMimeData_IsBase(bool value) const { kdirmodel_candropmimedata_isbase = value; }
    inline void setKDirModel_SupportedDragActions_IsBase(bool value) const { kdirmodel_supporteddragactions_isbase = value; }
    inline void setKDirModel_MoveRows_IsBase(bool value) const { kdirmodel_moverows_isbase = value; }
    inline void setKDirModel_MoveColumns_IsBase(bool value) const { kdirmodel_movecolumns_isbase = value; }
    inline void setKDirModel_Buddy_IsBase(bool value) const { kdirmodel_buddy_isbase = value; }
    inline void setKDirModel_Match_IsBase(bool value) const { kdirmodel_match_isbase = value; }
    inline void setKDirModel_Span_IsBase(bool value) const { kdirmodel_span_isbase = value; }
    inline void setKDirModel_MultiData_IsBase(bool value) const { kdirmodel_multidata_isbase = value; }
    inline void setKDirModel_Submit_IsBase(bool value) const { kdirmodel_submit_isbase = value; }
    inline void setKDirModel_Revert_IsBase(bool value) const { kdirmodel_revert_isbase = value; }
    inline void setKDirModel_ResetInternalData_IsBase(bool value) const { kdirmodel_resetinternaldata_isbase = value; }
    inline void setKDirModel_Event_IsBase(bool value) const { kdirmodel_event_isbase = value; }
    inline void setKDirModel_EventFilter_IsBase(bool value) const { kdirmodel_eventfilter_isbase = value; }
    inline void setKDirModel_TimerEvent_IsBase(bool value) const { kdirmodel_timerevent_isbase = value; }
    inline void setKDirModel_ChildEvent_IsBase(bool value) const { kdirmodel_childevent_isbase = value; }
    inline void setKDirModel_CustomEvent_IsBase(bool value) const { kdirmodel_customevent_isbase = value; }
    inline void setKDirModel_ConnectNotify_IsBase(bool value) const { kdirmodel_connectnotify_isbase = value; }
    inline void setKDirModel_DisconnectNotify_IsBase(bool value) const { kdirmodel_disconnectnotify_isbase = value; }
    inline void setKDirModel_CreateIndex_IsBase(bool value) const { kdirmodel_createindex_isbase = value; }
    inline void setKDirModel_EncodeData_IsBase(bool value) const { kdirmodel_encodedata_isbase = value; }
    inline void setKDirModel_DecodeData_IsBase(bool value) const { kdirmodel_decodedata_isbase = value; }
    inline void setKDirModel_BeginInsertRows_IsBase(bool value) const { kdirmodel_begininsertrows_isbase = value; }
    inline void setKDirModel_EndInsertRows_IsBase(bool value) const { kdirmodel_endinsertrows_isbase = value; }
    inline void setKDirModel_BeginRemoveRows_IsBase(bool value) const { kdirmodel_beginremoverows_isbase = value; }
    inline void setKDirModel_EndRemoveRows_IsBase(bool value) const { kdirmodel_endremoverows_isbase = value; }
    inline void setKDirModel_BeginMoveRows_IsBase(bool value) const { kdirmodel_beginmoverows_isbase = value; }
    inline void setKDirModel_EndMoveRows_IsBase(bool value) const { kdirmodel_endmoverows_isbase = value; }
    inline void setKDirModel_BeginInsertColumns_IsBase(bool value) const { kdirmodel_begininsertcolumns_isbase = value; }
    inline void setKDirModel_EndInsertColumns_IsBase(bool value) const { kdirmodel_endinsertcolumns_isbase = value; }
    inline void setKDirModel_BeginRemoveColumns_IsBase(bool value) const { kdirmodel_beginremovecolumns_isbase = value; }
    inline void setKDirModel_EndRemoveColumns_IsBase(bool value) const { kdirmodel_endremovecolumns_isbase = value; }
    inline void setKDirModel_BeginMoveColumns_IsBase(bool value) const { kdirmodel_beginmovecolumns_isbase = value; }
    inline void setKDirModel_EndMoveColumns_IsBase(bool value) const { kdirmodel_endmovecolumns_isbase = value; }
    inline void setKDirModel_BeginResetModel_IsBase(bool value) const { kdirmodel_beginresetmodel_isbase = value; }
    inline void setKDirModel_EndResetModel_IsBase(bool value) const { kdirmodel_endresetmodel_isbase = value; }
    inline void setKDirModel_ChangePersistentIndex_IsBase(bool value) const { kdirmodel_changepersistentindex_isbase = value; }
    inline void setKDirModel_ChangePersistentIndexList_IsBase(bool value) const { kdirmodel_changepersistentindexlist_isbase = value; }
    inline void setKDirModel_PersistentIndexList_IsBase(bool value) const { kdirmodel_persistentindexlist_isbase = value; }
    inline void setKDirModel_Sender_IsBase(bool value) const { kdirmodel_sender_isbase = value; }
    inline void setKDirModel_SenderSignalIndex_IsBase(bool value) const { kdirmodel_sendersignalindex_isbase = value; }
    inline void setKDirModel_Receivers_IsBase(bool value) const { kdirmodel_receivers_isbase = value; }
    inline void setKDirModel_IsSignalConnected_IsBase(bool value) const { kdirmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirmodel_metacall_isbase) {
            kdirmodel_metacall_isbase = false;
            return KDirModel::qt_metacall(param1, param2, param3);
        } else if (kdirmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdirmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDirModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kdirmodel_canfetchmore_isbase) {
            kdirmodel_canfetchmore_isbase = false;
            return KDirModel::canFetchMore(parent);
        } else if (kdirmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kdirmodel_columncount_isbase) {
            kdirmodel_columncount_isbase = false;
            return KDirModel::columnCount(parent);
        } else if (kdirmodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kdirmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kdirmodel_data_isbase) {
            kdirmodel_data_isbase = false;
            return KDirModel::data(index, role);
        } else if (kdirmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kdirmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KDirModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kdirmodel_dropmimedata_isbase) {
            kdirmodel_dropmimedata_isbase = false;
            return KDirModel::dropMimeData(data, action, row, column, parent);
        } else if (kdirmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kdirmodel_fetchmore_isbase) {
            kdirmodel_fetchmore_isbase = false;
            KDirModel::fetchMore(parent);
        } else if (kdirmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kdirmodel_fetchmore_callback(this, cbval1);
        } else {
            KDirModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kdirmodel_flags_isbase) {
            kdirmodel_flags_isbase = false;
            return KDirModel::flags(index);
        } else if (kdirmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kdirmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KDirModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kdirmodel_haschildren_isbase) {
            kdirmodel_haschildren_isbase = false;
            return KDirModel::hasChildren(parent);
        } else if (kdirmodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kdirmodel_headerdata_isbase) {
            kdirmodel_headerdata_isbase = false;
            return KDirModel::headerData(section, orientation, role);
        } else if (kdirmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kdirmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kdirmodel_index_isbase) {
            kdirmodel_index_isbase = false;
            return KDirModel::index(row, column, parent);
        } else if (kdirmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kdirmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kdirmodel_mimedata_isbase) {
            kdirmodel_mimedata_isbase = false;
            return KDirModel::mimeData(indexes);
        } else if (kdirmodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kdirmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kdirmodel_mimetypes_isbase) {
            kdirmodel_mimetypes_isbase = false;
            return KDirModel::mimeTypes();
        } else if (kdirmodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kdirmodel_mimetypes_callback();
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
            return KDirModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (kdirmodel_parent_isbase) {
            kdirmodel_parent_isbase = false;
            return KDirModel::parent(index);
        } else if (kdirmodel_parent_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kdirmodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& index) const override {
        if (kdirmodel_sibling_isbase) {
            kdirmodel_sibling_isbase = false;
            return KDirModel::sibling(row, column, index);
        } else if (kdirmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kdirmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KDirModel::sibling(row, column, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kdirmodel_rowcount_isbase) {
            kdirmodel_rowcount_isbase = false;
            return KDirModel::rowCount(parent);
        } else if (kdirmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kdirmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kdirmodel_setdata_isbase) {
            kdirmodel_setdata_isbase = false;
            return KDirModel::setData(index, value, role);
        } else if (kdirmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kdirmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kdirmodel_sort_isbase) {
            kdirmodel_sort_isbase = false;
            KDirModel::sort(column, order);
        } else if (kdirmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kdirmodel_sort_callback(this, cbval1, cbval2);
        } else {
            KDirModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kdirmodel_rolenames_isbase) {
            kdirmodel_rolenames_isbase = false;
            return KDirModel::roleNames();
        } else if (kdirmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kdirmodel_rolenames_callback();
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
            return KDirModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kdirmodel_supporteddropactions_isbase) {
            kdirmodel_supporteddropactions_isbase = false;
            return KDirModel::supportedDropActions();
        } else if (kdirmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kdirmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KDirModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kdirmodel_setheaderdata_isbase) {
            kdirmodel_setheaderdata_isbase = false;
            return KDirModel::setHeaderData(section, orientation, value, role);
        } else if (kdirmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kdirmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDirModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kdirmodel_itemdata_isbase) {
            kdirmodel_itemdata_isbase = false;
            return KDirModel::itemData(index);
        } else if (kdirmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kdirmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KDirModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kdirmodel_setitemdata_isbase) {
            kdirmodel_setitemdata_isbase = false;
            return KDirModel::setItemData(index, roles);
        } else if (kdirmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kdirmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kdirmodel_clearitemdata_isbase) {
            kdirmodel_clearitemdata_isbase = false;
            return KDirModel::clearItemData(index);
        } else if (kdirmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kdirmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kdirmodel_candropmimedata_isbase) {
            kdirmodel_candropmimedata_isbase = false;
            return KDirModel::canDropMimeData(data, action, row, column, parent);
        } else if (kdirmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kdirmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kdirmodel_supporteddragactions_isbase) {
            kdirmodel_supporteddragactions_isbase = false;
            return KDirModel::supportedDragActions();
        } else if (kdirmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kdirmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KDirModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirmodel_moverows_isbase) {
            kdirmodel_moverows_isbase = false;
            return KDirModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kdirmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kdirmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirmodel_movecolumns_isbase) {
            kdirmodel_movecolumns_isbase = false;
            return KDirModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kdirmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kdirmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kdirmodel_buddy_isbase) {
            kdirmodel_buddy_isbase = false;
            return KDirModel::buddy(index);
        } else if (kdirmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kdirmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kdirmodel_match_isbase) {
            kdirmodel_match_isbase = false;
            return KDirModel::match(start, role, value, hits, flags);
        } else if (kdirmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kdirmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KDirModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kdirmodel_span_isbase) {
            kdirmodel_span_isbase = false;
            return KDirModel::span(index);
        } else if (kdirmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kdirmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kdirmodel_multidata_isbase) {
            kdirmodel_multidata_isbase = false;
            KDirModel::multiData(index, roleDataSpan);
        } else if (kdirmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kdirmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KDirModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kdirmodel_submit_isbase) {
            kdirmodel_submit_isbase = false;
            return KDirModel::submit();
        } else if (kdirmodel_submit_callback != nullptr) {
            bool callback_ret = kdirmodel_submit_callback();
            return callback_ret;
        } else {
            return KDirModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kdirmodel_revert_isbase) {
            kdirmodel_revert_isbase = false;
            KDirModel::revert();
        } else if (kdirmodel_revert_callback != nullptr) {
            kdirmodel_revert_callback();
        } else {
            KDirModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kdirmodel_resetinternaldata_isbase) {
            kdirmodel_resetinternaldata_isbase = false;
            KDirModel::resetInternalData();
        } else if (kdirmodel_resetinternaldata_callback != nullptr) {
            kdirmodel_resetinternaldata_callback();
        } else {
            KDirModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirmodel_event_isbase) {
            kdirmodel_event_isbase = false;
            return KDirModel::event(event);
        } else if (kdirmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdirmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirmodel_eventfilter_isbase) {
            kdirmodel_eventfilter_isbase = false;
            return KDirModel::eventFilter(watched, event);
        } else if (kdirmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdirmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirmodel_timerevent_isbase) {
            kdirmodel_timerevent_isbase = false;
            KDirModel::timerEvent(event);
        } else if (kdirmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdirmodel_timerevent_callback(this, cbval1);
        } else {
            KDirModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirmodel_childevent_isbase) {
            kdirmodel_childevent_isbase = false;
            KDirModel::childEvent(event);
        } else if (kdirmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdirmodel_childevent_callback(this, cbval1);
        } else {
            KDirModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirmodel_customevent_isbase) {
            kdirmodel_customevent_isbase = false;
            KDirModel::customEvent(event);
        } else if (kdirmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdirmodel_customevent_callback(this, cbval1);
        } else {
            KDirModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirmodel_connectnotify_isbase) {
            kdirmodel_connectnotify_isbase = false;
            KDirModel::connectNotify(signal);
        } else if (kdirmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirmodel_connectnotify_callback(this, cbval1);
        } else {
            KDirModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirmodel_disconnectnotify_isbase) {
            kdirmodel_disconnectnotify_isbase = false;
            KDirModel::disconnectNotify(signal);
        } else if (kdirmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdirmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KDirModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kdirmodel_createindex_isbase) {
            kdirmodel_createindex_isbase = false;
            return KDirModel::createIndex(row, column);
        } else if (kdirmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kdirmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KDirModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kdirmodel_encodedata_isbase) {
            kdirmodel_encodedata_isbase = false;
            KDirModel::encodeData(indexes, stream);
        } else if (kdirmodel_encodedata_callback != nullptr) {
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

            kdirmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KDirModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kdirmodel_decodedata_isbase) {
            kdirmodel_decodedata_isbase = false;
            return KDirModel::decodeData(row, column, parent, stream);
        } else if (kdirmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kdirmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDirModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kdirmodel_begininsertrows_isbase) {
            kdirmodel_begininsertrows_isbase = false;
            KDirModel::beginInsertRows(parent, first, last);
        } else if (kdirmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kdirmodel_endinsertrows_isbase) {
            kdirmodel_endinsertrows_isbase = false;
            KDirModel::endInsertRows();
        } else if (kdirmodel_endinsertrows_callback != nullptr) {
            kdirmodel_endinsertrows_callback();
        } else {
            KDirModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kdirmodel_beginremoverows_isbase) {
            kdirmodel_beginremoverows_isbase = false;
            KDirModel::beginRemoveRows(parent, first, last);
        } else if (kdirmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kdirmodel_endremoverows_isbase) {
            kdirmodel_endremoverows_isbase = false;
            KDirModel::endRemoveRows();
        } else if (kdirmodel_endremoverows_callback != nullptr) {
            kdirmodel_endremoverows_callback();
        } else {
            KDirModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kdirmodel_beginmoverows_isbase) {
            kdirmodel_beginmoverows_isbase = false;
            return KDirModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kdirmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kdirmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kdirmodel_endmoverows_isbase) {
            kdirmodel_endmoverows_isbase = false;
            KDirModel::endMoveRows();
        } else if (kdirmodel_endmoverows_callback != nullptr) {
            kdirmodel_endmoverows_callback();
        } else {
            KDirModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kdirmodel_begininsertcolumns_isbase) {
            kdirmodel_begininsertcolumns_isbase = false;
            KDirModel::beginInsertColumns(parent, first, last);
        } else if (kdirmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kdirmodel_endinsertcolumns_isbase) {
            kdirmodel_endinsertcolumns_isbase = false;
            KDirModel::endInsertColumns();
        } else if (kdirmodel_endinsertcolumns_callback != nullptr) {
            kdirmodel_endinsertcolumns_callback();
        } else {
            KDirModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kdirmodel_beginremovecolumns_isbase) {
            kdirmodel_beginremovecolumns_isbase = false;
            KDirModel::beginRemoveColumns(parent, first, last);
        } else if (kdirmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kdirmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KDirModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kdirmodel_endremovecolumns_isbase) {
            kdirmodel_endremovecolumns_isbase = false;
            KDirModel::endRemoveColumns();
        } else if (kdirmodel_endremovecolumns_callback != nullptr) {
            kdirmodel_endremovecolumns_callback();
        } else {
            KDirModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kdirmodel_beginmovecolumns_isbase) {
            kdirmodel_beginmovecolumns_isbase = false;
            return KDirModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kdirmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kdirmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KDirModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kdirmodel_endmovecolumns_isbase) {
            kdirmodel_endmovecolumns_isbase = false;
            KDirModel::endMoveColumns();
        } else if (kdirmodel_endmovecolumns_callback != nullptr) {
            kdirmodel_endmovecolumns_callback();
        } else {
            KDirModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kdirmodel_beginresetmodel_isbase) {
            kdirmodel_beginresetmodel_isbase = false;
            KDirModel::beginResetModel();
        } else if (kdirmodel_beginresetmodel_callback != nullptr) {
            kdirmodel_beginresetmodel_callback();
        } else {
            KDirModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kdirmodel_endresetmodel_isbase) {
            kdirmodel_endresetmodel_isbase = false;
            KDirModel::endResetModel();
        } else if (kdirmodel_endresetmodel_callback != nullptr) {
            kdirmodel_endresetmodel_callback();
        } else {
            KDirModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kdirmodel_changepersistentindex_isbase) {
            kdirmodel_changepersistentindex_isbase = false;
            KDirModel::changePersistentIndex(from, to);
        } else if (kdirmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kdirmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KDirModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kdirmodel_changepersistentindexlist_isbase) {
            kdirmodel_changepersistentindexlist_isbase = false;
            KDirModel::changePersistentIndexList(from, to);
        } else if (kdirmodel_changepersistentindexlist_callback != nullptr) {
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

            kdirmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KDirModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kdirmodel_persistentindexlist_isbase) {
            kdirmodel_persistentindexlist_isbase = false;
            return KDirModel::persistentIndexList();
        } else if (kdirmodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kdirmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KDirModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdirmodel_sender_isbase) {
            kdirmodel_sender_isbase = false;
            return KDirModel::sender();
        } else if (kdirmodel_sender_callback != nullptr) {
            QObject* callback_ret = kdirmodel_sender_callback();
            return callback_ret;
        } else {
            return KDirModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdirmodel_sendersignalindex_isbase) {
            kdirmodel_sendersignalindex_isbase = false;
            return KDirModel::senderSignalIndex();
        } else if (kdirmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kdirmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDirModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdirmodel_receivers_isbase) {
            kdirmodel_receivers_isbase = false;
            return KDirModel::receivers(signal);
        } else if (kdirmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdirmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdirmodel_issignalconnected_isbase) {
            kdirmodel_issignalconnected_isbase = false;
            return KDirModel::isSignalConnected(signal);
        } else if (kdirmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdirmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KDirModel_ResetInternalData(KDirModel* self);
    friend void KDirModel_QBaseResetInternalData(KDirModel* self);
    friend void KDirModel_TimerEvent(KDirModel* self, QTimerEvent* event);
    friend void KDirModel_QBaseTimerEvent(KDirModel* self, QTimerEvent* event);
    friend void KDirModel_ChildEvent(KDirModel* self, QChildEvent* event);
    friend void KDirModel_QBaseChildEvent(KDirModel* self, QChildEvent* event);
    friend void KDirModel_CustomEvent(KDirModel* self, QEvent* event);
    friend void KDirModel_QBaseCustomEvent(KDirModel* self, QEvent* event);
    friend void KDirModel_ConnectNotify(KDirModel* self, const QMetaMethod* signal);
    friend void KDirModel_QBaseConnectNotify(KDirModel* self, const QMetaMethod* signal);
    friend void KDirModel_DisconnectNotify(KDirModel* self, const QMetaMethod* signal);
    friend void KDirModel_QBaseDisconnectNotify(KDirModel* self, const QMetaMethod* signal);
    friend QModelIndex* KDirModel_CreateIndex(const KDirModel* self, int row, int column);
    friend QModelIndex* KDirModel_QBaseCreateIndex(const KDirModel* self, int row, int column);
    friend void KDirModel_EncodeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KDirModel_QBaseEncodeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KDirModel_DecodeData(KDirModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KDirModel_QBaseDecodeData(KDirModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KDirModel_BeginInsertRows(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_QBaseBeginInsertRows(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_EndInsertRows(KDirModel* self);
    friend void KDirModel_QBaseEndInsertRows(KDirModel* self);
    friend void KDirModel_BeginRemoveRows(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_QBaseBeginRemoveRows(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_EndRemoveRows(KDirModel* self);
    friend void KDirModel_QBaseEndRemoveRows(KDirModel* self);
    friend bool KDirModel_BeginMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KDirModel_QBaseBeginMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KDirModel_EndMoveRows(KDirModel* self);
    friend void KDirModel_QBaseEndMoveRows(KDirModel* self);
    friend void KDirModel_BeginInsertColumns(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_QBaseBeginInsertColumns(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_EndInsertColumns(KDirModel* self);
    friend void KDirModel_QBaseEndInsertColumns(KDirModel* self);
    friend void KDirModel_BeginRemoveColumns(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_QBaseBeginRemoveColumns(KDirModel* self, const QModelIndex* parent, int first, int last);
    friend void KDirModel_EndRemoveColumns(KDirModel* self);
    friend void KDirModel_QBaseEndRemoveColumns(KDirModel* self);
    friend bool KDirModel_BeginMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KDirModel_QBaseBeginMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KDirModel_EndMoveColumns(KDirModel* self);
    friend void KDirModel_QBaseEndMoveColumns(KDirModel* self);
    friend void KDirModel_BeginResetModel(KDirModel* self);
    friend void KDirModel_QBaseBeginResetModel(KDirModel* self);
    friend void KDirModel_EndResetModel(KDirModel* self);
    friend void KDirModel_QBaseEndResetModel(KDirModel* self);
    friend void KDirModel_ChangePersistentIndex(KDirModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KDirModel_QBaseChangePersistentIndex(KDirModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KDirModel_ChangePersistentIndexList(KDirModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KDirModel_QBaseChangePersistentIndexList(KDirModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KDirModel_PersistentIndexList(const KDirModel* self);
    friend libqt_list /* of QModelIndex* */ KDirModel_QBasePersistentIndexList(const KDirModel* self);
    friend QObject* KDirModel_Sender(const KDirModel* self);
    friend QObject* KDirModel_QBaseSender(const KDirModel* self);
    friend int KDirModel_SenderSignalIndex(const KDirModel* self);
    friend int KDirModel_QBaseSenderSignalIndex(const KDirModel* self);
    friend int KDirModel_Receivers(const KDirModel* self, const char* signal);
    friend int KDirModel_QBaseReceivers(const KDirModel* self, const char* signal);
    friend bool KDirModel_IsSignalConnected(const KDirModel* self, const QMetaMethod* signal);
    friend bool KDirModel_QBaseIsSignalConnected(const KDirModel* self, const QMetaMethod* signal);
};

#endif
