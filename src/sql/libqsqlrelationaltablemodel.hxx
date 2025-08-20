#pragma once
#ifndef SRC_SQLC_LIBVIRTUALQSQLRELATIONALTABLEMODEL_H
#define SRC_SQLC_LIBVIRTUALQSQLRELATIONALTABLEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlRelationalTableModel so that we can call protected methods
class VirtualQSqlRelationalTableModel final : public QSqlRelationalTableModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQSqlRelationalTableModel = true;

    // Virtual class public types (including callbacks)
    using QSqlRelationalTableModel_Metacall_Callback = int (*)(QSqlRelationalTableModel*, int, int, void**);
    using QSqlRelationalTableModel_Data_Callback = QVariant* (*)(const QSqlRelationalTableModel*, QModelIndex*, int);
    using QSqlRelationalTableModel_SetData_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, QVariant*, int);
    using QSqlRelationalTableModel_RemoveColumns_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_Clear_Callback = void (*)();
    using QSqlRelationalTableModel_Select_Callback = bool (*)();
    using QSqlRelationalTableModel_SetTable_Callback = void (*)(QSqlRelationalTableModel*, libqt_string);
    using QSqlRelationalTableModel_SetRelation_Callback = void (*)(QSqlRelationalTableModel*, int, QSqlRelation*);
    using QSqlRelationalTableModel_RelationModel_Callback = QSqlTableModel* (*)(const QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_RevertRow_Callback = void (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_SelectStatement_Callback = libqt_string (*)();
    using QSqlRelationalTableModel_UpdateRowInTable_Callback = bool (*)(QSqlRelationalTableModel*, int, QSqlRecord*);
    using QSqlRelationalTableModel_InsertRowIntoTable_Callback = bool (*)(QSqlRelationalTableModel*, QSqlRecord*);
    using QSqlRelationalTableModel_OrderByClause_Callback = libqt_string (*)();
    using QSqlRelationalTableModel_Flags_Callback = int (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_ClearItemData_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_HeaderData_Callback = QVariant* (*)(const QSqlRelationalTableModel*, int, int, int);
    using QSqlRelationalTableModel_SetEditStrategy_Callback = void (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_Sort_Callback = void (*)(QSqlRelationalTableModel*, int, int);
    using QSqlRelationalTableModel_SetSort_Callback = void (*)(QSqlRelationalTableModel*, int, int);
    using QSqlRelationalTableModel_SetFilter_Callback = void (*)(QSqlRelationalTableModel*, libqt_string);
    using QSqlRelationalTableModel_RowCount_Callback = int (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_RemoveRows_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_InsertRows_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_SelectRow_Callback = bool (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_Submit_Callback = bool (*)();
    using QSqlRelationalTableModel_Revert_Callback = void (*)();
    using QSqlRelationalTableModel_DeleteRowFromTable_Callback = bool (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_ColumnCount_Callback = int (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_SetHeaderData_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QVariant*, int);
    using QSqlRelationalTableModel_InsertColumns_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_FetchMore_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_CanFetchMore_Callback = bool (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QSqlRelationalTableModel_QueryChange_Callback = void (*)();
    using QSqlRelationalTableModel_Index_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_Sibling_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_DropMimeData_Callback = bool (*)(QSqlRelationalTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlRelationalTableModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_SetItemData_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSqlRelationalTableModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QSqlRelationalTableModel_MimeData_Callback = QMimeData* (*)(const QSqlRelationalTableModel*, libqt_list /* of QModelIndex* */);
    using QSqlRelationalTableModel_CanDropMimeData_Callback = bool (*)(const QSqlRelationalTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlRelationalTableModel_SupportedDropActions_Callback = int (*)();
    using QSqlRelationalTableModel_SupportedDragActions_Callback = int (*)();
    using QSqlRelationalTableModel_MoveRows_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlRelationalTableModel_MoveColumns_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlRelationalTableModel_Buddy_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QSqlRelationalTableModel*, QModelIndex*, int, QVariant*, int, int);
    using QSqlRelationalTableModel_Span_Callback = QSize* (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_MultiData_Callback = void (*)(const QSqlRelationalTableModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSqlRelationalTableModel_ResetInternalData_Callback = void (*)();
    using QSqlRelationalTableModel_Event_Callback = bool (*)(QSqlRelationalTableModel*, QEvent*);
    using QSqlRelationalTableModel_EventFilter_Callback = bool (*)(QSqlRelationalTableModel*, QObject*, QEvent*);
    using QSqlRelationalTableModel_TimerEvent_Callback = void (*)(QSqlRelationalTableModel*, QTimerEvent*);
    using QSqlRelationalTableModel_ChildEvent_Callback = void (*)(QSqlRelationalTableModel*, QChildEvent*);
    using QSqlRelationalTableModel_CustomEvent_Callback = void (*)(QSqlRelationalTableModel*, QEvent*);
    using QSqlRelationalTableModel_ConnectNotify_Callback = void (*)(QSqlRelationalTableModel*, QMetaMethod*);
    using QSqlRelationalTableModel_DisconnectNotify_Callback = void (*)(QSqlRelationalTableModel*, QMetaMethod*);
    using QSqlRelationalTableModel_SetPrimaryKey_Callback = void (*)(QSqlRelationalTableModel*, QSqlIndex*);
    using QSqlRelationalTableModel_PrimaryValues_Callback = QSqlRecord* (*)(const QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_BeginInsertRows_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*, int, int);
    using QSqlRelationalTableModel_EndInsertRows_Callback = void (*)();
    using QSqlRelationalTableModel_BeginRemoveRows_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*, int, int);
    using QSqlRelationalTableModel_EndRemoveRows_Callback = void (*)();
    using QSqlRelationalTableModel_BeginInsertColumns_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*, int, int);
    using QSqlRelationalTableModel_EndInsertColumns_Callback = void (*)();
    using QSqlRelationalTableModel_BeginRemoveColumns_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*, int, int);
    using QSqlRelationalTableModel_EndRemoveColumns_Callback = void (*)();
    using QSqlRelationalTableModel_BeginResetModel_Callback = void (*)();
    using QSqlRelationalTableModel_EndResetModel_Callback = void (*)();
    using QSqlRelationalTableModel_SetLastError_Callback = void (*)(QSqlRelationalTableModel*, QSqlError*);
    using QSqlRelationalTableModel_CreateIndex_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, int, int);
    using QSqlRelationalTableModel_EncodeData_Callback = void (*)(const QSqlRelationalTableModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QSqlRelationalTableModel_DecodeData_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*, QDataStream*);
    using QSqlRelationalTableModel_BeginMoveRows_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlRelationalTableModel_EndMoveRows_Callback = void (*)();
    using QSqlRelationalTableModel_BeginMoveColumns_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlRelationalTableModel_EndMoveColumns_Callback = void (*)();
    using QSqlRelationalTableModel_ChangePersistentIndex_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*, QModelIndex*);
    using QSqlRelationalTableModel_ChangePersistentIndexList_Callback = void (*)(QSqlRelationalTableModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QSqlRelationalTableModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QSqlRelationalTableModel_Sender_Callback = QObject* (*)();
    using QSqlRelationalTableModel_SenderSignalIndex_Callback = int (*)();
    using QSqlRelationalTableModel_Receivers_Callback = int (*)(const QSqlRelationalTableModel*, const char*);
    using QSqlRelationalTableModel_IsSignalConnected_Callback = bool (*)(const QSqlRelationalTableModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSqlRelationalTableModel_Metacall_Callback qsqlrelationaltablemodel_metacall_callback = nullptr;
    QSqlRelationalTableModel_Data_Callback qsqlrelationaltablemodel_data_callback = nullptr;
    QSqlRelationalTableModel_SetData_Callback qsqlrelationaltablemodel_setdata_callback = nullptr;
    QSqlRelationalTableModel_RemoveColumns_Callback qsqlrelationaltablemodel_removecolumns_callback = nullptr;
    QSqlRelationalTableModel_Clear_Callback qsqlrelationaltablemodel_clear_callback = nullptr;
    QSqlRelationalTableModel_Select_Callback qsqlrelationaltablemodel_select_callback = nullptr;
    QSqlRelationalTableModel_SetTable_Callback qsqlrelationaltablemodel_settable_callback = nullptr;
    QSqlRelationalTableModel_SetRelation_Callback qsqlrelationaltablemodel_setrelation_callback = nullptr;
    QSqlRelationalTableModel_RelationModel_Callback qsqlrelationaltablemodel_relationmodel_callback = nullptr;
    QSqlRelationalTableModel_RevertRow_Callback qsqlrelationaltablemodel_revertrow_callback = nullptr;
    QSqlRelationalTableModel_SelectStatement_Callback qsqlrelationaltablemodel_selectstatement_callback = nullptr;
    QSqlRelationalTableModel_UpdateRowInTable_Callback qsqlrelationaltablemodel_updaterowintable_callback = nullptr;
    QSqlRelationalTableModel_InsertRowIntoTable_Callback qsqlrelationaltablemodel_insertrowintotable_callback = nullptr;
    QSqlRelationalTableModel_OrderByClause_Callback qsqlrelationaltablemodel_orderbyclause_callback = nullptr;
    QSqlRelationalTableModel_Flags_Callback qsqlrelationaltablemodel_flags_callback = nullptr;
    QSqlRelationalTableModel_ClearItemData_Callback qsqlrelationaltablemodel_clearitemdata_callback = nullptr;
    QSqlRelationalTableModel_HeaderData_Callback qsqlrelationaltablemodel_headerdata_callback = nullptr;
    QSqlRelationalTableModel_SetEditStrategy_Callback qsqlrelationaltablemodel_seteditstrategy_callback = nullptr;
    QSqlRelationalTableModel_Sort_Callback qsqlrelationaltablemodel_sort_callback = nullptr;
    QSqlRelationalTableModel_SetSort_Callback qsqlrelationaltablemodel_setsort_callback = nullptr;
    QSqlRelationalTableModel_SetFilter_Callback qsqlrelationaltablemodel_setfilter_callback = nullptr;
    QSqlRelationalTableModel_RowCount_Callback qsqlrelationaltablemodel_rowcount_callback = nullptr;
    QSqlRelationalTableModel_RemoveRows_Callback qsqlrelationaltablemodel_removerows_callback = nullptr;
    QSqlRelationalTableModel_InsertRows_Callback qsqlrelationaltablemodel_insertrows_callback = nullptr;
    QSqlRelationalTableModel_SelectRow_Callback qsqlrelationaltablemodel_selectrow_callback = nullptr;
    QSqlRelationalTableModel_Submit_Callback qsqlrelationaltablemodel_submit_callback = nullptr;
    QSqlRelationalTableModel_Revert_Callback qsqlrelationaltablemodel_revert_callback = nullptr;
    QSqlRelationalTableModel_DeleteRowFromTable_Callback qsqlrelationaltablemodel_deleterowfromtable_callback = nullptr;
    QSqlRelationalTableModel_IndexInQuery_Callback qsqlrelationaltablemodel_indexinquery_callback = nullptr;
    QSqlRelationalTableModel_ColumnCount_Callback qsqlrelationaltablemodel_columncount_callback = nullptr;
    QSqlRelationalTableModel_SetHeaderData_Callback qsqlrelationaltablemodel_setheaderdata_callback = nullptr;
    QSqlRelationalTableModel_InsertColumns_Callback qsqlrelationaltablemodel_insertcolumns_callback = nullptr;
    QSqlRelationalTableModel_FetchMore_Callback qsqlrelationaltablemodel_fetchmore_callback = nullptr;
    QSqlRelationalTableModel_CanFetchMore_Callback qsqlrelationaltablemodel_canfetchmore_callback = nullptr;
    QSqlRelationalTableModel_RoleNames_Callback qsqlrelationaltablemodel_rolenames_callback = nullptr;
    QSqlRelationalTableModel_QueryChange_Callback qsqlrelationaltablemodel_querychange_callback = nullptr;
    QSqlRelationalTableModel_Index_Callback qsqlrelationaltablemodel_index_callback = nullptr;
    QSqlRelationalTableModel_Sibling_Callback qsqlrelationaltablemodel_sibling_callback = nullptr;
    QSqlRelationalTableModel_DropMimeData_Callback qsqlrelationaltablemodel_dropmimedata_callback = nullptr;
    QSqlRelationalTableModel_ItemData_Callback qsqlrelationaltablemodel_itemdata_callback = nullptr;
    QSqlRelationalTableModel_SetItemData_Callback qsqlrelationaltablemodel_setitemdata_callback = nullptr;
    QSqlRelationalTableModel_MimeTypes_Callback qsqlrelationaltablemodel_mimetypes_callback = nullptr;
    QSqlRelationalTableModel_MimeData_Callback qsqlrelationaltablemodel_mimedata_callback = nullptr;
    QSqlRelationalTableModel_CanDropMimeData_Callback qsqlrelationaltablemodel_candropmimedata_callback = nullptr;
    QSqlRelationalTableModel_SupportedDropActions_Callback qsqlrelationaltablemodel_supporteddropactions_callback = nullptr;
    QSqlRelationalTableModel_SupportedDragActions_Callback qsqlrelationaltablemodel_supporteddragactions_callback = nullptr;
    QSqlRelationalTableModel_MoveRows_Callback qsqlrelationaltablemodel_moverows_callback = nullptr;
    QSqlRelationalTableModel_MoveColumns_Callback qsqlrelationaltablemodel_movecolumns_callback = nullptr;
    QSqlRelationalTableModel_Buddy_Callback qsqlrelationaltablemodel_buddy_callback = nullptr;
    QSqlRelationalTableModel_Match_Callback qsqlrelationaltablemodel_match_callback = nullptr;
    QSqlRelationalTableModel_Span_Callback qsqlrelationaltablemodel_span_callback = nullptr;
    QSqlRelationalTableModel_MultiData_Callback qsqlrelationaltablemodel_multidata_callback = nullptr;
    QSqlRelationalTableModel_ResetInternalData_Callback qsqlrelationaltablemodel_resetinternaldata_callback = nullptr;
    QSqlRelationalTableModel_Event_Callback qsqlrelationaltablemodel_event_callback = nullptr;
    QSqlRelationalTableModel_EventFilter_Callback qsqlrelationaltablemodel_eventfilter_callback = nullptr;
    QSqlRelationalTableModel_TimerEvent_Callback qsqlrelationaltablemodel_timerevent_callback = nullptr;
    QSqlRelationalTableModel_ChildEvent_Callback qsqlrelationaltablemodel_childevent_callback = nullptr;
    QSqlRelationalTableModel_CustomEvent_Callback qsqlrelationaltablemodel_customevent_callback = nullptr;
    QSqlRelationalTableModel_ConnectNotify_Callback qsqlrelationaltablemodel_connectnotify_callback = nullptr;
    QSqlRelationalTableModel_DisconnectNotify_Callback qsqlrelationaltablemodel_disconnectnotify_callback = nullptr;
    QSqlRelationalTableModel_SetPrimaryKey_Callback qsqlrelationaltablemodel_setprimarykey_callback = nullptr;
    QSqlRelationalTableModel_PrimaryValues_Callback qsqlrelationaltablemodel_primaryvalues_callback = nullptr;
    QSqlRelationalTableModel_BeginInsertRows_Callback qsqlrelationaltablemodel_begininsertrows_callback = nullptr;
    QSqlRelationalTableModel_EndInsertRows_Callback qsqlrelationaltablemodel_endinsertrows_callback = nullptr;
    QSqlRelationalTableModel_BeginRemoveRows_Callback qsqlrelationaltablemodel_beginremoverows_callback = nullptr;
    QSqlRelationalTableModel_EndRemoveRows_Callback qsqlrelationaltablemodel_endremoverows_callback = nullptr;
    QSqlRelationalTableModel_BeginInsertColumns_Callback qsqlrelationaltablemodel_begininsertcolumns_callback = nullptr;
    QSqlRelationalTableModel_EndInsertColumns_Callback qsqlrelationaltablemodel_endinsertcolumns_callback = nullptr;
    QSqlRelationalTableModel_BeginRemoveColumns_Callback qsqlrelationaltablemodel_beginremovecolumns_callback = nullptr;
    QSqlRelationalTableModel_EndRemoveColumns_Callback qsqlrelationaltablemodel_endremovecolumns_callback = nullptr;
    QSqlRelationalTableModel_BeginResetModel_Callback qsqlrelationaltablemodel_beginresetmodel_callback = nullptr;
    QSqlRelationalTableModel_EndResetModel_Callback qsqlrelationaltablemodel_endresetmodel_callback = nullptr;
    QSqlRelationalTableModel_SetLastError_Callback qsqlrelationaltablemodel_setlasterror_callback = nullptr;
    QSqlRelationalTableModel_CreateIndex_Callback qsqlrelationaltablemodel_createindex_callback = nullptr;
    QSqlRelationalTableModel_EncodeData_Callback qsqlrelationaltablemodel_encodedata_callback = nullptr;
    QSqlRelationalTableModel_DecodeData_Callback qsqlrelationaltablemodel_decodedata_callback = nullptr;
    QSqlRelationalTableModel_BeginMoveRows_Callback qsqlrelationaltablemodel_beginmoverows_callback = nullptr;
    QSqlRelationalTableModel_EndMoveRows_Callback qsqlrelationaltablemodel_endmoverows_callback = nullptr;
    QSqlRelationalTableModel_BeginMoveColumns_Callback qsqlrelationaltablemodel_beginmovecolumns_callback = nullptr;
    QSqlRelationalTableModel_EndMoveColumns_Callback qsqlrelationaltablemodel_endmovecolumns_callback = nullptr;
    QSqlRelationalTableModel_ChangePersistentIndex_Callback qsqlrelationaltablemodel_changepersistentindex_callback = nullptr;
    QSqlRelationalTableModel_ChangePersistentIndexList_Callback qsqlrelationaltablemodel_changepersistentindexlist_callback = nullptr;
    QSqlRelationalTableModel_PersistentIndexList_Callback qsqlrelationaltablemodel_persistentindexlist_callback = nullptr;
    QSqlRelationalTableModel_Sender_Callback qsqlrelationaltablemodel_sender_callback = nullptr;
    QSqlRelationalTableModel_SenderSignalIndex_Callback qsqlrelationaltablemodel_sendersignalindex_callback = nullptr;
    QSqlRelationalTableModel_Receivers_Callback qsqlrelationaltablemodel_receivers_callback = nullptr;
    QSqlRelationalTableModel_IsSignalConnected_Callback qsqlrelationaltablemodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsqlrelationaltablemodel_metacall_isbase = false;
    mutable bool qsqlrelationaltablemodel_data_isbase = false;
    mutable bool qsqlrelationaltablemodel_setdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_removecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_clear_isbase = false;
    mutable bool qsqlrelationaltablemodel_select_isbase = false;
    mutable bool qsqlrelationaltablemodel_settable_isbase = false;
    mutable bool qsqlrelationaltablemodel_setrelation_isbase = false;
    mutable bool qsqlrelationaltablemodel_relationmodel_isbase = false;
    mutable bool qsqlrelationaltablemodel_revertrow_isbase = false;
    mutable bool qsqlrelationaltablemodel_selectstatement_isbase = false;
    mutable bool qsqlrelationaltablemodel_updaterowintable_isbase = false;
    mutable bool qsqlrelationaltablemodel_insertrowintotable_isbase = false;
    mutable bool qsqlrelationaltablemodel_orderbyclause_isbase = false;
    mutable bool qsqlrelationaltablemodel_flags_isbase = false;
    mutable bool qsqlrelationaltablemodel_clearitemdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_headerdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_seteditstrategy_isbase = false;
    mutable bool qsqlrelationaltablemodel_sort_isbase = false;
    mutable bool qsqlrelationaltablemodel_setsort_isbase = false;
    mutable bool qsqlrelationaltablemodel_setfilter_isbase = false;
    mutable bool qsqlrelationaltablemodel_rowcount_isbase = false;
    mutable bool qsqlrelationaltablemodel_removerows_isbase = false;
    mutable bool qsqlrelationaltablemodel_insertrows_isbase = false;
    mutable bool qsqlrelationaltablemodel_selectrow_isbase = false;
    mutable bool qsqlrelationaltablemodel_submit_isbase = false;
    mutable bool qsqlrelationaltablemodel_revert_isbase = false;
    mutable bool qsqlrelationaltablemodel_deleterowfromtable_isbase = false;
    mutable bool qsqlrelationaltablemodel_indexinquery_isbase = false;
    mutable bool qsqlrelationaltablemodel_columncount_isbase = false;
    mutable bool qsqlrelationaltablemodel_setheaderdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_insertcolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_fetchmore_isbase = false;
    mutable bool qsqlrelationaltablemodel_canfetchmore_isbase = false;
    mutable bool qsqlrelationaltablemodel_rolenames_isbase = false;
    mutable bool qsqlrelationaltablemodel_querychange_isbase = false;
    mutable bool qsqlrelationaltablemodel_index_isbase = false;
    mutable bool qsqlrelationaltablemodel_sibling_isbase = false;
    mutable bool qsqlrelationaltablemodel_dropmimedata_isbase = false;
    mutable bool qsqlrelationaltablemodel_itemdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_setitemdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_mimetypes_isbase = false;
    mutable bool qsqlrelationaltablemodel_mimedata_isbase = false;
    mutable bool qsqlrelationaltablemodel_candropmimedata_isbase = false;
    mutable bool qsqlrelationaltablemodel_supporteddropactions_isbase = false;
    mutable bool qsqlrelationaltablemodel_supporteddragactions_isbase = false;
    mutable bool qsqlrelationaltablemodel_moverows_isbase = false;
    mutable bool qsqlrelationaltablemodel_movecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_buddy_isbase = false;
    mutable bool qsqlrelationaltablemodel_match_isbase = false;
    mutable bool qsqlrelationaltablemodel_span_isbase = false;
    mutable bool qsqlrelationaltablemodel_multidata_isbase = false;
    mutable bool qsqlrelationaltablemodel_resetinternaldata_isbase = false;
    mutable bool qsqlrelationaltablemodel_event_isbase = false;
    mutable bool qsqlrelationaltablemodel_eventfilter_isbase = false;
    mutable bool qsqlrelationaltablemodel_timerevent_isbase = false;
    mutable bool qsqlrelationaltablemodel_childevent_isbase = false;
    mutable bool qsqlrelationaltablemodel_customevent_isbase = false;
    mutable bool qsqlrelationaltablemodel_connectnotify_isbase = false;
    mutable bool qsqlrelationaltablemodel_disconnectnotify_isbase = false;
    mutable bool qsqlrelationaltablemodel_setprimarykey_isbase = false;
    mutable bool qsqlrelationaltablemodel_primaryvalues_isbase = false;
    mutable bool qsqlrelationaltablemodel_begininsertrows_isbase = false;
    mutable bool qsqlrelationaltablemodel_endinsertrows_isbase = false;
    mutable bool qsqlrelationaltablemodel_beginremoverows_isbase = false;
    mutable bool qsqlrelationaltablemodel_endremoverows_isbase = false;
    mutable bool qsqlrelationaltablemodel_begininsertcolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_endinsertcolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_beginremovecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_endremovecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_beginresetmodel_isbase = false;
    mutable bool qsqlrelationaltablemodel_endresetmodel_isbase = false;
    mutable bool qsqlrelationaltablemodel_setlasterror_isbase = false;
    mutable bool qsqlrelationaltablemodel_createindex_isbase = false;
    mutable bool qsqlrelationaltablemodel_encodedata_isbase = false;
    mutable bool qsqlrelationaltablemodel_decodedata_isbase = false;
    mutable bool qsqlrelationaltablemodel_beginmoverows_isbase = false;
    mutable bool qsqlrelationaltablemodel_endmoverows_isbase = false;
    mutable bool qsqlrelationaltablemodel_beginmovecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_endmovecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_changepersistentindex_isbase = false;
    mutable bool qsqlrelationaltablemodel_changepersistentindexlist_isbase = false;
    mutable bool qsqlrelationaltablemodel_persistentindexlist_isbase = false;
    mutable bool qsqlrelationaltablemodel_sender_isbase = false;
    mutable bool qsqlrelationaltablemodel_sendersignalindex_isbase = false;
    mutable bool qsqlrelationaltablemodel_receivers_isbase = false;
    mutable bool qsqlrelationaltablemodel_issignalconnected_isbase = false;

  public:
    VirtualQSqlRelationalTableModel() : QSqlRelationalTableModel() {};
    VirtualQSqlRelationalTableModel(QObject* parent) : QSqlRelationalTableModel(parent) {};
    VirtualQSqlRelationalTableModel(QObject* parent, const QSqlDatabase& db) : QSqlRelationalTableModel(parent, db) {};

    ~VirtualQSqlRelationalTableModel() {
        qsqlrelationaltablemodel_metacall_callback = nullptr;
        qsqlrelationaltablemodel_data_callback = nullptr;
        qsqlrelationaltablemodel_setdata_callback = nullptr;
        qsqlrelationaltablemodel_removecolumns_callback = nullptr;
        qsqlrelationaltablemodel_clear_callback = nullptr;
        qsqlrelationaltablemodel_select_callback = nullptr;
        qsqlrelationaltablemodel_settable_callback = nullptr;
        qsqlrelationaltablemodel_setrelation_callback = nullptr;
        qsqlrelationaltablemodel_relationmodel_callback = nullptr;
        qsqlrelationaltablemodel_revertrow_callback = nullptr;
        qsqlrelationaltablemodel_selectstatement_callback = nullptr;
        qsqlrelationaltablemodel_updaterowintable_callback = nullptr;
        qsqlrelationaltablemodel_insertrowintotable_callback = nullptr;
        qsqlrelationaltablemodel_orderbyclause_callback = nullptr;
        qsqlrelationaltablemodel_flags_callback = nullptr;
        qsqlrelationaltablemodel_clearitemdata_callback = nullptr;
        qsqlrelationaltablemodel_headerdata_callback = nullptr;
        qsqlrelationaltablemodel_seteditstrategy_callback = nullptr;
        qsqlrelationaltablemodel_sort_callback = nullptr;
        qsqlrelationaltablemodel_setsort_callback = nullptr;
        qsqlrelationaltablemodel_setfilter_callback = nullptr;
        qsqlrelationaltablemodel_rowcount_callback = nullptr;
        qsqlrelationaltablemodel_removerows_callback = nullptr;
        qsqlrelationaltablemodel_insertrows_callback = nullptr;
        qsqlrelationaltablemodel_selectrow_callback = nullptr;
        qsqlrelationaltablemodel_submit_callback = nullptr;
        qsqlrelationaltablemodel_revert_callback = nullptr;
        qsqlrelationaltablemodel_deleterowfromtable_callback = nullptr;
        qsqlrelationaltablemodel_indexinquery_callback = nullptr;
        qsqlrelationaltablemodel_columncount_callback = nullptr;
        qsqlrelationaltablemodel_setheaderdata_callback = nullptr;
        qsqlrelationaltablemodel_insertcolumns_callback = nullptr;
        qsqlrelationaltablemodel_fetchmore_callback = nullptr;
        qsqlrelationaltablemodel_canfetchmore_callback = nullptr;
        qsqlrelationaltablemodel_rolenames_callback = nullptr;
        qsqlrelationaltablemodel_querychange_callback = nullptr;
        qsqlrelationaltablemodel_index_callback = nullptr;
        qsqlrelationaltablemodel_sibling_callback = nullptr;
        qsqlrelationaltablemodel_dropmimedata_callback = nullptr;
        qsqlrelationaltablemodel_itemdata_callback = nullptr;
        qsqlrelationaltablemodel_setitemdata_callback = nullptr;
        qsqlrelationaltablemodel_mimetypes_callback = nullptr;
        qsqlrelationaltablemodel_mimedata_callback = nullptr;
        qsqlrelationaltablemodel_candropmimedata_callback = nullptr;
        qsqlrelationaltablemodel_supporteddropactions_callback = nullptr;
        qsqlrelationaltablemodel_supporteddragactions_callback = nullptr;
        qsqlrelationaltablemodel_moverows_callback = nullptr;
        qsqlrelationaltablemodel_movecolumns_callback = nullptr;
        qsqlrelationaltablemodel_buddy_callback = nullptr;
        qsqlrelationaltablemodel_match_callback = nullptr;
        qsqlrelationaltablemodel_span_callback = nullptr;
        qsqlrelationaltablemodel_multidata_callback = nullptr;
        qsqlrelationaltablemodel_resetinternaldata_callback = nullptr;
        qsqlrelationaltablemodel_event_callback = nullptr;
        qsqlrelationaltablemodel_eventfilter_callback = nullptr;
        qsqlrelationaltablemodel_timerevent_callback = nullptr;
        qsqlrelationaltablemodel_childevent_callback = nullptr;
        qsqlrelationaltablemodel_customevent_callback = nullptr;
        qsqlrelationaltablemodel_connectnotify_callback = nullptr;
        qsqlrelationaltablemodel_disconnectnotify_callback = nullptr;
        qsqlrelationaltablemodel_setprimarykey_callback = nullptr;
        qsqlrelationaltablemodel_primaryvalues_callback = nullptr;
        qsqlrelationaltablemodel_begininsertrows_callback = nullptr;
        qsqlrelationaltablemodel_endinsertrows_callback = nullptr;
        qsqlrelationaltablemodel_beginremoverows_callback = nullptr;
        qsqlrelationaltablemodel_endremoverows_callback = nullptr;
        qsqlrelationaltablemodel_begininsertcolumns_callback = nullptr;
        qsqlrelationaltablemodel_endinsertcolumns_callback = nullptr;
        qsqlrelationaltablemodel_beginremovecolumns_callback = nullptr;
        qsqlrelationaltablemodel_endremovecolumns_callback = nullptr;
        qsqlrelationaltablemodel_beginresetmodel_callback = nullptr;
        qsqlrelationaltablemodel_endresetmodel_callback = nullptr;
        qsqlrelationaltablemodel_setlasterror_callback = nullptr;
        qsqlrelationaltablemodel_createindex_callback = nullptr;
        qsqlrelationaltablemodel_encodedata_callback = nullptr;
        qsqlrelationaltablemodel_decodedata_callback = nullptr;
        qsqlrelationaltablemodel_beginmoverows_callback = nullptr;
        qsqlrelationaltablemodel_endmoverows_callback = nullptr;
        qsqlrelationaltablemodel_beginmovecolumns_callback = nullptr;
        qsqlrelationaltablemodel_endmovecolumns_callback = nullptr;
        qsqlrelationaltablemodel_changepersistentindex_callback = nullptr;
        qsqlrelationaltablemodel_changepersistentindexlist_callback = nullptr;
        qsqlrelationaltablemodel_persistentindexlist_callback = nullptr;
        qsqlrelationaltablemodel_sender_callback = nullptr;
        qsqlrelationaltablemodel_sendersignalindex_callback = nullptr;
        qsqlrelationaltablemodel_receivers_callback = nullptr;
        qsqlrelationaltablemodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSqlRelationalTableModel_Metacall_Callback(QSqlRelationalTableModel_Metacall_Callback cb) { qsqlrelationaltablemodel_metacall_callback = cb; }
    inline void setQSqlRelationalTableModel_Data_Callback(QSqlRelationalTableModel_Data_Callback cb) { qsqlrelationaltablemodel_data_callback = cb; }
    inline void setQSqlRelationalTableModel_SetData_Callback(QSqlRelationalTableModel_SetData_Callback cb) { qsqlrelationaltablemodel_setdata_callback = cb; }
    inline void setQSqlRelationalTableModel_RemoveColumns_Callback(QSqlRelationalTableModel_RemoveColumns_Callback cb) { qsqlrelationaltablemodel_removecolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_Clear_Callback(QSqlRelationalTableModel_Clear_Callback cb) { qsqlrelationaltablemodel_clear_callback = cb; }
    inline void setQSqlRelationalTableModel_Select_Callback(QSqlRelationalTableModel_Select_Callback cb) { qsqlrelationaltablemodel_select_callback = cb; }
    inline void setQSqlRelationalTableModel_SetTable_Callback(QSqlRelationalTableModel_SetTable_Callback cb) { qsqlrelationaltablemodel_settable_callback = cb; }
    inline void setQSqlRelationalTableModel_SetRelation_Callback(QSqlRelationalTableModel_SetRelation_Callback cb) { qsqlrelationaltablemodel_setrelation_callback = cb; }
    inline void setQSqlRelationalTableModel_RelationModel_Callback(QSqlRelationalTableModel_RelationModel_Callback cb) { qsqlrelationaltablemodel_relationmodel_callback = cb; }
    inline void setQSqlRelationalTableModel_RevertRow_Callback(QSqlRelationalTableModel_RevertRow_Callback cb) { qsqlrelationaltablemodel_revertrow_callback = cb; }
    inline void setQSqlRelationalTableModel_SelectStatement_Callback(QSqlRelationalTableModel_SelectStatement_Callback cb) { qsqlrelationaltablemodel_selectstatement_callback = cb; }
    inline void setQSqlRelationalTableModel_UpdateRowInTable_Callback(QSqlRelationalTableModel_UpdateRowInTable_Callback cb) { qsqlrelationaltablemodel_updaterowintable_callback = cb; }
    inline void setQSqlRelationalTableModel_InsertRowIntoTable_Callback(QSqlRelationalTableModel_InsertRowIntoTable_Callback cb) { qsqlrelationaltablemodel_insertrowintotable_callback = cb; }
    inline void setQSqlRelationalTableModel_OrderByClause_Callback(QSqlRelationalTableModel_OrderByClause_Callback cb) { qsqlrelationaltablemodel_orderbyclause_callback = cb; }
    inline void setQSqlRelationalTableModel_Flags_Callback(QSqlRelationalTableModel_Flags_Callback cb) { qsqlrelationaltablemodel_flags_callback = cb; }
    inline void setQSqlRelationalTableModel_ClearItemData_Callback(QSqlRelationalTableModel_ClearItemData_Callback cb) { qsqlrelationaltablemodel_clearitemdata_callback = cb; }
    inline void setQSqlRelationalTableModel_HeaderData_Callback(QSqlRelationalTableModel_HeaderData_Callback cb) { qsqlrelationaltablemodel_headerdata_callback = cb; }
    inline void setQSqlRelationalTableModel_SetEditStrategy_Callback(QSqlRelationalTableModel_SetEditStrategy_Callback cb) { qsqlrelationaltablemodel_seteditstrategy_callback = cb; }
    inline void setQSqlRelationalTableModel_Sort_Callback(QSqlRelationalTableModel_Sort_Callback cb) { qsqlrelationaltablemodel_sort_callback = cb; }
    inline void setQSqlRelationalTableModel_SetSort_Callback(QSqlRelationalTableModel_SetSort_Callback cb) { qsqlrelationaltablemodel_setsort_callback = cb; }
    inline void setQSqlRelationalTableModel_SetFilter_Callback(QSqlRelationalTableModel_SetFilter_Callback cb) { qsqlrelationaltablemodel_setfilter_callback = cb; }
    inline void setQSqlRelationalTableModel_RowCount_Callback(QSqlRelationalTableModel_RowCount_Callback cb) { qsqlrelationaltablemodel_rowcount_callback = cb; }
    inline void setQSqlRelationalTableModel_RemoveRows_Callback(QSqlRelationalTableModel_RemoveRows_Callback cb) { qsqlrelationaltablemodel_removerows_callback = cb; }
    inline void setQSqlRelationalTableModel_InsertRows_Callback(QSqlRelationalTableModel_InsertRows_Callback cb) { qsqlrelationaltablemodel_insertrows_callback = cb; }
    inline void setQSqlRelationalTableModel_SelectRow_Callback(QSqlRelationalTableModel_SelectRow_Callback cb) { qsqlrelationaltablemodel_selectrow_callback = cb; }
    inline void setQSqlRelationalTableModel_Submit_Callback(QSqlRelationalTableModel_Submit_Callback cb) { qsqlrelationaltablemodel_submit_callback = cb; }
    inline void setQSqlRelationalTableModel_Revert_Callback(QSqlRelationalTableModel_Revert_Callback cb) { qsqlrelationaltablemodel_revert_callback = cb; }
    inline void setQSqlRelationalTableModel_DeleteRowFromTable_Callback(QSqlRelationalTableModel_DeleteRowFromTable_Callback cb) { qsqlrelationaltablemodel_deleterowfromtable_callback = cb; }
    inline void setQSqlRelationalTableModel_IndexInQuery_Callback(QSqlRelationalTableModel_IndexInQuery_Callback cb) { qsqlrelationaltablemodel_indexinquery_callback = cb; }
    inline void setQSqlRelationalTableModel_ColumnCount_Callback(QSqlRelationalTableModel_ColumnCount_Callback cb) { qsqlrelationaltablemodel_columncount_callback = cb; }
    inline void setQSqlRelationalTableModel_SetHeaderData_Callback(QSqlRelationalTableModel_SetHeaderData_Callback cb) { qsqlrelationaltablemodel_setheaderdata_callback = cb; }
    inline void setQSqlRelationalTableModel_InsertColumns_Callback(QSqlRelationalTableModel_InsertColumns_Callback cb) { qsqlrelationaltablemodel_insertcolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_FetchMore_Callback(QSqlRelationalTableModel_FetchMore_Callback cb) { qsqlrelationaltablemodel_fetchmore_callback = cb; }
    inline void setQSqlRelationalTableModel_CanFetchMore_Callback(QSqlRelationalTableModel_CanFetchMore_Callback cb) { qsqlrelationaltablemodel_canfetchmore_callback = cb; }
    inline void setQSqlRelationalTableModel_RoleNames_Callback(QSqlRelationalTableModel_RoleNames_Callback cb) { qsqlrelationaltablemodel_rolenames_callback = cb; }
    inline void setQSqlRelationalTableModel_QueryChange_Callback(QSqlRelationalTableModel_QueryChange_Callback cb) { qsqlrelationaltablemodel_querychange_callback = cb; }
    inline void setQSqlRelationalTableModel_Index_Callback(QSqlRelationalTableModel_Index_Callback cb) { qsqlrelationaltablemodel_index_callback = cb; }
    inline void setQSqlRelationalTableModel_Sibling_Callback(QSqlRelationalTableModel_Sibling_Callback cb) { qsqlrelationaltablemodel_sibling_callback = cb; }
    inline void setQSqlRelationalTableModel_DropMimeData_Callback(QSqlRelationalTableModel_DropMimeData_Callback cb) { qsqlrelationaltablemodel_dropmimedata_callback = cb; }
    inline void setQSqlRelationalTableModel_ItemData_Callback(QSqlRelationalTableModel_ItemData_Callback cb) { qsqlrelationaltablemodel_itemdata_callback = cb; }
    inline void setQSqlRelationalTableModel_SetItemData_Callback(QSqlRelationalTableModel_SetItemData_Callback cb) { qsqlrelationaltablemodel_setitemdata_callback = cb; }
    inline void setQSqlRelationalTableModel_MimeTypes_Callback(QSqlRelationalTableModel_MimeTypes_Callback cb) { qsqlrelationaltablemodel_mimetypes_callback = cb; }
    inline void setQSqlRelationalTableModel_MimeData_Callback(QSqlRelationalTableModel_MimeData_Callback cb) { qsqlrelationaltablemodel_mimedata_callback = cb; }
    inline void setQSqlRelationalTableModel_CanDropMimeData_Callback(QSqlRelationalTableModel_CanDropMimeData_Callback cb) { qsqlrelationaltablemodel_candropmimedata_callback = cb; }
    inline void setQSqlRelationalTableModel_SupportedDropActions_Callback(QSqlRelationalTableModel_SupportedDropActions_Callback cb) { qsqlrelationaltablemodel_supporteddropactions_callback = cb; }
    inline void setQSqlRelationalTableModel_SupportedDragActions_Callback(QSqlRelationalTableModel_SupportedDragActions_Callback cb) { qsqlrelationaltablemodel_supporteddragactions_callback = cb; }
    inline void setQSqlRelationalTableModel_MoveRows_Callback(QSqlRelationalTableModel_MoveRows_Callback cb) { qsqlrelationaltablemodel_moverows_callback = cb; }
    inline void setQSqlRelationalTableModel_MoveColumns_Callback(QSqlRelationalTableModel_MoveColumns_Callback cb) { qsqlrelationaltablemodel_movecolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_Buddy_Callback(QSqlRelationalTableModel_Buddy_Callback cb) { qsqlrelationaltablemodel_buddy_callback = cb; }
    inline void setQSqlRelationalTableModel_Match_Callback(QSqlRelationalTableModel_Match_Callback cb) { qsqlrelationaltablemodel_match_callback = cb; }
    inline void setQSqlRelationalTableModel_Span_Callback(QSqlRelationalTableModel_Span_Callback cb) { qsqlrelationaltablemodel_span_callback = cb; }
    inline void setQSqlRelationalTableModel_MultiData_Callback(QSqlRelationalTableModel_MultiData_Callback cb) { qsqlrelationaltablemodel_multidata_callback = cb; }
    inline void setQSqlRelationalTableModel_ResetInternalData_Callback(QSqlRelationalTableModel_ResetInternalData_Callback cb) { qsqlrelationaltablemodel_resetinternaldata_callback = cb; }
    inline void setQSqlRelationalTableModel_Event_Callback(QSqlRelationalTableModel_Event_Callback cb) { qsqlrelationaltablemodel_event_callback = cb; }
    inline void setQSqlRelationalTableModel_EventFilter_Callback(QSqlRelationalTableModel_EventFilter_Callback cb) { qsqlrelationaltablemodel_eventfilter_callback = cb; }
    inline void setQSqlRelationalTableModel_TimerEvent_Callback(QSqlRelationalTableModel_TimerEvent_Callback cb) { qsqlrelationaltablemodel_timerevent_callback = cb; }
    inline void setQSqlRelationalTableModel_ChildEvent_Callback(QSqlRelationalTableModel_ChildEvent_Callback cb) { qsqlrelationaltablemodel_childevent_callback = cb; }
    inline void setQSqlRelationalTableModel_CustomEvent_Callback(QSqlRelationalTableModel_CustomEvent_Callback cb) { qsqlrelationaltablemodel_customevent_callback = cb; }
    inline void setQSqlRelationalTableModel_ConnectNotify_Callback(QSqlRelationalTableModel_ConnectNotify_Callback cb) { qsqlrelationaltablemodel_connectnotify_callback = cb; }
    inline void setQSqlRelationalTableModel_DisconnectNotify_Callback(QSqlRelationalTableModel_DisconnectNotify_Callback cb) { qsqlrelationaltablemodel_disconnectnotify_callback = cb; }
    inline void setQSqlRelationalTableModel_SetPrimaryKey_Callback(QSqlRelationalTableModel_SetPrimaryKey_Callback cb) { qsqlrelationaltablemodel_setprimarykey_callback = cb; }
    inline void setQSqlRelationalTableModel_PrimaryValues_Callback(QSqlRelationalTableModel_PrimaryValues_Callback cb) { qsqlrelationaltablemodel_primaryvalues_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginInsertRows_Callback(QSqlRelationalTableModel_BeginInsertRows_Callback cb) { qsqlrelationaltablemodel_begininsertrows_callback = cb; }
    inline void setQSqlRelationalTableModel_EndInsertRows_Callback(QSqlRelationalTableModel_EndInsertRows_Callback cb) { qsqlrelationaltablemodel_endinsertrows_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginRemoveRows_Callback(QSqlRelationalTableModel_BeginRemoveRows_Callback cb) { qsqlrelationaltablemodel_beginremoverows_callback = cb; }
    inline void setQSqlRelationalTableModel_EndRemoveRows_Callback(QSqlRelationalTableModel_EndRemoveRows_Callback cb) { qsqlrelationaltablemodel_endremoverows_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginInsertColumns_Callback(QSqlRelationalTableModel_BeginInsertColumns_Callback cb) { qsqlrelationaltablemodel_begininsertcolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_EndInsertColumns_Callback(QSqlRelationalTableModel_EndInsertColumns_Callback cb) { qsqlrelationaltablemodel_endinsertcolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginRemoveColumns_Callback(QSqlRelationalTableModel_BeginRemoveColumns_Callback cb) { qsqlrelationaltablemodel_beginremovecolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_EndRemoveColumns_Callback(QSqlRelationalTableModel_EndRemoveColumns_Callback cb) { qsqlrelationaltablemodel_endremovecolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginResetModel_Callback(QSqlRelationalTableModel_BeginResetModel_Callback cb) { qsqlrelationaltablemodel_beginresetmodel_callback = cb; }
    inline void setQSqlRelationalTableModel_EndResetModel_Callback(QSqlRelationalTableModel_EndResetModel_Callback cb) { qsqlrelationaltablemodel_endresetmodel_callback = cb; }
    inline void setQSqlRelationalTableModel_SetLastError_Callback(QSqlRelationalTableModel_SetLastError_Callback cb) { qsqlrelationaltablemodel_setlasterror_callback = cb; }
    inline void setQSqlRelationalTableModel_CreateIndex_Callback(QSqlRelationalTableModel_CreateIndex_Callback cb) { qsqlrelationaltablemodel_createindex_callback = cb; }
    inline void setQSqlRelationalTableModel_EncodeData_Callback(QSqlRelationalTableModel_EncodeData_Callback cb) { qsqlrelationaltablemodel_encodedata_callback = cb; }
    inline void setQSqlRelationalTableModel_DecodeData_Callback(QSqlRelationalTableModel_DecodeData_Callback cb) { qsqlrelationaltablemodel_decodedata_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginMoveRows_Callback(QSqlRelationalTableModel_BeginMoveRows_Callback cb) { qsqlrelationaltablemodel_beginmoverows_callback = cb; }
    inline void setQSqlRelationalTableModel_EndMoveRows_Callback(QSqlRelationalTableModel_EndMoveRows_Callback cb) { qsqlrelationaltablemodel_endmoverows_callback = cb; }
    inline void setQSqlRelationalTableModel_BeginMoveColumns_Callback(QSqlRelationalTableModel_BeginMoveColumns_Callback cb) { qsqlrelationaltablemodel_beginmovecolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_EndMoveColumns_Callback(QSqlRelationalTableModel_EndMoveColumns_Callback cb) { qsqlrelationaltablemodel_endmovecolumns_callback = cb; }
    inline void setQSqlRelationalTableModel_ChangePersistentIndex_Callback(QSqlRelationalTableModel_ChangePersistentIndex_Callback cb) { qsqlrelationaltablemodel_changepersistentindex_callback = cb; }
    inline void setQSqlRelationalTableModel_ChangePersistentIndexList_Callback(QSqlRelationalTableModel_ChangePersistentIndexList_Callback cb) { qsqlrelationaltablemodel_changepersistentindexlist_callback = cb; }
    inline void setQSqlRelationalTableModel_PersistentIndexList_Callback(QSqlRelationalTableModel_PersistentIndexList_Callback cb) { qsqlrelationaltablemodel_persistentindexlist_callback = cb; }
    inline void setQSqlRelationalTableModel_Sender_Callback(QSqlRelationalTableModel_Sender_Callback cb) { qsqlrelationaltablemodel_sender_callback = cb; }
    inline void setQSqlRelationalTableModel_SenderSignalIndex_Callback(QSqlRelationalTableModel_SenderSignalIndex_Callback cb) { qsqlrelationaltablemodel_sendersignalindex_callback = cb; }
    inline void setQSqlRelationalTableModel_Receivers_Callback(QSqlRelationalTableModel_Receivers_Callback cb) { qsqlrelationaltablemodel_receivers_callback = cb; }
    inline void setQSqlRelationalTableModel_IsSignalConnected_Callback(QSqlRelationalTableModel_IsSignalConnected_Callback cb) { qsqlrelationaltablemodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSqlRelationalTableModel_Metacall_IsBase(bool value) const { qsqlrelationaltablemodel_metacall_isbase = value; }
    inline void setQSqlRelationalTableModel_Data_IsBase(bool value) const { qsqlrelationaltablemodel_data_isbase = value; }
    inline void setQSqlRelationalTableModel_SetData_IsBase(bool value) const { qsqlrelationaltablemodel_setdata_isbase = value; }
    inline void setQSqlRelationalTableModel_RemoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_removecolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_Clear_IsBase(bool value) const { qsqlrelationaltablemodel_clear_isbase = value; }
    inline void setQSqlRelationalTableModel_Select_IsBase(bool value) const { qsqlrelationaltablemodel_select_isbase = value; }
    inline void setQSqlRelationalTableModel_SetTable_IsBase(bool value) const { qsqlrelationaltablemodel_settable_isbase = value; }
    inline void setQSqlRelationalTableModel_SetRelation_IsBase(bool value) const { qsqlrelationaltablemodel_setrelation_isbase = value; }
    inline void setQSqlRelationalTableModel_RelationModel_IsBase(bool value) const { qsqlrelationaltablemodel_relationmodel_isbase = value; }
    inline void setQSqlRelationalTableModel_RevertRow_IsBase(bool value) const { qsqlrelationaltablemodel_revertrow_isbase = value; }
    inline void setQSqlRelationalTableModel_SelectStatement_IsBase(bool value) const { qsqlrelationaltablemodel_selectstatement_isbase = value; }
    inline void setQSqlRelationalTableModel_UpdateRowInTable_IsBase(bool value) const { qsqlrelationaltablemodel_updaterowintable_isbase = value; }
    inline void setQSqlRelationalTableModel_InsertRowIntoTable_IsBase(bool value) const { qsqlrelationaltablemodel_insertrowintotable_isbase = value; }
    inline void setQSqlRelationalTableModel_OrderByClause_IsBase(bool value) const { qsqlrelationaltablemodel_orderbyclause_isbase = value; }
    inline void setQSqlRelationalTableModel_Flags_IsBase(bool value) const { qsqlrelationaltablemodel_flags_isbase = value; }
    inline void setQSqlRelationalTableModel_ClearItemData_IsBase(bool value) const { qsqlrelationaltablemodel_clearitemdata_isbase = value; }
    inline void setQSqlRelationalTableModel_HeaderData_IsBase(bool value) const { qsqlrelationaltablemodel_headerdata_isbase = value; }
    inline void setQSqlRelationalTableModel_SetEditStrategy_IsBase(bool value) const { qsqlrelationaltablemodel_seteditstrategy_isbase = value; }
    inline void setQSqlRelationalTableModel_Sort_IsBase(bool value) const { qsqlrelationaltablemodel_sort_isbase = value; }
    inline void setQSqlRelationalTableModel_SetSort_IsBase(bool value) const { qsqlrelationaltablemodel_setsort_isbase = value; }
    inline void setQSqlRelationalTableModel_SetFilter_IsBase(bool value) const { qsqlrelationaltablemodel_setfilter_isbase = value; }
    inline void setQSqlRelationalTableModel_RowCount_IsBase(bool value) const { qsqlrelationaltablemodel_rowcount_isbase = value; }
    inline void setQSqlRelationalTableModel_RemoveRows_IsBase(bool value) const { qsqlrelationaltablemodel_removerows_isbase = value; }
    inline void setQSqlRelationalTableModel_InsertRows_IsBase(bool value) const { qsqlrelationaltablemodel_insertrows_isbase = value; }
    inline void setQSqlRelationalTableModel_SelectRow_IsBase(bool value) const { qsqlrelationaltablemodel_selectrow_isbase = value; }
    inline void setQSqlRelationalTableModel_Submit_IsBase(bool value) const { qsqlrelationaltablemodel_submit_isbase = value; }
    inline void setQSqlRelationalTableModel_Revert_IsBase(bool value) const { qsqlrelationaltablemodel_revert_isbase = value; }
    inline void setQSqlRelationalTableModel_DeleteRowFromTable_IsBase(bool value) const { qsqlrelationaltablemodel_deleterowfromtable_isbase = value; }
    inline void setQSqlRelationalTableModel_IndexInQuery_IsBase(bool value) const { qsqlrelationaltablemodel_indexinquery_isbase = value; }
    inline void setQSqlRelationalTableModel_ColumnCount_IsBase(bool value) const { qsqlrelationaltablemodel_columncount_isbase = value; }
    inline void setQSqlRelationalTableModel_SetHeaderData_IsBase(bool value) const { qsqlrelationaltablemodel_setheaderdata_isbase = value; }
    inline void setQSqlRelationalTableModel_InsertColumns_IsBase(bool value) const { qsqlrelationaltablemodel_insertcolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_FetchMore_IsBase(bool value) const { qsqlrelationaltablemodel_fetchmore_isbase = value; }
    inline void setQSqlRelationalTableModel_CanFetchMore_IsBase(bool value) const { qsqlrelationaltablemodel_canfetchmore_isbase = value; }
    inline void setQSqlRelationalTableModel_RoleNames_IsBase(bool value) const { qsqlrelationaltablemodel_rolenames_isbase = value; }
    inline void setQSqlRelationalTableModel_QueryChange_IsBase(bool value) const { qsqlrelationaltablemodel_querychange_isbase = value; }
    inline void setQSqlRelationalTableModel_Index_IsBase(bool value) const { qsqlrelationaltablemodel_index_isbase = value; }
    inline void setQSqlRelationalTableModel_Sibling_IsBase(bool value) const { qsqlrelationaltablemodel_sibling_isbase = value; }
    inline void setQSqlRelationalTableModel_DropMimeData_IsBase(bool value) const { qsqlrelationaltablemodel_dropmimedata_isbase = value; }
    inline void setQSqlRelationalTableModel_ItemData_IsBase(bool value) const { qsqlrelationaltablemodel_itemdata_isbase = value; }
    inline void setQSqlRelationalTableModel_SetItemData_IsBase(bool value) const { qsqlrelationaltablemodel_setitemdata_isbase = value; }
    inline void setQSqlRelationalTableModel_MimeTypes_IsBase(bool value) const { qsqlrelationaltablemodel_mimetypes_isbase = value; }
    inline void setQSqlRelationalTableModel_MimeData_IsBase(bool value) const { qsqlrelationaltablemodel_mimedata_isbase = value; }
    inline void setQSqlRelationalTableModel_CanDropMimeData_IsBase(bool value) const { qsqlrelationaltablemodel_candropmimedata_isbase = value; }
    inline void setQSqlRelationalTableModel_SupportedDropActions_IsBase(bool value) const { qsqlrelationaltablemodel_supporteddropactions_isbase = value; }
    inline void setQSqlRelationalTableModel_SupportedDragActions_IsBase(bool value) const { qsqlrelationaltablemodel_supporteddragactions_isbase = value; }
    inline void setQSqlRelationalTableModel_MoveRows_IsBase(bool value) const { qsqlrelationaltablemodel_moverows_isbase = value; }
    inline void setQSqlRelationalTableModel_MoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_movecolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_Buddy_IsBase(bool value) const { qsqlrelationaltablemodel_buddy_isbase = value; }
    inline void setQSqlRelationalTableModel_Match_IsBase(bool value) const { qsqlrelationaltablemodel_match_isbase = value; }
    inline void setQSqlRelationalTableModel_Span_IsBase(bool value) const { qsqlrelationaltablemodel_span_isbase = value; }
    inline void setQSqlRelationalTableModel_MultiData_IsBase(bool value) const { qsqlrelationaltablemodel_multidata_isbase = value; }
    inline void setQSqlRelationalTableModel_ResetInternalData_IsBase(bool value) const { qsqlrelationaltablemodel_resetinternaldata_isbase = value; }
    inline void setQSqlRelationalTableModel_Event_IsBase(bool value) const { qsqlrelationaltablemodel_event_isbase = value; }
    inline void setQSqlRelationalTableModel_EventFilter_IsBase(bool value) const { qsqlrelationaltablemodel_eventfilter_isbase = value; }
    inline void setQSqlRelationalTableModel_TimerEvent_IsBase(bool value) const { qsqlrelationaltablemodel_timerevent_isbase = value; }
    inline void setQSqlRelationalTableModel_ChildEvent_IsBase(bool value) const { qsqlrelationaltablemodel_childevent_isbase = value; }
    inline void setQSqlRelationalTableModel_CustomEvent_IsBase(bool value) const { qsqlrelationaltablemodel_customevent_isbase = value; }
    inline void setQSqlRelationalTableModel_ConnectNotify_IsBase(bool value) const { qsqlrelationaltablemodel_connectnotify_isbase = value; }
    inline void setQSqlRelationalTableModel_DisconnectNotify_IsBase(bool value) const { qsqlrelationaltablemodel_disconnectnotify_isbase = value; }
    inline void setQSqlRelationalTableModel_SetPrimaryKey_IsBase(bool value) const { qsqlrelationaltablemodel_setprimarykey_isbase = value; }
    inline void setQSqlRelationalTableModel_PrimaryValues_IsBase(bool value) const { qsqlrelationaltablemodel_primaryvalues_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginInsertRows_IsBase(bool value) const { qsqlrelationaltablemodel_begininsertrows_isbase = value; }
    inline void setQSqlRelationalTableModel_EndInsertRows_IsBase(bool value) const { qsqlrelationaltablemodel_endinsertrows_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginRemoveRows_IsBase(bool value) const { qsqlrelationaltablemodel_beginremoverows_isbase = value; }
    inline void setQSqlRelationalTableModel_EndRemoveRows_IsBase(bool value) const { qsqlrelationaltablemodel_endremoverows_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginInsertColumns_IsBase(bool value) const { qsqlrelationaltablemodel_begininsertcolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_EndInsertColumns_IsBase(bool value) const { qsqlrelationaltablemodel_endinsertcolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginRemoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_beginremovecolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_EndRemoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_endremovecolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginResetModel_IsBase(bool value) const { qsqlrelationaltablemodel_beginresetmodel_isbase = value; }
    inline void setQSqlRelationalTableModel_EndResetModel_IsBase(bool value) const { qsqlrelationaltablemodel_endresetmodel_isbase = value; }
    inline void setQSqlRelationalTableModel_SetLastError_IsBase(bool value) const { qsqlrelationaltablemodel_setlasterror_isbase = value; }
    inline void setQSqlRelationalTableModel_CreateIndex_IsBase(bool value) const { qsqlrelationaltablemodel_createindex_isbase = value; }
    inline void setQSqlRelationalTableModel_EncodeData_IsBase(bool value) const { qsqlrelationaltablemodel_encodedata_isbase = value; }
    inline void setQSqlRelationalTableModel_DecodeData_IsBase(bool value) const { qsqlrelationaltablemodel_decodedata_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginMoveRows_IsBase(bool value) const { qsqlrelationaltablemodel_beginmoverows_isbase = value; }
    inline void setQSqlRelationalTableModel_EndMoveRows_IsBase(bool value) const { qsqlrelationaltablemodel_endmoverows_isbase = value; }
    inline void setQSqlRelationalTableModel_BeginMoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_beginmovecolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_EndMoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_endmovecolumns_isbase = value; }
    inline void setQSqlRelationalTableModel_ChangePersistentIndex_IsBase(bool value) const { qsqlrelationaltablemodel_changepersistentindex_isbase = value; }
    inline void setQSqlRelationalTableModel_ChangePersistentIndexList_IsBase(bool value) const { qsqlrelationaltablemodel_changepersistentindexlist_isbase = value; }
    inline void setQSqlRelationalTableModel_PersistentIndexList_IsBase(bool value) const { qsqlrelationaltablemodel_persistentindexlist_isbase = value; }
    inline void setQSqlRelationalTableModel_Sender_IsBase(bool value) const { qsqlrelationaltablemodel_sender_isbase = value; }
    inline void setQSqlRelationalTableModel_SenderSignalIndex_IsBase(bool value) const { qsqlrelationaltablemodel_sendersignalindex_isbase = value; }
    inline void setQSqlRelationalTableModel_Receivers_IsBase(bool value) const { qsqlrelationaltablemodel_receivers_isbase = value; }
    inline void setQSqlRelationalTableModel_IsSignalConnected_IsBase(bool value) const { qsqlrelationaltablemodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqlrelationaltablemodel_metacall_isbase) {
            qsqlrelationaltablemodel_metacall_isbase = false;
            return QSqlRelationalTableModel::qt_metacall(param1, param2, param3);
        } else if (qsqlrelationaltablemodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsqlrelationaltablemodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlRelationalTableModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& item, int role) const override {
        if (qsqlrelationaltablemodel_data_isbase) {
            qsqlrelationaltablemodel_data_isbase = false;
            return QSqlRelationalTableModel::data(item, role);
        } else if (qsqlrelationaltablemodel_data_callback != nullptr) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            int cbval2 = role;

            QVariant* callback_ret = qsqlrelationaltablemodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::data(item, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& item, const QVariant& value, int role) override {
        if (qsqlrelationaltablemodel_setdata_isbase) {
            qsqlrelationaltablemodel_setdata_isbase = false;
            return QSqlRelationalTableModel::setData(item, value, role);
        } else if (qsqlrelationaltablemodel_setdata_callback != nullptr) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qsqlrelationaltablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::setData(item, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_removecolumns_isbase) {
            qsqlrelationaltablemodel_removecolumns_isbase = false;
            return QSqlRelationalTableModel::removeColumns(column, count, parent);
        } else if (qsqlrelationaltablemodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqlrelationaltablemodel_clear_isbase) {
            qsqlrelationaltablemodel_clear_isbase = false;
            QSqlRelationalTableModel::clear();
        } else if (qsqlrelationaltablemodel_clear_callback != nullptr) {
            qsqlrelationaltablemodel_clear_callback();
        } else {
            QSqlRelationalTableModel::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool select() override {
        if (qsqlrelationaltablemodel_select_isbase) {
            qsqlrelationaltablemodel_select_isbase = false;
            return QSqlRelationalTableModel::select();
        } else if (qsqlrelationaltablemodel_select_callback != nullptr) {
            bool callback_ret = qsqlrelationaltablemodel_select_callback();
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::select();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTable(const QString& tableName) override {
        if (qsqlrelationaltablemodel_settable_isbase) {
            qsqlrelationaltablemodel_settable_isbase = false;
            QSqlRelationalTableModel::setTable(tableName);
        } else if (qsqlrelationaltablemodel_settable_callback != nullptr) {
            const QString tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            libqt_string tableName_str;
            tableName_str.len = tableName_b.length();
            tableName_str.data = static_cast<const char*>(malloc(tableName_str.len + 1));
            memcpy((void*)tableName_str.data, tableName_b.data(), tableName_str.len);
            ((char*)tableName_str.data)[tableName_str.len] = '\0';
            libqt_string cbval1 = tableName_str;

            qsqlrelationaltablemodel_settable_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::setTable(tableName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRelation(int column, const QSqlRelation& relation) override {
        if (qsqlrelationaltablemodel_setrelation_isbase) {
            qsqlrelationaltablemodel_setrelation_isbase = false;
            QSqlRelationalTableModel::setRelation(column, relation);
        } else if (qsqlrelationaltablemodel_setrelation_callback != nullptr) {
            int cbval1 = column;
            const QSqlRelation& relation_ret = relation;
            // Cast returned reference into pointer
            QSqlRelation* cbval2 = const_cast<QSqlRelation*>(&relation_ret);

            qsqlrelationaltablemodel_setrelation_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::setRelation(column, relation);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlTableModel* relationModel(int column) const override {
        if (qsqlrelationaltablemodel_relationmodel_isbase) {
            qsqlrelationaltablemodel_relationmodel_isbase = false;
            return QSqlRelationalTableModel::relationModel(column);
        } else if (qsqlrelationaltablemodel_relationmodel_callback != nullptr) {
            int cbval1 = column;

            QSqlTableModel* callback_ret = qsqlrelationaltablemodel_relationmodel_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::relationModel(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revertRow(int row) override {
        if (qsqlrelationaltablemodel_revertrow_isbase) {
            qsqlrelationaltablemodel_revertrow_isbase = false;
            QSqlRelationalTableModel::revertRow(row);
        } else if (qsqlrelationaltablemodel_revertrow_callback != nullptr) {
            int cbval1 = row;

            qsqlrelationaltablemodel_revertrow_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::revertRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectStatement() const override {
        if (qsqlrelationaltablemodel_selectstatement_isbase) {
            qsqlrelationaltablemodel_selectstatement_isbase = false;
            return QSqlRelationalTableModel::selectStatement();
        } else if (qsqlrelationaltablemodel_selectstatement_callback != nullptr) {
            libqt_string callback_ret = qsqlrelationaltablemodel_selectstatement_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSqlRelationalTableModel::selectStatement();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
        if (qsqlrelationaltablemodel_updaterowintable_isbase) {
            qsqlrelationaltablemodel_updaterowintable_isbase = false;
            return QSqlRelationalTableModel::updateRowInTable(row, values);
        } else if (qsqlrelationaltablemodel_updaterowintable_callback != nullptr) {
            int cbval1 = row;
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval2 = const_cast<QSqlRecord*>(&values_ret);

            bool callback_ret = qsqlrelationaltablemodel_updaterowintable_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::updateRowInTable(row, values);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRowIntoTable(const QSqlRecord& values) override {
        if (qsqlrelationaltablemodel_insertrowintotable_isbase) {
            qsqlrelationaltablemodel_insertrowintotable_isbase = false;
            return QSqlRelationalTableModel::insertRowIntoTable(values);
        } else if (qsqlrelationaltablemodel_insertrowintotable_callback != nullptr) {
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval1 = const_cast<QSqlRecord*>(&values_ret);

            bool callback_ret = qsqlrelationaltablemodel_insertrowintotable_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::insertRowIntoTable(values);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString orderByClause() const override {
        if (qsqlrelationaltablemodel_orderbyclause_isbase) {
            qsqlrelationaltablemodel_orderbyclause_isbase = false;
            return QSqlRelationalTableModel::orderByClause();
        } else if (qsqlrelationaltablemodel_orderbyclause_callback != nullptr) {
            libqt_string callback_ret = qsqlrelationaltablemodel_orderbyclause_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSqlRelationalTableModel::orderByClause();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_flags_isbase) {
            qsqlrelationaltablemodel_flags_isbase = false;
            return QSqlRelationalTableModel::flags(index);
        } else if (qsqlrelationaltablemodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qsqlrelationaltablemodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QSqlRelationalTableModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqlrelationaltablemodel_clearitemdata_isbase) {
            qsqlrelationaltablemodel_clearitemdata_isbase = false;
            return QSqlRelationalTableModel::clearItemData(index);
        } else if (qsqlrelationaltablemodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qsqlrelationaltablemodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqlrelationaltablemodel_headerdata_isbase) {
            qsqlrelationaltablemodel_headerdata_isbase = false;
            return QSqlRelationalTableModel::headerData(section, orientation, role);
        } else if (qsqlrelationaltablemodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qsqlrelationaltablemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditStrategy(QSqlTableModel::EditStrategy strategy) override {
        if (qsqlrelationaltablemodel_seteditstrategy_isbase) {
            qsqlrelationaltablemodel_seteditstrategy_isbase = false;
            QSqlRelationalTableModel::setEditStrategy(strategy);
        } else if (qsqlrelationaltablemodel_seteditstrategy_callback != nullptr) {
            int cbval1 = static_cast<int>(strategy);

            qsqlrelationaltablemodel_seteditstrategy_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::setEditStrategy(strategy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqlrelationaltablemodel_sort_isbase) {
            qsqlrelationaltablemodel_sort_isbase = false;
            QSqlRelationalTableModel::sort(column, order);
        } else if (qsqlrelationaltablemodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qsqlrelationaltablemodel_sort_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSort(int column, Qt::SortOrder order) override {
        if (qsqlrelationaltablemodel_setsort_isbase) {
            qsqlrelationaltablemodel_setsort_isbase = false;
            QSqlRelationalTableModel::setSort(column, order);
        } else if (qsqlrelationaltablemodel_setsort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qsqlrelationaltablemodel_setsort_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::setSort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFilter(const QString& filter) override {
        if (qsqlrelationaltablemodel_setfilter_isbase) {
            qsqlrelationaltablemodel_setfilter_isbase = false;
            QSqlRelationalTableModel::setFilter(filter);
        } else if (qsqlrelationaltablemodel_setfilter_callback != nullptr) {
            const QString filter_ret = filter;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray filter_b = filter_ret.toUtf8();
            libqt_string filter_str;
            filter_str.len = filter_b.length();
            filter_str.data = static_cast<const char*>(malloc(filter_str.len + 1));
            memcpy((void*)filter_str.data, filter_b.data(), filter_str.len);
            ((char*)filter_str.data)[filter_str.len] = '\0';
            libqt_string cbval1 = filter_str;

            qsqlrelationaltablemodel_setfilter_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::setFilter(filter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_rowcount_isbase) {
            qsqlrelationaltablemodel_rowcount_isbase = false;
            return QSqlRelationalTableModel::rowCount(parent);
        } else if (qsqlrelationaltablemodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsqlrelationaltablemodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlRelationalTableModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_removerows_isbase) {
            qsqlrelationaltablemodel_removerows_isbase = false;
            return QSqlRelationalTableModel::removeRows(row, count, parent);
        } else if (qsqlrelationaltablemodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_insertrows_isbase) {
            qsqlrelationaltablemodel_insertrows_isbase = false;
            return QSqlRelationalTableModel::insertRows(row, count, parent);
        } else if (qsqlrelationaltablemodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool selectRow(int row) override {
        if (qsqlrelationaltablemodel_selectrow_isbase) {
            qsqlrelationaltablemodel_selectrow_isbase = false;
            return QSqlRelationalTableModel::selectRow(row);
        } else if (qsqlrelationaltablemodel_selectrow_callback != nullptr) {
            int cbval1 = row;

            bool callback_ret = qsqlrelationaltablemodel_selectrow_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::selectRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqlrelationaltablemodel_submit_isbase) {
            qsqlrelationaltablemodel_submit_isbase = false;
            return QSqlRelationalTableModel::submit();
        } else if (qsqlrelationaltablemodel_submit_callback != nullptr) {
            bool callback_ret = qsqlrelationaltablemodel_submit_callback();
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqlrelationaltablemodel_revert_isbase) {
            qsqlrelationaltablemodel_revert_isbase = false;
            QSqlRelationalTableModel::revert();
        } else if (qsqlrelationaltablemodel_revert_callback != nullptr) {
            qsqlrelationaltablemodel_revert_callback();
        } else {
            QSqlRelationalTableModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool deleteRowFromTable(int row) override {
        if (qsqlrelationaltablemodel_deleterowfromtable_isbase) {
            qsqlrelationaltablemodel_deleterowfromtable_isbase = false;
            return QSqlRelationalTableModel::deleteRowFromTable(row);
        } else if (qsqlrelationaltablemodel_deleterowfromtable_callback != nullptr) {
            int cbval1 = row;

            bool callback_ret = qsqlrelationaltablemodel_deleterowfromtable_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::deleteRowFromTable(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqlrelationaltablemodel_indexinquery_isbase) {
            qsqlrelationaltablemodel_indexinquery_isbase = false;
            return QSqlRelationalTableModel::indexInQuery(item);
        } else if (qsqlrelationaltablemodel_indexinquery_callback != nullptr) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);

            QModelIndex* callback_ret = qsqlrelationaltablemodel_indexinquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::indexInQuery(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_columncount_isbase) {
            qsqlrelationaltablemodel_columncount_isbase = false;
            return QSqlRelationalTableModel::columnCount(parent);
        } else if (qsqlrelationaltablemodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsqlrelationaltablemodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlRelationalTableModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqlrelationaltablemodel_setheaderdata_isbase) {
            qsqlrelationaltablemodel_setheaderdata_isbase = false;
            return QSqlRelationalTableModel::setHeaderData(section, orientation, value, role);
        } else if (qsqlrelationaltablemodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qsqlrelationaltablemodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_insertcolumns_isbase) {
            qsqlrelationaltablemodel_insertcolumns_isbase = false;
            return QSqlRelationalTableModel::insertColumns(column, count, parent);
        } else if (qsqlrelationaltablemodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_fetchmore_isbase) {
            qsqlrelationaltablemodel_fetchmore_isbase = false;
            QSqlRelationalTableModel::fetchMore(parent);
        } else if (qsqlrelationaltablemodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qsqlrelationaltablemodel_fetchmore_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_canfetchmore_isbase) {
            qsqlrelationaltablemodel_canfetchmore_isbase = false;
            return QSqlRelationalTableModel::canFetchMore(parent);
        } else if (qsqlrelationaltablemodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqlrelationaltablemodel_rolenames_isbase) {
            qsqlrelationaltablemodel_rolenames_isbase = false;
            return QSqlRelationalTableModel::roleNames();
        } else if (qsqlrelationaltablemodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qsqlrelationaltablemodel_rolenames_callback();
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
            return QSqlRelationalTableModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqlrelationaltablemodel_querychange_isbase) {
            qsqlrelationaltablemodel_querychange_isbase = false;
            QSqlRelationalTableModel::queryChange();
        } else if (qsqlrelationaltablemodel_querychange_callback != nullptr) {
            qsqlrelationaltablemodel_querychange_callback();
        } else {
            QSqlRelationalTableModel::queryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_index_isbase) {
            qsqlrelationaltablemodel_index_isbase = false;
            return QSqlRelationalTableModel::index(row, column, parent);
        } else if (qsqlrelationaltablemodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qsqlrelationaltablemodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqlrelationaltablemodel_sibling_isbase) {
            qsqlrelationaltablemodel_sibling_isbase = false;
            return QSqlRelationalTableModel::sibling(row, column, idx);
        } else if (qsqlrelationaltablemodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qsqlrelationaltablemodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_dropmimedata_isbase) {
            qsqlrelationaltablemodel_dropmimedata_isbase = false;
            return QSqlRelationalTableModel::dropMimeData(data, action, row, column, parent);
        } else if (qsqlrelationaltablemodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_itemdata_isbase) {
            qsqlrelationaltablemodel_itemdata_isbase = false;
            return QSqlRelationalTableModel::itemData(index);
        } else if (qsqlrelationaltablemodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qsqlrelationaltablemodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QSqlRelationalTableModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqlrelationaltablemodel_setitemdata_isbase) {
            qsqlrelationaltablemodel_setitemdata_isbase = false;
            return QSqlRelationalTableModel::setItemData(index, roles);
        } else if (qsqlrelationaltablemodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qsqlrelationaltablemodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqlrelationaltablemodel_mimetypes_isbase) {
            qsqlrelationaltablemodel_mimetypes_isbase = false;
            return QSqlRelationalTableModel::mimeTypes();
        } else if (qsqlrelationaltablemodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qsqlrelationaltablemodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QSqlRelationalTableModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqlrelationaltablemodel_mimedata_isbase) {
            qsqlrelationaltablemodel_mimedata_isbase = false;
            return QSqlRelationalTableModel::mimeData(indexes);
        } else if (qsqlrelationaltablemodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qsqlrelationaltablemodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_candropmimedata_isbase) {
            qsqlrelationaltablemodel_candropmimedata_isbase = false;
            return QSqlRelationalTableModel::canDropMimeData(data, action, row, column, parent);
        } else if (qsqlrelationaltablemodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqlrelationaltablemodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqlrelationaltablemodel_supporteddropactions_isbase) {
            qsqlrelationaltablemodel_supporteddropactions_isbase = false;
            return QSqlRelationalTableModel::supportedDropActions();
        } else if (qsqlrelationaltablemodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qsqlrelationaltablemodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSqlRelationalTableModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqlrelationaltablemodel_supporteddragactions_isbase) {
            qsqlrelationaltablemodel_supporteddragactions_isbase = false;
            return QSqlRelationalTableModel::supportedDragActions();
        } else if (qsqlrelationaltablemodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qsqlrelationaltablemodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSqlRelationalTableModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlrelationaltablemodel_moverows_isbase) {
            qsqlrelationaltablemodel_moverows_isbase = false;
            return QSqlRelationalTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qsqlrelationaltablemodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsqlrelationaltablemodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlrelationaltablemodel_movecolumns_isbase) {
            qsqlrelationaltablemodel_movecolumns_isbase = false;
            return QSqlRelationalTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qsqlrelationaltablemodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsqlrelationaltablemodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_buddy_isbase) {
            qsqlrelationaltablemodel_buddy_isbase = false;
            return QSqlRelationalTableModel::buddy(index);
        } else if (qsqlrelationaltablemodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qsqlrelationaltablemodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqlrelationaltablemodel_match_isbase) {
            qsqlrelationaltablemodel_match_isbase = false;
            return QSqlRelationalTableModel::match(start, role, value, hits, flags);
        } else if (qsqlrelationaltablemodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qsqlrelationaltablemodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QSqlRelationalTableModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_span_isbase) {
            qsqlrelationaltablemodel_span_isbase = false;
            return QSqlRelationalTableModel::span(index);
        } else if (qsqlrelationaltablemodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qsqlrelationaltablemodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqlrelationaltablemodel_multidata_isbase) {
            qsqlrelationaltablemodel_multidata_isbase = false;
            QSqlRelationalTableModel::multiData(index, roleDataSpan);
        } else if (qsqlrelationaltablemodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qsqlrelationaltablemodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqlrelationaltablemodel_resetinternaldata_isbase) {
            qsqlrelationaltablemodel_resetinternaldata_isbase = false;
            QSqlRelationalTableModel::resetInternalData();
        } else if (qsqlrelationaltablemodel_resetinternaldata_callback != nullptr) {
            qsqlrelationaltablemodel_resetinternaldata_callback();
        } else {
            QSqlRelationalTableModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqlrelationaltablemodel_event_isbase) {
            qsqlrelationaltablemodel_event_isbase = false;
            return QSqlRelationalTableModel::event(event);
        } else if (qsqlrelationaltablemodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsqlrelationaltablemodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqlrelationaltablemodel_eventfilter_isbase) {
            qsqlrelationaltablemodel_eventfilter_isbase = false;
            return QSqlRelationalTableModel::eventFilter(watched, event);
        } else if (qsqlrelationaltablemodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsqlrelationaltablemodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqlrelationaltablemodel_timerevent_isbase) {
            qsqlrelationaltablemodel_timerevent_isbase = false;
            QSqlRelationalTableModel::timerEvent(event);
        } else if (qsqlrelationaltablemodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsqlrelationaltablemodel_timerevent_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqlrelationaltablemodel_childevent_isbase) {
            qsqlrelationaltablemodel_childevent_isbase = false;
            QSqlRelationalTableModel::childEvent(event);
        } else if (qsqlrelationaltablemodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsqlrelationaltablemodel_childevent_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqlrelationaltablemodel_customevent_isbase) {
            qsqlrelationaltablemodel_customevent_isbase = false;
            QSqlRelationalTableModel::customEvent(event);
        } else if (qsqlrelationaltablemodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsqlrelationaltablemodel_customevent_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqlrelationaltablemodel_connectnotify_isbase) {
            qsqlrelationaltablemodel_connectnotify_isbase = false;
            QSqlRelationalTableModel::connectNotify(signal);
        } else if (qsqlrelationaltablemodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqlrelationaltablemodel_connectnotify_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqlrelationaltablemodel_disconnectnotify_isbase) {
            qsqlrelationaltablemodel_disconnectnotify_isbase = false;
            QSqlRelationalTableModel::disconnectNotify(signal);
        } else if (qsqlrelationaltablemodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqlrelationaltablemodel_disconnectnotify_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPrimaryKey(const QSqlIndex& key) {
        if (qsqlrelationaltablemodel_setprimarykey_isbase) {
            qsqlrelationaltablemodel_setprimarykey_isbase = false;
            QSqlRelationalTableModel::setPrimaryKey(key);
        } else if (qsqlrelationaltablemodel_setprimarykey_callback != nullptr) {
            const QSqlIndex& key_ret = key;
            // Cast returned reference into pointer
            QSqlIndex* cbval1 = const_cast<QSqlIndex*>(&key_ret);

            qsqlrelationaltablemodel_setprimarykey_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::setPrimaryKey(key);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSqlRecord primaryValues(int row) const {
        if (qsqlrelationaltablemodel_primaryvalues_isbase) {
            qsqlrelationaltablemodel_primaryvalues_isbase = false;
            return QSqlRelationalTableModel::primaryValues(row);
        } else if (qsqlrelationaltablemodel_primaryvalues_callback != nullptr) {
            int cbval1 = row;

            QSqlRecord* callback_ret = qsqlrelationaltablemodel_primaryvalues_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::primaryValues(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qsqlrelationaltablemodel_begininsertrows_isbase) {
            qsqlrelationaltablemodel_begininsertrows_isbase = false;
            QSqlRelationalTableModel::beginInsertRows(parent, first, last);
        } else if (qsqlrelationaltablemodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlrelationaltablemodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlRelationalTableModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qsqlrelationaltablemodel_endinsertrows_isbase) {
            qsqlrelationaltablemodel_endinsertrows_isbase = false;
            QSqlRelationalTableModel::endInsertRows();
        } else if (qsqlrelationaltablemodel_endinsertrows_callback != nullptr) {
            qsqlrelationaltablemodel_endinsertrows_callback();
        } else {
            QSqlRelationalTableModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qsqlrelationaltablemodel_beginremoverows_isbase) {
            qsqlrelationaltablemodel_beginremoverows_isbase = false;
            QSqlRelationalTableModel::beginRemoveRows(parent, first, last);
        } else if (qsqlrelationaltablemodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlrelationaltablemodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlRelationalTableModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qsqlrelationaltablemodel_endremoverows_isbase) {
            qsqlrelationaltablemodel_endremoverows_isbase = false;
            QSqlRelationalTableModel::endRemoveRows();
        } else if (qsqlrelationaltablemodel_endremoverows_callback != nullptr) {
            qsqlrelationaltablemodel_endremoverows_callback();
        } else {
            QSqlRelationalTableModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qsqlrelationaltablemodel_begininsertcolumns_isbase) {
            qsqlrelationaltablemodel_begininsertcolumns_isbase = false;
            QSqlRelationalTableModel::beginInsertColumns(parent, first, last);
        } else if (qsqlrelationaltablemodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlrelationaltablemodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlRelationalTableModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qsqlrelationaltablemodel_endinsertcolumns_isbase) {
            qsqlrelationaltablemodel_endinsertcolumns_isbase = false;
            QSqlRelationalTableModel::endInsertColumns();
        } else if (qsqlrelationaltablemodel_endinsertcolumns_callback != nullptr) {
            qsqlrelationaltablemodel_endinsertcolumns_callback();
        } else {
            QSqlRelationalTableModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qsqlrelationaltablemodel_beginremovecolumns_isbase) {
            qsqlrelationaltablemodel_beginremovecolumns_isbase = false;
            QSqlRelationalTableModel::beginRemoveColumns(parent, first, last);
        } else if (qsqlrelationaltablemodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqlrelationaltablemodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlRelationalTableModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qsqlrelationaltablemodel_endremovecolumns_isbase) {
            qsqlrelationaltablemodel_endremovecolumns_isbase = false;
            QSqlRelationalTableModel::endRemoveColumns();
        } else if (qsqlrelationaltablemodel_endremovecolumns_callback != nullptr) {
            qsqlrelationaltablemodel_endremovecolumns_callback();
        } else {
            QSqlRelationalTableModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qsqlrelationaltablemodel_beginresetmodel_isbase) {
            qsqlrelationaltablemodel_beginresetmodel_isbase = false;
            QSqlRelationalTableModel::beginResetModel();
        } else if (qsqlrelationaltablemodel_beginresetmodel_callback != nullptr) {
            qsqlrelationaltablemodel_beginresetmodel_callback();
        } else {
            QSqlRelationalTableModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qsqlrelationaltablemodel_endresetmodel_isbase) {
            qsqlrelationaltablemodel_endresetmodel_isbase = false;
            QSqlRelationalTableModel::endResetModel();
        } else if (qsqlrelationaltablemodel_endresetmodel_callback != nullptr) {
            qsqlrelationaltablemodel_endresetmodel_callback();
        } else {
            QSqlRelationalTableModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastError(const QSqlError& errorVal) {
        if (qsqlrelationaltablemodel_setlasterror_isbase) {
            qsqlrelationaltablemodel_setlasterror_isbase = false;
            QSqlRelationalTableModel::setLastError(errorVal);
        } else if (qsqlrelationaltablemodel_setlasterror_callback != nullptr) {
            const QSqlError& errorVal_ret = errorVal;
            // Cast returned reference into pointer
            QSqlError* cbval1 = const_cast<QSqlError*>(&errorVal_ret);

            qsqlrelationaltablemodel_setlasterror_callback(this, cbval1);
        } else {
            QSqlRelationalTableModel::setLastError(errorVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qsqlrelationaltablemodel_createindex_isbase) {
            qsqlrelationaltablemodel_createindex_isbase = false;
            return QSqlRelationalTableModel::createIndex(row, column);
        } else if (qsqlrelationaltablemodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qsqlrelationaltablemodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSqlRelationalTableModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qsqlrelationaltablemodel_encodedata_isbase) {
            qsqlrelationaltablemodel_encodedata_isbase = false;
            QSqlRelationalTableModel::encodeData(indexes, stream);
        } else if (qsqlrelationaltablemodel_encodedata_callback != nullptr) {
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

            qsqlrelationaltablemodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qsqlrelationaltablemodel_decodedata_isbase) {
            qsqlrelationaltablemodel_decodedata_isbase = false;
            return QSqlRelationalTableModel::decodeData(row, column, parent, stream);
        } else if (qsqlrelationaltablemodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qsqlrelationaltablemodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qsqlrelationaltablemodel_beginmoverows_isbase) {
            qsqlrelationaltablemodel_beginmoverows_isbase = false;
            return QSqlRelationalTableModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qsqlrelationaltablemodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qsqlrelationaltablemodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qsqlrelationaltablemodel_endmoverows_isbase) {
            qsqlrelationaltablemodel_endmoverows_isbase = false;
            QSqlRelationalTableModel::endMoveRows();
        } else if (qsqlrelationaltablemodel_endmoverows_callback != nullptr) {
            qsqlrelationaltablemodel_endmoverows_callback();
        } else {
            QSqlRelationalTableModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qsqlrelationaltablemodel_beginmovecolumns_isbase) {
            qsqlrelationaltablemodel_beginmovecolumns_isbase = false;
            return QSqlRelationalTableModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qsqlrelationaltablemodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qsqlrelationaltablemodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qsqlrelationaltablemodel_endmovecolumns_isbase) {
            qsqlrelationaltablemodel_endmovecolumns_isbase = false;
            QSqlRelationalTableModel::endMoveColumns();
        } else if (qsqlrelationaltablemodel_endmovecolumns_callback != nullptr) {
            qsqlrelationaltablemodel_endmovecolumns_callback();
        } else {
            QSqlRelationalTableModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qsqlrelationaltablemodel_changepersistentindex_isbase) {
            qsqlrelationaltablemodel_changepersistentindex_isbase = false;
            QSqlRelationalTableModel::changePersistentIndex(from, to);
        } else if (qsqlrelationaltablemodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qsqlrelationaltablemodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qsqlrelationaltablemodel_changepersistentindexlist_isbase) {
            qsqlrelationaltablemodel_changepersistentindexlist_isbase = false;
            QSqlRelationalTableModel::changePersistentIndexList(from, to);
        } else if (qsqlrelationaltablemodel_changepersistentindexlist_callback != nullptr) {
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

            qsqlrelationaltablemodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QSqlRelationalTableModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qsqlrelationaltablemodel_persistentindexlist_isbase) {
            qsqlrelationaltablemodel_persistentindexlist_isbase = false;
            return QSqlRelationalTableModel::persistentIndexList();
        } else if (qsqlrelationaltablemodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qsqlrelationaltablemodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QSqlRelationalTableModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsqlrelationaltablemodel_sender_isbase) {
            qsqlrelationaltablemodel_sender_isbase = false;
            return QSqlRelationalTableModel::sender();
        } else if (qsqlrelationaltablemodel_sender_callback != nullptr) {
            QObject* callback_ret = qsqlrelationaltablemodel_sender_callback();
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsqlrelationaltablemodel_sendersignalindex_isbase) {
            qsqlrelationaltablemodel_sendersignalindex_isbase = false;
            return QSqlRelationalTableModel::senderSignalIndex();
        } else if (qsqlrelationaltablemodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qsqlrelationaltablemodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSqlRelationalTableModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsqlrelationaltablemodel_receivers_isbase) {
            qsqlrelationaltablemodel_receivers_isbase = false;
            return QSqlRelationalTableModel::receivers(signal);
        } else if (qsqlrelationaltablemodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsqlrelationaltablemodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlRelationalTableModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsqlrelationaltablemodel_issignalconnected_isbase) {
            qsqlrelationaltablemodel_issignalconnected_isbase = false;
            return QSqlRelationalTableModel::isSignalConnected(signal);
        } else if (qsqlrelationaltablemodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsqlrelationaltablemodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlRelationalTableModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend libqt_string QSqlRelationalTableModel_SelectStatement(const QSqlRelationalTableModel* self);
    friend libqt_string QSqlRelationalTableModel_QBaseSelectStatement(const QSqlRelationalTableModel* self);
    friend bool QSqlRelationalTableModel_UpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
    friend bool QSqlRelationalTableModel_QBaseUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
    friend bool QSqlRelationalTableModel_InsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
    friend bool QSqlRelationalTableModel_QBaseInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
    friend libqt_string QSqlRelationalTableModel_OrderByClause(const QSqlRelationalTableModel* self);
    friend libqt_string QSqlRelationalTableModel_QBaseOrderByClause(const QSqlRelationalTableModel* self);
    friend bool QSqlRelationalTableModel_DeleteRowFromTable(QSqlRelationalTableModel* self, int row);
    friend bool QSqlRelationalTableModel_QBaseDeleteRowFromTable(QSqlRelationalTableModel* self, int row);
    friend QModelIndex* QSqlRelationalTableModel_IndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item);
    friend QModelIndex* QSqlRelationalTableModel_QBaseIndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item);
    friend void QSqlRelationalTableModel_QueryChange(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseQueryChange(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_ResetInternalData(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseResetInternalData(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_TimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event);
    friend void QSqlRelationalTableModel_QBaseTimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event);
    friend void QSqlRelationalTableModel_ChildEvent(QSqlRelationalTableModel* self, QChildEvent* event);
    friend void QSqlRelationalTableModel_QBaseChildEvent(QSqlRelationalTableModel* self, QChildEvent* event);
    friend void QSqlRelationalTableModel_CustomEvent(QSqlRelationalTableModel* self, QEvent* event);
    friend void QSqlRelationalTableModel_QBaseCustomEvent(QSqlRelationalTableModel* self, QEvent* event);
    friend void QSqlRelationalTableModel_ConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal);
    friend void QSqlRelationalTableModel_QBaseConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal);
    friend void QSqlRelationalTableModel_DisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal);
    friend void QSqlRelationalTableModel_QBaseDisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal);
    friend void QSqlRelationalTableModel_SetPrimaryKey(QSqlRelationalTableModel* self, const QSqlIndex* key);
    friend void QSqlRelationalTableModel_QBaseSetPrimaryKey(QSqlRelationalTableModel* self, const QSqlIndex* key);
    friend QSqlRecord* QSqlRelationalTableModel_PrimaryValues(const QSqlRelationalTableModel* self, int row);
    friend QSqlRecord* QSqlRelationalTableModel_QBasePrimaryValues(const QSqlRelationalTableModel* self, int row);
    friend void QSqlRelationalTableModel_BeginInsertRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_QBaseBeginInsertRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_EndInsertRows(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndInsertRows(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_BeginRemoveRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_QBaseBeginRemoveRows(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_EndRemoveRows(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndRemoveRows(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_BeginInsertColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_QBaseBeginInsertColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_EndInsertColumns(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndInsertColumns(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_BeginRemoveColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_QBaseBeginRemoveColumns(QSqlRelationalTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlRelationalTableModel_EndRemoveColumns(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndRemoveColumns(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_BeginResetModel(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseBeginResetModel(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_EndResetModel(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndResetModel(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_SetLastError(QSqlRelationalTableModel* self, const QSqlError* errorVal);
    friend void QSqlRelationalTableModel_QBaseSetLastError(QSqlRelationalTableModel* self, const QSqlError* errorVal);
    friend QModelIndex* QSqlRelationalTableModel_CreateIndex(const QSqlRelationalTableModel* self, int row, int column);
    friend QModelIndex* QSqlRelationalTableModel_QBaseCreateIndex(const QSqlRelationalTableModel* self, int row, int column);
    friend void QSqlRelationalTableModel_EncodeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QSqlRelationalTableModel_QBaseEncodeData(const QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QSqlRelationalTableModel_DecodeData(QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlRelationalTableModel_QBaseDecodeData(QSqlRelationalTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlRelationalTableModel_BeginMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QSqlRelationalTableModel_QBaseBeginMoveRows(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QSqlRelationalTableModel_EndMoveRows(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndMoveRows(QSqlRelationalTableModel* self);
    friend bool QSqlRelationalTableModel_BeginMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QSqlRelationalTableModel_QBaseBeginMoveColumns(QSqlRelationalTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QSqlRelationalTableModel_EndMoveColumns(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_QBaseEndMoveColumns(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_ChangePersistentIndex(QSqlRelationalTableModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlRelationalTableModel_QBaseChangePersistentIndex(QSqlRelationalTableModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlRelationalTableModel_ChangePersistentIndexList(QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QSqlRelationalTableModel_QBaseChangePersistentIndexList(QSqlRelationalTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_PersistentIndexList(const QSqlRelationalTableModel* self);
    friend libqt_list /* of QModelIndex* */ QSqlRelationalTableModel_QBasePersistentIndexList(const QSqlRelationalTableModel* self);
    friend QObject* QSqlRelationalTableModel_Sender(const QSqlRelationalTableModel* self);
    friend QObject* QSqlRelationalTableModel_QBaseSender(const QSqlRelationalTableModel* self);
    friend int QSqlRelationalTableModel_SenderSignalIndex(const QSqlRelationalTableModel* self);
    friend int QSqlRelationalTableModel_QBaseSenderSignalIndex(const QSqlRelationalTableModel* self);
    friend int QSqlRelationalTableModel_Receivers(const QSqlRelationalTableModel* self, const char* signal);
    friend int QSqlRelationalTableModel_QBaseReceivers(const QSqlRelationalTableModel* self, const char* signal);
    friend bool QSqlRelationalTableModel_IsSignalConnected(const QSqlRelationalTableModel* self, const QMetaMethod* signal);
    friend bool QSqlRelationalTableModel_QBaseIsSignalConnected(const QSqlRelationalTableModel* self, const QMetaMethod* signal);
};

#endif
