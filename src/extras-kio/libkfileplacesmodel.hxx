#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPLACESMODEL_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPLACESMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePlacesModel so that we can call protected methods
class VirtualKFilePlacesModel final : public KFilePlacesModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKFilePlacesModel = true;

    // Virtual class public types (including callbacks)
    using KFilePlacesModel_Metacall_Callback = int (*)(KFilePlacesModel*, int, int, void**);
    using KFilePlacesModel_Data_Callback = QVariant* (*)(const KFilePlacesModel*, QModelIndex*, int);
    using KFilePlacesModel_Index_Callback = QModelIndex* (*)(const KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_Parent_Callback = QModelIndex* (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KFilePlacesModel_RowCount_Callback = int (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_ColumnCount_Callback = int (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_SupportedDropActions_Callback = int (*)();
    using KFilePlacesModel_Flags_Callback = int (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_MimeTypes_Callback = const char** (*)();
    using KFilePlacesModel_MimeData_Callback = QMimeData* (*)(const KFilePlacesModel*, libqt_list /* of QModelIndex* */);
    using KFilePlacesModel_DropMimeData_Callback = bool (*)(KFilePlacesModel*, QMimeData*, int, int, int, QModelIndex*);
    using KFilePlacesModel_Sibling_Callback = QModelIndex* (*)(const KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_HasChildren_Callback = bool (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_SetData_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, QVariant*, int);
    using KFilePlacesModel_HeaderData_Callback = QVariant* (*)(const KFilePlacesModel*, int, int, int);
    using KFilePlacesModel_SetHeaderData_Callback = bool (*)(KFilePlacesModel*, int, int, QVariant*, int);
    using KFilePlacesModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_SetItemData_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KFilePlacesModel_ClearItemData_Callback = bool (*)(KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_CanDropMimeData_Callback = bool (*)(const KFilePlacesModel*, QMimeData*, int, int, int, QModelIndex*);
    using KFilePlacesModel_SupportedDragActions_Callback = int (*)();
    using KFilePlacesModel_InsertRows_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_InsertColumns_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_RemoveRows_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_RemoveColumns_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_MoveRows_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KFilePlacesModel_MoveColumns_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KFilePlacesModel_FetchMore_Callback = void (*)(KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_CanFetchMore_Callback = bool (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_Sort_Callback = void (*)(KFilePlacesModel*, int, int);
    using KFilePlacesModel_Buddy_Callback = QModelIndex* (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_Match_Callback = QModelIndex** (*)(const KFilePlacesModel*, QModelIndex*, int, QVariant*, int, int);
    using KFilePlacesModel_Span_Callback = QSize* (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_MultiData_Callback = void (*)(const KFilePlacesModel*, QModelIndex*, QModelRoleDataSpan*);
    using KFilePlacesModel_Submit_Callback = bool (*)();
    using KFilePlacesModel_Revert_Callback = void (*)();
    using KFilePlacesModel_ResetInternalData_Callback = void (*)();
    using KFilePlacesModel_Event_Callback = bool (*)(KFilePlacesModel*, QEvent*);
    using KFilePlacesModel_EventFilter_Callback = bool (*)(KFilePlacesModel*, QObject*, QEvent*);
    using KFilePlacesModel_TimerEvent_Callback = void (*)(KFilePlacesModel*, QTimerEvent*);
    using KFilePlacesModel_ChildEvent_Callback = void (*)(KFilePlacesModel*, QChildEvent*);
    using KFilePlacesModel_CustomEvent_Callback = void (*)(KFilePlacesModel*, QEvent*);
    using KFilePlacesModel_ConnectNotify_Callback = void (*)(KFilePlacesModel*, QMetaMethod*);
    using KFilePlacesModel_DisconnectNotify_Callback = void (*)(KFilePlacesModel*, QMetaMethod*);
    using KFilePlacesModel_CreateIndex_Callback = QModelIndex* (*)(const KFilePlacesModel*, int, int);
    using KFilePlacesModel_EncodeData_Callback = void (*)(const KFilePlacesModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KFilePlacesModel_DecodeData_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*, QDataStream*);
    using KFilePlacesModel_BeginInsertRows_Callback = void (*)(KFilePlacesModel*, QModelIndex*, int, int);
    using KFilePlacesModel_EndInsertRows_Callback = void (*)();
    using KFilePlacesModel_BeginRemoveRows_Callback = void (*)(KFilePlacesModel*, QModelIndex*, int, int);
    using KFilePlacesModel_EndRemoveRows_Callback = void (*)();
    using KFilePlacesModel_BeginMoveRows_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KFilePlacesModel_EndMoveRows_Callback = void (*)();
    using KFilePlacesModel_BeginInsertColumns_Callback = void (*)(KFilePlacesModel*, QModelIndex*, int, int);
    using KFilePlacesModel_EndInsertColumns_Callback = void (*)();
    using KFilePlacesModel_BeginRemoveColumns_Callback = void (*)(KFilePlacesModel*, QModelIndex*, int, int);
    using KFilePlacesModel_EndRemoveColumns_Callback = void (*)();
    using KFilePlacesModel_BeginMoveColumns_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KFilePlacesModel_EndMoveColumns_Callback = void (*)();
    using KFilePlacesModel_BeginResetModel_Callback = void (*)();
    using KFilePlacesModel_EndResetModel_Callback = void (*)();
    using KFilePlacesModel_ChangePersistentIndex_Callback = void (*)(KFilePlacesModel*, QModelIndex*, QModelIndex*);
    using KFilePlacesModel_ChangePersistentIndexList_Callback = void (*)(KFilePlacesModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KFilePlacesModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KFilePlacesModel_Sender_Callback = QObject* (*)();
    using KFilePlacesModel_SenderSignalIndex_Callback = int (*)();
    using KFilePlacesModel_Receivers_Callback = int (*)(const KFilePlacesModel*, const char*);
    using KFilePlacesModel_IsSignalConnected_Callback = bool (*)(const KFilePlacesModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFilePlacesModel_Metacall_Callback kfileplacesmodel_metacall_callback = nullptr;
    KFilePlacesModel_Data_Callback kfileplacesmodel_data_callback = nullptr;
    KFilePlacesModel_Index_Callback kfileplacesmodel_index_callback = nullptr;
    KFilePlacesModel_Parent_Callback kfileplacesmodel_parent_callback = nullptr;
    KFilePlacesModel_RoleNames_Callback kfileplacesmodel_rolenames_callback = nullptr;
    KFilePlacesModel_RowCount_Callback kfileplacesmodel_rowcount_callback = nullptr;
    KFilePlacesModel_ColumnCount_Callback kfileplacesmodel_columncount_callback = nullptr;
    KFilePlacesModel_SupportedDropActions_Callback kfileplacesmodel_supporteddropactions_callback = nullptr;
    KFilePlacesModel_Flags_Callback kfileplacesmodel_flags_callback = nullptr;
    KFilePlacesModel_MimeTypes_Callback kfileplacesmodel_mimetypes_callback = nullptr;
    KFilePlacesModel_MimeData_Callback kfileplacesmodel_mimedata_callback = nullptr;
    KFilePlacesModel_DropMimeData_Callback kfileplacesmodel_dropmimedata_callback = nullptr;
    KFilePlacesModel_Sibling_Callback kfileplacesmodel_sibling_callback = nullptr;
    KFilePlacesModel_HasChildren_Callback kfileplacesmodel_haschildren_callback = nullptr;
    KFilePlacesModel_SetData_Callback kfileplacesmodel_setdata_callback = nullptr;
    KFilePlacesModel_HeaderData_Callback kfileplacesmodel_headerdata_callback = nullptr;
    KFilePlacesModel_SetHeaderData_Callback kfileplacesmodel_setheaderdata_callback = nullptr;
    KFilePlacesModel_ItemData_Callback kfileplacesmodel_itemdata_callback = nullptr;
    KFilePlacesModel_SetItemData_Callback kfileplacesmodel_setitemdata_callback = nullptr;
    KFilePlacesModel_ClearItemData_Callback kfileplacesmodel_clearitemdata_callback = nullptr;
    KFilePlacesModel_CanDropMimeData_Callback kfileplacesmodel_candropmimedata_callback = nullptr;
    KFilePlacesModel_SupportedDragActions_Callback kfileplacesmodel_supporteddragactions_callback = nullptr;
    KFilePlacesModel_InsertRows_Callback kfileplacesmodel_insertrows_callback = nullptr;
    KFilePlacesModel_InsertColumns_Callback kfileplacesmodel_insertcolumns_callback = nullptr;
    KFilePlacesModel_RemoveRows_Callback kfileplacesmodel_removerows_callback = nullptr;
    KFilePlacesModel_RemoveColumns_Callback kfileplacesmodel_removecolumns_callback = nullptr;
    KFilePlacesModel_MoveRows_Callback kfileplacesmodel_moverows_callback = nullptr;
    KFilePlacesModel_MoveColumns_Callback kfileplacesmodel_movecolumns_callback = nullptr;
    KFilePlacesModel_FetchMore_Callback kfileplacesmodel_fetchmore_callback = nullptr;
    KFilePlacesModel_CanFetchMore_Callback kfileplacesmodel_canfetchmore_callback = nullptr;
    KFilePlacesModel_Sort_Callback kfileplacesmodel_sort_callback = nullptr;
    KFilePlacesModel_Buddy_Callback kfileplacesmodel_buddy_callback = nullptr;
    KFilePlacesModel_Match_Callback kfileplacesmodel_match_callback = nullptr;
    KFilePlacesModel_Span_Callback kfileplacesmodel_span_callback = nullptr;
    KFilePlacesModel_MultiData_Callback kfileplacesmodel_multidata_callback = nullptr;
    KFilePlacesModel_Submit_Callback kfileplacesmodel_submit_callback = nullptr;
    KFilePlacesModel_Revert_Callback kfileplacesmodel_revert_callback = nullptr;
    KFilePlacesModel_ResetInternalData_Callback kfileplacesmodel_resetinternaldata_callback = nullptr;
    KFilePlacesModel_Event_Callback kfileplacesmodel_event_callback = nullptr;
    KFilePlacesModel_EventFilter_Callback kfileplacesmodel_eventfilter_callback = nullptr;
    KFilePlacesModel_TimerEvent_Callback kfileplacesmodel_timerevent_callback = nullptr;
    KFilePlacesModel_ChildEvent_Callback kfileplacesmodel_childevent_callback = nullptr;
    KFilePlacesModel_CustomEvent_Callback kfileplacesmodel_customevent_callback = nullptr;
    KFilePlacesModel_ConnectNotify_Callback kfileplacesmodel_connectnotify_callback = nullptr;
    KFilePlacesModel_DisconnectNotify_Callback kfileplacesmodel_disconnectnotify_callback = nullptr;
    KFilePlacesModel_CreateIndex_Callback kfileplacesmodel_createindex_callback = nullptr;
    KFilePlacesModel_EncodeData_Callback kfileplacesmodel_encodedata_callback = nullptr;
    KFilePlacesModel_DecodeData_Callback kfileplacesmodel_decodedata_callback = nullptr;
    KFilePlacesModel_BeginInsertRows_Callback kfileplacesmodel_begininsertrows_callback = nullptr;
    KFilePlacesModel_EndInsertRows_Callback kfileplacesmodel_endinsertrows_callback = nullptr;
    KFilePlacesModel_BeginRemoveRows_Callback kfileplacesmodel_beginremoverows_callback = nullptr;
    KFilePlacesModel_EndRemoveRows_Callback kfileplacesmodel_endremoverows_callback = nullptr;
    KFilePlacesModel_BeginMoveRows_Callback kfileplacesmodel_beginmoverows_callback = nullptr;
    KFilePlacesModel_EndMoveRows_Callback kfileplacesmodel_endmoverows_callback = nullptr;
    KFilePlacesModel_BeginInsertColumns_Callback kfileplacesmodel_begininsertcolumns_callback = nullptr;
    KFilePlacesModel_EndInsertColumns_Callback kfileplacesmodel_endinsertcolumns_callback = nullptr;
    KFilePlacesModel_BeginRemoveColumns_Callback kfileplacesmodel_beginremovecolumns_callback = nullptr;
    KFilePlacesModel_EndRemoveColumns_Callback kfileplacesmodel_endremovecolumns_callback = nullptr;
    KFilePlacesModel_BeginMoveColumns_Callback kfileplacesmodel_beginmovecolumns_callback = nullptr;
    KFilePlacesModel_EndMoveColumns_Callback kfileplacesmodel_endmovecolumns_callback = nullptr;
    KFilePlacesModel_BeginResetModel_Callback kfileplacesmodel_beginresetmodel_callback = nullptr;
    KFilePlacesModel_EndResetModel_Callback kfileplacesmodel_endresetmodel_callback = nullptr;
    KFilePlacesModel_ChangePersistentIndex_Callback kfileplacesmodel_changepersistentindex_callback = nullptr;
    KFilePlacesModel_ChangePersistentIndexList_Callback kfileplacesmodel_changepersistentindexlist_callback = nullptr;
    KFilePlacesModel_PersistentIndexList_Callback kfileplacesmodel_persistentindexlist_callback = nullptr;
    KFilePlacesModel_Sender_Callback kfileplacesmodel_sender_callback = nullptr;
    KFilePlacesModel_SenderSignalIndex_Callback kfileplacesmodel_sendersignalindex_callback = nullptr;
    KFilePlacesModel_Receivers_Callback kfileplacesmodel_receivers_callback = nullptr;
    KFilePlacesModel_IsSignalConnected_Callback kfileplacesmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfileplacesmodel_metacall_isbase = false;
    mutable bool kfileplacesmodel_data_isbase = false;
    mutable bool kfileplacesmodel_index_isbase = false;
    mutable bool kfileplacesmodel_parent_isbase = false;
    mutable bool kfileplacesmodel_rolenames_isbase = false;
    mutable bool kfileplacesmodel_rowcount_isbase = false;
    mutable bool kfileplacesmodel_columncount_isbase = false;
    mutable bool kfileplacesmodel_supporteddropactions_isbase = false;
    mutable bool kfileplacesmodel_flags_isbase = false;
    mutable bool kfileplacesmodel_mimetypes_isbase = false;
    mutable bool kfileplacesmodel_mimedata_isbase = false;
    mutable bool kfileplacesmodel_dropmimedata_isbase = false;
    mutable bool kfileplacesmodel_sibling_isbase = false;
    mutable bool kfileplacesmodel_haschildren_isbase = false;
    mutable bool kfileplacesmodel_setdata_isbase = false;
    mutable bool kfileplacesmodel_headerdata_isbase = false;
    mutable bool kfileplacesmodel_setheaderdata_isbase = false;
    mutable bool kfileplacesmodel_itemdata_isbase = false;
    mutable bool kfileplacesmodel_setitemdata_isbase = false;
    mutable bool kfileplacesmodel_clearitemdata_isbase = false;
    mutable bool kfileplacesmodel_candropmimedata_isbase = false;
    mutable bool kfileplacesmodel_supporteddragactions_isbase = false;
    mutable bool kfileplacesmodel_insertrows_isbase = false;
    mutable bool kfileplacesmodel_insertcolumns_isbase = false;
    mutable bool kfileplacesmodel_removerows_isbase = false;
    mutable bool kfileplacesmodel_removecolumns_isbase = false;
    mutable bool kfileplacesmodel_moverows_isbase = false;
    mutable bool kfileplacesmodel_movecolumns_isbase = false;
    mutable bool kfileplacesmodel_fetchmore_isbase = false;
    mutable bool kfileplacesmodel_canfetchmore_isbase = false;
    mutable bool kfileplacesmodel_sort_isbase = false;
    mutable bool kfileplacesmodel_buddy_isbase = false;
    mutable bool kfileplacesmodel_match_isbase = false;
    mutable bool kfileplacesmodel_span_isbase = false;
    mutable bool kfileplacesmodel_multidata_isbase = false;
    mutable bool kfileplacesmodel_submit_isbase = false;
    mutable bool kfileplacesmodel_revert_isbase = false;
    mutable bool kfileplacesmodel_resetinternaldata_isbase = false;
    mutable bool kfileplacesmodel_event_isbase = false;
    mutable bool kfileplacesmodel_eventfilter_isbase = false;
    mutable bool kfileplacesmodel_timerevent_isbase = false;
    mutable bool kfileplacesmodel_childevent_isbase = false;
    mutable bool kfileplacesmodel_customevent_isbase = false;
    mutable bool kfileplacesmodel_connectnotify_isbase = false;
    mutable bool kfileplacesmodel_disconnectnotify_isbase = false;
    mutable bool kfileplacesmodel_createindex_isbase = false;
    mutable bool kfileplacesmodel_encodedata_isbase = false;
    mutable bool kfileplacesmodel_decodedata_isbase = false;
    mutable bool kfileplacesmodel_begininsertrows_isbase = false;
    mutable bool kfileplacesmodel_endinsertrows_isbase = false;
    mutable bool kfileplacesmodel_beginremoverows_isbase = false;
    mutable bool kfileplacesmodel_endremoverows_isbase = false;
    mutable bool kfileplacesmodel_beginmoverows_isbase = false;
    mutable bool kfileplacesmodel_endmoverows_isbase = false;
    mutable bool kfileplacesmodel_begininsertcolumns_isbase = false;
    mutable bool kfileplacesmodel_endinsertcolumns_isbase = false;
    mutable bool kfileplacesmodel_beginremovecolumns_isbase = false;
    mutable bool kfileplacesmodel_endremovecolumns_isbase = false;
    mutable bool kfileplacesmodel_beginmovecolumns_isbase = false;
    mutable bool kfileplacesmodel_endmovecolumns_isbase = false;
    mutable bool kfileplacesmodel_beginresetmodel_isbase = false;
    mutable bool kfileplacesmodel_endresetmodel_isbase = false;
    mutable bool kfileplacesmodel_changepersistentindex_isbase = false;
    mutable bool kfileplacesmodel_changepersistentindexlist_isbase = false;
    mutable bool kfileplacesmodel_persistentindexlist_isbase = false;
    mutable bool kfileplacesmodel_sender_isbase = false;
    mutable bool kfileplacesmodel_sendersignalindex_isbase = false;
    mutable bool kfileplacesmodel_receivers_isbase = false;
    mutable bool kfileplacesmodel_issignalconnected_isbase = false;

  public:
    VirtualKFilePlacesModel() : KFilePlacesModel() {};
    VirtualKFilePlacesModel(QObject* parent) : KFilePlacesModel(parent) {};

    ~VirtualKFilePlacesModel() {
        kfileplacesmodel_metacall_callback = nullptr;
        kfileplacesmodel_data_callback = nullptr;
        kfileplacesmodel_index_callback = nullptr;
        kfileplacesmodel_parent_callback = nullptr;
        kfileplacesmodel_rolenames_callback = nullptr;
        kfileplacesmodel_rowcount_callback = nullptr;
        kfileplacesmodel_columncount_callback = nullptr;
        kfileplacesmodel_supporteddropactions_callback = nullptr;
        kfileplacesmodel_flags_callback = nullptr;
        kfileplacesmodel_mimetypes_callback = nullptr;
        kfileplacesmodel_mimedata_callback = nullptr;
        kfileplacesmodel_dropmimedata_callback = nullptr;
        kfileplacesmodel_sibling_callback = nullptr;
        kfileplacesmodel_haschildren_callback = nullptr;
        kfileplacesmodel_setdata_callback = nullptr;
        kfileplacesmodel_headerdata_callback = nullptr;
        kfileplacesmodel_setheaderdata_callback = nullptr;
        kfileplacesmodel_itemdata_callback = nullptr;
        kfileplacesmodel_setitemdata_callback = nullptr;
        kfileplacesmodel_clearitemdata_callback = nullptr;
        kfileplacesmodel_candropmimedata_callback = nullptr;
        kfileplacesmodel_supporteddragactions_callback = nullptr;
        kfileplacesmodel_insertrows_callback = nullptr;
        kfileplacesmodel_insertcolumns_callback = nullptr;
        kfileplacesmodel_removerows_callback = nullptr;
        kfileplacesmodel_removecolumns_callback = nullptr;
        kfileplacesmodel_moverows_callback = nullptr;
        kfileplacesmodel_movecolumns_callback = nullptr;
        kfileplacesmodel_fetchmore_callback = nullptr;
        kfileplacesmodel_canfetchmore_callback = nullptr;
        kfileplacesmodel_sort_callback = nullptr;
        kfileplacesmodel_buddy_callback = nullptr;
        kfileplacesmodel_match_callback = nullptr;
        kfileplacesmodel_span_callback = nullptr;
        kfileplacesmodel_multidata_callback = nullptr;
        kfileplacesmodel_submit_callback = nullptr;
        kfileplacesmodel_revert_callback = nullptr;
        kfileplacesmodel_resetinternaldata_callback = nullptr;
        kfileplacesmodel_event_callback = nullptr;
        kfileplacesmodel_eventfilter_callback = nullptr;
        kfileplacesmodel_timerevent_callback = nullptr;
        kfileplacesmodel_childevent_callback = nullptr;
        kfileplacesmodel_customevent_callback = nullptr;
        kfileplacesmodel_connectnotify_callback = nullptr;
        kfileplacesmodel_disconnectnotify_callback = nullptr;
        kfileplacesmodel_createindex_callback = nullptr;
        kfileplacesmodel_encodedata_callback = nullptr;
        kfileplacesmodel_decodedata_callback = nullptr;
        kfileplacesmodel_begininsertrows_callback = nullptr;
        kfileplacesmodel_endinsertrows_callback = nullptr;
        kfileplacesmodel_beginremoverows_callback = nullptr;
        kfileplacesmodel_endremoverows_callback = nullptr;
        kfileplacesmodel_beginmoverows_callback = nullptr;
        kfileplacesmodel_endmoverows_callback = nullptr;
        kfileplacesmodel_begininsertcolumns_callback = nullptr;
        kfileplacesmodel_endinsertcolumns_callback = nullptr;
        kfileplacesmodel_beginremovecolumns_callback = nullptr;
        kfileplacesmodel_endremovecolumns_callback = nullptr;
        kfileplacesmodel_beginmovecolumns_callback = nullptr;
        kfileplacesmodel_endmovecolumns_callback = nullptr;
        kfileplacesmodel_beginresetmodel_callback = nullptr;
        kfileplacesmodel_endresetmodel_callback = nullptr;
        kfileplacesmodel_changepersistentindex_callback = nullptr;
        kfileplacesmodel_changepersistentindexlist_callback = nullptr;
        kfileplacesmodel_persistentindexlist_callback = nullptr;
        kfileplacesmodel_sender_callback = nullptr;
        kfileplacesmodel_sendersignalindex_callback = nullptr;
        kfileplacesmodel_receivers_callback = nullptr;
        kfileplacesmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFilePlacesModel_Metacall_Callback(KFilePlacesModel_Metacall_Callback cb) { kfileplacesmodel_metacall_callback = cb; }
    inline void setKFilePlacesModel_Data_Callback(KFilePlacesModel_Data_Callback cb) { kfileplacesmodel_data_callback = cb; }
    inline void setKFilePlacesModel_Index_Callback(KFilePlacesModel_Index_Callback cb) { kfileplacesmodel_index_callback = cb; }
    inline void setKFilePlacesModel_Parent_Callback(KFilePlacesModel_Parent_Callback cb) { kfileplacesmodel_parent_callback = cb; }
    inline void setKFilePlacesModel_RoleNames_Callback(KFilePlacesModel_RoleNames_Callback cb) { kfileplacesmodel_rolenames_callback = cb; }
    inline void setKFilePlacesModel_RowCount_Callback(KFilePlacesModel_RowCount_Callback cb) { kfileplacesmodel_rowcount_callback = cb; }
    inline void setKFilePlacesModel_ColumnCount_Callback(KFilePlacesModel_ColumnCount_Callback cb) { kfileplacesmodel_columncount_callback = cb; }
    inline void setKFilePlacesModel_SupportedDropActions_Callback(KFilePlacesModel_SupportedDropActions_Callback cb) { kfileplacesmodel_supporteddropactions_callback = cb; }
    inline void setKFilePlacesModel_Flags_Callback(KFilePlacesModel_Flags_Callback cb) { kfileplacesmodel_flags_callback = cb; }
    inline void setKFilePlacesModel_MimeTypes_Callback(KFilePlacesModel_MimeTypes_Callback cb) { kfileplacesmodel_mimetypes_callback = cb; }
    inline void setKFilePlacesModel_MimeData_Callback(KFilePlacesModel_MimeData_Callback cb) { kfileplacesmodel_mimedata_callback = cb; }
    inline void setKFilePlacesModel_DropMimeData_Callback(KFilePlacesModel_DropMimeData_Callback cb) { kfileplacesmodel_dropmimedata_callback = cb; }
    inline void setKFilePlacesModel_Sibling_Callback(KFilePlacesModel_Sibling_Callback cb) { kfileplacesmodel_sibling_callback = cb; }
    inline void setKFilePlacesModel_HasChildren_Callback(KFilePlacesModel_HasChildren_Callback cb) { kfileplacesmodel_haschildren_callback = cb; }
    inline void setKFilePlacesModel_SetData_Callback(KFilePlacesModel_SetData_Callback cb) { kfileplacesmodel_setdata_callback = cb; }
    inline void setKFilePlacesModel_HeaderData_Callback(KFilePlacesModel_HeaderData_Callback cb) { kfileplacesmodel_headerdata_callback = cb; }
    inline void setKFilePlacesModel_SetHeaderData_Callback(KFilePlacesModel_SetHeaderData_Callback cb) { kfileplacesmodel_setheaderdata_callback = cb; }
    inline void setKFilePlacesModel_ItemData_Callback(KFilePlacesModel_ItemData_Callback cb) { kfileplacesmodel_itemdata_callback = cb; }
    inline void setKFilePlacesModel_SetItemData_Callback(KFilePlacesModel_SetItemData_Callback cb) { kfileplacesmodel_setitemdata_callback = cb; }
    inline void setKFilePlacesModel_ClearItemData_Callback(KFilePlacesModel_ClearItemData_Callback cb) { kfileplacesmodel_clearitemdata_callback = cb; }
    inline void setKFilePlacesModel_CanDropMimeData_Callback(KFilePlacesModel_CanDropMimeData_Callback cb) { kfileplacesmodel_candropmimedata_callback = cb; }
    inline void setKFilePlacesModel_SupportedDragActions_Callback(KFilePlacesModel_SupportedDragActions_Callback cb) { kfileplacesmodel_supporteddragactions_callback = cb; }
    inline void setKFilePlacesModel_InsertRows_Callback(KFilePlacesModel_InsertRows_Callback cb) { kfileplacesmodel_insertrows_callback = cb; }
    inline void setKFilePlacesModel_InsertColumns_Callback(KFilePlacesModel_InsertColumns_Callback cb) { kfileplacesmodel_insertcolumns_callback = cb; }
    inline void setKFilePlacesModel_RemoveRows_Callback(KFilePlacesModel_RemoveRows_Callback cb) { kfileplacesmodel_removerows_callback = cb; }
    inline void setKFilePlacesModel_RemoveColumns_Callback(KFilePlacesModel_RemoveColumns_Callback cb) { kfileplacesmodel_removecolumns_callback = cb; }
    inline void setKFilePlacesModel_MoveRows_Callback(KFilePlacesModel_MoveRows_Callback cb) { kfileplacesmodel_moverows_callback = cb; }
    inline void setKFilePlacesModel_MoveColumns_Callback(KFilePlacesModel_MoveColumns_Callback cb) { kfileplacesmodel_movecolumns_callback = cb; }
    inline void setKFilePlacesModel_FetchMore_Callback(KFilePlacesModel_FetchMore_Callback cb) { kfileplacesmodel_fetchmore_callback = cb; }
    inline void setKFilePlacesModel_CanFetchMore_Callback(KFilePlacesModel_CanFetchMore_Callback cb) { kfileplacesmodel_canfetchmore_callback = cb; }
    inline void setKFilePlacesModel_Sort_Callback(KFilePlacesModel_Sort_Callback cb) { kfileplacesmodel_sort_callback = cb; }
    inline void setKFilePlacesModel_Buddy_Callback(KFilePlacesModel_Buddy_Callback cb) { kfileplacesmodel_buddy_callback = cb; }
    inline void setKFilePlacesModel_Match_Callback(KFilePlacesModel_Match_Callback cb) { kfileplacesmodel_match_callback = cb; }
    inline void setKFilePlacesModel_Span_Callback(KFilePlacesModel_Span_Callback cb) { kfileplacesmodel_span_callback = cb; }
    inline void setKFilePlacesModel_MultiData_Callback(KFilePlacesModel_MultiData_Callback cb) { kfileplacesmodel_multidata_callback = cb; }
    inline void setKFilePlacesModel_Submit_Callback(KFilePlacesModel_Submit_Callback cb) { kfileplacesmodel_submit_callback = cb; }
    inline void setKFilePlacesModel_Revert_Callback(KFilePlacesModel_Revert_Callback cb) { kfileplacesmodel_revert_callback = cb; }
    inline void setKFilePlacesModel_ResetInternalData_Callback(KFilePlacesModel_ResetInternalData_Callback cb) { kfileplacesmodel_resetinternaldata_callback = cb; }
    inline void setKFilePlacesModel_Event_Callback(KFilePlacesModel_Event_Callback cb) { kfileplacesmodel_event_callback = cb; }
    inline void setKFilePlacesModel_EventFilter_Callback(KFilePlacesModel_EventFilter_Callback cb) { kfileplacesmodel_eventfilter_callback = cb; }
    inline void setKFilePlacesModel_TimerEvent_Callback(KFilePlacesModel_TimerEvent_Callback cb) { kfileplacesmodel_timerevent_callback = cb; }
    inline void setKFilePlacesModel_ChildEvent_Callback(KFilePlacesModel_ChildEvent_Callback cb) { kfileplacesmodel_childevent_callback = cb; }
    inline void setKFilePlacesModel_CustomEvent_Callback(KFilePlacesModel_CustomEvent_Callback cb) { kfileplacesmodel_customevent_callback = cb; }
    inline void setKFilePlacesModel_ConnectNotify_Callback(KFilePlacesModel_ConnectNotify_Callback cb) { kfileplacesmodel_connectnotify_callback = cb; }
    inline void setKFilePlacesModel_DisconnectNotify_Callback(KFilePlacesModel_DisconnectNotify_Callback cb) { kfileplacesmodel_disconnectnotify_callback = cb; }
    inline void setKFilePlacesModel_CreateIndex_Callback(KFilePlacesModel_CreateIndex_Callback cb) { kfileplacesmodel_createindex_callback = cb; }
    inline void setKFilePlacesModel_EncodeData_Callback(KFilePlacesModel_EncodeData_Callback cb) { kfileplacesmodel_encodedata_callback = cb; }
    inline void setKFilePlacesModel_DecodeData_Callback(KFilePlacesModel_DecodeData_Callback cb) { kfileplacesmodel_decodedata_callback = cb; }
    inline void setKFilePlacesModel_BeginInsertRows_Callback(KFilePlacesModel_BeginInsertRows_Callback cb) { kfileplacesmodel_begininsertrows_callback = cb; }
    inline void setKFilePlacesModel_EndInsertRows_Callback(KFilePlacesModel_EndInsertRows_Callback cb) { kfileplacesmodel_endinsertrows_callback = cb; }
    inline void setKFilePlacesModel_BeginRemoveRows_Callback(KFilePlacesModel_BeginRemoveRows_Callback cb) { kfileplacesmodel_beginremoverows_callback = cb; }
    inline void setKFilePlacesModel_EndRemoveRows_Callback(KFilePlacesModel_EndRemoveRows_Callback cb) { kfileplacesmodel_endremoverows_callback = cb; }
    inline void setKFilePlacesModel_BeginMoveRows_Callback(KFilePlacesModel_BeginMoveRows_Callback cb) { kfileplacesmodel_beginmoverows_callback = cb; }
    inline void setKFilePlacesModel_EndMoveRows_Callback(KFilePlacesModel_EndMoveRows_Callback cb) { kfileplacesmodel_endmoverows_callback = cb; }
    inline void setKFilePlacesModel_BeginInsertColumns_Callback(KFilePlacesModel_BeginInsertColumns_Callback cb) { kfileplacesmodel_begininsertcolumns_callback = cb; }
    inline void setKFilePlacesModel_EndInsertColumns_Callback(KFilePlacesModel_EndInsertColumns_Callback cb) { kfileplacesmodel_endinsertcolumns_callback = cb; }
    inline void setKFilePlacesModel_BeginRemoveColumns_Callback(KFilePlacesModel_BeginRemoveColumns_Callback cb) { kfileplacesmodel_beginremovecolumns_callback = cb; }
    inline void setKFilePlacesModel_EndRemoveColumns_Callback(KFilePlacesModel_EndRemoveColumns_Callback cb) { kfileplacesmodel_endremovecolumns_callback = cb; }
    inline void setKFilePlacesModel_BeginMoveColumns_Callback(KFilePlacesModel_BeginMoveColumns_Callback cb) { kfileplacesmodel_beginmovecolumns_callback = cb; }
    inline void setKFilePlacesModel_EndMoveColumns_Callback(KFilePlacesModel_EndMoveColumns_Callback cb) { kfileplacesmodel_endmovecolumns_callback = cb; }
    inline void setKFilePlacesModel_BeginResetModel_Callback(KFilePlacesModel_BeginResetModel_Callback cb) { kfileplacesmodel_beginresetmodel_callback = cb; }
    inline void setKFilePlacesModel_EndResetModel_Callback(KFilePlacesModel_EndResetModel_Callback cb) { kfileplacesmodel_endresetmodel_callback = cb; }
    inline void setKFilePlacesModel_ChangePersistentIndex_Callback(KFilePlacesModel_ChangePersistentIndex_Callback cb) { kfileplacesmodel_changepersistentindex_callback = cb; }
    inline void setKFilePlacesModel_ChangePersistentIndexList_Callback(KFilePlacesModel_ChangePersistentIndexList_Callback cb) { kfileplacesmodel_changepersistentindexlist_callback = cb; }
    inline void setKFilePlacesModel_PersistentIndexList_Callback(KFilePlacesModel_PersistentIndexList_Callback cb) { kfileplacesmodel_persistentindexlist_callback = cb; }
    inline void setKFilePlacesModel_Sender_Callback(KFilePlacesModel_Sender_Callback cb) { kfileplacesmodel_sender_callback = cb; }
    inline void setKFilePlacesModel_SenderSignalIndex_Callback(KFilePlacesModel_SenderSignalIndex_Callback cb) { kfileplacesmodel_sendersignalindex_callback = cb; }
    inline void setKFilePlacesModel_Receivers_Callback(KFilePlacesModel_Receivers_Callback cb) { kfileplacesmodel_receivers_callback = cb; }
    inline void setKFilePlacesModel_IsSignalConnected_Callback(KFilePlacesModel_IsSignalConnected_Callback cb) { kfileplacesmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFilePlacesModel_Metacall_IsBase(bool value) const { kfileplacesmodel_metacall_isbase = value; }
    inline void setKFilePlacesModel_Data_IsBase(bool value) const { kfileplacesmodel_data_isbase = value; }
    inline void setKFilePlacesModel_Index_IsBase(bool value) const { kfileplacesmodel_index_isbase = value; }
    inline void setKFilePlacesModel_Parent_IsBase(bool value) const { kfileplacesmodel_parent_isbase = value; }
    inline void setKFilePlacesModel_RoleNames_IsBase(bool value) const { kfileplacesmodel_rolenames_isbase = value; }
    inline void setKFilePlacesModel_RowCount_IsBase(bool value) const { kfileplacesmodel_rowcount_isbase = value; }
    inline void setKFilePlacesModel_ColumnCount_IsBase(bool value) const { kfileplacesmodel_columncount_isbase = value; }
    inline void setKFilePlacesModel_SupportedDropActions_IsBase(bool value) const { kfileplacesmodel_supporteddropactions_isbase = value; }
    inline void setKFilePlacesModel_Flags_IsBase(bool value) const { kfileplacesmodel_flags_isbase = value; }
    inline void setKFilePlacesModel_MimeTypes_IsBase(bool value) const { kfileplacesmodel_mimetypes_isbase = value; }
    inline void setKFilePlacesModel_MimeData_IsBase(bool value) const { kfileplacesmodel_mimedata_isbase = value; }
    inline void setKFilePlacesModel_DropMimeData_IsBase(bool value) const { kfileplacesmodel_dropmimedata_isbase = value; }
    inline void setKFilePlacesModel_Sibling_IsBase(bool value) const { kfileplacesmodel_sibling_isbase = value; }
    inline void setKFilePlacesModel_HasChildren_IsBase(bool value) const { kfileplacesmodel_haschildren_isbase = value; }
    inline void setKFilePlacesModel_SetData_IsBase(bool value) const { kfileplacesmodel_setdata_isbase = value; }
    inline void setKFilePlacesModel_HeaderData_IsBase(bool value) const { kfileplacesmodel_headerdata_isbase = value; }
    inline void setKFilePlacesModel_SetHeaderData_IsBase(bool value) const { kfileplacesmodel_setheaderdata_isbase = value; }
    inline void setKFilePlacesModel_ItemData_IsBase(bool value) const { kfileplacesmodel_itemdata_isbase = value; }
    inline void setKFilePlacesModel_SetItemData_IsBase(bool value) const { kfileplacesmodel_setitemdata_isbase = value; }
    inline void setKFilePlacesModel_ClearItemData_IsBase(bool value) const { kfileplacesmodel_clearitemdata_isbase = value; }
    inline void setKFilePlacesModel_CanDropMimeData_IsBase(bool value) const { kfileplacesmodel_candropmimedata_isbase = value; }
    inline void setKFilePlacesModel_SupportedDragActions_IsBase(bool value) const { kfileplacesmodel_supporteddragactions_isbase = value; }
    inline void setKFilePlacesModel_InsertRows_IsBase(bool value) const { kfileplacesmodel_insertrows_isbase = value; }
    inline void setKFilePlacesModel_InsertColumns_IsBase(bool value) const { kfileplacesmodel_insertcolumns_isbase = value; }
    inline void setKFilePlacesModel_RemoveRows_IsBase(bool value) const { kfileplacesmodel_removerows_isbase = value; }
    inline void setKFilePlacesModel_RemoveColumns_IsBase(bool value) const { kfileplacesmodel_removecolumns_isbase = value; }
    inline void setKFilePlacesModel_MoveRows_IsBase(bool value) const { kfileplacesmodel_moverows_isbase = value; }
    inline void setKFilePlacesModel_MoveColumns_IsBase(bool value) const { kfileplacesmodel_movecolumns_isbase = value; }
    inline void setKFilePlacesModel_FetchMore_IsBase(bool value) const { kfileplacesmodel_fetchmore_isbase = value; }
    inline void setKFilePlacesModel_CanFetchMore_IsBase(bool value) const { kfileplacesmodel_canfetchmore_isbase = value; }
    inline void setKFilePlacesModel_Sort_IsBase(bool value) const { kfileplacesmodel_sort_isbase = value; }
    inline void setKFilePlacesModel_Buddy_IsBase(bool value) const { kfileplacesmodel_buddy_isbase = value; }
    inline void setKFilePlacesModel_Match_IsBase(bool value) const { kfileplacesmodel_match_isbase = value; }
    inline void setKFilePlacesModel_Span_IsBase(bool value) const { kfileplacesmodel_span_isbase = value; }
    inline void setKFilePlacesModel_MultiData_IsBase(bool value) const { kfileplacesmodel_multidata_isbase = value; }
    inline void setKFilePlacesModel_Submit_IsBase(bool value) const { kfileplacesmodel_submit_isbase = value; }
    inline void setKFilePlacesModel_Revert_IsBase(bool value) const { kfileplacesmodel_revert_isbase = value; }
    inline void setKFilePlacesModel_ResetInternalData_IsBase(bool value) const { kfileplacesmodel_resetinternaldata_isbase = value; }
    inline void setKFilePlacesModel_Event_IsBase(bool value) const { kfileplacesmodel_event_isbase = value; }
    inline void setKFilePlacesModel_EventFilter_IsBase(bool value) const { kfileplacesmodel_eventfilter_isbase = value; }
    inline void setKFilePlacesModel_TimerEvent_IsBase(bool value) const { kfileplacesmodel_timerevent_isbase = value; }
    inline void setKFilePlacesModel_ChildEvent_IsBase(bool value) const { kfileplacesmodel_childevent_isbase = value; }
    inline void setKFilePlacesModel_CustomEvent_IsBase(bool value) const { kfileplacesmodel_customevent_isbase = value; }
    inline void setKFilePlacesModel_ConnectNotify_IsBase(bool value) const { kfileplacesmodel_connectnotify_isbase = value; }
    inline void setKFilePlacesModel_DisconnectNotify_IsBase(bool value) const { kfileplacesmodel_disconnectnotify_isbase = value; }
    inline void setKFilePlacesModel_CreateIndex_IsBase(bool value) const { kfileplacesmodel_createindex_isbase = value; }
    inline void setKFilePlacesModel_EncodeData_IsBase(bool value) const { kfileplacesmodel_encodedata_isbase = value; }
    inline void setKFilePlacesModel_DecodeData_IsBase(bool value) const { kfileplacesmodel_decodedata_isbase = value; }
    inline void setKFilePlacesModel_BeginInsertRows_IsBase(bool value) const { kfileplacesmodel_begininsertrows_isbase = value; }
    inline void setKFilePlacesModel_EndInsertRows_IsBase(bool value) const { kfileplacesmodel_endinsertrows_isbase = value; }
    inline void setKFilePlacesModel_BeginRemoveRows_IsBase(bool value) const { kfileplacesmodel_beginremoverows_isbase = value; }
    inline void setKFilePlacesModel_EndRemoveRows_IsBase(bool value) const { kfileplacesmodel_endremoverows_isbase = value; }
    inline void setKFilePlacesModel_BeginMoveRows_IsBase(bool value) const { kfileplacesmodel_beginmoverows_isbase = value; }
    inline void setKFilePlacesModel_EndMoveRows_IsBase(bool value) const { kfileplacesmodel_endmoverows_isbase = value; }
    inline void setKFilePlacesModel_BeginInsertColumns_IsBase(bool value) const { kfileplacesmodel_begininsertcolumns_isbase = value; }
    inline void setKFilePlacesModel_EndInsertColumns_IsBase(bool value) const { kfileplacesmodel_endinsertcolumns_isbase = value; }
    inline void setKFilePlacesModel_BeginRemoveColumns_IsBase(bool value) const { kfileplacesmodel_beginremovecolumns_isbase = value; }
    inline void setKFilePlacesModel_EndRemoveColumns_IsBase(bool value) const { kfileplacesmodel_endremovecolumns_isbase = value; }
    inline void setKFilePlacesModel_BeginMoveColumns_IsBase(bool value) const { kfileplacesmodel_beginmovecolumns_isbase = value; }
    inline void setKFilePlacesModel_EndMoveColumns_IsBase(bool value) const { kfileplacesmodel_endmovecolumns_isbase = value; }
    inline void setKFilePlacesModel_BeginResetModel_IsBase(bool value) const { kfileplacesmodel_beginresetmodel_isbase = value; }
    inline void setKFilePlacesModel_EndResetModel_IsBase(bool value) const { kfileplacesmodel_endresetmodel_isbase = value; }
    inline void setKFilePlacesModel_ChangePersistentIndex_IsBase(bool value) const { kfileplacesmodel_changepersistentindex_isbase = value; }
    inline void setKFilePlacesModel_ChangePersistentIndexList_IsBase(bool value) const { kfileplacesmodel_changepersistentindexlist_isbase = value; }
    inline void setKFilePlacesModel_PersistentIndexList_IsBase(bool value) const { kfileplacesmodel_persistentindexlist_isbase = value; }
    inline void setKFilePlacesModel_Sender_IsBase(bool value) const { kfileplacesmodel_sender_isbase = value; }
    inline void setKFilePlacesModel_SenderSignalIndex_IsBase(bool value) const { kfileplacesmodel_sendersignalindex_isbase = value; }
    inline void setKFilePlacesModel_Receivers_IsBase(bool value) const { kfileplacesmodel_receivers_isbase = value; }
    inline void setKFilePlacesModel_IsSignalConnected_IsBase(bool value) const { kfileplacesmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplacesmodel_metacall_isbase) {
            kfileplacesmodel_metacall_isbase = false;
            return KFilePlacesModel::qt_metacall(param1, param2, param3);
        } else if (kfileplacesmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfileplacesmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kfileplacesmodel_data_isbase) {
            kfileplacesmodel_data_isbase = false;
            return KFilePlacesModel::data(index, role);
        } else if (kfileplacesmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kfileplacesmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KFilePlacesModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kfileplacesmodel_index_isbase) {
            kfileplacesmodel_index_isbase = false;
            return KFilePlacesModel::index(row, column, parent);
        } else if (kfileplacesmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kfileplacesmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KFilePlacesModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kfileplacesmodel_parent_isbase) {
            kfileplacesmodel_parent_isbase = false;
            return KFilePlacesModel::parent(child);
        } else if (kfileplacesmodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = kfileplacesmodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kfileplacesmodel_rolenames_isbase) {
            kfileplacesmodel_rolenames_isbase = false;
            return KFilePlacesModel::roleNames();
        } else if (kfileplacesmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kfileplacesmodel_rolenames_callback();
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
            return KFilePlacesModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kfileplacesmodel_rowcount_isbase) {
            kfileplacesmodel_rowcount_isbase = false;
            return KFilePlacesModel::rowCount(parent);
        } else if (kfileplacesmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kfileplacesmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kfileplacesmodel_columncount_isbase) {
            kfileplacesmodel_columncount_isbase = false;
            return KFilePlacesModel::columnCount(parent);
        } else if (kfileplacesmodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kfileplacesmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kfileplacesmodel_supporteddropactions_isbase) {
            kfileplacesmodel_supporteddropactions_isbase = false;
            return KFilePlacesModel::supportedDropActions();
        } else if (kfileplacesmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kfileplacesmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KFilePlacesModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kfileplacesmodel_flags_isbase) {
            kfileplacesmodel_flags_isbase = false;
            return KFilePlacesModel::flags(index);
        } else if (kfileplacesmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kfileplacesmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KFilePlacesModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kfileplacesmodel_mimetypes_isbase) {
            kfileplacesmodel_mimetypes_isbase = false;
            return KFilePlacesModel::mimeTypes();
        } else if (kfileplacesmodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kfileplacesmodel_mimetypes_callback();
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
            return KFilePlacesModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kfileplacesmodel_mimedata_isbase) {
            kfileplacesmodel_mimedata_isbase = false;
            return KFilePlacesModel::mimeData(indexes);
        } else if (kfileplacesmodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kfileplacesmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kfileplacesmodel_dropmimedata_isbase) {
            kfileplacesmodel_dropmimedata_isbase = false;
            return KFilePlacesModel::dropMimeData(data, action, row, column, parent);
        } else if (kfileplacesmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KFilePlacesModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kfileplacesmodel_sibling_isbase) {
            kfileplacesmodel_sibling_isbase = false;
            return KFilePlacesModel::sibling(row, column, idx);
        } else if (kfileplacesmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kfileplacesmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KFilePlacesModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kfileplacesmodel_haschildren_isbase) {
            kfileplacesmodel_haschildren_isbase = false;
            return KFilePlacesModel::hasChildren(parent);
        } else if (kfileplacesmodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kfileplacesmodel_setdata_isbase) {
            kfileplacesmodel_setdata_isbase = false;
            return KFilePlacesModel::setData(index, value, role);
        } else if (kfileplacesmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kfileplacesmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kfileplacesmodel_headerdata_isbase) {
            kfileplacesmodel_headerdata_isbase = false;
            return KFilePlacesModel::headerData(section, orientation, role);
        } else if (kfileplacesmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kfileplacesmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KFilePlacesModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kfileplacesmodel_setheaderdata_isbase) {
            kfileplacesmodel_setheaderdata_isbase = false;
            return KFilePlacesModel::setHeaderData(section, orientation, value, role);
        } else if (kfileplacesmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kfileplacesmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KFilePlacesModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kfileplacesmodel_itemdata_isbase) {
            kfileplacesmodel_itemdata_isbase = false;
            return KFilePlacesModel::itemData(index);
        } else if (kfileplacesmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kfileplacesmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KFilePlacesModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kfileplacesmodel_setitemdata_isbase) {
            kfileplacesmodel_setitemdata_isbase = false;
            return KFilePlacesModel::setItemData(index, roles);
        } else if (kfileplacesmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kfileplacesmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFilePlacesModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kfileplacesmodel_clearitemdata_isbase) {
            kfileplacesmodel_clearitemdata_isbase = false;
            return KFilePlacesModel::clearItemData(index);
        } else if (kfileplacesmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kfileplacesmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kfileplacesmodel_candropmimedata_isbase) {
            kfileplacesmodel_candropmimedata_isbase = false;
            return KFilePlacesModel::canDropMimeData(data, action, row, column, parent);
        } else if (kfileplacesmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KFilePlacesModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kfileplacesmodel_supporteddragactions_isbase) {
            kfileplacesmodel_supporteddragactions_isbase = false;
            return KFilePlacesModel::supportedDragActions();
        } else if (kfileplacesmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kfileplacesmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KFilePlacesModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_insertrows_isbase) {
            kfileplacesmodel_insertrows_isbase = false;
            return KFilePlacesModel::insertRows(row, count, parent);
        } else if (kfileplacesmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_insertcolumns_isbase) {
            kfileplacesmodel_insertcolumns_isbase = false;
            return KFilePlacesModel::insertColumns(column, count, parent);
        } else if (kfileplacesmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_removerows_isbase) {
            kfileplacesmodel_removerows_isbase = false;
            return KFilePlacesModel::removeRows(row, count, parent);
        } else if (kfileplacesmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_removecolumns_isbase) {
            kfileplacesmodel_removecolumns_isbase = false;
            return KFilePlacesModel::removeColumns(column, count, parent);
        } else if (kfileplacesmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlacesModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kfileplacesmodel_moverows_isbase) {
            kfileplacesmodel_moverows_isbase = false;
            return KFilePlacesModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kfileplacesmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kfileplacesmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KFilePlacesModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kfileplacesmodel_movecolumns_isbase) {
            kfileplacesmodel_movecolumns_isbase = false;
            return KFilePlacesModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kfileplacesmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kfileplacesmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KFilePlacesModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kfileplacesmodel_fetchmore_isbase) {
            kfileplacesmodel_fetchmore_isbase = false;
            KFilePlacesModel::fetchMore(parent);
        } else if (kfileplacesmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kfileplacesmodel_fetchmore_callback(this, cbval1);
        } else {
            KFilePlacesModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kfileplacesmodel_canfetchmore_isbase) {
            kfileplacesmodel_canfetchmore_isbase = false;
            return KFilePlacesModel::canFetchMore(parent);
        } else if (kfileplacesmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kfileplacesmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kfileplacesmodel_sort_isbase) {
            kfileplacesmodel_sort_isbase = false;
            KFilePlacesModel::sort(column, order);
        } else if (kfileplacesmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kfileplacesmodel_sort_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kfileplacesmodel_buddy_isbase) {
            kfileplacesmodel_buddy_isbase = false;
            return KFilePlacesModel::buddy(index);
        } else if (kfileplacesmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kfileplacesmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kfileplacesmodel_match_isbase) {
            kfileplacesmodel_match_isbase = false;
            return KFilePlacesModel::match(start, role, value, hits, flags);
        } else if (kfileplacesmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kfileplacesmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KFilePlacesModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kfileplacesmodel_span_isbase) {
            kfileplacesmodel_span_isbase = false;
            return KFilePlacesModel::span(index);
        } else if (kfileplacesmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kfileplacesmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlacesModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kfileplacesmodel_multidata_isbase) {
            kfileplacesmodel_multidata_isbase = false;
            KFilePlacesModel::multiData(index, roleDataSpan);
        } else if (kfileplacesmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kfileplacesmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kfileplacesmodel_submit_isbase) {
            kfileplacesmodel_submit_isbase = false;
            return KFilePlacesModel::submit();
        } else if (kfileplacesmodel_submit_callback != nullptr) {
            bool callback_ret = kfileplacesmodel_submit_callback();
            return callback_ret;
        } else {
            return KFilePlacesModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kfileplacesmodel_revert_isbase) {
            kfileplacesmodel_revert_isbase = false;
            KFilePlacesModel::revert();
        } else if (kfileplacesmodel_revert_callback != nullptr) {
            kfileplacesmodel_revert_callback();
        } else {
            KFilePlacesModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kfileplacesmodel_resetinternaldata_isbase) {
            kfileplacesmodel_resetinternaldata_isbase = false;
            KFilePlacesModel::resetInternalData();
        } else if (kfileplacesmodel_resetinternaldata_callback != nullptr) {
            kfileplacesmodel_resetinternaldata_callback();
        } else {
            KFilePlacesModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileplacesmodel_event_isbase) {
            kfileplacesmodel_event_isbase = false;
            return KFilePlacesModel::event(event);
        } else if (kfileplacesmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfileplacesmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfileplacesmodel_eventfilter_isbase) {
            kfileplacesmodel_eventfilter_isbase = false;
            return KFilePlacesModel::eventFilter(watched, event);
        } else if (kfileplacesmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfileplacesmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFilePlacesModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileplacesmodel_timerevent_isbase) {
            kfileplacesmodel_timerevent_isbase = false;
            KFilePlacesModel::timerEvent(event);
        } else if (kfileplacesmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfileplacesmodel_timerevent_callback(this, cbval1);
        } else {
            KFilePlacesModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplacesmodel_childevent_isbase) {
            kfileplacesmodel_childevent_isbase = false;
            KFilePlacesModel::childEvent(event);
        } else if (kfileplacesmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfileplacesmodel_childevent_callback(this, cbval1);
        } else {
            KFilePlacesModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplacesmodel_customevent_isbase) {
            kfileplacesmodel_customevent_isbase = false;
            KFilePlacesModel::customEvent(event);
        } else if (kfileplacesmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileplacesmodel_customevent_callback(this, cbval1);
        } else {
            KFilePlacesModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplacesmodel_connectnotify_isbase) {
            kfileplacesmodel_connectnotify_isbase = false;
            KFilePlacesModel::connectNotify(signal);
        } else if (kfileplacesmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileplacesmodel_connectnotify_callback(this, cbval1);
        } else {
            KFilePlacesModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplacesmodel_disconnectnotify_isbase) {
            kfileplacesmodel_disconnectnotify_isbase = false;
            KFilePlacesModel::disconnectNotify(signal);
        } else if (kfileplacesmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileplacesmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KFilePlacesModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kfileplacesmodel_createindex_isbase) {
            kfileplacesmodel_createindex_isbase = false;
            return KFilePlacesModel::createIndex(row, column);
        } else if (kfileplacesmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kfileplacesmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KFilePlacesModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kfileplacesmodel_encodedata_isbase) {
            kfileplacesmodel_encodedata_isbase = false;
            KFilePlacesModel::encodeData(indexes, stream);
        } else if (kfileplacesmodel_encodedata_callback != nullptr) {
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

            kfileplacesmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kfileplacesmodel_decodedata_isbase) {
            kfileplacesmodel_decodedata_isbase = false;
            return KFilePlacesModel::decodeData(row, column, parent, stream);
        } else if (kfileplacesmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kfileplacesmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KFilePlacesModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kfileplacesmodel_begininsertrows_isbase) {
            kfileplacesmodel_begininsertrows_isbase = false;
            KFilePlacesModel::beginInsertRows(parent, first, last);
        } else if (kfileplacesmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kfileplacesmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kfileplacesmodel_endinsertrows_isbase) {
            kfileplacesmodel_endinsertrows_isbase = false;
            KFilePlacesModel::endInsertRows();
        } else if (kfileplacesmodel_endinsertrows_callback != nullptr) {
            kfileplacesmodel_endinsertrows_callback();
        } else {
            KFilePlacesModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kfileplacesmodel_beginremoverows_isbase) {
            kfileplacesmodel_beginremoverows_isbase = false;
            KFilePlacesModel::beginRemoveRows(parent, first, last);
        } else if (kfileplacesmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kfileplacesmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kfileplacesmodel_endremoverows_isbase) {
            kfileplacesmodel_endremoverows_isbase = false;
            KFilePlacesModel::endRemoveRows();
        } else if (kfileplacesmodel_endremoverows_callback != nullptr) {
            kfileplacesmodel_endremoverows_callback();
        } else {
            KFilePlacesModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kfileplacesmodel_beginmoverows_isbase) {
            kfileplacesmodel_beginmoverows_isbase = false;
            return KFilePlacesModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kfileplacesmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kfileplacesmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KFilePlacesModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kfileplacesmodel_endmoverows_isbase) {
            kfileplacesmodel_endmoverows_isbase = false;
            KFilePlacesModel::endMoveRows();
        } else if (kfileplacesmodel_endmoverows_callback != nullptr) {
            kfileplacesmodel_endmoverows_callback();
        } else {
            KFilePlacesModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kfileplacesmodel_begininsertcolumns_isbase) {
            kfileplacesmodel_begininsertcolumns_isbase = false;
            KFilePlacesModel::beginInsertColumns(parent, first, last);
        } else if (kfileplacesmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kfileplacesmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kfileplacesmodel_endinsertcolumns_isbase) {
            kfileplacesmodel_endinsertcolumns_isbase = false;
            KFilePlacesModel::endInsertColumns();
        } else if (kfileplacesmodel_endinsertcolumns_callback != nullptr) {
            kfileplacesmodel_endinsertcolumns_callback();
        } else {
            KFilePlacesModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kfileplacesmodel_beginremovecolumns_isbase) {
            kfileplacesmodel_beginremovecolumns_isbase = false;
            KFilePlacesModel::beginRemoveColumns(parent, first, last);
        } else if (kfileplacesmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kfileplacesmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFilePlacesModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kfileplacesmodel_endremovecolumns_isbase) {
            kfileplacesmodel_endremovecolumns_isbase = false;
            KFilePlacesModel::endRemoveColumns();
        } else if (kfileplacesmodel_endremovecolumns_callback != nullptr) {
            kfileplacesmodel_endremovecolumns_callback();
        } else {
            KFilePlacesModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kfileplacesmodel_beginmovecolumns_isbase) {
            kfileplacesmodel_beginmovecolumns_isbase = false;
            return KFilePlacesModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kfileplacesmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kfileplacesmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KFilePlacesModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kfileplacesmodel_endmovecolumns_isbase) {
            kfileplacesmodel_endmovecolumns_isbase = false;
            KFilePlacesModel::endMoveColumns();
        } else if (kfileplacesmodel_endmovecolumns_callback != nullptr) {
            kfileplacesmodel_endmovecolumns_callback();
        } else {
            KFilePlacesModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kfileplacesmodel_beginresetmodel_isbase) {
            kfileplacesmodel_beginresetmodel_isbase = false;
            KFilePlacesModel::beginResetModel();
        } else if (kfileplacesmodel_beginresetmodel_callback != nullptr) {
            kfileplacesmodel_beginresetmodel_callback();
        } else {
            KFilePlacesModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kfileplacesmodel_endresetmodel_isbase) {
            kfileplacesmodel_endresetmodel_isbase = false;
            KFilePlacesModel::endResetModel();
        } else if (kfileplacesmodel_endresetmodel_callback != nullptr) {
            kfileplacesmodel_endresetmodel_callback();
        } else {
            KFilePlacesModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kfileplacesmodel_changepersistentindex_isbase) {
            kfileplacesmodel_changepersistentindex_isbase = false;
            KFilePlacesModel::changePersistentIndex(from, to);
        } else if (kfileplacesmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kfileplacesmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kfileplacesmodel_changepersistentindexlist_isbase) {
            kfileplacesmodel_changepersistentindexlist_isbase = false;
            KFilePlacesModel::changePersistentIndexList(from, to);
        } else if (kfileplacesmodel_changepersistentindexlist_callback != nullptr) {
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

            kfileplacesmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KFilePlacesModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kfileplacesmodel_persistentindexlist_isbase) {
            kfileplacesmodel_persistentindexlist_isbase = false;
            return KFilePlacesModel::persistentIndexList();
        } else if (kfileplacesmodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kfileplacesmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KFilePlacesModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileplacesmodel_sender_isbase) {
            kfileplacesmodel_sender_isbase = false;
            return KFilePlacesModel::sender();
        } else if (kfileplacesmodel_sender_callback != nullptr) {
            QObject* callback_ret = kfileplacesmodel_sender_callback();
            return callback_ret;
        } else {
            return KFilePlacesModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileplacesmodel_sendersignalindex_isbase) {
            kfileplacesmodel_sendersignalindex_isbase = false;
            return KFilePlacesModel::senderSignalIndex();
        } else if (kfileplacesmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kfileplacesmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileplacesmodel_receivers_isbase) {
            kfileplacesmodel_receivers_isbase = false;
            return KFilePlacesModel::receivers(signal);
        } else if (kfileplacesmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfileplacesmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlacesModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileplacesmodel_issignalconnected_isbase) {
            kfileplacesmodel_issignalconnected_isbase = false;
            return KFilePlacesModel::isSignalConnected(signal);
        } else if (kfileplacesmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfileplacesmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlacesModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFilePlacesModel_ResetInternalData(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseResetInternalData(KFilePlacesModel* self);
    friend void KFilePlacesModel_TimerEvent(KFilePlacesModel* self, QTimerEvent* event);
    friend void KFilePlacesModel_QBaseTimerEvent(KFilePlacesModel* self, QTimerEvent* event);
    friend void KFilePlacesModel_ChildEvent(KFilePlacesModel* self, QChildEvent* event);
    friend void KFilePlacesModel_QBaseChildEvent(KFilePlacesModel* self, QChildEvent* event);
    friend void KFilePlacesModel_CustomEvent(KFilePlacesModel* self, QEvent* event);
    friend void KFilePlacesModel_QBaseCustomEvent(KFilePlacesModel* self, QEvent* event);
    friend void KFilePlacesModel_ConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal);
    friend void KFilePlacesModel_QBaseConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal);
    friend void KFilePlacesModel_DisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal);
    friend void KFilePlacesModel_QBaseDisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal);
    friend QModelIndex* KFilePlacesModel_CreateIndex(const KFilePlacesModel* self, int row, int column);
    friend QModelIndex* KFilePlacesModel_QBaseCreateIndex(const KFilePlacesModel* self, int row, int column);
    friend void KFilePlacesModel_EncodeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KFilePlacesModel_QBaseEncodeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KFilePlacesModel_DecodeData(KFilePlacesModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KFilePlacesModel_QBaseDecodeData(KFilePlacesModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KFilePlacesModel_BeginInsertRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_QBaseBeginInsertRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_EndInsertRows(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndInsertRows(KFilePlacesModel* self);
    friend void KFilePlacesModel_BeginRemoveRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_QBaseBeginRemoveRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_EndRemoveRows(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndRemoveRows(KFilePlacesModel* self);
    friend bool KFilePlacesModel_BeginMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KFilePlacesModel_QBaseBeginMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KFilePlacesModel_EndMoveRows(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndMoveRows(KFilePlacesModel* self);
    friend void KFilePlacesModel_BeginInsertColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_QBaseBeginInsertColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_EndInsertColumns(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndInsertColumns(KFilePlacesModel* self);
    friend void KFilePlacesModel_BeginRemoveColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_QBaseBeginRemoveColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last);
    friend void KFilePlacesModel_EndRemoveColumns(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndRemoveColumns(KFilePlacesModel* self);
    friend bool KFilePlacesModel_BeginMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KFilePlacesModel_QBaseBeginMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KFilePlacesModel_EndMoveColumns(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndMoveColumns(KFilePlacesModel* self);
    friend void KFilePlacesModel_BeginResetModel(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseBeginResetModel(KFilePlacesModel* self);
    friend void KFilePlacesModel_EndResetModel(KFilePlacesModel* self);
    friend void KFilePlacesModel_QBaseEndResetModel(KFilePlacesModel* self);
    friend void KFilePlacesModel_ChangePersistentIndex(KFilePlacesModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KFilePlacesModel_QBaseChangePersistentIndex(KFilePlacesModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KFilePlacesModel_ChangePersistentIndexList(KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KFilePlacesModel_QBaseChangePersistentIndexList(KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KFilePlacesModel_PersistentIndexList(const KFilePlacesModel* self);
    friend libqt_list /* of QModelIndex* */ KFilePlacesModel_QBasePersistentIndexList(const KFilePlacesModel* self);
    friend QObject* KFilePlacesModel_Sender(const KFilePlacesModel* self);
    friend QObject* KFilePlacesModel_QBaseSender(const KFilePlacesModel* self);
    friend int KFilePlacesModel_SenderSignalIndex(const KFilePlacesModel* self);
    friend int KFilePlacesModel_QBaseSenderSignalIndex(const KFilePlacesModel* self);
    friend int KFilePlacesModel_Receivers(const KFilePlacesModel* self, const char* signal);
    friend int KFilePlacesModel_QBaseReceivers(const KFilePlacesModel* self, const char* signal);
    friend bool KFilePlacesModel_IsSignalConnected(const KFilePlacesModel* self, const QMetaMethod* signal);
    friend bool KFilePlacesModel_QBaseIsSignalConnected(const KFilePlacesModel* self, const QMetaMethod* signal);
};

#endif
