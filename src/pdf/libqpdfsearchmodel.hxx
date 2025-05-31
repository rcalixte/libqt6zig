#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFSEARCHMODEL_H
#define SRC_PDFC_LIBVIRTUALQPDFSEARCHMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfSearchModel so that we can call protected methods
class VirtualQPdfSearchModel final : public QPdfSearchModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfSearchModel = true;

    // Virtual class public types (including callbacks)
    using QPdfSearchModel_Metacall_Callback = int (*)(QPdfSearchModel*, int, int, void**);
    using QPdfSearchModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QPdfSearchModel_RowCount_Callback = int (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_Data_Callback = QVariant* (*)(const QPdfSearchModel*, QModelIndex*, int);
    using QPdfSearchModel_TimerEvent_Callback = void (*)(QPdfSearchModel*, QTimerEvent*);
    using QPdfSearchModel_Index_Callback = QModelIndex* (*)(const QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_Sibling_Callback = QModelIndex* (*)(const QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_DropMimeData_Callback = bool (*)(QPdfSearchModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfSearchModel_Flags_Callback = int (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_SetData_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, QVariant*, int);
    using QPdfSearchModel_HeaderData_Callback = QVariant* (*)(const QPdfSearchModel*, int, int, int);
    using QPdfSearchModel_SetHeaderData_Callback = bool (*)(QPdfSearchModel*, int, int, QVariant*, int);
    using QPdfSearchModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_SetItemData_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QPdfSearchModel_ClearItemData_Callback = bool (*)(QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QPdfSearchModel_MimeData_Callback = QMimeData* (*)(const QPdfSearchModel*, libqt_list /* of QModelIndex* */);
    using QPdfSearchModel_CanDropMimeData_Callback = bool (*)(const QPdfSearchModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfSearchModel_SupportedDropActions_Callback = int (*)();
    using QPdfSearchModel_SupportedDragActions_Callback = int (*)();
    using QPdfSearchModel_InsertRows_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_InsertColumns_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_RemoveRows_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_RemoveColumns_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_MoveRows_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfSearchModel_MoveColumns_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfSearchModel_FetchMore_Callback = void (*)(QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_CanFetchMore_Callback = bool (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_Sort_Callback = void (*)(QPdfSearchModel*, int, int);
    using QPdfSearchModel_Buddy_Callback = QModelIndex* (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QPdfSearchModel*, QModelIndex*, int, QVariant*, int, int);
    using QPdfSearchModel_Span_Callback = QSize* (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_MultiData_Callback = void (*)(const QPdfSearchModel*, QModelIndex*, QModelRoleDataSpan*);
    using QPdfSearchModel_Submit_Callback = bool (*)();
    using QPdfSearchModel_Revert_Callback = void (*)();
    using QPdfSearchModel_ResetInternalData_Callback = void (*)();
    using QPdfSearchModel_Event_Callback = bool (*)(QPdfSearchModel*, QEvent*);
    using QPdfSearchModel_EventFilter_Callback = bool (*)(QPdfSearchModel*, QObject*, QEvent*);
    using QPdfSearchModel_ChildEvent_Callback = void (*)(QPdfSearchModel*, QChildEvent*);
    using QPdfSearchModel_CustomEvent_Callback = void (*)(QPdfSearchModel*, QEvent*);
    using QPdfSearchModel_ConnectNotify_Callback = void (*)(QPdfSearchModel*, QMetaMethod*);
    using QPdfSearchModel_DisconnectNotify_Callback = void (*)(QPdfSearchModel*, QMetaMethod*);
    using QPdfSearchModel_UpdatePage_Callback = void (*)(QPdfSearchModel*, int);
    using QPdfSearchModel_CreateIndex_Callback = QModelIndex* (*)(const QPdfSearchModel*, int, int);
    using QPdfSearchModel_EncodeData_Callback = void (*)(const QPdfSearchModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QPdfSearchModel_DecodeData_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*, QDataStream*);
    using QPdfSearchModel_BeginInsertRows_Callback = void (*)(QPdfSearchModel*, QModelIndex*, int, int);
    using QPdfSearchModel_EndInsertRows_Callback = void (*)();
    using QPdfSearchModel_BeginRemoveRows_Callback = void (*)(QPdfSearchModel*, QModelIndex*, int, int);
    using QPdfSearchModel_EndRemoveRows_Callback = void (*)();
    using QPdfSearchModel_BeginMoveRows_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfSearchModel_EndMoveRows_Callback = void (*)();
    using QPdfSearchModel_BeginInsertColumns_Callback = void (*)(QPdfSearchModel*, QModelIndex*, int, int);
    using QPdfSearchModel_EndInsertColumns_Callback = void (*)();
    using QPdfSearchModel_BeginRemoveColumns_Callback = void (*)(QPdfSearchModel*, QModelIndex*, int, int);
    using QPdfSearchModel_EndRemoveColumns_Callback = void (*)();
    using QPdfSearchModel_BeginMoveColumns_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfSearchModel_EndMoveColumns_Callback = void (*)();
    using QPdfSearchModel_BeginResetModel_Callback = void (*)();
    using QPdfSearchModel_EndResetModel_Callback = void (*)();
    using QPdfSearchModel_ChangePersistentIndex_Callback = void (*)(QPdfSearchModel*, QModelIndex*, QModelIndex*);
    using QPdfSearchModel_ChangePersistentIndexList_Callback = void (*)(QPdfSearchModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QPdfSearchModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QPdfSearchModel_Sender_Callback = QObject* (*)();
    using QPdfSearchModel_SenderSignalIndex_Callback = int (*)();
    using QPdfSearchModel_Receivers_Callback = int (*)(const QPdfSearchModel*, const char*);
    using QPdfSearchModel_IsSignalConnected_Callback = bool (*)(const QPdfSearchModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPdfSearchModel_Metacall_Callback qpdfsearchmodel_metacall_callback = nullptr;
    QPdfSearchModel_RoleNames_Callback qpdfsearchmodel_rolenames_callback = nullptr;
    QPdfSearchModel_RowCount_Callback qpdfsearchmodel_rowcount_callback = nullptr;
    QPdfSearchModel_Data_Callback qpdfsearchmodel_data_callback = nullptr;
    QPdfSearchModel_TimerEvent_Callback qpdfsearchmodel_timerevent_callback = nullptr;
    QPdfSearchModel_Index_Callback qpdfsearchmodel_index_callback = nullptr;
    QPdfSearchModel_Sibling_Callback qpdfsearchmodel_sibling_callback = nullptr;
    QPdfSearchModel_DropMimeData_Callback qpdfsearchmodel_dropmimedata_callback = nullptr;
    QPdfSearchModel_Flags_Callback qpdfsearchmodel_flags_callback = nullptr;
    QPdfSearchModel_SetData_Callback qpdfsearchmodel_setdata_callback = nullptr;
    QPdfSearchModel_HeaderData_Callback qpdfsearchmodel_headerdata_callback = nullptr;
    QPdfSearchModel_SetHeaderData_Callback qpdfsearchmodel_setheaderdata_callback = nullptr;
    QPdfSearchModel_ItemData_Callback qpdfsearchmodel_itemdata_callback = nullptr;
    QPdfSearchModel_SetItemData_Callback qpdfsearchmodel_setitemdata_callback = nullptr;
    QPdfSearchModel_ClearItemData_Callback qpdfsearchmodel_clearitemdata_callback = nullptr;
    QPdfSearchModel_MimeTypes_Callback qpdfsearchmodel_mimetypes_callback = nullptr;
    QPdfSearchModel_MimeData_Callback qpdfsearchmodel_mimedata_callback = nullptr;
    QPdfSearchModel_CanDropMimeData_Callback qpdfsearchmodel_candropmimedata_callback = nullptr;
    QPdfSearchModel_SupportedDropActions_Callback qpdfsearchmodel_supporteddropactions_callback = nullptr;
    QPdfSearchModel_SupportedDragActions_Callback qpdfsearchmodel_supporteddragactions_callback = nullptr;
    QPdfSearchModel_InsertRows_Callback qpdfsearchmodel_insertrows_callback = nullptr;
    QPdfSearchModel_InsertColumns_Callback qpdfsearchmodel_insertcolumns_callback = nullptr;
    QPdfSearchModel_RemoveRows_Callback qpdfsearchmodel_removerows_callback = nullptr;
    QPdfSearchModel_RemoveColumns_Callback qpdfsearchmodel_removecolumns_callback = nullptr;
    QPdfSearchModel_MoveRows_Callback qpdfsearchmodel_moverows_callback = nullptr;
    QPdfSearchModel_MoveColumns_Callback qpdfsearchmodel_movecolumns_callback = nullptr;
    QPdfSearchModel_FetchMore_Callback qpdfsearchmodel_fetchmore_callback = nullptr;
    QPdfSearchModel_CanFetchMore_Callback qpdfsearchmodel_canfetchmore_callback = nullptr;
    QPdfSearchModel_Sort_Callback qpdfsearchmodel_sort_callback = nullptr;
    QPdfSearchModel_Buddy_Callback qpdfsearchmodel_buddy_callback = nullptr;
    QPdfSearchModel_Match_Callback qpdfsearchmodel_match_callback = nullptr;
    QPdfSearchModel_Span_Callback qpdfsearchmodel_span_callback = nullptr;
    QPdfSearchModel_MultiData_Callback qpdfsearchmodel_multidata_callback = nullptr;
    QPdfSearchModel_Submit_Callback qpdfsearchmodel_submit_callback = nullptr;
    QPdfSearchModel_Revert_Callback qpdfsearchmodel_revert_callback = nullptr;
    QPdfSearchModel_ResetInternalData_Callback qpdfsearchmodel_resetinternaldata_callback = nullptr;
    QPdfSearchModel_Event_Callback qpdfsearchmodel_event_callback = nullptr;
    QPdfSearchModel_EventFilter_Callback qpdfsearchmodel_eventfilter_callback = nullptr;
    QPdfSearchModel_ChildEvent_Callback qpdfsearchmodel_childevent_callback = nullptr;
    QPdfSearchModel_CustomEvent_Callback qpdfsearchmodel_customevent_callback = nullptr;
    QPdfSearchModel_ConnectNotify_Callback qpdfsearchmodel_connectnotify_callback = nullptr;
    QPdfSearchModel_DisconnectNotify_Callback qpdfsearchmodel_disconnectnotify_callback = nullptr;
    QPdfSearchModel_UpdatePage_Callback qpdfsearchmodel_updatepage_callback = nullptr;
    QPdfSearchModel_CreateIndex_Callback qpdfsearchmodel_createindex_callback = nullptr;
    QPdfSearchModel_EncodeData_Callback qpdfsearchmodel_encodedata_callback = nullptr;
    QPdfSearchModel_DecodeData_Callback qpdfsearchmodel_decodedata_callback = nullptr;
    QPdfSearchModel_BeginInsertRows_Callback qpdfsearchmodel_begininsertrows_callback = nullptr;
    QPdfSearchModel_EndInsertRows_Callback qpdfsearchmodel_endinsertrows_callback = nullptr;
    QPdfSearchModel_BeginRemoveRows_Callback qpdfsearchmodel_beginremoverows_callback = nullptr;
    QPdfSearchModel_EndRemoveRows_Callback qpdfsearchmodel_endremoverows_callback = nullptr;
    QPdfSearchModel_BeginMoveRows_Callback qpdfsearchmodel_beginmoverows_callback = nullptr;
    QPdfSearchModel_EndMoveRows_Callback qpdfsearchmodel_endmoverows_callback = nullptr;
    QPdfSearchModel_BeginInsertColumns_Callback qpdfsearchmodel_begininsertcolumns_callback = nullptr;
    QPdfSearchModel_EndInsertColumns_Callback qpdfsearchmodel_endinsertcolumns_callback = nullptr;
    QPdfSearchModel_BeginRemoveColumns_Callback qpdfsearchmodel_beginremovecolumns_callback = nullptr;
    QPdfSearchModel_EndRemoveColumns_Callback qpdfsearchmodel_endremovecolumns_callback = nullptr;
    QPdfSearchModel_BeginMoveColumns_Callback qpdfsearchmodel_beginmovecolumns_callback = nullptr;
    QPdfSearchModel_EndMoveColumns_Callback qpdfsearchmodel_endmovecolumns_callback = nullptr;
    QPdfSearchModel_BeginResetModel_Callback qpdfsearchmodel_beginresetmodel_callback = nullptr;
    QPdfSearchModel_EndResetModel_Callback qpdfsearchmodel_endresetmodel_callback = nullptr;
    QPdfSearchModel_ChangePersistentIndex_Callback qpdfsearchmodel_changepersistentindex_callback = nullptr;
    QPdfSearchModel_ChangePersistentIndexList_Callback qpdfsearchmodel_changepersistentindexlist_callback = nullptr;
    QPdfSearchModel_PersistentIndexList_Callback qpdfsearchmodel_persistentindexlist_callback = nullptr;
    QPdfSearchModel_Sender_Callback qpdfsearchmodel_sender_callback = nullptr;
    QPdfSearchModel_SenderSignalIndex_Callback qpdfsearchmodel_sendersignalindex_callback = nullptr;
    QPdfSearchModel_Receivers_Callback qpdfsearchmodel_receivers_callback = nullptr;
    QPdfSearchModel_IsSignalConnected_Callback qpdfsearchmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfsearchmodel_metacall_isbase = false;
    mutable bool qpdfsearchmodel_rolenames_isbase = false;
    mutable bool qpdfsearchmodel_rowcount_isbase = false;
    mutable bool qpdfsearchmodel_data_isbase = false;
    mutable bool qpdfsearchmodel_timerevent_isbase = false;
    mutable bool qpdfsearchmodel_index_isbase = false;
    mutable bool qpdfsearchmodel_sibling_isbase = false;
    mutable bool qpdfsearchmodel_dropmimedata_isbase = false;
    mutable bool qpdfsearchmodel_flags_isbase = false;
    mutable bool qpdfsearchmodel_setdata_isbase = false;
    mutable bool qpdfsearchmodel_headerdata_isbase = false;
    mutable bool qpdfsearchmodel_setheaderdata_isbase = false;
    mutable bool qpdfsearchmodel_itemdata_isbase = false;
    mutable bool qpdfsearchmodel_setitemdata_isbase = false;
    mutable bool qpdfsearchmodel_clearitemdata_isbase = false;
    mutable bool qpdfsearchmodel_mimetypes_isbase = false;
    mutable bool qpdfsearchmodel_mimedata_isbase = false;
    mutable bool qpdfsearchmodel_candropmimedata_isbase = false;
    mutable bool qpdfsearchmodel_supporteddropactions_isbase = false;
    mutable bool qpdfsearchmodel_supporteddragactions_isbase = false;
    mutable bool qpdfsearchmodel_insertrows_isbase = false;
    mutable bool qpdfsearchmodel_insertcolumns_isbase = false;
    mutable bool qpdfsearchmodel_removerows_isbase = false;
    mutable bool qpdfsearchmodel_removecolumns_isbase = false;
    mutable bool qpdfsearchmodel_moverows_isbase = false;
    mutable bool qpdfsearchmodel_movecolumns_isbase = false;
    mutable bool qpdfsearchmodel_fetchmore_isbase = false;
    mutable bool qpdfsearchmodel_canfetchmore_isbase = false;
    mutable bool qpdfsearchmodel_sort_isbase = false;
    mutable bool qpdfsearchmodel_buddy_isbase = false;
    mutable bool qpdfsearchmodel_match_isbase = false;
    mutable bool qpdfsearchmodel_span_isbase = false;
    mutable bool qpdfsearchmodel_multidata_isbase = false;
    mutable bool qpdfsearchmodel_submit_isbase = false;
    mutable bool qpdfsearchmodel_revert_isbase = false;
    mutable bool qpdfsearchmodel_resetinternaldata_isbase = false;
    mutable bool qpdfsearchmodel_event_isbase = false;
    mutable bool qpdfsearchmodel_eventfilter_isbase = false;
    mutable bool qpdfsearchmodel_childevent_isbase = false;
    mutable bool qpdfsearchmodel_customevent_isbase = false;
    mutable bool qpdfsearchmodel_connectnotify_isbase = false;
    mutable bool qpdfsearchmodel_disconnectnotify_isbase = false;
    mutable bool qpdfsearchmodel_updatepage_isbase = false;
    mutable bool qpdfsearchmodel_createindex_isbase = false;
    mutable bool qpdfsearchmodel_encodedata_isbase = false;
    mutable bool qpdfsearchmodel_decodedata_isbase = false;
    mutable bool qpdfsearchmodel_begininsertrows_isbase = false;
    mutable bool qpdfsearchmodel_endinsertrows_isbase = false;
    mutable bool qpdfsearchmodel_beginremoverows_isbase = false;
    mutable bool qpdfsearchmodel_endremoverows_isbase = false;
    mutable bool qpdfsearchmodel_beginmoverows_isbase = false;
    mutable bool qpdfsearchmodel_endmoverows_isbase = false;
    mutable bool qpdfsearchmodel_begininsertcolumns_isbase = false;
    mutable bool qpdfsearchmodel_endinsertcolumns_isbase = false;
    mutable bool qpdfsearchmodel_beginremovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_endremovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_beginmovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_endmovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_beginresetmodel_isbase = false;
    mutable bool qpdfsearchmodel_endresetmodel_isbase = false;
    mutable bool qpdfsearchmodel_changepersistentindex_isbase = false;
    mutable bool qpdfsearchmodel_changepersistentindexlist_isbase = false;
    mutable bool qpdfsearchmodel_persistentindexlist_isbase = false;
    mutable bool qpdfsearchmodel_sender_isbase = false;
    mutable bool qpdfsearchmodel_sendersignalindex_isbase = false;
    mutable bool qpdfsearchmodel_receivers_isbase = false;
    mutable bool qpdfsearchmodel_issignalconnected_isbase = false;

  public:
    VirtualQPdfSearchModel() : QPdfSearchModel(){};
    VirtualQPdfSearchModel(QObject* parent) : QPdfSearchModel(parent){};

    ~VirtualQPdfSearchModel() {
        qpdfsearchmodel_metacall_callback = nullptr;
        qpdfsearchmodel_rolenames_callback = nullptr;
        qpdfsearchmodel_rowcount_callback = nullptr;
        qpdfsearchmodel_data_callback = nullptr;
        qpdfsearchmodel_timerevent_callback = nullptr;
        qpdfsearchmodel_index_callback = nullptr;
        qpdfsearchmodel_sibling_callback = nullptr;
        qpdfsearchmodel_dropmimedata_callback = nullptr;
        qpdfsearchmodel_flags_callback = nullptr;
        qpdfsearchmodel_setdata_callback = nullptr;
        qpdfsearchmodel_headerdata_callback = nullptr;
        qpdfsearchmodel_setheaderdata_callback = nullptr;
        qpdfsearchmodel_itemdata_callback = nullptr;
        qpdfsearchmodel_setitemdata_callback = nullptr;
        qpdfsearchmodel_clearitemdata_callback = nullptr;
        qpdfsearchmodel_mimetypes_callback = nullptr;
        qpdfsearchmodel_mimedata_callback = nullptr;
        qpdfsearchmodel_candropmimedata_callback = nullptr;
        qpdfsearchmodel_supporteddropactions_callback = nullptr;
        qpdfsearchmodel_supporteddragactions_callback = nullptr;
        qpdfsearchmodel_insertrows_callback = nullptr;
        qpdfsearchmodel_insertcolumns_callback = nullptr;
        qpdfsearchmodel_removerows_callback = nullptr;
        qpdfsearchmodel_removecolumns_callback = nullptr;
        qpdfsearchmodel_moverows_callback = nullptr;
        qpdfsearchmodel_movecolumns_callback = nullptr;
        qpdfsearchmodel_fetchmore_callback = nullptr;
        qpdfsearchmodel_canfetchmore_callback = nullptr;
        qpdfsearchmodel_sort_callback = nullptr;
        qpdfsearchmodel_buddy_callback = nullptr;
        qpdfsearchmodel_match_callback = nullptr;
        qpdfsearchmodel_span_callback = nullptr;
        qpdfsearchmodel_multidata_callback = nullptr;
        qpdfsearchmodel_submit_callback = nullptr;
        qpdfsearchmodel_revert_callback = nullptr;
        qpdfsearchmodel_resetinternaldata_callback = nullptr;
        qpdfsearchmodel_event_callback = nullptr;
        qpdfsearchmodel_eventfilter_callback = nullptr;
        qpdfsearchmodel_childevent_callback = nullptr;
        qpdfsearchmodel_customevent_callback = nullptr;
        qpdfsearchmodel_connectnotify_callback = nullptr;
        qpdfsearchmodel_disconnectnotify_callback = nullptr;
        qpdfsearchmodel_updatepage_callback = nullptr;
        qpdfsearchmodel_createindex_callback = nullptr;
        qpdfsearchmodel_encodedata_callback = nullptr;
        qpdfsearchmodel_decodedata_callback = nullptr;
        qpdfsearchmodel_begininsertrows_callback = nullptr;
        qpdfsearchmodel_endinsertrows_callback = nullptr;
        qpdfsearchmodel_beginremoverows_callback = nullptr;
        qpdfsearchmodel_endremoverows_callback = nullptr;
        qpdfsearchmodel_beginmoverows_callback = nullptr;
        qpdfsearchmodel_endmoverows_callback = nullptr;
        qpdfsearchmodel_begininsertcolumns_callback = nullptr;
        qpdfsearchmodel_endinsertcolumns_callback = nullptr;
        qpdfsearchmodel_beginremovecolumns_callback = nullptr;
        qpdfsearchmodel_endremovecolumns_callback = nullptr;
        qpdfsearchmodel_beginmovecolumns_callback = nullptr;
        qpdfsearchmodel_endmovecolumns_callback = nullptr;
        qpdfsearchmodel_beginresetmodel_callback = nullptr;
        qpdfsearchmodel_endresetmodel_callback = nullptr;
        qpdfsearchmodel_changepersistentindex_callback = nullptr;
        qpdfsearchmodel_changepersistentindexlist_callback = nullptr;
        qpdfsearchmodel_persistentindexlist_callback = nullptr;
        qpdfsearchmodel_sender_callback = nullptr;
        qpdfsearchmodel_sendersignalindex_callback = nullptr;
        qpdfsearchmodel_receivers_callback = nullptr;
        qpdfsearchmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPdfSearchModel_Metacall_Callback(QPdfSearchModel_Metacall_Callback cb) { qpdfsearchmodel_metacall_callback = cb; }
    inline void setQPdfSearchModel_RoleNames_Callback(QPdfSearchModel_RoleNames_Callback cb) { qpdfsearchmodel_rolenames_callback = cb; }
    inline void setQPdfSearchModel_RowCount_Callback(QPdfSearchModel_RowCount_Callback cb) { qpdfsearchmodel_rowcount_callback = cb; }
    inline void setQPdfSearchModel_Data_Callback(QPdfSearchModel_Data_Callback cb) { qpdfsearchmodel_data_callback = cb; }
    inline void setQPdfSearchModel_TimerEvent_Callback(QPdfSearchModel_TimerEvent_Callback cb) { qpdfsearchmodel_timerevent_callback = cb; }
    inline void setQPdfSearchModel_Index_Callback(QPdfSearchModel_Index_Callback cb) { qpdfsearchmodel_index_callback = cb; }
    inline void setQPdfSearchModel_Sibling_Callback(QPdfSearchModel_Sibling_Callback cb) { qpdfsearchmodel_sibling_callback = cb; }
    inline void setQPdfSearchModel_DropMimeData_Callback(QPdfSearchModel_DropMimeData_Callback cb) { qpdfsearchmodel_dropmimedata_callback = cb; }
    inline void setQPdfSearchModel_Flags_Callback(QPdfSearchModel_Flags_Callback cb) { qpdfsearchmodel_flags_callback = cb; }
    inline void setQPdfSearchModel_SetData_Callback(QPdfSearchModel_SetData_Callback cb) { qpdfsearchmodel_setdata_callback = cb; }
    inline void setQPdfSearchModel_HeaderData_Callback(QPdfSearchModel_HeaderData_Callback cb) { qpdfsearchmodel_headerdata_callback = cb; }
    inline void setQPdfSearchModel_SetHeaderData_Callback(QPdfSearchModel_SetHeaderData_Callback cb) { qpdfsearchmodel_setheaderdata_callback = cb; }
    inline void setQPdfSearchModel_ItemData_Callback(QPdfSearchModel_ItemData_Callback cb) { qpdfsearchmodel_itemdata_callback = cb; }
    inline void setQPdfSearchModel_SetItemData_Callback(QPdfSearchModel_SetItemData_Callback cb) { qpdfsearchmodel_setitemdata_callback = cb; }
    inline void setQPdfSearchModel_ClearItemData_Callback(QPdfSearchModel_ClearItemData_Callback cb) { qpdfsearchmodel_clearitemdata_callback = cb; }
    inline void setQPdfSearchModel_MimeTypes_Callback(QPdfSearchModel_MimeTypes_Callback cb) { qpdfsearchmodel_mimetypes_callback = cb; }
    inline void setQPdfSearchModel_MimeData_Callback(QPdfSearchModel_MimeData_Callback cb) { qpdfsearchmodel_mimedata_callback = cb; }
    inline void setQPdfSearchModel_CanDropMimeData_Callback(QPdfSearchModel_CanDropMimeData_Callback cb) { qpdfsearchmodel_candropmimedata_callback = cb; }
    inline void setQPdfSearchModel_SupportedDropActions_Callback(QPdfSearchModel_SupportedDropActions_Callback cb) { qpdfsearchmodel_supporteddropactions_callback = cb; }
    inline void setQPdfSearchModel_SupportedDragActions_Callback(QPdfSearchModel_SupportedDragActions_Callback cb) { qpdfsearchmodel_supporteddragactions_callback = cb; }
    inline void setQPdfSearchModel_InsertRows_Callback(QPdfSearchModel_InsertRows_Callback cb) { qpdfsearchmodel_insertrows_callback = cb; }
    inline void setQPdfSearchModel_InsertColumns_Callback(QPdfSearchModel_InsertColumns_Callback cb) { qpdfsearchmodel_insertcolumns_callback = cb; }
    inline void setQPdfSearchModel_RemoveRows_Callback(QPdfSearchModel_RemoveRows_Callback cb) { qpdfsearchmodel_removerows_callback = cb; }
    inline void setQPdfSearchModel_RemoveColumns_Callback(QPdfSearchModel_RemoveColumns_Callback cb) { qpdfsearchmodel_removecolumns_callback = cb; }
    inline void setQPdfSearchModel_MoveRows_Callback(QPdfSearchModel_MoveRows_Callback cb) { qpdfsearchmodel_moverows_callback = cb; }
    inline void setQPdfSearchModel_MoveColumns_Callback(QPdfSearchModel_MoveColumns_Callback cb) { qpdfsearchmodel_movecolumns_callback = cb; }
    inline void setQPdfSearchModel_FetchMore_Callback(QPdfSearchModel_FetchMore_Callback cb) { qpdfsearchmodel_fetchmore_callback = cb; }
    inline void setQPdfSearchModel_CanFetchMore_Callback(QPdfSearchModel_CanFetchMore_Callback cb) { qpdfsearchmodel_canfetchmore_callback = cb; }
    inline void setQPdfSearchModel_Sort_Callback(QPdfSearchModel_Sort_Callback cb) { qpdfsearchmodel_sort_callback = cb; }
    inline void setQPdfSearchModel_Buddy_Callback(QPdfSearchModel_Buddy_Callback cb) { qpdfsearchmodel_buddy_callback = cb; }
    inline void setQPdfSearchModel_Match_Callback(QPdfSearchModel_Match_Callback cb) { qpdfsearchmodel_match_callback = cb; }
    inline void setQPdfSearchModel_Span_Callback(QPdfSearchModel_Span_Callback cb) { qpdfsearchmodel_span_callback = cb; }
    inline void setQPdfSearchModel_MultiData_Callback(QPdfSearchModel_MultiData_Callback cb) { qpdfsearchmodel_multidata_callback = cb; }
    inline void setQPdfSearchModel_Submit_Callback(QPdfSearchModel_Submit_Callback cb) { qpdfsearchmodel_submit_callback = cb; }
    inline void setQPdfSearchModel_Revert_Callback(QPdfSearchModel_Revert_Callback cb) { qpdfsearchmodel_revert_callback = cb; }
    inline void setQPdfSearchModel_ResetInternalData_Callback(QPdfSearchModel_ResetInternalData_Callback cb) { qpdfsearchmodel_resetinternaldata_callback = cb; }
    inline void setQPdfSearchModel_Event_Callback(QPdfSearchModel_Event_Callback cb) { qpdfsearchmodel_event_callback = cb; }
    inline void setQPdfSearchModel_EventFilter_Callback(QPdfSearchModel_EventFilter_Callback cb) { qpdfsearchmodel_eventfilter_callback = cb; }
    inline void setQPdfSearchModel_ChildEvent_Callback(QPdfSearchModel_ChildEvent_Callback cb) { qpdfsearchmodel_childevent_callback = cb; }
    inline void setQPdfSearchModel_CustomEvent_Callback(QPdfSearchModel_CustomEvent_Callback cb) { qpdfsearchmodel_customevent_callback = cb; }
    inline void setQPdfSearchModel_ConnectNotify_Callback(QPdfSearchModel_ConnectNotify_Callback cb) { qpdfsearchmodel_connectnotify_callback = cb; }
    inline void setQPdfSearchModel_DisconnectNotify_Callback(QPdfSearchModel_DisconnectNotify_Callback cb) { qpdfsearchmodel_disconnectnotify_callback = cb; }
    inline void setQPdfSearchModel_UpdatePage_Callback(QPdfSearchModel_UpdatePage_Callback cb) { qpdfsearchmodel_updatepage_callback = cb; }
    inline void setQPdfSearchModel_CreateIndex_Callback(QPdfSearchModel_CreateIndex_Callback cb) { qpdfsearchmodel_createindex_callback = cb; }
    inline void setQPdfSearchModel_EncodeData_Callback(QPdfSearchModel_EncodeData_Callback cb) { qpdfsearchmodel_encodedata_callback = cb; }
    inline void setQPdfSearchModel_DecodeData_Callback(QPdfSearchModel_DecodeData_Callback cb) { qpdfsearchmodel_decodedata_callback = cb; }
    inline void setQPdfSearchModel_BeginInsertRows_Callback(QPdfSearchModel_BeginInsertRows_Callback cb) { qpdfsearchmodel_begininsertrows_callback = cb; }
    inline void setQPdfSearchModel_EndInsertRows_Callback(QPdfSearchModel_EndInsertRows_Callback cb) { qpdfsearchmodel_endinsertrows_callback = cb; }
    inline void setQPdfSearchModel_BeginRemoveRows_Callback(QPdfSearchModel_BeginRemoveRows_Callback cb) { qpdfsearchmodel_beginremoverows_callback = cb; }
    inline void setQPdfSearchModel_EndRemoveRows_Callback(QPdfSearchModel_EndRemoveRows_Callback cb) { qpdfsearchmodel_endremoverows_callback = cb; }
    inline void setQPdfSearchModel_BeginMoveRows_Callback(QPdfSearchModel_BeginMoveRows_Callback cb) { qpdfsearchmodel_beginmoverows_callback = cb; }
    inline void setQPdfSearchModel_EndMoveRows_Callback(QPdfSearchModel_EndMoveRows_Callback cb) { qpdfsearchmodel_endmoverows_callback = cb; }
    inline void setQPdfSearchModel_BeginInsertColumns_Callback(QPdfSearchModel_BeginInsertColumns_Callback cb) { qpdfsearchmodel_begininsertcolumns_callback = cb; }
    inline void setQPdfSearchModel_EndInsertColumns_Callback(QPdfSearchModel_EndInsertColumns_Callback cb) { qpdfsearchmodel_endinsertcolumns_callback = cb; }
    inline void setQPdfSearchModel_BeginRemoveColumns_Callback(QPdfSearchModel_BeginRemoveColumns_Callback cb) { qpdfsearchmodel_beginremovecolumns_callback = cb; }
    inline void setQPdfSearchModel_EndRemoveColumns_Callback(QPdfSearchModel_EndRemoveColumns_Callback cb) { qpdfsearchmodel_endremovecolumns_callback = cb; }
    inline void setQPdfSearchModel_BeginMoveColumns_Callback(QPdfSearchModel_BeginMoveColumns_Callback cb) { qpdfsearchmodel_beginmovecolumns_callback = cb; }
    inline void setQPdfSearchModel_EndMoveColumns_Callback(QPdfSearchModel_EndMoveColumns_Callback cb) { qpdfsearchmodel_endmovecolumns_callback = cb; }
    inline void setQPdfSearchModel_BeginResetModel_Callback(QPdfSearchModel_BeginResetModel_Callback cb) { qpdfsearchmodel_beginresetmodel_callback = cb; }
    inline void setQPdfSearchModel_EndResetModel_Callback(QPdfSearchModel_EndResetModel_Callback cb) { qpdfsearchmodel_endresetmodel_callback = cb; }
    inline void setQPdfSearchModel_ChangePersistentIndex_Callback(QPdfSearchModel_ChangePersistentIndex_Callback cb) { qpdfsearchmodel_changepersistentindex_callback = cb; }
    inline void setQPdfSearchModel_ChangePersistentIndexList_Callback(QPdfSearchModel_ChangePersistentIndexList_Callback cb) { qpdfsearchmodel_changepersistentindexlist_callback = cb; }
    inline void setQPdfSearchModel_PersistentIndexList_Callback(QPdfSearchModel_PersistentIndexList_Callback cb) { qpdfsearchmodel_persistentindexlist_callback = cb; }
    inline void setQPdfSearchModel_Sender_Callback(QPdfSearchModel_Sender_Callback cb) { qpdfsearchmodel_sender_callback = cb; }
    inline void setQPdfSearchModel_SenderSignalIndex_Callback(QPdfSearchModel_SenderSignalIndex_Callback cb) { qpdfsearchmodel_sendersignalindex_callback = cb; }
    inline void setQPdfSearchModel_Receivers_Callback(QPdfSearchModel_Receivers_Callback cb) { qpdfsearchmodel_receivers_callback = cb; }
    inline void setQPdfSearchModel_IsSignalConnected_Callback(QPdfSearchModel_IsSignalConnected_Callback cb) { qpdfsearchmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPdfSearchModel_Metacall_IsBase(bool value) const { qpdfsearchmodel_metacall_isbase = value; }
    inline void setQPdfSearchModel_RoleNames_IsBase(bool value) const { qpdfsearchmodel_rolenames_isbase = value; }
    inline void setQPdfSearchModel_RowCount_IsBase(bool value) const { qpdfsearchmodel_rowcount_isbase = value; }
    inline void setQPdfSearchModel_Data_IsBase(bool value) const { qpdfsearchmodel_data_isbase = value; }
    inline void setQPdfSearchModel_TimerEvent_IsBase(bool value) const { qpdfsearchmodel_timerevent_isbase = value; }
    inline void setQPdfSearchModel_Index_IsBase(bool value) const { qpdfsearchmodel_index_isbase = value; }
    inline void setQPdfSearchModel_Sibling_IsBase(bool value) const { qpdfsearchmodel_sibling_isbase = value; }
    inline void setQPdfSearchModel_DropMimeData_IsBase(bool value) const { qpdfsearchmodel_dropmimedata_isbase = value; }
    inline void setQPdfSearchModel_Flags_IsBase(bool value) const { qpdfsearchmodel_flags_isbase = value; }
    inline void setQPdfSearchModel_SetData_IsBase(bool value) const { qpdfsearchmodel_setdata_isbase = value; }
    inline void setQPdfSearchModel_HeaderData_IsBase(bool value) const { qpdfsearchmodel_headerdata_isbase = value; }
    inline void setQPdfSearchModel_SetHeaderData_IsBase(bool value) const { qpdfsearchmodel_setheaderdata_isbase = value; }
    inline void setQPdfSearchModel_ItemData_IsBase(bool value) const { qpdfsearchmodel_itemdata_isbase = value; }
    inline void setQPdfSearchModel_SetItemData_IsBase(bool value) const { qpdfsearchmodel_setitemdata_isbase = value; }
    inline void setQPdfSearchModel_ClearItemData_IsBase(bool value) const { qpdfsearchmodel_clearitemdata_isbase = value; }
    inline void setQPdfSearchModel_MimeTypes_IsBase(bool value) const { qpdfsearchmodel_mimetypes_isbase = value; }
    inline void setQPdfSearchModel_MimeData_IsBase(bool value) const { qpdfsearchmodel_mimedata_isbase = value; }
    inline void setQPdfSearchModel_CanDropMimeData_IsBase(bool value) const { qpdfsearchmodel_candropmimedata_isbase = value; }
    inline void setQPdfSearchModel_SupportedDropActions_IsBase(bool value) const { qpdfsearchmodel_supporteddropactions_isbase = value; }
    inline void setQPdfSearchModel_SupportedDragActions_IsBase(bool value) const { qpdfsearchmodel_supporteddragactions_isbase = value; }
    inline void setQPdfSearchModel_InsertRows_IsBase(bool value) const { qpdfsearchmodel_insertrows_isbase = value; }
    inline void setQPdfSearchModel_InsertColumns_IsBase(bool value) const { qpdfsearchmodel_insertcolumns_isbase = value; }
    inline void setQPdfSearchModel_RemoveRows_IsBase(bool value) const { qpdfsearchmodel_removerows_isbase = value; }
    inline void setQPdfSearchModel_RemoveColumns_IsBase(bool value) const { qpdfsearchmodel_removecolumns_isbase = value; }
    inline void setQPdfSearchModel_MoveRows_IsBase(bool value) const { qpdfsearchmodel_moverows_isbase = value; }
    inline void setQPdfSearchModel_MoveColumns_IsBase(bool value) const { qpdfsearchmodel_movecolumns_isbase = value; }
    inline void setQPdfSearchModel_FetchMore_IsBase(bool value) const { qpdfsearchmodel_fetchmore_isbase = value; }
    inline void setQPdfSearchModel_CanFetchMore_IsBase(bool value) const { qpdfsearchmodel_canfetchmore_isbase = value; }
    inline void setQPdfSearchModel_Sort_IsBase(bool value) const { qpdfsearchmodel_sort_isbase = value; }
    inline void setQPdfSearchModel_Buddy_IsBase(bool value) const { qpdfsearchmodel_buddy_isbase = value; }
    inline void setQPdfSearchModel_Match_IsBase(bool value) const { qpdfsearchmodel_match_isbase = value; }
    inline void setQPdfSearchModel_Span_IsBase(bool value) const { qpdfsearchmodel_span_isbase = value; }
    inline void setQPdfSearchModel_MultiData_IsBase(bool value) const { qpdfsearchmodel_multidata_isbase = value; }
    inline void setQPdfSearchModel_Submit_IsBase(bool value) const { qpdfsearchmodel_submit_isbase = value; }
    inline void setQPdfSearchModel_Revert_IsBase(bool value) const { qpdfsearchmodel_revert_isbase = value; }
    inline void setQPdfSearchModel_ResetInternalData_IsBase(bool value) const { qpdfsearchmodel_resetinternaldata_isbase = value; }
    inline void setQPdfSearchModel_Event_IsBase(bool value) const { qpdfsearchmodel_event_isbase = value; }
    inline void setQPdfSearchModel_EventFilter_IsBase(bool value) const { qpdfsearchmodel_eventfilter_isbase = value; }
    inline void setQPdfSearchModel_ChildEvent_IsBase(bool value) const { qpdfsearchmodel_childevent_isbase = value; }
    inline void setQPdfSearchModel_CustomEvent_IsBase(bool value) const { qpdfsearchmodel_customevent_isbase = value; }
    inline void setQPdfSearchModel_ConnectNotify_IsBase(bool value) const { qpdfsearchmodel_connectnotify_isbase = value; }
    inline void setQPdfSearchModel_DisconnectNotify_IsBase(bool value) const { qpdfsearchmodel_disconnectnotify_isbase = value; }
    inline void setQPdfSearchModel_UpdatePage_IsBase(bool value) const { qpdfsearchmodel_updatepage_isbase = value; }
    inline void setQPdfSearchModel_CreateIndex_IsBase(bool value) const { qpdfsearchmodel_createindex_isbase = value; }
    inline void setQPdfSearchModel_EncodeData_IsBase(bool value) const { qpdfsearchmodel_encodedata_isbase = value; }
    inline void setQPdfSearchModel_DecodeData_IsBase(bool value) const { qpdfsearchmodel_decodedata_isbase = value; }
    inline void setQPdfSearchModel_BeginInsertRows_IsBase(bool value) const { qpdfsearchmodel_begininsertrows_isbase = value; }
    inline void setQPdfSearchModel_EndInsertRows_IsBase(bool value) const { qpdfsearchmodel_endinsertrows_isbase = value; }
    inline void setQPdfSearchModel_BeginRemoveRows_IsBase(bool value) const { qpdfsearchmodel_beginremoverows_isbase = value; }
    inline void setQPdfSearchModel_EndRemoveRows_IsBase(bool value) const { qpdfsearchmodel_endremoverows_isbase = value; }
    inline void setQPdfSearchModel_BeginMoveRows_IsBase(bool value) const { qpdfsearchmodel_beginmoverows_isbase = value; }
    inline void setQPdfSearchModel_EndMoveRows_IsBase(bool value) const { qpdfsearchmodel_endmoverows_isbase = value; }
    inline void setQPdfSearchModel_BeginInsertColumns_IsBase(bool value) const { qpdfsearchmodel_begininsertcolumns_isbase = value; }
    inline void setQPdfSearchModel_EndInsertColumns_IsBase(bool value) const { qpdfsearchmodel_endinsertcolumns_isbase = value; }
    inline void setQPdfSearchModel_BeginRemoveColumns_IsBase(bool value) const { qpdfsearchmodel_beginremovecolumns_isbase = value; }
    inline void setQPdfSearchModel_EndRemoveColumns_IsBase(bool value) const { qpdfsearchmodel_endremovecolumns_isbase = value; }
    inline void setQPdfSearchModel_BeginMoveColumns_IsBase(bool value) const { qpdfsearchmodel_beginmovecolumns_isbase = value; }
    inline void setQPdfSearchModel_EndMoveColumns_IsBase(bool value) const { qpdfsearchmodel_endmovecolumns_isbase = value; }
    inline void setQPdfSearchModel_BeginResetModel_IsBase(bool value) const { qpdfsearchmodel_beginresetmodel_isbase = value; }
    inline void setQPdfSearchModel_EndResetModel_IsBase(bool value) const { qpdfsearchmodel_endresetmodel_isbase = value; }
    inline void setQPdfSearchModel_ChangePersistentIndex_IsBase(bool value) const { qpdfsearchmodel_changepersistentindex_isbase = value; }
    inline void setQPdfSearchModel_ChangePersistentIndexList_IsBase(bool value) const { qpdfsearchmodel_changepersistentindexlist_isbase = value; }
    inline void setQPdfSearchModel_PersistentIndexList_IsBase(bool value) const { qpdfsearchmodel_persistentindexlist_isbase = value; }
    inline void setQPdfSearchModel_Sender_IsBase(bool value) const { qpdfsearchmodel_sender_isbase = value; }
    inline void setQPdfSearchModel_SenderSignalIndex_IsBase(bool value) const { qpdfsearchmodel_sendersignalindex_isbase = value; }
    inline void setQPdfSearchModel_Receivers_IsBase(bool value) const { qpdfsearchmodel_receivers_isbase = value; }
    inline void setQPdfSearchModel_IsSignalConnected_IsBase(bool value) const { qpdfsearchmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfsearchmodel_metacall_isbase) {
            qpdfsearchmodel_metacall_isbase = false;
            return QPdfSearchModel::qt_metacall(param1, param2, param3);
        } else if (qpdfsearchmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpdfsearchmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfSearchModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdfsearchmodel_rolenames_isbase) {
            qpdfsearchmodel_rolenames_isbase = false;
            return QPdfSearchModel::roleNames();
        } else if (qpdfsearchmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qpdfsearchmodel_rolenames_callback();
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
            return QPdfSearchModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdfsearchmodel_rowcount_isbase) {
            qpdfsearchmodel_rowcount_isbase = false;
            return QPdfSearchModel::rowCount(parent);
        } else if (qpdfsearchmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qpdfsearchmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfSearchModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdfsearchmodel_data_isbase) {
            qpdfsearchmodel_data_isbase = false;
            return QPdfSearchModel::data(index, role);
        } else if (qpdfsearchmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = qpdfsearchmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QPdfSearchModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfsearchmodel_timerevent_isbase) {
            qpdfsearchmodel_timerevent_isbase = false;
            QPdfSearchModel::timerEvent(event);
        } else if (qpdfsearchmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpdfsearchmodel_timerevent_callback(this, cbval1);
        } else {
            QPdfSearchModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdfsearchmodel_index_isbase) {
            qpdfsearchmodel_index_isbase = false;
            return QPdfSearchModel::index(row, column, parent);
        } else if (qpdfsearchmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qpdfsearchmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPdfSearchModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdfsearchmodel_sibling_isbase) {
            qpdfsearchmodel_sibling_isbase = false;
            return QPdfSearchModel::sibling(row, column, idx);
        } else if (qpdfsearchmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qpdfsearchmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPdfSearchModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdfsearchmodel_dropmimedata_isbase) {
            qpdfsearchmodel_dropmimedata_isbase = false;
            return QPdfSearchModel::dropMimeData(data, action, row, column, parent);
        } else if (qpdfsearchmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfSearchModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdfsearchmodel_flags_isbase) {
            qpdfsearchmodel_flags_isbase = false;
            return QPdfSearchModel::flags(index);
        } else if (qpdfsearchmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qpdfsearchmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QPdfSearchModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdfsearchmodel_setdata_isbase) {
            qpdfsearchmodel_setdata_isbase = false;
            return QPdfSearchModel::setData(index, value, role);
        } else if (qpdfsearchmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qpdfsearchmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfSearchModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdfsearchmodel_headerdata_isbase) {
            qpdfsearchmodel_headerdata_isbase = false;
            return QPdfSearchModel::headerData(section, orientation, role);
        } else if (qpdfsearchmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qpdfsearchmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPdfSearchModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdfsearchmodel_setheaderdata_isbase) {
            qpdfsearchmodel_setheaderdata_isbase = false;
            return QPdfSearchModel::setHeaderData(section, orientation, value, role);
        } else if (qpdfsearchmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qpdfsearchmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QPdfSearchModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdfsearchmodel_itemdata_isbase) {
            qpdfsearchmodel_itemdata_isbase = false;
            return QPdfSearchModel::itemData(index);
        } else if (qpdfsearchmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qpdfsearchmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QPdfSearchModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdfsearchmodel_setitemdata_isbase) {
            qpdfsearchmodel_setitemdata_isbase = false;
            return QPdfSearchModel::setItemData(index, roles);
        } else if (qpdfsearchmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qpdfsearchmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfSearchModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdfsearchmodel_clearitemdata_isbase) {
            qpdfsearchmodel_clearitemdata_isbase = false;
            return QPdfSearchModel::clearItemData(index);
        } else if (qpdfsearchmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qpdfsearchmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfSearchModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qpdfsearchmodel_mimetypes_isbase) {
            qpdfsearchmodel_mimetypes_isbase = false;
            return QPdfSearchModel::mimeTypes();
        } else if (qpdfsearchmodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qpdfsearchmodel_mimetypes_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QPdfSearchModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qpdfsearchmodel_mimedata_isbase) {
            qpdfsearchmodel_mimedata_isbase = false;
            return QPdfSearchModel::mimeData(indexes);
        } else if (qpdfsearchmodel_mimedata_callback != nullptr) {
            const QModelIndexList& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
            for (size_t i = 0; i < indexes_ret.length(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.length();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = qpdfsearchmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfSearchModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdfsearchmodel_candropmimedata_isbase) {
            qpdfsearchmodel_candropmimedata_isbase = false;
            return QPdfSearchModel::canDropMimeData(data, action, row, column, parent);
        } else if (qpdfsearchmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfSearchModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdfsearchmodel_supporteddropactions_isbase) {
            qpdfsearchmodel_supporteddropactions_isbase = false;
            return QPdfSearchModel::supportedDropActions();
        } else if (qpdfsearchmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qpdfsearchmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QPdfSearchModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdfsearchmodel_supporteddragactions_isbase) {
            qpdfsearchmodel_supporteddragactions_isbase = false;
            return QPdfSearchModel::supportedDragActions();
        } else if (qpdfsearchmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qpdfsearchmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QPdfSearchModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_insertrows_isbase) {
            qpdfsearchmodel_insertrows_isbase = false;
            return QPdfSearchModel::insertRows(row, count, parent);
        } else if (qpdfsearchmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfSearchModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_insertcolumns_isbase) {
            qpdfsearchmodel_insertcolumns_isbase = false;
            return QPdfSearchModel::insertColumns(column, count, parent);
        } else if (qpdfsearchmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfSearchModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_removerows_isbase) {
            qpdfsearchmodel_removerows_isbase = false;
            return QPdfSearchModel::removeRows(row, count, parent);
        } else if (qpdfsearchmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfSearchModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_removecolumns_isbase) {
            qpdfsearchmodel_removecolumns_isbase = false;
            return QPdfSearchModel::removeColumns(column, count, parent);
        } else if (qpdfsearchmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfSearchModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfsearchmodel_moverows_isbase) {
            qpdfsearchmodel_moverows_isbase = false;
            return QPdfSearchModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qpdfsearchmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qpdfsearchmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfSearchModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfsearchmodel_movecolumns_isbase) {
            qpdfsearchmodel_movecolumns_isbase = false;
            return QPdfSearchModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qpdfsearchmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qpdfsearchmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfSearchModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdfsearchmodel_fetchmore_isbase) {
            qpdfsearchmodel_fetchmore_isbase = false;
            QPdfSearchModel::fetchMore(parent);
        } else if (qpdfsearchmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qpdfsearchmodel_fetchmore_callback(this, cbval1);
        } else {
            QPdfSearchModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdfsearchmodel_canfetchmore_isbase) {
            qpdfsearchmodel_canfetchmore_isbase = false;
            return QPdfSearchModel::canFetchMore(parent);
        } else if (qpdfsearchmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdfsearchmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfSearchModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdfsearchmodel_sort_isbase) {
            qpdfsearchmodel_sort_isbase = false;
            QPdfSearchModel::sort(column, order);
        } else if (qpdfsearchmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qpdfsearchmodel_sort_callback(this, cbval1, cbval2);
        } else {
            QPdfSearchModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdfsearchmodel_buddy_isbase) {
            qpdfsearchmodel_buddy_isbase = false;
            return QPdfSearchModel::buddy(index);
        } else if (qpdfsearchmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qpdfsearchmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPdfSearchModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdfsearchmodel_match_isbase) {
            qpdfsearchmodel_match_isbase = false;
            return QPdfSearchModel::match(start, role, value, hits, flags);
        } else if (qpdfsearchmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qpdfsearchmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QModelIndexList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QPdfSearchModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdfsearchmodel_span_isbase) {
            qpdfsearchmodel_span_isbase = false;
            return QPdfSearchModel::span(index);
        } else if (qpdfsearchmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qpdfsearchmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPdfSearchModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdfsearchmodel_multidata_isbase) {
            qpdfsearchmodel_multidata_isbase = false;
            QPdfSearchModel::multiData(index, roleDataSpan);
        } else if (qpdfsearchmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qpdfsearchmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QPdfSearchModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdfsearchmodel_submit_isbase) {
            qpdfsearchmodel_submit_isbase = false;
            return QPdfSearchModel::submit();
        } else if (qpdfsearchmodel_submit_callback != nullptr) {
            bool callback_ret = qpdfsearchmodel_submit_callback();
            return callback_ret;
        } else {
            return QPdfSearchModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdfsearchmodel_revert_isbase) {
            qpdfsearchmodel_revert_isbase = false;
            QPdfSearchModel::revert();
        } else if (qpdfsearchmodel_revert_callback != nullptr) {
            qpdfsearchmodel_revert_callback();
        } else {
            QPdfSearchModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdfsearchmodel_resetinternaldata_isbase) {
            qpdfsearchmodel_resetinternaldata_isbase = false;
            QPdfSearchModel::resetInternalData();
        } else if (qpdfsearchmodel_resetinternaldata_callback != nullptr) {
            qpdfsearchmodel_resetinternaldata_callback();
        } else {
            QPdfSearchModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfsearchmodel_event_isbase) {
            qpdfsearchmodel_event_isbase = false;
            return QPdfSearchModel::event(event);
        } else if (qpdfsearchmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpdfsearchmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfSearchModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfsearchmodel_eventfilter_isbase) {
            qpdfsearchmodel_eventfilter_isbase = false;
            return QPdfSearchModel::eventFilter(watched, event);
        } else if (qpdfsearchmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpdfsearchmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfSearchModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfsearchmodel_childevent_isbase) {
            qpdfsearchmodel_childevent_isbase = false;
            QPdfSearchModel::childEvent(event);
        } else if (qpdfsearchmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpdfsearchmodel_childevent_callback(this, cbval1);
        } else {
            QPdfSearchModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfsearchmodel_customevent_isbase) {
            qpdfsearchmodel_customevent_isbase = false;
            QPdfSearchModel::customEvent(event);
        } else if (qpdfsearchmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfsearchmodel_customevent_callback(this, cbval1);
        } else {
            QPdfSearchModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfsearchmodel_connectnotify_isbase) {
            qpdfsearchmodel_connectnotify_isbase = false;
            QPdfSearchModel::connectNotify(signal);
        } else if (qpdfsearchmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfsearchmodel_connectnotify_callback(this, cbval1);
        } else {
            QPdfSearchModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfsearchmodel_disconnectnotify_isbase) {
            qpdfsearchmodel_disconnectnotify_isbase = false;
            QPdfSearchModel::disconnectNotify(signal);
        } else if (qpdfsearchmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfsearchmodel_disconnectnotify_callback(this, cbval1);
        } else {
            QPdfSearchModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updatePage(int page) {
        if (qpdfsearchmodel_updatepage_isbase) {
            qpdfsearchmodel_updatepage_isbase = false;
            QPdfSearchModel::updatePage(page);
        } else if (qpdfsearchmodel_updatepage_callback != nullptr) {
            int cbval1 = page;

            qpdfsearchmodel_updatepage_callback(this, cbval1);
        } else {
            QPdfSearchModel::updatePage(page);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qpdfsearchmodel_createindex_isbase) {
            qpdfsearchmodel_createindex_isbase = false;
            return QPdfSearchModel::createIndex(row, column);
        } else if (qpdfsearchmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qpdfsearchmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QPdfSearchModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qpdfsearchmodel_encodedata_isbase) {
            qpdfsearchmodel_encodedata_isbase = false;
            QPdfSearchModel::encodeData(indexes, stream);
        } else if (qpdfsearchmodel_encodedata_callback != nullptr) {
            const QModelIndexList& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
            for (size_t i = 0; i < indexes_ret.length(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.length();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval2 = &stream_ret;

            qpdfsearchmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QPdfSearchModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qpdfsearchmodel_decodedata_isbase) {
            qpdfsearchmodel_decodedata_isbase = false;
            return QPdfSearchModel::decodeData(row, column, parent, stream);
        } else if (qpdfsearchmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qpdfsearchmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QPdfSearchModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_begininsertrows_isbase) {
            qpdfsearchmodel_begininsertrows_isbase = false;
            QPdfSearchModel::beginInsertRows(parent, first, last);
        } else if (qpdfsearchmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdfsearchmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfSearchModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qpdfsearchmodel_endinsertrows_isbase) {
            qpdfsearchmodel_endinsertrows_isbase = false;
            QPdfSearchModel::endInsertRows();
        } else if (qpdfsearchmodel_endinsertrows_callback != nullptr) {
            qpdfsearchmodel_endinsertrows_callback();
        } else {
            QPdfSearchModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_beginremoverows_isbase) {
            qpdfsearchmodel_beginremoverows_isbase = false;
            QPdfSearchModel::beginRemoveRows(parent, first, last);
        } else if (qpdfsearchmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdfsearchmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfSearchModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qpdfsearchmodel_endremoverows_isbase) {
            qpdfsearchmodel_endremoverows_isbase = false;
            QPdfSearchModel::endRemoveRows();
        } else if (qpdfsearchmodel_endremoverows_callback != nullptr) {
            qpdfsearchmodel_endremoverows_callback();
        } else {
            QPdfSearchModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qpdfsearchmodel_beginmoverows_isbase) {
            qpdfsearchmodel_beginmoverows_isbase = false;
            return QPdfSearchModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qpdfsearchmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qpdfsearchmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfSearchModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qpdfsearchmodel_endmoverows_isbase) {
            qpdfsearchmodel_endmoverows_isbase = false;
            QPdfSearchModel::endMoveRows();
        } else if (qpdfsearchmodel_endmoverows_callback != nullptr) {
            qpdfsearchmodel_endmoverows_callback();
        } else {
            QPdfSearchModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_begininsertcolumns_isbase) {
            qpdfsearchmodel_begininsertcolumns_isbase = false;
            QPdfSearchModel::beginInsertColumns(parent, first, last);
        } else if (qpdfsearchmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdfsearchmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfSearchModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qpdfsearchmodel_endinsertcolumns_isbase) {
            qpdfsearchmodel_endinsertcolumns_isbase = false;
            QPdfSearchModel::endInsertColumns();
        } else if (qpdfsearchmodel_endinsertcolumns_callback != nullptr) {
            qpdfsearchmodel_endinsertcolumns_callback();
        } else {
            QPdfSearchModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_beginremovecolumns_isbase) {
            qpdfsearchmodel_beginremovecolumns_isbase = false;
            QPdfSearchModel::beginRemoveColumns(parent, first, last);
        } else if (qpdfsearchmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdfsearchmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfSearchModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qpdfsearchmodel_endremovecolumns_isbase) {
            qpdfsearchmodel_endremovecolumns_isbase = false;
            QPdfSearchModel::endRemoveColumns();
        } else if (qpdfsearchmodel_endremovecolumns_callback != nullptr) {
            qpdfsearchmodel_endremovecolumns_callback();
        } else {
            QPdfSearchModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qpdfsearchmodel_beginmovecolumns_isbase) {
            qpdfsearchmodel_beginmovecolumns_isbase = false;
            return QPdfSearchModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qpdfsearchmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qpdfsearchmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfSearchModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qpdfsearchmodel_endmovecolumns_isbase) {
            qpdfsearchmodel_endmovecolumns_isbase = false;
            QPdfSearchModel::endMoveColumns();
        } else if (qpdfsearchmodel_endmovecolumns_callback != nullptr) {
            qpdfsearchmodel_endmovecolumns_callback();
        } else {
            QPdfSearchModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qpdfsearchmodel_beginresetmodel_isbase) {
            qpdfsearchmodel_beginresetmodel_isbase = false;
            QPdfSearchModel::beginResetModel();
        } else if (qpdfsearchmodel_beginresetmodel_callback != nullptr) {
            qpdfsearchmodel_beginresetmodel_callback();
        } else {
            QPdfSearchModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qpdfsearchmodel_endresetmodel_isbase) {
            qpdfsearchmodel_endresetmodel_isbase = false;
            QPdfSearchModel::endResetModel();
        } else if (qpdfsearchmodel_endresetmodel_callback != nullptr) {
            qpdfsearchmodel_endresetmodel_callback();
        } else {
            QPdfSearchModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qpdfsearchmodel_changepersistentindex_isbase) {
            qpdfsearchmodel_changepersistentindex_isbase = false;
            QPdfSearchModel::changePersistentIndex(from, to);
        } else if (qpdfsearchmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qpdfsearchmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QPdfSearchModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qpdfsearchmodel_changepersistentindexlist_isbase) {
            qpdfsearchmodel_changepersistentindexlist_isbase = false;
            QPdfSearchModel::changePersistentIndexList(from, to);
        } else if (qpdfsearchmodel_changepersistentindexlist_callback != nullptr) {
            const QModelIndexList& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * from_ret.length()));
            for (size_t i = 0; i < from_ret.length(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.length();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QModelIndexList& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * to_ret.length()));
            for (size_t i = 0; i < to_ret.length(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.length();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            qpdfsearchmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QPdfSearchModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qpdfsearchmodel_persistentindexlist_isbase) {
            qpdfsearchmodel_persistentindexlist_isbase = false;
            return QPdfSearchModel::persistentIndexList();
        } else if (qpdfsearchmodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qpdfsearchmodel_persistentindexlist_callback();
            QModelIndexList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QPdfSearchModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfsearchmodel_sender_isbase) {
            qpdfsearchmodel_sender_isbase = false;
            return QPdfSearchModel::sender();
        } else if (qpdfsearchmodel_sender_callback != nullptr) {
            QObject* callback_ret = qpdfsearchmodel_sender_callback();
            return callback_ret;
        } else {
            return QPdfSearchModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfsearchmodel_sendersignalindex_isbase) {
            qpdfsearchmodel_sendersignalindex_isbase = false;
            return QPdfSearchModel::senderSignalIndex();
        } else if (qpdfsearchmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qpdfsearchmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfSearchModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfsearchmodel_receivers_isbase) {
            qpdfsearchmodel_receivers_isbase = false;
            return QPdfSearchModel::receivers(signal);
        } else if (qpdfsearchmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpdfsearchmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfSearchModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfsearchmodel_issignalconnected_isbase) {
            qpdfsearchmodel_issignalconnected_isbase = false;
            return QPdfSearchModel::isSignalConnected(signal);
        } else if (qpdfsearchmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpdfsearchmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfSearchModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPdfSearchModel_TimerEvent(QPdfSearchModel* self, QTimerEvent* event);
    friend void QPdfSearchModel_QBaseTimerEvent(QPdfSearchModel* self, QTimerEvent* event);
    friend void QPdfSearchModel_ResetInternalData(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseResetInternalData(QPdfSearchModel* self);
    friend void QPdfSearchModel_ChildEvent(QPdfSearchModel* self, QChildEvent* event);
    friend void QPdfSearchModel_QBaseChildEvent(QPdfSearchModel* self, QChildEvent* event);
    friend void QPdfSearchModel_CustomEvent(QPdfSearchModel* self, QEvent* event);
    friend void QPdfSearchModel_QBaseCustomEvent(QPdfSearchModel* self, QEvent* event);
    friend void QPdfSearchModel_ConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
    friend void QPdfSearchModel_QBaseConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
    friend void QPdfSearchModel_DisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
    friend void QPdfSearchModel_QBaseDisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
    friend void QPdfSearchModel_UpdatePage(QPdfSearchModel* self, int page);
    friend void QPdfSearchModel_QBaseUpdatePage(QPdfSearchModel* self, int page);
    friend QModelIndex* QPdfSearchModel_CreateIndex(const QPdfSearchModel* self, int row, int column);
    friend QModelIndex* QPdfSearchModel_QBaseCreateIndex(const QPdfSearchModel* self, int row, int column);
    friend void QPdfSearchModel_EncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QPdfSearchModel_QBaseEncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QPdfSearchModel_DecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QPdfSearchModel_QBaseDecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QPdfSearchModel_BeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_QBaseBeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_EndInsertRows(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndInsertRows(QPdfSearchModel* self);
    friend void QPdfSearchModel_BeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_QBaseBeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_EndRemoveRows(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndRemoveRows(QPdfSearchModel* self);
    friend bool QPdfSearchModel_BeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QPdfSearchModel_QBaseBeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QPdfSearchModel_EndMoveRows(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndMoveRows(QPdfSearchModel* self);
    friend void QPdfSearchModel_BeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_QBaseBeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_EndInsertColumns(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndInsertColumns(QPdfSearchModel* self);
    friend void QPdfSearchModel_BeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_QBaseBeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfSearchModel_EndRemoveColumns(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndRemoveColumns(QPdfSearchModel* self);
    friend bool QPdfSearchModel_BeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QPdfSearchModel_QBaseBeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QPdfSearchModel_EndMoveColumns(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndMoveColumns(QPdfSearchModel* self);
    friend void QPdfSearchModel_BeginResetModel(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseBeginResetModel(QPdfSearchModel* self);
    friend void QPdfSearchModel_EndResetModel(QPdfSearchModel* self);
    friend void QPdfSearchModel_QBaseEndResetModel(QPdfSearchModel* self);
    friend void QPdfSearchModel_ChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QPdfSearchModel_QBaseChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QPdfSearchModel_ChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QPdfSearchModel_QBaseChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QPdfSearchModel_PersistentIndexList(const QPdfSearchModel* self);
    friend libqt_list /* of QModelIndex* */ QPdfSearchModel_QBasePersistentIndexList(const QPdfSearchModel* self);
    friend QObject* QPdfSearchModel_Sender(const QPdfSearchModel* self);
    friend QObject* QPdfSearchModel_QBaseSender(const QPdfSearchModel* self);
    friend int QPdfSearchModel_SenderSignalIndex(const QPdfSearchModel* self);
    friend int QPdfSearchModel_QBaseSenderSignalIndex(const QPdfSearchModel* self);
    friend int QPdfSearchModel_Receivers(const QPdfSearchModel* self, const char* signal);
    friend int QPdfSearchModel_QBaseReceivers(const QPdfSearchModel* self, const char* signal);
    friend bool QPdfSearchModel_IsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal);
    friend bool QPdfSearchModel_QBaseIsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal);
};

#endif
