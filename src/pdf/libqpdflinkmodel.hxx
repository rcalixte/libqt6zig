#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFLINKMODEL_H
#define SRC_PDFC_LIBVIRTUALQPDFLINKMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfLinkModel so that we can call protected methods
class VirtualQPdfLinkModel final : public QPdfLinkModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfLinkModel = true;

    // Virtual class public types (including callbacks)
    using QPdfLinkModel_Metacall_Callback = int (*)(QPdfLinkModel*, int, int, void**);
    using QPdfLinkModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QPdfLinkModel_RowCount_Callback = int (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_Data_Callback = QVariant* (*)(const QPdfLinkModel*, QModelIndex*, int);
    using QPdfLinkModel_Index_Callback = QModelIndex* (*)(const QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_Sibling_Callback = QModelIndex* (*)(const QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_DropMimeData_Callback = bool (*)(QPdfLinkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfLinkModel_Flags_Callback = int (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_SetData_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, QVariant*, int);
    using QPdfLinkModel_HeaderData_Callback = QVariant* (*)(const QPdfLinkModel*, int, int, int);
    using QPdfLinkModel_SetHeaderData_Callback = bool (*)(QPdfLinkModel*, int, int, QVariant*, int);
    using QPdfLinkModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_SetItemData_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QPdfLinkModel_ClearItemData_Callback = bool (*)(QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QPdfLinkModel_MimeData_Callback = QMimeData* (*)(const QPdfLinkModel*, libqt_list /* of QModelIndex* */);
    using QPdfLinkModel_CanDropMimeData_Callback = bool (*)(const QPdfLinkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfLinkModel_SupportedDropActions_Callback = int (*)();
    using QPdfLinkModel_SupportedDragActions_Callback = int (*)();
    using QPdfLinkModel_InsertRows_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_InsertColumns_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_RemoveRows_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_RemoveColumns_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_MoveRows_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfLinkModel_MoveColumns_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfLinkModel_FetchMore_Callback = void (*)(QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_CanFetchMore_Callback = bool (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_Sort_Callback = void (*)(QPdfLinkModel*, int, int);
    using QPdfLinkModel_Buddy_Callback = QModelIndex* (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QPdfLinkModel*, QModelIndex*, int, QVariant*, int, int);
    using QPdfLinkModel_Span_Callback = QSize* (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_MultiData_Callback = void (*)(const QPdfLinkModel*, QModelIndex*, QModelRoleDataSpan*);
    using QPdfLinkModel_Submit_Callback = bool (*)();
    using QPdfLinkModel_Revert_Callback = void (*)();
    using QPdfLinkModel_ResetInternalData_Callback = void (*)();
    using QPdfLinkModel_Event_Callback = bool (*)(QPdfLinkModel*, QEvent*);
    using QPdfLinkModel_EventFilter_Callback = bool (*)(QPdfLinkModel*, QObject*, QEvent*);
    using QPdfLinkModel_TimerEvent_Callback = void (*)(QPdfLinkModel*, QTimerEvent*);
    using QPdfLinkModel_ChildEvent_Callback = void (*)(QPdfLinkModel*, QChildEvent*);
    using QPdfLinkModel_CustomEvent_Callback = void (*)(QPdfLinkModel*, QEvent*);
    using QPdfLinkModel_ConnectNotify_Callback = void (*)(QPdfLinkModel*, QMetaMethod*);
    using QPdfLinkModel_DisconnectNotify_Callback = void (*)(QPdfLinkModel*, QMetaMethod*);
    using QPdfLinkModel_CreateIndex_Callback = QModelIndex* (*)(const QPdfLinkModel*, int, int);
    using QPdfLinkModel_EncodeData_Callback = void (*)(const QPdfLinkModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QPdfLinkModel_DecodeData_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*, QDataStream*);
    using QPdfLinkModel_BeginInsertRows_Callback = void (*)(QPdfLinkModel*, QModelIndex*, int, int);
    using QPdfLinkModel_EndInsertRows_Callback = void (*)();
    using QPdfLinkModel_BeginRemoveRows_Callback = void (*)(QPdfLinkModel*, QModelIndex*, int, int);
    using QPdfLinkModel_EndRemoveRows_Callback = void (*)();
    using QPdfLinkModel_BeginMoveRows_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfLinkModel_EndMoveRows_Callback = void (*)();
    using QPdfLinkModel_BeginInsertColumns_Callback = void (*)(QPdfLinkModel*, QModelIndex*, int, int);
    using QPdfLinkModel_EndInsertColumns_Callback = void (*)();
    using QPdfLinkModel_BeginRemoveColumns_Callback = void (*)(QPdfLinkModel*, QModelIndex*, int, int);
    using QPdfLinkModel_EndRemoveColumns_Callback = void (*)();
    using QPdfLinkModel_BeginMoveColumns_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfLinkModel_EndMoveColumns_Callback = void (*)();
    using QPdfLinkModel_BeginResetModel_Callback = void (*)();
    using QPdfLinkModel_EndResetModel_Callback = void (*)();
    using QPdfLinkModel_ChangePersistentIndex_Callback = void (*)(QPdfLinkModel*, QModelIndex*, QModelIndex*);
    using QPdfLinkModel_ChangePersistentIndexList_Callback = void (*)(QPdfLinkModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QPdfLinkModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QPdfLinkModel_Sender_Callback = QObject* (*)();
    using QPdfLinkModel_SenderSignalIndex_Callback = int (*)();
    using QPdfLinkModel_Receivers_Callback = int (*)(const QPdfLinkModel*, const char*);
    using QPdfLinkModel_IsSignalConnected_Callback = bool (*)(const QPdfLinkModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPdfLinkModel_Metacall_Callback qpdflinkmodel_metacall_callback = nullptr;
    QPdfLinkModel_RoleNames_Callback qpdflinkmodel_rolenames_callback = nullptr;
    QPdfLinkModel_RowCount_Callback qpdflinkmodel_rowcount_callback = nullptr;
    QPdfLinkModel_Data_Callback qpdflinkmodel_data_callback = nullptr;
    QPdfLinkModel_Index_Callback qpdflinkmodel_index_callback = nullptr;
    QPdfLinkModel_Sibling_Callback qpdflinkmodel_sibling_callback = nullptr;
    QPdfLinkModel_DropMimeData_Callback qpdflinkmodel_dropmimedata_callback = nullptr;
    QPdfLinkModel_Flags_Callback qpdflinkmodel_flags_callback = nullptr;
    QPdfLinkModel_SetData_Callback qpdflinkmodel_setdata_callback = nullptr;
    QPdfLinkModel_HeaderData_Callback qpdflinkmodel_headerdata_callback = nullptr;
    QPdfLinkModel_SetHeaderData_Callback qpdflinkmodel_setheaderdata_callback = nullptr;
    QPdfLinkModel_ItemData_Callback qpdflinkmodel_itemdata_callback = nullptr;
    QPdfLinkModel_SetItemData_Callback qpdflinkmodel_setitemdata_callback = nullptr;
    QPdfLinkModel_ClearItemData_Callback qpdflinkmodel_clearitemdata_callback = nullptr;
    QPdfLinkModel_MimeTypes_Callback qpdflinkmodel_mimetypes_callback = nullptr;
    QPdfLinkModel_MimeData_Callback qpdflinkmodel_mimedata_callback = nullptr;
    QPdfLinkModel_CanDropMimeData_Callback qpdflinkmodel_candropmimedata_callback = nullptr;
    QPdfLinkModel_SupportedDropActions_Callback qpdflinkmodel_supporteddropactions_callback = nullptr;
    QPdfLinkModel_SupportedDragActions_Callback qpdflinkmodel_supporteddragactions_callback = nullptr;
    QPdfLinkModel_InsertRows_Callback qpdflinkmodel_insertrows_callback = nullptr;
    QPdfLinkModel_InsertColumns_Callback qpdflinkmodel_insertcolumns_callback = nullptr;
    QPdfLinkModel_RemoveRows_Callback qpdflinkmodel_removerows_callback = nullptr;
    QPdfLinkModel_RemoveColumns_Callback qpdflinkmodel_removecolumns_callback = nullptr;
    QPdfLinkModel_MoveRows_Callback qpdflinkmodel_moverows_callback = nullptr;
    QPdfLinkModel_MoveColumns_Callback qpdflinkmodel_movecolumns_callback = nullptr;
    QPdfLinkModel_FetchMore_Callback qpdflinkmodel_fetchmore_callback = nullptr;
    QPdfLinkModel_CanFetchMore_Callback qpdflinkmodel_canfetchmore_callback = nullptr;
    QPdfLinkModel_Sort_Callback qpdflinkmodel_sort_callback = nullptr;
    QPdfLinkModel_Buddy_Callback qpdflinkmodel_buddy_callback = nullptr;
    QPdfLinkModel_Match_Callback qpdflinkmodel_match_callback = nullptr;
    QPdfLinkModel_Span_Callback qpdflinkmodel_span_callback = nullptr;
    QPdfLinkModel_MultiData_Callback qpdflinkmodel_multidata_callback = nullptr;
    QPdfLinkModel_Submit_Callback qpdflinkmodel_submit_callback = nullptr;
    QPdfLinkModel_Revert_Callback qpdflinkmodel_revert_callback = nullptr;
    QPdfLinkModel_ResetInternalData_Callback qpdflinkmodel_resetinternaldata_callback = nullptr;
    QPdfLinkModel_Event_Callback qpdflinkmodel_event_callback = nullptr;
    QPdfLinkModel_EventFilter_Callback qpdflinkmodel_eventfilter_callback = nullptr;
    QPdfLinkModel_TimerEvent_Callback qpdflinkmodel_timerevent_callback = nullptr;
    QPdfLinkModel_ChildEvent_Callback qpdflinkmodel_childevent_callback = nullptr;
    QPdfLinkModel_CustomEvent_Callback qpdflinkmodel_customevent_callback = nullptr;
    QPdfLinkModel_ConnectNotify_Callback qpdflinkmodel_connectnotify_callback = nullptr;
    QPdfLinkModel_DisconnectNotify_Callback qpdflinkmodel_disconnectnotify_callback = nullptr;
    QPdfLinkModel_CreateIndex_Callback qpdflinkmodel_createindex_callback = nullptr;
    QPdfLinkModel_EncodeData_Callback qpdflinkmodel_encodedata_callback = nullptr;
    QPdfLinkModel_DecodeData_Callback qpdflinkmodel_decodedata_callback = nullptr;
    QPdfLinkModel_BeginInsertRows_Callback qpdflinkmodel_begininsertrows_callback = nullptr;
    QPdfLinkModel_EndInsertRows_Callback qpdflinkmodel_endinsertrows_callback = nullptr;
    QPdfLinkModel_BeginRemoveRows_Callback qpdflinkmodel_beginremoverows_callback = nullptr;
    QPdfLinkModel_EndRemoveRows_Callback qpdflinkmodel_endremoverows_callback = nullptr;
    QPdfLinkModel_BeginMoveRows_Callback qpdflinkmodel_beginmoverows_callback = nullptr;
    QPdfLinkModel_EndMoveRows_Callback qpdflinkmodel_endmoverows_callback = nullptr;
    QPdfLinkModel_BeginInsertColumns_Callback qpdflinkmodel_begininsertcolumns_callback = nullptr;
    QPdfLinkModel_EndInsertColumns_Callback qpdflinkmodel_endinsertcolumns_callback = nullptr;
    QPdfLinkModel_BeginRemoveColumns_Callback qpdflinkmodel_beginremovecolumns_callback = nullptr;
    QPdfLinkModel_EndRemoveColumns_Callback qpdflinkmodel_endremovecolumns_callback = nullptr;
    QPdfLinkModel_BeginMoveColumns_Callback qpdflinkmodel_beginmovecolumns_callback = nullptr;
    QPdfLinkModel_EndMoveColumns_Callback qpdflinkmodel_endmovecolumns_callback = nullptr;
    QPdfLinkModel_BeginResetModel_Callback qpdflinkmodel_beginresetmodel_callback = nullptr;
    QPdfLinkModel_EndResetModel_Callback qpdflinkmodel_endresetmodel_callback = nullptr;
    QPdfLinkModel_ChangePersistentIndex_Callback qpdflinkmodel_changepersistentindex_callback = nullptr;
    QPdfLinkModel_ChangePersistentIndexList_Callback qpdflinkmodel_changepersistentindexlist_callback = nullptr;
    QPdfLinkModel_PersistentIndexList_Callback qpdflinkmodel_persistentindexlist_callback = nullptr;
    QPdfLinkModel_Sender_Callback qpdflinkmodel_sender_callback = nullptr;
    QPdfLinkModel_SenderSignalIndex_Callback qpdflinkmodel_sendersignalindex_callback = nullptr;
    QPdfLinkModel_Receivers_Callback qpdflinkmodel_receivers_callback = nullptr;
    QPdfLinkModel_IsSignalConnected_Callback qpdflinkmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdflinkmodel_metacall_isbase = false;
    mutable bool qpdflinkmodel_rolenames_isbase = false;
    mutable bool qpdflinkmodel_rowcount_isbase = false;
    mutable bool qpdflinkmodel_data_isbase = false;
    mutable bool qpdflinkmodel_index_isbase = false;
    mutable bool qpdflinkmodel_sibling_isbase = false;
    mutable bool qpdflinkmodel_dropmimedata_isbase = false;
    mutable bool qpdflinkmodel_flags_isbase = false;
    mutable bool qpdflinkmodel_setdata_isbase = false;
    mutable bool qpdflinkmodel_headerdata_isbase = false;
    mutable bool qpdflinkmodel_setheaderdata_isbase = false;
    mutable bool qpdflinkmodel_itemdata_isbase = false;
    mutable bool qpdflinkmodel_setitemdata_isbase = false;
    mutable bool qpdflinkmodel_clearitemdata_isbase = false;
    mutable bool qpdflinkmodel_mimetypes_isbase = false;
    mutable bool qpdflinkmodel_mimedata_isbase = false;
    mutable bool qpdflinkmodel_candropmimedata_isbase = false;
    mutable bool qpdflinkmodel_supporteddropactions_isbase = false;
    mutable bool qpdflinkmodel_supporteddragactions_isbase = false;
    mutable bool qpdflinkmodel_insertrows_isbase = false;
    mutable bool qpdflinkmodel_insertcolumns_isbase = false;
    mutable bool qpdflinkmodel_removerows_isbase = false;
    mutable bool qpdflinkmodel_removecolumns_isbase = false;
    mutable bool qpdflinkmodel_moverows_isbase = false;
    mutable bool qpdflinkmodel_movecolumns_isbase = false;
    mutable bool qpdflinkmodel_fetchmore_isbase = false;
    mutable bool qpdflinkmodel_canfetchmore_isbase = false;
    mutable bool qpdflinkmodel_sort_isbase = false;
    mutable bool qpdflinkmodel_buddy_isbase = false;
    mutable bool qpdflinkmodel_match_isbase = false;
    mutable bool qpdflinkmodel_span_isbase = false;
    mutable bool qpdflinkmodel_multidata_isbase = false;
    mutable bool qpdflinkmodel_submit_isbase = false;
    mutable bool qpdflinkmodel_revert_isbase = false;
    mutable bool qpdflinkmodel_resetinternaldata_isbase = false;
    mutable bool qpdflinkmodel_event_isbase = false;
    mutable bool qpdflinkmodel_eventfilter_isbase = false;
    mutable bool qpdflinkmodel_timerevent_isbase = false;
    mutable bool qpdflinkmodel_childevent_isbase = false;
    mutable bool qpdflinkmodel_customevent_isbase = false;
    mutable bool qpdflinkmodel_connectnotify_isbase = false;
    mutable bool qpdflinkmodel_disconnectnotify_isbase = false;
    mutable bool qpdflinkmodel_createindex_isbase = false;
    mutable bool qpdflinkmodel_encodedata_isbase = false;
    mutable bool qpdflinkmodel_decodedata_isbase = false;
    mutable bool qpdflinkmodel_begininsertrows_isbase = false;
    mutable bool qpdflinkmodel_endinsertrows_isbase = false;
    mutable bool qpdflinkmodel_beginremoverows_isbase = false;
    mutable bool qpdflinkmodel_endremoverows_isbase = false;
    mutable bool qpdflinkmodel_beginmoverows_isbase = false;
    mutable bool qpdflinkmodel_endmoverows_isbase = false;
    mutable bool qpdflinkmodel_begininsertcolumns_isbase = false;
    mutable bool qpdflinkmodel_endinsertcolumns_isbase = false;
    mutable bool qpdflinkmodel_beginremovecolumns_isbase = false;
    mutable bool qpdflinkmodel_endremovecolumns_isbase = false;
    mutable bool qpdflinkmodel_beginmovecolumns_isbase = false;
    mutable bool qpdflinkmodel_endmovecolumns_isbase = false;
    mutable bool qpdflinkmodel_beginresetmodel_isbase = false;
    mutable bool qpdflinkmodel_endresetmodel_isbase = false;
    mutable bool qpdflinkmodel_changepersistentindex_isbase = false;
    mutable bool qpdflinkmodel_changepersistentindexlist_isbase = false;
    mutable bool qpdflinkmodel_persistentindexlist_isbase = false;
    mutable bool qpdflinkmodel_sender_isbase = false;
    mutable bool qpdflinkmodel_sendersignalindex_isbase = false;
    mutable bool qpdflinkmodel_receivers_isbase = false;
    mutable bool qpdflinkmodel_issignalconnected_isbase = false;

  public:
    VirtualQPdfLinkModel() : QPdfLinkModel() {};
    VirtualQPdfLinkModel(QObject* parent) : QPdfLinkModel(parent) {};

    ~VirtualQPdfLinkModel() {
        qpdflinkmodel_metacall_callback = nullptr;
        qpdflinkmodel_rolenames_callback = nullptr;
        qpdflinkmodel_rowcount_callback = nullptr;
        qpdflinkmodel_data_callback = nullptr;
        qpdflinkmodel_index_callback = nullptr;
        qpdflinkmodel_sibling_callback = nullptr;
        qpdflinkmodel_dropmimedata_callback = nullptr;
        qpdflinkmodel_flags_callback = nullptr;
        qpdflinkmodel_setdata_callback = nullptr;
        qpdflinkmodel_headerdata_callback = nullptr;
        qpdflinkmodel_setheaderdata_callback = nullptr;
        qpdflinkmodel_itemdata_callback = nullptr;
        qpdflinkmodel_setitemdata_callback = nullptr;
        qpdflinkmodel_clearitemdata_callback = nullptr;
        qpdflinkmodel_mimetypes_callback = nullptr;
        qpdflinkmodel_mimedata_callback = nullptr;
        qpdflinkmodel_candropmimedata_callback = nullptr;
        qpdflinkmodel_supporteddropactions_callback = nullptr;
        qpdflinkmodel_supporteddragactions_callback = nullptr;
        qpdflinkmodel_insertrows_callback = nullptr;
        qpdflinkmodel_insertcolumns_callback = nullptr;
        qpdflinkmodel_removerows_callback = nullptr;
        qpdflinkmodel_removecolumns_callback = nullptr;
        qpdflinkmodel_moverows_callback = nullptr;
        qpdflinkmodel_movecolumns_callback = nullptr;
        qpdflinkmodel_fetchmore_callback = nullptr;
        qpdflinkmodel_canfetchmore_callback = nullptr;
        qpdflinkmodel_sort_callback = nullptr;
        qpdflinkmodel_buddy_callback = nullptr;
        qpdflinkmodel_match_callback = nullptr;
        qpdflinkmodel_span_callback = nullptr;
        qpdflinkmodel_multidata_callback = nullptr;
        qpdflinkmodel_submit_callback = nullptr;
        qpdflinkmodel_revert_callback = nullptr;
        qpdflinkmodel_resetinternaldata_callback = nullptr;
        qpdflinkmodel_event_callback = nullptr;
        qpdflinkmodel_eventfilter_callback = nullptr;
        qpdflinkmodel_timerevent_callback = nullptr;
        qpdflinkmodel_childevent_callback = nullptr;
        qpdflinkmodel_customevent_callback = nullptr;
        qpdflinkmodel_connectnotify_callback = nullptr;
        qpdflinkmodel_disconnectnotify_callback = nullptr;
        qpdflinkmodel_createindex_callback = nullptr;
        qpdflinkmodel_encodedata_callback = nullptr;
        qpdflinkmodel_decodedata_callback = nullptr;
        qpdflinkmodel_begininsertrows_callback = nullptr;
        qpdflinkmodel_endinsertrows_callback = nullptr;
        qpdflinkmodel_beginremoverows_callback = nullptr;
        qpdflinkmodel_endremoverows_callback = nullptr;
        qpdflinkmodel_beginmoverows_callback = nullptr;
        qpdflinkmodel_endmoverows_callback = nullptr;
        qpdflinkmodel_begininsertcolumns_callback = nullptr;
        qpdflinkmodel_endinsertcolumns_callback = nullptr;
        qpdflinkmodel_beginremovecolumns_callback = nullptr;
        qpdflinkmodel_endremovecolumns_callback = nullptr;
        qpdflinkmodel_beginmovecolumns_callback = nullptr;
        qpdflinkmodel_endmovecolumns_callback = nullptr;
        qpdflinkmodel_beginresetmodel_callback = nullptr;
        qpdflinkmodel_endresetmodel_callback = nullptr;
        qpdflinkmodel_changepersistentindex_callback = nullptr;
        qpdflinkmodel_changepersistentindexlist_callback = nullptr;
        qpdflinkmodel_persistentindexlist_callback = nullptr;
        qpdflinkmodel_sender_callback = nullptr;
        qpdflinkmodel_sendersignalindex_callback = nullptr;
        qpdflinkmodel_receivers_callback = nullptr;
        qpdflinkmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPdfLinkModel_Metacall_Callback(QPdfLinkModel_Metacall_Callback cb) { qpdflinkmodel_metacall_callback = cb; }
    inline void setQPdfLinkModel_RoleNames_Callback(QPdfLinkModel_RoleNames_Callback cb) { qpdflinkmodel_rolenames_callback = cb; }
    inline void setQPdfLinkModel_RowCount_Callback(QPdfLinkModel_RowCount_Callback cb) { qpdflinkmodel_rowcount_callback = cb; }
    inline void setQPdfLinkModel_Data_Callback(QPdfLinkModel_Data_Callback cb) { qpdflinkmodel_data_callback = cb; }
    inline void setQPdfLinkModel_Index_Callback(QPdfLinkModel_Index_Callback cb) { qpdflinkmodel_index_callback = cb; }
    inline void setQPdfLinkModel_Sibling_Callback(QPdfLinkModel_Sibling_Callback cb) { qpdflinkmodel_sibling_callback = cb; }
    inline void setQPdfLinkModel_DropMimeData_Callback(QPdfLinkModel_DropMimeData_Callback cb) { qpdflinkmodel_dropmimedata_callback = cb; }
    inline void setQPdfLinkModel_Flags_Callback(QPdfLinkModel_Flags_Callback cb) { qpdflinkmodel_flags_callback = cb; }
    inline void setQPdfLinkModel_SetData_Callback(QPdfLinkModel_SetData_Callback cb) { qpdflinkmodel_setdata_callback = cb; }
    inline void setQPdfLinkModel_HeaderData_Callback(QPdfLinkModel_HeaderData_Callback cb) { qpdflinkmodel_headerdata_callback = cb; }
    inline void setQPdfLinkModel_SetHeaderData_Callback(QPdfLinkModel_SetHeaderData_Callback cb) { qpdflinkmodel_setheaderdata_callback = cb; }
    inline void setQPdfLinkModel_ItemData_Callback(QPdfLinkModel_ItemData_Callback cb) { qpdflinkmodel_itemdata_callback = cb; }
    inline void setQPdfLinkModel_SetItemData_Callback(QPdfLinkModel_SetItemData_Callback cb) { qpdflinkmodel_setitemdata_callback = cb; }
    inline void setQPdfLinkModel_ClearItemData_Callback(QPdfLinkModel_ClearItemData_Callback cb) { qpdflinkmodel_clearitemdata_callback = cb; }
    inline void setQPdfLinkModel_MimeTypes_Callback(QPdfLinkModel_MimeTypes_Callback cb) { qpdflinkmodel_mimetypes_callback = cb; }
    inline void setQPdfLinkModel_MimeData_Callback(QPdfLinkModel_MimeData_Callback cb) { qpdflinkmodel_mimedata_callback = cb; }
    inline void setQPdfLinkModel_CanDropMimeData_Callback(QPdfLinkModel_CanDropMimeData_Callback cb) { qpdflinkmodel_candropmimedata_callback = cb; }
    inline void setQPdfLinkModel_SupportedDropActions_Callback(QPdfLinkModel_SupportedDropActions_Callback cb) { qpdflinkmodel_supporteddropactions_callback = cb; }
    inline void setQPdfLinkModel_SupportedDragActions_Callback(QPdfLinkModel_SupportedDragActions_Callback cb) { qpdflinkmodel_supporteddragactions_callback = cb; }
    inline void setQPdfLinkModel_InsertRows_Callback(QPdfLinkModel_InsertRows_Callback cb) { qpdflinkmodel_insertrows_callback = cb; }
    inline void setQPdfLinkModel_InsertColumns_Callback(QPdfLinkModel_InsertColumns_Callback cb) { qpdflinkmodel_insertcolumns_callback = cb; }
    inline void setQPdfLinkModel_RemoveRows_Callback(QPdfLinkModel_RemoveRows_Callback cb) { qpdflinkmodel_removerows_callback = cb; }
    inline void setQPdfLinkModel_RemoveColumns_Callback(QPdfLinkModel_RemoveColumns_Callback cb) { qpdflinkmodel_removecolumns_callback = cb; }
    inline void setQPdfLinkModel_MoveRows_Callback(QPdfLinkModel_MoveRows_Callback cb) { qpdflinkmodel_moverows_callback = cb; }
    inline void setQPdfLinkModel_MoveColumns_Callback(QPdfLinkModel_MoveColumns_Callback cb) { qpdflinkmodel_movecolumns_callback = cb; }
    inline void setQPdfLinkModel_FetchMore_Callback(QPdfLinkModel_FetchMore_Callback cb) { qpdflinkmodel_fetchmore_callback = cb; }
    inline void setQPdfLinkModel_CanFetchMore_Callback(QPdfLinkModel_CanFetchMore_Callback cb) { qpdflinkmodel_canfetchmore_callback = cb; }
    inline void setQPdfLinkModel_Sort_Callback(QPdfLinkModel_Sort_Callback cb) { qpdflinkmodel_sort_callback = cb; }
    inline void setQPdfLinkModel_Buddy_Callback(QPdfLinkModel_Buddy_Callback cb) { qpdflinkmodel_buddy_callback = cb; }
    inline void setQPdfLinkModel_Match_Callback(QPdfLinkModel_Match_Callback cb) { qpdflinkmodel_match_callback = cb; }
    inline void setQPdfLinkModel_Span_Callback(QPdfLinkModel_Span_Callback cb) { qpdflinkmodel_span_callback = cb; }
    inline void setQPdfLinkModel_MultiData_Callback(QPdfLinkModel_MultiData_Callback cb) { qpdflinkmodel_multidata_callback = cb; }
    inline void setQPdfLinkModel_Submit_Callback(QPdfLinkModel_Submit_Callback cb) { qpdflinkmodel_submit_callback = cb; }
    inline void setQPdfLinkModel_Revert_Callback(QPdfLinkModel_Revert_Callback cb) { qpdflinkmodel_revert_callback = cb; }
    inline void setQPdfLinkModel_ResetInternalData_Callback(QPdfLinkModel_ResetInternalData_Callback cb) { qpdflinkmodel_resetinternaldata_callback = cb; }
    inline void setQPdfLinkModel_Event_Callback(QPdfLinkModel_Event_Callback cb) { qpdflinkmodel_event_callback = cb; }
    inline void setQPdfLinkModel_EventFilter_Callback(QPdfLinkModel_EventFilter_Callback cb) { qpdflinkmodel_eventfilter_callback = cb; }
    inline void setQPdfLinkModel_TimerEvent_Callback(QPdfLinkModel_TimerEvent_Callback cb) { qpdflinkmodel_timerevent_callback = cb; }
    inline void setQPdfLinkModel_ChildEvent_Callback(QPdfLinkModel_ChildEvent_Callback cb) { qpdflinkmodel_childevent_callback = cb; }
    inline void setQPdfLinkModel_CustomEvent_Callback(QPdfLinkModel_CustomEvent_Callback cb) { qpdflinkmodel_customevent_callback = cb; }
    inline void setQPdfLinkModel_ConnectNotify_Callback(QPdfLinkModel_ConnectNotify_Callback cb) { qpdflinkmodel_connectnotify_callback = cb; }
    inline void setQPdfLinkModel_DisconnectNotify_Callback(QPdfLinkModel_DisconnectNotify_Callback cb) { qpdflinkmodel_disconnectnotify_callback = cb; }
    inline void setQPdfLinkModel_CreateIndex_Callback(QPdfLinkModel_CreateIndex_Callback cb) { qpdflinkmodel_createindex_callback = cb; }
    inline void setQPdfLinkModel_EncodeData_Callback(QPdfLinkModel_EncodeData_Callback cb) { qpdflinkmodel_encodedata_callback = cb; }
    inline void setQPdfLinkModel_DecodeData_Callback(QPdfLinkModel_DecodeData_Callback cb) { qpdflinkmodel_decodedata_callback = cb; }
    inline void setQPdfLinkModel_BeginInsertRows_Callback(QPdfLinkModel_BeginInsertRows_Callback cb) { qpdflinkmodel_begininsertrows_callback = cb; }
    inline void setQPdfLinkModel_EndInsertRows_Callback(QPdfLinkModel_EndInsertRows_Callback cb) { qpdflinkmodel_endinsertrows_callback = cb; }
    inline void setQPdfLinkModel_BeginRemoveRows_Callback(QPdfLinkModel_BeginRemoveRows_Callback cb) { qpdflinkmodel_beginremoverows_callback = cb; }
    inline void setQPdfLinkModel_EndRemoveRows_Callback(QPdfLinkModel_EndRemoveRows_Callback cb) { qpdflinkmodel_endremoverows_callback = cb; }
    inline void setQPdfLinkModel_BeginMoveRows_Callback(QPdfLinkModel_BeginMoveRows_Callback cb) { qpdflinkmodel_beginmoverows_callback = cb; }
    inline void setQPdfLinkModel_EndMoveRows_Callback(QPdfLinkModel_EndMoveRows_Callback cb) { qpdflinkmodel_endmoverows_callback = cb; }
    inline void setQPdfLinkModel_BeginInsertColumns_Callback(QPdfLinkModel_BeginInsertColumns_Callback cb) { qpdflinkmodel_begininsertcolumns_callback = cb; }
    inline void setQPdfLinkModel_EndInsertColumns_Callback(QPdfLinkModel_EndInsertColumns_Callback cb) { qpdflinkmodel_endinsertcolumns_callback = cb; }
    inline void setQPdfLinkModel_BeginRemoveColumns_Callback(QPdfLinkModel_BeginRemoveColumns_Callback cb) { qpdflinkmodel_beginremovecolumns_callback = cb; }
    inline void setQPdfLinkModel_EndRemoveColumns_Callback(QPdfLinkModel_EndRemoveColumns_Callback cb) { qpdflinkmodel_endremovecolumns_callback = cb; }
    inline void setQPdfLinkModel_BeginMoveColumns_Callback(QPdfLinkModel_BeginMoveColumns_Callback cb) { qpdflinkmodel_beginmovecolumns_callback = cb; }
    inline void setQPdfLinkModel_EndMoveColumns_Callback(QPdfLinkModel_EndMoveColumns_Callback cb) { qpdflinkmodel_endmovecolumns_callback = cb; }
    inline void setQPdfLinkModel_BeginResetModel_Callback(QPdfLinkModel_BeginResetModel_Callback cb) { qpdflinkmodel_beginresetmodel_callback = cb; }
    inline void setQPdfLinkModel_EndResetModel_Callback(QPdfLinkModel_EndResetModel_Callback cb) { qpdflinkmodel_endresetmodel_callback = cb; }
    inline void setQPdfLinkModel_ChangePersistentIndex_Callback(QPdfLinkModel_ChangePersistentIndex_Callback cb) { qpdflinkmodel_changepersistentindex_callback = cb; }
    inline void setQPdfLinkModel_ChangePersistentIndexList_Callback(QPdfLinkModel_ChangePersistentIndexList_Callback cb) { qpdflinkmodel_changepersistentindexlist_callback = cb; }
    inline void setQPdfLinkModel_PersistentIndexList_Callback(QPdfLinkModel_PersistentIndexList_Callback cb) { qpdflinkmodel_persistentindexlist_callback = cb; }
    inline void setQPdfLinkModel_Sender_Callback(QPdfLinkModel_Sender_Callback cb) { qpdflinkmodel_sender_callback = cb; }
    inline void setQPdfLinkModel_SenderSignalIndex_Callback(QPdfLinkModel_SenderSignalIndex_Callback cb) { qpdflinkmodel_sendersignalindex_callback = cb; }
    inline void setQPdfLinkModel_Receivers_Callback(QPdfLinkModel_Receivers_Callback cb) { qpdflinkmodel_receivers_callback = cb; }
    inline void setQPdfLinkModel_IsSignalConnected_Callback(QPdfLinkModel_IsSignalConnected_Callback cb) { qpdflinkmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPdfLinkModel_Metacall_IsBase(bool value) const { qpdflinkmodel_metacall_isbase = value; }
    inline void setQPdfLinkModel_RoleNames_IsBase(bool value) const { qpdflinkmodel_rolenames_isbase = value; }
    inline void setQPdfLinkModel_RowCount_IsBase(bool value) const { qpdflinkmodel_rowcount_isbase = value; }
    inline void setQPdfLinkModel_Data_IsBase(bool value) const { qpdflinkmodel_data_isbase = value; }
    inline void setQPdfLinkModel_Index_IsBase(bool value) const { qpdflinkmodel_index_isbase = value; }
    inline void setQPdfLinkModel_Sibling_IsBase(bool value) const { qpdflinkmodel_sibling_isbase = value; }
    inline void setQPdfLinkModel_DropMimeData_IsBase(bool value) const { qpdflinkmodel_dropmimedata_isbase = value; }
    inline void setQPdfLinkModel_Flags_IsBase(bool value) const { qpdflinkmodel_flags_isbase = value; }
    inline void setQPdfLinkModel_SetData_IsBase(bool value) const { qpdflinkmodel_setdata_isbase = value; }
    inline void setQPdfLinkModel_HeaderData_IsBase(bool value) const { qpdflinkmodel_headerdata_isbase = value; }
    inline void setQPdfLinkModel_SetHeaderData_IsBase(bool value) const { qpdflinkmodel_setheaderdata_isbase = value; }
    inline void setQPdfLinkModel_ItemData_IsBase(bool value) const { qpdflinkmodel_itemdata_isbase = value; }
    inline void setQPdfLinkModel_SetItemData_IsBase(bool value) const { qpdflinkmodel_setitemdata_isbase = value; }
    inline void setQPdfLinkModel_ClearItemData_IsBase(bool value) const { qpdflinkmodel_clearitemdata_isbase = value; }
    inline void setQPdfLinkModel_MimeTypes_IsBase(bool value) const { qpdflinkmodel_mimetypes_isbase = value; }
    inline void setQPdfLinkModel_MimeData_IsBase(bool value) const { qpdflinkmodel_mimedata_isbase = value; }
    inline void setQPdfLinkModel_CanDropMimeData_IsBase(bool value) const { qpdflinkmodel_candropmimedata_isbase = value; }
    inline void setQPdfLinkModel_SupportedDropActions_IsBase(bool value) const { qpdflinkmodel_supporteddropactions_isbase = value; }
    inline void setQPdfLinkModel_SupportedDragActions_IsBase(bool value) const { qpdflinkmodel_supporteddragactions_isbase = value; }
    inline void setQPdfLinkModel_InsertRows_IsBase(bool value) const { qpdflinkmodel_insertrows_isbase = value; }
    inline void setQPdfLinkModel_InsertColumns_IsBase(bool value) const { qpdflinkmodel_insertcolumns_isbase = value; }
    inline void setQPdfLinkModel_RemoveRows_IsBase(bool value) const { qpdflinkmodel_removerows_isbase = value; }
    inline void setQPdfLinkModel_RemoveColumns_IsBase(bool value) const { qpdflinkmodel_removecolumns_isbase = value; }
    inline void setQPdfLinkModel_MoveRows_IsBase(bool value) const { qpdflinkmodel_moverows_isbase = value; }
    inline void setQPdfLinkModel_MoveColumns_IsBase(bool value) const { qpdflinkmodel_movecolumns_isbase = value; }
    inline void setQPdfLinkModel_FetchMore_IsBase(bool value) const { qpdflinkmodel_fetchmore_isbase = value; }
    inline void setQPdfLinkModel_CanFetchMore_IsBase(bool value) const { qpdflinkmodel_canfetchmore_isbase = value; }
    inline void setQPdfLinkModel_Sort_IsBase(bool value) const { qpdflinkmodel_sort_isbase = value; }
    inline void setQPdfLinkModel_Buddy_IsBase(bool value) const { qpdflinkmodel_buddy_isbase = value; }
    inline void setQPdfLinkModel_Match_IsBase(bool value) const { qpdflinkmodel_match_isbase = value; }
    inline void setQPdfLinkModel_Span_IsBase(bool value) const { qpdflinkmodel_span_isbase = value; }
    inline void setQPdfLinkModel_MultiData_IsBase(bool value) const { qpdflinkmodel_multidata_isbase = value; }
    inline void setQPdfLinkModel_Submit_IsBase(bool value) const { qpdflinkmodel_submit_isbase = value; }
    inline void setQPdfLinkModel_Revert_IsBase(bool value) const { qpdflinkmodel_revert_isbase = value; }
    inline void setQPdfLinkModel_ResetInternalData_IsBase(bool value) const { qpdflinkmodel_resetinternaldata_isbase = value; }
    inline void setQPdfLinkModel_Event_IsBase(bool value) const { qpdflinkmodel_event_isbase = value; }
    inline void setQPdfLinkModel_EventFilter_IsBase(bool value) const { qpdflinkmodel_eventfilter_isbase = value; }
    inline void setQPdfLinkModel_TimerEvent_IsBase(bool value) const { qpdflinkmodel_timerevent_isbase = value; }
    inline void setQPdfLinkModel_ChildEvent_IsBase(bool value) const { qpdflinkmodel_childevent_isbase = value; }
    inline void setQPdfLinkModel_CustomEvent_IsBase(bool value) const { qpdflinkmodel_customevent_isbase = value; }
    inline void setQPdfLinkModel_ConnectNotify_IsBase(bool value) const { qpdflinkmodel_connectnotify_isbase = value; }
    inline void setQPdfLinkModel_DisconnectNotify_IsBase(bool value) const { qpdflinkmodel_disconnectnotify_isbase = value; }
    inline void setQPdfLinkModel_CreateIndex_IsBase(bool value) const { qpdflinkmodel_createindex_isbase = value; }
    inline void setQPdfLinkModel_EncodeData_IsBase(bool value) const { qpdflinkmodel_encodedata_isbase = value; }
    inline void setQPdfLinkModel_DecodeData_IsBase(bool value) const { qpdflinkmodel_decodedata_isbase = value; }
    inline void setQPdfLinkModel_BeginInsertRows_IsBase(bool value) const { qpdflinkmodel_begininsertrows_isbase = value; }
    inline void setQPdfLinkModel_EndInsertRows_IsBase(bool value) const { qpdflinkmodel_endinsertrows_isbase = value; }
    inline void setQPdfLinkModel_BeginRemoveRows_IsBase(bool value) const { qpdflinkmodel_beginremoverows_isbase = value; }
    inline void setQPdfLinkModel_EndRemoveRows_IsBase(bool value) const { qpdflinkmodel_endremoverows_isbase = value; }
    inline void setQPdfLinkModel_BeginMoveRows_IsBase(bool value) const { qpdflinkmodel_beginmoverows_isbase = value; }
    inline void setQPdfLinkModel_EndMoveRows_IsBase(bool value) const { qpdflinkmodel_endmoverows_isbase = value; }
    inline void setQPdfLinkModel_BeginInsertColumns_IsBase(bool value) const { qpdflinkmodel_begininsertcolumns_isbase = value; }
    inline void setQPdfLinkModel_EndInsertColumns_IsBase(bool value) const { qpdflinkmodel_endinsertcolumns_isbase = value; }
    inline void setQPdfLinkModel_BeginRemoveColumns_IsBase(bool value) const { qpdflinkmodel_beginremovecolumns_isbase = value; }
    inline void setQPdfLinkModel_EndRemoveColumns_IsBase(bool value) const { qpdflinkmodel_endremovecolumns_isbase = value; }
    inline void setQPdfLinkModel_BeginMoveColumns_IsBase(bool value) const { qpdflinkmodel_beginmovecolumns_isbase = value; }
    inline void setQPdfLinkModel_EndMoveColumns_IsBase(bool value) const { qpdflinkmodel_endmovecolumns_isbase = value; }
    inline void setQPdfLinkModel_BeginResetModel_IsBase(bool value) const { qpdflinkmodel_beginresetmodel_isbase = value; }
    inline void setQPdfLinkModel_EndResetModel_IsBase(bool value) const { qpdflinkmodel_endresetmodel_isbase = value; }
    inline void setQPdfLinkModel_ChangePersistentIndex_IsBase(bool value) const { qpdflinkmodel_changepersistentindex_isbase = value; }
    inline void setQPdfLinkModel_ChangePersistentIndexList_IsBase(bool value) const { qpdflinkmodel_changepersistentindexlist_isbase = value; }
    inline void setQPdfLinkModel_PersistentIndexList_IsBase(bool value) const { qpdflinkmodel_persistentindexlist_isbase = value; }
    inline void setQPdfLinkModel_Sender_IsBase(bool value) const { qpdflinkmodel_sender_isbase = value; }
    inline void setQPdfLinkModel_SenderSignalIndex_IsBase(bool value) const { qpdflinkmodel_sendersignalindex_isbase = value; }
    inline void setQPdfLinkModel_Receivers_IsBase(bool value) const { qpdflinkmodel_receivers_isbase = value; }
    inline void setQPdfLinkModel_IsSignalConnected_IsBase(bool value) const { qpdflinkmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdflinkmodel_metacall_isbase) {
            qpdflinkmodel_metacall_isbase = false;
            return QPdfLinkModel::qt_metacall(param1, param2, param3);
        } else if (qpdflinkmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpdflinkmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfLinkModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdflinkmodel_rolenames_isbase) {
            qpdflinkmodel_rolenames_isbase = false;
            return QPdfLinkModel::roleNames();
        } else if (qpdflinkmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qpdflinkmodel_rolenames_callback();
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
            return QPdfLinkModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdflinkmodel_rowcount_isbase) {
            qpdflinkmodel_rowcount_isbase = false;
            return QPdfLinkModel::rowCount(parent);
        } else if (qpdflinkmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qpdflinkmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfLinkModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdflinkmodel_data_isbase) {
            qpdflinkmodel_data_isbase = false;
            return QPdfLinkModel::data(index, role);
        } else if (qpdflinkmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = qpdflinkmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QPdfLinkModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdflinkmodel_index_isbase) {
            qpdflinkmodel_index_isbase = false;
            return QPdfLinkModel::index(row, column, parent);
        } else if (qpdflinkmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qpdflinkmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPdfLinkModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdflinkmodel_sibling_isbase) {
            qpdflinkmodel_sibling_isbase = false;
            return QPdfLinkModel::sibling(row, column, idx);
        } else if (qpdflinkmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qpdflinkmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPdfLinkModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdflinkmodel_dropmimedata_isbase) {
            qpdflinkmodel_dropmimedata_isbase = false;
            return QPdfLinkModel::dropMimeData(data, action, row, column, parent);
        } else if (qpdflinkmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfLinkModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdflinkmodel_flags_isbase) {
            qpdflinkmodel_flags_isbase = false;
            return QPdfLinkModel::flags(index);
        } else if (qpdflinkmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qpdflinkmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QPdfLinkModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdflinkmodel_setdata_isbase) {
            qpdflinkmodel_setdata_isbase = false;
            return QPdfLinkModel::setData(index, value, role);
        } else if (qpdflinkmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qpdflinkmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfLinkModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdflinkmodel_headerdata_isbase) {
            qpdflinkmodel_headerdata_isbase = false;
            return QPdfLinkModel::headerData(section, orientation, role);
        } else if (qpdflinkmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qpdflinkmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPdfLinkModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdflinkmodel_setheaderdata_isbase) {
            qpdflinkmodel_setheaderdata_isbase = false;
            return QPdfLinkModel::setHeaderData(section, orientation, value, role);
        } else if (qpdflinkmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qpdflinkmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QPdfLinkModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdflinkmodel_itemdata_isbase) {
            qpdflinkmodel_itemdata_isbase = false;
            return QPdfLinkModel::itemData(index);
        } else if (qpdflinkmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qpdflinkmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QPdfLinkModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdflinkmodel_setitemdata_isbase) {
            qpdflinkmodel_setitemdata_isbase = false;
            return QPdfLinkModel::setItemData(index, roles);
        } else if (qpdflinkmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qpdflinkmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfLinkModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdflinkmodel_clearitemdata_isbase) {
            qpdflinkmodel_clearitemdata_isbase = false;
            return QPdfLinkModel::clearItemData(index);
        } else if (qpdflinkmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qpdflinkmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfLinkModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qpdflinkmodel_mimetypes_isbase) {
            qpdflinkmodel_mimetypes_isbase = false;
            return QPdfLinkModel::mimeTypes();
        } else if (qpdflinkmodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qpdflinkmodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QPdfLinkModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qpdflinkmodel_mimedata_isbase) {
            qpdflinkmodel_mimedata_isbase = false;
            return QPdfLinkModel::mimeData(indexes);
        } else if (qpdflinkmodel_mimedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = qpdflinkmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfLinkModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdflinkmodel_candropmimedata_isbase) {
            qpdflinkmodel_candropmimedata_isbase = false;
            return QPdfLinkModel::canDropMimeData(data, action, row, column, parent);
        } else if (qpdflinkmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfLinkModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdflinkmodel_supporteddropactions_isbase) {
            qpdflinkmodel_supporteddropactions_isbase = false;
            return QPdfLinkModel::supportedDropActions();
        } else if (qpdflinkmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qpdflinkmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QPdfLinkModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdflinkmodel_supporteddragactions_isbase) {
            qpdflinkmodel_supporteddragactions_isbase = false;
            return QPdfLinkModel::supportedDragActions();
        } else if (qpdflinkmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qpdflinkmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QPdfLinkModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_insertrows_isbase) {
            qpdflinkmodel_insertrows_isbase = false;
            return QPdfLinkModel::insertRows(row, count, parent);
        } else if (qpdflinkmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfLinkModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_insertcolumns_isbase) {
            qpdflinkmodel_insertcolumns_isbase = false;
            return QPdfLinkModel::insertColumns(column, count, parent);
        } else if (qpdflinkmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfLinkModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_removerows_isbase) {
            qpdflinkmodel_removerows_isbase = false;
            return QPdfLinkModel::removeRows(row, count, parent);
        } else if (qpdflinkmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfLinkModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_removecolumns_isbase) {
            qpdflinkmodel_removecolumns_isbase = false;
            return QPdfLinkModel::removeColumns(column, count, parent);
        } else if (qpdflinkmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfLinkModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdflinkmodel_moverows_isbase) {
            qpdflinkmodel_moverows_isbase = false;
            return QPdfLinkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qpdflinkmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qpdflinkmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfLinkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdflinkmodel_movecolumns_isbase) {
            qpdflinkmodel_movecolumns_isbase = false;
            return QPdfLinkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qpdflinkmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qpdflinkmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfLinkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdflinkmodel_fetchmore_isbase) {
            qpdflinkmodel_fetchmore_isbase = false;
            QPdfLinkModel::fetchMore(parent);
        } else if (qpdflinkmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qpdflinkmodel_fetchmore_callback(this, cbval1);
        } else {
            QPdfLinkModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdflinkmodel_canfetchmore_isbase) {
            qpdflinkmodel_canfetchmore_isbase = false;
            return QPdfLinkModel::canFetchMore(parent);
        } else if (qpdflinkmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qpdflinkmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfLinkModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdflinkmodel_sort_isbase) {
            qpdflinkmodel_sort_isbase = false;
            QPdfLinkModel::sort(column, order);
        } else if (qpdflinkmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qpdflinkmodel_sort_callback(this, cbval1, cbval2);
        } else {
            QPdfLinkModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdflinkmodel_buddy_isbase) {
            qpdflinkmodel_buddy_isbase = false;
            return QPdfLinkModel::buddy(index);
        } else if (qpdflinkmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qpdflinkmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPdfLinkModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdflinkmodel_match_isbase) {
            qpdflinkmodel_match_isbase = false;
            return QPdfLinkModel::match(start, role, value, hits, flags);
        } else if (qpdflinkmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qpdflinkmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QPdfLinkModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdflinkmodel_span_isbase) {
            qpdflinkmodel_span_isbase = false;
            return QPdfLinkModel::span(index);
        } else if (qpdflinkmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qpdflinkmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPdfLinkModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdflinkmodel_multidata_isbase) {
            qpdflinkmodel_multidata_isbase = false;
            QPdfLinkModel::multiData(index, roleDataSpan);
        } else if (qpdflinkmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qpdflinkmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QPdfLinkModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdflinkmodel_submit_isbase) {
            qpdflinkmodel_submit_isbase = false;
            return QPdfLinkModel::submit();
        } else if (qpdflinkmodel_submit_callback != nullptr) {
            bool callback_ret = qpdflinkmodel_submit_callback();
            return callback_ret;
        } else {
            return QPdfLinkModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdflinkmodel_revert_isbase) {
            qpdflinkmodel_revert_isbase = false;
            QPdfLinkModel::revert();
        } else if (qpdflinkmodel_revert_callback != nullptr) {
            qpdflinkmodel_revert_callback();
        } else {
            QPdfLinkModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdflinkmodel_resetinternaldata_isbase) {
            qpdflinkmodel_resetinternaldata_isbase = false;
            QPdfLinkModel::resetInternalData();
        } else if (qpdflinkmodel_resetinternaldata_callback != nullptr) {
            qpdflinkmodel_resetinternaldata_callback();
        } else {
            QPdfLinkModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdflinkmodel_event_isbase) {
            qpdflinkmodel_event_isbase = false;
            return QPdfLinkModel::event(event);
        } else if (qpdflinkmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpdflinkmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfLinkModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdflinkmodel_eventfilter_isbase) {
            qpdflinkmodel_eventfilter_isbase = false;
            return QPdfLinkModel::eventFilter(watched, event);
        } else if (qpdflinkmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpdflinkmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfLinkModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdflinkmodel_timerevent_isbase) {
            qpdflinkmodel_timerevent_isbase = false;
            QPdfLinkModel::timerEvent(event);
        } else if (qpdflinkmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpdflinkmodel_timerevent_callback(this, cbval1);
        } else {
            QPdfLinkModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdflinkmodel_childevent_isbase) {
            qpdflinkmodel_childevent_isbase = false;
            QPdfLinkModel::childEvent(event);
        } else if (qpdflinkmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpdflinkmodel_childevent_callback(this, cbval1);
        } else {
            QPdfLinkModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdflinkmodel_customevent_isbase) {
            qpdflinkmodel_customevent_isbase = false;
            QPdfLinkModel::customEvent(event);
        } else if (qpdflinkmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdflinkmodel_customevent_callback(this, cbval1);
        } else {
            QPdfLinkModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdflinkmodel_connectnotify_isbase) {
            qpdflinkmodel_connectnotify_isbase = false;
            QPdfLinkModel::connectNotify(signal);
        } else if (qpdflinkmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdflinkmodel_connectnotify_callback(this, cbval1);
        } else {
            QPdfLinkModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdflinkmodel_disconnectnotify_isbase) {
            qpdflinkmodel_disconnectnotify_isbase = false;
            QPdfLinkModel::disconnectNotify(signal);
        } else if (qpdflinkmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdflinkmodel_disconnectnotify_callback(this, cbval1);
        } else {
            QPdfLinkModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qpdflinkmodel_createindex_isbase) {
            qpdflinkmodel_createindex_isbase = false;
            return QPdfLinkModel::createIndex(row, column);
        } else if (qpdflinkmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qpdflinkmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QPdfLinkModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qpdflinkmodel_encodedata_isbase) {
            qpdflinkmodel_encodedata_isbase = false;
            QPdfLinkModel::encodeData(indexes, stream);
        } else if (qpdflinkmodel_encodedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
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

            qpdflinkmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QPdfLinkModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qpdflinkmodel_decodedata_isbase) {
            qpdflinkmodel_decodedata_isbase = false;
            return QPdfLinkModel::decodeData(row, column, parent, stream);
        } else if (qpdflinkmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qpdflinkmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QPdfLinkModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qpdflinkmodel_begininsertrows_isbase) {
            qpdflinkmodel_begininsertrows_isbase = false;
            QPdfLinkModel::beginInsertRows(parent, first, last);
        } else if (qpdflinkmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdflinkmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfLinkModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qpdflinkmodel_endinsertrows_isbase) {
            qpdflinkmodel_endinsertrows_isbase = false;
            QPdfLinkModel::endInsertRows();
        } else if (qpdflinkmodel_endinsertrows_callback != nullptr) {
            qpdflinkmodel_endinsertrows_callback();
        } else {
            QPdfLinkModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qpdflinkmodel_beginremoverows_isbase) {
            qpdflinkmodel_beginremoverows_isbase = false;
            QPdfLinkModel::beginRemoveRows(parent, first, last);
        } else if (qpdflinkmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdflinkmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfLinkModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qpdflinkmodel_endremoverows_isbase) {
            qpdflinkmodel_endremoverows_isbase = false;
            QPdfLinkModel::endRemoveRows();
        } else if (qpdflinkmodel_endremoverows_callback != nullptr) {
            qpdflinkmodel_endremoverows_callback();
        } else {
            QPdfLinkModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qpdflinkmodel_beginmoverows_isbase) {
            qpdflinkmodel_beginmoverows_isbase = false;
            return QPdfLinkModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qpdflinkmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qpdflinkmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfLinkModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qpdflinkmodel_endmoverows_isbase) {
            qpdflinkmodel_endmoverows_isbase = false;
            QPdfLinkModel::endMoveRows();
        } else if (qpdflinkmodel_endmoverows_callback != nullptr) {
            qpdflinkmodel_endmoverows_callback();
        } else {
            QPdfLinkModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qpdflinkmodel_begininsertcolumns_isbase) {
            qpdflinkmodel_begininsertcolumns_isbase = false;
            QPdfLinkModel::beginInsertColumns(parent, first, last);
        } else if (qpdflinkmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdflinkmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfLinkModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qpdflinkmodel_endinsertcolumns_isbase) {
            qpdflinkmodel_endinsertcolumns_isbase = false;
            QPdfLinkModel::endInsertColumns();
        } else if (qpdflinkmodel_endinsertcolumns_callback != nullptr) {
            qpdflinkmodel_endinsertcolumns_callback();
        } else {
            QPdfLinkModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qpdflinkmodel_beginremovecolumns_isbase) {
            qpdflinkmodel_beginremovecolumns_isbase = false;
            QPdfLinkModel::beginRemoveColumns(parent, first, last);
        } else if (qpdflinkmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qpdflinkmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPdfLinkModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qpdflinkmodel_endremovecolumns_isbase) {
            qpdflinkmodel_endremovecolumns_isbase = false;
            QPdfLinkModel::endRemoveColumns();
        } else if (qpdflinkmodel_endremovecolumns_callback != nullptr) {
            qpdflinkmodel_endremovecolumns_callback();
        } else {
            QPdfLinkModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qpdflinkmodel_beginmovecolumns_isbase) {
            qpdflinkmodel_beginmovecolumns_isbase = false;
            return QPdfLinkModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qpdflinkmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qpdflinkmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QPdfLinkModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qpdflinkmodel_endmovecolumns_isbase) {
            qpdflinkmodel_endmovecolumns_isbase = false;
            QPdfLinkModel::endMoveColumns();
        } else if (qpdflinkmodel_endmovecolumns_callback != nullptr) {
            qpdflinkmodel_endmovecolumns_callback();
        } else {
            QPdfLinkModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qpdflinkmodel_beginresetmodel_isbase) {
            qpdflinkmodel_beginresetmodel_isbase = false;
            QPdfLinkModel::beginResetModel();
        } else if (qpdflinkmodel_beginresetmodel_callback != nullptr) {
            qpdflinkmodel_beginresetmodel_callback();
        } else {
            QPdfLinkModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qpdflinkmodel_endresetmodel_isbase) {
            qpdflinkmodel_endresetmodel_isbase = false;
            QPdfLinkModel::endResetModel();
        } else if (qpdflinkmodel_endresetmodel_callback != nullptr) {
            qpdflinkmodel_endresetmodel_callback();
        } else {
            QPdfLinkModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qpdflinkmodel_changepersistentindex_isbase) {
            qpdflinkmodel_changepersistentindex_isbase = false;
            QPdfLinkModel::changePersistentIndex(from, to);
        } else if (qpdflinkmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qpdflinkmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QPdfLinkModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qpdflinkmodel_changepersistentindexlist_isbase) {
            qpdflinkmodel_changepersistentindexlist_isbase = false;
            QPdfLinkModel::changePersistentIndexList(from, to);
        } else if (qpdflinkmodel_changepersistentindexlist_callback != nullptr) {
            const QList<QModelIndex>& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * from_ret.size()));
            for (qsizetype i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * to_ret.size()));
            for (qsizetype i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            qpdflinkmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QPdfLinkModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qpdflinkmodel_persistentindexlist_isbase) {
            qpdflinkmodel_persistentindexlist_isbase = false;
            return QPdfLinkModel::persistentIndexList();
        } else if (qpdflinkmodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qpdflinkmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QPdfLinkModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdflinkmodel_sender_isbase) {
            qpdflinkmodel_sender_isbase = false;
            return QPdfLinkModel::sender();
        } else if (qpdflinkmodel_sender_callback != nullptr) {
            QObject* callback_ret = qpdflinkmodel_sender_callback();
            return callback_ret;
        } else {
            return QPdfLinkModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdflinkmodel_sendersignalindex_isbase) {
            qpdflinkmodel_sendersignalindex_isbase = false;
            return QPdfLinkModel::senderSignalIndex();
        } else if (qpdflinkmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qpdflinkmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfLinkModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdflinkmodel_receivers_isbase) {
            qpdflinkmodel_receivers_isbase = false;
            return QPdfLinkModel::receivers(signal);
        } else if (qpdflinkmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpdflinkmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfLinkModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdflinkmodel_issignalconnected_isbase) {
            qpdflinkmodel_issignalconnected_isbase = false;
            return QPdfLinkModel::isSignalConnected(signal);
        } else if (qpdflinkmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpdflinkmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfLinkModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPdfLinkModel_ResetInternalData(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseResetInternalData(QPdfLinkModel* self);
    friend void QPdfLinkModel_TimerEvent(QPdfLinkModel* self, QTimerEvent* event);
    friend void QPdfLinkModel_QBaseTimerEvent(QPdfLinkModel* self, QTimerEvent* event);
    friend void QPdfLinkModel_ChildEvent(QPdfLinkModel* self, QChildEvent* event);
    friend void QPdfLinkModel_QBaseChildEvent(QPdfLinkModel* self, QChildEvent* event);
    friend void QPdfLinkModel_CustomEvent(QPdfLinkModel* self, QEvent* event);
    friend void QPdfLinkModel_QBaseCustomEvent(QPdfLinkModel* self, QEvent* event);
    friend void QPdfLinkModel_ConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
    friend void QPdfLinkModel_QBaseConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
    friend void QPdfLinkModel_DisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
    friend void QPdfLinkModel_QBaseDisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
    friend QModelIndex* QPdfLinkModel_CreateIndex(const QPdfLinkModel* self, int row, int column);
    friend QModelIndex* QPdfLinkModel_QBaseCreateIndex(const QPdfLinkModel* self, int row, int column);
    friend void QPdfLinkModel_EncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QPdfLinkModel_QBaseEncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QPdfLinkModel_DecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QPdfLinkModel_QBaseDecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QPdfLinkModel_BeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_QBaseBeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_EndInsertRows(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndInsertRows(QPdfLinkModel* self);
    friend void QPdfLinkModel_BeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_QBaseBeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_EndRemoveRows(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndRemoveRows(QPdfLinkModel* self);
    friend bool QPdfLinkModel_BeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QPdfLinkModel_QBaseBeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QPdfLinkModel_EndMoveRows(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndMoveRows(QPdfLinkModel* self);
    friend void QPdfLinkModel_BeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_QBaseBeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_EndInsertColumns(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndInsertColumns(QPdfLinkModel* self);
    friend void QPdfLinkModel_BeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_QBaseBeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfLinkModel_EndRemoveColumns(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndRemoveColumns(QPdfLinkModel* self);
    friend bool QPdfLinkModel_BeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QPdfLinkModel_QBaseBeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QPdfLinkModel_EndMoveColumns(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndMoveColumns(QPdfLinkModel* self);
    friend void QPdfLinkModel_BeginResetModel(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseBeginResetModel(QPdfLinkModel* self);
    friend void QPdfLinkModel_EndResetModel(QPdfLinkModel* self);
    friend void QPdfLinkModel_QBaseEndResetModel(QPdfLinkModel* self);
    friend void QPdfLinkModel_ChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QPdfLinkModel_QBaseChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QPdfLinkModel_ChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QPdfLinkModel_QBaseChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QPdfLinkModel_PersistentIndexList(const QPdfLinkModel* self);
    friend libqt_list /* of QModelIndex* */ QPdfLinkModel_QBasePersistentIndexList(const QPdfLinkModel* self);
    friend QObject* QPdfLinkModel_Sender(const QPdfLinkModel* self);
    friend QObject* QPdfLinkModel_QBaseSender(const QPdfLinkModel* self);
    friend int QPdfLinkModel_SenderSignalIndex(const QPdfLinkModel* self);
    friend int QPdfLinkModel_QBaseSenderSignalIndex(const QPdfLinkModel* self);
    friend int QPdfLinkModel_Receivers(const QPdfLinkModel* self, const char* signal);
    friend int QPdfLinkModel_QBaseReceivers(const QPdfLinkModel* self, const char* signal);
    friend bool QPdfLinkModel_IsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal);
    friend bool QPdfLinkModel_QBaseIsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal);
};

#endif
