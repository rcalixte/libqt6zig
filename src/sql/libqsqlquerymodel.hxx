#pragma once
#ifndef SRC_SQLC_LIBVIRTUALQSQLQUERYMODEL_H
#define SRC_SQLC_LIBVIRTUALQSQLQUERYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlQueryModel so that we can call protected methods
class VirtualQSqlQueryModel final : public QSqlQueryModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQSqlQueryModel = true;

    // Virtual class public types (including callbacks)
    using QSqlQueryModel_Metacall_Callback = int (*)(QSqlQueryModel*, int, int, void**);
    using QSqlQueryModel_RowCount_Callback = int (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_ColumnCount_Callback = int (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_Data_Callback = QVariant* (*)(const QSqlQueryModel*, QModelIndex*, int);
    using QSqlQueryModel_HeaderData_Callback = QVariant* (*)(const QSqlQueryModel*, int, int, int);
    using QSqlQueryModel_SetHeaderData_Callback = bool (*)(QSqlQueryModel*, int, int, QVariant*, int);
    using QSqlQueryModel_InsertColumns_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_RemoveColumns_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_Clear_Callback = void (*)();
    using QSqlQueryModel_FetchMore_Callback = void (*)(QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_CanFetchMore_Callback = bool (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QSqlQueryModel_QueryChange_Callback = void (*)();
    using QSqlQueryModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_Index_Callback = QModelIndex* (*)(const QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_Sibling_Callback = QModelIndex* (*)(const QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_DropMimeData_Callback = bool (*)(QSqlQueryModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlQueryModel_Flags_Callback = int (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_SetData_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, QVariant*, int);
    using QSqlQueryModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_SetItemData_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSqlQueryModel_ClearItemData_Callback = bool (*)(QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QSqlQueryModel_MimeData_Callback = QMimeData* (*)(const QSqlQueryModel*, libqt_list /* of QModelIndex* */);
    using QSqlQueryModel_CanDropMimeData_Callback = bool (*)(const QSqlQueryModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlQueryModel_SupportedDropActions_Callback = int (*)();
    using QSqlQueryModel_SupportedDragActions_Callback = int (*)();
    using QSqlQueryModel_InsertRows_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_RemoveRows_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_MoveRows_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlQueryModel_MoveColumns_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlQueryModel_Sort_Callback = void (*)(QSqlQueryModel*, int, int);
    using QSqlQueryModel_Buddy_Callback = QModelIndex* (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QSqlQueryModel*, QModelIndex*, int, QVariant*, int, int);
    using QSqlQueryModel_Span_Callback = QSize* (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_MultiData_Callback = void (*)(const QSqlQueryModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSqlQueryModel_Submit_Callback = bool (*)();
    using QSqlQueryModel_Revert_Callback = void (*)();
    using QSqlQueryModel_ResetInternalData_Callback = void (*)();
    using QSqlQueryModel_Event_Callback = bool (*)(QSqlQueryModel*, QEvent*);
    using QSqlQueryModel_EventFilter_Callback = bool (*)(QSqlQueryModel*, QObject*, QEvent*);
    using QSqlQueryModel_TimerEvent_Callback = void (*)(QSqlQueryModel*, QTimerEvent*);
    using QSqlQueryModel_ChildEvent_Callback = void (*)(QSqlQueryModel*, QChildEvent*);
    using QSqlQueryModel_CustomEvent_Callback = void (*)(QSqlQueryModel*, QEvent*);
    using QSqlQueryModel_ConnectNotify_Callback = void (*)(QSqlQueryModel*, QMetaMethod*);
    using QSqlQueryModel_DisconnectNotify_Callback = void (*)(QSqlQueryModel*, QMetaMethod*);
    using QSqlQueryModel_BeginInsertRows_Callback = void (*)(QSqlQueryModel*, QModelIndex*, int, int);
    using QSqlQueryModel_EndInsertRows_Callback = void (*)();
    using QSqlQueryModel_BeginRemoveRows_Callback = void (*)(QSqlQueryModel*, QModelIndex*, int, int);
    using QSqlQueryModel_EndRemoveRows_Callback = void (*)();
    using QSqlQueryModel_BeginInsertColumns_Callback = void (*)(QSqlQueryModel*, QModelIndex*, int, int);
    using QSqlQueryModel_EndInsertColumns_Callback = void (*)();
    using QSqlQueryModel_BeginRemoveColumns_Callback = void (*)(QSqlQueryModel*, QModelIndex*, int, int);
    using QSqlQueryModel_EndRemoveColumns_Callback = void (*)();
    using QSqlQueryModel_BeginResetModel_Callback = void (*)();
    using QSqlQueryModel_EndResetModel_Callback = void (*)();
    using QSqlQueryModel_SetLastError_Callback = void (*)(QSqlQueryModel*, QSqlError*);
    using QSqlQueryModel_CreateIndex_Callback = QModelIndex* (*)(const QSqlQueryModel*, int, int);
    using QSqlQueryModel_EncodeData_Callback = void (*)(const QSqlQueryModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QSqlQueryModel_DecodeData_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*, QDataStream*);
    using QSqlQueryModel_BeginMoveRows_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlQueryModel_EndMoveRows_Callback = void (*)();
    using QSqlQueryModel_BeginMoveColumns_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlQueryModel_EndMoveColumns_Callback = void (*)();
    using QSqlQueryModel_ChangePersistentIndex_Callback = void (*)(QSqlQueryModel*, QModelIndex*, QModelIndex*);
    using QSqlQueryModel_ChangePersistentIndexList_Callback = void (*)(QSqlQueryModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QSqlQueryModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QSqlQueryModel_Sender_Callback = QObject* (*)();
    using QSqlQueryModel_SenderSignalIndex_Callback = int (*)();
    using QSqlQueryModel_Receivers_Callback = int (*)(const QSqlQueryModel*, const char*);
    using QSqlQueryModel_IsSignalConnected_Callback = bool (*)(const QSqlQueryModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSqlQueryModel_Metacall_Callback qsqlquerymodel_metacall_callback = nullptr;
    QSqlQueryModel_RowCount_Callback qsqlquerymodel_rowcount_callback = nullptr;
    QSqlQueryModel_ColumnCount_Callback qsqlquerymodel_columncount_callback = nullptr;
    QSqlQueryModel_Data_Callback qsqlquerymodel_data_callback = nullptr;
    QSqlQueryModel_HeaderData_Callback qsqlquerymodel_headerdata_callback = nullptr;
    QSqlQueryModel_SetHeaderData_Callback qsqlquerymodel_setheaderdata_callback = nullptr;
    QSqlQueryModel_InsertColumns_Callback qsqlquerymodel_insertcolumns_callback = nullptr;
    QSqlQueryModel_RemoveColumns_Callback qsqlquerymodel_removecolumns_callback = nullptr;
    QSqlQueryModel_Clear_Callback qsqlquerymodel_clear_callback = nullptr;
    QSqlQueryModel_FetchMore_Callback qsqlquerymodel_fetchmore_callback = nullptr;
    QSqlQueryModel_CanFetchMore_Callback qsqlquerymodel_canfetchmore_callback = nullptr;
    QSqlQueryModel_RoleNames_Callback qsqlquerymodel_rolenames_callback = nullptr;
    QSqlQueryModel_QueryChange_Callback qsqlquerymodel_querychange_callback = nullptr;
    QSqlQueryModel_IndexInQuery_Callback qsqlquerymodel_indexinquery_callback = nullptr;
    QSqlQueryModel_Index_Callback qsqlquerymodel_index_callback = nullptr;
    QSqlQueryModel_Sibling_Callback qsqlquerymodel_sibling_callback = nullptr;
    QSqlQueryModel_DropMimeData_Callback qsqlquerymodel_dropmimedata_callback = nullptr;
    QSqlQueryModel_Flags_Callback qsqlquerymodel_flags_callback = nullptr;
    QSqlQueryModel_SetData_Callback qsqlquerymodel_setdata_callback = nullptr;
    QSqlQueryModel_ItemData_Callback qsqlquerymodel_itemdata_callback = nullptr;
    QSqlQueryModel_SetItemData_Callback qsqlquerymodel_setitemdata_callback = nullptr;
    QSqlQueryModel_ClearItemData_Callback qsqlquerymodel_clearitemdata_callback = nullptr;
    QSqlQueryModel_MimeTypes_Callback qsqlquerymodel_mimetypes_callback = nullptr;
    QSqlQueryModel_MimeData_Callback qsqlquerymodel_mimedata_callback = nullptr;
    QSqlQueryModel_CanDropMimeData_Callback qsqlquerymodel_candropmimedata_callback = nullptr;
    QSqlQueryModel_SupportedDropActions_Callback qsqlquerymodel_supporteddropactions_callback = nullptr;
    QSqlQueryModel_SupportedDragActions_Callback qsqlquerymodel_supporteddragactions_callback = nullptr;
    QSqlQueryModel_InsertRows_Callback qsqlquerymodel_insertrows_callback = nullptr;
    QSqlQueryModel_RemoveRows_Callback qsqlquerymodel_removerows_callback = nullptr;
    QSqlQueryModel_MoveRows_Callback qsqlquerymodel_moverows_callback = nullptr;
    QSqlQueryModel_MoveColumns_Callback qsqlquerymodel_movecolumns_callback = nullptr;
    QSqlQueryModel_Sort_Callback qsqlquerymodel_sort_callback = nullptr;
    QSqlQueryModel_Buddy_Callback qsqlquerymodel_buddy_callback = nullptr;
    QSqlQueryModel_Match_Callback qsqlquerymodel_match_callback = nullptr;
    QSqlQueryModel_Span_Callback qsqlquerymodel_span_callback = nullptr;
    QSqlQueryModel_MultiData_Callback qsqlquerymodel_multidata_callback = nullptr;
    QSqlQueryModel_Submit_Callback qsqlquerymodel_submit_callback = nullptr;
    QSqlQueryModel_Revert_Callback qsqlquerymodel_revert_callback = nullptr;
    QSqlQueryModel_ResetInternalData_Callback qsqlquerymodel_resetinternaldata_callback = nullptr;
    QSqlQueryModel_Event_Callback qsqlquerymodel_event_callback = nullptr;
    QSqlQueryModel_EventFilter_Callback qsqlquerymodel_eventfilter_callback = nullptr;
    QSqlQueryModel_TimerEvent_Callback qsqlquerymodel_timerevent_callback = nullptr;
    QSqlQueryModel_ChildEvent_Callback qsqlquerymodel_childevent_callback = nullptr;
    QSqlQueryModel_CustomEvent_Callback qsqlquerymodel_customevent_callback = nullptr;
    QSqlQueryModel_ConnectNotify_Callback qsqlquerymodel_connectnotify_callback = nullptr;
    QSqlQueryModel_DisconnectNotify_Callback qsqlquerymodel_disconnectnotify_callback = nullptr;
    QSqlQueryModel_BeginInsertRows_Callback qsqlquerymodel_begininsertrows_callback = nullptr;
    QSqlQueryModel_EndInsertRows_Callback qsqlquerymodel_endinsertrows_callback = nullptr;
    QSqlQueryModel_BeginRemoveRows_Callback qsqlquerymodel_beginremoverows_callback = nullptr;
    QSqlQueryModel_EndRemoveRows_Callback qsqlquerymodel_endremoverows_callback = nullptr;
    QSqlQueryModel_BeginInsertColumns_Callback qsqlquerymodel_begininsertcolumns_callback = nullptr;
    QSqlQueryModel_EndInsertColumns_Callback qsqlquerymodel_endinsertcolumns_callback = nullptr;
    QSqlQueryModel_BeginRemoveColumns_Callback qsqlquerymodel_beginremovecolumns_callback = nullptr;
    QSqlQueryModel_EndRemoveColumns_Callback qsqlquerymodel_endremovecolumns_callback = nullptr;
    QSqlQueryModel_BeginResetModel_Callback qsqlquerymodel_beginresetmodel_callback = nullptr;
    QSqlQueryModel_EndResetModel_Callback qsqlquerymodel_endresetmodel_callback = nullptr;
    QSqlQueryModel_SetLastError_Callback qsqlquerymodel_setlasterror_callback = nullptr;
    QSqlQueryModel_CreateIndex_Callback qsqlquerymodel_createindex_callback = nullptr;
    QSqlQueryModel_EncodeData_Callback qsqlquerymodel_encodedata_callback = nullptr;
    QSqlQueryModel_DecodeData_Callback qsqlquerymodel_decodedata_callback = nullptr;
    QSqlQueryModel_BeginMoveRows_Callback qsqlquerymodel_beginmoverows_callback = nullptr;
    QSqlQueryModel_EndMoveRows_Callback qsqlquerymodel_endmoverows_callback = nullptr;
    QSqlQueryModel_BeginMoveColumns_Callback qsqlquerymodel_beginmovecolumns_callback = nullptr;
    QSqlQueryModel_EndMoveColumns_Callback qsqlquerymodel_endmovecolumns_callback = nullptr;
    QSqlQueryModel_ChangePersistentIndex_Callback qsqlquerymodel_changepersistentindex_callback = nullptr;
    QSqlQueryModel_ChangePersistentIndexList_Callback qsqlquerymodel_changepersistentindexlist_callback = nullptr;
    QSqlQueryModel_PersistentIndexList_Callback qsqlquerymodel_persistentindexlist_callback = nullptr;
    QSqlQueryModel_Sender_Callback qsqlquerymodel_sender_callback = nullptr;
    QSqlQueryModel_SenderSignalIndex_Callback qsqlquerymodel_sendersignalindex_callback = nullptr;
    QSqlQueryModel_Receivers_Callback qsqlquerymodel_receivers_callback = nullptr;
    QSqlQueryModel_IsSignalConnected_Callback qsqlquerymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsqlquerymodel_metacall_isbase = false;
    mutable bool qsqlquerymodel_rowcount_isbase = false;
    mutable bool qsqlquerymodel_columncount_isbase = false;
    mutable bool qsqlquerymodel_data_isbase = false;
    mutable bool qsqlquerymodel_headerdata_isbase = false;
    mutable bool qsqlquerymodel_setheaderdata_isbase = false;
    mutable bool qsqlquerymodel_insertcolumns_isbase = false;
    mutable bool qsqlquerymodel_removecolumns_isbase = false;
    mutable bool qsqlquerymodel_clear_isbase = false;
    mutable bool qsqlquerymodel_fetchmore_isbase = false;
    mutable bool qsqlquerymodel_canfetchmore_isbase = false;
    mutable bool qsqlquerymodel_rolenames_isbase = false;
    mutable bool qsqlquerymodel_querychange_isbase = false;
    mutable bool qsqlquerymodel_indexinquery_isbase = false;
    mutable bool qsqlquerymodel_index_isbase = false;
    mutable bool qsqlquerymodel_sibling_isbase = false;
    mutable bool qsqlquerymodel_dropmimedata_isbase = false;
    mutable bool qsqlquerymodel_flags_isbase = false;
    mutable bool qsqlquerymodel_setdata_isbase = false;
    mutable bool qsqlquerymodel_itemdata_isbase = false;
    mutable bool qsqlquerymodel_setitemdata_isbase = false;
    mutable bool qsqlquerymodel_clearitemdata_isbase = false;
    mutable bool qsqlquerymodel_mimetypes_isbase = false;
    mutable bool qsqlquerymodel_mimedata_isbase = false;
    mutable bool qsqlquerymodel_candropmimedata_isbase = false;
    mutable bool qsqlquerymodel_supporteddropactions_isbase = false;
    mutable bool qsqlquerymodel_supporteddragactions_isbase = false;
    mutable bool qsqlquerymodel_insertrows_isbase = false;
    mutable bool qsqlquerymodel_removerows_isbase = false;
    mutable bool qsqlquerymodel_moverows_isbase = false;
    mutable bool qsqlquerymodel_movecolumns_isbase = false;
    mutable bool qsqlquerymodel_sort_isbase = false;
    mutable bool qsqlquerymodel_buddy_isbase = false;
    mutable bool qsqlquerymodel_match_isbase = false;
    mutable bool qsqlquerymodel_span_isbase = false;
    mutable bool qsqlquerymodel_multidata_isbase = false;
    mutable bool qsqlquerymodel_submit_isbase = false;
    mutable bool qsqlquerymodel_revert_isbase = false;
    mutable bool qsqlquerymodel_resetinternaldata_isbase = false;
    mutable bool qsqlquerymodel_event_isbase = false;
    mutable bool qsqlquerymodel_eventfilter_isbase = false;
    mutable bool qsqlquerymodel_timerevent_isbase = false;
    mutable bool qsqlquerymodel_childevent_isbase = false;
    mutable bool qsqlquerymodel_customevent_isbase = false;
    mutable bool qsqlquerymodel_connectnotify_isbase = false;
    mutable bool qsqlquerymodel_disconnectnotify_isbase = false;
    mutable bool qsqlquerymodel_begininsertrows_isbase = false;
    mutable bool qsqlquerymodel_endinsertrows_isbase = false;
    mutable bool qsqlquerymodel_beginremoverows_isbase = false;
    mutable bool qsqlquerymodel_endremoverows_isbase = false;
    mutable bool qsqlquerymodel_begininsertcolumns_isbase = false;
    mutable bool qsqlquerymodel_endinsertcolumns_isbase = false;
    mutable bool qsqlquerymodel_beginremovecolumns_isbase = false;
    mutable bool qsqlquerymodel_endremovecolumns_isbase = false;
    mutable bool qsqlquerymodel_beginresetmodel_isbase = false;
    mutable bool qsqlquerymodel_endresetmodel_isbase = false;
    mutable bool qsqlquerymodel_setlasterror_isbase = false;
    mutable bool qsqlquerymodel_createindex_isbase = false;
    mutable bool qsqlquerymodel_encodedata_isbase = false;
    mutable bool qsqlquerymodel_decodedata_isbase = false;
    mutable bool qsqlquerymodel_beginmoverows_isbase = false;
    mutable bool qsqlquerymodel_endmoverows_isbase = false;
    mutable bool qsqlquerymodel_beginmovecolumns_isbase = false;
    mutable bool qsqlquerymodel_endmovecolumns_isbase = false;
    mutable bool qsqlquerymodel_changepersistentindex_isbase = false;
    mutable bool qsqlquerymodel_changepersistentindexlist_isbase = false;
    mutable bool qsqlquerymodel_persistentindexlist_isbase = false;
    mutable bool qsqlquerymodel_sender_isbase = false;
    mutable bool qsqlquerymodel_sendersignalindex_isbase = false;
    mutable bool qsqlquerymodel_receivers_isbase = false;
    mutable bool qsqlquerymodel_issignalconnected_isbase = false;

  public:
    VirtualQSqlQueryModel() : QSqlQueryModel() {};
    VirtualQSqlQueryModel(QObject* parent) : QSqlQueryModel(parent) {};

    ~VirtualQSqlQueryModel() {
        qsqlquerymodel_metacall_callback = nullptr;
        qsqlquerymodel_rowcount_callback = nullptr;
        qsqlquerymodel_columncount_callback = nullptr;
        qsqlquerymodel_data_callback = nullptr;
        qsqlquerymodel_headerdata_callback = nullptr;
        qsqlquerymodel_setheaderdata_callback = nullptr;
        qsqlquerymodel_insertcolumns_callback = nullptr;
        qsqlquerymodel_removecolumns_callback = nullptr;
        qsqlquerymodel_clear_callback = nullptr;
        qsqlquerymodel_fetchmore_callback = nullptr;
        qsqlquerymodel_canfetchmore_callback = nullptr;
        qsqlquerymodel_rolenames_callback = nullptr;
        qsqlquerymodel_querychange_callback = nullptr;
        qsqlquerymodel_indexinquery_callback = nullptr;
        qsqlquerymodel_index_callback = nullptr;
        qsqlquerymodel_sibling_callback = nullptr;
        qsqlquerymodel_dropmimedata_callback = nullptr;
        qsqlquerymodel_flags_callback = nullptr;
        qsqlquerymodel_setdata_callback = nullptr;
        qsqlquerymodel_itemdata_callback = nullptr;
        qsqlquerymodel_setitemdata_callback = nullptr;
        qsqlquerymodel_clearitemdata_callback = nullptr;
        qsqlquerymodel_mimetypes_callback = nullptr;
        qsqlquerymodel_mimedata_callback = nullptr;
        qsqlquerymodel_candropmimedata_callback = nullptr;
        qsqlquerymodel_supporteddropactions_callback = nullptr;
        qsqlquerymodel_supporteddragactions_callback = nullptr;
        qsqlquerymodel_insertrows_callback = nullptr;
        qsqlquerymodel_removerows_callback = nullptr;
        qsqlquerymodel_moverows_callback = nullptr;
        qsqlquerymodel_movecolumns_callback = nullptr;
        qsqlquerymodel_sort_callback = nullptr;
        qsqlquerymodel_buddy_callback = nullptr;
        qsqlquerymodel_match_callback = nullptr;
        qsqlquerymodel_span_callback = nullptr;
        qsqlquerymodel_multidata_callback = nullptr;
        qsqlquerymodel_submit_callback = nullptr;
        qsqlquerymodel_revert_callback = nullptr;
        qsqlquerymodel_resetinternaldata_callback = nullptr;
        qsqlquerymodel_event_callback = nullptr;
        qsqlquerymodel_eventfilter_callback = nullptr;
        qsqlquerymodel_timerevent_callback = nullptr;
        qsqlquerymodel_childevent_callback = nullptr;
        qsqlquerymodel_customevent_callback = nullptr;
        qsqlquerymodel_connectnotify_callback = nullptr;
        qsqlquerymodel_disconnectnotify_callback = nullptr;
        qsqlquerymodel_begininsertrows_callback = nullptr;
        qsqlquerymodel_endinsertrows_callback = nullptr;
        qsqlquerymodel_beginremoverows_callback = nullptr;
        qsqlquerymodel_endremoverows_callback = nullptr;
        qsqlquerymodel_begininsertcolumns_callback = nullptr;
        qsqlquerymodel_endinsertcolumns_callback = nullptr;
        qsqlquerymodel_beginremovecolumns_callback = nullptr;
        qsqlquerymodel_endremovecolumns_callback = nullptr;
        qsqlquerymodel_beginresetmodel_callback = nullptr;
        qsqlquerymodel_endresetmodel_callback = nullptr;
        qsqlquerymodel_setlasterror_callback = nullptr;
        qsqlquerymodel_createindex_callback = nullptr;
        qsqlquerymodel_encodedata_callback = nullptr;
        qsqlquerymodel_decodedata_callback = nullptr;
        qsqlquerymodel_beginmoverows_callback = nullptr;
        qsqlquerymodel_endmoverows_callback = nullptr;
        qsqlquerymodel_beginmovecolumns_callback = nullptr;
        qsqlquerymodel_endmovecolumns_callback = nullptr;
        qsqlquerymodel_changepersistentindex_callback = nullptr;
        qsqlquerymodel_changepersistentindexlist_callback = nullptr;
        qsqlquerymodel_persistentindexlist_callback = nullptr;
        qsqlquerymodel_sender_callback = nullptr;
        qsqlquerymodel_sendersignalindex_callback = nullptr;
        qsqlquerymodel_receivers_callback = nullptr;
        qsqlquerymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSqlQueryModel_Metacall_Callback(QSqlQueryModel_Metacall_Callback cb) { qsqlquerymodel_metacall_callback = cb; }
    inline void setQSqlQueryModel_RowCount_Callback(QSqlQueryModel_RowCount_Callback cb) { qsqlquerymodel_rowcount_callback = cb; }
    inline void setQSqlQueryModel_ColumnCount_Callback(QSqlQueryModel_ColumnCount_Callback cb) { qsqlquerymodel_columncount_callback = cb; }
    inline void setQSqlQueryModel_Data_Callback(QSqlQueryModel_Data_Callback cb) { qsqlquerymodel_data_callback = cb; }
    inline void setQSqlQueryModel_HeaderData_Callback(QSqlQueryModel_HeaderData_Callback cb) { qsqlquerymodel_headerdata_callback = cb; }
    inline void setQSqlQueryModel_SetHeaderData_Callback(QSqlQueryModel_SetHeaderData_Callback cb) { qsqlquerymodel_setheaderdata_callback = cb; }
    inline void setQSqlQueryModel_InsertColumns_Callback(QSqlQueryModel_InsertColumns_Callback cb) { qsqlquerymodel_insertcolumns_callback = cb; }
    inline void setQSqlQueryModel_RemoveColumns_Callback(QSqlQueryModel_RemoveColumns_Callback cb) { qsqlquerymodel_removecolumns_callback = cb; }
    inline void setQSqlQueryModel_Clear_Callback(QSqlQueryModel_Clear_Callback cb) { qsqlquerymodel_clear_callback = cb; }
    inline void setQSqlQueryModel_FetchMore_Callback(QSqlQueryModel_FetchMore_Callback cb) { qsqlquerymodel_fetchmore_callback = cb; }
    inline void setQSqlQueryModel_CanFetchMore_Callback(QSqlQueryModel_CanFetchMore_Callback cb) { qsqlquerymodel_canfetchmore_callback = cb; }
    inline void setQSqlQueryModel_RoleNames_Callback(QSqlQueryModel_RoleNames_Callback cb) { qsqlquerymodel_rolenames_callback = cb; }
    inline void setQSqlQueryModel_QueryChange_Callback(QSqlQueryModel_QueryChange_Callback cb) { qsqlquerymodel_querychange_callback = cb; }
    inline void setQSqlQueryModel_IndexInQuery_Callback(QSqlQueryModel_IndexInQuery_Callback cb) { qsqlquerymodel_indexinquery_callback = cb; }
    inline void setQSqlQueryModel_Index_Callback(QSqlQueryModel_Index_Callback cb) { qsqlquerymodel_index_callback = cb; }
    inline void setQSqlQueryModel_Sibling_Callback(QSqlQueryModel_Sibling_Callback cb) { qsqlquerymodel_sibling_callback = cb; }
    inline void setQSqlQueryModel_DropMimeData_Callback(QSqlQueryModel_DropMimeData_Callback cb) { qsqlquerymodel_dropmimedata_callback = cb; }
    inline void setQSqlQueryModel_Flags_Callback(QSqlQueryModel_Flags_Callback cb) { qsqlquerymodel_flags_callback = cb; }
    inline void setQSqlQueryModel_SetData_Callback(QSqlQueryModel_SetData_Callback cb) { qsqlquerymodel_setdata_callback = cb; }
    inline void setQSqlQueryModel_ItemData_Callback(QSqlQueryModel_ItemData_Callback cb) { qsqlquerymodel_itemdata_callback = cb; }
    inline void setQSqlQueryModel_SetItemData_Callback(QSqlQueryModel_SetItemData_Callback cb) { qsqlquerymodel_setitemdata_callback = cb; }
    inline void setQSqlQueryModel_ClearItemData_Callback(QSqlQueryModel_ClearItemData_Callback cb) { qsqlquerymodel_clearitemdata_callback = cb; }
    inline void setQSqlQueryModel_MimeTypes_Callback(QSqlQueryModel_MimeTypes_Callback cb) { qsqlquerymodel_mimetypes_callback = cb; }
    inline void setQSqlQueryModel_MimeData_Callback(QSqlQueryModel_MimeData_Callback cb) { qsqlquerymodel_mimedata_callback = cb; }
    inline void setQSqlQueryModel_CanDropMimeData_Callback(QSqlQueryModel_CanDropMimeData_Callback cb) { qsqlquerymodel_candropmimedata_callback = cb; }
    inline void setQSqlQueryModel_SupportedDropActions_Callback(QSqlQueryModel_SupportedDropActions_Callback cb) { qsqlquerymodel_supporteddropactions_callback = cb; }
    inline void setQSqlQueryModel_SupportedDragActions_Callback(QSqlQueryModel_SupportedDragActions_Callback cb) { qsqlquerymodel_supporteddragactions_callback = cb; }
    inline void setQSqlQueryModel_InsertRows_Callback(QSqlQueryModel_InsertRows_Callback cb) { qsqlquerymodel_insertrows_callback = cb; }
    inline void setQSqlQueryModel_RemoveRows_Callback(QSqlQueryModel_RemoveRows_Callback cb) { qsqlquerymodel_removerows_callback = cb; }
    inline void setQSqlQueryModel_MoveRows_Callback(QSqlQueryModel_MoveRows_Callback cb) { qsqlquerymodel_moverows_callback = cb; }
    inline void setQSqlQueryModel_MoveColumns_Callback(QSqlQueryModel_MoveColumns_Callback cb) { qsqlquerymodel_movecolumns_callback = cb; }
    inline void setQSqlQueryModel_Sort_Callback(QSqlQueryModel_Sort_Callback cb) { qsqlquerymodel_sort_callback = cb; }
    inline void setQSqlQueryModel_Buddy_Callback(QSqlQueryModel_Buddy_Callback cb) { qsqlquerymodel_buddy_callback = cb; }
    inline void setQSqlQueryModel_Match_Callback(QSqlQueryModel_Match_Callback cb) { qsqlquerymodel_match_callback = cb; }
    inline void setQSqlQueryModel_Span_Callback(QSqlQueryModel_Span_Callback cb) { qsqlquerymodel_span_callback = cb; }
    inline void setQSqlQueryModel_MultiData_Callback(QSqlQueryModel_MultiData_Callback cb) { qsqlquerymodel_multidata_callback = cb; }
    inline void setQSqlQueryModel_Submit_Callback(QSqlQueryModel_Submit_Callback cb) { qsqlquerymodel_submit_callback = cb; }
    inline void setQSqlQueryModel_Revert_Callback(QSqlQueryModel_Revert_Callback cb) { qsqlquerymodel_revert_callback = cb; }
    inline void setQSqlQueryModel_ResetInternalData_Callback(QSqlQueryModel_ResetInternalData_Callback cb) { qsqlquerymodel_resetinternaldata_callback = cb; }
    inline void setQSqlQueryModel_Event_Callback(QSqlQueryModel_Event_Callback cb) { qsqlquerymodel_event_callback = cb; }
    inline void setQSqlQueryModel_EventFilter_Callback(QSqlQueryModel_EventFilter_Callback cb) { qsqlquerymodel_eventfilter_callback = cb; }
    inline void setQSqlQueryModel_TimerEvent_Callback(QSqlQueryModel_TimerEvent_Callback cb) { qsqlquerymodel_timerevent_callback = cb; }
    inline void setQSqlQueryModel_ChildEvent_Callback(QSqlQueryModel_ChildEvent_Callback cb) { qsqlquerymodel_childevent_callback = cb; }
    inline void setQSqlQueryModel_CustomEvent_Callback(QSqlQueryModel_CustomEvent_Callback cb) { qsqlquerymodel_customevent_callback = cb; }
    inline void setQSqlQueryModel_ConnectNotify_Callback(QSqlQueryModel_ConnectNotify_Callback cb) { qsqlquerymodel_connectnotify_callback = cb; }
    inline void setQSqlQueryModel_DisconnectNotify_Callback(QSqlQueryModel_DisconnectNotify_Callback cb) { qsqlquerymodel_disconnectnotify_callback = cb; }
    inline void setQSqlQueryModel_BeginInsertRows_Callback(QSqlQueryModel_BeginInsertRows_Callback cb) { qsqlquerymodel_begininsertrows_callback = cb; }
    inline void setQSqlQueryModel_EndInsertRows_Callback(QSqlQueryModel_EndInsertRows_Callback cb) { qsqlquerymodel_endinsertrows_callback = cb; }
    inline void setQSqlQueryModel_BeginRemoveRows_Callback(QSqlQueryModel_BeginRemoveRows_Callback cb) { qsqlquerymodel_beginremoverows_callback = cb; }
    inline void setQSqlQueryModel_EndRemoveRows_Callback(QSqlQueryModel_EndRemoveRows_Callback cb) { qsqlquerymodel_endremoverows_callback = cb; }
    inline void setQSqlQueryModel_BeginInsertColumns_Callback(QSqlQueryModel_BeginInsertColumns_Callback cb) { qsqlquerymodel_begininsertcolumns_callback = cb; }
    inline void setQSqlQueryModel_EndInsertColumns_Callback(QSqlQueryModel_EndInsertColumns_Callback cb) { qsqlquerymodel_endinsertcolumns_callback = cb; }
    inline void setQSqlQueryModel_BeginRemoveColumns_Callback(QSqlQueryModel_BeginRemoveColumns_Callback cb) { qsqlquerymodel_beginremovecolumns_callback = cb; }
    inline void setQSqlQueryModel_EndRemoveColumns_Callback(QSqlQueryModel_EndRemoveColumns_Callback cb) { qsqlquerymodel_endremovecolumns_callback = cb; }
    inline void setQSqlQueryModel_BeginResetModel_Callback(QSqlQueryModel_BeginResetModel_Callback cb) { qsqlquerymodel_beginresetmodel_callback = cb; }
    inline void setQSqlQueryModel_EndResetModel_Callback(QSqlQueryModel_EndResetModel_Callback cb) { qsqlquerymodel_endresetmodel_callback = cb; }
    inline void setQSqlQueryModel_SetLastError_Callback(QSqlQueryModel_SetLastError_Callback cb) { qsqlquerymodel_setlasterror_callback = cb; }
    inline void setQSqlQueryModel_CreateIndex_Callback(QSqlQueryModel_CreateIndex_Callback cb) { qsqlquerymodel_createindex_callback = cb; }
    inline void setQSqlQueryModel_EncodeData_Callback(QSqlQueryModel_EncodeData_Callback cb) { qsqlquerymodel_encodedata_callback = cb; }
    inline void setQSqlQueryModel_DecodeData_Callback(QSqlQueryModel_DecodeData_Callback cb) { qsqlquerymodel_decodedata_callback = cb; }
    inline void setQSqlQueryModel_BeginMoveRows_Callback(QSqlQueryModel_BeginMoveRows_Callback cb) { qsqlquerymodel_beginmoverows_callback = cb; }
    inline void setQSqlQueryModel_EndMoveRows_Callback(QSqlQueryModel_EndMoveRows_Callback cb) { qsqlquerymodel_endmoverows_callback = cb; }
    inline void setQSqlQueryModel_BeginMoveColumns_Callback(QSqlQueryModel_BeginMoveColumns_Callback cb) { qsqlquerymodel_beginmovecolumns_callback = cb; }
    inline void setQSqlQueryModel_EndMoveColumns_Callback(QSqlQueryModel_EndMoveColumns_Callback cb) { qsqlquerymodel_endmovecolumns_callback = cb; }
    inline void setQSqlQueryModel_ChangePersistentIndex_Callback(QSqlQueryModel_ChangePersistentIndex_Callback cb) { qsqlquerymodel_changepersistentindex_callback = cb; }
    inline void setQSqlQueryModel_ChangePersistentIndexList_Callback(QSqlQueryModel_ChangePersistentIndexList_Callback cb) { qsqlquerymodel_changepersistentindexlist_callback = cb; }
    inline void setQSqlQueryModel_PersistentIndexList_Callback(QSqlQueryModel_PersistentIndexList_Callback cb) { qsqlquerymodel_persistentindexlist_callback = cb; }
    inline void setQSqlQueryModel_Sender_Callback(QSqlQueryModel_Sender_Callback cb) { qsqlquerymodel_sender_callback = cb; }
    inline void setQSqlQueryModel_SenderSignalIndex_Callback(QSqlQueryModel_SenderSignalIndex_Callback cb) { qsqlquerymodel_sendersignalindex_callback = cb; }
    inline void setQSqlQueryModel_Receivers_Callback(QSqlQueryModel_Receivers_Callback cb) { qsqlquerymodel_receivers_callback = cb; }
    inline void setQSqlQueryModel_IsSignalConnected_Callback(QSqlQueryModel_IsSignalConnected_Callback cb) { qsqlquerymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSqlQueryModel_Metacall_IsBase(bool value) const { qsqlquerymodel_metacall_isbase = value; }
    inline void setQSqlQueryModel_RowCount_IsBase(bool value) const { qsqlquerymodel_rowcount_isbase = value; }
    inline void setQSqlQueryModel_ColumnCount_IsBase(bool value) const { qsqlquerymodel_columncount_isbase = value; }
    inline void setQSqlQueryModel_Data_IsBase(bool value) const { qsqlquerymodel_data_isbase = value; }
    inline void setQSqlQueryModel_HeaderData_IsBase(bool value) const { qsqlquerymodel_headerdata_isbase = value; }
    inline void setQSqlQueryModel_SetHeaderData_IsBase(bool value) const { qsqlquerymodel_setheaderdata_isbase = value; }
    inline void setQSqlQueryModel_InsertColumns_IsBase(bool value) const { qsqlquerymodel_insertcolumns_isbase = value; }
    inline void setQSqlQueryModel_RemoveColumns_IsBase(bool value) const { qsqlquerymodel_removecolumns_isbase = value; }
    inline void setQSqlQueryModel_Clear_IsBase(bool value) const { qsqlquerymodel_clear_isbase = value; }
    inline void setQSqlQueryModel_FetchMore_IsBase(bool value) const { qsqlquerymodel_fetchmore_isbase = value; }
    inline void setQSqlQueryModel_CanFetchMore_IsBase(bool value) const { qsqlquerymodel_canfetchmore_isbase = value; }
    inline void setQSqlQueryModel_RoleNames_IsBase(bool value) const { qsqlquerymodel_rolenames_isbase = value; }
    inline void setQSqlQueryModel_QueryChange_IsBase(bool value) const { qsqlquerymodel_querychange_isbase = value; }
    inline void setQSqlQueryModel_IndexInQuery_IsBase(bool value) const { qsqlquerymodel_indexinquery_isbase = value; }
    inline void setQSqlQueryModel_Index_IsBase(bool value) const { qsqlquerymodel_index_isbase = value; }
    inline void setQSqlQueryModel_Sibling_IsBase(bool value) const { qsqlquerymodel_sibling_isbase = value; }
    inline void setQSqlQueryModel_DropMimeData_IsBase(bool value) const { qsqlquerymodel_dropmimedata_isbase = value; }
    inline void setQSqlQueryModel_Flags_IsBase(bool value) const { qsqlquerymodel_flags_isbase = value; }
    inline void setQSqlQueryModel_SetData_IsBase(bool value) const { qsqlquerymodel_setdata_isbase = value; }
    inline void setQSqlQueryModel_ItemData_IsBase(bool value) const { qsqlquerymodel_itemdata_isbase = value; }
    inline void setQSqlQueryModel_SetItemData_IsBase(bool value) const { qsqlquerymodel_setitemdata_isbase = value; }
    inline void setQSqlQueryModel_ClearItemData_IsBase(bool value) const { qsqlquerymodel_clearitemdata_isbase = value; }
    inline void setQSqlQueryModel_MimeTypes_IsBase(bool value) const { qsqlquerymodel_mimetypes_isbase = value; }
    inline void setQSqlQueryModel_MimeData_IsBase(bool value) const { qsqlquerymodel_mimedata_isbase = value; }
    inline void setQSqlQueryModel_CanDropMimeData_IsBase(bool value) const { qsqlquerymodel_candropmimedata_isbase = value; }
    inline void setQSqlQueryModel_SupportedDropActions_IsBase(bool value) const { qsqlquerymodel_supporteddropactions_isbase = value; }
    inline void setQSqlQueryModel_SupportedDragActions_IsBase(bool value) const { qsqlquerymodel_supporteddragactions_isbase = value; }
    inline void setQSqlQueryModel_InsertRows_IsBase(bool value) const { qsqlquerymodel_insertrows_isbase = value; }
    inline void setQSqlQueryModel_RemoveRows_IsBase(bool value) const { qsqlquerymodel_removerows_isbase = value; }
    inline void setQSqlQueryModel_MoveRows_IsBase(bool value) const { qsqlquerymodel_moverows_isbase = value; }
    inline void setQSqlQueryModel_MoveColumns_IsBase(bool value) const { qsqlquerymodel_movecolumns_isbase = value; }
    inline void setQSqlQueryModel_Sort_IsBase(bool value) const { qsqlquerymodel_sort_isbase = value; }
    inline void setQSqlQueryModel_Buddy_IsBase(bool value) const { qsqlquerymodel_buddy_isbase = value; }
    inline void setQSqlQueryModel_Match_IsBase(bool value) const { qsqlquerymodel_match_isbase = value; }
    inline void setQSqlQueryModel_Span_IsBase(bool value) const { qsqlquerymodel_span_isbase = value; }
    inline void setQSqlQueryModel_MultiData_IsBase(bool value) const { qsqlquerymodel_multidata_isbase = value; }
    inline void setQSqlQueryModel_Submit_IsBase(bool value) const { qsqlquerymodel_submit_isbase = value; }
    inline void setQSqlQueryModel_Revert_IsBase(bool value) const { qsqlquerymodel_revert_isbase = value; }
    inline void setQSqlQueryModel_ResetInternalData_IsBase(bool value) const { qsqlquerymodel_resetinternaldata_isbase = value; }
    inline void setQSqlQueryModel_Event_IsBase(bool value) const { qsqlquerymodel_event_isbase = value; }
    inline void setQSqlQueryModel_EventFilter_IsBase(bool value) const { qsqlquerymodel_eventfilter_isbase = value; }
    inline void setQSqlQueryModel_TimerEvent_IsBase(bool value) const { qsqlquerymodel_timerevent_isbase = value; }
    inline void setQSqlQueryModel_ChildEvent_IsBase(bool value) const { qsqlquerymodel_childevent_isbase = value; }
    inline void setQSqlQueryModel_CustomEvent_IsBase(bool value) const { qsqlquerymodel_customevent_isbase = value; }
    inline void setQSqlQueryModel_ConnectNotify_IsBase(bool value) const { qsqlquerymodel_connectnotify_isbase = value; }
    inline void setQSqlQueryModel_DisconnectNotify_IsBase(bool value) const { qsqlquerymodel_disconnectnotify_isbase = value; }
    inline void setQSqlQueryModel_BeginInsertRows_IsBase(bool value) const { qsqlquerymodel_begininsertrows_isbase = value; }
    inline void setQSqlQueryModel_EndInsertRows_IsBase(bool value) const { qsqlquerymodel_endinsertrows_isbase = value; }
    inline void setQSqlQueryModel_BeginRemoveRows_IsBase(bool value) const { qsqlquerymodel_beginremoverows_isbase = value; }
    inline void setQSqlQueryModel_EndRemoveRows_IsBase(bool value) const { qsqlquerymodel_endremoverows_isbase = value; }
    inline void setQSqlQueryModel_BeginInsertColumns_IsBase(bool value) const { qsqlquerymodel_begininsertcolumns_isbase = value; }
    inline void setQSqlQueryModel_EndInsertColumns_IsBase(bool value) const { qsqlquerymodel_endinsertcolumns_isbase = value; }
    inline void setQSqlQueryModel_BeginRemoveColumns_IsBase(bool value) const { qsqlquerymodel_beginremovecolumns_isbase = value; }
    inline void setQSqlQueryModel_EndRemoveColumns_IsBase(bool value) const { qsqlquerymodel_endremovecolumns_isbase = value; }
    inline void setQSqlQueryModel_BeginResetModel_IsBase(bool value) const { qsqlquerymodel_beginresetmodel_isbase = value; }
    inline void setQSqlQueryModel_EndResetModel_IsBase(bool value) const { qsqlquerymodel_endresetmodel_isbase = value; }
    inline void setQSqlQueryModel_SetLastError_IsBase(bool value) const { qsqlquerymodel_setlasterror_isbase = value; }
    inline void setQSqlQueryModel_CreateIndex_IsBase(bool value) const { qsqlquerymodel_createindex_isbase = value; }
    inline void setQSqlQueryModel_EncodeData_IsBase(bool value) const { qsqlquerymodel_encodedata_isbase = value; }
    inline void setQSqlQueryModel_DecodeData_IsBase(bool value) const { qsqlquerymodel_decodedata_isbase = value; }
    inline void setQSqlQueryModel_BeginMoveRows_IsBase(bool value) const { qsqlquerymodel_beginmoverows_isbase = value; }
    inline void setQSqlQueryModel_EndMoveRows_IsBase(bool value) const { qsqlquerymodel_endmoverows_isbase = value; }
    inline void setQSqlQueryModel_BeginMoveColumns_IsBase(bool value) const { qsqlquerymodel_beginmovecolumns_isbase = value; }
    inline void setQSqlQueryModel_EndMoveColumns_IsBase(bool value) const { qsqlquerymodel_endmovecolumns_isbase = value; }
    inline void setQSqlQueryModel_ChangePersistentIndex_IsBase(bool value) const { qsqlquerymodel_changepersistentindex_isbase = value; }
    inline void setQSqlQueryModel_ChangePersistentIndexList_IsBase(bool value) const { qsqlquerymodel_changepersistentindexlist_isbase = value; }
    inline void setQSqlQueryModel_PersistentIndexList_IsBase(bool value) const { qsqlquerymodel_persistentindexlist_isbase = value; }
    inline void setQSqlQueryModel_Sender_IsBase(bool value) const { qsqlquerymodel_sender_isbase = value; }
    inline void setQSqlQueryModel_SenderSignalIndex_IsBase(bool value) const { qsqlquerymodel_sendersignalindex_isbase = value; }
    inline void setQSqlQueryModel_Receivers_IsBase(bool value) const { qsqlquerymodel_receivers_isbase = value; }
    inline void setQSqlQueryModel_IsSignalConnected_IsBase(bool value) const { qsqlquerymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqlquerymodel_metacall_isbase) {
            qsqlquerymodel_metacall_isbase = false;
            return QSqlQueryModel::qt_metacall(param1, param2, param3);
        } else if (qsqlquerymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsqlquerymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlQueryModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqlquerymodel_rowcount_isbase) {
            qsqlquerymodel_rowcount_isbase = false;
            return QSqlQueryModel::rowCount(parent);
        } else if (qsqlquerymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsqlquerymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlQueryModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqlquerymodel_columncount_isbase) {
            qsqlquerymodel_columncount_isbase = false;
            return QSqlQueryModel::columnCount(parent);
        } else if (qsqlquerymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsqlquerymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlQueryModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& item, int role) const override {
        if (qsqlquerymodel_data_isbase) {
            qsqlquerymodel_data_isbase = false;
            return QSqlQueryModel::data(item, role);
        } else if (qsqlquerymodel_data_callback != nullptr) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            int cbval2 = role;

            QVariant* callback_ret = qsqlquerymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSqlQueryModel::data(item, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqlquerymodel_headerdata_isbase) {
            qsqlquerymodel_headerdata_isbase = false;
            return QSqlQueryModel::headerData(section, orientation, role);
        } else if (qsqlquerymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qsqlquerymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlQueryModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqlquerymodel_setheaderdata_isbase) {
            qsqlquerymodel_setheaderdata_isbase = false;
            return QSqlQueryModel::setHeaderData(section, orientation, value, role);
        } else if (qsqlquerymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qsqlquerymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSqlQueryModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_insertcolumns_isbase) {
            qsqlquerymodel_insertcolumns_isbase = false;
            return QSqlQueryModel::insertColumns(column, count, parent);
        } else if (qsqlquerymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlQueryModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_removecolumns_isbase) {
            qsqlquerymodel_removecolumns_isbase = false;
            return QSqlQueryModel::removeColumns(column, count, parent);
        } else if (qsqlquerymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlQueryModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqlquerymodel_clear_isbase) {
            qsqlquerymodel_clear_isbase = false;
            QSqlQueryModel::clear();
        } else if (qsqlquerymodel_clear_callback != nullptr) {
            qsqlquerymodel_clear_callback();
        } else {
            QSqlQueryModel::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqlquerymodel_fetchmore_isbase) {
            qsqlquerymodel_fetchmore_isbase = false;
            QSqlQueryModel::fetchMore(parent);
        } else if (qsqlquerymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qsqlquerymodel_fetchmore_callback(this, cbval1);
        } else {
            QSqlQueryModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqlquerymodel_canfetchmore_isbase) {
            qsqlquerymodel_canfetchmore_isbase = false;
            return QSqlQueryModel::canFetchMore(parent);
        } else if (qsqlquerymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlQueryModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqlquerymodel_rolenames_isbase) {
            qsqlquerymodel_rolenames_isbase = false;
            return QSqlQueryModel::roleNames();
        } else if (qsqlquerymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qsqlquerymodel_rolenames_callback();
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
            return QSqlQueryModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqlquerymodel_querychange_isbase) {
            qsqlquerymodel_querychange_isbase = false;
            QSqlQueryModel::queryChange();
        } else if (qsqlquerymodel_querychange_callback != nullptr) {
            qsqlquerymodel_querychange_callback();
        } else {
            QSqlQueryModel::queryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqlquerymodel_indexinquery_isbase) {
            qsqlquerymodel_indexinquery_isbase = false;
            return QSqlQueryModel::indexInQuery(item);
        } else if (qsqlquerymodel_indexinquery_callback != nullptr) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);

            QModelIndex* callback_ret = qsqlquerymodel_indexinquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlQueryModel::indexInQuery(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqlquerymodel_index_isbase) {
            qsqlquerymodel_index_isbase = false;
            return QSqlQueryModel::index(row, column, parent);
        } else if (qsqlquerymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qsqlquerymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlQueryModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqlquerymodel_sibling_isbase) {
            qsqlquerymodel_sibling_isbase = false;
            return QSqlQueryModel::sibling(row, column, idx);
        } else if (qsqlquerymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qsqlquerymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlQueryModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqlquerymodel_dropmimedata_isbase) {
            qsqlquerymodel_dropmimedata_isbase = false;
            return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
        } else if (qsqlquerymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqlquerymodel_flags_isbase) {
            qsqlquerymodel_flags_isbase = false;
            return QSqlQueryModel::flags(index);
        } else if (qsqlquerymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qsqlquerymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QSqlQueryModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsqlquerymodel_setdata_isbase) {
            qsqlquerymodel_setdata_isbase = false;
            return QSqlQueryModel::setData(index, value, role);
        } else if (qsqlquerymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qsqlquerymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlQueryModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqlquerymodel_itemdata_isbase) {
            qsqlquerymodel_itemdata_isbase = false;
            return QSqlQueryModel::itemData(index);
        } else if (qsqlquerymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qsqlquerymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QSqlQueryModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqlquerymodel_setitemdata_isbase) {
            qsqlquerymodel_setitemdata_isbase = false;
            return QSqlQueryModel::setItemData(index, roles);
        } else if (qsqlquerymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qsqlquerymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlQueryModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqlquerymodel_clearitemdata_isbase) {
            qsqlquerymodel_clearitemdata_isbase = false;
            return QSqlQueryModel::clearItemData(index);
        } else if (qsqlquerymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qsqlquerymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlQueryModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqlquerymodel_mimetypes_isbase) {
            qsqlquerymodel_mimetypes_isbase = false;
            return QSqlQueryModel::mimeTypes();
        } else if (qsqlquerymodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qsqlquerymodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QSqlQueryModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqlquerymodel_mimedata_isbase) {
            qsqlquerymodel_mimedata_isbase = false;
            return QSqlQueryModel::mimeData(indexes);
        } else if (qsqlquerymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qsqlquerymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlQueryModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqlquerymodel_candropmimedata_isbase) {
            qsqlquerymodel_candropmimedata_isbase = false;
            return QSqlQueryModel::canDropMimeData(data, action, row, column, parent);
        } else if (qsqlquerymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlQueryModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqlquerymodel_supporteddropactions_isbase) {
            qsqlquerymodel_supporteddropactions_isbase = false;
            return QSqlQueryModel::supportedDropActions();
        } else if (qsqlquerymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qsqlquerymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSqlQueryModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqlquerymodel_supporteddragactions_isbase) {
            qsqlquerymodel_supporteddragactions_isbase = false;
            return QSqlQueryModel::supportedDragActions();
        } else if (qsqlquerymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qsqlquerymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSqlQueryModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_insertrows_isbase) {
            qsqlquerymodel_insertrows_isbase = false;
            return QSqlQueryModel::insertRows(row, count, parent);
        } else if (qsqlquerymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlQueryModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_removerows_isbase) {
            qsqlquerymodel_removerows_isbase = false;
            return QSqlQueryModel::removeRows(row, count, parent);
        } else if (qsqlquerymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlquerymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlQueryModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlquerymodel_moverows_isbase) {
            qsqlquerymodel_moverows_isbase = false;
            return QSqlQueryModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qsqlquerymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsqlquerymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlQueryModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlquerymodel_movecolumns_isbase) {
            qsqlquerymodel_movecolumns_isbase = false;
            return QSqlQueryModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qsqlquerymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsqlquerymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlQueryModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqlquerymodel_sort_isbase) {
            qsqlquerymodel_sort_isbase = false;
            QSqlQueryModel::sort(column, order);
        } else if (qsqlquerymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qsqlquerymodel_sort_callback(this, cbval1, cbval2);
        } else {
            QSqlQueryModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqlquerymodel_buddy_isbase) {
            qsqlquerymodel_buddy_isbase = false;
            return QSqlQueryModel::buddy(index);
        } else if (qsqlquerymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qsqlquerymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlQueryModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqlquerymodel_match_isbase) {
            qsqlquerymodel_match_isbase = false;
            return QSqlQueryModel::match(start, role, value, hits, flags);
        } else if (qsqlquerymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qsqlquerymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QSqlQueryModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqlquerymodel_span_isbase) {
            qsqlquerymodel_span_isbase = false;
            return QSqlQueryModel::span(index);
        } else if (qsqlquerymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qsqlquerymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlQueryModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqlquerymodel_multidata_isbase) {
            qsqlquerymodel_multidata_isbase = false;
            QSqlQueryModel::multiData(index, roleDataSpan);
        } else if (qsqlquerymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qsqlquerymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QSqlQueryModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqlquerymodel_submit_isbase) {
            qsqlquerymodel_submit_isbase = false;
            return QSqlQueryModel::submit();
        } else if (qsqlquerymodel_submit_callback != nullptr) {
            bool callback_ret = qsqlquerymodel_submit_callback();
            return callback_ret;
        } else {
            return QSqlQueryModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqlquerymodel_revert_isbase) {
            qsqlquerymodel_revert_isbase = false;
            QSqlQueryModel::revert();
        } else if (qsqlquerymodel_revert_callback != nullptr) {
            qsqlquerymodel_revert_callback();
        } else {
            QSqlQueryModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqlquerymodel_resetinternaldata_isbase) {
            qsqlquerymodel_resetinternaldata_isbase = false;
            QSqlQueryModel::resetInternalData();
        } else if (qsqlquerymodel_resetinternaldata_callback != nullptr) {
            qsqlquerymodel_resetinternaldata_callback();
        } else {
            QSqlQueryModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqlquerymodel_event_isbase) {
            qsqlquerymodel_event_isbase = false;
            return QSqlQueryModel::event(event);
        } else if (qsqlquerymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsqlquerymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlQueryModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqlquerymodel_eventfilter_isbase) {
            qsqlquerymodel_eventfilter_isbase = false;
            return QSqlQueryModel::eventFilter(watched, event);
        } else if (qsqlquerymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsqlquerymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlQueryModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqlquerymodel_timerevent_isbase) {
            qsqlquerymodel_timerevent_isbase = false;
            QSqlQueryModel::timerEvent(event);
        } else if (qsqlquerymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsqlquerymodel_timerevent_callback(this, cbval1);
        } else {
            QSqlQueryModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqlquerymodel_childevent_isbase) {
            qsqlquerymodel_childevent_isbase = false;
            QSqlQueryModel::childEvent(event);
        } else if (qsqlquerymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsqlquerymodel_childevent_callback(this, cbval1);
        } else {
            QSqlQueryModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqlquerymodel_customevent_isbase) {
            qsqlquerymodel_customevent_isbase = false;
            QSqlQueryModel::customEvent(event);
        } else if (qsqlquerymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsqlquerymodel_customevent_callback(this, cbval1);
        } else {
            QSqlQueryModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqlquerymodel_connectnotify_isbase) {
            qsqlquerymodel_connectnotify_isbase = false;
            QSqlQueryModel::connectNotify(signal);
        } else if (qsqlquerymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqlquerymodel_connectnotify_callback(this, cbval1);
        } else {
            QSqlQueryModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqlquerymodel_disconnectnotify_isbase) {
            qsqlquerymodel_disconnectnotify_isbase = false;
            QSqlQueryModel::disconnectNotify(signal);
        } else if (qsqlquerymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqlquerymodel_disconnectnotify_callback(this, cbval1);
        } else {
            QSqlQueryModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_begininsertrows_isbase) {
            qsqlquerymodel_begininsertrows_isbase = false;
            QSqlQueryModel::beginInsertRows(parent, first, last);
        } else if (qsqlquerymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlquerymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlQueryModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qsqlquerymodel_endinsertrows_isbase) {
            qsqlquerymodel_endinsertrows_isbase = false;
            QSqlQueryModel::endInsertRows();
        } else if (qsqlquerymodel_endinsertrows_callback != nullptr) {
            qsqlquerymodel_endinsertrows_callback();
        } else {
            QSqlQueryModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_beginremoverows_isbase) {
            qsqlquerymodel_beginremoverows_isbase = false;
            QSqlQueryModel::beginRemoveRows(parent, first, last);
        } else if (qsqlquerymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlquerymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlQueryModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qsqlquerymodel_endremoverows_isbase) {
            qsqlquerymodel_endremoverows_isbase = false;
            QSqlQueryModel::endRemoveRows();
        } else if (qsqlquerymodel_endremoverows_callback != nullptr) {
            qsqlquerymodel_endremoverows_callback();
        } else {
            QSqlQueryModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_begininsertcolumns_isbase) {
            qsqlquerymodel_begininsertcolumns_isbase = false;
            QSqlQueryModel::beginInsertColumns(parent, first, last);
        } else if (qsqlquerymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlquerymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlQueryModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qsqlquerymodel_endinsertcolumns_isbase) {
            qsqlquerymodel_endinsertcolumns_isbase = false;
            QSqlQueryModel::endInsertColumns();
        } else if (qsqlquerymodel_endinsertcolumns_callback != nullptr) {
            qsqlquerymodel_endinsertcolumns_callback();
        } else {
            QSqlQueryModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_beginremovecolumns_isbase) {
            qsqlquerymodel_beginremovecolumns_isbase = false;
            QSqlQueryModel::beginRemoveColumns(parent, first, last);
        } else if (qsqlquerymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlquerymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlQueryModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qsqlquerymodel_endremovecolumns_isbase) {
            qsqlquerymodel_endremovecolumns_isbase = false;
            QSqlQueryModel::endRemoveColumns();
        } else if (qsqlquerymodel_endremovecolumns_callback != nullptr) {
            qsqlquerymodel_endremovecolumns_callback();
        } else {
            QSqlQueryModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qsqlquerymodel_beginresetmodel_isbase) {
            qsqlquerymodel_beginresetmodel_isbase = false;
            QSqlQueryModel::beginResetModel();
        } else if (qsqlquerymodel_beginresetmodel_callback != nullptr) {
            qsqlquerymodel_beginresetmodel_callback();
        } else {
            QSqlQueryModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qsqlquerymodel_endresetmodel_isbase) {
            qsqlquerymodel_endresetmodel_isbase = false;
            QSqlQueryModel::endResetModel();
        } else if (qsqlquerymodel_endresetmodel_callback != nullptr) {
            qsqlquerymodel_endresetmodel_callback();
        } else {
            QSqlQueryModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastError(const QSqlError& errorVal) {
        if (qsqlquerymodel_setlasterror_isbase) {
            qsqlquerymodel_setlasterror_isbase = false;
            QSqlQueryModel::setLastError(errorVal);
        } else if (qsqlquerymodel_setlasterror_callback != nullptr) {
            const QSqlError& errorVal_ret = errorVal;
            // Cast returned reference into pointer
            QSqlError* cbval1 = const_cast<QSqlError*>(&errorVal_ret);

            qsqlquerymodel_setlasterror_callback(this, cbval1);
        } else {
            QSqlQueryModel::setLastError(errorVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qsqlquerymodel_createindex_isbase) {
            qsqlquerymodel_createindex_isbase = false;
            return QSqlQueryModel::createIndex(row, column);
        } else if (qsqlquerymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qsqlquerymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSqlQueryModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qsqlquerymodel_encodedata_isbase) {
            qsqlquerymodel_encodedata_isbase = false;
            QSqlQueryModel::encodeData(indexes, stream);
        } else if (qsqlquerymodel_encodedata_callback != nullptr) {
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

            qsqlquerymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QSqlQueryModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qsqlquerymodel_decodedata_isbase) {
            qsqlquerymodel_decodedata_isbase = false;
            return QSqlQueryModel::decodeData(row, column, parent, stream);
        } else if (qsqlquerymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qsqlquerymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSqlQueryModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qsqlquerymodel_beginmoverows_isbase) {
            qsqlquerymodel_beginmoverows_isbase = false;
            return QSqlQueryModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qsqlquerymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qsqlquerymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlQueryModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qsqlquerymodel_endmoverows_isbase) {
            qsqlquerymodel_endmoverows_isbase = false;
            QSqlQueryModel::endMoveRows();
        } else if (qsqlquerymodel_endmoverows_callback != nullptr) {
            qsqlquerymodel_endmoverows_callback();
        } else {
            QSqlQueryModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qsqlquerymodel_beginmovecolumns_isbase) {
            qsqlquerymodel_beginmovecolumns_isbase = false;
            return QSqlQueryModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qsqlquerymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qsqlquerymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlQueryModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qsqlquerymodel_endmovecolumns_isbase) {
            qsqlquerymodel_endmovecolumns_isbase = false;
            QSqlQueryModel::endMoveColumns();
        } else if (qsqlquerymodel_endmovecolumns_callback != nullptr) {
            qsqlquerymodel_endmovecolumns_callback();
        } else {
            QSqlQueryModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qsqlquerymodel_changepersistentindex_isbase) {
            qsqlquerymodel_changepersistentindex_isbase = false;
            QSqlQueryModel::changePersistentIndex(from, to);
        } else if (qsqlquerymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qsqlquerymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QSqlQueryModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qsqlquerymodel_changepersistentindexlist_isbase) {
            qsqlquerymodel_changepersistentindexlist_isbase = false;
            QSqlQueryModel::changePersistentIndexList(from, to);
        } else if (qsqlquerymodel_changepersistentindexlist_callback != nullptr) {
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

            qsqlquerymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QSqlQueryModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qsqlquerymodel_persistentindexlist_isbase) {
            qsqlquerymodel_persistentindexlist_isbase = false;
            return QSqlQueryModel::persistentIndexList();
        } else if (qsqlquerymodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qsqlquerymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QSqlQueryModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsqlquerymodel_sender_isbase) {
            qsqlquerymodel_sender_isbase = false;
            return QSqlQueryModel::sender();
        } else if (qsqlquerymodel_sender_callback != nullptr) {
            QObject* callback_ret = qsqlquerymodel_sender_callback();
            return callback_ret;
        } else {
            return QSqlQueryModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsqlquerymodel_sendersignalindex_isbase) {
            qsqlquerymodel_sendersignalindex_isbase = false;
            return QSqlQueryModel::senderSignalIndex();
        } else if (qsqlquerymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qsqlquerymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSqlQueryModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsqlquerymodel_receivers_isbase) {
            qsqlquerymodel_receivers_isbase = false;
            return QSqlQueryModel::receivers(signal);
        } else if (qsqlquerymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsqlquerymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlQueryModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsqlquerymodel_issignalconnected_isbase) {
            qsqlquerymodel_issignalconnected_isbase = false;
            return QSqlQueryModel::isSignalConnected(signal);
        } else if (qsqlquerymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsqlquerymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlQueryModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSqlQueryModel_QueryChange(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseQueryChange(QSqlQueryModel* self);
    friend QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
    friend QModelIndex* QSqlQueryModel_QBaseIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
    friend void QSqlQueryModel_ResetInternalData(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseResetInternalData(QSqlQueryModel* self);
    friend void QSqlQueryModel_TimerEvent(QSqlQueryModel* self, QTimerEvent* event);
    friend void QSqlQueryModel_QBaseTimerEvent(QSqlQueryModel* self, QTimerEvent* event);
    friend void QSqlQueryModel_ChildEvent(QSqlQueryModel* self, QChildEvent* event);
    friend void QSqlQueryModel_QBaseChildEvent(QSqlQueryModel* self, QChildEvent* event);
    friend void QSqlQueryModel_CustomEvent(QSqlQueryModel* self, QEvent* event);
    friend void QSqlQueryModel_QBaseCustomEvent(QSqlQueryModel* self, QEvent* event);
    friend void QSqlQueryModel_ConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_QBaseConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_DisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_QBaseDisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_QBaseBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndInsertRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_QBaseBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndRemoveRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_QBaseBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndInsertColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_QBaseBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndRemoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseBeginResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_EndResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
    friend void QSqlQueryModel_QBaseSetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
    friend QModelIndex* QSqlQueryModel_CreateIndex(const QSqlQueryModel* self, int row, int column);
    friend QModelIndex* QSqlQueryModel_QBaseCreateIndex(const QSqlQueryModel* self, int row, int column);
    friend void QSqlQueryModel_EncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QSqlQueryModel_QBaseEncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QSqlQueryModel_DecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlQueryModel_QBaseDecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlQueryModel_BeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QSqlQueryModel_QBaseBeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QSqlQueryModel_EndMoveRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndMoveRows(QSqlQueryModel* self);
    friend bool QSqlQueryModel_BeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QSqlQueryModel_QBaseBeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QSqlQueryModel_EndMoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_QBaseEndMoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_ChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlQueryModel_QBaseChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlQueryModel_ChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QSqlQueryModel_QBaseChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QSqlQueryModel_PersistentIndexList(const QSqlQueryModel* self);
    friend libqt_list /* of QModelIndex* */ QSqlQueryModel_QBasePersistentIndexList(const QSqlQueryModel* self);
    friend QObject* QSqlQueryModel_Sender(const QSqlQueryModel* self);
    friend QObject* QSqlQueryModel_QBaseSender(const QSqlQueryModel* self);
    friend int QSqlQueryModel_SenderSignalIndex(const QSqlQueryModel* self);
    friend int QSqlQueryModel_QBaseSenderSignalIndex(const QSqlQueryModel* self);
    friend int QSqlQueryModel_Receivers(const QSqlQueryModel* self, const char* signal);
    friend int QSqlQueryModel_QBaseReceivers(const QSqlQueryModel* self, const char* signal);
    friend bool QSqlQueryModel_IsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal);
    friend bool QSqlQueryModel_QBaseIsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal);
};

#endif
