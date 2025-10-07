#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKCOLUMNHEADERSMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKCOLUMNHEADERSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColumnHeadersModel so that we can call protected methods
class VirtualKColumnHeadersModel final : public KColumnHeadersModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKColumnHeadersModel = true;

    // Virtual class public types (including callbacks)
    using KColumnHeadersModel_Metacall_Callback = int (*)(KColumnHeadersModel*, int, int, void**);
    using KColumnHeadersModel_RowCount_Callback = int (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_Data_Callback = QVariant* (*)(const KColumnHeadersModel*, QModelIndex*, int);
    using KColumnHeadersModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KColumnHeadersModel_Index_Callback = QModelIndex* (*)(const KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_Sibling_Callback = QModelIndex* (*)(const KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_DropMimeData_Callback = bool (*)(KColumnHeadersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColumnHeadersModel_Flags_Callback = int (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_SetData_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, QVariant*, int);
    using KColumnHeadersModel_HeaderData_Callback = QVariant* (*)(const KColumnHeadersModel*, int, int, int);
    using KColumnHeadersModel_SetHeaderData_Callback = bool (*)(KColumnHeadersModel*, int, int, QVariant*, int);
    using KColumnHeadersModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_SetItemData_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KColumnHeadersModel_ClearItemData_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_MimeTypes_Callback = const char** (*)();
    using KColumnHeadersModel_MimeData_Callback = QMimeData* (*)(const KColumnHeadersModel*, libqt_list /* of QModelIndex* */);
    using KColumnHeadersModel_CanDropMimeData_Callback = bool (*)(const KColumnHeadersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColumnHeadersModel_SupportedDropActions_Callback = int (*)();
    using KColumnHeadersModel_SupportedDragActions_Callback = int (*)();
    using KColumnHeadersModel_InsertRows_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_InsertColumns_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_RemoveRows_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_RemoveColumns_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_MoveRows_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColumnHeadersModel_MoveColumns_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColumnHeadersModel_FetchMore_Callback = void (*)(KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_CanFetchMore_Callback = bool (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_Sort_Callback = void (*)(KColumnHeadersModel*, int, int);
    using KColumnHeadersModel_Buddy_Callback = QModelIndex* (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_Match_Callback = QModelIndex** (*)(const KColumnHeadersModel*, QModelIndex*, int, QVariant*, int, int);
    using KColumnHeadersModel_Span_Callback = QSize* (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_MultiData_Callback = void (*)(const KColumnHeadersModel*, QModelIndex*, QModelRoleDataSpan*);
    using KColumnHeadersModel_Submit_Callback = bool (*)();
    using KColumnHeadersModel_Revert_Callback = void (*)();
    using KColumnHeadersModel_ResetInternalData_Callback = void (*)();
    using KColumnHeadersModel_Event_Callback = bool (*)(KColumnHeadersModel*, QEvent*);
    using KColumnHeadersModel_EventFilter_Callback = bool (*)(KColumnHeadersModel*, QObject*, QEvent*);
    using KColumnHeadersModel_TimerEvent_Callback = void (*)(KColumnHeadersModel*, QTimerEvent*);
    using KColumnHeadersModel_ChildEvent_Callback = void (*)(KColumnHeadersModel*, QChildEvent*);
    using KColumnHeadersModel_CustomEvent_Callback = void (*)(KColumnHeadersModel*, QEvent*);
    using KColumnHeadersModel_ConnectNotify_Callback = void (*)(KColumnHeadersModel*, QMetaMethod*);
    using KColumnHeadersModel_DisconnectNotify_Callback = void (*)(KColumnHeadersModel*, QMetaMethod*);
    using KColumnHeadersModel_CreateIndex_Callback = QModelIndex* (*)(const KColumnHeadersModel*, int, int);
    using KColumnHeadersModel_EncodeData_Callback = void (*)(const KColumnHeadersModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KColumnHeadersModel_DecodeData_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*, QDataStream*);
    using KColumnHeadersModel_BeginInsertRows_Callback = void (*)(KColumnHeadersModel*, QModelIndex*, int, int);
    using KColumnHeadersModel_EndInsertRows_Callback = void (*)();
    using KColumnHeadersModel_BeginRemoveRows_Callback = void (*)(KColumnHeadersModel*, QModelIndex*, int, int);
    using KColumnHeadersModel_EndRemoveRows_Callback = void (*)();
    using KColumnHeadersModel_BeginMoveRows_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColumnHeadersModel_EndMoveRows_Callback = void (*)();
    using KColumnHeadersModel_BeginInsertColumns_Callback = void (*)(KColumnHeadersModel*, QModelIndex*, int, int);
    using KColumnHeadersModel_EndInsertColumns_Callback = void (*)();
    using KColumnHeadersModel_BeginRemoveColumns_Callback = void (*)(KColumnHeadersModel*, QModelIndex*, int, int);
    using KColumnHeadersModel_EndRemoveColumns_Callback = void (*)();
    using KColumnHeadersModel_BeginMoveColumns_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColumnHeadersModel_EndMoveColumns_Callback = void (*)();
    using KColumnHeadersModel_BeginResetModel_Callback = void (*)();
    using KColumnHeadersModel_EndResetModel_Callback = void (*)();
    using KColumnHeadersModel_ChangePersistentIndex_Callback = void (*)(KColumnHeadersModel*, QModelIndex*, QModelIndex*);
    using KColumnHeadersModel_ChangePersistentIndexList_Callback = void (*)(KColumnHeadersModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KColumnHeadersModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KColumnHeadersModel_Sender_Callback = QObject* (*)();
    using KColumnHeadersModel_SenderSignalIndex_Callback = int (*)();
    using KColumnHeadersModel_Receivers_Callback = int (*)(const KColumnHeadersModel*, const char*);
    using KColumnHeadersModel_IsSignalConnected_Callback = bool (*)(const KColumnHeadersModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KColumnHeadersModel_Metacall_Callback kcolumnheadersmodel_metacall_callback = nullptr;
    KColumnHeadersModel_RowCount_Callback kcolumnheadersmodel_rowcount_callback = nullptr;
    KColumnHeadersModel_Data_Callback kcolumnheadersmodel_data_callback = nullptr;
    KColumnHeadersModel_RoleNames_Callback kcolumnheadersmodel_rolenames_callback = nullptr;
    KColumnHeadersModel_Index_Callback kcolumnheadersmodel_index_callback = nullptr;
    KColumnHeadersModel_Sibling_Callback kcolumnheadersmodel_sibling_callback = nullptr;
    KColumnHeadersModel_DropMimeData_Callback kcolumnheadersmodel_dropmimedata_callback = nullptr;
    KColumnHeadersModel_Flags_Callback kcolumnheadersmodel_flags_callback = nullptr;
    KColumnHeadersModel_SetData_Callback kcolumnheadersmodel_setdata_callback = nullptr;
    KColumnHeadersModel_HeaderData_Callback kcolumnheadersmodel_headerdata_callback = nullptr;
    KColumnHeadersModel_SetHeaderData_Callback kcolumnheadersmodel_setheaderdata_callback = nullptr;
    KColumnHeadersModel_ItemData_Callback kcolumnheadersmodel_itemdata_callback = nullptr;
    KColumnHeadersModel_SetItemData_Callback kcolumnheadersmodel_setitemdata_callback = nullptr;
    KColumnHeadersModel_ClearItemData_Callback kcolumnheadersmodel_clearitemdata_callback = nullptr;
    KColumnHeadersModel_MimeTypes_Callback kcolumnheadersmodel_mimetypes_callback = nullptr;
    KColumnHeadersModel_MimeData_Callback kcolumnheadersmodel_mimedata_callback = nullptr;
    KColumnHeadersModel_CanDropMimeData_Callback kcolumnheadersmodel_candropmimedata_callback = nullptr;
    KColumnHeadersModel_SupportedDropActions_Callback kcolumnheadersmodel_supporteddropactions_callback = nullptr;
    KColumnHeadersModel_SupportedDragActions_Callback kcolumnheadersmodel_supporteddragactions_callback = nullptr;
    KColumnHeadersModel_InsertRows_Callback kcolumnheadersmodel_insertrows_callback = nullptr;
    KColumnHeadersModel_InsertColumns_Callback kcolumnheadersmodel_insertcolumns_callback = nullptr;
    KColumnHeadersModel_RemoveRows_Callback kcolumnheadersmodel_removerows_callback = nullptr;
    KColumnHeadersModel_RemoveColumns_Callback kcolumnheadersmodel_removecolumns_callback = nullptr;
    KColumnHeadersModel_MoveRows_Callback kcolumnheadersmodel_moverows_callback = nullptr;
    KColumnHeadersModel_MoveColumns_Callback kcolumnheadersmodel_movecolumns_callback = nullptr;
    KColumnHeadersModel_FetchMore_Callback kcolumnheadersmodel_fetchmore_callback = nullptr;
    KColumnHeadersModel_CanFetchMore_Callback kcolumnheadersmodel_canfetchmore_callback = nullptr;
    KColumnHeadersModel_Sort_Callback kcolumnheadersmodel_sort_callback = nullptr;
    KColumnHeadersModel_Buddy_Callback kcolumnheadersmodel_buddy_callback = nullptr;
    KColumnHeadersModel_Match_Callback kcolumnheadersmodel_match_callback = nullptr;
    KColumnHeadersModel_Span_Callback kcolumnheadersmodel_span_callback = nullptr;
    KColumnHeadersModel_MultiData_Callback kcolumnheadersmodel_multidata_callback = nullptr;
    KColumnHeadersModel_Submit_Callback kcolumnheadersmodel_submit_callback = nullptr;
    KColumnHeadersModel_Revert_Callback kcolumnheadersmodel_revert_callback = nullptr;
    KColumnHeadersModel_ResetInternalData_Callback kcolumnheadersmodel_resetinternaldata_callback = nullptr;
    KColumnHeadersModel_Event_Callback kcolumnheadersmodel_event_callback = nullptr;
    KColumnHeadersModel_EventFilter_Callback kcolumnheadersmodel_eventfilter_callback = nullptr;
    KColumnHeadersModel_TimerEvent_Callback kcolumnheadersmodel_timerevent_callback = nullptr;
    KColumnHeadersModel_ChildEvent_Callback kcolumnheadersmodel_childevent_callback = nullptr;
    KColumnHeadersModel_CustomEvent_Callback kcolumnheadersmodel_customevent_callback = nullptr;
    KColumnHeadersModel_ConnectNotify_Callback kcolumnheadersmodel_connectnotify_callback = nullptr;
    KColumnHeadersModel_DisconnectNotify_Callback kcolumnheadersmodel_disconnectnotify_callback = nullptr;
    KColumnHeadersModel_CreateIndex_Callback kcolumnheadersmodel_createindex_callback = nullptr;
    KColumnHeadersModel_EncodeData_Callback kcolumnheadersmodel_encodedata_callback = nullptr;
    KColumnHeadersModel_DecodeData_Callback kcolumnheadersmodel_decodedata_callback = nullptr;
    KColumnHeadersModel_BeginInsertRows_Callback kcolumnheadersmodel_begininsertrows_callback = nullptr;
    KColumnHeadersModel_EndInsertRows_Callback kcolumnheadersmodel_endinsertrows_callback = nullptr;
    KColumnHeadersModel_BeginRemoveRows_Callback kcolumnheadersmodel_beginremoverows_callback = nullptr;
    KColumnHeadersModel_EndRemoveRows_Callback kcolumnheadersmodel_endremoverows_callback = nullptr;
    KColumnHeadersModel_BeginMoveRows_Callback kcolumnheadersmodel_beginmoverows_callback = nullptr;
    KColumnHeadersModel_EndMoveRows_Callback kcolumnheadersmodel_endmoverows_callback = nullptr;
    KColumnHeadersModel_BeginInsertColumns_Callback kcolumnheadersmodel_begininsertcolumns_callback = nullptr;
    KColumnHeadersModel_EndInsertColumns_Callback kcolumnheadersmodel_endinsertcolumns_callback = nullptr;
    KColumnHeadersModel_BeginRemoveColumns_Callback kcolumnheadersmodel_beginremovecolumns_callback = nullptr;
    KColumnHeadersModel_EndRemoveColumns_Callback kcolumnheadersmodel_endremovecolumns_callback = nullptr;
    KColumnHeadersModel_BeginMoveColumns_Callback kcolumnheadersmodel_beginmovecolumns_callback = nullptr;
    KColumnHeadersModel_EndMoveColumns_Callback kcolumnheadersmodel_endmovecolumns_callback = nullptr;
    KColumnHeadersModel_BeginResetModel_Callback kcolumnheadersmodel_beginresetmodel_callback = nullptr;
    KColumnHeadersModel_EndResetModel_Callback kcolumnheadersmodel_endresetmodel_callback = nullptr;
    KColumnHeadersModel_ChangePersistentIndex_Callback kcolumnheadersmodel_changepersistentindex_callback = nullptr;
    KColumnHeadersModel_ChangePersistentIndexList_Callback kcolumnheadersmodel_changepersistentindexlist_callback = nullptr;
    KColumnHeadersModel_PersistentIndexList_Callback kcolumnheadersmodel_persistentindexlist_callback = nullptr;
    KColumnHeadersModel_Sender_Callback kcolumnheadersmodel_sender_callback = nullptr;
    KColumnHeadersModel_SenderSignalIndex_Callback kcolumnheadersmodel_sendersignalindex_callback = nullptr;
    KColumnHeadersModel_Receivers_Callback kcolumnheadersmodel_receivers_callback = nullptr;
    KColumnHeadersModel_IsSignalConnected_Callback kcolumnheadersmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcolumnheadersmodel_metacall_isbase = false;
    mutable bool kcolumnheadersmodel_rowcount_isbase = false;
    mutable bool kcolumnheadersmodel_data_isbase = false;
    mutable bool kcolumnheadersmodel_rolenames_isbase = false;
    mutable bool kcolumnheadersmodel_index_isbase = false;
    mutable bool kcolumnheadersmodel_sibling_isbase = false;
    mutable bool kcolumnheadersmodel_dropmimedata_isbase = false;
    mutable bool kcolumnheadersmodel_flags_isbase = false;
    mutable bool kcolumnheadersmodel_setdata_isbase = false;
    mutable bool kcolumnheadersmodel_headerdata_isbase = false;
    mutable bool kcolumnheadersmodel_setheaderdata_isbase = false;
    mutable bool kcolumnheadersmodel_itemdata_isbase = false;
    mutable bool kcolumnheadersmodel_setitemdata_isbase = false;
    mutable bool kcolumnheadersmodel_clearitemdata_isbase = false;
    mutable bool kcolumnheadersmodel_mimetypes_isbase = false;
    mutable bool kcolumnheadersmodel_mimedata_isbase = false;
    mutable bool kcolumnheadersmodel_candropmimedata_isbase = false;
    mutable bool kcolumnheadersmodel_supporteddropactions_isbase = false;
    mutable bool kcolumnheadersmodel_supporteddragactions_isbase = false;
    mutable bool kcolumnheadersmodel_insertrows_isbase = false;
    mutable bool kcolumnheadersmodel_insertcolumns_isbase = false;
    mutable bool kcolumnheadersmodel_removerows_isbase = false;
    mutable bool kcolumnheadersmodel_removecolumns_isbase = false;
    mutable bool kcolumnheadersmodel_moverows_isbase = false;
    mutable bool kcolumnheadersmodel_movecolumns_isbase = false;
    mutable bool kcolumnheadersmodel_fetchmore_isbase = false;
    mutable bool kcolumnheadersmodel_canfetchmore_isbase = false;
    mutable bool kcolumnheadersmodel_sort_isbase = false;
    mutable bool kcolumnheadersmodel_buddy_isbase = false;
    mutable bool kcolumnheadersmodel_match_isbase = false;
    mutable bool kcolumnheadersmodel_span_isbase = false;
    mutable bool kcolumnheadersmodel_multidata_isbase = false;
    mutable bool kcolumnheadersmodel_submit_isbase = false;
    mutable bool kcolumnheadersmodel_revert_isbase = false;
    mutable bool kcolumnheadersmodel_resetinternaldata_isbase = false;
    mutable bool kcolumnheadersmodel_event_isbase = false;
    mutable bool kcolumnheadersmodel_eventfilter_isbase = false;
    mutable bool kcolumnheadersmodel_timerevent_isbase = false;
    mutable bool kcolumnheadersmodel_childevent_isbase = false;
    mutable bool kcolumnheadersmodel_customevent_isbase = false;
    mutable bool kcolumnheadersmodel_connectnotify_isbase = false;
    mutable bool kcolumnheadersmodel_disconnectnotify_isbase = false;
    mutable bool kcolumnheadersmodel_createindex_isbase = false;
    mutable bool kcolumnheadersmodel_encodedata_isbase = false;
    mutable bool kcolumnheadersmodel_decodedata_isbase = false;
    mutable bool kcolumnheadersmodel_begininsertrows_isbase = false;
    mutable bool kcolumnheadersmodel_endinsertrows_isbase = false;
    mutable bool kcolumnheadersmodel_beginremoverows_isbase = false;
    mutable bool kcolumnheadersmodel_endremoverows_isbase = false;
    mutable bool kcolumnheadersmodel_beginmoverows_isbase = false;
    mutable bool kcolumnheadersmodel_endmoverows_isbase = false;
    mutable bool kcolumnheadersmodel_begininsertcolumns_isbase = false;
    mutable bool kcolumnheadersmodel_endinsertcolumns_isbase = false;
    mutable bool kcolumnheadersmodel_beginremovecolumns_isbase = false;
    mutable bool kcolumnheadersmodel_endremovecolumns_isbase = false;
    mutable bool kcolumnheadersmodel_beginmovecolumns_isbase = false;
    mutable bool kcolumnheadersmodel_endmovecolumns_isbase = false;
    mutable bool kcolumnheadersmodel_beginresetmodel_isbase = false;
    mutable bool kcolumnheadersmodel_endresetmodel_isbase = false;
    mutable bool kcolumnheadersmodel_changepersistentindex_isbase = false;
    mutable bool kcolumnheadersmodel_changepersistentindexlist_isbase = false;
    mutable bool kcolumnheadersmodel_persistentindexlist_isbase = false;
    mutable bool kcolumnheadersmodel_sender_isbase = false;
    mutable bool kcolumnheadersmodel_sendersignalindex_isbase = false;
    mutable bool kcolumnheadersmodel_receivers_isbase = false;
    mutable bool kcolumnheadersmodel_issignalconnected_isbase = false;

  public:
    VirtualKColumnHeadersModel() : KColumnHeadersModel() {};
    VirtualKColumnHeadersModel(QObject* parent) : KColumnHeadersModel(parent) {};

    ~VirtualKColumnHeadersModel() {
        kcolumnheadersmodel_metacall_callback = nullptr;
        kcolumnheadersmodel_rowcount_callback = nullptr;
        kcolumnheadersmodel_data_callback = nullptr;
        kcolumnheadersmodel_rolenames_callback = nullptr;
        kcolumnheadersmodel_index_callback = nullptr;
        kcolumnheadersmodel_sibling_callback = nullptr;
        kcolumnheadersmodel_dropmimedata_callback = nullptr;
        kcolumnheadersmodel_flags_callback = nullptr;
        kcolumnheadersmodel_setdata_callback = nullptr;
        kcolumnheadersmodel_headerdata_callback = nullptr;
        kcolumnheadersmodel_setheaderdata_callback = nullptr;
        kcolumnheadersmodel_itemdata_callback = nullptr;
        kcolumnheadersmodel_setitemdata_callback = nullptr;
        kcolumnheadersmodel_clearitemdata_callback = nullptr;
        kcolumnheadersmodel_mimetypes_callback = nullptr;
        kcolumnheadersmodel_mimedata_callback = nullptr;
        kcolumnheadersmodel_candropmimedata_callback = nullptr;
        kcolumnheadersmodel_supporteddropactions_callback = nullptr;
        kcolumnheadersmodel_supporteddragactions_callback = nullptr;
        kcolumnheadersmodel_insertrows_callback = nullptr;
        kcolumnheadersmodel_insertcolumns_callback = nullptr;
        kcolumnheadersmodel_removerows_callback = nullptr;
        kcolumnheadersmodel_removecolumns_callback = nullptr;
        kcolumnheadersmodel_moverows_callback = nullptr;
        kcolumnheadersmodel_movecolumns_callback = nullptr;
        kcolumnheadersmodel_fetchmore_callback = nullptr;
        kcolumnheadersmodel_canfetchmore_callback = nullptr;
        kcolumnheadersmodel_sort_callback = nullptr;
        kcolumnheadersmodel_buddy_callback = nullptr;
        kcolumnheadersmodel_match_callback = nullptr;
        kcolumnheadersmodel_span_callback = nullptr;
        kcolumnheadersmodel_multidata_callback = nullptr;
        kcolumnheadersmodel_submit_callback = nullptr;
        kcolumnheadersmodel_revert_callback = nullptr;
        kcolumnheadersmodel_resetinternaldata_callback = nullptr;
        kcolumnheadersmodel_event_callback = nullptr;
        kcolumnheadersmodel_eventfilter_callback = nullptr;
        kcolumnheadersmodel_timerevent_callback = nullptr;
        kcolumnheadersmodel_childevent_callback = nullptr;
        kcolumnheadersmodel_customevent_callback = nullptr;
        kcolumnheadersmodel_connectnotify_callback = nullptr;
        kcolumnheadersmodel_disconnectnotify_callback = nullptr;
        kcolumnheadersmodel_createindex_callback = nullptr;
        kcolumnheadersmodel_encodedata_callback = nullptr;
        kcolumnheadersmodel_decodedata_callback = nullptr;
        kcolumnheadersmodel_begininsertrows_callback = nullptr;
        kcolumnheadersmodel_endinsertrows_callback = nullptr;
        kcolumnheadersmodel_beginremoverows_callback = nullptr;
        kcolumnheadersmodel_endremoverows_callback = nullptr;
        kcolumnheadersmodel_beginmoverows_callback = nullptr;
        kcolumnheadersmodel_endmoverows_callback = nullptr;
        kcolumnheadersmodel_begininsertcolumns_callback = nullptr;
        kcolumnheadersmodel_endinsertcolumns_callback = nullptr;
        kcolumnheadersmodel_beginremovecolumns_callback = nullptr;
        kcolumnheadersmodel_endremovecolumns_callback = nullptr;
        kcolumnheadersmodel_beginmovecolumns_callback = nullptr;
        kcolumnheadersmodel_endmovecolumns_callback = nullptr;
        kcolumnheadersmodel_beginresetmodel_callback = nullptr;
        kcolumnheadersmodel_endresetmodel_callback = nullptr;
        kcolumnheadersmodel_changepersistentindex_callback = nullptr;
        kcolumnheadersmodel_changepersistentindexlist_callback = nullptr;
        kcolumnheadersmodel_persistentindexlist_callback = nullptr;
        kcolumnheadersmodel_sender_callback = nullptr;
        kcolumnheadersmodel_sendersignalindex_callback = nullptr;
        kcolumnheadersmodel_receivers_callback = nullptr;
        kcolumnheadersmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKColumnHeadersModel_Metacall_Callback(KColumnHeadersModel_Metacall_Callback cb) { kcolumnheadersmodel_metacall_callback = cb; }
    inline void setKColumnHeadersModel_RowCount_Callback(KColumnHeadersModel_RowCount_Callback cb) { kcolumnheadersmodel_rowcount_callback = cb; }
    inline void setKColumnHeadersModel_Data_Callback(KColumnHeadersModel_Data_Callback cb) { kcolumnheadersmodel_data_callback = cb; }
    inline void setKColumnHeadersModel_RoleNames_Callback(KColumnHeadersModel_RoleNames_Callback cb) { kcolumnheadersmodel_rolenames_callback = cb; }
    inline void setKColumnHeadersModel_Index_Callback(KColumnHeadersModel_Index_Callback cb) { kcolumnheadersmodel_index_callback = cb; }
    inline void setKColumnHeadersModel_Sibling_Callback(KColumnHeadersModel_Sibling_Callback cb) { kcolumnheadersmodel_sibling_callback = cb; }
    inline void setKColumnHeadersModel_DropMimeData_Callback(KColumnHeadersModel_DropMimeData_Callback cb) { kcolumnheadersmodel_dropmimedata_callback = cb; }
    inline void setKColumnHeadersModel_Flags_Callback(KColumnHeadersModel_Flags_Callback cb) { kcolumnheadersmodel_flags_callback = cb; }
    inline void setKColumnHeadersModel_SetData_Callback(KColumnHeadersModel_SetData_Callback cb) { kcolumnheadersmodel_setdata_callback = cb; }
    inline void setKColumnHeadersModel_HeaderData_Callback(KColumnHeadersModel_HeaderData_Callback cb) { kcolumnheadersmodel_headerdata_callback = cb; }
    inline void setKColumnHeadersModel_SetHeaderData_Callback(KColumnHeadersModel_SetHeaderData_Callback cb) { kcolumnheadersmodel_setheaderdata_callback = cb; }
    inline void setKColumnHeadersModel_ItemData_Callback(KColumnHeadersModel_ItemData_Callback cb) { kcolumnheadersmodel_itemdata_callback = cb; }
    inline void setKColumnHeadersModel_SetItemData_Callback(KColumnHeadersModel_SetItemData_Callback cb) { kcolumnheadersmodel_setitemdata_callback = cb; }
    inline void setKColumnHeadersModel_ClearItemData_Callback(KColumnHeadersModel_ClearItemData_Callback cb) { kcolumnheadersmodel_clearitemdata_callback = cb; }
    inline void setKColumnHeadersModel_MimeTypes_Callback(KColumnHeadersModel_MimeTypes_Callback cb) { kcolumnheadersmodel_mimetypes_callback = cb; }
    inline void setKColumnHeadersModel_MimeData_Callback(KColumnHeadersModel_MimeData_Callback cb) { kcolumnheadersmodel_mimedata_callback = cb; }
    inline void setKColumnHeadersModel_CanDropMimeData_Callback(KColumnHeadersModel_CanDropMimeData_Callback cb) { kcolumnheadersmodel_candropmimedata_callback = cb; }
    inline void setKColumnHeadersModel_SupportedDropActions_Callback(KColumnHeadersModel_SupportedDropActions_Callback cb) { kcolumnheadersmodel_supporteddropactions_callback = cb; }
    inline void setKColumnHeadersModel_SupportedDragActions_Callback(KColumnHeadersModel_SupportedDragActions_Callback cb) { kcolumnheadersmodel_supporteddragactions_callback = cb; }
    inline void setKColumnHeadersModel_InsertRows_Callback(KColumnHeadersModel_InsertRows_Callback cb) { kcolumnheadersmodel_insertrows_callback = cb; }
    inline void setKColumnHeadersModel_InsertColumns_Callback(KColumnHeadersModel_InsertColumns_Callback cb) { kcolumnheadersmodel_insertcolumns_callback = cb; }
    inline void setKColumnHeadersModel_RemoveRows_Callback(KColumnHeadersModel_RemoveRows_Callback cb) { kcolumnheadersmodel_removerows_callback = cb; }
    inline void setKColumnHeadersModel_RemoveColumns_Callback(KColumnHeadersModel_RemoveColumns_Callback cb) { kcolumnheadersmodel_removecolumns_callback = cb; }
    inline void setKColumnHeadersModel_MoveRows_Callback(KColumnHeadersModel_MoveRows_Callback cb) { kcolumnheadersmodel_moverows_callback = cb; }
    inline void setKColumnHeadersModel_MoveColumns_Callback(KColumnHeadersModel_MoveColumns_Callback cb) { kcolumnheadersmodel_movecolumns_callback = cb; }
    inline void setKColumnHeadersModel_FetchMore_Callback(KColumnHeadersModel_FetchMore_Callback cb) { kcolumnheadersmodel_fetchmore_callback = cb; }
    inline void setKColumnHeadersModel_CanFetchMore_Callback(KColumnHeadersModel_CanFetchMore_Callback cb) { kcolumnheadersmodel_canfetchmore_callback = cb; }
    inline void setKColumnHeadersModel_Sort_Callback(KColumnHeadersModel_Sort_Callback cb) { kcolumnheadersmodel_sort_callback = cb; }
    inline void setKColumnHeadersModel_Buddy_Callback(KColumnHeadersModel_Buddy_Callback cb) { kcolumnheadersmodel_buddy_callback = cb; }
    inline void setKColumnHeadersModel_Match_Callback(KColumnHeadersModel_Match_Callback cb) { kcolumnheadersmodel_match_callback = cb; }
    inline void setKColumnHeadersModel_Span_Callback(KColumnHeadersModel_Span_Callback cb) { kcolumnheadersmodel_span_callback = cb; }
    inline void setKColumnHeadersModel_MultiData_Callback(KColumnHeadersModel_MultiData_Callback cb) { kcolumnheadersmodel_multidata_callback = cb; }
    inline void setKColumnHeadersModel_Submit_Callback(KColumnHeadersModel_Submit_Callback cb) { kcolumnheadersmodel_submit_callback = cb; }
    inline void setKColumnHeadersModel_Revert_Callback(KColumnHeadersModel_Revert_Callback cb) { kcolumnheadersmodel_revert_callback = cb; }
    inline void setKColumnHeadersModel_ResetInternalData_Callback(KColumnHeadersModel_ResetInternalData_Callback cb) { kcolumnheadersmodel_resetinternaldata_callback = cb; }
    inline void setKColumnHeadersModel_Event_Callback(KColumnHeadersModel_Event_Callback cb) { kcolumnheadersmodel_event_callback = cb; }
    inline void setKColumnHeadersModel_EventFilter_Callback(KColumnHeadersModel_EventFilter_Callback cb) { kcolumnheadersmodel_eventfilter_callback = cb; }
    inline void setKColumnHeadersModel_TimerEvent_Callback(KColumnHeadersModel_TimerEvent_Callback cb) { kcolumnheadersmodel_timerevent_callback = cb; }
    inline void setKColumnHeadersModel_ChildEvent_Callback(KColumnHeadersModel_ChildEvent_Callback cb) { kcolumnheadersmodel_childevent_callback = cb; }
    inline void setKColumnHeadersModel_CustomEvent_Callback(KColumnHeadersModel_CustomEvent_Callback cb) { kcolumnheadersmodel_customevent_callback = cb; }
    inline void setKColumnHeadersModel_ConnectNotify_Callback(KColumnHeadersModel_ConnectNotify_Callback cb) { kcolumnheadersmodel_connectnotify_callback = cb; }
    inline void setKColumnHeadersModel_DisconnectNotify_Callback(KColumnHeadersModel_DisconnectNotify_Callback cb) { kcolumnheadersmodel_disconnectnotify_callback = cb; }
    inline void setKColumnHeadersModel_CreateIndex_Callback(KColumnHeadersModel_CreateIndex_Callback cb) { kcolumnheadersmodel_createindex_callback = cb; }
    inline void setKColumnHeadersModel_EncodeData_Callback(KColumnHeadersModel_EncodeData_Callback cb) { kcolumnheadersmodel_encodedata_callback = cb; }
    inline void setKColumnHeadersModel_DecodeData_Callback(KColumnHeadersModel_DecodeData_Callback cb) { kcolumnheadersmodel_decodedata_callback = cb; }
    inline void setKColumnHeadersModel_BeginInsertRows_Callback(KColumnHeadersModel_BeginInsertRows_Callback cb) { kcolumnheadersmodel_begininsertrows_callback = cb; }
    inline void setKColumnHeadersModel_EndInsertRows_Callback(KColumnHeadersModel_EndInsertRows_Callback cb) { kcolumnheadersmodel_endinsertrows_callback = cb; }
    inline void setKColumnHeadersModel_BeginRemoveRows_Callback(KColumnHeadersModel_BeginRemoveRows_Callback cb) { kcolumnheadersmodel_beginremoverows_callback = cb; }
    inline void setKColumnHeadersModel_EndRemoveRows_Callback(KColumnHeadersModel_EndRemoveRows_Callback cb) { kcolumnheadersmodel_endremoverows_callback = cb; }
    inline void setKColumnHeadersModel_BeginMoveRows_Callback(KColumnHeadersModel_BeginMoveRows_Callback cb) { kcolumnheadersmodel_beginmoverows_callback = cb; }
    inline void setKColumnHeadersModel_EndMoveRows_Callback(KColumnHeadersModel_EndMoveRows_Callback cb) { kcolumnheadersmodel_endmoverows_callback = cb; }
    inline void setKColumnHeadersModel_BeginInsertColumns_Callback(KColumnHeadersModel_BeginInsertColumns_Callback cb) { kcolumnheadersmodel_begininsertcolumns_callback = cb; }
    inline void setKColumnHeadersModel_EndInsertColumns_Callback(KColumnHeadersModel_EndInsertColumns_Callback cb) { kcolumnheadersmodel_endinsertcolumns_callback = cb; }
    inline void setKColumnHeadersModel_BeginRemoveColumns_Callback(KColumnHeadersModel_BeginRemoveColumns_Callback cb) { kcolumnheadersmodel_beginremovecolumns_callback = cb; }
    inline void setKColumnHeadersModel_EndRemoveColumns_Callback(KColumnHeadersModel_EndRemoveColumns_Callback cb) { kcolumnheadersmodel_endremovecolumns_callback = cb; }
    inline void setKColumnHeadersModel_BeginMoveColumns_Callback(KColumnHeadersModel_BeginMoveColumns_Callback cb) { kcolumnheadersmodel_beginmovecolumns_callback = cb; }
    inline void setKColumnHeadersModel_EndMoveColumns_Callback(KColumnHeadersModel_EndMoveColumns_Callback cb) { kcolumnheadersmodel_endmovecolumns_callback = cb; }
    inline void setKColumnHeadersModel_BeginResetModel_Callback(KColumnHeadersModel_BeginResetModel_Callback cb) { kcolumnheadersmodel_beginresetmodel_callback = cb; }
    inline void setKColumnHeadersModel_EndResetModel_Callback(KColumnHeadersModel_EndResetModel_Callback cb) { kcolumnheadersmodel_endresetmodel_callback = cb; }
    inline void setKColumnHeadersModel_ChangePersistentIndex_Callback(KColumnHeadersModel_ChangePersistentIndex_Callback cb) { kcolumnheadersmodel_changepersistentindex_callback = cb; }
    inline void setKColumnHeadersModel_ChangePersistentIndexList_Callback(KColumnHeadersModel_ChangePersistentIndexList_Callback cb) { kcolumnheadersmodel_changepersistentindexlist_callback = cb; }
    inline void setKColumnHeadersModel_PersistentIndexList_Callback(KColumnHeadersModel_PersistentIndexList_Callback cb) { kcolumnheadersmodel_persistentindexlist_callback = cb; }
    inline void setKColumnHeadersModel_Sender_Callback(KColumnHeadersModel_Sender_Callback cb) { kcolumnheadersmodel_sender_callback = cb; }
    inline void setKColumnHeadersModel_SenderSignalIndex_Callback(KColumnHeadersModel_SenderSignalIndex_Callback cb) { kcolumnheadersmodel_sendersignalindex_callback = cb; }
    inline void setKColumnHeadersModel_Receivers_Callback(KColumnHeadersModel_Receivers_Callback cb) { kcolumnheadersmodel_receivers_callback = cb; }
    inline void setKColumnHeadersModel_IsSignalConnected_Callback(KColumnHeadersModel_IsSignalConnected_Callback cb) { kcolumnheadersmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKColumnHeadersModel_Metacall_IsBase(bool value) const { kcolumnheadersmodel_metacall_isbase = value; }
    inline void setKColumnHeadersModel_RowCount_IsBase(bool value) const { kcolumnheadersmodel_rowcount_isbase = value; }
    inline void setKColumnHeadersModel_Data_IsBase(bool value) const { kcolumnheadersmodel_data_isbase = value; }
    inline void setKColumnHeadersModel_RoleNames_IsBase(bool value) const { kcolumnheadersmodel_rolenames_isbase = value; }
    inline void setKColumnHeadersModel_Index_IsBase(bool value) const { kcolumnheadersmodel_index_isbase = value; }
    inline void setKColumnHeadersModel_Sibling_IsBase(bool value) const { kcolumnheadersmodel_sibling_isbase = value; }
    inline void setKColumnHeadersModel_DropMimeData_IsBase(bool value) const { kcolumnheadersmodel_dropmimedata_isbase = value; }
    inline void setKColumnHeadersModel_Flags_IsBase(bool value) const { kcolumnheadersmodel_flags_isbase = value; }
    inline void setKColumnHeadersModel_SetData_IsBase(bool value) const { kcolumnheadersmodel_setdata_isbase = value; }
    inline void setKColumnHeadersModel_HeaderData_IsBase(bool value) const { kcolumnheadersmodel_headerdata_isbase = value; }
    inline void setKColumnHeadersModel_SetHeaderData_IsBase(bool value) const { kcolumnheadersmodel_setheaderdata_isbase = value; }
    inline void setKColumnHeadersModel_ItemData_IsBase(bool value) const { kcolumnheadersmodel_itemdata_isbase = value; }
    inline void setKColumnHeadersModel_SetItemData_IsBase(bool value) const { kcolumnheadersmodel_setitemdata_isbase = value; }
    inline void setKColumnHeadersModel_ClearItemData_IsBase(bool value) const { kcolumnheadersmodel_clearitemdata_isbase = value; }
    inline void setKColumnHeadersModel_MimeTypes_IsBase(bool value) const { kcolumnheadersmodel_mimetypes_isbase = value; }
    inline void setKColumnHeadersModel_MimeData_IsBase(bool value) const { kcolumnheadersmodel_mimedata_isbase = value; }
    inline void setKColumnHeadersModel_CanDropMimeData_IsBase(bool value) const { kcolumnheadersmodel_candropmimedata_isbase = value; }
    inline void setKColumnHeadersModel_SupportedDropActions_IsBase(bool value) const { kcolumnheadersmodel_supporteddropactions_isbase = value; }
    inline void setKColumnHeadersModel_SupportedDragActions_IsBase(bool value) const { kcolumnheadersmodel_supporteddragactions_isbase = value; }
    inline void setKColumnHeadersModel_InsertRows_IsBase(bool value) const { kcolumnheadersmodel_insertrows_isbase = value; }
    inline void setKColumnHeadersModel_InsertColumns_IsBase(bool value) const { kcolumnheadersmodel_insertcolumns_isbase = value; }
    inline void setKColumnHeadersModel_RemoveRows_IsBase(bool value) const { kcolumnheadersmodel_removerows_isbase = value; }
    inline void setKColumnHeadersModel_RemoveColumns_IsBase(bool value) const { kcolumnheadersmodel_removecolumns_isbase = value; }
    inline void setKColumnHeadersModel_MoveRows_IsBase(bool value) const { kcolumnheadersmodel_moverows_isbase = value; }
    inline void setKColumnHeadersModel_MoveColumns_IsBase(bool value) const { kcolumnheadersmodel_movecolumns_isbase = value; }
    inline void setKColumnHeadersModel_FetchMore_IsBase(bool value) const { kcolumnheadersmodel_fetchmore_isbase = value; }
    inline void setKColumnHeadersModel_CanFetchMore_IsBase(bool value) const { kcolumnheadersmodel_canfetchmore_isbase = value; }
    inline void setKColumnHeadersModel_Sort_IsBase(bool value) const { kcolumnheadersmodel_sort_isbase = value; }
    inline void setKColumnHeadersModel_Buddy_IsBase(bool value) const { kcolumnheadersmodel_buddy_isbase = value; }
    inline void setKColumnHeadersModel_Match_IsBase(bool value) const { kcolumnheadersmodel_match_isbase = value; }
    inline void setKColumnHeadersModel_Span_IsBase(bool value) const { kcolumnheadersmodel_span_isbase = value; }
    inline void setKColumnHeadersModel_MultiData_IsBase(bool value) const { kcolumnheadersmodel_multidata_isbase = value; }
    inline void setKColumnHeadersModel_Submit_IsBase(bool value) const { kcolumnheadersmodel_submit_isbase = value; }
    inline void setKColumnHeadersModel_Revert_IsBase(bool value) const { kcolumnheadersmodel_revert_isbase = value; }
    inline void setKColumnHeadersModel_ResetInternalData_IsBase(bool value) const { kcolumnheadersmodel_resetinternaldata_isbase = value; }
    inline void setKColumnHeadersModel_Event_IsBase(bool value) const { kcolumnheadersmodel_event_isbase = value; }
    inline void setKColumnHeadersModel_EventFilter_IsBase(bool value) const { kcolumnheadersmodel_eventfilter_isbase = value; }
    inline void setKColumnHeadersModel_TimerEvent_IsBase(bool value) const { kcolumnheadersmodel_timerevent_isbase = value; }
    inline void setKColumnHeadersModel_ChildEvent_IsBase(bool value) const { kcolumnheadersmodel_childevent_isbase = value; }
    inline void setKColumnHeadersModel_CustomEvent_IsBase(bool value) const { kcolumnheadersmodel_customevent_isbase = value; }
    inline void setKColumnHeadersModel_ConnectNotify_IsBase(bool value) const { kcolumnheadersmodel_connectnotify_isbase = value; }
    inline void setKColumnHeadersModel_DisconnectNotify_IsBase(bool value) const { kcolumnheadersmodel_disconnectnotify_isbase = value; }
    inline void setKColumnHeadersModel_CreateIndex_IsBase(bool value) const { kcolumnheadersmodel_createindex_isbase = value; }
    inline void setKColumnHeadersModel_EncodeData_IsBase(bool value) const { kcolumnheadersmodel_encodedata_isbase = value; }
    inline void setKColumnHeadersModel_DecodeData_IsBase(bool value) const { kcolumnheadersmodel_decodedata_isbase = value; }
    inline void setKColumnHeadersModel_BeginInsertRows_IsBase(bool value) const { kcolumnheadersmodel_begininsertrows_isbase = value; }
    inline void setKColumnHeadersModel_EndInsertRows_IsBase(bool value) const { kcolumnheadersmodel_endinsertrows_isbase = value; }
    inline void setKColumnHeadersModel_BeginRemoveRows_IsBase(bool value) const { kcolumnheadersmodel_beginremoverows_isbase = value; }
    inline void setKColumnHeadersModel_EndRemoveRows_IsBase(bool value) const { kcolumnheadersmodel_endremoverows_isbase = value; }
    inline void setKColumnHeadersModel_BeginMoveRows_IsBase(bool value) const { kcolumnheadersmodel_beginmoverows_isbase = value; }
    inline void setKColumnHeadersModel_EndMoveRows_IsBase(bool value) const { kcolumnheadersmodel_endmoverows_isbase = value; }
    inline void setKColumnHeadersModel_BeginInsertColumns_IsBase(bool value) const { kcolumnheadersmodel_begininsertcolumns_isbase = value; }
    inline void setKColumnHeadersModel_EndInsertColumns_IsBase(bool value) const { kcolumnheadersmodel_endinsertcolumns_isbase = value; }
    inline void setKColumnHeadersModel_BeginRemoveColumns_IsBase(bool value) const { kcolumnheadersmodel_beginremovecolumns_isbase = value; }
    inline void setKColumnHeadersModel_EndRemoveColumns_IsBase(bool value) const { kcolumnheadersmodel_endremovecolumns_isbase = value; }
    inline void setKColumnHeadersModel_BeginMoveColumns_IsBase(bool value) const { kcolumnheadersmodel_beginmovecolumns_isbase = value; }
    inline void setKColumnHeadersModel_EndMoveColumns_IsBase(bool value) const { kcolumnheadersmodel_endmovecolumns_isbase = value; }
    inline void setKColumnHeadersModel_BeginResetModel_IsBase(bool value) const { kcolumnheadersmodel_beginresetmodel_isbase = value; }
    inline void setKColumnHeadersModel_EndResetModel_IsBase(bool value) const { kcolumnheadersmodel_endresetmodel_isbase = value; }
    inline void setKColumnHeadersModel_ChangePersistentIndex_IsBase(bool value) const { kcolumnheadersmodel_changepersistentindex_isbase = value; }
    inline void setKColumnHeadersModel_ChangePersistentIndexList_IsBase(bool value) const { kcolumnheadersmodel_changepersistentindexlist_isbase = value; }
    inline void setKColumnHeadersModel_PersistentIndexList_IsBase(bool value) const { kcolumnheadersmodel_persistentindexlist_isbase = value; }
    inline void setKColumnHeadersModel_Sender_IsBase(bool value) const { kcolumnheadersmodel_sender_isbase = value; }
    inline void setKColumnHeadersModel_SenderSignalIndex_IsBase(bool value) const { kcolumnheadersmodel_sendersignalindex_isbase = value; }
    inline void setKColumnHeadersModel_Receivers_IsBase(bool value) const { kcolumnheadersmodel_receivers_isbase = value; }
    inline void setKColumnHeadersModel_IsSignalConnected_IsBase(bool value) const { kcolumnheadersmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolumnheadersmodel_metacall_isbase) {
            kcolumnheadersmodel_metacall_isbase = false;
            return KColumnHeadersModel::qt_metacall(param1, param2, param3);
        } else if (kcolumnheadersmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcolumnheadersmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KColumnHeadersModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_rowcount_isbase) {
            kcolumnheadersmodel_rowcount_isbase = false;
            return KColumnHeadersModel::rowCount(parent);
        } else if (kcolumnheadersmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kcolumnheadersmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColumnHeadersModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcolumnheadersmodel_data_isbase) {
            kcolumnheadersmodel_data_isbase = false;
            return KColumnHeadersModel::data(index, role);
        } else if (kcolumnheadersmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kcolumnheadersmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcolumnheadersmodel_rolenames_isbase) {
            kcolumnheadersmodel_rolenames_isbase = false;
            return KColumnHeadersModel::roleNames();
        } else if (kcolumnheadersmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kcolumnheadersmodel_rolenames_callback();
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
            return KColumnHeadersModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_index_isbase) {
            kcolumnheadersmodel_index_isbase = false;
            return KColumnHeadersModel::index(row, column, parent);
        } else if (kcolumnheadersmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kcolumnheadersmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcolumnheadersmodel_sibling_isbase) {
            kcolumnheadersmodel_sibling_isbase = false;
            return KColumnHeadersModel::sibling(row, column, idx);
        } else if (kcolumnheadersmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kcolumnheadersmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_dropmimedata_isbase) {
            kcolumnheadersmodel_dropmimedata_isbase = false;
            return KColumnHeadersModel::dropMimeData(data, action, row, column, parent);
        } else if (kcolumnheadersmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KColumnHeadersModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_flags_isbase) {
            kcolumnheadersmodel_flags_isbase = false;
            return KColumnHeadersModel::flags(index);
        } else if (kcolumnheadersmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kcolumnheadersmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KColumnHeadersModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcolumnheadersmodel_setdata_isbase) {
            kcolumnheadersmodel_setdata_isbase = false;
            return KColumnHeadersModel::setData(index, value, role);
        } else if (kcolumnheadersmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kcolumnheadersmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColumnHeadersModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcolumnheadersmodel_headerdata_isbase) {
            kcolumnheadersmodel_headerdata_isbase = false;
            return KColumnHeadersModel::headerData(section, orientation, role);
        } else if (kcolumnheadersmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kcolumnheadersmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcolumnheadersmodel_setheaderdata_isbase) {
            kcolumnheadersmodel_setheaderdata_isbase = false;
            return KColumnHeadersModel::setHeaderData(section, orientation, value, role);
        } else if (kcolumnheadersmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kcolumnheadersmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KColumnHeadersModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_itemdata_isbase) {
            kcolumnheadersmodel_itemdata_isbase = false;
            return KColumnHeadersModel::itemData(index);
        } else if (kcolumnheadersmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kcolumnheadersmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KColumnHeadersModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcolumnheadersmodel_setitemdata_isbase) {
            kcolumnheadersmodel_setitemdata_isbase = false;
            return KColumnHeadersModel::setItemData(index, roles);
        } else if (kcolumnheadersmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = kcolumnheadersmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KColumnHeadersModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcolumnheadersmodel_clearitemdata_isbase) {
            kcolumnheadersmodel_clearitemdata_isbase = false;
            return KColumnHeadersModel::clearItemData(index);
        } else if (kcolumnheadersmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kcolumnheadersmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnHeadersModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcolumnheadersmodel_mimetypes_isbase) {
            kcolumnheadersmodel_mimetypes_isbase = false;
            return KColumnHeadersModel::mimeTypes();
        } else if (kcolumnheadersmodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kcolumnheadersmodel_mimetypes_callback();
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
            return KColumnHeadersModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcolumnheadersmodel_mimedata_isbase) {
            kcolumnheadersmodel_mimedata_isbase = false;
            return KColumnHeadersModel::mimeData(indexes);
        } else if (kcolumnheadersmodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = kcolumnheadersmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnHeadersModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_candropmimedata_isbase) {
            kcolumnheadersmodel_candropmimedata_isbase = false;
            return KColumnHeadersModel::canDropMimeData(data, action, row, column, parent);
        } else if (kcolumnheadersmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KColumnHeadersModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcolumnheadersmodel_supporteddropactions_isbase) {
            kcolumnheadersmodel_supporteddropactions_isbase = false;
            return KColumnHeadersModel::supportedDropActions();
        } else if (kcolumnheadersmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kcolumnheadersmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KColumnHeadersModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcolumnheadersmodel_supporteddragactions_isbase) {
            kcolumnheadersmodel_supporteddragactions_isbase = false;
            return KColumnHeadersModel::supportedDragActions();
        } else if (kcolumnheadersmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kcolumnheadersmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KColumnHeadersModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_insertrows_isbase) {
            kcolumnheadersmodel_insertrows_isbase = false;
            return KColumnHeadersModel::insertRows(row, count, parent);
        } else if (kcolumnheadersmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColumnHeadersModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_insertcolumns_isbase) {
            kcolumnheadersmodel_insertcolumns_isbase = false;
            return KColumnHeadersModel::insertColumns(column, count, parent);
        } else if (kcolumnheadersmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColumnHeadersModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_removerows_isbase) {
            kcolumnheadersmodel_removerows_isbase = false;
            return KColumnHeadersModel::removeRows(row, count, parent);
        } else if (kcolumnheadersmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColumnHeadersModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_removecolumns_isbase) {
            kcolumnheadersmodel_removecolumns_isbase = false;
            return KColumnHeadersModel::removeColumns(column, count, parent);
        } else if (kcolumnheadersmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColumnHeadersModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolumnheadersmodel_moverows_isbase) {
            kcolumnheadersmodel_moverows_isbase = false;
            return KColumnHeadersModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kcolumnheadersmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kcolumnheadersmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KColumnHeadersModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolumnheadersmodel_movecolumns_isbase) {
            kcolumnheadersmodel_movecolumns_isbase = false;
            return KColumnHeadersModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kcolumnheadersmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = kcolumnheadersmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KColumnHeadersModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcolumnheadersmodel_fetchmore_isbase) {
            kcolumnheadersmodel_fetchmore_isbase = false;
            KColumnHeadersModel::fetchMore(parent);
        } else if (kcolumnheadersmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kcolumnheadersmodel_fetchmore_callback(this, cbval1);
        } else {
            KColumnHeadersModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_canfetchmore_isbase) {
            kcolumnheadersmodel_canfetchmore_isbase = false;
            return KColumnHeadersModel::canFetchMore(parent);
        } else if (kcolumnheadersmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kcolumnheadersmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnHeadersModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcolumnheadersmodel_sort_isbase) {
            kcolumnheadersmodel_sort_isbase = false;
            KColumnHeadersModel::sort(column, order);
        } else if (kcolumnheadersmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kcolumnheadersmodel_sort_callback(this, cbval1, cbval2);
        } else {
            KColumnHeadersModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_buddy_isbase) {
            kcolumnheadersmodel_buddy_isbase = false;
            return KColumnHeadersModel::buddy(index);
        } else if (kcolumnheadersmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kcolumnheadersmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcolumnheadersmodel_match_isbase) {
            kcolumnheadersmodel_match_isbase = false;
            return KColumnHeadersModel::match(start, role, value, hits, flags);
        } else if (kcolumnheadersmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kcolumnheadersmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KColumnHeadersModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_span_isbase) {
            kcolumnheadersmodel_span_isbase = false;
            return KColumnHeadersModel::span(index);
        } else if (kcolumnheadersmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kcolumnheadersmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcolumnheadersmodel_multidata_isbase) {
            kcolumnheadersmodel_multidata_isbase = false;
            KColumnHeadersModel::multiData(index, roleDataSpan);
        } else if (kcolumnheadersmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kcolumnheadersmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KColumnHeadersModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcolumnheadersmodel_submit_isbase) {
            kcolumnheadersmodel_submit_isbase = false;
            return KColumnHeadersModel::submit();
        } else if (kcolumnheadersmodel_submit_callback != nullptr) {
            bool callback_ret = kcolumnheadersmodel_submit_callback();
            return callback_ret;
        } else {
            return KColumnHeadersModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcolumnheadersmodel_revert_isbase) {
            kcolumnheadersmodel_revert_isbase = false;
            KColumnHeadersModel::revert();
        } else if (kcolumnheadersmodel_revert_callback != nullptr) {
            kcolumnheadersmodel_revert_callback();
        } else {
            KColumnHeadersModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcolumnheadersmodel_resetinternaldata_isbase) {
            kcolumnheadersmodel_resetinternaldata_isbase = false;
            KColumnHeadersModel::resetInternalData();
        } else if (kcolumnheadersmodel_resetinternaldata_callback != nullptr) {
            kcolumnheadersmodel_resetinternaldata_callback();
        } else {
            KColumnHeadersModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolumnheadersmodel_event_isbase) {
            kcolumnheadersmodel_event_isbase = false;
            return KColumnHeadersModel::event(event);
        } else if (kcolumnheadersmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcolumnheadersmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnHeadersModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolumnheadersmodel_eventfilter_isbase) {
            kcolumnheadersmodel_eventfilter_isbase = false;
            return KColumnHeadersModel::eventFilter(watched, event);
        } else if (kcolumnheadersmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcolumnheadersmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KColumnHeadersModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolumnheadersmodel_timerevent_isbase) {
            kcolumnheadersmodel_timerevent_isbase = false;
            KColumnHeadersModel::timerEvent(event);
        } else if (kcolumnheadersmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcolumnheadersmodel_timerevent_callback(this, cbval1);
        } else {
            KColumnHeadersModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolumnheadersmodel_childevent_isbase) {
            kcolumnheadersmodel_childevent_isbase = false;
            KColumnHeadersModel::childEvent(event);
        } else if (kcolumnheadersmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcolumnheadersmodel_childevent_callback(this, cbval1);
        } else {
            KColumnHeadersModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolumnheadersmodel_customevent_isbase) {
            kcolumnheadersmodel_customevent_isbase = false;
            KColumnHeadersModel::customEvent(event);
        } else if (kcolumnheadersmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolumnheadersmodel_customevent_callback(this, cbval1);
        } else {
            KColumnHeadersModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolumnheadersmodel_connectnotify_isbase) {
            kcolumnheadersmodel_connectnotify_isbase = false;
            KColumnHeadersModel::connectNotify(signal);
        } else if (kcolumnheadersmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolumnheadersmodel_connectnotify_callback(this, cbval1);
        } else {
            KColumnHeadersModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolumnheadersmodel_disconnectnotify_isbase) {
            kcolumnheadersmodel_disconnectnotify_isbase = false;
            KColumnHeadersModel::disconnectNotify(signal);
        } else if (kcolumnheadersmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolumnheadersmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KColumnHeadersModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kcolumnheadersmodel_createindex_isbase) {
            kcolumnheadersmodel_createindex_isbase = false;
            return KColumnHeadersModel::createIndex(row, column);
        } else if (kcolumnheadersmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kcolumnheadersmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KColumnHeadersModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kcolumnheadersmodel_encodedata_isbase) {
            kcolumnheadersmodel_encodedata_isbase = false;
            KColumnHeadersModel::encodeData(indexes, stream);
        } else if (kcolumnheadersmodel_encodedata_callback != nullptr) {
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

            kcolumnheadersmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KColumnHeadersModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kcolumnheadersmodel_decodedata_isbase) {
            kcolumnheadersmodel_decodedata_isbase = false;
            return KColumnHeadersModel::decodeData(row, column, parent, stream);
        } else if (kcolumnheadersmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kcolumnheadersmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KColumnHeadersModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kcolumnheadersmodel_begininsertrows_isbase) {
            kcolumnheadersmodel_begininsertrows_isbase = false;
            KColumnHeadersModel::beginInsertRows(parent, first, last);
        } else if (kcolumnheadersmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcolumnheadersmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KColumnHeadersModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kcolumnheadersmodel_endinsertrows_isbase) {
            kcolumnheadersmodel_endinsertrows_isbase = false;
            KColumnHeadersModel::endInsertRows();
        } else if (kcolumnheadersmodel_endinsertrows_callback != nullptr) {
            kcolumnheadersmodel_endinsertrows_callback();
        } else {
            KColumnHeadersModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kcolumnheadersmodel_beginremoverows_isbase) {
            kcolumnheadersmodel_beginremoverows_isbase = false;
            KColumnHeadersModel::beginRemoveRows(parent, first, last);
        } else if (kcolumnheadersmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcolumnheadersmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KColumnHeadersModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kcolumnheadersmodel_endremoverows_isbase) {
            kcolumnheadersmodel_endremoverows_isbase = false;
            KColumnHeadersModel::endRemoveRows();
        } else if (kcolumnheadersmodel_endremoverows_callback != nullptr) {
            kcolumnheadersmodel_endremoverows_callback();
        } else {
            KColumnHeadersModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kcolumnheadersmodel_beginmoverows_isbase) {
            kcolumnheadersmodel_beginmoverows_isbase = false;
            return KColumnHeadersModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kcolumnheadersmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kcolumnheadersmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KColumnHeadersModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kcolumnheadersmodel_endmoverows_isbase) {
            kcolumnheadersmodel_endmoverows_isbase = false;
            KColumnHeadersModel::endMoveRows();
        } else if (kcolumnheadersmodel_endmoverows_callback != nullptr) {
            kcolumnheadersmodel_endmoverows_callback();
        } else {
            KColumnHeadersModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kcolumnheadersmodel_begininsertcolumns_isbase) {
            kcolumnheadersmodel_begininsertcolumns_isbase = false;
            KColumnHeadersModel::beginInsertColumns(parent, first, last);
        } else if (kcolumnheadersmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcolumnheadersmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KColumnHeadersModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kcolumnheadersmodel_endinsertcolumns_isbase) {
            kcolumnheadersmodel_endinsertcolumns_isbase = false;
            KColumnHeadersModel::endInsertColumns();
        } else if (kcolumnheadersmodel_endinsertcolumns_callback != nullptr) {
            kcolumnheadersmodel_endinsertcolumns_callback();
        } else {
            KColumnHeadersModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kcolumnheadersmodel_beginremovecolumns_isbase) {
            kcolumnheadersmodel_beginremovecolumns_isbase = false;
            KColumnHeadersModel::beginRemoveColumns(parent, first, last);
        } else if (kcolumnheadersmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kcolumnheadersmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KColumnHeadersModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kcolumnheadersmodel_endremovecolumns_isbase) {
            kcolumnheadersmodel_endremovecolumns_isbase = false;
            KColumnHeadersModel::endRemoveColumns();
        } else if (kcolumnheadersmodel_endremovecolumns_callback != nullptr) {
            kcolumnheadersmodel_endremovecolumns_callback();
        } else {
            KColumnHeadersModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kcolumnheadersmodel_beginmovecolumns_isbase) {
            kcolumnheadersmodel_beginmovecolumns_isbase = false;
            return KColumnHeadersModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kcolumnheadersmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kcolumnheadersmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KColumnHeadersModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kcolumnheadersmodel_endmovecolumns_isbase) {
            kcolumnheadersmodel_endmovecolumns_isbase = false;
            KColumnHeadersModel::endMoveColumns();
        } else if (kcolumnheadersmodel_endmovecolumns_callback != nullptr) {
            kcolumnheadersmodel_endmovecolumns_callback();
        } else {
            KColumnHeadersModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kcolumnheadersmodel_beginresetmodel_isbase) {
            kcolumnheadersmodel_beginresetmodel_isbase = false;
            KColumnHeadersModel::beginResetModel();
        } else if (kcolumnheadersmodel_beginresetmodel_callback != nullptr) {
            kcolumnheadersmodel_beginresetmodel_callback();
        } else {
            KColumnHeadersModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kcolumnheadersmodel_endresetmodel_isbase) {
            kcolumnheadersmodel_endresetmodel_isbase = false;
            KColumnHeadersModel::endResetModel();
        } else if (kcolumnheadersmodel_endresetmodel_callback != nullptr) {
            kcolumnheadersmodel_endresetmodel_callback();
        } else {
            KColumnHeadersModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kcolumnheadersmodel_changepersistentindex_isbase) {
            kcolumnheadersmodel_changepersistentindex_isbase = false;
            KColumnHeadersModel::changePersistentIndex(from, to);
        } else if (kcolumnheadersmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kcolumnheadersmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KColumnHeadersModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kcolumnheadersmodel_changepersistentindexlist_isbase) {
            kcolumnheadersmodel_changepersistentindexlist_isbase = false;
            KColumnHeadersModel::changePersistentIndexList(from, to);
        } else if (kcolumnheadersmodel_changepersistentindexlist_callback != nullptr) {
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

            kcolumnheadersmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KColumnHeadersModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kcolumnheadersmodel_persistentindexlist_isbase) {
            kcolumnheadersmodel_persistentindexlist_isbase = false;
            return KColumnHeadersModel::persistentIndexList();
        } else if (kcolumnheadersmodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kcolumnheadersmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KColumnHeadersModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolumnheadersmodel_sender_isbase) {
            kcolumnheadersmodel_sender_isbase = false;
            return KColumnHeadersModel::sender();
        } else if (kcolumnheadersmodel_sender_callback != nullptr) {
            QObject* callback_ret = kcolumnheadersmodel_sender_callback();
            return callback_ret;
        } else {
            return KColumnHeadersModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolumnheadersmodel_sendersignalindex_isbase) {
            kcolumnheadersmodel_sendersignalindex_isbase = false;
            return KColumnHeadersModel::senderSignalIndex();
        } else if (kcolumnheadersmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kcolumnheadersmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColumnHeadersModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolumnheadersmodel_receivers_isbase) {
            kcolumnheadersmodel_receivers_isbase = false;
            return KColumnHeadersModel::receivers(signal);
        } else if (kcolumnheadersmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcolumnheadersmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColumnHeadersModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolumnheadersmodel_issignalconnected_isbase) {
            kcolumnheadersmodel_issignalconnected_isbase = false;
            return KColumnHeadersModel::isSignalConnected(signal);
        } else if (kcolumnheadersmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcolumnheadersmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColumnHeadersModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KColumnHeadersModel_ResetInternalData(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseResetInternalData(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_TimerEvent(KColumnHeadersModel* self, QTimerEvent* event);
    friend void KColumnHeadersModel_QBaseTimerEvent(KColumnHeadersModel* self, QTimerEvent* event);
    friend void KColumnHeadersModel_ChildEvent(KColumnHeadersModel* self, QChildEvent* event);
    friend void KColumnHeadersModel_QBaseChildEvent(KColumnHeadersModel* self, QChildEvent* event);
    friend void KColumnHeadersModel_CustomEvent(KColumnHeadersModel* self, QEvent* event);
    friend void KColumnHeadersModel_QBaseCustomEvent(KColumnHeadersModel* self, QEvent* event);
    friend void KColumnHeadersModel_ConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
    friend void KColumnHeadersModel_QBaseConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
    friend void KColumnHeadersModel_DisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
    friend void KColumnHeadersModel_QBaseDisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
    friend QModelIndex* KColumnHeadersModel_CreateIndex(const KColumnHeadersModel* self, int row, int column);
    friend QModelIndex* KColumnHeadersModel_QBaseCreateIndex(const KColumnHeadersModel* self, int row, int column);
    friend void KColumnHeadersModel_EncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KColumnHeadersModel_QBaseEncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KColumnHeadersModel_DecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KColumnHeadersModel_QBaseDecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KColumnHeadersModel_BeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_QBaseBeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_EndInsertRows(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndInsertRows(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_BeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_QBaseBeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_EndRemoveRows(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndRemoveRows(KColumnHeadersModel* self);
    friend bool KColumnHeadersModel_BeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KColumnHeadersModel_QBaseBeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KColumnHeadersModel_EndMoveRows(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndMoveRows(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_BeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_QBaseBeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_EndInsertColumns(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndInsertColumns(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_BeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_QBaseBeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last);
    friend void KColumnHeadersModel_EndRemoveColumns(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndRemoveColumns(KColumnHeadersModel* self);
    friend bool KColumnHeadersModel_BeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KColumnHeadersModel_QBaseBeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KColumnHeadersModel_EndMoveColumns(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndMoveColumns(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_BeginResetModel(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseBeginResetModel(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_EndResetModel(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_QBaseEndResetModel(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_ChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KColumnHeadersModel_QBaseChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KColumnHeadersModel_ChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KColumnHeadersModel_QBaseChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KColumnHeadersModel_PersistentIndexList(const KColumnHeadersModel* self);
    friend libqt_list /* of QModelIndex* */ KColumnHeadersModel_QBasePersistentIndexList(const KColumnHeadersModel* self);
    friend QObject* KColumnHeadersModel_Sender(const KColumnHeadersModel* self);
    friend QObject* KColumnHeadersModel_QBaseSender(const KColumnHeadersModel* self);
    friend int KColumnHeadersModel_SenderSignalIndex(const KColumnHeadersModel* self);
    friend int KColumnHeadersModel_QBaseSenderSignalIndex(const KColumnHeadersModel* self);
    friend int KColumnHeadersModel_Receivers(const KColumnHeadersModel* self, const char* signal);
    friend int KColumnHeadersModel_QBaseReceivers(const KColumnHeadersModel* self, const char* signal);
    friend bool KColumnHeadersModel_IsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal);
    friend bool KColumnHeadersModel_QBaseIsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal);
};

#endif
