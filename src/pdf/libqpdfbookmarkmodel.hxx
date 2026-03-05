#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFBOOKMARKMODEL_H
#define SRC_PDFC_LIBVIRTUALQPDFBOOKMARKMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfBookmarkModel so that we can call protected methods
class VirtualQPdfBookmarkModel final : public QPdfBookmarkModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfBookmarkModel = true;

    // Virtual class public types (including callbacks)
    using QPdfBookmarkModel_MetaObject_Callback = QMetaObject* (*)();
    using QPdfBookmarkModel_Metacast_Callback = void* (*)(QPdfBookmarkModel*, const char*);
    using QPdfBookmarkModel_Metacall_Callback = int (*)(QPdfBookmarkModel*, int, int, void**);
    using QPdfBookmarkModel_Data_Callback = QVariant* (*)(const QPdfBookmarkModel*, QModelIndex*, int);
    using QPdfBookmarkModel_Index_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_Parent_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_RowCount_Callback = int (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_ColumnCount_Callback = int (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QPdfBookmarkModel_Sibling_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_HasChildren_Callback = bool (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_SetData_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, QVariant*, int);
    using QPdfBookmarkModel_HeaderData_Callback = QVariant* (*)(const QPdfBookmarkModel*, int, int, int);
    using QPdfBookmarkModel_SetHeaderData_Callback = bool (*)(QPdfBookmarkModel*, int, int, QVariant*, int);
    using QPdfBookmarkModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_SetItemData_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QPdfBookmarkModel_ClearItemData_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_MimeTypes_Callback = const char** (*)();
    using QPdfBookmarkModel_MimeData_Callback = QMimeData* (*)(const QPdfBookmarkModel*, libqt_list /* of QModelIndex* */);
    using QPdfBookmarkModel_CanDropMimeData_Callback = bool (*)(const QPdfBookmarkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfBookmarkModel_DropMimeData_Callback = bool (*)(QPdfBookmarkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfBookmarkModel_SupportedDropActions_Callback = int (*)();
    using QPdfBookmarkModel_SupportedDragActions_Callback = int (*)();
    using QPdfBookmarkModel_InsertRows_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_InsertColumns_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_RemoveRows_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_RemoveColumns_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_MoveRows_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfBookmarkModel_MoveColumns_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfBookmarkModel_FetchMore_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_CanFetchMore_Callback = bool (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_Flags_Callback = int (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_Sort_Callback = void (*)(QPdfBookmarkModel*, int, int);
    using QPdfBookmarkModel_Buddy_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QPdfBookmarkModel*, QModelIndex*, int, QVariant*, int, int);
    using QPdfBookmarkModel_Span_Callback = QSize* (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_MultiData_Callback = void (*)(const QPdfBookmarkModel*, QModelIndex*, QModelRoleDataSpan*);
    using QPdfBookmarkModel_Submit_Callback = bool (*)();
    using QPdfBookmarkModel_Revert_Callback = void (*)();
    using QPdfBookmarkModel_ResetInternalData_Callback = void (*)();
    using QPdfBookmarkModel_Event_Callback = bool (*)(QPdfBookmarkModel*, QEvent*);
    using QPdfBookmarkModel_EventFilter_Callback = bool (*)(QPdfBookmarkModel*, QObject*, QEvent*);
    using QPdfBookmarkModel_TimerEvent_Callback = void (*)(QPdfBookmarkModel*, QTimerEvent*);
    using QPdfBookmarkModel_ChildEvent_Callback = void (*)(QPdfBookmarkModel*, QChildEvent*);
    using QPdfBookmarkModel_CustomEvent_Callback = void (*)(QPdfBookmarkModel*, QEvent*);
    using QPdfBookmarkModel_ConnectNotify_Callback = void (*)(QPdfBookmarkModel*, QMetaMethod*);
    using QPdfBookmarkModel_DisconnectNotify_Callback = void (*)(QPdfBookmarkModel*, QMetaMethod*);
    using QPdfBookmarkModel_CreateIndex_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, int, int);
    using QPdfBookmarkModel_EncodeData_Callback = void (*)(const QPdfBookmarkModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QPdfBookmarkModel_DecodeData_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*, QDataStream*);
    using QPdfBookmarkModel_BeginInsertRows_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*, int, int);
    using QPdfBookmarkModel_EndInsertRows_Callback = void (*)();
    using QPdfBookmarkModel_BeginRemoveRows_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*, int, int);
    using QPdfBookmarkModel_EndRemoveRows_Callback = void (*)();
    using QPdfBookmarkModel_BeginMoveRows_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfBookmarkModel_EndMoveRows_Callback = void (*)();
    using QPdfBookmarkModel_BeginInsertColumns_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*, int, int);
    using QPdfBookmarkModel_EndInsertColumns_Callback = void (*)();
    using QPdfBookmarkModel_BeginRemoveColumns_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*, int, int);
    using QPdfBookmarkModel_EndRemoveColumns_Callback = void (*)();
    using QPdfBookmarkModel_BeginMoveColumns_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfBookmarkModel_EndMoveColumns_Callback = void (*)();
    using QPdfBookmarkModel_BeginResetModel_Callback = void (*)();
    using QPdfBookmarkModel_EndResetModel_Callback = void (*)();
    using QPdfBookmarkModel_ChangePersistentIndex_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*, QModelIndex*);
    using QPdfBookmarkModel_ChangePersistentIndexList_Callback = void (*)(QPdfBookmarkModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QPdfBookmarkModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QPdfBookmarkModel_Sender_Callback = QObject* (*)();
    using QPdfBookmarkModel_SenderSignalIndex_Callback = int (*)();
    using QPdfBookmarkModel_Receivers_Callback = int (*)(const QPdfBookmarkModel*, const char*);
    using QPdfBookmarkModel_IsSignalConnected_Callback = bool (*)(const QPdfBookmarkModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPdfBookmarkModel_MetaObject_Callback qpdfbookmarkmodel_metaobject_callback = nullptr;
    QPdfBookmarkModel_Metacast_Callback qpdfbookmarkmodel_metacast_callback = nullptr;
    QPdfBookmarkModel_Metacall_Callback qpdfbookmarkmodel_metacall_callback = nullptr;
    QPdfBookmarkModel_Data_Callback qpdfbookmarkmodel_data_callback = nullptr;
    QPdfBookmarkModel_Index_Callback qpdfbookmarkmodel_index_callback = nullptr;
    QPdfBookmarkModel_Parent_Callback qpdfbookmarkmodel_parent_callback = nullptr;
    QPdfBookmarkModel_RowCount_Callback qpdfbookmarkmodel_rowcount_callback = nullptr;
    QPdfBookmarkModel_ColumnCount_Callback qpdfbookmarkmodel_columncount_callback = nullptr;
    QPdfBookmarkModel_RoleNames_Callback qpdfbookmarkmodel_rolenames_callback = nullptr;
    QPdfBookmarkModel_Sibling_Callback qpdfbookmarkmodel_sibling_callback = nullptr;
    QPdfBookmarkModel_HasChildren_Callback qpdfbookmarkmodel_haschildren_callback = nullptr;
    QPdfBookmarkModel_SetData_Callback qpdfbookmarkmodel_setdata_callback = nullptr;
    QPdfBookmarkModel_HeaderData_Callback qpdfbookmarkmodel_headerdata_callback = nullptr;
    QPdfBookmarkModel_SetHeaderData_Callback qpdfbookmarkmodel_setheaderdata_callback = nullptr;
    QPdfBookmarkModel_ItemData_Callback qpdfbookmarkmodel_itemdata_callback = nullptr;
    QPdfBookmarkModel_SetItemData_Callback qpdfbookmarkmodel_setitemdata_callback = nullptr;
    QPdfBookmarkModel_ClearItemData_Callback qpdfbookmarkmodel_clearitemdata_callback = nullptr;
    QPdfBookmarkModel_MimeTypes_Callback qpdfbookmarkmodel_mimetypes_callback = nullptr;
    QPdfBookmarkModel_MimeData_Callback qpdfbookmarkmodel_mimedata_callback = nullptr;
    QPdfBookmarkModel_CanDropMimeData_Callback qpdfbookmarkmodel_candropmimedata_callback = nullptr;
    QPdfBookmarkModel_DropMimeData_Callback qpdfbookmarkmodel_dropmimedata_callback = nullptr;
    QPdfBookmarkModel_SupportedDropActions_Callback qpdfbookmarkmodel_supporteddropactions_callback = nullptr;
    QPdfBookmarkModel_SupportedDragActions_Callback qpdfbookmarkmodel_supporteddragactions_callback = nullptr;
    QPdfBookmarkModel_InsertRows_Callback qpdfbookmarkmodel_insertrows_callback = nullptr;
    QPdfBookmarkModel_InsertColumns_Callback qpdfbookmarkmodel_insertcolumns_callback = nullptr;
    QPdfBookmarkModel_RemoveRows_Callback qpdfbookmarkmodel_removerows_callback = nullptr;
    QPdfBookmarkModel_RemoveColumns_Callback qpdfbookmarkmodel_removecolumns_callback = nullptr;
    QPdfBookmarkModel_MoveRows_Callback qpdfbookmarkmodel_moverows_callback = nullptr;
    QPdfBookmarkModel_MoveColumns_Callback qpdfbookmarkmodel_movecolumns_callback = nullptr;
    QPdfBookmarkModel_FetchMore_Callback qpdfbookmarkmodel_fetchmore_callback = nullptr;
    QPdfBookmarkModel_CanFetchMore_Callback qpdfbookmarkmodel_canfetchmore_callback = nullptr;
    QPdfBookmarkModel_Flags_Callback qpdfbookmarkmodel_flags_callback = nullptr;
    QPdfBookmarkModel_Sort_Callback qpdfbookmarkmodel_sort_callback = nullptr;
    QPdfBookmarkModel_Buddy_Callback qpdfbookmarkmodel_buddy_callback = nullptr;
    QPdfBookmarkModel_Match_Callback qpdfbookmarkmodel_match_callback = nullptr;
    QPdfBookmarkModel_Span_Callback qpdfbookmarkmodel_span_callback = nullptr;
    QPdfBookmarkModel_MultiData_Callback qpdfbookmarkmodel_multidata_callback = nullptr;
    QPdfBookmarkModel_Submit_Callback qpdfbookmarkmodel_submit_callback = nullptr;
    QPdfBookmarkModel_Revert_Callback qpdfbookmarkmodel_revert_callback = nullptr;
    QPdfBookmarkModel_ResetInternalData_Callback qpdfbookmarkmodel_resetinternaldata_callback = nullptr;
    QPdfBookmarkModel_Event_Callback qpdfbookmarkmodel_event_callback = nullptr;
    QPdfBookmarkModel_EventFilter_Callback qpdfbookmarkmodel_eventfilter_callback = nullptr;
    QPdfBookmarkModel_TimerEvent_Callback qpdfbookmarkmodel_timerevent_callback = nullptr;
    QPdfBookmarkModel_ChildEvent_Callback qpdfbookmarkmodel_childevent_callback = nullptr;
    QPdfBookmarkModel_CustomEvent_Callback qpdfbookmarkmodel_customevent_callback = nullptr;
    QPdfBookmarkModel_ConnectNotify_Callback qpdfbookmarkmodel_connectnotify_callback = nullptr;
    QPdfBookmarkModel_DisconnectNotify_Callback qpdfbookmarkmodel_disconnectnotify_callback = nullptr;
    QPdfBookmarkModel_CreateIndex_Callback qpdfbookmarkmodel_createindex_callback = nullptr;
    QPdfBookmarkModel_EncodeData_Callback qpdfbookmarkmodel_encodedata_callback = nullptr;
    QPdfBookmarkModel_DecodeData_Callback qpdfbookmarkmodel_decodedata_callback = nullptr;
    QPdfBookmarkModel_BeginInsertRows_Callback qpdfbookmarkmodel_begininsertrows_callback = nullptr;
    QPdfBookmarkModel_EndInsertRows_Callback qpdfbookmarkmodel_endinsertrows_callback = nullptr;
    QPdfBookmarkModel_BeginRemoveRows_Callback qpdfbookmarkmodel_beginremoverows_callback = nullptr;
    QPdfBookmarkModel_EndRemoveRows_Callback qpdfbookmarkmodel_endremoverows_callback = nullptr;
    QPdfBookmarkModel_BeginMoveRows_Callback qpdfbookmarkmodel_beginmoverows_callback = nullptr;
    QPdfBookmarkModel_EndMoveRows_Callback qpdfbookmarkmodel_endmoverows_callback = nullptr;
    QPdfBookmarkModel_BeginInsertColumns_Callback qpdfbookmarkmodel_begininsertcolumns_callback = nullptr;
    QPdfBookmarkModel_EndInsertColumns_Callback qpdfbookmarkmodel_endinsertcolumns_callback = nullptr;
    QPdfBookmarkModel_BeginRemoveColumns_Callback qpdfbookmarkmodel_beginremovecolumns_callback = nullptr;
    QPdfBookmarkModel_EndRemoveColumns_Callback qpdfbookmarkmodel_endremovecolumns_callback = nullptr;
    QPdfBookmarkModel_BeginMoveColumns_Callback qpdfbookmarkmodel_beginmovecolumns_callback = nullptr;
    QPdfBookmarkModel_EndMoveColumns_Callback qpdfbookmarkmodel_endmovecolumns_callback = nullptr;
    QPdfBookmarkModel_BeginResetModel_Callback qpdfbookmarkmodel_beginresetmodel_callback = nullptr;
    QPdfBookmarkModel_EndResetModel_Callback qpdfbookmarkmodel_endresetmodel_callback = nullptr;
    QPdfBookmarkModel_ChangePersistentIndex_Callback qpdfbookmarkmodel_changepersistentindex_callback = nullptr;
    QPdfBookmarkModel_ChangePersistentIndexList_Callback qpdfbookmarkmodel_changepersistentindexlist_callback = nullptr;
    QPdfBookmarkModel_PersistentIndexList_Callback qpdfbookmarkmodel_persistentindexlist_callback = nullptr;
    QPdfBookmarkModel_Sender_Callback qpdfbookmarkmodel_sender_callback = nullptr;
    QPdfBookmarkModel_SenderSignalIndex_Callback qpdfbookmarkmodel_sendersignalindex_callback = nullptr;
    QPdfBookmarkModel_Receivers_Callback qpdfbookmarkmodel_receivers_callback = nullptr;
    QPdfBookmarkModel_IsSignalConnected_Callback qpdfbookmarkmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfbookmarkmodel_metaobject_isbase = false;
    mutable bool qpdfbookmarkmodel_metacast_isbase = false;
    mutable bool qpdfbookmarkmodel_metacall_isbase = false;
    mutable bool qpdfbookmarkmodel_data_isbase = false;
    mutable bool qpdfbookmarkmodel_index_isbase = false;
    mutable bool qpdfbookmarkmodel_parent_isbase = false;
    mutable bool qpdfbookmarkmodel_rowcount_isbase = false;
    mutable bool qpdfbookmarkmodel_columncount_isbase = false;
    mutable bool qpdfbookmarkmodel_rolenames_isbase = false;
    mutable bool qpdfbookmarkmodel_sibling_isbase = false;
    mutable bool qpdfbookmarkmodel_haschildren_isbase = false;
    mutable bool qpdfbookmarkmodel_setdata_isbase = false;
    mutable bool qpdfbookmarkmodel_headerdata_isbase = false;
    mutable bool qpdfbookmarkmodel_setheaderdata_isbase = false;
    mutable bool qpdfbookmarkmodel_itemdata_isbase = false;
    mutable bool qpdfbookmarkmodel_setitemdata_isbase = false;
    mutable bool qpdfbookmarkmodel_clearitemdata_isbase = false;
    mutable bool qpdfbookmarkmodel_mimetypes_isbase = false;
    mutable bool qpdfbookmarkmodel_mimedata_isbase = false;
    mutable bool qpdfbookmarkmodel_candropmimedata_isbase = false;
    mutable bool qpdfbookmarkmodel_dropmimedata_isbase = false;
    mutable bool qpdfbookmarkmodel_supporteddropactions_isbase = false;
    mutable bool qpdfbookmarkmodel_supporteddragactions_isbase = false;
    mutable bool qpdfbookmarkmodel_insertrows_isbase = false;
    mutable bool qpdfbookmarkmodel_insertcolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_removerows_isbase = false;
    mutable bool qpdfbookmarkmodel_removecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_moverows_isbase = false;
    mutable bool qpdfbookmarkmodel_movecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_fetchmore_isbase = false;
    mutable bool qpdfbookmarkmodel_canfetchmore_isbase = false;
    mutable bool qpdfbookmarkmodel_flags_isbase = false;
    mutable bool qpdfbookmarkmodel_sort_isbase = false;
    mutable bool qpdfbookmarkmodel_buddy_isbase = false;
    mutable bool qpdfbookmarkmodel_match_isbase = false;
    mutable bool qpdfbookmarkmodel_span_isbase = false;
    mutable bool qpdfbookmarkmodel_multidata_isbase = false;
    mutable bool qpdfbookmarkmodel_submit_isbase = false;
    mutable bool qpdfbookmarkmodel_revert_isbase = false;
    mutable bool qpdfbookmarkmodel_resetinternaldata_isbase = false;
    mutable bool qpdfbookmarkmodel_event_isbase = false;
    mutable bool qpdfbookmarkmodel_eventfilter_isbase = false;
    mutable bool qpdfbookmarkmodel_timerevent_isbase = false;
    mutable bool qpdfbookmarkmodel_childevent_isbase = false;
    mutable bool qpdfbookmarkmodel_customevent_isbase = false;
    mutable bool qpdfbookmarkmodel_connectnotify_isbase = false;
    mutable bool qpdfbookmarkmodel_disconnectnotify_isbase = false;
    mutable bool qpdfbookmarkmodel_createindex_isbase = false;
    mutable bool qpdfbookmarkmodel_encodedata_isbase = false;
    mutable bool qpdfbookmarkmodel_decodedata_isbase = false;
    mutable bool qpdfbookmarkmodel_begininsertrows_isbase = false;
    mutable bool qpdfbookmarkmodel_endinsertrows_isbase = false;
    mutable bool qpdfbookmarkmodel_beginremoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_endremoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_beginmoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_endmoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_begininsertcolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_endinsertcolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_beginremovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_endremovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_beginmovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_endmovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_beginresetmodel_isbase = false;
    mutable bool qpdfbookmarkmodel_endresetmodel_isbase = false;
    mutable bool qpdfbookmarkmodel_changepersistentindex_isbase = false;
    mutable bool qpdfbookmarkmodel_changepersistentindexlist_isbase = false;
    mutable bool qpdfbookmarkmodel_persistentindexlist_isbase = false;
    mutable bool qpdfbookmarkmodel_sender_isbase = false;
    mutable bool qpdfbookmarkmodel_sendersignalindex_isbase = false;
    mutable bool qpdfbookmarkmodel_receivers_isbase = false;
    mutable bool qpdfbookmarkmodel_issignalconnected_isbase = false;

  public:
    VirtualQPdfBookmarkModel() : QPdfBookmarkModel() {};
    VirtualQPdfBookmarkModel(QObject* parent) : QPdfBookmarkModel(parent) {};

    // Callback setters
    inline void setQPdfBookmarkModel_MetaObject_Callback(QPdfBookmarkModel_MetaObject_Callback cb) { qpdfbookmarkmodel_metaobject_callback = cb; }
    inline void setQPdfBookmarkModel_Metacast_Callback(QPdfBookmarkModel_Metacast_Callback cb) { qpdfbookmarkmodel_metacast_callback = cb; }
    inline void setQPdfBookmarkModel_Metacall_Callback(QPdfBookmarkModel_Metacall_Callback cb) { qpdfbookmarkmodel_metacall_callback = cb; }
    inline void setQPdfBookmarkModel_Data_Callback(QPdfBookmarkModel_Data_Callback cb) { qpdfbookmarkmodel_data_callback = cb; }
    inline void setQPdfBookmarkModel_Index_Callback(QPdfBookmarkModel_Index_Callback cb) { qpdfbookmarkmodel_index_callback = cb; }
    inline void setQPdfBookmarkModel_Parent_Callback(QPdfBookmarkModel_Parent_Callback cb) { qpdfbookmarkmodel_parent_callback = cb; }
    inline void setQPdfBookmarkModel_RowCount_Callback(QPdfBookmarkModel_RowCount_Callback cb) { qpdfbookmarkmodel_rowcount_callback = cb; }
    inline void setQPdfBookmarkModel_ColumnCount_Callback(QPdfBookmarkModel_ColumnCount_Callback cb) { qpdfbookmarkmodel_columncount_callback = cb; }
    inline void setQPdfBookmarkModel_RoleNames_Callback(QPdfBookmarkModel_RoleNames_Callback cb) { qpdfbookmarkmodel_rolenames_callback = cb; }
    inline void setQPdfBookmarkModel_Sibling_Callback(QPdfBookmarkModel_Sibling_Callback cb) { qpdfbookmarkmodel_sibling_callback = cb; }
    inline void setQPdfBookmarkModel_HasChildren_Callback(QPdfBookmarkModel_HasChildren_Callback cb) { qpdfbookmarkmodel_haschildren_callback = cb; }
    inline void setQPdfBookmarkModel_SetData_Callback(QPdfBookmarkModel_SetData_Callback cb) { qpdfbookmarkmodel_setdata_callback = cb; }
    inline void setQPdfBookmarkModel_HeaderData_Callback(QPdfBookmarkModel_HeaderData_Callback cb) { qpdfbookmarkmodel_headerdata_callback = cb; }
    inline void setQPdfBookmarkModel_SetHeaderData_Callback(QPdfBookmarkModel_SetHeaderData_Callback cb) { qpdfbookmarkmodel_setheaderdata_callback = cb; }
    inline void setQPdfBookmarkModel_ItemData_Callback(QPdfBookmarkModel_ItemData_Callback cb) { qpdfbookmarkmodel_itemdata_callback = cb; }
    inline void setQPdfBookmarkModel_SetItemData_Callback(QPdfBookmarkModel_SetItemData_Callback cb) { qpdfbookmarkmodel_setitemdata_callback = cb; }
    inline void setQPdfBookmarkModel_ClearItemData_Callback(QPdfBookmarkModel_ClearItemData_Callback cb) { qpdfbookmarkmodel_clearitemdata_callback = cb; }
    inline void setQPdfBookmarkModel_MimeTypes_Callback(QPdfBookmarkModel_MimeTypes_Callback cb) { qpdfbookmarkmodel_mimetypes_callback = cb; }
    inline void setQPdfBookmarkModel_MimeData_Callback(QPdfBookmarkModel_MimeData_Callback cb) { qpdfbookmarkmodel_mimedata_callback = cb; }
    inline void setQPdfBookmarkModel_CanDropMimeData_Callback(QPdfBookmarkModel_CanDropMimeData_Callback cb) { qpdfbookmarkmodel_candropmimedata_callback = cb; }
    inline void setQPdfBookmarkModel_DropMimeData_Callback(QPdfBookmarkModel_DropMimeData_Callback cb) { qpdfbookmarkmodel_dropmimedata_callback = cb; }
    inline void setQPdfBookmarkModel_SupportedDropActions_Callback(QPdfBookmarkModel_SupportedDropActions_Callback cb) { qpdfbookmarkmodel_supporteddropactions_callback = cb; }
    inline void setQPdfBookmarkModel_SupportedDragActions_Callback(QPdfBookmarkModel_SupportedDragActions_Callback cb) { qpdfbookmarkmodel_supporteddragactions_callback = cb; }
    inline void setQPdfBookmarkModel_InsertRows_Callback(QPdfBookmarkModel_InsertRows_Callback cb) { qpdfbookmarkmodel_insertrows_callback = cb; }
    inline void setQPdfBookmarkModel_InsertColumns_Callback(QPdfBookmarkModel_InsertColumns_Callback cb) { qpdfbookmarkmodel_insertcolumns_callback = cb; }
    inline void setQPdfBookmarkModel_RemoveRows_Callback(QPdfBookmarkModel_RemoveRows_Callback cb) { qpdfbookmarkmodel_removerows_callback = cb; }
    inline void setQPdfBookmarkModel_RemoveColumns_Callback(QPdfBookmarkModel_RemoveColumns_Callback cb) { qpdfbookmarkmodel_removecolumns_callback = cb; }
    inline void setQPdfBookmarkModel_MoveRows_Callback(QPdfBookmarkModel_MoveRows_Callback cb) { qpdfbookmarkmodel_moverows_callback = cb; }
    inline void setQPdfBookmarkModel_MoveColumns_Callback(QPdfBookmarkModel_MoveColumns_Callback cb) { qpdfbookmarkmodel_movecolumns_callback = cb; }
    inline void setQPdfBookmarkModel_FetchMore_Callback(QPdfBookmarkModel_FetchMore_Callback cb) { qpdfbookmarkmodel_fetchmore_callback = cb; }
    inline void setQPdfBookmarkModel_CanFetchMore_Callback(QPdfBookmarkModel_CanFetchMore_Callback cb) { qpdfbookmarkmodel_canfetchmore_callback = cb; }
    inline void setQPdfBookmarkModel_Flags_Callback(QPdfBookmarkModel_Flags_Callback cb) { qpdfbookmarkmodel_flags_callback = cb; }
    inline void setQPdfBookmarkModel_Sort_Callback(QPdfBookmarkModel_Sort_Callback cb) { qpdfbookmarkmodel_sort_callback = cb; }
    inline void setQPdfBookmarkModel_Buddy_Callback(QPdfBookmarkModel_Buddy_Callback cb) { qpdfbookmarkmodel_buddy_callback = cb; }
    inline void setQPdfBookmarkModel_Match_Callback(QPdfBookmarkModel_Match_Callback cb) { qpdfbookmarkmodel_match_callback = cb; }
    inline void setQPdfBookmarkModel_Span_Callback(QPdfBookmarkModel_Span_Callback cb) { qpdfbookmarkmodel_span_callback = cb; }
    inline void setQPdfBookmarkModel_MultiData_Callback(QPdfBookmarkModel_MultiData_Callback cb) { qpdfbookmarkmodel_multidata_callback = cb; }
    inline void setQPdfBookmarkModel_Submit_Callback(QPdfBookmarkModel_Submit_Callback cb) { qpdfbookmarkmodel_submit_callback = cb; }
    inline void setQPdfBookmarkModel_Revert_Callback(QPdfBookmarkModel_Revert_Callback cb) { qpdfbookmarkmodel_revert_callback = cb; }
    inline void setQPdfBookmarkModel_ResetInternalData_Callback(QPdfBookmarkModel_ResetInternalData_Callback cb) { qpdfbookmarkmodel_resetinternaldata_callback = cb; }
    inline void setQPdfBookmarkModel_Event_Callback(QPdfBookmarkModel_Event_Callback cb) { qpdfbookmarkmodel_event_callback = cb; }
    inline void setQPdfBookmarkModel_EventFilter_Callback(QPdfBookmarkModel_EventFilter_Callback cb) { qpdfbookmarkmodel_eventfilter_callback = cb; }
    inline void setQPdfBookmarkModel_TimerEvent_Callback(QPdfBookmarkModel_TimerEvent_Callback cb) { qpdfbookmarkmodel_timerevent_callback = cb; }
    inline void setQPdfBookmarkModel_ChildEvent_Callback(QPdfBookmarkModel_ChildEvent_Callback cb) { qpdfbookmarkmodel_childevent_callback = cb; }
    inline void setQPdfBookmarkModel_CustomEvent_Callback(QPdfBookmarkModel_CustomEvent_Callback cb) { qpdfbookmarkmodel_customevent_callback = cb; }
    inline void setQPdfBookmarkModel_ConnectNotify_Callback(QPdfBookmarkModel_ConnectNotify_Callback cb) { qpdfbookmarkmodel_connectnotify_callback = cb; }
    inline void setQPdfBookmarkModel_DisconnectNotify_Callback(QPdfBookmarkModel_DisconnectNotify_Callback cb) { qpdfbookmarkmodel_disconnectnotify_callback = cb; }
    inline void setQPdfBookmarkModel_CreateIndex_Callback(QPdfBookmarkModel_CreateIndex_Callback cb) { qpdfbookmarkmodel_createindex_callback = cb; }
    inline void setQPdfBookmarkModel_EncodeData_Callback(QPdfBookmarkModel_EncodeData_Callback cb) { qpdfbookmarkmodel_encodedata_callback = cb; }
    inline void setQPdfBookmarkModel_DecodeData_Callback(QPdfBookmarkModel_DecodeData_Callback cb) { qpdfbookmarkmodel_decodedata_callback = cb; }
    inline void setQPdfBookmarkModel_BeginInsertRows_Callback(QPdfBookmarkModel_BeginInsertRows_Callback cb) { qpdfbookmarkmodel_begininsertrows_callback = cb; }
    inline void setQPdfBookmarkModel_EndInsertRows_Callback(QPdfBookmarkModel_EndInsertRows_Callback cb) { qpdfbookmarkmodel_endinsertrows_callback = cb; }
    inline void setQPdfBookmarkModel_BeginRemoveRows_Callback(QPdfBookmarkModel_BeginRemoveRows_Callback cb) { qpdfbookmarkmodel_beginremoverows_callback = cb; }
    inline void setQPdfBookmarkModel_EndRemoveRows_Callback(QPdfBookmarkModel_EndRemoveRows_Callback cb) { qpdfbookmarkmodel_endremoverows_callback = cb; }
    inline void setQPdfBookmarkModel_BeginMoveRows_Callback(QPdfBookmarkModel_BeginMoveRows_Callback cb) { qpdfbookmarkmodel_beginmoverows_callback = cb; }
    inline void setQPdfBookmarkModel_EndMoveRows_Callback(QPdfBookmarkModel_EndMoveRows_Callback cb) { qpdfbookmarkmodel_endmoverows_callback = cb; }
    inline void setQPdfBookmarkModel_BeginInsertColumns_Callback(QPdfBookmarkModel_BeginInsertColumns_Callback cb) { qpdfbookmarkmodel_begininsertcolumns_callback = cb; }
    inline void setQPdfBookmarkModel_EndInsertColumns_Callback(QPdfBookmarkModel_EndInsertColumns_Callback cb) { qpdfbookmarkmodel_endinsertcolumns_callback = cb; }
    inline void setQPdfBookmarkModel_BeginRemoveColumns_Callback(QPdfBookmarkModel_BeginRemoveColumns_Callback cb) { qpdfbookmarkmodel_beginremovecolumns_callback = cb; }
    inline void setQPdfBookmarkModel_EndRemoveColumns_Callback(QPdfBookmarkModel_EndRemoveColumns_Callback cb) { qpdfbookmarkmodel_endremovecolumns_callback = cb; }
    inline void setQPdfBookmarkModel_BeginMoveColumns_Callback(QPdfBookmarkModel_BeginMoveColumns_Callback cb) { qpdfbookmarkmodel_beginmovecolumns_callback = cb; }
    inline void setQPdfBookmarkModel_EndMoveColumns_Callback(QPdfBookmarkModel_EndMoveColumns_Callback cb) { qpdfbookmarkmodel_endmovecolumns_callback = cb; }
    inline void setQPdfBookmarkModel_BeginResetModel_Callback(QPdfBookmarkModel_BeginResetModel_Callback cb) { qpdfbookmarkmodel_beginresetmodel_callback = cb; }
    inline void setQPdfBookmarkModel_EndResetModel_Callback(QPdfBookmarkModel_EndResetModel_Callback cb) { qpdfbookmarkmodel_endresetmodel_callback = cb; }
    inline void setQPdfBookmarkModel_ChangePersistentIndex_Callback(QPdfBookmarkModel_ChangePersistentIndex_Callback cb) { qpdfbookmarkmodel_changepersistentindex_callback = cb; }
    inline void setQPdfBookmarkModel_ChangePersistentIndexList_Callback(QPdfBookmarkModel_ChangePersistentIndexList_Callback cb) { qpdfbookmarkmodel_changepersistentindexlist_callback = cb; }
    inline void setQPdfBookmarkModel_PersistentIndexList_Callback(QPdfBookmarkModel_PersistentIndexList_Callback cb) { qpdfbookmarkmodel_persistentindexlist_callback = cb; }
    inline void setQPdfBookmarkModel_Sender_Callback(QPdfBookmarkModel_Sender_Callback cb) { qpdfbookmarkmodel_sender_callback = cb; }
    inline void setQPdfBookmarkModel_SenderSignalIndex_Callback(QPdfBookmarkModel_SenderSignalIndex_Callback cb) { qpdfbookmarkmodel_sendersignalindex_callback = cb; }
    inline void setQPdfBookmarkModel_Receivers_Callback(QPdfBookmarkModel_Receivers_Callback cb) { qpdfbookmarkmodel_receivers_callback = cb; }
    inline void setQPdfBookmarkModel_IsSignalConnected_Callback(QPdfBookmarkModel_IsSignalConnected_Callback cb) { qpdfbookmarkmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPdfBookmarkModel_MetaObject_IsBase(bool value) const { qpdfbookmarkmodel_metaobject_isbase = value; }
    inline void setQPdfBookmarkModel_Metacast_IsBase(bool value) const { qpdfbookmarkmodel_metacast_isbase = value; }
    inline void setQPdfBookmarkModel_Metacall_IsBase(bool value) const { qpdfbookmarkmodel_metacall_isbase = value; }
    inline void setQPdfBookmarkModel_Data_IsBase(bool value) const { qpdfbookmarkmodel_data_isbase = value; }
    inline void setQPdfBookmarkModel_Index_IsBase(bool value) const { qpdfbookmarkmodel_index_isbase = value; }
    inline void setQPdfBookmarkModel_Parent_IsBase(bool value) const { qpdfbookmarkmodel_parent_isbase = value; }
    inline void setQPdfBookmarkModel_RowCount_IsBase(bool value) const { qpdfbookmarkmodel_rowcount_isbase = value; }
    inline void setQPdfBookmarkModel_ColumnCount_IsBase(bool value) const { qpdfbookmarkmodel_columncount_isbase = value; }
    inline void setQPdfBookmarkModel_RoleNames_IsBase(bool value) const { qpdfbookmarkmodel_rolenames_isbase = value; }
    inline void setQPdfBookmarkModel_Sibling_IsBase(bool value) const { qpdfbookmarkmodel_sibling_isbase = value; }
    inline void setQPdfBookmarkModel_HasChildren_IsBase(bool value) const { qpdfbookmarkmodel_haschildren_isbase = value; }
    inline void setQPdfBookmarkModel_SetData_IsBase(bool value) const { qpdfbookmarkmodel_setdata_isbase = value; }
    inline void setQPdfBookmarkModel_HeaderData_IsBase(bool value) const { qpdfbookmarkmodel_headerdata_isbase = value; }
    inline void setQPdfBookmarkModel_SetHeaderData_IsBase(bool value) const { qpdfbookmarkmodel_setheaderdata_isbase = value; }
    inline void setQPdfBookmarkModel_ItemData_IsBase(bool value) const { qpdfbookmarkmodel_itemdata_isbase = value; }
    inline void setQPdfBookmarkModel_SetItemData_IsBase(bool value) const { qpdfbookmarkmodel_setitemdata_isbase = value; }
    inline void setQPdfBookmarkModel_ClearItemData_IsBase(bool value) const { qpdfbookmarkmodel_clearitemdata_isbase = value; }
    inline void setQPdfBookmarkModel_MimeTypes_IsBase(bool value) const { qpdfbookmarkmodel_mimetypes_isbase = value; }
    inline void setQPdfBookmarkModel_MimeData_IsBase(bool value) const { qpdfbookmarkmodel_mimedata_isbase = value; }
    inline void setQPdfBookmarkModel_CanDropMimeData_IsBase(bool value) const { qpdfbookmarkmodel_candropmimedata_isbase = value; }
    inline void setQPdfBookmarkModel_DropMimeData_IsBase(bool value) const { qpdfbookmarkmodel_dropmimedata_isbase = value; }
    inline void setQPdfBookmarkModel_SupportedDropActions_IsBase(bool value) const { qpdfbookmarkmodel_supporteddropactions_isbase = value; }
    inline void setQPdfBookmarkModel_SupportedDragActions_IsBase(bool value) const { qpdfbookmarkmodel_supporteddragactions_isbase = value; }
    inline void setQPdfBookmarkModel_InsertRows_IsBase(bool value) const { qpdfbookmarkmodel_insertrows_isbase = value; }
    inline void setQPdfBookmarkModel_InsertColumns_IsBase(bool value) const { qpdfbookmarkmodel_insertcolumns_isbase = value; }
    inline void setQPdfBookmarkModel_RemoveRows_IsBase(bool value) const { qpdfbookmarkmodel_removerows_isbase = value; }
    inline void setQPdfBookmarkModel_RemoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_removecolumns_isbase = value; }
    inline void setQPdfBookmarkModel_MoveRows_IsBase(bool value) const { qpdfbookmarkmodel_moverows_isbase = value; }
    inline void setQPdfBookmarkModel_MoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_movecolumns_isbase = value; }
    inline void setQPdfBookmarkModel_FetchMore_IsBase(bool value) const { qpdfbookmarkmodel_fetchmore_isbase = value; }
    inline void setQPdfBookmarkModel_CanFetchMore_IsBase(bool value) const { qpdfbookmarkmodel_canfetchmore_isbase = value; }
    inline void setQPdfBookmarkModel_Flags_IsBase(bool value) const { qpdfbookmarkmodel_flags_isbase = value; }
    inline void setQPdfBookmarkModel_Sort_IsBase(bool value) const { qpdfbookmarkmodel_sort_isbase = value; }
    inline void setQPdfBookmarkModel_Buddy_IsBase(bool value) const { qpdfbookmarkmodel_buddy_isbase = value; }
    inline void setQPdfBookmarkModel_Match_IsBase(bool value) const { qpdfbookmarkmodel_match_isbase = value; }
    inline void setQPdfBookmarkModel_Span_IsBase(bool value) const { qpdfbookmarkmodel_span_isbase = value; }
    inline void setQPdfBookmarkModel_MultiData_IsBase(bool value) const { qpdfbookmarkmodel_multidata_isbase = value; }
    inline void setQPdfBookmarkModel_Submit_IsBase(bool value) const { qpdfbookmarkmodel_submit_isbase = value; }
    inline void setQPdfBookmarkModel_Revert_IsBase(bool value) const { qpdfbookmarkmodel_revert_isbase = value; }
    inline void setQPdfBookmarkModel_ResetInternalData_IsBase(bool value) const { qpdfbookmarkmodel_resetinternaldata_isbase = value; }
    inline void setQPdfBookmarkModel_Event_IsBase(bool value) const { qpdfbookmarkmodel_event_isbase = value; }
    inline void setQPdfBookmarkModel_EventFilter_IsBase(bool value) const { qpdfbookmarkmodel_eventfilter_isbase = value; }
    inline void setQPdfBookmarkModel_TimerEvent_IsBase(bool value) const { qpdfbookmarkmodel_timerevent_isbase = value; }
    inline void setQPdfBookmarkModel_ChildEvent_IsBase(bool value) const { qpdfbookmarkmodel_childevent_isbase = value; }
    inline void setQPdfBookmarkModel_CustomEvent_IsBase(bool value) const { qpdfbookmarkmodel_customevent_isbase = value; }
    inline void setQPdfBookmarkModel_ConnectNotify_IsBase(bool value) const { qpdfbookmarkmodel_connectnotify_isbase = value; }
    inline void setQPdfBookmarkModel_DisconnectNotify_IsBase(bool value) const { qpdfbookmarkmodel_disconnectnotify_isbase = value; }
    inline void setQPdfBookmarkModel_CreateIndex_IsBase(bool value) const { qpdfbookmarkmodel_createindex_isbase = value; }
    inline void setQPdfBookmarkModel_EncodeData_IsBase(bool value) const { qpdfbookmarkmodel_encodedata_isbase = value; }
    inline void setQPdfBookmarkModel_DecodeData_IsBase(bool value) const { qpdfbookmarkmodel_decodedata_isbase = value; }
    inline void setQPdfBookmarkModel_BeginInsertRows_IsBase(bool value) const { qpdfbookmarkmodel_begininsertrows_isbase = value; }
    inline void setQPdfBookmarkModel_EndInsertRows_IsBase(bool value) const { qpdfbookmarkmodel_endinsertrows_isbase = value; }
    inline void setQPdfBookmarkModel_BeginRemoveRows_IsBase(bool value) const { qpdfbookmarkmodel_beginremoverows_isbase = value; }
    inline void setQPdfBookmarkModel_EndRemoveRows_IsBase(bool value) const { qpdfbookmarkmodel_endremoverows_isbase = value; }
    inline void setQPdfBookmarkModel_BeginMoveRows_IsBase(bool value) const { qpdfbookmarkmodel_beginmoverows_isbase = value; }
    inline void setQPdfBookmarkModel_EndMoveRows_IsBase(bool value) const { qpdfbookmarkmodel_endmoverows_isbase = value; }
    inline void setQPdfBookmarkModel_BeginInsertColumns_IsBase(bool value) const { qpdfbookmarkmodel_begininsertcolumns_isbase = value; }
    inline void setQPdfBookmarkModel_EndInsertColumns_IsBase(bool value) const { qpdfbookmarkmodel_endinsertcolumns_isbase = value; }
    inline void setQPdfBookmarkModel_BeginRemoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_beginremovecolumns_isbase = value; }
    inline void setQPdfBookmarkModel_EndRemoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_endremovecolumns_isbase = value; }
    inline void setQPdfBookmarkModel_BeginMoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_beginmovecolumns_isbase = value; }
    inline void setQPdfBookmarkModel_EndMoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_endmovecolumns_isbase = value; }
    inline void setQPdfBookmarkModel_BeginResetModel_IsBase(bool value) const { qpdfbookmarkmodel_beginresetmodel_isbase = value; }
    inline void setQPdfBookmarkModel_EndResetModel_IsBase(bool value) const { qpdfbookmarkmodel_endresetmodel_isbase = value; }
    inline void setQPdfBookmarkModel_ChangePersistentIndex_IsBase(bool value) const { qpdfbookmarkmodel_changepersistentindex_isbase = value; }
    inline void setQPdfBookmarkModel_ChangePersistentIndexList_IsBase(bool value) const { qpdfbookmarkmodel_changepersistentindexlist_isbase = value; }
    inline void setQPdfBookmarkModel_PersistentIndexList_IsBase(bool value) const { qpdfbookmarkmodel_persistentindexlist_isbase = value; }
    inline void setQPdfBookmarkModel_Sender_IsBase(bool value) const { qpdfbookmarkmodel_sender_isbase = value; }
    inline void setQPdfBookmarkModel_SenderSignalIndex_IsBase(bool value) const { qpdfbookmarkmodel_sendersignalindex_isbase = value; }
    inline void setQPdfBookmarkModel_Receivers_IsBase(bool value) const { qpdfbookmarkmodel_receivers_isbase = value; }
    inline void setQPdfBookmarkModel_IsSignalConnected_IsBase(bool value) const { qpdfbookmarkmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfbookmarkmodel_metaobject_isbase) {
            qpdfbookmarkmodel_metaobject_isbase = false;
            return QPdfBookmarkModel::metaObject();
        }
        auto metaobject_cb = qpdfbookmarkmodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPdfBookmarkModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfbookmarkmodel_metacast_isbase) {
            qpdfbookmarkmodel_metacast_isbase = false;
            return QPdfBookmarkModel::qt_metacast(param1);
        }
        auto metacast_cb = qpdfbookmarkmodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfbookmarkmodel_metacall_isbase) {
            qpdfbookmarkmodel_metacall_isbase = false;
            return QPdfBookmarkModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qpdfbookmarkmodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdfbookmarkmodel_data_isbase) {
            qpdfbookmarkmodel_data_isbase = false;
            return QPdfBookmarkModel::data(index, role);
        }
        auto data_cb = qpdfbookmarkmodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QPdfBookmarkModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_index_isbase) {
            qpdfbookmarkmodel_index_isbase = false;
            return QPdfBookmarkModel::index(row, column, parent);
        }
        auto index_cb = qpdfbookmarkmodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QPdfBookmarkModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_parent_isbase) {
            qpdfbookmarkmodel_parent_isbase = false;
            return QPdfBookmarkModel::parent(index);
        }
        auto parent_cb = qpdfbookmarkmodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return QPdfBookmarkModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_rowcount_isbase) {
            qpdfbookmarkmodel_rowcount_isbase = false;
            return QPdfBookmarkModel::rowCount(parent);
        }
        auto rowcount_cb = qpdfbookmarkmodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_columncount_isbase) {
            qpdfbookmarkmodel_columncount_isbase = false;
            return QPdfBookmarkModel::columnCount(parent);
        }
        auto columncount_cb = qpdfbookmarkmodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdfbookmarkmodel_rolenames_isbase) {
            qpdfbookmarkmodel_rolenames_isbase = false;
            return QPdfBookmarkModel::roleNames();
        }
        auto rolenames_cb = qpdfbookmarkmodel_rolenames_callback;
        if (rolenames_cb) {
            libqt_map /* of int to libqt_string */ callback_ret = rolenames_cb();
            QHash<int, QByteArray> callback_ret_QHash;
            callback_ret_QHash.reserve(callback_ret.len);
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QByteArray callback_ret_varr_i_QByteArray(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QHash[static_cast<int>(callback_ret_karr[i])] = callback_ret_varr_i_QByteArray;
            }
            return callback_ret_QHash;
        }
        return QPdfBookmarkModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdfbookmarkmodel_sibling_isbase) {
            qpdfbookmarkmodel_sibling_isbase = false;
            return QPdfBookmarkModel::sibling(row, column, idx);
        }
        auto sibling_cb = qpdfbookmarkmodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QPdfBookmarkModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_haschildren_isbase) {
            qpdfbookmarkmodel_haschildren_isbase = false;
            return QPdfBookmarkModel::hasChildren(parent);
        }
        auto haschildren_cb = qpdfbookmarkmodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdfbookmarkmodel_setdata_isbase) {
            qpdfbookmarkmodel_setdata_isbase = false;
            return QPdfBookmarkModel::setData(index, value, role);
        }
        auto setdata_cb = qpdfbookmarkmodel_setdata_callback;
        if (setdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = setdata_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdfbookmarkmodel_headerdata_isbase) {
            qpdfbookmarkmodel_headerdata_isbase = false;
            return QPdfBookmarkModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qpdfbookmarkmodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QPdfBookmarkModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdfbookmarkmodel_setheaderdata_isbase) {
            qpdfbookmarkmodel_setheaderdata_isbase = false;
            return QPdfBookmarkModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qpdfbookmarkmodel_setheaderdata_callback;
        if (setheaderdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = setheaderdata_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QPdfBookmarkModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_itemdata_isbase) {
            qpdfbookmarkmodel_itemdata_isbase = false;
            return QPdfBookmarkModel::itemData(index);
        }
        auto itemdata_cb = qpdfbookmarkmodel_itemdata_callback;
        if (itemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = itemdata_cb(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        }
        return QPdfBookmarkModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdfbookmarkmodel_setitemdata_isbase) {
            qpdfbookmarkmodel_setitemdata_isbase = false;
            return QPdfBookmarkModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qpdfbookmarkmodel_setitemdata_callback;
        if (setitemdata_cb) {
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

            bool callback_ret = setitemdata_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfBookmarkModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdfbookmarkmodel_clearitemdata_isbase) {
            qpdfbookmarkmodel_clearitemdata_isbase = false;
            return QPdfBookmarkModel::clearItemData(index);
        }
        auto clearitemdata_cb = qpdfbookmarkmodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qpdfbookmarkmodel_mimetypes_isbase) {
            qpdfbookmarkmodel_mimetypes_isbase = false;
            return QPdfBookmarkModel::mimeTypes();
        }
        auto mimetypes_cb = qpdfbookmarkmodel_mimetypes_callback;
        if (mimetypes_cb) {
            const char** callback_ret = mimetypes_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return QPdfBookmarkModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qpdfbookmarkmodel_mimedata_isbase) {
            qpdfbookmarkmodel_mimedata_isbase = false;
            return QPdfBookmarkModel::mimeData(indexes);
        }
        auto mimedata_cb = qpdfbookmarkmodel_mimedata_callback;
        if (mimedata_cb) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size())));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = mimedata_cb(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QPdfBookmarkModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_candropmimedata_isbase) {
            qpdfbookmarkmodel_candropmimedata_isbase = false;
            return QPdfBookmarkModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qpdfbookmarkmodel_candropmimedata_callback;
        if (candropmimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = candropmimedata_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_dropmimedata_isbase) {
            qpdfbookmarkmodel_dropmimedata_isbase = false;
            return QPdfBookmarkModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qpdfbookmarkmodel_dropmimedata_callback;
        if (dropmimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = dropmimedata_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdfbookmarkmodel_supporteddropactions_isbase) {
            qpdfbookmarkmodel_supporteddropactions_isbase = false;
            return QPdfBookmarkModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qpdfbookmarkmodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfBookmarkModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdfbookmarkmodel_supporteddragactions_isbase) {
            qpdfbookmarkmodel_supporteddragactions_isbase = false;
            return QPdfBookmarkModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qpdfbookmarkmodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfBookmarkModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_insertrows_isbase) {
            qpdfbookmarkmodel_insertrows_isbase = false;
            return QPdfBookmarkModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qpdfbookmarkmodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_insertcolumns_isbase) {
            qpdfbookmarkmodel_insertcolumns_isbase = false;
            return QPdfBookmarkModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qpdfbookmarkmodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_removerows_isbase) {
            qpdfbookmarkmodel_removerows_isbase = false;
            return QPdfBookmarkModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qpdfbookmarkmodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_removecolumns_isbase) {
            qpdfbookmarkmodel_removecolumns_isbase = false;
            return QPdfBookmarkModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qpdfbookmarkmodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfbookmarkmodel_moverows_isbase) {
            qpdfbookmarkmodel_moverows_isbase = false;
            return QPdfBookmarkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qpdfbookmarkmodel_moverows_callback;
        if (moverows_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = moverows_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfbookmarkmodel_movecolumns_isbase) {
            qpdfbookmarkmodel_movecolumns_isbase = false;
            return QPdfBookmarkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qpdfbookmarkmodel_movecolumns_callback;
        if (movecolumns_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = movecolumns_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_fetchmore_isbase) {
            qpdfbookmarkmodel_fetchmore_isbase = false;
            QPdfBookmarkModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qpdfbookmarkmodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QPdfBookmarkModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_canfetchmore_isbase) {
            qpdfbookmarkmodel_canfetchmore_isbase = false;
            return QPdfBookmarkModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qpdfbookmarkmodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_flags_isbase) {
            qpdfbookmarkmodel_flags_isbase = false;
            return QPdfBookmarkModel::flags(index);
        }
        auto flags_cb = qpdfbookmarkmodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QPdfBookmarkModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdfbookmarkmodel_sort_isbase) {
            qpdfbookmarkmodel_sort_isbase = false;
            QPdfBookmarkModel::sort(column, order);
            return;
        }
        auto sort_cb = qpdfbookmarkmodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QPdfBookmarkModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_buddy_isbase) {
            qpdfbookmarkmodel_buddy_isbase = false;
            return QPdfBookmarkModel::buddy(index);
        }
        auto buddy_cb = qpdfbookmarkmodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QPdfBookmarkModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdfbookmarkmodel_match_isbase) {
            qpdfbookmarkmodel_match_isbase = false;
            return QPdfBookmarkModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qpdfbookmarkmodel_match_callback;
        if (match_cb) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = match_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QPdfBookmarkModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_span_isbase) {
            qpdfbookmarkmodel_span_isbase = false;
            return QPdfBookmarkModel::span(index);
        }
        auto span_cb = qpdfbookmarkmodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QPdfBookmarkModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdfbookmarkmodel_multidata_isbase) {
            qpdfbookmarkmodel_multidata_isbase = false;
            QPdfBookmarkModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qpdfbookmarkmodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QPdfBookmarkModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdfbookmarkmodel_submit_isbase) {
            qpdfbookmarkmodel_submit_isbase = false;
            return QPdfBookmarkModel::submit();
        }
        auto submit_cb = qpdfbookmarkmodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QPdfBookmarkModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdfbookmarkmodel_revert_isbase) {
            qpdfbookmarkmodel_revert_isbase = false;
            QPdfBookmarkModel::revert();
            return;
        }
        auto revert_cb = qpdfbookmarkmodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QPdfBookmarkModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdfbookmarkmodel_resetinternaldata_isbase) {
            qpdfbookmarkmodel_resetinternaldata_isbase = false;
            QPdfBookmarkModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qpdfbookmarkmodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QPdfBookmarkModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfbookmarkmodel_event_isbase) {
            qpdfbookmarkmodel_event_isbase = false;
            return QPdfBookmarkModel::event(event);
        }
        auto event_cb = qpdfbookmarkmodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfbookmarkmodel_eventfilter_isbase) {
            qpdfbookmarkmodel_eventfilter_isbase = false;
            return QPdfBookmarkModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qpdfbookmarkmodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfBookmarkModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfbookmarkmodel_timerevent_isbase) {
            qpdfbookmarkmodel_timerevent_isbase = false;
            QPdfBookmarkModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qpdfbookmarkmodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPdfBookmarkModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfbookmarkmodel_childevent_isbase) {
            qpdfbookmarkmodel_childevent_isbase = false;
            QPdfBookmarkModel::childEvent(event);
            return;
        }
        auto childevent_cb = qpdfbookmarkmodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPdfBookmarkModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfbookmarkmodel_customevent_isbase) {
            qpdfbookmarkmodel_customevent_isbase = false;
            QPdfBookmarkModel::customEvent(event);
            return;
        }
        auto customevent_cb = qpdfbookmarkmodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPdfBookmarkModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfbookmarkmodel_connectnotify_isbase) {
            qpdfbookmarkmodel_connectnotify_isbase = false;
            QPdfBookmarkModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qpdfbookmarkmodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPdfBookmarkModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfbookmarkmodel_disconnectnotify_isbase) {
            qpdfbookmarkmodel_disconnectnotify_isbase = false;
            QPdfBookmarkModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qpdfbookmarkmodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPdfBookmarkModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qpdfbookmarkmodel_createindex_isbase) {
            qpdfbookmarkmodel_createindex_isbase = false;
            return QPdfBookmarkModel::createIndex(row, column);
        }
        auto createindex_cb = qpdfbookmarkmodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QPdfBookmarkModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qpdfbookmarkmodel_encodedata_isbase) {
            qpdfbookmarkmodel_encodedata_isbase = false;
            QPdfBookmarkModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qpdfbookmarkmodel_encodedata_callback;
        if (encodedata_cb) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size())));
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

            encodedata_cb(this, cbval1, cbval2);
            free(indexes_arr);
            return;
        }
        QPdfBookmarkModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qpdfbookmarkmodel_decodedata_isbase) {
            qpdfbookmarkmodel_decodedata_isbase = false;
            return QPdfBookmarkModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qpdfbookmarkmodel_decodedata_callback;
        if (decodedata_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = decodedata_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QPdfBookmarkModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_begininsertrows_isbase) {
            qpdfbookmarkmodel_begininsertrows_isbase = false;
            QPdfBookmarkModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qpdfbookmarkmodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPdfBookmarkModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qpdfbookmarkmodel_endinsertrows_isbase) {
            qpdfbookmarkmodel_endinsertrows_isbase = false;
            QPdfBookmarkModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qpdfbookmarkmodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QPdfBookmarkModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_beginremoverows_isbase) {
            qpdfbookmarkmodel_beginremoverows_isbase = false;
            QPdfBookmarkModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qpdfbookmarkmodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPdfBookmarkModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qpdfbookmarkmodel_endremoverows_isbase) {
            qpdfbookmarkmodel_endremoverows_isbase = false;
            QPdfBookmarkModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qpdfbookmarkmodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QPdfBookmarkModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qpdfbookmarkmodel_beginmoverows_isbase) {
            qpdfbookmarkmodel_beginmoverows_isbase = false;
            return QPdfBookmarkModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qpdfbookmarkmodel_beginmoverows_callback;
        if (beginmoverows_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = beginmoverows_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qpdfbookmarkmodel_endmoverows_isbase) {
            qpdfbookmarkmodel_endmoverows_isbase = false;
            QPdfBookmarkModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qpdfbookmarkmodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QPdfBookmarkModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_begininsertcolumns_isbase) {
            qpdfbookmarkmodel_begininsertcolumns_isbase = false;
            QPdfBookmarkModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qpdfbookmarkmodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPdfBookmarkModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qpdfbookmarkmodel_endinsertcolumns_isbase) {
            qpdfbookmarkmodel_endinsertcolumns_isbase = false;
            QPdfBookmarkModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qpdfbookmarkmodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QPdfBookmarkModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_beginremovecolumns_isbase) {
            qpdfbookmarkmodel_beginremovecolumns_isbase = false;
            QPdfBookmarkModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qpdfbookmarkmodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPdfBookmarkModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qpdfbookmarkmodel_endremovecolumns_isbase) {
            qpdfbookmarkmodel_endremovecolumns_isbase = false;
            QPdfBookmarkModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qpdfbookmarkmodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QPdfBookmarkModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qpdfbookmarkmodel_beginmovecolumns_isbase) {
            qpdfbookmarkmodel_beginmovecolumns_isbase = false;
            return QPdfBookmarkModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qpdfbookmarkmodel_beginmovecolumns_callback;
        if (beginmovecolumns_cb) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = beginmovecolumns_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qpdfbookmarkmodel_endmovecolumns_isbase) {
            qpdfbookmarkmodel_endmovecolumns_isbase = false;
            QPdfBookmarkModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qpdfbookmarkmodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QPdfBookmarkModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qpdfbookmarkmodel_beginresetmodel_isbase) {
            qpdfbookmarkmodel_beginresetmodel_isbase = false;
            QPdfBookmarkModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qpdfbookmarkmodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QPdfBookmarkModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qpdfbookmarkmodel_endresetmodel_isbase) {
            qpdfbookmarkmodel_endresetmodel_isbase = false;
            QPdfBookmarkModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qpdfbookmarkmodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QPdfBookmarkModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qpdfbookmarkmodel_changepersistentindex_isbase) {
            qpdfbookmarkmodel_changepersistentindex_isbase = false;
            QPdfBookmarkModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qpdfbookmarkmodel_changepersistentindex_callback;
        if (changepersistentindex_cb) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            changepersistentindex_cb(this, cbval1, cbval2);
            return;
        }
        QPdfBookmarkModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qpdfbookmarkmodel_changepersistentindexlist_isbase) {
            qpdfbookmarkmodel_changepersistentindexlist_isbase = false;
            QPdfBookmarkModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qpdfbookmarkmodel_changepersistentindexlist_callback;
        if (changepersistentindexlist_cb) {
            const QList<QModelIndex>& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (from_ret.size())));
            for (qsizetype i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (to_ret.size())));
            for (qsizetype i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            changepersistentindexlist_cb(this, cbval1, cbval2);
            free(from_arr);
            free(to_arr);
            return;
        }
        QPdfBookmarkModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qpdfbookmarkmodel_persistentindexlist_isbase) {
            qpdfbookmarkmodel_persistentindexlist_isbase = false;
            return QPdfBookmarkModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qpdfbookmarkmodel_persistentindexlist_callback;
        if (persistentindexlist_cb) {
            libqt_list /* of QModelIndex* */ callback_ret = persistentindexlist_cb();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QPdfBookmarkModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfbookmarkmodel_sender_isbase) {
            qpdfbookmarkmodel_sender_isbase = false;
            return QPdfBookmarkModel::sender();
        }
        auto sender_cb = qpdfbookmarkmodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPdfBookmarkModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfbookmarkmodel_sendersignalindex_isbase) {
            qpdfbookmarkmodel_sendersignalindex_isbase = false;
            return QPdfBookmarkModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qpdfbookmarkmodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfbookmarkmodel_receivers_isbase) {
            qpdfbookmarkmodel_receivers_isbase = false;
            return QPdfBookmarkModel::receivers(signal);
        }
        auto receivers_cb = qpdfbookmarkmodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfbookmarkmodel_issignalconnected_isbase) {
            qpdfbookmarkmodel_issignalconnected_isbase = false;
            return QPdfBookmarkModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qpdfbookmarkmodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QPdfBookmarkModel_ResetInternalData(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperResetInternalData(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_TimerEvent(QPdfBookmarkModel* self, QTimerEvent* event);
    friend void QPdfBookmarkModel_SuperTimerEvent(QPdfBookmarkModel* self, QTimerEvent* event);
    friend void QPdfBookmarkModel_ChildEvent(QPdfBookmarkModel* self, QChildEvent* event);
    friend void QPdfBookmarkModel_SuperChildEvent(QPdfBookmarkModel* self, QChildEvent* event);
    friend void QPdfBookmarkModel_CustomEvent(QPdfBookmarkModel* self, QEvent* event);
    friend void QPdfBookmarkModel_SuperCustomEvent(QPdfBookmarkModel* self, QEvent* event);
    friend void QPdfBookmarkModel_ConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
    friend void QPdfBookmarkModel_SuperConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
    friend void QPdfBookmarkModel_DisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
    friend void QPdfBookmarkModel_SuperDisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
    friend QModelIndex* QPdfBookmarkModel_CreateIndex(const QPdfBookmarkModel* self, int row, int column);
    friend QModelIndex* QPdfBookmarkModel_SuperCreateIndex(const QPdfBookmarkModel* self, int row, int column);
    friend void QPdfBookmarkModel_EncodeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QPdfBookmarkModel_SuperEncodeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QPdfBookmarkModel_DecodeData(QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QPdfBookmarkModel_SuperDecodeData(QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QPdfBookmarkModel_BeginInsertRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_SuperBeginInsertRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_EndInsertRows(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndInsertRows(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_BeginRemoveRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_SuperBeginRemoveRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_EndRemoveRows(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndRemoveRows(QPdfBookmarkModel* self);
    friend bool QPdfBookmarkModel_BeginMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QPdfBookmarkModel_SuperBeginMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QPdfBookmarkModel_EndMoveRows(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndMoveRows(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_BeginInsertColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_SuperBeginInsertColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_EndInsertColumns(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndInsertColumns(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_BeginRemoveColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_SuperBeginRemoveColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last);
    friend void QPdfBookmarkModel_EndRemoveColumns(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndRemoveColumns(QPdfBookmarkModel* self);
    friend bool QPdfBookmarkModel_BeginMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QPdfBookmarkModel_SuperBeginMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QPdfBookmarkModel_EndMoveColumns(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndMoveColumns(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_BeginResetModel(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperBeginResetModel(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_EndResetModel(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperEndResetModel(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_ChangePersistentIndex(QPdfBookmarkModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QPdfBookmarkModel_SuperChangePersistentIndex(QPdfBookmarkModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QPdfBookmarkModel_ChangePersistentIndexList(QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QPdfBookmarkModel_SuperChangePersistentIndexList(QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QPdfBookmarkModel_PersistentIndexList(const QPdfBookmarkModel* self);
    friend libqt_list /* of QModelIndex* */ QPdfBookmarkModel_SuperPersistentIndexList(const QPdfBookmarkModel* self);
    friend QObject* QPdfBookmarkModel_Sender(const QPdfBookmarkModel* self);
    friend QObject* QPdfBookmarkModel_SuperSender(const QPdfBookmarkModel* self);
    friend int QPdfBookmarkModel_SenderSignalIndex(const QPdfBookmarkModel* self);
    friend int QPdfBookmarkModel_SuperSenderSignalIndex(const QPdfBookmarkModel* self);
    friend int QPdfBookmarkModel_Receivers(const QPdfBookmarkModel* self, const char* signal);
    friend int QPdfBookmarkModel_SuperReceivers(const QPdfBookmarkModel* self, const char* signal);
    friend bool QPdfBookmarkModel_IsSignalConnected(const QPdfBookmarkModel* self, const QMetaMethod* signal);
    friend bool QPdfBookmarkModel_SuperIsSignalConnected(const QPdfBookmarkModel* self, const QMetaMethod* signal);
};

#endif
