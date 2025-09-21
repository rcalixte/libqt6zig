#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALITEMSMODEL_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALITEMSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::ItemsModel so that we can call protected methods
class VirtualKNSCoreItemsModel final : public KNSCore::ItemsModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSCoreItemsModel = true;

    // Virtual class public types (including callbacks)
    using KNSCore__ItemsModel_Metacall_Callback = int (*)(KNSCore__ItemsModel*, int, int, void**);
    using KNSCore__ItemsModel_RowCount_Callback = int (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_Data_Callback = QVariant* (*)(const KNSCore__ItemsModel*, QModelIndex*, int);
    using KNSCore__ItemsModel_Index_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_Sibling_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_DropMimeData_Callback = bool (*)(KNSCore__ItemsModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ItemsModel_Flags_Callback = int (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_SetData_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, QVariant*, int);
    using KNSCore__ItemsModel_HeaderData_Callback = QVariant* (*)(const KNSCore__ItemsModel*, int, int, int);
    using KNSCore__ItemsModel_SetHeaderData_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QVariant*, int);
    using KNSCore__ItemsModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_SetItemData_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KNSCore__ItemsModel_ClearItemData_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_MimeTypes_Callback = const char** (*)();
    using KNSCore__ItemsModel_MimeData_Callback = QMimeData* (*)(const KNSCore__ItemsModel*, libqt_list /* of QModelIndex* */);
    using KNSCore__ItemsModel_CanDropMimeData_Callback = bool (*)(const KNSCore__ItemsModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ItemsModel_SupportedDropActions_Callback = int (*)();
    using KNSCore__ItemsModel_SupportedDragActions_Callback = int (*)();
    using KNSCore__ItemsModel_InsertRows_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_InsertColumns_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_RemoveRows_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_RemoveColumns_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_MoveRows_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ItemsModel_MoveColumns_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ItemsModel_FetchMore_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_CanFetchMore_Callback = bool (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_Sort_Callback = void (*)(KNSCore__ItemsModel*, int, int);
    using KNSCore__ItemsModel_Buddy_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_Match_Callback = QModelIndex** (*)(const KNSCore__ItemsModel*, QModelIndex*, int, QVariant*, int, int);
    using KNSCore__ItemsModel_Span_Callback = QSize* (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KNSCore__ItemsModel_MultiData_Callback = void (*)(const KNSCore__ItemsModel*, QModelIndex*, QModelRoleDataSpan*);
    using KNSCore__ItemsModel_Submit_Callback = bool (*)();
    using KNSCore__ItemsModel_Revert_Callback = void (*)();
    using KNSCore__ItemsModel_ResetInternalData_Callback = void (*)();
    using KNSCore__ItemsModel_Event_Callback = bool (*)(KNSCore__ItemsModel*, QEvent*);
    using KNSCore__ItemsModel_EventFilter_Callback = bool (*)(KNSCore__ItemsModel*, QObject*, QEvent*);
    using KNSCore__ItemsModel_TimerEvent_Callback = void (*)(KNSCore__ItemsModel*, QTimerEvent*);
    using KNSCore__ItemsModel_ChildEvent_Callback = void (*)(KNSCore__ItemsModel*, QChildEvent*);
    using KNSCore__ItemsModel_CustomEvent_Callback = void (*)(KNSCore__ItemsModel*, QEvent*);
    using KNSCore__ItemsModel_ConnectNotify_Callback = void (*)(KNSCore__ItemsModel*, QMetaMethod*);
    using KNSCore__ItemsModel_DisconnectNotify_Callback = void (*)(KNSCore__ItemsModel*, QMetaMethod*);
    using KNSCore__ItemsModel_CreateIndex_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, int, int);
    using KNSCore__ItemsModel_EncodeData_Callback = void (*)(const KNSCore__ItemsModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KNSCore__ItemsModel_DecodeData_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*, QDataStream*);
    using KNSCore__ItemsModel_BeginInsertRows_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*, int, int);
    using KNSCore__ItemsModel_EndInsertRows_Callback = void (*)();
    using KNSCore__ItemsModel_BeginRemoveRows_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*, int, int);
    using KNSCore__ItemsModel_EndRemoveRows_Callback = void (*)();
    using KNSCore__ItemsModel_BeginMoveRows_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ItemsModel_EndMoveRows_Callback = void (*)();
    using KNSCore__ItemsModel_BeginInsertColumns_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*, int, int);
    using KNSCore__ItemsModel_EndInsertColumns_Callback = void (*)();
    using KNSCore__ItemsModel_BeginRemoveColumns_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*, int, int);
    using KNSCore__ItemsModel_EndRemoveColumns_Callback = void (*)();
    using KNSCore__ItemsModel_BeginMoveColumns_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ItemsModel_EndMoveColumns_Callback = void (*)();
    using KNSCore__ItemsModel_BeginResetModel_Callback = void (*)();
    using KNSCore__ItemsModel_EndResetModel_Callback = void (*)();
    using KNSCore__ItemsModel_ChangePersistentIndex_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*, QModelIndex*);
    using KNSCore__ItemsModel_ChangePersistentIndexList_Callback = void (*)(KNSCore__ItemsModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KNSCore__ItemsModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KNSCore__ItemsModel_Sender_Callback = QObject* (*)();
    using KNSCore__ItemsModel_SenderSignalIndex_Callback = int (*)();
    using KNSCore__ItemsModel_Receivers_Callback = int (*)(const KNSCore__ItemsModel*, const char*);
    using KNSCore__ItemsModel_IsSignalConnected_Callback = bool (*)(const KNSCore__ItemsModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSCore__ItemsModel_Metacall_Callback knscore__itemsmodel_metacall_callback = nullptr;
    KNSCore__ItemsModel_RowCount_Callback knscore__itemsmodel_rowcount_callback = nullptr;
    KNSCore__ItemsModel_Data_Callback knscore__itemsmodel_data_callback = nullptr;
    KNSCore__ItemsModel_Index_Callback knscore__itemsmodel_index_callback = nullptr;
    KNSCore__ItemsModel_Sibling_Callback knscore__itemsmodel_sibling_callback = nullptr;
    KNSCore__ItemsModel_DropMimeData_Callback knscore__itemsmodel_dropmimedata_callback = nullptr;
    KNSCore__ItemsModel_Flags_Callback knscore__itemsmodel_flags_callback = nullptr;
    KNSCore__ItemsModel_SetData_Callback knscore__itemsmodel_setdata_callback = nullptr;
    KNSCore__ItemsModel_HeaderData_Callback knscore__itemsmodel_headerdata_callback = nullptr;
    KNSCore__ItemsModel_SetHeaderData_Callback knscore__itemsmodel_setheaderdata_callback = nullptr;
    KNSCore__ItemsModel_ItemData_Callback knscore__itemsmodel_itemdata_callback = nullptr;
    KNSCore__ItemsModel_SetItemData_Callback knscore__itemsmodel_setitemdata_callback = nullptr;
    KNSCore__ItemsModel_ClearItemData_Callback knscore__itemsmodel_clearitemdata_callback = nullptr;
    KNSCore__ItemsModel_MimeTypes_Callback knscore__itemsmodel_mimetypes_callback = nullptr;
    KNSCore__ItemsModel_MimeData_Callback knscore__itemsmodel_mimedata_callback = nullptr;
    KNSCore__ItemsModel_CanDropMimeData_Callback knscore__itemsmodel_candropmimedata_callback = nullptr;
    KNSCore__ItemsModel_SupportedDropActions_Callback knscore__itemsmodel_supporteddropactions_callback = nullptr;
    KNSCore__ItemsModel_SupportedDragActions_Callback knscore__itemsmodel_supporteddragactions_callback = nullptr;
    KNSCore__ItemsModel_InsertRows_Callback knscore__itemsmodel_insertrows_callback = nullptr;
    KNSCore__ItemsModel_InsertColumns_Callback knscore__itemsmodel_insertcolumns_callback = nullptr;
    KNSCore__ItemsModel_RemoveRows_Callback knscore__itemsmodel_removerows_callback = nullptr;
    KNSCore__ItemsModel_RemoveColumns_Callback knscore__itemsmodel_removecolumns_callback = nullptr;
    KNSCore__ItemsModel_MoveRows_Callback knscore__itemsmodel_moverows_callback = nullptr;
    KNSCore__ItemsModel_MoveColumns_Callback knscore__itemsmodel_movecolumns_callback = nullptr;
    KNSCore__ItemsModel_FetchMore_Callback knscore__itemsmodel_fetchmore_callback = nullptr;
    KNSCore__ItemsModel_CanFetchMore_Callback knscore__itemsmodel_canfetchmore_callback = nullptr;
    KNSCore__ItemsModel_Sort_Callback knscore__itemsmodel_sort_callback = nullptr;
    KNSCore__ItemsModel_Buddy_Callback knscore__itemsmodel_buddy_callback = nullptr;
    KNSCore__ItemsModel_Match_Callback knscore__itemsmodel_match_callback = nullptr;
    KNSCore__ItemsModel_Span_Callback knscore__itemsmodel_span_callback = nullptr;
    KNSCore__ItemsModel_RoleNames_Callback knscore__itemsmodel_rolenames_callback = nullptr;
    KNSCore__ItemsModel_MultiData_Callback knscore__itemsmodel_multidata_callback = nullptr;
    KNSCore__ItemsModel_Submit_Callback knscore__itemsmodel_submit_callback = nullptr;
    KNSCore__ItemsModel_Revert_Callback knscore__itemsmodel_revert_callback = nullptr;
    KNSCore__ItemsModel_ResetInternalData_Callback knscore__itemsmodel_resetinternaldata_callback = nullptr;
    KNSCore__ItemsModel_Event_Callback knscore__itemsmodel_event_callback = nullptr;
    KNSCore__ItemsModel_EventFilter_Callback knscore__itemsmodel_eventfilter_callback = nullptr;
    KNSCore__ItemsModel_TimerEvent_Callback knscore__itemsmodel_timerevent_callback = nullptr;
    KNSCore__ItemsModel_ChildEvent_Callback knscore__itemsmodel_childevent_callback = nullptr;
    KNSCore__ItemsModel_CustomEvent_Callback knscore__itemsmodel_customevent_callback = nullptr;
    KNSCore__ItemsModel_ConnectNotify_Callback knscore__itemsmodel_connectnotify_callback = nullptr;
    KNSCore__ItemsModel_DisconnectNotify_Callback knscore__itemsmodel_disconnectnotify_callback = nullptr;
    KNSCore__ItemsModel_CreateIndex_Callback knscore__itemsmodel_createindex_callback = nullptr;
    KNSCore__ItemsModel_EncodeData_Callback knscore__itemsmodel_encodedata_callback = nullptr;
    KNSCore__ItemsModel_DecodeData_Callback knscore__itemsmodel_decodedata_callback = nullptr;
    KNSCore__ItemsModel_BeginInsertRows_Callback knscore__itemsmodel_begininsertrows_callback = nullptr;
    KNSCore__ItemsModel_EndInsertRows_Callback knscore__itemsmodel_endinsertrows_callback = nullptr;
    KNSCore__ItemsModel_BeginRemoveRows_Callback knscore__itemsmodel_beginremoverows_callback = nullptr;
    KNSCore__ItemsModel_EndRemoveRows_Callback knscore__itemsmodel_endremoverows_callback = nullptr;
    KNSCore__ItemsModel_BeginMoveRows_Callback knscore__itemsmodel_beginmoverows_callback = nullptr;
    KNSCore__ItemsModel_EndMoveRows_Callback knscore__itemsmodel_endmoverows_callback = nullptr;
    KNSCore__ItemsModel_BeginInsertColumns_Callback knscore__itemsmodel_begininsertcolumns_callback = nullptr;
    KNSCore__ItemsModel_EndInsertColumns_Callback knscore__itemsmodel_endinsertcolumns_callback = nullptr;
    KNSCore__ItemsModel_BeginRemoveColumns_Callback knscore__itemsmodel_beginremovecolumns_callback = nullptr;
    KNSCore__ItemsModel_EndRemoveColumns_Callback knscore__itemsmodel_endremovecolumns_callback = nullptr;
    KNSCore__ItemsModel_BeginMoveColumns_Callback knscore__itemsmodel_beginmovecolumns_callback = nullptr;
    KNSCore__ItemsModel_EndMoveColumns_Callback knscore__itemsmodel_endmovecolumns_callback = nullptr;
    KNSCore__ItemsModel_BeginResetModel_Callback knscore__itemsmodel_beginresetmodel_callback = nullptr;
    KNSCore__ItemsModel_EndResetModel_Callback knscore__itemsmodel_endresetmodel_callback = nullptr;
    KNSCore__ItemsModel_ChangePersistentIndex_Callback knscore__itemsmodel_changepersistentindex_callback = nullptr;
    KNSCore__ItemsModel_ChangePersistentIndexList_Callback knscore__itemsmodel_changepersistentindexlist_callback = nullptr;
    KNSCore__ItemsModel_PersistentIndexList_Callback knscore__itemsmodel_persistentindexlist_callback = nullptr;
    KNSCore__ItemsModel_Sender_Callback knscore__itemsmodel_sender_callback = nullptr;
    KNSCore__ItemsModel_SenderSignalIndex_Callback knscore__itemsmodel_sendersignalindex_callback = nullptr;
    KNSCore__ItemsModel_Receivers_Callback knscore__itemsmodel_receivers_callback = nullptr;
    KNSCore__ItemsModel_IsSignalConnected_Callback knscore__itemsmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knscore__itemsmodel_metacall_isbase = false;
    mutable bool knscore__itemsmodel_rowcount_isbase = false;
    mutable bool knscore__itemsmodel_data_isbase = false;
    mutable bool knscore__itemsmodel_index_isbase = false;
    mutable bool knscore__itemsmodel_sibling_isbase = false;
    mutable bool knscore__itemsmodel_dropmimedata_isbase = false;
    mutable bool knscore__itemsmodel_flags_isbase = false;
    mutable bool knscore__itemsmodel_setdata_isbase = false;
    mutable bool knscore__itemsmodel_headerdata_isbase = false;
    mutable bool knscore__itemsmodel_setheaderdata_isbase = false;
    mutable bool knscore__itemsmodel_itemdata_isbase = false;
    mutable bool knscore__itemsmodel_setitemdata_isbase = false;
    mutable bool knscore__itemsmodel_clearitemdata_isbase = false;
    mutable bool knscore__itemsmodel_mimetypes_isbase = false;
    mutable bool knscore__itemsmodel_mimedata_isbase = false;
    mutable bool knscore__itemsmodel_candropmimedata_isbase = false;
    mutable bool knscore__itemsmodel_supporteddropactions_isbase = false;
    mutable bool knscore__itemsmodel_supporteddragactions_isbase = false;
    mutable bool knscore__itemsmodel_insertrows_isbase = false;
    mutable bool knscore__itemsmodel_insertcolumns_isbase = false;
    mutable bool knscore__itemsmodel_removerows_isbase = false;
    mutable bool knscore__itemsmodel_removecolumns_isbase = false;
    mutable bool knscore__itemsmodel_moverows_isbase = false;
    mutable bool knscore__itemsmodel_movecolumns_isbase = false;
    mutable bool knscore__itemsmodel_fetchmore_isbase = false;
    mutable bool knscore__itemsmodel_canfetchmore_isbase = false;
    mutable bool knscore__itemsmodel_sort_isbase = false;
    mutable bool knscore__itemsmodel_buddy_isbase = false;
    mutable bool knscore__itemsmodel_match_isbase = false;
    mutable bool knscore__itemsmodel_span_isbase = false;
    mutable bool knscore__itemsmodel_rolenames_isbase = false;
    mutable bool knscore__itemsmodel_multidata_isbase = false;
    mutable bool knscore__itemsmodel_submit_isbase = false;
    mutable bool knscore__itemsmodel_revert_isbase = false;
    mutable bool knscore__itemsmodel_resetinternaldata_isbase = false;
    mutable bool knscore__itemsmodel_event_isbase = false;
    mutable bool knscore__itemsmodel_eventfilter_isbase = false;
    mutable bool knscore__itemsmodel_timerevent_isbase = false;
    mutable bool knscore__itemsmodel_childevent_isbase = false;
    mutable bool knscore__itemsmodel_customevent_isbase = false;
    mutable bool knscore__itemsmodel_connectnotify_isbase = false;
    mutable bool knscore__itemsmodel_disconnectnotify_isbase = false;
    mutable bool knscore__itemsmodel_createindex_isbase = false;
    mutable bool knscore__itemsmodel_encodedata_isbase = false;
    mutable bool knscore__itemsmodel_decodedata_isbase = false;
    mutable bool knscore__itemsmodel_begininsertrows_isbase = false;
    mutable bool knscore__itemsmodel_endinsertrows_isbase = false;
    mutable bool knscore__itemsmodel_beginremoverows_isbase = false;
    mutable bool knscore__itemsmodel_endremoverows_isbase = false;
    mutable bool knscore__itemsmodel_beginmoverows_isbase = false;
    mutable bool knscore__itemsmodel_endmoverows_isbase = false;
    mutable bool knscore__itemsmodel_begininsertcolumns_isbase = false;
    mutable bool knscore__itemsmodel_endinsertcolumns_isbase = false;
    mutable bool knscore__itemsmodel_beginremovecolumns_isbase = false;
    mutable bool knscore__itemsmodel_endremovecolumns_isbase = false;
    mutable bool knscore__itemsmodel_beginmovecolumns_isbase = false;
    mutable bool knscore__itemsmodel_endmovecolumns_isbase = false;
    mutable bool knscore__itemsmodel_beginresetmodel_isbase = false;
    mutable bool knscore__itemsmodel_endresetmodel_isbase = false;
    mutable bool knscore__itemsmodel_changepersistentindex_isbase = false;
    mutable bool knscore__itemsmodel_changepersistentindexlist_isbase = false;
    mutable bool knscore__itemsmodel_persistentindexlist_isbase = false;
    mutable bool knscore__itemsmodel_sender_isbase = false;
    mutable bool knscore__itemsmodel_sendersignalindex_isbase = false;
    mutable bool knscore__itemsmodel_receivers_isbase = false;
    mutable bool knscore__itemsmodel_issignalconnected_isbase = false;

  public:
    VirtualKNSCoreItemsModel(KNSCore::EngineBase* engine) : KNSCore::ItemsModel(engine) {};
    VirtualKNSCoreItemsModel(KNSCore::EngineBase* engine, QObject* parent) : KNSCore::ItemsModel(engine, parent) {};

    ~VirtualKNSCoreItemsModel() {
        knscore__itemsmodel_metacall_callback = nullptr;
        knscore__itemsmodel_rowcount_callback = nullptr;
        knscore__itemsmodel_data_callback = nullptr;
        knscore__itemsmodel_index_callback = nullptr;
        knscore__itemsmodel_sibling_callback = nullptr;
        knscore__itemsmodel_dropmimedata_callback = nullptr;
        knscore__itemsmodel_flags_callback = nullptr;
        knscore__itemsmodel_setdata_callback = nullptr;
        knscore__itemsmodel_headerdata_callback = nullptr;
        knscore__itemsmodel_setheaderdata_callback = nullptr;
        knscore__itemsmodel_itemdata_callback = nullptr;
        knscore__itemsmodel_setitemdata_callback = nullptr;
        knscore__itemsmodel_clearitemdata_callback = nullptr;
        knscore__itemsmodel_mimetypes_callback = nullptr;
        knscore__itemsmodel_mimedata_callback = nullptr;
        knscore__itemsmodel_candropmimedata_callback = nullptr;
        knscore__itemsmodel_supporteddropactions_callback = nullptr;
        knscore__itemsmodel_supporteddragactions_callback = nullptr;
        knscore__itemsmodel_insertrows_callback = nullptr;
        knscore__itemsmodel_insertcolumns_callback = nullptr;
        knscore__itemsmodel_removerows_callback = nullptr;
        knscore__itemsmodel_removecolumns_callback = nullptr;
        knscore__itemsmodel_moverows_callback = nullptr;
        knscore__itemsmodel_movecolumns_callback = nullptr;
        knscore__itemsmodel_fetchmore_callback = nullptr;
        knscore__itemsmodel_canfetchmore_callback = nullptr;
        knscore__itemsmodel_sort_callback = nullptr;
        knscore__itemsmodel_buddy_callback = nullptr;
        knscore__itemsmodel_match_callback = nullptr;
        knscore__itemsmodel_span_callback = nullptr;
        knscore__itemsmodel_rolenames_callback = nullptr;
        knscore__itemsmodel_multidata_callback = nullptr;
        knscore__itemsmodel_submit_callback = nullptr;
        knscore__itemsmodel_revert_callback = nullptr;
        knscore__itemsmodel_resetinternaldata_callback = nullptr;
        knscore__itemsmodel_event_callback = nullptr;
        knscore__itemsmodel_eventfilter_callback = nullptr;
        knscore__itemsmodel_timerevent_callback = nullptr;
        knscore__itemsmodel_childevent_callback = nullptr;
        knscore__itemsmodel_customevent_callback = nullptr;
        knscore__itemsmodel_connectnotify_callback = nullptr;
        knscore__itemsmodel_disconnectnotify_callback = nullptr;
        knscore__itemsmodel_createindex_callback = nullptr;
        knscore__itemsmodel_encodedata_callback = nullptr;
        knscore__itemsmodel_decodedata_callback = nullptr;
        knscore__itemsmodel_begininsertrows_callback = nullptr;
        knscore__itemsmodel_endinsertrows_callback = nullptr;
        knscore__itemsmodel_beginremoverows_callback = nullptr;
        knscore__itemsmodel_endremoverows_callback = nullptr;
        knscore__itemsmodel_beginmoverows_callback = nullptr;
        knscore__itemsmodel_endmoverows_callback = nullptr;
        knscore__itemsmodel_begininsertcolumns_callback = nullptr;
        knscore__itemsmodel_endinsertcolumns_callback = nullptr;
        knscore__itemsmodel_beginremovecolumns_callback = nullptr;
        knscore__itemsmodel_endremovecolumns_callback = nullptr;
        knscore__itemsmodel_beginmovecolumns_callback = nullptr;
        knscore__itemsmodel_endmovecolumns_callback = nullptr;
        knscore__itemsmodel_beginresetmodel_callback = nullptr;
        knscore__itemsmodel_endresetmodel_callback = nullptr;
        knscore__itemsmodel_changepersistentindex_callback = nullptr;
        knscore__itemsmodel_changepersistentindexlist_callback = nullptr;
        knscore__itemsmodel_persistentindexlist_callback = nullptr;
        knscore__itemsmodel_sender_callback = nullptr;
        knscore__itemsmodel_sendersignalindex_callback = nullptr;
        knscore__itemsmodel_receivers_callback = nullptr;
        knscore__itemsmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNSCore__ItemsModel_Metacall_Callback(KNSCore__ItemsModel_Metacall_Callback cb) { knscore__itemsmodel_metacall_callback = cb; }
    inline void setKNSCore__ItemsModel_RowCount_Callback(KNSCore__ItemsModel_RowCount_Callback cb) { knscore__itemsmodel_rowcount_callback = cb; }
    inline void setKNSCore__ItemsModel_Data_Callback(KNSCore__ItemsModel_Data_Callback cb) { knscore__itemsmodel_data_callback = cb; }
    inline void setKNSCore__ItemsModel_Index_Callback(KNSCore__ItemsModel_Index_Callback cb) { knscore__itemsmodel_index_callback = cb; }
    inline void setKNSCore__ItemsModel_Sibling_Callback(KNSCore__ItemsModel_Sibling_Callback cb) { knscore__itemsmodel_sibling_callback = cb; }
    inline void setKNSCore__ItemsModel_DropMimeData_Callback(KNSCore__ItemsModel_DropMimeData_Callback cb) { knscore__itemsmodel_dropmimedata_callback = cb; }
    inline void setKNSCore__ItemsModel_Flags_Callback(KNSCore__ItemsModel_Flags_Callback cb) { knscore__itemsmodel_flags_callback = cb; }
    inline void setKNSCore__ItemsModel_SetData_Callback(KNSCore__ItemsModel_SetData_Callback cb) { knscore__itemsmodel_setdata_callback = cb; }
    inline void setKNSCore__ItemsModel_HeaderData_Callback(KNSCore__ItemsModel_HeaderData_Callback cb) { knscore__itemsmodel_headerdata_callback = cb; }
    inline void setKNSCore__ItemsModel_SetHeaderData_Callback(KNSCore__ItemsModel_SetHeaderData_Callback cb) { knscore__itemsmodel_setheaderdata_callback = cb; }
    inline void setKNSCore__ItemsModel_ItemData_Callback(KNSCore__ItemsModel_ItemData_Callback cb) { knscore__itemsmodel_itemdata_callback = cb; }
    inline void setKNSCore__ItemsModel_SetItemData_Callback(KNSCore__ItemsModel_SetItemData_Callback cb) { knscore__itemsmodel_setitemdata_callback = cb; }
    inline void setKNSCore__ItemsModel_ClearItemData_Callback(KNSCore__ItemsModel_ClearItemData_Callback cb) { knscore__itemsmodel_clearitemdata_callback = cb; }
    inline void setKNSCore__ItemsModel_MimeTypes_Callback(KNSCore__ItemsModel_MimeTypes_Callback cb) { knscore__itemsmodel_mimetypes_callback = cb; }
    inline void setKNSCore__ItemsModel_MimeData_Callback(KNSCore__ItemsModel_MimeData_Callback cb) { knscore__itemsmodel_mimedata_callback = cb; }
    inline void setKNSCore__ItemsModel_CanDropMimeData_Callback(KNSCore__ItemsModel_CanDropMimeData_Callback cb) { knscore__itemsmodel_candropmimedata_callback = cb; }
    inline void setKNSCore__ItemsModel_SupportedDropActions_Callback(KNSCore__ItemsModel_SupportedDropActions_Callback cb) { knscore__itemsmodel_supporteddropactions_callback = cb; }
    inline void setKNSCore__ItemsModel_SupportedDragActions_Callback(KNSCore__ItemsModel_SupportedDragActions_Callback cb) { knscore__itemsmodel_supporteddragactions_callback = cb; }
    inline void setKNSCore__ItemsModel_InsertRows_Callback(KNSCore__ItemsModel_InsertRows_Callback cb) { knscore__itemsmodel_insertrows_callback = cb; }
    inline void setKNSCore__ItemsModel_InsertColumns_Callback(KNSCore__ItemsModel_InsertColumns_Callback cb) { knscore__itemsmodel_insertcolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_RemoveRows_Callback(KNSCore__ItemsModel_RemoveRows_Callback cb) { knscore__itemsmodel_removerows_callback = cb; }
    inline void setKNSCore__ItemsModel_RemoveColumns_Callback(KNSCore__ItemsModel_RemoveColumns_Callback cb) { knscore__itemsmodel_removecolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_MoveRows_Callback(KNSCore__ItemsModel_MoveRows_Callback cb) { knscore__itemsmodel_moverows_callback = cb; }
    inline void setKNSCore__ItemsModel_MoveColumns_Callback(KNSCore__ItemsModel_MoveColumns_Callback cb) { knscore__itemsmodel_movecolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_FetchMore_Callback(KNSCore__ItemsModel_FetchMore_Callback cb) { knscore__itemsmodel_fetchmore_callback = cb; }
    inline void setKNSCore__ItemsModel_CanFetchMore_Callback(KNSCore__ItemsModel_CanFetchMore_Callback cb) { knscore__itemsmodel_canfetchmore_callback = cb; }
    inline void setKNSCore__ItemsModel_Sort_Callback(KNSCore__ItemsModel_Sort_Callback cb) { knscore__itemsmodel_sort_callback = cb; }
    inline void setKNSCore__ItemsModel_Buddy_Callback(KNSCore__ItemsModel_Buddy_Callback cb) { knscore__itemsmodel_buddy_callback = cb; }
    inline void setKNSCore__ItemsModel_Match_Callback(KNSCore__ItemsModel_Match_Callback cb) { knscore__itemsmodel_match_callback = cb; }
    inline void setKNSCore__ItemsModel_Span_Callback(KNSCore__ItemsModel_Span_Callback cb) { knscore__itemsmodel_span_callback = cb; }
    inline void setKNSCore__ItemsModel_RoleNames_Callback(KNSCore__ItemsModel_RoleNames_Callback cb) { knscore__itemsmodel_rolenames_callback = cb; }
    inline void setKNSCore__ItemsModel_MultiData_Callback(KNSCore__ItemsModel_MultiData_Callback cb) { knscore__itemsmodel_multidata_callback = cb; }
    inline void setKNSCore__ItemsModel_Submit_Callback(KNSCore__ItemsModel_Submit_Callback cb) { knscore__itemsmodel_submit_callback = cb; }
    inline void setKNSCore__ItemsModel_Revert_Callback(KNSCore__ItemsModel_Revert_Callback cb) { knscore__itemsmodel_revert_callback = cb; }
    inline void setKNSCore__ItemsModel_ResetInternalData_Callback(KNSCore__ItemsModel_ResetInternalData_Callback cb) { knscore__itemsmodel_resetinternaldata_callback = cb; }
    inline void setKNSCore__ItemsModel_Event_Callback(KNSCore__ItemsModel_Event_Callback cb) { knscore__itemsmodel_event_callback = cb; }
    inline void setKNSCore__ItemsModel_EventFilter_Callback(KNSCore__ItemsModel_EventFilter_Callback cb) { knscore__itemsmodel_eventfilter_callback = cb; }
    inline void setKNSCore__ItemsModel_TimerEvent_Callback(KNSCore__ItemsModel_TimerEvent_Callback cb) { knscore__itemsmodel_timerevent_callback = cb; }
    inline void setKNSCore__ItemsModel_ChildEvent_Callback(KNSCore__ItemsModel_ChildEvent_Callback cb) { knscore__itemsmodel_childevent_callback = cb; }
    inline void setKNSCore__ItemsModel_CustomEvent_Callback(KNSCore__ItemsModel_CustomEvent_Callback cb) { knscore__itemsmodel_customevent_callback = cb; }
    inline void setKNSCore__ItemsModel_ConnectNotify_Callback(KNSCore__ItemsModel_ConnectNotify_Callback cb) { knscore__itemsmodel_connectnotify_callback = cb; }
    inline void setKNSCore__ItemsModel_DisconnectNotify_Callback(KNSCore__ItemsModel_DisconnectNotify_Callback cb) { knscore__itemsmodel_disconnectnotify_callback = cb; }
    inline void setKNSCore__ItemsModel_CreateIndex_Callback(KNSCore__ItemsModel_CreateIndex_Callback cb) { knscore__itemsmodel_createindex_callback = cb; }
    inline void setKNSCore__ItemsModel_EncodeData_Callback(KNSCore__ItemsModel_EncodeData_Callback cb) { knscore__itemsmodel_encodedata_callback = cb; }
    inline void setKNSCore__ItemsModel_DecodeData_Callback(KNSCore__ItemsModel_DecodeData_Callback cb) { knscore__itemsmodel_decodedata_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginInsertRows_Callback(KNSCore__ItemsModel_BeginInsertRows_Callback cb) { knscore__itemsmodel_begininsertrows_callback = cb; }
    inline void setKNSCore__ItemsModel_EndInsertRows_Callback(KNSCore__ItemsModel_EndInsertRows_Callback cb) { knscore__itemsmodel_endinsertrows_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginRemoveRows_Callback(KNSCore__ItemsModel_BeginRemoveRows_Callback cb) { knscore__itemsmodel_beginremoverows_callback = cb; }
    inline void setKNSCore__ItemsModel_EndRemoveRows_Callback(KNSCore__ItemsModel_EndRemoveRows_Callback cb) { knscore__itemsmodel_endremoverows_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginMoveRows_Callback(KNSCore__ItemsModel_BeginMoveRows_Callback cb) { knscore__itemsmodel_beginmoverows_callback = cb; }
    inline void setKNSCore__ItemsModel_EndMoveRows_Callback(KNSCore__ItemsModel_EndMoveRows_Callback cb) { knscore__itemsmodel_endmoverows_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginInsertColumns_Callback(KNSCore__ItemsModel_BeginInsertColumns_Callback cb) { knscore__itemsmodel_begininsertcolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_EndInsertColumns_Callback(KNSCore__ItemsModel_EndInsertColumns_Callback cb) { knscore__itemsmodel_endinsertcolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginRemoveColumns_Callback(KNSCore__ItemsModel_BeginRemoveColumns_Callback cb) { knscore__itemsmodel_beginremovecolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_EndRemoveColumns_Callback(KNSCore__ItemsModel_EndRemoveColumns_Callback cb) { knscore__itemsmodel_endremovecolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginMoveColumns_Callback(KNSCore__ItemsModel_BeginMoveColumns_Callback cb) { knscore__itemsmodel_beginmovecolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_EndMoveColumns_Callback(KNSCore__ItemsModel_EndMoveColumns_Callback cb) { knscore__itemsmodel_endmovecolumns_callback = cb; }
    inline void setKNSCore__ItemsModel_BeginResetModel_Callback(KNSCore__ItemsModel_BeginResetModel_Callback cb) { knscore__itemsmodel_beginresetmodel_callback = cb; }
    inline void setKNSCore__ItemsModel_EndResetModel_Callback(KNSCore__ItemsModel_EndResetModel_Callback cb) { knscore__itemsmodel_endresetmodel_callback = cb; }
    inline void setKNSCore__ItemsModel_ChangePersistentIndex_Callback(KNSCore__ItemsModel_ChangePersistentIndex_Callback cb) { knscore__itemsmodel_changepersistentindex_callback = cb; }
    inline void setKNSCore__ItemsModel_ChangePersistentIndexList_Callback(KNSCore__ItemsModel_ChangePersistentIndexList_Callback cb) { knscore__itemsmodel_changepersistentindexlist_callback = cb; }
    inline void setKNSCore__ItemsModel_PersistentIndexList_Callback(KNSCore__ItemsModel_PersistentIndexList_Callback cb) { knscore__itemsmodel_persistentindexlist_callback = cb; }
    inline void setKNSCore__ItemsModel_Sender_Callback(KNSCore__ItemsModel_Sender_Callback cb) { knscore__itemsmodel_sender_callback = cb; }
    inline void setKNSCore__ItemsModel_SenderSignalIndex_Callback(KNSCore__ItemsModel_SenderSignalIndex_Callback cb) { knscore__itemsmodel_sendersignalindex_callback = cb; }
    inline void setKNSCore__ItemsModel_Receivers_Callback(KNSCore__ItemsModel_Receivers_Callback cb) { knscore__itemsmodel_receivers_callback = cb; }
    inline void setKNSCore__ItemsModel_IsSignalConnected_Callback(KNSCore__ItemsModel_IsSignalConnected_Callback cb) { knscore__itemsmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSCore__ItemsModel_Metacall_IsBase(bool value) const { knscore__itemsmodel_metacall_isbase = value; }
    inline void setKNSCore__ItemsModel_RowCount_IsBase(bool value) const { knscore__itemsmodel_rowcount_isbase = value; }
    inline void setKNSCore__ItemsModel_Data_IsBase(bool value) const { knscore__itemsmodel_data_isbase = value; }
    inline void setKNSCore__ItemsModel_Index_IsBase(bool value) const { knscore__itemsmodel_index_isbase = value; }
    inline void setKNSCore__ItemsModel_Sibling_IsBase(bool value) const { knscore__itemsmodel_sibling_isbase = value; }
    inline void setKNSCore__ItemsModel_DropMimeData_IsBase(bool value) const { knscore__itemsmodel_dropmimedata_isbase = value; }
    inline void setKNSCore__ItemsModel_Flags_IsBase(bool value) const { knscore__itemsmodel_flags_isbase = value; }
    inline void setKNSCore__ItemsModel_SetData_IsBase(bool value) const { knscore__itemsmodel_setdata_isbase = value; }
    inline void setKNSCore__ItemsModel_HeaderData_IsBase(bool value) const { knscore__itemsmodel_headerdata_isbase = value; }
    inline void setKNSCore__ItemsModel_SetHeaderData_IsBase(bool value) const { knscore__itemsmodel_setheaderdata_isbase = value; }
    inline void setKNSCore__ItemsModel_ItemData_IsBase(bool value) const { knscore__itemsmodel_itemdata_isbase = value; }
    inline void setKNSCore__ItemsModel_SetItemData_IsBase(bool value) const { knscore__itemsmodel_setitemdata_isbase = value; }
    inline void setKNSCore__ItemsModel_ClearItemData_IsBase(bool value) const { knscore__itemsmodel_clearitemdata_isbase = value; }
    inline void setKNSCore__ItemsModel_MimeTypes_IsBase(bool value) const { knscore__itemsmodel_mimetypes_isbase = value; }
    inline void setKNSCore__ItemsModel_MimeData_IsBase(bool value) const { knscore__itemsmodel_mimedata_isbase = value; }
    inline void setKNSCore__ItemsModel_CanDropMimeData_IsBase(bool value) const { knscore__itemsmodel_candropmimedata_isbase = value; }
    inline void setKNSCore__ItemsModel_SupportedDropActions_IsBase(bool value) const { knscore__itemsmodel_supporteddropactions_isbase = value; }
    inline void setKNSCore__ItemsModel_SupportedDragActions_IsBase(bool value) const { knscore__itemsmodel_supporteddragactions_isbase = value; }
    inline void setKNSCore__ItemsModel_InsertRows_IsBase(bool value) const { knscore__itemsmodel_insertrows_isbase = value; }
    inline void setKNSCore__ItemsModel_InsertColumns_IsBase(bool value) const { knscore__itemsmodel_insertcolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_RemoveRows_IsBase(bool value) const { knscore__itemsmodel_removerows_isbase = value; }
    inline void setKNSCore__ItemsModel_RemoveColumns_IsBase(bool value) const { knscore__itemsmodel_removecolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_MoveRows_IsBase(bool value) const { knscore__itemsmodel_moverows_isbase = value; }
    inline void setKNSCore__ItemsModel_MoveColumns_IsBase(bool value) const { knscore__itemsmodel_movecolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_FetchMore_IsBase(bool value) const { knscore__itemsmodel_fetchmore_isbase = value; }
    inline void setKNSCore__ItemsModel_CanFetchMore_IsBase(bool value) const { knscore__itemsmodel_canfetchmore_isbase = value; }
    inline void setKNSCore__ItemsModel_Sort_IsBase(bool value) const { knscore__itemsmodel_sort_isbase = value; }
    inline void setKNSCore__ItemsModel_Buddy_IsBase(bool value) const { knscore__itemsmodel_buddy_isbase = value; }
    inline void setKNSCore__ItemsModel_Match_IsBase(bool value) const { knscore__itemsmodel_match_isbase = value; }
    inline void setKNSCore__ItemsModel_Span_IsBase(bool value) const { knscore__itemsmodel_span_isbase = value; }
    inline void setKNSCore__ItemsModel_RoleNames_IsBase(bool value) const { knscore__itemsmodel_rolenames_isbase = value; }
    inline void setKNSCore__ItemsModel_MultiData_IsBase(bool value) const { knscore__itemsmodel_multidata_isbase = value; }
    inline void setKNSCore__ItemsModel_Submit_IsBase(bool value) const { knscore__itemsmodel_submit_isbase = value; }
    inline void setKNSCore__ItemsModel_Revert_IsBase(bool value) const { knscore__itemsmodel_revert_isbase = value; }
    inline void setKNSCore__ItemsModel_ResetInternalData_IsBase(bool value) const { knscore__itemsmodel_resetinternaldata_isbase = value; }
    inline void setKNSCore__ItemsModel_Event_IsBase(bool value) const { knscore__itemsmodel_event_isbase = value; }
    inline void setKNSCore__ItemsModel_EventFilter_IsBase(bool value) const { knscore__itemsmodel_eventfilter_isbase = value; }
    inline void setKNSCore__ItemsModel_TimerEvent_IsBase(bool value) const { knscore__itemsmodel_timerevent_isbase = value; }
    inline void setKNSCore__ItemsModel_ChildEvent_IsBase(bool value) const { knscore__itemsmodel_childevent_isbase = value; }
    inline void setKNSCore__ItemsModel_CustomEvent_IsBase(bool value) const { knscore__itemsmodel_customevent_isbase = value; }
    inline void setKNSCore__ItemsModel_ConnectNotify_IsBase(bool value) const { knscore__itemsmodel_connectnotify_isbase = value; }
    inline void setKNSCore__ItemsModel_DisconnectNotify_IsBase(bool value) const { knscore__itemsmodel_disconnectnotify_isbase = value; }
    inline void setKNSCore__ItemsModel_CreateIndex_IsBase(bool value) const { knscore__itemsmodel_createindex_isbase = value; }
    inline void setKNSCore__ItemsModel_EncodeData_IsBase(bool value) const { knscore__itemsmodel_encodedata_isbase = value; }
    inline void setKNSCore__ItemsModel_DecodeData_IsBase(bool value) const { knscore__itemsmodel_decodedata_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginInsertRows_IsBase(bool value) const { knscore__itemsmodel_begininsertrows_isbase = value; }
    inline void setKNSCore__ItemsModel_EndInsertRows_IsBase(bool value) const { knscore__itemsmodel_endinsertrows_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginRemoveRows_IsBase(bool value) const { knscore__itemsmodel_beginremoverows_isbase = value; }
    inline void setKNSCore__ItemsModel_EndRemoveRows_IsBase(bool value) const { knscore__itemsmodel_endremoverows_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginMoveRows_IsBase(bool value) const { knscore__itemsmodel_beginmoverows_isbase = value; }
    inline void setKNSCore__ItemsModel_EndMoveRows_IsBase(bool value) const { knscore__itemsmodel_endmoverows_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginInsertColumns_IsBase(bool value) const { knscore__itemsmodel_begininsertcolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_EndInsertColumns_IsBase(bool value) const { knscore__itemsmodel_endinsertcolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginRemoveColumns_IsBase(bool value) const { knscore__itemsmodel_beginremovecolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_EndRemoveColumns_IsBase(bool value) const { knscore__itemsmodel_endremovecolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginMoveColumns_IsBase(bool value) const { knscore__itemsmodel_beginmovecolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_EndMoveColumns_IsBase(bool value) const { knscore__itemsmodel_endmovecolumns_isbase = value; }
    inline void setKNSCore__ItemsModel_BeginResetModel_IsBase(bool value) const { knscore__itemsmodel_beginresetmodel_isbase = value; }
    inline void setKNSCore__ItemsModel_EndResetModel_IsBase(bool value) const { knscore__itemsmodel_endresetmodel_isbase = value; }
    inline void setKNSCore__ItemsModel_ChangePersistentIndex_IsBase(bool value) const { knscore__itemsmodel_changepersistentindex_isbase = value; }
    inline void setKNSCore__ItemsModel_ChangePersistentIndexList_IsBase(bool value) const { knscore__itemsmodel_changepersistentindexlist_isbase = value; }
    inline void setKNSCore__ItemsModel_PersistentIndexList_IsBase(bool value) const { knscore__itemsmodel_persistentindexlist_isbase = value; }
    inline void setKNSCore__ItemsModel_Sender_IsBase(bool value) const { knscore__itemsmodel_sender_isbase = value; }
    inline void setKNSCore__ItemsModel_SenderSignalIndex_IsBase(bool value) const { knscore__itemsmodel_sendersignalindex_isbase = value; }
    inline void setKNSCore__ItemsModel_Receivers_IsBase(bool value) const { knscore__itemsmodel_receivers_isbase = value; }
    inline void setKNSCore__ItemsModel_IsSignalConnected_IsBase(bool value) const { knscore__itemsmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__itemsmodel_metacall_isbase) {
            knscore__itemsmodel_metacall_isbase = false;
            return KNSCore__ItemsModel::qt_metacall(param1, param2, param3);
        } else if (knscore__itemsmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knscore__itemsmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__ItemsModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (knscore__itemsmodel_rowcount_isbase) {
            knscore__itemsmodel_rowcount_isbase = false;
            return KNSCore__ItemsModel::rowCount(parent);
        } else if (knscore__itemsmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = knscore__itemsmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__ItemsModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (knscore__itemsmodel_data_isbase) {
            knscore__itemsmodel_data_isbase = false;
            return KNSCore__ItemsModel::data(index, role);
        } else if (knscore__itemsmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = knscore__itemsmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (knscore__itemsmodel_index_isbase) {
            knscore__itemsmodel_index_isbase = false;
            return KNSCore__ItemsModel::index(row, column, parent);
        } else if (knscore__itemsmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = knscore__itemsmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (knscore__itemsmodel_sibling_isbase) {
            knscore__itemsmodel_sibling_isbase = false;
            return KNSCore__ItemsModel::sibling(row, column, idx);
        } else if (knscore__itemsmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = knscore__itemsmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (knscore__itemsmodel_dropmimedata_isbase) {
            knscore__itemsmodel_dropmimedata_isbase = false;
            return KNSCore__ItemsModel::dropMimeData(data, action, row, column, parent);
        } else if (knscore__itemsmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (knscore__itemsmodel_flags_isbase) {
            knscore__itemsmodel_flags_isbase = false;
            return KNSCore__ItemsModel::flags(index);
        } else if (knscore__itemsmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = knscore__itemsmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KNSCore__ItemsModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (knscore__itemsmodel_setdata_isbase) {
            knscore__itemsmodel_setdata_isbase = false;
            return KNSCore__ItemsModel::setData(index, value, role);
        } else if (knscore__itemsmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = knscore__itemsmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (knscore__itemsmodel_headerdata_isbase) {
            knscore__itemsmodel_headerdata_isbase = false;
            return KNSCore__ItemsModel::headerData(section, orientation, role);
        } else if (knscore__itemsmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = knscore__itemsmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (knscore__itemsmodel_setheaderdata_isbase) {
            knscore__itemsmodel_setheaderdata_isbase = false;
            return KNSCore__ItemsModel::setHeaderData(section, orientation, value, role);
        } else if (knscore__itemsmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = knscore__itemsmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (knscore__itemsmodel_itemdata_isbase) {
            knscore__itemsmodel_itemdata_isbase = false;
            return KNSCore__ItemsModel::itemData(index);
        } else if (knscore__itemsmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = knscore__itemsmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KNSCore__ItemsModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (knscore__itemsmodel_setitemdata_isbase) {
            knscore__itemsmodel_setitemdata_isbase = false;
            return KNSCore__ItemsModel::setItemData(index, roles);
        } else if (knscore__itemsmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = knscore__itemsmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (knscore__itemsmodel_clearitemdata_isbase) {
            knscore__itemsmodel_clearitemdata_isbase = false;
            return KNSCore__ItemsModel::clearItemData(index);
        } else if (knscore__itemsmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = knscore__itemsmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (knscore__itemsmodel_mimetypes_isbase) {
            knscore__itemsmodel_mimetypes_isbase = false;
            return KNSCore__ItemsModel::mimeTypes();
        } else if (knscore__itemsmodel_mimetypes_callback != nullptr) {
            const char** callback_ret = knscore__itemsmodel_mimetypes_callback();
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
            return KNSCore__ItemsModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (knscore__itemsmodel_mimedata_isbase) {
            knscore__itemsmodel_mimedata_isbase = false;
            return KNSCore__ItemsModel::mimeData(indexes);
        } else if (knscore__itemsmodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = knscore__itemsmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (knscore__itemsmodel_candropmimedata_isbase) {
            knscore__itemsmodel_candropmimedata_isbase = false;
            return KNSCore__ItemsModel::canDropMimeData(data, action, row, column, parent);
        } else if (knscore__itemsmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (knscore__itemsmodel_supporteddropactions_isbase) {
            knscore__itemsmodel_supporteddropactions_isbase = false;
            return KNSCore__ItemsModel::supportedDropActions();
        } else if (knscore__itemsmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = knscore__itemsmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KNSCore__ItemsModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (knscore__itemsmodel_supporteddragactions_isbase) {
            knscore__itemsmodel_supporteddragactions_isbase = false;
            return KNSCore__ItemsModel::supportedDragActions();
        } else if (knscore__itemsmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = knscore__itemsmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KNSCore__ItemsModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_insertrows_isbase) {
            knscore__itemsmodel_insertrows_isbase = false;
            return KNSCore__ItemsModel::insertRows(row, count, parent);
        } else if (knscore__itemsmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_insertcolumns_isbase) {
            knscore__itemsmodel_insertcolumns_isbase = false;
            return KNSCore__ItemsModel::insertColumns(column, count, parent);
        } else if (knscore__itemsmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_removerows_isbase) {
            knscore__itemsmodel_removerows_isbase = false;
            return KNSCore__ItemsModel::removeRows(row, count, parent);
        } else if (knscore__itemsmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_removecolumns_isbase) {
            knscore__itemsmodel_removecolumns_isbase = false;
            return KNSCore__ItemsModel::removeColumns(column, count, parent);
        } else if (knscore__itemsmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__itemsmodel_moverows_isbase) {
            knscore__itemsmodel_moverows_isbase = false;
            return KNSCore__ItemsModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (knscore__itemsmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = knscore__itemsmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__itemsmodel_movecolumns_isbase) {
            knscore__itemsmodel_movecolumns_isbase = false;
            return KNSCore__ItemsModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (knscore__itemsmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = knscore__itemsmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (knscore__itemsmodel_fetchmore_isbase) {
            knscore__itemsmodel_fetchmore_isbase = false;
            KNSCore__ItemsModel::fetchMore(parent);
        } else if (knscore__itemsmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            knscore__itemsmodel_fetchmore_callback(this, cbval1);
        } else {
            KNSCore__ItemsModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (knscore__itemsmodel_canfetchmore_isbase) {
            knscore__itemsmodel_canfetchmore_isbase = false;
            return KNSCore__ItemsModel::canFetchMore(parent);
        } else if (knscore__itemsmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = knscore__itemsmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (knscore__itemsmodel_sort_isbase) {
            knscore__itemsmodel_sort_isbase = false;
            KNSCore__ItemsModel::sort(column, order);
        } else if (knscore__itemsmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            knscore__itemsmodel_sort_callback(this, cbval1, cbval2);
        } else {
            KNSCore__ItemsModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (knscore__itemsmodel_buddy_isbase) {
            knscore__itemsmodel_buddy_isbase = false;
            return KNSCore__ItemsModel::buddy(index);
        } else if (knscore__itemsmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = knscore__itemsmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (knscore__itemsmodel_match_isbase) {
            knscore__itemsmodel_match_isbase = false;
            return KNSCore__ItemsModel::match(start, role, value, hits, flags);
        } else if (knscore__itemsmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = knscore__itemsmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KNSCore__ItemsModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (knscore__itemsmodel_span_isbase) {
            knscore__itemsmodel_span_isbase = false;
            return KNSCore__ItemsModel::span(index);
        } else if (knscore__itemsmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = knscore__itemsmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (knscore__itemsmodel_rolenames_isbase) {
            knscore__itemsmodel_rolenames_isbase = false;
            return KNSCore__ItemsModel::roleNames();
        } else if (knscore__itemsmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = knscore__itemsmodel_rolenames_callback();
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
            return KNSCore__ItemsModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (knscore__itemsmodel_multidata_isbase) {
            knscore__itemsmodel_multidata_isbase = false;
            KNSCore__ItemsModel::multiData(index, roleDataSpan);
        } else if (knscore__itemsmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            knscore__itemsmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KNSCore__ItemsModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (knscore__itemsmodel_submit_isbase) {
            knscore__itemsmodel_submit_isbase = false;
            return KNSCore__ItemsModel::submit();
        } else if (knscore__itemsmodel_submit_callback != nullptr) {
            bool callback_ret = knscore__itemsmodel_submit_callback();
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (knscore__itemsmodel_revert_isbase) {
            knscore__itemsmodel_revert_isbase = false;
            KNSCore__ItemsModel::revert();
        } else if (knscore__itemsmodel_revert_callback != nullptr) {
            knscore__itemsmodel_revert_callback();
        } else {
            KNSCore__ItemsModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (knscore__itemsmodel_resetinternaldata_isbase) {
            knscore__itemsmodel_resetinternaldata_isbase = false;
            KNSCore__ItemsModel::resetInternalData();
        } else if (knscore__itemsmodel_resetinternaldata_callback != nullptr) {
            knscore__itemsmodel_resetinternaldata_callback();
        } else {
            KNSCore__ItemsModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__itemsmodel_event_isbase) {
            knscore__itemsmodel_event_isbase = false;
            return KNSCore__ItemsModel::event(event);
        } else if (knscore__itemsmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knscore__itemsmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__itemsmodel_eventfilter_isbase) {
            knscore__itemsmodel_eventfilter_isbase = false;
            return KNSCore__ItemsModel::eventFilter(watched, event);
        } else if (knscore__itemsmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knscore__itemsmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__itemsmodel_timerevent_isbase) {
            knscore__itemsmodel_timerevent_isbase = false;
            KNSCore__ItemsModel::timerEvent(event);
        } else if (knscore__itemsmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knscore__itemsmodel_timerevent_callback(this, cbval1);
        } else {
            KNSCore__ItemsModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__itemsmodel_childevent_isbase) {
            knscore__itemsmodel_childevent_isbase = false;
            KNSCore__ItemsModel::childEvent(event);
        } else if (knscore__itemsmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knscore__itemsmodel_childevent_callback(this, cbval1);
        } else {
            KNSCore__ItemsModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__itemsmodel_customevent_isbase) {
            knscore__itemsmodel_customevent_isbase = false;
            KNSCore__ItemsModel::customEvent(event);
        } else if (knscore__itemsmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knscore__itemsmodel_customevent_callback(this, cbval1);
        } else {
            KNSCore__ItemsModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__itemsmodel_connectnotify_isbase) {
            knscore__itemsmodel_connectnotify_isbase = false;
            KNSCore__ItemsModel::connectNotify(signal);
        } else if (knscore__itemsmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knscore__itemsmodel_connectnotify_callback(this, cbval1);
        } else {
            KNSCore__ItemsModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__itemsmodel_disconnectnotify_isbase) {
            knscore__itemsmodel_disconnectnotify_isbase = false;
            KNSCore__ItemsModel::disconnectNotify(signal);
        } else if (knscore__itemsmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knscore__itemsmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KNSCore__ItemsModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (knscore__itemsmodel_createindex_isbase) {
            knscore__itemsmodel_createindex_isbase = false;
            return KNSCore__ItemsModel::createIndex(row, column);
        } else if (knscore__itemsmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = knscore__itemsmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KNSCore__ItemsModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (knscore__itemsmodel_encodedata_isbase) {
            knscore__itemsmodel_encodedata_isbase = false;
            KNSCore__ItemsModel::encodeData(indexes, stream);
        } else if (knscore__itemsmodel_encodedata_callback != nullptr) {
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

            knscore__itemsmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KNSCore__ItemsModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (knscore__itemsmodel_decodedata_isbase) {
            knscore__itemsmodel_decodedata_isbase = false;
            return KNSCore__ItemsModel::decodeData(row, column, parent, stream);
        } else if (knscore__itemsmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = knscore__itemsmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (knscore__itemsmodel_begininsertrows_isbase) {
            knscore__itemsmodel_begininsertrows_isbase = false;
            KNSCore__ItemsModel::beginInsertRows(parent, first, last);
        } else if (knscore__itemsmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            knscore__itemsmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KNSCore__ItemsModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (knscore__itemsmodel_endinsertrows_isbase) {
            knscore__itemsmodel_endinsertrows_isbase = false;
            KNSCore__ItemsModel::endInsertRows();
        } else if (knscore__itemsmodel_endinsertrows_callback != nullptr) {
            knscore__itemsmodel_endinsertrows_callback();
        } else {
            KNSCore__ItemsModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (knscore__itemsmodel_beginremoverows_isbase) {
            knscore__itemsmodel_beginremoverows_isbase = false;
            KNSCore__ItemsModel::beginRemoveRows(parent, first, last);
        } else if (knscore__itemsmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            knscore__itemsmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KNSCore__ItemsModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (knscore__itemsmodel_endremoverows_isbase) {
            knscore__itemsmodel_endremoverows_isbase = false;
            KNSCore__ItemsModel::endRemoveRows();
        } else if (knscore__itemsmodel_endremoverows_callback != nullptr) {
            knscore__itemsmodel_endremoverows_callback();
        } else {
            KNSCore__ItemsModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (knscore__itemsmodel_beginmoverows_isbase) {
            knscore__itemsmodel_beginmoverows_isbase = false;
            return KNSCore__ItemsModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (knscore__itemsmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = knscore__itemsmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (knscore__itemsmodel_endmoverows_isbase) {
            knscore__itemsmodel_endmoverows_isbase = false;
            KNSCore__ItemsModel::endMoveRows();
        } else if (knscore__itemsmodel_endmoverows_callback != nullptr) {
            knscore__itemsmodel_endmoverows_callback();
        } else {
            KNSCore__ItemsModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (knscore__itemsmodel_begininsertcolumns_isbase) {
            knscore__itemsmodel_begininsertcolumns_isbase = false;
            KNSCore__ItemsModel::beginInsertColumns(parent, first, last);
        } else if (knscore__itemsmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            knscore__itemsmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KNSCore__ItemsModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (knscore__itemsmodel_endinsertcolumns_isbase) {
            knscore__itemsmodel_endinsertcolumns_isbase = false;
            KNSCore__ItemsModel::endInsertColumns();
        } else if (knscore__itemsmodel_endinsertcolumns_callback != nullptr) {
            knscore__itemsmodel_endinsertcolumns_callback();
        } else {
            KNSCore__ItemsModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (knscore__itemsmodel_beginremovecolumns_isbase) {
            knscore__itemsmodel_beginremovecolumns_isbase = false;
            KNSCore__ItemsModel::beginRemoveColumns(parent, first, last);
        } else if (knscore__itemsmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            knscore__itemsmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KNSCore__ItemsModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (knscore__itemsmodel_endremovecolumns_isbase) {
            knscore__itemsmodel_endremovecolumns_isbase = false;
            KNSCore__ItemsModel::endRemoveColumns();
        } else if (knscore__itemsmodel_endremovecolumns_callback != nullptr) {
            knscore__itemsmodel_endremovecolumns_callback();
        } else {
            KNSCore__ItemsModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (knscore__itemsmodel_beginmovecolumns_isbase) {
            knscore__itemsmodel_beginmovecolumns_isbase = false;
            return KNSCore__ItemsModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (knscore__itemsmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = knscore__itemsmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (knscore__itemsmodel_endmovecolumns_isbase) {
            knscore__itemsmodel_endmovecolumns_isbase = false;
            KNSCore__ItemsModel::endMoveColumns();
        } else if (knscore__itemsmodel_endmovecolumns_callback != nullptr) {
            knscore__itemsmodel_endmovecolumns_callback();
        } else {
            KNSCore__ItemsModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (knscore__itemsmodel_beginresetmodel_isbase) {
            knscore__itemsmodel_beginresetmodel_isbase = false;
            KNSCore__ItemsModel::beginResetModel();
        } else if (knscore__itemsmodel_beginresetmodel_callback != nullptr) {
            knscore__itemsmodel_beginresetmodel_callback();
        } else {
            KNSCore__ItemsModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (knscore__itemsmodel_endresetmodel_isbase) {
            knscore__itemsmodel_endresetmodel_isbase = false;
            KNSCore__ItemsModel::endResetModel();
        } else if (knscore__itemsmodel_endresetmodel_callback != nullptr) {
            knscore__itemsmodel_endresetmodel_callback();
        } else {
            KNSCore__ItemsModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (knscore__itemsmodel_changepersistentindex_isbase) {
            knscore__itemsmodel_changepersistentindex_isbase = false;
            KNSCore__ItemsModel::changePersistentIndex(from, to);
        } else if (knscore__itemsmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            knscore__itemsmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KNSCore__ItemsModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (knscore__itemsmodel_changepersistentindexlist_isbase) {
            knscore__itemsmodel_changepersistentindexlist_isbase = false;
            KNSCore__ItemsModel::changePersistentIndexList(from, to);
        } else if (knscore__itemsmodel_changepersistentindexlist_callback != nullptr) {
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

            knscore__itemsmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KNSCore__ItemsModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (knscore__itemsmodel_persistentindexlist_isbase) {
            knscore__itemsmodel_persistentindexlist_isbase = false;
            return KNSCore__ItemsModel::persistentIndexList();
        } else if (knscore__itemsmodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = knscore__itemsmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KNSCore__ItemsModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knscore__itemsmodel_sender_isbase) {
            knscore__itemsmodel_sender_isbase = false;
            return KNSCore__ItemsModel::sender();
        } else if (knscore__itemsmodel_sender_callback != nullptr) {
            QObject* callback_ret = knscore__itemsmodel_sender_callback();
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knscore__itemsmodel_sendersignalindex_isbase) {
            knscore__itemsmodel_sendersignalindex_isbase = false;
            return KNSCore__ItemsModel::senderSignalIndex();
        } else if (knscore__itemsmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = knscore__itemsmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__ItemsModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knscore__itemsmodel_receivers_isbase) {
            knscore__itemsmodel_receivers_isbase = false;
            return KNSCore__ItemsModel::receivers(signal);
        } else if (knscore__itemsmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knscore__itemsmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__ItemsModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knscore__itemsmodel_issignalconnected_isbase) {
            knscore__itemsmodel_issignalconnected_isbase = false;
            return KNSCore__ItemsModel::isSignalConnected(signal);
        } else if (knscore__itemsmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knscore__itemsmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__ItemsModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNSCore__ItemsModel_ResetInternalData(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseResetInternalData(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_TimerEvent(KNSCore::ItemsModel* self, QTimerEvent* event);
    friend void KNSCore__ItemsModel_QBaseTimerEvent(KNSCore::ItemsModel* self, QTimerEvent* event);
    friend void KNSCore__ItemsModel_ChildEvent(KNSCore::ItemsModel* self, QChildEvent* event);
    friend void KNSCore__ItemsModel_QBaseChildEvent(KNSCore::ItemsModel* self, QChildEvent* event);
    friend void KNSCore__ItemsModel_CustomEvent(KNSCore::ItemsModel* self, QEvent* event);
    friend void KNSCore__ItemsModel_QBaseCustomEvent(KNSCore::ItemsModel* self, QEvent* event);
    friend void KNSCore__ItemsModel_ConnectNotify(KNSCore::ItemsModel* self, const QMetaMethod* signal);
    friend void KNSCore__ItemsModel_QBaseConnectNotify(KNSCore::ItemsModel* self, const QMetaMethod* signal);
    friend void KNSCore__ItemsModel_DisconnectNotify(KNSCore::ItemsModel* self, const QMetaMethod* signal);
    friend void KNSCore__ItemsModel_QBaseDisconnectNotify(KNSCore::ItemsModel* self, const QMetaMethod* signal);
    friend QModelIndex* KNSCore__ItemsModel_CreateIndex(const KNSCore::ItemsModel* self, int row, int column);
    friend QModelIndex* KNSCore__ItemsModel_QBaseCreateIndex(const KNSCore::ItemsModel* self, int row, int column);
    friend void KNSCore__ItemsModel_EncodeData(const KNSCore::ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KNSCore__ItemsModel_QBaseEncodeData(const KNSCore::ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KNSCore__ItemsModel_DecodeData(KNSCore::ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KNSCore__ItemsModel_QBaseDecodeData(KNSCore::ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KNSCore__ItemsModel_BeginInsertRows(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_QBaseBeginInsertRows(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_EndInsertRows(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndInsertRows(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_BeginRemoveRows(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_QBaseBeginRemoveRows(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_EndRemoveRows(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndRemoveRows(KNSCore::ItemsModel* self);
    friend bool KNSCore__ItemsModel_BeginMoveRows(KNSCore::ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KNSCore__ItemsModel_QBaseBeginMoveRows(KNSCore::ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KNSCore__ItemsModel_EndMoveRows(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndMoveRows(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_BeginInsertColumns(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_QBaseBeginInsertColumns(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_EndInsertColumns(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndInsertColumns(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_BeginRemoveColumns(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_QBaseBeginRemoveColumns(KNSCore::ItemsModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ItemsModel_EndRemoveColumns(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndRemoveColumns(KNSCore::ItemsModel* self);
    friend bool KNSCore__ItemsModel_BeginMoveColumns(KNSCore::ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KNSCore__ItemsModel_QBaseBeginMoveColumns(KNSCore::ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KNSCore__ItemsModel_EndMoveColumns(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndMoveColumns(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_BeginResetModel(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseBeginResetModel(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_EndResetModel(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_QBaseEndResetModel(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_ChangePersistentIndex(KNSCore::ItemsModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KNSCore__ItemsModel_QBaseChangePersistentIndex(KNSCore::ItemsModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KNSCore__ItemsModel_ChangePersistentIndexList(KNSCore::ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KNSCore__ItemsModel_QBaseChangePersistentIndexList(KNSCore::ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_PersistentIndexList(const KNSCore::ItemsModel* self);
    friend libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_QBasePersistentIndexList(const KNSCore::ItemsModel* self);
    friend QObject* KNSCore__ItemsModel_Sender(const KNSCore::ItemsModel* self);
    friend QObject* KNSCore__ItemsModel_QBaseSender(const KNSCore::ItemsModel* self);
    friend int KNSCore__ItemsModel_SenderSignalIndex(const KNSCore::ItemsModel* self);
    friend int KNSCore__ItemsModel_QBaseSenderSignalIndex(const KNSCore::ItemsModel* self);
    friend int KNSCore__ItemsModel_Receivers(const KNSCore::ItemsModel* self, const char* signal);
    friend int KNSCore__ItemsModel_QBaseReceivers(const KNSCore::ItemsModel* self, const char* signal);
    friend bool KNSCore__ItemsModel_IsSignalConnected(const KNSCore::ItemsModel* self, const QMetaMethod* signal);
    friend bool KNSCore__ItemsModel_QBaseIsSignalConnected(const KNSCore::ItemsModel* self, const QMetaMethod* signal);
};

#endif
