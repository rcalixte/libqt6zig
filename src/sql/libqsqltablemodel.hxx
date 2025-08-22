#pragma once
#ifndef SRC_SQLC_LIBVIRTUALQSQLTABLEMODEL_H
#define SRC_SQLC_LIBVIRTUALQSQLTABLEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlTableModel so that we can call protected methods
class VirtualQSqlTableModel final : public QSqlTableModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQSqlTableModel = true;

    // Virtual class public types (including callbacks)
    using QSqlTableModel_Metacall_Callback = int (*)(QSqlTableModel*, int, int, void**);
    using QSqlTableModel_SetTable_Callback = void (*)(QSqlTableModel*, libqt_string);
    using QSqlTableModel_Flags_Callback = int (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_Data_Callback = QVariant* (*)(const QSqlTableModel*, QModelIndex*, int);
    using QSqlTableModel_SetData_Callback = bool (*)(QSqlTableModel*, QModelIndex*, QVariant*, int);
    using QSqlTableModel_ClearItemData_Callback = bool (*)(QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_HeaderData_Callback = QVariant* (*)(const QSqlTableModel*, int, int, int);
    using QSqlTableModel_Clear_Callback = void (*)();
    using QSqlTableModel_SetEditStrategy_Callback = void (*)(QSqlTableModel*, int);
    using QSqlTableModel_Sort_Callback = void (*)(QSqlTableModel*, int, int);
    using QSqlTableModel_SetSort_Callback = void (*)(QSqlTableModel*, int, int);
    using QSqlTableModel_SetFilter_Callback = void (*)(QSqlTableModel*, libqt_string);
    using QSqlTableModel_RowCount_Callback = int (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_RemoveColumns_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_RemoveRows_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_InsertRows_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_RevertRow_Callback = void (*)(QSqlTableModel*, int);
    using QSqlTableModel_Select_Callback = bool (*)();
    using QSqlTableModel_SelectRow_Callback = bool (*)(QSqlTableModel*, int);
    using QSqlTableModel_Submit_Callback = bool (*)();
    using QSqlTableModel_Revert_Callback = void (*)();
    using QSqlTableModel_UpdateRowInTable_Callback = bool (*)(QSqlTableModel*, int, QSqlRecord*);
    using QSqlTableModel_InsertRowIntoTable_Callback = bool (*)(QSqlTableModel*, QSqlRecord*);
    using QSqlTableModel_DeleteRowFromTable_Callback = bool (*)(QSqlTableModel*, int);
    using QSqlTableModel_OrderByClause_Callback = const char* (*)();
    using QSqlTableModel_SelectStatement_Callback = const char* (*)();
    using QSqlTableModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_ColumnCount_Callback = int (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_SetHeaderData_Callback = bool (*)(QSqlTableModel*, int, int, QVariant*, int);
    using QSqlTableModel_InsertColumns_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_FetchMore_Callback = void (*)(QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_CanFetchMore_Callback = bool (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QSqlTableModel_QueryChange_Callback = void (*)();
    using QSqlTableModel_Index_Callback = QModelIndex* (*)(const QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_Sibling_Callback = QModelIndex* (*)(const QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_DropMimeData_Callback = bool (*)(QSqlTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlTableModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_SetItemData_Callback = bool (*)(QSqlTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSqlTableModel_MimeTypes_Callback = const char** (*)();
    using QSqlTableModel_MimeData_Callback = QMimeData* (*)(const QSqlTableModel*, libqt_list /* of QModelIndex* */);
    using QSqlTableModel_CanDropMimeData_Callback = bool (*)(const QSqlTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlTableModel_SupportedDropActions_Callback = int (*)();
    using QSqlTableModel_SupportedDragActions_Callback = int (*)();
    using QSqlTableModel_MoveRows_Callback = bool (*)(QSqlTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlTableModel_MoveColumns_Callback = bool (*)(QSqlTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlTableModel_Buddy_Callback = QModelIndex* (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_Match_Callback = QModelIndex** (*)(const QSqlTableModel*, QModelIndex*, int, QVariant*, int, int);
    using QSqlTableModel_Span_Callback = QSize* (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_MultiData_Callback = void (*)(const QSqlTableModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSqlTableModel_ResetInternalData_Callback = void (*)();
    using QSqlTableModel_Event_Callback = bool (*)(QSqlTableModel*, QEvent*);
    using QSqlTableModel_EventFilter_Callback = bool (*)(QSqlTableModel*, QObject*, QEvent*);
    using QSqlTableModel_TimerEvent_Callback = void (*)(QSqlTableModel*, QTimerEvent*);
    using QSqlTableModel_ChildEvent_Callback = void (*)(QSqlTableModel*, QChildEvent*);
    using QSqlTableModel_CustomEvent_Callback = void (*)(QSqlTableModel*, QEvent*);
    using QSqlTableModel_ConnectNotify_Callback = void (*)(QSqlTableModel*, QMetaMethod*);
    using QSqlTableModel_DisconnectNotify_Callback = void (*)(QSqlTableModel*, QMetaMethod*);
    using QSqlTableModel_SetPrimaryKey_Callback = void (*)(QSqlTableModel*, QSqlIndex*);
    using QSqlTableModel_PrimaryValues_Callback = QSqlRecord* (*)(const QSqlTableModel*, int);
    using QSqlTableModel_BeginInsertRows_Callback = void (*)(QSqlTableModel*, QModelIndex*, int, int);
    using QSqlTableModel_EndInsertRows_Callback = void (*)();
    using QSqlTableModel_BeginRemoveRows_Callback = void (*)(QSqlTableModel*, QModelIndex*, int, int);
    using QSqlTableModel_EndRemoveRows_Callback = void (*)();
    using QSqlTableModel_BeginInsertColumns_Callback = void (*)(QSqlTableModel*, QModelIndex*, int, int);
    using QSqlTableModel_EndInsertColumns_Callback = void (*)();
    using QSqlTableModel_BeginRemoveColumns_Callback = void (*)(QSqlTableModel*, QModelIndex*, int, int);
    using QSqlTableModel_EndRemoveColumns_Callback = void (*)();
    using QSqlTableModel_BeginResetModel_Callback = void (*)();
    using QSqlTableModel_EndResetModel_Callback = void (*)();
    using QSqlTableModel_SetLastError_Callback = void (*)(QSqlTableModel*, QSqlError*);
    using QSqlTableModel_CreateIndex_Callback = QModelIndex* (*)(const QSqlTableModel*, int, int);
    using QSqlTableModel_EncodeData_Callback = void (*)(const QSqlTableModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QSqlTableModel_DecodeData_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*, QDataStream*);
    using QSqlTableModel_BeginMoveRows_Callback = bool (*)(QSqlTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlTableModel_EndMoveRows_Callback = void (*)();
    using QSqlTableModel_BeginMoveColumns_Callback = bool (*)(QSqlTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlTableModel_EndMoveColumns_Callback = void (*)();
    using QSqlTableModel_ChangePersistentIndex_Callback = void (*)(QSqlTableModel*, QModelIndex*, QModelIndex*);
    using QSqlTableModel_ChangePersistentIndexList_Callback = void (*)(QSqlTableModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QSqlTableModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using QSqlTableModel_Sender_Callback = QObject* (*)();
    using QSqlTableModel_SenderSignalIndex_Callback = int (*)();
    using QSqlTableModel_Receivers_Callback = int (*)(const QSqlTableModel*, const char*);
    using QSqlTableModel_IsSignalConnected_Callback = bool (*)(const QSqlTableModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSqlTableModel_Metacall_Callback qsqltablemodel_metacall_callback = nullptr;
    QSqlTableModel_SetTable_Callback qsqltablemodel_settable_callback = nullptr;
    QSqlTableModel_Flags_Callback qsqltablemodel_flags_callback = nullptr;
    QSqlTableModel_Data_Callback qsqltablemodel_data_callback = nullptr;
    QSqlTableModel_SetData_Callback qsqltablemodel_setdata_callback = nullptr;
    QSqlTableModel_ClearItemData_Callback qsqltablemodel_clearitemdata_callback = nullptr;
    QSqlTableModel_HeaderData_Callback qsqltablemodel_headerdata_callback = nullptr;
    QSqlTableModel_Clear_Callback qsqltablemodel_clear_callback = nullptr;
    QSqlTableModel_SetEditStrategy_Callback qsqltablemodel_seteditstrategy_callback = nullptr;
    QSqlTableModel_Sort_Callback qsqltablemodel_sort_callback = nullptr;
    QSqlTableModel_SetSort_Callback qsqltablemodel_setsort_callback = nullptr;
    QSqlTableModel_SetFilter_Callback qsqltablemodel_setfilter_callback = nullptr;
    QSqlTableModel_RowCount_Callback qsqltablemodel_rowcount_callback = nullptr;
    QSqlTableModel_RemoveColumns_Callback qsqltablemodel_removecolumns_callback = nullptr;
    QSqlTableModel_RemoveRows_Callback qsqltablemodel_removerows_callback = nullptr;
    QSqlTableModel_InsertRows_Callback qsqltablemodel_insertrows_callback = nullptr;
    QSqlTableModel_RevertRow_Callback qsqltablemodel_revertrow_callback = nullptr;
    QSqlTableModel_Select_Callback qsqltablemodel_select_callback = nullptr;
    QSqlTableModel_SelectRow_Callback qsqltablemodel_selectrow_callback = nullptr;
    QSqlTableModel_Submit_Callback qsqltablemodel_submit_callback = nullptr;
    QSqlTableModel_Revert_Callback qsqltablemodel_revert_callback = nullptr;
    QSqlTableModel_UpdateRowInTable_Callback qsqltablemodel_updaterowintable_callback = nullptr;
    QSqlTableModel_InsertRowIntoTable_Callback qsqltablemodel_insertrowintotable_callback = nullptr;
    QSqlTableModel_DeleteRowFromTable_Callback qsqltablemodel_deleterowfromtable_callback = nullptr;
    QSqlTableModel_OrderByClause_Callback qsqltablemodel_orderbyclause_callback = nullptr;
    QSqlTableModel_SelectStatement_Callback qsqltablemodel_selectstatement_callback = nullptr;
    QSqlTableModel_IndexInQuery_Callback qsqltablemodel_indexinquery_callback = nullptr;
    QSqlTableModel_ColumnCount_Callback qsqltablemodel_columncount_callback = nullptr;
    QSqlTableModel_SetHeaderData_Callback qsqltablemodel_setheaderdata_callback = nullptr;
    QSqlTableModel_InsertColumns_Callback qsqltablemodel_insertcolumns_callback = nullptr;
    QSqlTableModel_FetchMore_Callback qsqltablemodel_fetchmore_callback = nullptr;
    QSqlTableModel_CanFetchMore_Callback qsqltablemodel_canfetchmore_callback = nullptr;
    QSqlTableModel_RoleNames_Callback qsqltablemodel_rolenames_callback = nullptr;
    QSqlTableModel_QueryChange_Callback qsqltablemodel_querychange_callback = nullptr;
    QSqlTableModel_Index_Callback qsqltablemodel_index_callback = nullptr;
    QSqlTableModel_Sibling_Callback qsqltablemodel_sibling_callback = nullptr;
    QSqlTableModel_DropMimeData_Callback qsqltablemodel_dropmimedata_callback = nullptr;
    QSqlTableModel_ItemData_Callback qsqltablemodel_itemdata_callback = nullptr;
    QSqlTableModel_SetItemData_Callback qsqltablemodel_setitemdata_callback = nullptr;
    QSqlTableModel_MimeTypes_Callback qsqltablemodel_mimetypes_callback = nullptr;
    QSqlTableModel_MimeData_Callback qsqltablemodel_mimedata_callback = nullptr;
    QSqlTableModel_CanDropMimeData_Callback qsqltablemodel_candropmimedata_callback = nullptr;
    QSqlTableModel_SupportedDropActions_Callback qsqltablemodel_supporteddropactions_callback = nullptr;
    QSqlTableModel_SupportedDragActions_Callback qsqltablemodel_supporteddragactions_callback = nullptr;
    QSqlTableModel_MoveRows_Callback qsqltablemodel_moverows_callback = nullptr;
    QSqlTableModel_MoveColumns_Callback qsqltablemodel_movecolumns_callback = nullptr;
    QSqlTableModel_Buddy_Callback qsqltablemodel_buddy_callback = nullptr;
    QSqlTableModel_Match_Callback qsqltablemodel_match_callback = nullptr;
    QSqlTableModel_Span_Callback qsqltablemodel_span_callback = nullptr;
    QSqlTableModel_MultiData_Callback qsqltablemodel_multidata_callback = nullptr;
    QSqlTableModel_ResetInternalData_Callback qsqltablemodel_resetinternaldata_callback = nullptr;
    QSqlTableModel_Event_Callback qsqltablemodel_event_callback = nullptr;
    QSqlTableModel_EventFilter_Callback qsqltablemodel_eventfilter_callback = nullptr;
    QSqlTableModel_TimerEvent_Callback qsqltablemodel_timerevent_callback = nullptr;
    QSqlTableModel_ChildEvent_Callback qsqltablemodel_childevent_callback = nullptr;
    QSqlTableModel_CustomEvent_Callback qsqltablemodel_customevent_callback = nullptr;
    QSqlTableModel_ConnectNotify_Callback qsqltablemodel_connectnotify_callback = nullptr;
    QSqlTableModel_DisconnectNotify_Callback qsqltablemodel_disconnectnotify_callback = nullptr;
    QSqlTableModel_SetPrimaryKey_Callback qsqltablemodel_setprimarykey_callback = nullptr;
    QSqlTableModel_PrimaryValues_Callback qsqltablemodel_primaryvalues_callback = nullptr;
    QSqlTableModel_BeginInsertRows_Callback qsqltablemodel_begininsertrows_callback = nullptr;
    QSqlTableModel_EndInsertRows_Callback qsqltablemodel_endinsertrows_callback = nullptr;
    QSqlTableModel_BeginRemoveRows_Callback qsqltablemodel_beginremoverows_callback = nullptr;
    QSqlTableModel_EndRemoveRows_Callback qsqltablemodel_endremoverows_callback = nullptr;
    QSqlTableModel_BeginInsertColumns_Callback qsqltablemodel_begininsertcolumns_callback = nullptr;
    QSqlTableModel_EndInsertColumns_Callback qsqltablemodel_endinsertcolumns_callback = nullptr;
    QSqlTableModel_BeginRemoveColumns_Callback qsqltablemodel_beginremovecolumns_callback = nullptr;
    QSqlTableModel_EndRemoveColumns_Callback qsqltablemodel_endremovecolumns_callback = nullptr;
    QSqlTableModel_BeginResetModel_Callback qsqltablemodel_beginresetmodel_callback = nullptr;
    QSqlTableModel_EndResetModel_Callback qsqltablemodel_endresetmodel_callback = nullptr;
    QSqlTableModel_SetLastError_Callback qsqltablemodel_setlasterror_callback = nullptr;
    QSqlTableModel_CreateIndex_Callback qsqltablemodel_createindex_callback = nullptr;
    QSqlTableModel_EncodeData_Callback qsqltablemodel_encodedata_callback = nullptr;
    QSqlTableModel_DecodeData_Callback qsqltablemodel_decodedata_callback = nullptr;
    QSqlTableModel_BeginMoveRows_Callback qsqltablemodel_beginmoverows_callback = nullptr;
    QSqlTableModel_EndMoveRows_Callback qsqltablemodel_endmoverows_callback = nullptr;
    QSqlTableModel_BeginMoveColumns_Callback qsqltablemodel_beginmovecolumns_callback = nullptr;
    QSqlTableModel_EndMoveColumns_Callback qsqltablemodel_endmovecolumns_callback = nullptr;
    QSqlTableModel_ChangePersistentIndex_Callback qsqltablemodel_changepersistentindex_callback = nullptr;
    QSqlTableModel_ChangePersistentIndexList_Callback qsqltablemodel_changepersistentindexlist_callback = nullptr;
    QSqlTableModel_PersistentIndexList_Callback qsqltablemodel_persistentindexlist_callback = nullptr;
    QSqlTableModel_Sender_Callback qsqltablemodel_sender_callback = nullptr;
    QSqlTableModel_SenderSignalIndex_Callback qsqltablemodel_sendersignalindex_callback = nullptr;
    QSqlTableModel_Receivers_Callback qsqltablemodel_receivers_callback = nullptr;
    QSqlTableModel_IsSignalConnected_Callback qsqltablemodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsqltablemodel_metacall_isbase = false;
    mutable bool qsqltablemodel_settable_isbase = false;
    mutable bool qsqltablemodel_flags_isbase = false;
    mutable bool qsqltablemodel_data_isbase = false;
    mutable bool qsqltablemodel_setdata_isbase = false;
    mutable bool qsqltablemodel_clearitemdata_isbase = false;
    mutable bool qsqltablemodel_headerdata_isbase = false;
    mutable bool qsqltablemodel_clear_isbase = false;
    mutable bool qsqltablemodel_seteditstrategy_isbase = false;
    mutable bool qsqltablemodel_sort_isbase = false;
    mutable bool qsqltablemodel_setsort_isbase = false;
    mutable bool qsqltablemodel_setfilter_isbase = false;
    mutable bool qsqltablemodel_rowcount_isbase = false;
    mutable bool qsqltablemodel_removecolumns_isbase = false;
    mutable bool qsqltablemodel_removerows_isbase = false;
    mutable bool qsqltablemodel_insertrows_isbase = false;
    mutable bool qsqltablemodel_revertrow_isbase = false;
    mutable bool qsqltablemodel_select_isbase = false;
    mutable bool qsqltablemodel_selectrow_isbase = false;
    mutable bool qsqltablemodel_submit_isbase = false;
    mutable bool qsqltablemodel_revert_isbase = false;
    mutable bool qsqltablemodel_updaterowintable_isbase = false;
    mutable bool qsqltablemodel_insertrowintotable_isbase = false;
    mutable bool qsqltablemodel_deleterowfromtable_isbase = false;
    mutable bool qsqltablemodel_orderbyclause_isbase = false;
    mutable bool qsqltablemodel_selectstatement_isbase = false;
    mutable bool qsqltablemodel_indexinquery_isbase = false;
    mutable bool qsqltablemodel_columncount_isbase = false;
    mutable bool qsqltablemodel_setheaderdata_isbase = false;
    mutable bool qsqltablemodel_insertcolumns_isbase = false;
    mutable bool qsqltablemodel_fetchmore_isbase = false;
    mutable bool qsqltablemodel_canfetchmore_isbase = false;
    mutable bool qsqltablemodel_rolenames_isbase = false;
    mutable bool qsqltablemodel_querychange_isbase = false;
    mutable bool qsqltablemodel_index_isbase = false;
    mutable bool qsqltablemodel_sibling_isbase = false;
    mutable bool qsqltablemodel_dropmimedata_isbase = false;
    mutable bool qsqltablemodel_itemdata_isbase = false;
    mutable bool qsqltablemodel_setitemdata_isbase = false;
    mutable bool qsqltablemodel_mimetypes_isbase = false;
    mutable bool qsqltablemodel_mimedata_isbase = false;
    mutable bool qsqltablemodel_candropmimedata_isbase = false;
    mutable bool qsqltablemodel_supporteddropactions_isbase = false;
    mutable bool qsqltablemodel_supporteddragactions_isbase = false;
    mutable bool qsqltablemodel_moverows_isbase = false;
    mutable bool qsqltablemodel_movecolumns_isbase = false;
    mutable bool qsqltablemodel_buddy_isbase = false;
    mutable bool qsqltablemodel_match_isbase = false;
    mutable bool qsqltablemodel_span_isbase = false;
    mutable bool qsqltablemodel_multidata_isbase = false;
    mutable bool qsqltablemodel_resetinternaldata_isbase = false;
    mutable bool qsqltablemodel_event_isbase = false;
    mutable bool qsqltablemodel_eventfilter_isbase = false;
    mutable bool qsqltablemodel_timerevent_isbase = false;
    mutable bool qsqltablemodel_childevent_isbase = false;
    mutable bool qsqltablemodel_customevent_isbase = false;
    mutable bool qsqltablemodel_connectnotify_isbase = false;
    mutable bool qsqltablemodel_disconnectnotify_isbase = false;
    mutable bool qsqltablemodel_setprimarykey_isbase = false;
    mutable bool qsqltablemodel_primaryvalues_isbase = false;
    mutable bool qsqltablemodel_begininsertrows_isbase = false;
    mutable bool qsqltablemodel_endinsertrows_isbase = false;
    mutable bool qsqltablemodel_beginremoverows_isbase = false;
    mutable bool qsqltablemodel_endremoverows_isbase = false;
    mutable bool qsqltablemodel_begininsertcolumns_isbase = false;
    mutable bool qsqltablemodel_endinsertcolumns_isbase = false;
    mutable bool qsqltablemodel_beginremovecolumns_isbase = false;
    mutable bool qsqltablemodel_endremovecolumns_isbase = false;
    mutable bool qsqltablemodel_beginresetmodel_isbase = false;
    mutable bool qsqltablemodel_endresetmodel_isbase = false;
    mutable bool qsqltablemodel_setlasterror_isbase = false;
    mutable bool qsqltablemodel_createindex_isbase = false;
    mutable bool qsqltablemodel_encodedata_isbase = false;
    mutable bool qsqltablemodel_decodedata_isbase = false;
    mutable bool qsqltablemodel_beginmoverows_isbase = false;
    mutable bool qsqltablemodel_endmoverows_isbase = false;
    mutable bool qsqltablemodel_beginmovecolumns_isbase = false;
    mutable bool qsqltablemodel_endmovecolumns_isbase = false;
    mutable bool qsqltablemodel_changepersistentindex_isbase = false;
    mutable bool qsqltablemodel_changepersistentindexlist_isbase = false;
    mutable bool qsqltablemodel_persistentindexlist_isbase = false;
    mutable bool qsqltablemodel_sender_isbase = false;
    mutable bool qsqltablemodel_sendersignalindex_isbase = false;
    mutable bool qsqltablemodel_receivers_isbase = false;
    mutable bool qsqltablemodel_issignalconnected_isbase = false;

  public:
    VirtualQSqlTableModel() : QSqlTableModel() {};
    VirtualQSqlTableModel(QObject* parent) : QSqlTableModel(parent) {};
    VirtualQSqlTableModel(QObject* parent, const QSqlDatabase& db) : QSqlTableModel(parent, db) {};

    ~VirtualQSqlTableModel() {
        qsqltablemodel_metacall_callback = nullptr;
        qsqltablemodel_settable_callback = nullptr;
        qsqltablemodel_flags_callback = nullptr;
        qsqltablemodel_data_callback = nullptr;
        qsqltablemodel_setdata_callback = nullptr;
        qsqltablemodel_clearitemdata_callback = nullptr;
        qsqltablemodel_headerdata_callback = nullptr;
        qsqltablemodel_clear_callback = nullptr;
        qsqltablemodel_seteditstrategy_callback = nullptr;
        qsqltablemodel_sort_callback = nullptr;
        qsqltablemodel_setsort_callback = nullptr;
        qsqltablemodel_setfilter_callback = nullptr;
        qsqltablemodel_rowcount_callback = nullptr;
        qsqltablemodel_removecolumns_callback = nullptr;
        qsqltablemodel_removerows_callback = nullptr;
        qsqltablemodel_insertrows_callback = nullptr;
        qsqltablemodel_revertrow_callback = nullptr;
        qsqltablemodel_select_callback = nullptr;
        qsqltablemodel_selectrow_callback = nullptr;
        qsqltablemodel_submit_callback = nullptr;
        qsqltablemodel_revert_callback = nullptr;
        qsqltablemodel_updaterowintable_callback = nullptr;
        qsqltablemodel_insertrowintotable_callback = nullptr;
        qsqltablemodel_deleterowfromtable_callback = nullptr;
        qsqltablemodel_orderbyclause_callback = nullptr;
        qsqltablemodel_selectstatement_callback = nullptr;
        qsqltablemodel_indexinquery_callback = nullptr;
        qsqltablemodel_columncount_callback = nullptr;
        qsqltablemodel_setheaderdata_callback = nullptr;
        qsqltablemodel_insertcolumns_callback = nullptr;
        qsqltablemodel_fetchmore_callback = nullptr;
        qsqltablemodel_canfetchmore_callback = nullptr;
        qsqltablemodel_rolenames_callback = nullptr;
        qsqltablemodel_querychange_callback = nullptr;
        qsqltablemodel_index_callback = nullptr;
        qsqltablemodel_sibling_callback = nullptr;
        qsqltablemodel_dropmimedata_callback = nullptr;
        qsqltablemodel_itemdata_callback = nullptr;
        qsqltablemodel_setitemdata_callback = nullptr;
        qsqltablemodel_mimetypes_callback = nullptr;
        qsqltablemodel_mimedata_callback = nullptr;
        qsqltablemodel_candropmimedata_callback = nullptr;
        qsqltablemodel_supporteddropactions_callback = nullptr;
        qsqltablemodel_supporteddragactions_callback = nullptr;
        qsqltablemodel_moverows_callback = nullptr;
        qsqltablemodel_movecolumns_callback = nullptr;
        qsqltablemodel_buddy_callback = nullptr;
        qsqltablemodel_match_callback = nullptr;
        qsqltablemodel_span_callback = nullptr;
        qsqltablemodel_multidata_callback = nullptr;
        qsqltablemodel_resetinternaldata_callback = nullptr;
        qsqltablemodel_event_callback = nullptr;
        qsqltablemodel_eventfilter_callback = nullptr;
        qsqltablemodel_timerevent_callback = nullptr;
        qsqltablemodel_childevent_callback = nullptr;
        qsqltablemodel_customevent_callback = nullptr;
        qsqltablemodel_connectnotify_callback = nullptr;
        qsqltablemodel_disconnectnotify_callback = nullptr;
        qsqltablemodel_setprimarykey_callback = nullptr;
        qsqltablemodel_primaryvalues_callback = nullptr;
        qsqltablemodel_begininsertrows_callback = nullptr;
        qsqltablemodel_endinsertrows_callback = nullptr;
        qsqltablemodel_beginremoverows_callback = nullptr;
        qsqltablemodel_endremoverows_callback = nullptr;
        qsqltablemodel_begininsertcolumns_callback = nullptr;
        qsqltablemodel_endinsertcolumns_callback = nullptr;
        qsqltablemodel_beginremovecolumns_callback = nullptr;
        qsqltablemodel_endremovecolumns_callback = nullptr;
        qsqltablemodel_beginresetmodel_callback = nullptr;
        qsqltablemodel_endresetmodel_callback = nullptr;
        qsqltablemodel_setlasterror_callback = nullptr;
        qsqltablemodel_createindex_callback = nullptr;
        qsqltablemodel_encodedata_callback = nullptr;
        qsqltablemodel_decodedata_callback = nullptr;
        qsqltablemodel_beginmoverows_callback = nullptr;
        qsqltablemodel_endmoverows_callback = nullptr;
        qsqltablemodel_beginmovecolumns_callback = nullptr;
        qsqltablemodel_endmovecolumns_callback = nullptr;
        qsqltablemodel_changepersistentindex_callback = nullptr;
        qsqltablemodel_changepersistentindexlist_callback = nullptr;
        qsqltablemodel_persistentindexlist_callback = nullptr;
        qsqltablemodel_sender_callback = nullptr;
        qsqltablemodel_sendersignalindex_callback = nullptr;
        qsqltablemodel_receivers_callback = nullptr;
        qsqltablemodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSqlTableModel_Metacall_Callback(QSqlTableModel_Metacall_Callback cb) { qsqltablemodel_metacall_callback = cb; }
    inline void setQSqlTableModel_SetTable_Callback(QSqlTableModel_SetTable_Callback cb) { qsqltablemodel_settable_callback = cb; }
    inline void setQSqlTableModel_Flags_Callback(QSqlTableModel_Flags_Callback cb) { qsqltablemodel_flags_callback = cb; }
    inline void setQSqlTableModel_Data_Callback(QSqlTableModel_Data_Callback cb) { qsqltablemodel_data_callback = cb; }
    inline void setQSqlTableModel_SetData_Callback(QSqlTableModel_SetData_Callback cb) { qsqltablemodel_setdata_callback = cb; }
    inline void setQSqlTableModel_ClearItemData_Callback(QSqlTableModel_ClearItemData_Callback cb) { qsqltablemodel_clearitemdata_callback = cb; }
    inline void setQSqlTableModel_HeaderData_Callback(QSqlTableModel_HeaderData_Callback cb) { qsqltablemodel_headerdata_callback = cb; }
    inline void setQSqlTableModel_Clear_Callback(QSqlTableModel_Clear_Callback cb) { qsqltablemodel_clear_callback = cb; }
    inline void setQSqlTableModel_SetEditStrategy_Callback(QSqlTableModel_SetEditStrategy_Callback cb) { qsqltablemodel_seteditstrategy_callback = cb; }
    inline void setQSqlTableModel_Sort_Callback(QSqlTableModel_Sort_Callback cb) { qsqltablemodel_sort_callback = cb; }
    inline void setQSqlTableModel_SetSort_Callback(QSqlTableModel_SetSort_Callback cb) { qsqltablemodel_setsort_callback = cb; }
    inline void setQSqlTableModel_SetFilter_Callback(QSqlTableModel_SetFilter_Callback cb) { qsqltablemodel_setfilter_callback = cb; }
    inline void setQSqlTableModel_RowCount_Callback(QSqlTableModel_RowCount_Callback cb) { qsqltablemodel_rowcount_callback = cb; }
    inline void setQSqlTableModel_RemoveColumns_Callback(QSqlTableModel_RemoveColumns_Callback cb) { qsqltablemodel_removecolumns_callback = cb; }
    inline void setQSqlTableModel_RemoveRows_Callback(QSqlTableModel_RemoveRows_Callback cb) { qsqltablemodel_removerows_callback = cb; }
    inline void setQSqlTableModel_InsertRows_Callback(QSqlTableModel_InsertRows_Callback cb) { qsqltablemodel_insertrows_callback = cb; }
    inline void setQSqlTableModel_RevertRow_Callback(QSqlTableModel_RevertRow_Callback cb) { qsqltablemodel_revertrow_callback = cb; }
    inline void setQSqlTableModel_Select_Callback(QSqlTableModel_Select_Callback cb) { qsqltablemodel_select_callback = cb; }
    inline void setQSqlTableModel_SelectRow_Callback(QSqlTableModel_SelectRow_Callback cb) { qsqltablemodel_selectrow_callback = cb; }
    inline void setQSqlTableModel_Submit_Callback(QSqlTableModel_Submit_Callback cb) { qsqltablemodel_submit_callback = cb; }
    inline void setQSqlTableModel_Revert_Callback(QSqlTableModel_Revert_Callback cb) { qsqltablemodel_revert_callback = cb; }
    inline void setQSqlTableModel_UpdateRowInTable_Callback(QSqlTableModel_UpdateRowInTable_Callback cb) { qsqltablemodel_updaterowintable_callback = cb; }
    inline void setQSqlTableModel_InsertRowIntoTable_Callback(QSqlTableModel_InsertRowIntoTable_Callback cb) { qsqltablemodel_insertrowintotable_callback = cb; }
    inline void setQSqlTableModel_DeleteRowFromTable_Callback(QSqlTableModel_DeleteRowFromTable_Callback cb) { qsqltablemodel_deleterowfromtable_callback = cb; }
    inline void setQSqlTableModel_OrderByClause_Callback(QSqlTableModel_OrderByClause_Callback cb) { qsqltablemodel_orderbyclause_callback = cb; }
    inline void setQSqlTableModel_SelectStatement_Callback(QSqlTableModel_SelectStatement_Callback cb) { qsqltablemodel_selectstatement_callback = cb; }
    inline void setQSqlTableModel_IndexInQuery_Callback(QSqlTableModel_IndexInQuery_Callback cb) { qsqltablemodel_indexinquery_callback = cb; }
    inline void setQSqlTableModel_ColumnCount_Callback(QSqlTableModel_ColumnCount_Callback cb) { qsqltablemodel_columncount_callback = cb; }
    inline void setQSqlTableModel_SetHeaderData_Callback(QSqlTableModel_SetHeaderData_Callback cb) { qsqltablemodel_setheaderdata_callback = cb; }
    inline void setQSqlTableModel_InsertColumns_Callback(QSqlTableModel_InsertColumns_Callback cb) { qsqltablemodel_insertcolumns_callback = cb; }
    inline void setQSqlTableModel_FetchMore_Callback(QSqlTableModel_FetchMore_Callback cb) { qsqltablemodel_fetchmore_callback = cb; }
    inline void setQSqlTableModel_CanFetchMore_Callback(QSqlTableModel_CanFetchMore_Callback cb) { qsqltablemodel_canfetchmore_callback = cb; }
    inline void setQSqlTableModel_RoleNames_Callback(QSqlTableModel_RoleNames_Callback cb) { qsqltablemodel_rolenames_callback = cb; }
    inline void setQSqlTableModel_QueryChange_Callback(QSqlTableModel_QueryChange_Callback cb) { qsqltablemodel_querychange_callback = cb; }
    inline void setQSqlTableModel_Index_Callback(QSqlTableModel_Index_Callback cb) { qsqltablemodel_index_callback = cb; }
    inline void setQSqlTableModel_Sibling_Callback(QSqlTableModel_Sibling_Callback cb) { qsqltablemodel_sibling_callback = cb; }
    inline void setQSqlTableModel_DropMimeData_Callback(QSqlTableModel_DropMimeData_Callback cb) { qsqltablemodel_dropmimedata_callback = cb; }
    inline void setQSqlTableModel_ItemData_Callback(QSqlTableModel_ItemData_Callback cb) { qsqltablemodel_itemdata_callback = cb; }
    inline void setQSqlTableModel_SetItemData_Callback(QSqlTableModel_SetItemData_Callback cb) { qsqltablemodel_setitemdata_callback = cb; }
    inline void setQSqlTableModel_MimeTypes_Callback(QSqlTableModel_MimeTypes_Callback cb) { qsqltablemodel_mimetypes_callback = cb; }
    inline void setQSqlTableModel_MimeData_Callback(QSqlTableModel_MimeData_Callback cb) { qsqltablemodel_mimedata_callback = cb; }
    inline void setQSqlTableModel_CanDropMimeData_Callback(QSqlTableModel_CanDropMimeData_Callback cb) { qsqltablemodel_candropmimedata_callback = cb; }
    inline void setQSqlTableModel_SupportedDropActions_Callback(QSqlTableModel_SupportedDropActions_Callback cb) { qsqltablemodel_supporteddropactions_callback = cb; }
    inline void setQSqlTableModel_SupportedDragActions_Callback(QSqlTableModel_SupportedDragActions_Callback cb) { qsqltablemodel_supporteddragactions_callback = cb; }
    inline void setQSqlTableModel_MoveRows_Callback(QSqlTableModel_MoveRows_Callback cb) { qsqltablemodel_moverows_callback = cb; }
    inline void setQSqlTableModel_MoveColumns_Callback(QSqlTableModel_MoveColumns_Callback cb) { qsqltablemodel_movecolumns_callback = cb; }
    inline void setQSqlTableModel_Buddy_Callback(QSqlTableModel_Buddy_Callback cb) { qsqltablemodel_buddy_callback = cb; }
    inline void setQSqlTableModel_Match_Callback(QSqlTableModel_Match_Callback cb) { qsqltablemodel_match_callback = cb; }
    inline void setQSqlTableModel_Span_Callback(QSqlTableModel_Span_Callback cb) { qsqltablemodel_span_callback = cb; }
    inline void setQSqlTableModel_MultiData_Callback(QSqlTableModel_MultiData_Callback cb) { qsqltablemodel_multidata_callback = cb; }
    inline void setQSqlTableModel_ResetInternalData_Callback(QSqlTableModel_ResetInternalData_Callback cb) { qsqltablemodel_resetinternaldata_callback = cb; }
    inline void setQSqlTableModel_Event_Callback(QSqlTableModel_Event_Callback cb) { qsqltablemodel_event_callback = cb; }
    inline void setQSqlTableModel_EventFilter_Callback(QSqlTableModel_EventFilter_Callback cb) { qsqltablemodel_eventfilter_callback = cb; }
    inline void setQSqlTableModel_TimerEvent_Callback(QSqlTableModel_TimerEvent_Callback cb) { qsqltablemodel_timerevent_callback = cb; }
    inline void setQSqlTableModel_ChildEvent_Callback(QSqlTableModel_ChildEvent_Callback cb) { qsqltablemodel_childevent_callback = cb; }
    inline void setQSqlTableModel_CustomEvent_Callback(QSqlTableModel_CustomEvent_Callback cb) { qsqltablemodel_customevent_callback = cb; }
    inline void setQSqlTableModel_ConnectNotify_Callback(QSqlTableModel_ConnectNotify_Callback cb) { qsqltablemodel_connectnotify_callback = cb; }
    inline void setQSqlTableModel_DisconnectNotify_Callback(QSqlTableModel_DisconnectNotify_Callback cb) { qsqltablemodel_disconnectnotify_callback = cb; }
    inline void setQSqlTableModel_SetPrimaryKey_Callback(QSqlTableModel_SetPrimaryKey_Callback cb) { qsqltablemodel_setprimarykey_callback = cb; }
    inline void setQSqlTableModel_PrimaryValues_Callback(QSqlTableModel_PrimaryValues_Callback cb) { qsqltablemodel_primaryvalues_callback = cb; }
    inline void setQSqlTableModel_BeginInsertRows_Callback(QSqlTableModel_BeginInsertRows_Callback cb) { qsqltablemodel_begininsertrows_callback = cb; }
    inline void setQSqlTableModel_EndInsertRows_Callback(QSqlTableModel_EndInsertRows_Callback cb) { qsqltablemodel_endinsertrows_callback = cb; }
    inline void setQSqlTableModel_BeginRemoveRows_Callback(QSqlTableModel_BeginRemoveRows_Callback cb) { qsqltablemodel_beginremoverows_callback = cb; }
    inline void setQSqlTableModel_EndRemoveRows_Callback(QSqlTableModel_EndRemoveRows_Callback cb) { qsqltablemodel_endremoverows_callback = cb; }
    inline void setQSqlTableModel_BeginInsertColumns_Callback(QSqlTableModel_BeginInsertColumns_Callback cb) { qsqltablemodel_begininsertcolumns_callback = cb; }
    inline void setQSqlTableModel_EndInsertColumns_Callback(QSqlTableModel_EndInsertColumns_Callback cb) { qsqltablemodel_endinsertcolumns_callback = cb; }
    inline void setQSqlTableModel_BeginRemoveColumns_Callback(QSqlTableModel_BeginRemoveColumns_Callback cb) { qsqltablemodel_beginremovecolumns_callback = cb; }
    inline void setQSqlTableModel_EndRemoveColumns_Callback(QSqlTableModel_EndRemoveColumns_Callback cb) { qsqltablemodel_endremovecolumns_callback = cb; }
    inline void setQSqlTableModel_BeginResetModel_Callback(QSqlTableModel_BeginResetModel_Callback cb) { qsqltablemodel_beginresetmodel_callback = cb; }
    inline void setQSqlTableModel_EndResetModel_Callback(QSqlTableModel_EndResetModel_Callback cb) { qsqltablemodel_endresetmodel_callback = cb; }
    inline void setQSqlTableModel_SetLastError_Callback(QSqlTableModel_SetLastError_Callback cb) { qsqltablemodel_setlasterror_callback = cb; }
    inline void setQSqlTableModel_CreateIndex_Callback(QSqlTableModel_CreateIndex_Callback cb) { qsqltablemodel_createindex_callback = cb; }
    inline void setQSqlTableModel_EncodeData_Callback(QSqlTableModel_EncodeData_Callback cb) { qsqltablemodel_encodedata_callback = cb; }
    inline void setQSqlTableModel_DecodeData_Callback(QSqlTableModel_DecodeData_Callback cb) { qsqltablemodel_decodedata_callback = cb; }
    inline void setQSqlTableModel_BeginMoveRows_Callback(QSqlTableModel_BeginMoveRows_Callback cb) { qsqltablemodel_beginmoverows_callback = cb; }
    inline void setQSqlTableModel_EndMoveRows_Callback(QSqlTableModel_EndMoveRows_Callback cb) { qsqltablemodel_endmoverows_callback = cb; }
    inline void setQSqlTableModel_BeginMoveColumns_Callback(QSqlTableModel_BeginMoveColumns_Callback cb) { qsqltablemodel_beginmovecolumns_callback = cb; }
    inline void setQSqlTableModel_EndMoveColumns_Callback(QSqlTableModel_EndMoveColumns_Callback cb) { qsqltablemodel_endmovecolumns_callback = cb; }
    inline void setQSqlTableModel_ChangePersistentIndex_Callback(QSqlTableModel_ChangePersistentIndex_Callback cb) { qsqltablemodel_changepersistentindex_callback = cb; }
    inline void setQSqlTableModel_ChangePersistentIndexList_Callback(QSqlTableModel_ChangePersistentIndexList_Callback cb) { qsqltablemodel_changepersistentindexlist_callback = cb; }
    inline void setQSqlTableModel_PersistentIndexList_Callback(QSqlTableModel_PersistentIndexList_Callback cb) { qsqltablemodel_persistentindexlist_callback = cb; }
    inline void setQSqlTableModel_Sender_Callback(QSqlTableModel_Sender_Callback cb) { qsqltablemodel_sender_callback = cb; }
    inline void setQSqlTableModel_SenderSignalIndex_Callback(QSqlTableModel_SenderSignalIndex_Callback cb) { qsqltablemodel_sendersignalindex_callback = cb; }
    inline void setQSqlTableModel_Receivers_Callback(QSqlTableModel_Receivers_Callback cb) { qsqltablemodel_receivers_callback = cb; }
    inline void setQSqlTableModel_IsSignalConnected_Callback(QSqlTableModel_IsSignalConnected_Callback cb) { qsqltablemodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSqlTableModel_Metacall_IsBase(bool value) const { qsqltablemodel_metacall_isbase = value; }
    inline void setQSqlTableModel_SetTable_IsBase(bool value) const { qsqltablemodel_settable_isbase = value; }
    inline void setQSqlTableModel_Flags_IsBase(bool value) const { qsqltablemodel_flags_isbase = value; }
    inline void setQSqlTableModel_Data_IsBase(bool value) const { qsqltablemodel_data_isbase = value; }
    inline void setQSqlTableModel_SetData_IsBase(bool value) const { qsqltablemodel_setdata_isbase = value; }
    inline void setQSqlTableModel_ClearItemData_IsBase(bool value) const { qsqltablemodel_clearitemdata_isbase = value; }
    inline void setQSqlTableModel_HeaderData_IsBase(bool value) const { qsqltablemodel_headerdata_isbase = value; }
    inline void setQSqlTableModel_Clear_IsBase(bool value) const { qsqltablemodel_clear_isbase = value; }
    inline void setQSqlTableModel_SetEditStrategy_IsBase(bool value) const { qsqltablemodel_seteditstrategy_isbase = value; }
    inline void setQSqlTableModel_Sort_IsBase(bool value) const { qsqltablemodel_sort_isbase = value; }
    inline void setQSqlTableModel_SetSort_IsBase(bool value) const { qsqltablemodel_setsort_isbase = value; }
    inline void setQSqlTableModel_SetFilter_IsBase(bool value) const { qsqltablemodel_setfilter_isbase = value; }
    inline void setQSqlTableModel_RowCount_IsBase(bool value) const { qsqltablemodel_rowcount_isbase = value; }
    inline void setQSqlTableModel_RemoveColumns_IsBase(bool value) const { qsqltablemodel_removecolumns_isbase = value; }
    inline void setQSqlTableModel_RemoveRows_IsBase(bool value) const { qsqltablemodel_removerows_isbase = value; }
    inline void setQSqlTableModel_InsertRows_IsBase(bool value) const { qsqltablemodel_insertrows_isbase = value; }
    inline void setQSqlTableModel_RevertRow_IsBase(bool value) const { qsqltablemodel_revertrow_isbase = value; }
    inline void setQSqlTableModel_Select_IsBase(bool value) const { qsqltablemodel_select_isbase = value; }
    inline void setQSqlTableModel_SelectRow_IsBase(bool value) const { qsqltablemodel_selectrow_isbase = value; }
    inline void setQSqlTableModel_Submit_IsBase(bool value) const { qsqltablemodel_submit_isbase = value; }
    inline void setQSqlTableModel_Revert_IsBase(bool value) const { qsqltablemodel_revert_isbase = value; }
    inline void setQSqlTableModel_UpdateRowInTable_IsBase(bool value) const { qsqltablemodel_updaterowintable_isbase = value; }
    inline void setQSqlTableModel_InsertRowIntoTable_IsBase(bool value) const { qsqltablemodel_insertrowintotable_isbase = value; }
    inline void setQSqlTableModel_DeleteRowFromTable_IsBase(bool value) const { qsqltablemodel_deleterowfromtable_isbase = value; }
    inline void setQSqlTableModel_OrderByClause_IsBase(bool value) const { qsqltablemodel_orderbyclause_isbase = value; }
    inline void setQSqlTableModel_SelectStatement_IsBase(bool value) const { qsqltablemodel_selectstatement_isbase = value; }
    inline void setQSqlTableModel_IndexInQuery_IsBase(bool value) const { qsqltablemodel_indexinquery_isbase = value; }
    inline void setQSqlTableModel_ColumnCount_IsBase(bool value) const { qsqltablemodel_columncount_isbase = value; }
    inline void setQSqlTableModel_SetHeaderData_IsBase(bool value) const { qsqltablemodel_setheaderdata_isbase = value; }
    inline void setQSqlTableModel_InsertColumns_IsBase(bool value) const { qsqltablemodel_insertcolumns_isbase = value; }
    inline void setQSqlTableModel_FetchMore_IsBase(bool value) const { qsqltablemodel_fetchmore_isbase = value; }
    inline void setQSqlTableModel_CanFetchMore_IsBase(bool value) const { qsqltablemodel_canfetchmore_isbase = value; }
    inline void setQSqlTableModel_RoleNames_IsBase(bool value) const { qsqltablemodel_rolenames_isbase = value; }
    inline void setQSqlTableModel_QueryChange_IsBase(bool value) const { qsqltablemodel_querychange_isbase = value; }
    inline void setQSqlTableModel_Index_IsBase(bool value) const { qsqltablemodel_index_isbase = value; }
    inline void setQSqlTableModel_Sibling_IsBase(bool value) const { qsqltablemodel_sibling_isbase = value; }
    inline void setQSqlTableModel_DropMimeData_IsBase(bool value) const { qsqltablemodel_dropmimedata_isbase = value; }
    inline void setQSqlTableModel_ItemData_IsBase(bool value) const { qsqltablemodel_itemdata_isbase = value; }
    inline void setQSqlTableModel_SetItemData_IsBase(bool value) const { qsqltablemodel_setitemdata_isbase = value; }
    inline void setQSqlTableModel_MimeTypes_IsBase(bool value) const { qsqltablemodel_mimetypes_isbase = value; }
    inline void setQSqlTableModel_MimeData_IsBase(bool value) const { qsqltablemodel_mimedata_isbase = value; }
    inline void setQSqlTableModel_CanDropMimeData_IsBase(bool value) const { qsqltablemodel_candropmimedata_isbase = value; }
    inline void setQSqlTableModel_SupportedDropActions_IsBase(bool value) const { qsqltablemodel_supporteddropactions_isbase = value; }
    inline void setQSqlTableModel_SupportedDragActions_IsBase(bool value) const { qsqltablemodel_supporteddragactions_isbase = value; }
    inline void setQSqlTableModel_MoveRows_IsBase(bool value) const { qsqltablemodel_moverows_isbase = value; }
    inline void setQSqlTableModel_MoveColumns_IsBase(bool value) const { qsqltablemodel_movecolumns_isbase = value; }
    inline void setQSqlTableModel_Buddy_IsBase(bool value) const { qsqltablemodel_buddy_isbase = value; }
    inline void setQSqlTableModel_Match_IsBase(bool value) const { qsqltablemodel_match_isbase = value; }
    inline void setQSqlTableModel_Span_IsBase(bool value) const { qsqltablemodel_span_isbase = value; }
    inline void setQSqlTableModel_MultiData_IsBase(bool value) const { qsqltablemodel_multidata_isbase = value; }
    inline void setQSqlTableModel_ResetInternalData_IsBase(bool value) const { qsqltablemodel_resetinternaldata_isbase = value; }
    inline void setQSqlTableModel_Event_IsBase(bool value) const { qsqltablemodel_event_isbase = value; }
    inline void setQSqlTableModel_EventFilter_IsBase(bool value) const { qsqltablemodel_eventfilter_isbase = value; }
    inline void setQSqlTableModel_TimerEvent_IsBase(bool value) const { qsqltablemodel_timerevent_isbase = value; }
    inline void setQSqlTableModel_ChildEvent_IsBase(bool value) const { qsqltablemodel_childevent_isbase = value; }
    inline void setQSqlTableModel_CustomEvent_IsBase(bool value) const { qsqltablemodel_customevent_isbase = value; }
    inline void setQSqlTableModel_ConnectNotify_IsBase(bool value) const { qsqltablemodel_connectnotify_isbase = value; }
    inline void setQSqlTableModel_DisconnectNotify_IsBase(bool value) const { qsqltablemodel_disconnectnotify_isbase = value; }
    inline void setQSqlTableModel_SetPrimaryKey_IsBase(bool value) const { qsqltablemodel_setprimarykey_isbase = value; }
    inline void setQSqlTableModel_PrimaryValues_IsBase(bool value) const { qsqltablemodel_primaryvalues_isbase = value; }
    inline void setQSqlTableModel_BeginInsertRows_IsBase(bool value) const { qsqltablemodel_begininsertrows_isbase = value; }
    inline void setQSqlTableModel_EndInsertRows_IsBase(bool value) const { qsqltablemodel_endinsertrows_isbase = value; }
    inline void setQSqlTableModel_BeginRemoveRows_IsBase(bool value) const { qsqltablemodel_beginremoverows_isbase = value; }
    inline void setQSqlTableModel_EndRemoveRows_IsBase(bool value) const { qsqltablemodel_endremoverows_isbase = value; }
    inline void setQSqlTableModel_BeginInsertColumns_IsBase(bool value) const { qsqltablemodel_begininsertcolumns_isbase = value; }
    inline void setQSqlTableModel_EndInsertColumns_IsBase(bool value) const { qsqltablemodel_endinsertcolumns_isbase = value; }
    inline void setQSqlTableModel_BeginRemoveColumns_IsBase(bool value) const { qsqltablemodel_beginremovecolumns_isbase = value; }
    inline void setQSqlTableModel_EndRemoveColumns_IsBase(bool value) const { qsqltablemodel_endremovecolumns_isbase = value; }
    inline void setQSqlTableModel_BeginResetModel_IsBase(bool value) const { qsqltablemodel_beginresetmodel_isbase = value; }
    inline void setQSqlTableModel_EndResetModel_IsBase(bool value) const { qsqltablemodel_endresetmodel_isbase = value; }
    inline void setQSqlTableModel_SetLastError_IsBase(bool value) const { qsqltablemodel_setlasterror_isbase = value; }
    inline void setQSqlTableModel_CreateIndex_IsBase(bool value) const { qsqltablemodel_createindex_isbase = value; }
    inline void setQSqlTableModel_EncodeData_IsBase(bool value) const { qsqltablemodel_encodedata_isbase = value; }
    inline void setQSqlTableModel_DecodeData_IsBase(bool value) const { qsqltablemodel_decodedata_isbase = value; }
    inline void setQSqlTableModel_BeginMoveRows_IsBase(bool value) const { qsqltablemodel_beginmoverows_isbase = value; }
    inline void setQSqlTableModel_EndMoveRows_IsBase(bool value) const { qsqltablemodel_endmoverows_isbase = value; }
    inline void setQSqlTableModel_BeginMoveColumns_IsBase(bool value) const { qsqltablemodel_beginmovecolumns_isbase = value; }
    inline void setQSqlTableModel_EndMoveColumns_IsBase(bool value) const { qsqltablemodel_endmovecolumns_isbase = value; }
    inline void setQSqlTableModel_ChangePersistentIndex_IsBase(bool value) const { qsqltablemodel_changepersistentindex_isbase = value; }
    inline void setQSqlTableModel_ChangePersistentIndexList_IsBase(bool value) const { qsqltablemodel_changepersistentindexlist_isbase = value; }
    inline void setQSqlTableModel_PersistentIndexList_IsBase(bool value) const { qsqltablemodel_persistentindexlist_isbase = value; }
    inline void setQSqlTableModel_Sender_IsBase(bool value) const { qsqltablemodel_sender_isbase = value; }
    inline void setQSqlTableModel_SenderSignalIndex_IsBase(bool value) const { qsqltablemodel_sendersignalindex_isbase = value; }
    inline void setQSqlTableModel_Receivers_IsBase(bool value) const { qsqltablemodel_receivers_isbase = value; }
    inline void setQSqlTableModel_IsSignalConnected_IsBase(bool value) const { qsqltablemodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqltablemodel_metacall_isbase) {
            qsqltablemodel_metacall_isbase = false;
            return QSqlTableModel::qt_metacall(param1, param2, param3);
        } else if (qsqltablemodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsqltablemodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlTableModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTable(const QString& tableName) override {
        if (qsqltablemodel_settable_isbase) {
            qsqltablemodel_settable_isbase = false;
            QSqlTableModel::setTable(tableName);
        } else if (qsqltablemodel_settable_callback != nullptr) {
            const QString tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            libqt_string tableName_str;
            tableName_str.len = tableName_b.length();
            tableName_str.data = static_cast<const char*>(malloc(tableName_str.len + 1));
            memcpy((void*)tableName_str.data, tableName_b.data(), tableName_str.len);
            ((char*)tableName_str.data)[tableName_str.len] = '\0';
            libqt_string cbval1 = tableName_str;

            qsqltablemodel_settable_callback(this, cbval1);
        } else {
            QSqlTableModel::setTable(tableName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqltablemodel_flags_isbase) {
            qsqltablemodel_flags_isbase = false;
            return QSqlTableModel::flags(index);
        } else if (qsqltablemodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qsqltablemodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QSqlTableModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& idx, int role) const override {
        if (qsqltablemodel_data_isbase) {
            qsqltablemodel_data_isbase = false;
            return QSqlTableModel::data(idx, role);
        } else if (qsqltablemodel_data_callback != nullptr) {
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&idx_ret);
            int cbval2 = role;

            QVariant* callback_ret = qsqltablemodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSqlTableModel::data(idx, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsqltablemodel_setdata_isbase) {
            qsqltablemodel_setdata_isbase = false;
            return QSqlTableModel::setData(index, value, role);
        } else if (qsqltablemodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qsqltablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlTableModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqltablemodel_clearitemdata_isbase) {
            qsqltablemodel_clearitemdata_isbase = false;
            return QSqlTableModel::clearItemData(index);
        } else if (qsqltablemodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qsqltablemodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqltablemodel_headerdata_isbase) {
            qsqltablemodel_headerdata_isbase = false;
            return QSqlTableModel::headerData(section, orientation, role);
        } else if (qsqltablemodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qsqltablemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlTableModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqltablemodel_clear_isbase) {
            qsqltablemodel_clear_isbase = false;
            QSqlTableModel::clear();
        } else if (qsqltablemodel_clear_callback != nullptr) {
            qsqltablemodel_clear_callback();
        } else {
            QSqlTableModel::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditStrategy(QSqlTableModel::EditStrategy strategy) override {
        if (qsqltablemodel_seteditstrategy_isbase) {
            qsqltablemodel_seteditstrategy_isbase = false;
            QSqlTableModel::setEditStrategy(strategy);
        } else if (qsqltablemodel_seteditstrategy_callback != nullptr) {
            int cbval1 = static_cast<int>(strategy);

            qsqltablemodel_seteditstrategy_callback(this, cbval1);
        } else {
            QSqlTableModel::setEditStrategy(strategy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqltablemodel_sort_isbase) {
            qsqltablemodel_sort_isbase = false;
            QSqlTableModel::sort(column, order);
        } else if (qsqltablemodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qsqltablemodel_sort_callback(this, cbval1, cbval2);
        } else {
            QSqlTableModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSort(int column, Qt::SortOrder order) override {
        if (qsqltablemodel_setsort_isbase) {
            qsqltablemodel_setsort_isbase = false;
            QSqlTableModel::setSort(column, order);
        } else if (qsqltablemodel_setsort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qsqltablemodel_setsort_callback(this, cbval1, cbval2);
        } else {
            QSqlTableModel::setSort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFilter(const QString& filter) override {
        if (qsqltablemodel_setfilter_isbase) {
            qsqltablemodel_setfilter_isbase = false;
            QSqlTableModel::setFilter(filter);
        } else if (qsqltablemodel_setfilter_callback != nullptr) {
            const QString filter_ret = filter;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray filter_b = filter_ret.toUtf8();
            libqt_string filter_str;
            filter_str.len = filter_b.length();
            filter_str.data = static_cast<const char*>(malloc(filter_str.len + 1));
            memcpy((void*)filter_str.data, filter_b.data(), filter_str.len);
            ((char*)filter_str.data)[filter_str.len] = '\0';
            libqt_string cbval1 = filter_str;

            qsqltablemodel_setfilter_callback(this, cbval1);
        } else {
            QSqlTableModel::setFilter(filter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqltablemodel_rowcount_isbase) {
            qsqltablemodel_rowcount_isbase = false;
            return QSqlTableModel::rowCount(parent);
        } else if (qsqltablemodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsqltablemodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlTableModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_removecolumns_isbase) {
            qsqltablemodel_removecolumns_isbase = false;
            return QSqlTableModel::removeColumns(column, count, parent);
        } else if (qsqltablemodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlTableModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_removerows_isbase) {
            qsqltablemodel_removerows_isbase = false;
            return QSqlTableModel::removeRows(row, count, parent);
        } else if (qsqltablemodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlTableModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_insertrows_isbase) {
            qsqltablemodel_insertrows_isbase = false;
            return QSqlTableModel::insertRows(row, count, parent);
        } else if (qsqltablemodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlTableModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revertRow(int row) override {
        if (qsqltablemodel_revertrow_isbase) {
            qsqltablemodel_revertrow_isbase = false;
            QSqlTableModel::revertRow(row);
        } else if (qsqltablemodel_revertrow_callback != nullptr) {
            int cbval1 = row;

            qsqltablemodel_revertrow_callback(this, cbval1);
        } else {
            QSqlTableModel::revertRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool select() override {
        if (qsqltablemodel_select_isbase) {
            qsqltablemodel_select_isbase = false;
            return QSqlTableModel::select();
        } else if (qsqltablemodel_select_callback != nullptr) {
            bool callback_ret = qsqltablemodel_select_callback();
            return callback_ret;
        } else {
            return QSqlTableModel::select();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool selectRow(int row) override {
        if (qsqltablemodel_selectrow_isbase) {
            qsqltablemodel_selectrow_isbase = false;
            return QSqlTableModel::selectRow(row);
        } else if (qsqltablemodel_selectrow_callback != nullptr) {
            int cbval1 = row;

            bool callback_ret = qsqltablemodel_selectrow_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::selectRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqltablemodel_submit_isbase) {
            qsqltablemodel_submit_isbase = false;
            return QSqlTableModel::submit();
        } else if (qsqltablemodel_submit_callback != nullptr) {
            bool callback_ret = qsqltablemodel_submit_callback();
            return callback_ret;
        } else {
            return QSqlTableModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqltablemodel_revert_isbase) {
            qsqltablemodel_revert_isbase = false;
            QSqlTableModel::revert();
        } else if (qsqltablemodel_revert_callback != nullptr) {
            qsqltablemodel_revert_callback();
        } else {
            QSqlTableModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
        if (qsqltablemodel_updaterowintable_isbase) {
            qsqltablemodel_updaterowintable_isbase = false;
            return QSqlTableModel::updateRowInTable(row, values);
        } else if (qsqltablemodel_updaterowintable_callback != nullptr) {
            int cbval1 = row;
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval2 = const_cast<QSqlRecord*>(&values_ret);

            bool callback_ret = qsqltablemodel_updaterowintable_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlTableModel::updateRowInTable(row, values);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRowIntoTable(const QSqlRecord& values) override {
        if (qsqltablemodel_insertrowintotable_isbase) {
            qsqltablemodel_insertrowintotable_isbase = false;
            return QSqlTableModel::insertRowIntoTable(values);
        } else if (qsqltablemodel_insertrowintotable_callback != nullptr) {
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval1 = const_cast<QSqlRecord*>(&values_ret);

            bool callback_ret = qsqltablemodel_insertrowintotable_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::insertRowIntoTable(values);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool deleteRowFromTable(int row) override {
        if (qsqltablemodel_deleterowfromtable_isbase) {
            qsqltablemodel_deleterowfromtable_isbase = false;
            return QSqlTableModel::deleteRowFromTable(row);
        } else if (qsqltablemodel_deleterowfromtable_callback != nullptr) {
            int cbval1 = row;

            bool callback_ret = qsqltablemodel_deleterowfromtable_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::deleteRowFromTable(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString orderByClause() const override {
        if (qsqltablemodel_orderbyclause_isbase) {
            qsqltablemodel_orderbyclause_isbase = false;
            return QSqlTableModel::orderByClause();
        } else if (qsqltablemodel_orderbyclause_callback != nullptr) {
            const char* callback_ret = qsqltablemodel_orderbyclause_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QSqlTableModel::orderByClause();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectStatement() const override {
        if (qsqltablemodel_selectstatement_isbase) {
            qsqltablemodel_selectstatement_isbase = false;
            return QSqlTableModel::selectStatement();
        } else if (qsqltablemodel_selectstatement_callback != nullptr) {
            const char* callback_ret = qsqltablemodel_selectstatement_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QSqlTableModel::selectStatement();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqltablemodel_indexinquery_isbase) {
            qsqltablemodel_indexinquery_isbase = false;
            return QSqlTableModel::indexInQuery(item);
        } else if (qsqltablemodel_indexinquery_callback != nullptr) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);

            QModelIndex* callback_ret = qsqltablemodel_indexinquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlTableModel::indexInQuery(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqltablemodel_columncount_isbase) {
            qsqltablemodel_columncount_isbase = false;
            return QSqlTableModel::columnCount(parent);
        } else if (qsqltablemodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsqltablemodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlTableModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqltablemodel_setheaderdata_isbase) {
            qsqltablemodel_setheaderdata_isbase = false;
            return QSqlTableModel::setHeaderData(section, orientation, value, role);
        } else if (qsqltablemodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qsqltablemodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSqlTableModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_insertcolumns_isbase) {
            qsqltablemodel_insertcolumns_isbase = false;
            return QSqlTableModel::insertColumns(column, count, parent);
        } else if (qsqltablemodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSqlTableModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqltablemodel_fetchmore_isbase) {
            qsqltablemodel_fetchmore_isbase = false;
            QSqlTableModel::fetchMore(parent);
        } else if (qsqltablemodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qsqltablemodel_fetchmore_callback(this, cbval1);
        } else {
            QSqlTableModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqltablemodel_canfetchmore_isbase) {
            qsqltablemodel_canfetchmore_isbase = false;
            return QSqlTableModel::canFetchMore(parent);
        } else if (qsqltablemodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqltablemodel_rolenames_isbase) {
            qsqltablemodel_rolenames_isbase = false;
            return QSqlTableModel::roleNames();
        } else if (qsqltablemodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qsqltablemodel_rolenames_callback();
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
            return QSqlTableModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqltablemodel_querychange_isbase) {
            qsqltablemodel_querychange_isbase = false;
            QSqlTableModel::queryChange();
        } else if (qsqltablemodel_querychange_callback != nullptr) {
            qsqltablemodel_querychange_callback();
        } else {
            QSqlTableModel::queryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqltablemodel_index_isbase) {
            qsqltablemodel_index_isbase = false;
            return QSqlTableModel::index(row, column, parent);
        } else if (qsqltablemodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qsqltablemodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlTableModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqltablemodel_sibling_isbase) {
            qsqltablemodel_sibling_isbase = false;
            return QSqlTableModel::sibling(row, column, idx);
        } else if (qsqltablemodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qsqltablemodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSqlTableModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqltablemodel_dropmimedata_isbase) {
            qsqltablemodel_dropmimedata_isbase = false;
            return QSqlTableModel::dropMimeData(data, action, row, column, parent);
        } else if (qsqltablemodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlTableModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqltablemodel_itemdata_isbase) {
            qsqltablemodel_itemdata_isbase = false;
            return QSqlTableModel::itemData(index);
        } else if (qsqltablemodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qsqltablemodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QSqlTableModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqltablemodel_setitemdata_isbase) {
            qsqltablemodel_setitemdata_isbase = false;
            return QSqlTableModel::setItemData(index, roles);
        } else if (qsqltablemodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qsqltablemodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlTableModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqltablemodel_mimetypes_isbase) {
            qsqltablemodel_mimetypes_isbase = false;
            return QSqlTableModel::mimeTypes();
        } else if (qsqltablemodel_mimetypes_callback != nullptr) {
            const char** callback_ret = qsqltablemodel_mimetypes_callback();
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
            return QSqlTableModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqltablemodel_mimedata_isbase) {
            qsqltablemodel_mimedata_isbase = false;
            return QSqlTableModel::mimeData(indexes);
        } else if (qsqltablemodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qsqltablemodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqltablemodel_candropmimedata_isbase) {
            qsqltablemodel_candropmimedata_isbase = false;
            return QSqlTableModel::canDropMimeData(data, action, row, column, parent);
        } else if (qsqltablemodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsqltablemodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlTableModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqltablemodel_supporteddropactions_isbase) {
            qsqltablemodel_supporteddropactions_isbase = false;
            return QSqlTableModel::supportedDropActions();
        } else if (qsqltablemodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qsqltablemodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSqlTableModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqltablemodel_supporteddragactions_isbase) {
            qsqltablemodel_supporteddragactions_isbase = false;
            return QSqlTableModel::supportedDragActions();
        } else if (qsqltablemodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qsqltablemodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSqlTableModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqltablemodel_moverows_isbase) {
            qsqltablemodel_moverows_isbase = false;
            return QSqlTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qsqltablemodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsqltablemodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqltablemodel_movecolumns_isbase) {
            qsqltablemodel_movecolumns_isbase = false;
            return QSqlTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qsqltablemodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsqltablemodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqltablemodel_buddy_isbase) {
            qsqltablemodel_buddy_isbase = false;
            return QSqlTableModel::buddy(index);
        } else if (qsqltablemodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qsqltablemodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlTableModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqltablemodel_match_isbase) {
            qsqltablemodel_match_isbase = false;
            return QSqlTableModel::match(start, role, value, hits, flags);
        } else if (qsqltablemodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = qsqltablemodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QSqlTableModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqltablemodel_span_isbase) {
            qsqltablemodel_span_isbase = false;
            return QSqlTableModel::span(index);
        } else if (qsqltablemodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qsqltablemodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlTableModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqltablemodel_multidata_isbase) {
            qsqltablemodel_multidata_isbase = false;
            QSqlTableModel::multiData(index, roleDataSpan);
        } else if (qsqltablemodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qsqltablemodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QSqlTableModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqltablemodel_resetinternaldata_isbase) {
            qsqltablemodel_resetinternaldata_isbase = false;
            QSqlTableModel::resetInternalData();
        } else if (qsqltablemodel_resetinternaldata_callback != nullptr) {
            qsqltablemodel_resetinternaldata_callback();
        } else {
            QSqlTableModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqltablemodel_event_isbase) {
            qsqltablemodel_event_isbase = false;
            return QSqlTableModel::event(event);
        } else if (qsqltablemodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsqltablemodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqltablemodel_eventfilter_isbase) {
            qsqltablemodel_eventfilter_isbase = false;
            return QSqlTableModel::eventFilter(watched, event);
        } else if (qsqltablemodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsqltablemodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlTableModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqltablemodel_timerevent_isbase) {
            qsqltablemodel_timerevent_isbase = false;
            QSqlTableModel::timerEvent(event);
        } else if (qsqltablemodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsqltablemodel_timerevent_callback(this, cbval1);
        } else {
            QSqlTableModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqltablemodel_childevent_isbase) {
            qsqltablemodel_childevent_isbase = false;
            QSqlTableModel::childEvent(event);
        } else if (qsqltablemodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsqltablemodel_childevent_callback(this, cbval1);
        } else {
            QSqlTableModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqltablemodel_customevent_isbase) {
            qsqltablemodel_customevent_isbase = false;
            QSqlTableModel::customEvent(event);
        } else if (qsqltablemodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsqltablemodel_customevent_callback(this, cbval1);
        } else {
            QSqlTableModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqltablemodel_connectnotify_isbase) {
            qsqltablemodel_connectnotify_isbase = false;
            QSqlTableModel::connectNotify(signal);
        } else if (qsqltablemodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqltablemodel_connectnotify_callback(this, cbval1);
        } else {
            QSqlTableModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqltablemodel_disconnectnotify_isbase) {
            qsqltablemodel_disconnectnotify_isbase = false;
            QSqlTableModel::disconnectNotify(signal);
        } else if (qsqltablemodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqltablemodel_disconnectnotify_callback(this, cbval1);
        } else {
            QSqlTableModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPrimaryKey(const QSqlIndex& key) {
        if (qsqltablemodel_setprimarykey_isbase) {
            qsqltablemodel_setprimarykey_isbase = false;
            QSqlTableModel::setPrimaryKey(key);
        } else if (qsqltablemodel_setprimarykey_callback != nullptr) {
            const QSqlIndex& key_ret = key;
            // Cast returned reference into pointer
            QSqlIndex* cbval1 = const_cast<QSqlIndex*>(&key_ret);

            qsqltablemodel_setprimarykey_callback(this, cbval1);
        } else {
            QSqlTableModel::setPrimaryKey(key);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSqlRecord primaryValues(int row) const {
        if (qsqltablemodel_primaryvalues_isbase) {
            qsqltablemodel_primaryvalues_isbase = false;
            return QSqlTableModel::primaryValues(row);
        } else if (qsqltablemodel_primaryvalues_callback != nullptr) {
            int cbval1 = row;

            QSqlRecord* callback_ret = qsqltablemodel_primaryvalues_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlTableModel::primaryValues(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qsqltablemodel_begininsertrows_isbase) {
            qsqltablemodel_begininsertrows_isbase = false;
            QSqlTableModel::beginInsertRows(parent, first, last);
        } else if (qsqltablemodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqltablemodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlTableModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qsqltablemodel_endinsertrows_isbase) {
            qsqltablemodel_endinsertrows_isbase = false;
            QSqlTableModel::endInsertRows();
        } else if (qsqltablemodel_endinsertrows_callback != nullptr) {
            qsqltablemodel_endinsertrows_callback();
        } else {
            QSqlTableModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qsqltablemodel_beginremoverows_isbase) {
            qsqltablemodel_beginremoverows_isbase = false;
            QSqlTableModel::beginRemoveRows(parent, first, last);
        } else if (qsqltablemodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqltablemodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlTableModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qsqltablemodel_endremoverows_isbase) {
            qsqltablemodel_endremoverows_isbase = false;
            QSqlTableModel::endRemoveRows();
        } else if (qsqltablemodel_endremoverows_callback != nullptr) {
            qsqltablemodel_endremoverows_callback();
        } else {
            QSqlTableModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qsqltablemodel_begininsertcolumns_isbase) {
            qsqltablemodel_begininsertcolumns_isbase = false;
            QSqlTableModel::beginInsertColumns(parent, first, last);
        } else if (qsqltablemodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqltablemodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlTableModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qsqltablemodel_endinsertcolumns_isbase) {
            qsqltablemodel_endinsertcolumns_isbase = false;
            QSqlTableModel::endInsertColumns();
        } else if (qsqltablemodel_endinsertcolumns_callback != nullptr) {
            qsqltablemodel_endinsertcolumns_callback();
        } else {
            QSqlTableModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qsqltablemodel_beginremovecolumns_isbase) {
            qsqltablemodel_beginremovecolumns_isbase = false;
            QSqlTableModel::beginRemoveColumns(parent, first, last);
        } else if (qsqltablemodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsqltablemodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSqlTableModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qsqltablemodel_endremovecolumns_isbase) {
            qsqltablemodel_endremovecolumns_isbase = false;
            QSqlTableModel::endRemoveColumns();
        } else if (qsqltablemodel_endremovecolumns_callback != nullptr) {
            qsqltablemodel_endremovecolumns_callback();
        } else {
            QSqlTableModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qsqltablemodel_beginresetmodel_isbase) {
            qsqltablemodel_beginresetmodel_isbase = false;
            QSqlTableModel::beginResetModel();
        } else if (qsqltablemodel_beginresetmodel_callback != nullptr) {
            qsqltablemodel_beginresetmodel_callback();
        } else {
            QSqlTableModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qsqltablemodel_endresetmodel_isbase) {
            qsqltablemodel_endresetmodel_isbase = false;
            QSqlTableModel::endResetModel();
        } else if (qsqltablemodel_endresetmodel_callback != nullptr) {
            qsqltablemodel_endresetmodel_callback();
        } else {
            QSqlTableModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastError(const QSqlError& errorVal) {
        if (qsqltablemodel_setlasterror_isbase) {
            qsqltablemodel_setlasterror_isbase = false;
            QSqlTableModel::setLastError(errorVal);
        } else if (qsqltablemodel_setlasterror_callback != nullptr) {
            const QSqlError& errorVal_ret = errorVal;
            // Cast returned reference into pointer
            QSqlError* cbval1 = const_cast<QSqlError*>(&errorVal_ret);

            qsqltablemodel_setlasterror_callback(this, cbval1);
        } else {
            QSqlTableModel::setLastError(errorVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qsqltablemodel_createindex_isbase) {
            qsqltablemodel_createindex_isbase = false;
            return QSqlTableModel::createIndex(row, column);
        } else if (qsqltablemodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qsqltablemodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSqlTableModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qsqltablemodel_encodedata_isbase) {
            qsqltablemodel_encodedata_isbase = false;
            QSqlTableModel::encodeData(indexes, stream);
        } else if (qsqltablemodel_encodedata_callback != nullptr) {
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

            qsqltablemodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QSqlTableModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qsqltablemodel_decodedata_isbase) {
            qsqltablemodel_decodedata_isbase = false;
            return QSqlTableModel::decodeData(row, column, parent, stream);
        } else if (qsqltablemodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qsqltablemodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSqlTableModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qsqltablemodel_beginmoverows_isbase) {
            qsqltablemodel_beginmoverows_isbase = false;
            return QSqlTableModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qsqltablemodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qsqltablemodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlTableModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qsqltablemodel_endmoverows_isbase) {
            qsqltablemodel_endmoverows_isbase = false;
            QSqlTableModel::endMoveRows();
        } else if (qsqltablemodel_endmoverows_callback != nullptr) {
            qsqltablemodel_endmoverows_callback();
        } else {
            QSqlTableModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qsqltablemodel_beginmovecolumns_isbase) {
            qsqltablemodel_beginmovecolumns_isbase = false;
            return QSqlTableModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qsqltablemodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qsqltablemodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSqlTableModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qsqltablemodel_endmovecolumns_isbase) {
            qsqltablemodel_endmovecolumns_isbase = false;
            QSqlTableModel::endMoveColumns();
        } else if (qsqltablemodel_endmovecolumns_callback != nullptr) {
            qsqltablemodel_endmovecolumns_callback();
        } else {
            QSqlTableModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qsqltablemodel_changepersistentindex_isbase) {
            qsqltablemodel_changepersistentindex_isbase = false;
            QSqlTableModel::changePersistentIndex(from, to);
        } else if (qsqltablemodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qsqltablemodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QSqlTableModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qsqltablemodel_changepersistentindexlist_isbase) {
            qsqltablemodel_changepersistentindexlist_isbase = false;
            QSqlTableModel::changePersistentIndexList(from, to);
        } else if (qsqltablemodel_changepersistentindexlist_callback != nullptr) {
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

            qsqltablemodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QSqlTableModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qsqltablemodel_persistentindexlist_isbase) {
            qsqltablemodel_persistentindexlist_isbase = false;
            return QSqlTableModel::persistentIndexList();
        } else if (qsqltablemodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = qsqltablemodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QSqlTableModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsqltablemodel_sender_isbase) {
            qsqltablemodel_sender_isbase = false;
            return QSqlTableModel::sender();
        } else if (qsqltablemodel_sender_callback != nullptr) {
            QObject* callback_ret = qsqltablemodel_sender_callback();
            return callback_ret;
        } else {
            return QSqlTableModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsqltablemodel_sendersignalindex_isbase) {
            qsqltablemodel_sendersignalindex_isbase = false;
            return QSqlTableModel::senderSignalIndex();
        } else if (qsqltablemodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qsqltablemodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSqlTableModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsqltablemodel_receivers_isbase) {
            qsqltablemodel_receivers_isbase = false;
            return QSqlTableModel::receivers(signal);
        } else if (qsqltablemodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsqltablemodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlTableModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsqltablemodel_issignalconnected_isbase) {
            qsqltablemodel_issignalconnected_isbase = false;
            return QSqlTableModel::isSignalConnected(signal);
        } else if (qsqltablemodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsqltablemodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlTableModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QSqlTableModel_UpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
    friend bool QSqlTableModel_QBaseUpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
    friend bool QSqlTableModel_InsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
    friend bool QSqlTableModel_QBaseInsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
    friend bool QSqlTableModel_DeleteRowFromTable(QSqlTableModel* self, int row);
    friend bool QSqlTableModel_QBaseDeleteRowFromTable(QSqlTableModel* self, int row);
    friend libqt_string QSqlTableModel_OrderByClause(const QSqlTableModel* self);
    friend libqt_string QSqlTableModel_QBaseOrderByClause(const QSqlTableModel* self);
    friend libqt_string QSqlTableModel_SelectStatement(const QSqlTableModel* self);
    friend libqt_string QSqlTableModel_QBaseSelectStatement(const QSqlTableModel* self);
    friend QModelIndex* QSqlTableModel_IndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
    friend QModelIndex* QSqlTableModel_QBaseIndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
    friend void QSqlTableModel_QueryChange(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseQueryChange(QSqlTableModel* self);
    friend void QSqlTableModel_ResetInternalData(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseResetInternalData(QSqlTableModel* self);
    friend void QSqlTableModel_TimerEvent(QSqlTableModel* self, QTimerEvent* event);
    friend void QSqlTableModel_QBaseTimerEvent(QSqlTableModel* self, QTimerEvent* event);
    friend void QSqlTableModel_ChildEvent(QSqlTableModel* self, QChildEvent* event);
    friend void QSqlTableModel_QBaseChildEvent(QSqlTableModel* self, QChildEvent* event);
    friend void QSqlTableModel_CustomEvent(QSqlTableModel* self, QEvent* event);
    friend void QSqlTableModel_QBaseCustomEvent(QSqlTableModel* self, QEvent* event);
    friend void QSqlTableModel_ConnectNotify(QSqlTableModel* self, const QMetaMethod* signal);
    friend void QSqlTableModel_QBaseConnectNotify(QSqlTableModel* self, const QMetaMethod* signal);
    friend void QSqlTableModel_DisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal);
    friend void QSqlTableModel_QBaseDisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal);
    friend void QSqlTableModel_SetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key);
    friend void QSqlTableModel_QBaseSetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key);
    friend QSqlRecord* QSqlTableModel_PrimaryValues(const QSqlTableModel* self, int row);
    friend QSqlRecord* QSqlTableModel_QBasePrimaryValues(const QSqlTableModel* self, int row);
    friend void QSqlTableModel_BeginInsertRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_QBaseBeginInsertRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_EndInsertRows(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndInsertRows(QSqlTableModel* self);
    friend void QSqlTableModel_BeginRemoveRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_QBaseBeginRemoveRows(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_EndRemoveRows(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndRemoveRows(QSqlTableModel* self);
    friend void QSqlTableModel_BeginInsertColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_QBaseBeginInsertColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_EndInsertColumns(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndInsertColumns(QSqlTableModel* self);
    friend void QSqlTableModel_BeginRemoveColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_QBaseBeginRemoveColumns(QSqlTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QSqlTableModel_EndRemoveColumns(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndRemoveColumns(QSqlTableModel* self);
    friend void QSqlTableModel_BeginResetModel(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseBeginResetModel(QSqlTableModel* self);
    friend void QSqlTableModel_EndResetModel(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndResetModel(QSqlTableModel* self);
    friend void QSqlTableModel_SetLastError(QSqlTableModel* self, const QSqlError* errorVal);
    friend void QSqlTableModel_QBaseSetLastError(QSqlTableModel* self, const QSqlError* errorVal);
    friend QModelIndex* QSqlTableModel_CreateIndex(const QSqlTableModel* self, int row, int column);
    friend QModelIndex* QSqlTableModel_QBaseCreateIndex(const QSqlTableModel* self, int row, int column);
    friend void QSqlTableModel_EncodeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QSqlTableModel_QBaseEncodeData(const QSqlTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QSqlTableModel_DecodeData(QSqlTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlTableModel_QBaseDecodeData(QSqlTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSqlTableModel_BeginMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QSqlTableModel_QBaseBeginMoveRows(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QSqlTableModel_EndMoveRows(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndMoveRows(QSqlTableModel* self);
    friend bool QSqlTableModel_BeginMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QSqlTableModel_QBaseBeginMoveColumns(QSqlTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QSqlTableModel_EndMoveColumns(QSqlTableModel* self);
    friend void QSqlTableModel_QBaseEndMoveColumns(QSqlTableModel* self);
    friend void QSqlTableModel_ChangePersistentIndex(QSqlTableModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlTableModel_QBaseChangePersistentIndex(QSqlTableModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSqlTableModel_ChangePersistentIndexList(QSqlTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QSqlTableModel_QBaseChangePersistentIndexList(QSqlTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QSqlTableModel_PersistentIndexList(const QSqlTableModel* self);
    friend libqt_list /* of QModelIndex* */ QSqlTableModel_QBasePersistentIndexList(const QSqlTableModel* self);
    friend QObject* QSqlTableModel_Sender(const QSqlTableModel* self);
    friend QObject* QSqlTableModel_QBaseSender(const QSqlTableModel* self);
    friend int QSqlTableModel_SenderSignalIndex(const QSqlTableModel* self);
    friend int QSqlTableModel_QBaseSenderSignalIndex(const QSqlTableModel* self);
    friend int QSqlTableModel_Receivers(const QSqlTableModel* self, const char* signal);
    friend int QSqlTableModel_QBaseReceivers(const QSqlTableModel* self, const char* signal);
    friend bool QSqlTableModel_IsSignalConnected(const QSqlTableModel* self, const QMetaMethod* signal);
    friend bool QSqlTableModel_QBaseIsSignalConnected(const QSqlTableModel* self, const QMetaMethod* signal);
};

#endif
