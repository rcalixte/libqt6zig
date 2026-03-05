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
    using QSqlQueryModel_MetaObject_Callback = QMetaObject* (*)();
    using QSqlQueryModel_Metacast_Callback = void* (*)(QSqlQueryModel*, const char*);
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
    using QSqlQueryModel_MimeTypes_Callback = const char** (*)();
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
    QSqlQueryModel_MetaObject_Callback qsqlquerymodel_metaobject_callback = nullptr;
    QSqlQueryModel_Metacast_Callback qsqlquerymodel_metacast_callback = nullptr;
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
    mutable bool qsqlquerymodel_metaobject_isbase = false;
    mutable bool qsqlquerymodel_metacast_isbase = false;
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

    // Callback setters
    inline void setQSqlQueryModel_MetaObject_Callback(QSqlQueryModel_MetaObject_Callback cb) { qsqlquerymodel_metaobject_callback = cb; }
    inline void setQSqlQueryModel_Metacast_Callback(QSqlQueryModel_Metacast_Callback cb) { qsqlquerymodel_metacast_callback = cb; }
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
    inline void setQSqlQueryModel_MetaObject_IsBase(bool value) const { qsqlquerymodel_metaobject_isbase = value; }
    inline void setQSqlQueryModel_Metacast_IsBase(bool value) const { qsqlquerymodel_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qsqlquerymodel_metaobject_isbase) {
            qsqlquerymodel_metaobject_isbase = false;
            return QSqlQueryModel::metaObject();
        }
        auto metaobject_cb = qsqlquerymodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSqlQueryModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsqlquerymodel_metacast_isbase) {
            qsqlquerymodel_metacast_isbase = false;
            return QSqlQueryModel::qt_metacast(param1);
        }
        auto metacast_cb = qsqlquerymodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqlquerymodel_metacall_isbase) {
            qsqlquerymodel_metacall_isbase = false;
            return QSqlQueryModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsqlquerymodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqlquerymodel_rowcount_isbase) {
            qsqlquerymodel_rowcount_isbase = false;
            return QSqlQueryModel::rowCount(parent);
        }
        auto rowcount_cb = qsqlquerymodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqlquerymodel_columncount_isbase) {
            qsqlquerymodel_columncount_isbase = false;
            return QSqlQueryModel::columnCount(parent);
        }
        auto columncount_cb = qsqlquerymodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& item, int role) const override {
        if (qsqlquerymodel_data_isbase) {
            qsqlquerymodel_data_isbase = false;
            return QSqlQueryModel::data(item, role);
        }
        auto data_cb = qsqlquerymodel_data_callback;
        if (data_cb) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QSqlQueryModel::data(item, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqlquerymodel_headerdata_isbase) {
            qsqlquerymodel_headerdata_isbase = false;
            return QSqlQueryModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qsqlquerymodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QSqlQueryModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqlquerymodel_setheaderdata_isbase) {
            qsqlquerymodel_setheaderdata_isbase = false;
            return QSqlQueryModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qsqlquerymodel_setheaderdata_callback;
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
        return QSqlQueryModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_insertcolumns_isbase) {
            qsqlquerymodel_insertcolumns_isbase = false;
            return QSqlQueryModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qsqlquerymodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_removecolumns_isbase) {
            qsqlquerymodel_removecolumns_isbase = false;
            return QSqlQueryModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qsqlquerymodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqlquerymodel_clear_isbase) {
            qsqlquerymodel_clear_isbase = false;
            QSqlQueryModel::clear();
            return;
        }
        auto clear_cb = qsqlquerymodel_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        QSqlQueryModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqlquerymodel_fetchmore_isbase) {
            qsqlquerymodel_fetchmore_isbase = false;
            QSqlQueryModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qsqlquerymodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqlquerymodel_canfetchmore_isbase) {
            qsqlquerymodel_canfetchmore_isbase = false;
            return QSqlQueryModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qsqlquerymodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqlquerymodel_rolenames_isbase) {
            qsqlquerymodel_rolenames_isbase = false;
            return QSqlQueryModel::roleNames();
        }
        auto rolenames_cb = qsqlquerymodel_rolenames_callback;
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
        return QSqlQueryModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqlquerymodel_querychange_isbase) {
            qsqlquerymodel_querychange_isbase = false;
            QSqlQueryModel::queryChange();
            return;
        }
        auto querychange_cb = qsqlquerymodel_querychange_callback;
        if (querychange_cb) {
            querychange_cb();
            return;
        }
        QSqlQueryModel::queryChange();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqlquerymodel_indexinquery_isbase) {
            qsqlquerymodel_indexinquery_isbase = false;
            return QSqlQueryModel::indexInQuery(item);
        }
        auto indexinquery_cb = qsqlquerymodel_indexinquery_callback;
        if (indexinquery_cb) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);

            QModelIndex* callback_ret = indexinquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QSqlQueryModel::indexInQuery(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqlquerymodel_index_isbase) {
            qsqlquerymodel_index_isbase = false;
            return QSqlQueryModel::index(row, column, parent);
        }
        auto index_cb = qsqlquerymodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QSqlQueryModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqlquerymodel_sibling_isbase) {
            qsqlquerymodel_sibling_isbase = false;
            return QSqlQueryModel::sibling(row, column, idx);
        }
        auto sibling_cb = qsqlquerymodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QSqlQueryModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqlquerymodel_dropmimedata_isbase) {
            qsqlquerymodel_dropmimedata_isbase = false;
            return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qsqlquerymodel_dropmimedata_callback;
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
        return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqlquerymodel_flags_isbase) {
            qsqlquerymodel_flags_isbase = false;
            return QSqlQueryModel::flags(index);
        }
        auto flags_cb = qsqlquerymodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QSqlQueryModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsqlquerymodel_setdata_isbase) {
            qsqlquerymodel_setdata_isbase = false;
            return QSqlQueryModel::setData(index, value, role);
        }
        auto setdata_cb = qsqlquerymodel_setdata_callback;
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
        return QSqlQueryModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqlquerymodel_itemdata_isbase) {
            qsqlquerymodel_itemdata_isbase = false;
            return QSqlQueryModel::itemData(index);
        }
        auto itemdata_cb = qsqlquerymodel_itemdata_callback;
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
        return QSqlQueryModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqlquerymodel_setitemdata_isbase) {
            qsqlquerymodel_setitemdata_isbase = false;
            return QSqlQueryModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qsqlquerymodel_setitemdata_callback;
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
        return QSqlQueryModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqlquerymodel_clearitemdata_isbase) {
            qsqlquerymodel_clearitemdata_isbase = false;
            return QSqlQueryModel::clearItemData(index);
        }
        auto clearitemdata_cb = qsqlquerymodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqlquerymodel_mimetypes_isbase) {
            qsqlquerymodel_mimetypes_isbase = false;
            return QSqlQueryModel::mimeTypes();
        }
        auto mimetypes_cb = qsqlquerymodel_mimetypes_callback;
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
        return QSqlQueryModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqlquerymodel_mimedata_isbase) {
            qsqlquerymodel_mimedata_isbase = false;
            return QSqlQueryModel::mimeData(indexes);
        }
        auto mimedata_cb = qsqlquerymodel_mimedata_callback;
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
        return QSqlQueryModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqlquerymodel_candropmimedata_isbase) {
            qsqlquerymodel_candropmimedata_isbase = false;
            return QSqlQueryModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qsqlquerymodel_candropmimedata_callback;
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
        return QSqlQueryModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqlquerymodel_supporteddropactions_isbase) {
            qsqlquerymodel_supporteddropactions_isbase = false;
            return QSqlQueryModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qsqlquerymodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlQueryModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqlquerymodel_supporteddragactions_isbase) {
            qsqlquerymodel_supporteddragactions_isbase = false;
            return QSqlQueryModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qsqlquerymodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlQueryModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_insertrows_isbase) {
            qsqlquerymodel_insertrows_isbase = false;
            return QSqlQueryModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qsqlquerymodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_removerows_isbase) {
            qsqlquerymodel_removerows_isbase = false;
            return QSqlQueryModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qsqlquerymodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlquerymodel_moverows_isbase) {
            qsqlquerymodel_moverows_isbase = false;
            return QSqlQueryModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qsqlquerymodel_moverows_callback;
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
        return QSqlQueryModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlquerymodel_movecolumns_isbase) {
            qsqlquerymodel_movecolumns_isbase = false;
            return QSqlQueryModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qsqlquerymodel_movecolumns_callback;
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
        return QSqlQueryModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqlquerymodel_sort_isbase) {
            qsqlquerymodel_sort_isbase = false;
            QSqlQueryModel::sort(column, order);
            return;
        }
        auto sort_cb = qsqlquerymodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QSqlQueryModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqlquerymodel_buddy_isbase) {
            qsqlquerymodel_buddy_isbase = false;
            return QSqlQueryModel::buddy(index);
        }
        auto buddy_cb = qsqlquerymodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QSqlQueryModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqlquerymodel_match_isbase) {
            qsqlquerymodel_match_isbase = false;
            return QSqlQueryModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qsqlquerymodel_match_callback;
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
        return QSqlQueryModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqlquerymodel_span_isbase) {
            qsqlquerymodel_span_isbase = false;
            return QSqlQueryModel::span(index);
        }
        auto span_cb = qsqlquerymodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QSqlQueryModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqlquerymodel_multidata_isbase) {
            qsqlquerymodel_multidata_isbase = false;
            QSqlQueryModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qsqlquerymodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QSqlQueryModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqlquerymodel_submit_isbase) {
            qsqlquerymodel_submit_isbase = false;
            return QSqlQueryModel::submit();
        }
        auto submit_cb = qsqlquerymodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QSqlQueryModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqlquerymodel_revert_isbase) {
            qsqlquerymodel_revert_isbase = false;
            QSqlQueryModel::revert();
            return;
        }
        auto revert_cb = qsqlquerymodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QSqlQueryModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqlquerymodel_resetinternaldata_isbase) {
            qsqlquerymodel_resetinternaldata_isbase = false;
            QSqlQueryModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qsqlquerymodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QSqlQueryModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqlquerymodel_event_isbase) {
            qsqlquerymodel_event_isbase = false;
            return QSqlQueryModel::event(event);
        }
        auto event_cb = qsqlquerymodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqlquerymodel_eventfilter_isbase) {
            qsqlquerymodel_eventfilter_isbase = false;
            return QSqlQueryModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsqlquerymodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlQueryModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqlquerymodel_timerevent_isbase) {
            qsqlquerymodel_timerevent_isbase = false;
            QSqlQueryModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsqlquerymodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqlquerymodel_childevent_isbase) {
            qsqlquerymodel_childevent_isbase = false;
            QSqlQueryModel::childEvent(event);
            return;
        }
        auto childevent_cb = qsqlquerymodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqlquerymodel_customevent_isbase) {
            qsqlquerymodel_customevent_isbase = false;
            QSqlQueryModel::customEvent(event);
            return;
        }
        auto customevent_cb = qsqlquerymodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqlquerymodel_connectnotify_isbase) {
            qsqlquerymodel_connectnotify_isbase = false;
            QSqlQueryModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsqlquerymodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqlquerymodel_disconnectnotify_isbase) {
            qsqlquerymodel_disconnectnotify_isbase = false;
            QSqlQueryModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsqlquerymodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_begininsertrows_isbase) {
            qsqlquerymodel_begininsertrows_isbase = false;
            QSqlQueryModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qsqlquerymodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QSqlQueryModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qsqlquerymodel_endinsertrows_isbase) {
            qsqlquerymodel_endinsertrows_isbase = false;
            QSqlQueryModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qsqlquerymodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QSqlQueryModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_beginremoverows_isbase) {
            qsqlquerymodel_beginremoverows_isbase = false;
            QSqlQueryModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qsqlquerymodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QSqlQueryModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qsqlquerymodel_endremoverows_isbase) {
            qsqlquerymodel_endremoverows_isbase = false;
            QSqlQueryModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qsqlquerymodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QSqlQueryModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_begininsertcolumns_isbase) {
            qsqlquerymodel_begininsertcolumns_isbase = false;
            QSqlQueryModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qsqlquerymodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QSqlQueryModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qsqlquerymodel_endinsertcolumns_isbase) {
            qsqlquerymodel_endinsertcolumns_isbase = false;
            QSqlQueryModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qsqlquerymodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QSqlQueryModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qsqlquerymodel_beginremovecolumns_isbase) {
            qsqlquerymodel_beginremovecolumns_isbase = false;
            QSqlQueryModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qsqlquerymodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QSqlQueryModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qsqlquerymodel_endremovecolumns_isbase) {
            qsqlquerymodel_endremovecolumns_isbase = false;
            QSqlQueryModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qsqlquerymodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QSqlQueryModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qsqlquerymodel_beginresetmodel_isbase) {
            qsqlquerymodel_beginresetmodel_isbase = false;
            QSqlQueryModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qsqlquerymodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QSqlQueryModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qsqlquerymodel_endresetmodel_isbase) {
            qsqlquerymodel_endresetmodel_isbase = false;
            QSqlQueryModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qsqlquerymodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QSqlQueryModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void setLastError(const QSqlError& errorVal) {
        if (qsqlquerymodel_setlasterror_isbase) {
            qsqlquerymodel_setlasterror_isbase = false;
            QSqlQueryModel::setLastError(errorVal);
            return;
        }
        auto setlasterror_cb = qsqlquerymodel_setlasterror_callback;
        if (setlasterror_cb) {
            const QSqlError& errorVal_ret = errorVal;
            // Cast returned reference into pointer
            QSqlError* cbval1 = const_cast<QSqlError*>(&errorVal_ret);

            setlasterror_cb(this, cbval1);
            return;
        }
        QSqlQueryModel::setLastError(errorVal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qsqlquerymodel_createindex_isbase) {
            qsqlquerymodel_createindex_isbase = false;
            return QSqlQueryModel::createIndex(row, column);
        }
        auto createindex_cb = qsqlquerymodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QSqlQueryModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qsqlquerymodel_encodedata_isbase) {
            qsqlquerymodel_encodedata_isbase = false;
            QSqlQueryModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qsqlquerymodel_encodedata_callback;
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
        QSqlQueryModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qsqlquerymodel_decodedata_isbase) {
            qsqlquerymodel_decodedata_isbase = false;
            return QSqlQueryModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qsqlquerymodel_decodedata_callback;
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
        return QSqlQueryModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qsqlquerymodel_beginmoverows_isbase) {
            qsqlquerymodel_beginmoverows_isbase = false;
            return QSqlQueryModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qsqlquerymodel_beginmoverows_callback;
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
        return QSqlQueryModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qsqlquerymodel_endmoverows_isbase) {
            qsqlquerymodel_endmoverows_isbase = false;
            QSqlQueryModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qsqlquerymodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QSqlQueryModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qsqlquerymodel_beginmovecolumns_isbase) {
            qsqlquerymodel_beginmovecolumns_isbase = false;
            return QSqlQueryModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qsqlquerymodel_beginmovecolumns_callback;
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
        return QSqlQueryModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qsqlquerymodel_endmovecolumns_isbase) {
            qsqlquerymodel_endmovecolumns_isbase = false;
            QSqlQueryModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qsqlquerymodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QSqlQueryModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qsqlquerymodel_changepersistentindex_isbase) {
            qsqlquerymodel_changepersistentindex_isbase = false;
            QSqlQueryModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qsqlquerymodel_changepersistentindex_callback;
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
        QSqlQueryModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qsqlquerymodel_changepersistentindexlist_isbase) {
            qsqlquerymodel_changepersistentindexlist_isbase = false;
            QSqlQueryModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qsqlquerymodel_changepersistentindexlist_callback;
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
        QSqlQueryModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qsqlquerymodel_persistentindexlist_isbase) {
            qsqlquerymodel_persistentindexlist_isbase = false;
            return QSqlQueryModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qsqlquerymodel_persistentindexlist_callback;
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
        return QSqlQueryModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsqlquerymodel_sender_isbase) {
            qsqlquerymodel_sender_isbase = false;
            return QSqlQueryModel::sender();
        }
        auto sender_cb = qsqlquerymodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSqlQueryModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsqlquerymodel_sendersignalindex_isbase) {
            qsqlquerymodel_sendersignalindex_isbase = false;
            return QSqlQueryModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsqlquerymodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsqlquerymodel_receivers_isbase) {
            qsqlquerymodel_receivers_isbase = false;
            return QSqlQueryModel::receivers(signal);
        }
        auto receivers_cb = qsqlquerymodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsqlquerymodel_issignalconnected_isbase) {
            qsqlquerymodel_issignalconnected_isbase = false;
            return QSqlQueryModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsqlquerymodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QSqlQueryModel_QueryChange(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperQueryChange(QSqlQueryModel* self);
    friend QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
    friend QModelIndex* QSqlQueryModel_SuperIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
    friend void QSqlQueryModel_ResetInternalData(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperResetInternalData(QSqlQueryModel* self);
    friend void QSqlQueryModel_TimerEvent(QSqlQueryModel* self, QTimerEvent* event);
    friend void QSqlQueryModel_SuperTimerEvent(QSqlQueryModel* self, QTimerEvent* event);
    friend void QSqlQueryModel_ChildEvent(QSqlQueryModel* self, QChildEvent* event);
    friend void QSqlQueryModel_SuperChildEvent(QSqlQueryModel* self, QChildEvent* event);
    friend void QSqlQueryModel_CustomEvent(QSqlQueryModel* self, QEvent* event);
    friend void QSqlQueryModel_SuperCustomEvent(QSqlQueryModel* self, QEvent* event);
    friend void QSqlQueryModel_ConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_SuperConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_DisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_SuperDisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_SuperBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndInsertRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_SuperBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndRemoveRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_SuperBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndInsertColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_SuperBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndRemoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperBeginResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_EndResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndResetModel(QSqlQueryModel* self);
    friend void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
    friend void QSqlQueryModel_SuperSetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
    friend QModelIndex* QSqlQueryModel_CreateIndex(const QSqlQueryModel* self, int row, int column);
    friend QModelIndex* QSqlQueryModel_SuperCreateIndex(const QSqlQueryModel* self, int row, int column);
    friend void QSqlQueryModel_EncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QSqlQueryModel_SuperEncodeData(const QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QSqlQueryModel_DecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlQueryModel_SuperDecodeData(QSqlQueryModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlQueryModel_BeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QSqlQueryModel_SuperBeginMoveRows(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QSqlQueryModel_EndMoveRows(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndMoveRows(QSqlQueryModel* self);
    friend bool QSqlQueryModel_BeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QSqlQueryModel_SuperBeginMoveColumns(QSqlQueryModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QSqlQueryModel_EndMoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperEndMoveColumns(QSqlQueryModel* self);
    friend void QSqlQueryModel_ChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlQueryModel_SuperChangePersistentIndex(QSqlQueryModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlQueryModel_ChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QSqlQueryModel_SuperChangePersistentIndexList(QSqlQueryModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QSqlQueryModel_PersistentIndexList(const QSqlQueryModel* self);
    friend libqt_list /* of QModelIndex* */ QSqlQueryModel_SuperPersistentIndexList(const QSqlQueryModel* self);
    friend QObject* QSqlQueryModel_Sender(const QSqlQueryModel* self);
    friend QObject* QSqlQueryModel_SuperSender(const QSqlQueryModel* self);
    friend int QSqlQueryModel_SenderSignalIndex(const QSqlQueryModel* self);
    friend int QSqlQueryModel_SuperSenderSignalIndex(const QSqlQueryModel* self);
    friend int QSqlQueryModel_Receivers(const QSqlQueryModel* self, const char* signal);
    friend int QSqlQueryModel_SuperReceivers(const QSqlQueryModel* self, const char* signal);
    friend bool QSqlQueryModel_IsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal);
    friend bool QSqlQueryModel_SuperIsSignalConnected(const QSqlQueryModel* self, const QMetaMethod* signal);
};

#endif
