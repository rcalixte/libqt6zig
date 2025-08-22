#pragma once
#ifndef SRCC_LIBVIRTUALQSORTFILTERPROXYMODEL_H
#define SRCC_LIBVIRTUALQSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSortFilterProxyModel so that we can call protected methods
class VirtualQSortFilterProxyModel final : public QSortFilterProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQSortFilterProxyModel = true;

    // Virtual class public types (including callbacks)
    using QSortFilterProxyModel_Metacall_Callback = int (*)(QSortFilterProxyModel*, int, int, void**);
    using QSortFilterProxyModel_SetSourceModel_Callback = void (*)(QSortFilterProxyModel*, QAbstractItemModel*);
    using QSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QSortFilterProxyModel*, QItemSelection*);
    using QSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QSortFilterProxyModel*, QItemSelection*);
    using QSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const QSortFilterProxyModel*, int, QModelIndex*);
    using QSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const QSortFilterProxyModel*, int, QModelIndex*);
    using QSortFilterProxyModel_LessThan_Callback = bool (*)(const QSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using QSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_RowCount_Callback = int (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_ColumnCount_Callback = int (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_HasChildren_Callback = bool (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Data_Callback = QVariant* (*)(const QSortFilterProxyModel*, QModelIndex*, int);
    using QSortFilterProxyModel_SetData_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, QVariant*, int);
    using QSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const QSortFilterProxyModel*, int, int, int);
    using QSortFilterProxyModel_SetHeaderData_Callback = bool (*)(QSortFilterProxyModel*, int, int, QVariant*, int);
    using QSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const QSortFilterProxyModel*, libqt_list /* of QModelIndex* */);
    using QSortFilterProxyModel_DropMimeData_Callback = bool (*)(QSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSortFilterProxyModel_InsertRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_InsertColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_RemoveRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_RemoveColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_FetchMore_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Flags_Callback = int (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Match_Callback = QModelIndex** (*)(const QSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QSortFilterProxyModel_Span_Callback = QSize* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Sort_Callback = void (*)(QSortFilterProxyModel*, int, int);
    using QSortFilterProxyModel_MimeTypes_Callback = const char** (*)();
    using QSortFilterProxyModel_SupportedDropActions_Callback = int (*)();
    using QSortFilterProxyModel_Submit_Callback = bool (*)();
    using QSortFilterProxyModel_Revert_Callback = void (*)();
    using QSortFilterProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_SetItemData_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSortFilterProxyModel_ClearItemData_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const QSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSortFilterProxyModel_SupportedDragActions_Callback = int (*)();
    using QSortFilterProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QSortFilterProxyModel_MoveRows_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSortFilterProxyModel_MoveColumns_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSortFilterProxyModel_MultiData_Callback = void (*)(const QSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSortFilterProxyModel_ResetInternalData_Callback = void (*)();
    using QSortFilterProxyModel_Event_Callback = bool (*)(QSortFilterProxyModel*, QEvent*);
    using QSortFilterProxyModel_EventFilter_Callback = bool (*)(QSortFilterProxyModel*, QObject*, QEvent*);
    using QSortFilterProxyModel_TimerEvent_Callback = void (*)(QSortFilterProxyModel*, QTimerEvent*);
    using QSortFilterProxyModel_ChildEvent_Callback = void (*)(QSortFilterProxyModel*, QChildEvent*);
    using QSortFilterProxyModel_CustomEvent_Callback = void (*)(QSortFilterProxyModel*, QEvent*);
    using QSortFilterProxyModel_ConnectNotify_Callback = void (*)(QSortFilterProxyModel*, QMetaMethod*);
    using QSortFilterProxyModel_DisconnectNotify_Callback = void (*)(QSortFilterProxyModel*, QMetaMethod*);
    using QSortFilterProxyModel_InvalidateFilter_Callback = void (*)();
    using QSortFilterProxyModel_InvalidateRowsFilter_Callback = void (*)();
    using QSortFilterProxyModel_InvalidateColumnsFilter_Callback = void (*)();
    using QSortFilterProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, void*);
    using QSortFilterProxyModel_CreateIndex_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int);
    using QSortFilterProxyModel_EncodeData_Callback = void (*)(const QSortFilterProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QSortFilterProxyModel_DecodeData_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*);
    using QSortFilterProxyModel_BeginInsertRows_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*, int, int);
    using QSortFilterProxyModel_EndInsertRows_Callback = void (*)();
    using QSortFilterProxyModel_BeginRemoveRows_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*, int, int);
    using QSortFilterProxyModel_EndRemoveRows_Callback = void (*)();
    using QSortFilterProxyModel_BeginMoveRows_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSortFilterProxyModel_EndMoveRows_Callback = void (*)();
    using QSortFilterProxyModel_BeginInsertColumns_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*, int, int);
    using QSortFilterProxyModel_EndInsertColumns_Callback = void (*)();
    using QSortFilterProxyModel_BeginRemoveColumns_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*, int, int);
    using QSortFilterProxyModel_EndRemoveColumns_Callback = void (*)();
    using QSortFilterProxyModel_BeginMoveColumns_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSortFilterProxyModel_EndMoveColumns_Callback = void (*)();
    using QSortFilterProxyModel_BeginResetModel_Callback = void (*)();
    using QSortFilterProxyModel_EndResetModel_Callback = void (*)();
    using QSortFilterProxyModel_ChangePersistentIndex_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using QSortFilterProxyModel_ChangePersistentIndexList_Callback = void (*)(QSortFilterProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QSortFilterProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using QSortFilterProxyModel_Sender_Callback = QObject* (*)();
    using QSortFilterProxyModel_SenderSignalIndex_Callback = int (*)();
    using QSortFilterProxyModel_Receivers_Callback = int (*)(const QSortFilterProxyModel*, const char*);
    using QSortFilterProxyModel_IsSignalConnected_Callback = bool (*)(const QSortFilterProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSortFilterProxyModel_Metacall_Callback qsortfilterproxymodel_metacall_callback = nullptr;
    QSortFilterProxyModel_SetSourceModel_Callback qsortfilterproxymodel_setsourcemodel_callback = nullptr;
    QSortFilterProxyModel_MapToSource_Callback qsortfilterproxymodel_maptosource_callback = nullptr;
    QSortFilterProxyModel_MapFromSource_Callback qsortfilterproxymodel_mapfromsource_callback = nullptr;
    QSortFilterProxyModel_MapSelectionToSource_Callback qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    QSortFilterProxyModel_MapSelectionFromSource_Callback qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    QSortFilterProxyModel_FilterAcceptsRow_Callback qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    QSortFilterProxyModel_FilterAcceptsColumn_Callback qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    QSortFilterProxyModel_LessThan_Callback qsortfilterproxymodel_lessthan_callback = nullptr;
    QSortFilterProxyModel_Index_Callback qsortfilterproxymodel_index_callback = nullptr;
    QSortFilterProxyModel_Parent_Callback qsortfilterproxymodel_parent_callback = nullptr;
    QSortFilterProxyModel_Sibling_Callback qsortfilterproxymodel_sibling_callback = nullptr;
    QSortFilterProxyModel_RowCount_Callback qsortfilterproxymodel_rowcount_callback = nullptr;
    QSortFilterProxyModel_ColumnCount_Callback qsortfilterproxymodel_columncount_callback = nullptr;
    QSortFilterProxyModel_HasChildren_Callback qsortfilterproxymodel_haschildren_callback = nullptr;
    QSortFilterProxyModel_Data_Callback qsortfilterproxymodel_data_callback = nullptr;
    QSortFilterProxyModel_SetData_Callback qsortfilterproxymodel_setdata_callback = nullptr;
    QSortFilterProxyModel_HeaderData_Callback qsortfilterproxymodel_headerdata_callback = nullptr;
    QSortFilterProxyModel_SetHeaderData_Callback qsortfilterproxymodel_setheaderdata_callback = nullptr;
    QSortFilterProxyModel_MimeData_Callback qsortfilterproxymodel_mimedata_callback = nullptr;
    QSortFilterProxyModel_DropMimeData_Callback qsortfilterproxymodel_dropmimedata_callback = nullptr;
    QSortFilterProxyModel_InsertRows_Callback qsortfilterproxymodel_insertrows_callback = nullptr;
    QSortFilterProxyModel_InsertColumns_Callback qsortfilterproxymodel_insertcolumns_callback = nullptr;
    QSortFilterProxyModel_RemoveRows_Callback qsortfilterproxymodel_removerows_callback = nullptr;
    QSortFilterProxyModel_RemoveColumns_Callback qsortfilterproxymodel_removecolumns_callback = nullptr;
    QSortFilterProxyModel_FetchMore_Callback qsortfilterproxymodel_fetchmore_callback = nullptr;
    QSortFilterProxyModel_CanFetchMore_Callback qsortfilterproxymodel_canfetchmore_callback = nullptr;
    QSortFilterProxyModel_Flags_Callback qsortfilterproxymodel_flags_callback = nullptr;
    QSortFilterProxyModel_Buddy_Callback qsortfilterproxymodel_buddy_callback = nullptr;
    QSortFilterProxyModel_Match_Callback qsortfilterproxymodel_match_callback = nullptr;
    QSortFilterProxyModel_Span_Callback qsortfilterproxymodel_span_callback = nullptr;
    QSortFilterProxyModel_Sort_Callback qsortfilterproxymodel_sort_callback = nullptr;
    QSortFilterProxyModel_MimeTypes_Callback qsortfilterproxymodel_mimetypes_callback = nullptr;
    QSortFilterProxyModel_SupportedDropActions_Callback qsortfilterproxymodel_supporteddropactions_callback = nullptr;
    QSortFilterProxyModel_Submit_Callback qsortfilterproxymodel_submit_callback = nullptr;
    QSortFilterProxyModel_Revert_Callback qsortfilterproxymodel_revert_callback = nullptr;
    QSortFilterProxyModel_ItemData_Callback qsortfilterproxymodel_itemdata_callback = nullptr;
    QSortFilterProxyModel_SetItemData_Callback qsortfilterproxymodel_setitemdata_callback = nullptr;
    QSortFilterProxyModel_ClearItemData_Callback qsortfilterproxymodel_clearitemdata_callback = nullptr;
    QSortFilterProxyModel_CanDropMimeData_Callback qsortfilterproxymodel_candropmimedata_callback = nullptr;
    QSortFilterProxyModel_SupportedDragActions_Callback qsortfilterproxymodel_supporteddragactions_callback = nullptr;
    QSortFilterProxyModel_RoleNames_Callback qsortfilterproxymodel_rolenames_callback = nullptr;
    QSortFilterProxyModel_MoveRows_Callback qsortfilterproxymodel_moverows_callback = nullptr;
    QSortFilterProxyModel_MoveColumns_Callback qsortfilterproxymodel_movecolumns_callback = nullptr;
    QSortFilterProxyModel_MultiData_Callback qsortfilterproxymodel_multidata_callback = nullptr;
    QSortFilterProxyModel_ResetInternalData_Callback qsortfilterproxymodel_resetinternaldata_callback = nullptr;
    QSortFilterProxyModel_Event_Callback qsortfilterproxymodel_event_callback = nullptr;
    QSortFilterProxyModel_EventFilter_Callback qsortfilterproxymodel_eventfilter_callback = nullptr;
    QSortFilterProxyModel_TimerEvent_Callback qsortfilterproxymodel_timerevent_callback = nullptr;
    QSortFilterProxyModel_ChildEvent_Callback qsortfilterproxymodel_childevent_callback = nullptr;
    QSortFilterProxyModel_CustomEvent_Callback qsortfilterproxymodel_customevent_callback = nullptr;
    QSortFilterProxyModel_ConnectNotify_Callback qsortfilterproxymodel_connectnotify_callback = nullptr;
    QSortFilterProxyModel_DisconnectNotify_Callback qsortfilterproxymodel_disconnectnotify_callback = nullptr;
    QSortFilterProxyModel_InvalidateFilter_Callback qsortfilterproxymodel_invalidatefilter_callback = nullptr;
    QSortFilterProxyModel_InvalidateRowsFilter_Callback qsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
    QSortFilterProxyModel_InvalidateColumnsFilter_Callback qsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
    QSortFilterProxyModel_CreateSourceIndex_Callback qsortfilterproxymodel_createsourceindex_callback = nullptr;
    QSortFilterProxyModel_CreateIndex_Callback qsortfilterproxymodel_createindex_callback = nullptr;
    QSortFilterProxyModel_EncodeData_Callback qsortfilterproxymodel_encodedata_callback = nullptr;
    QSortFilterProxyModel_DecodeData_Callback qsortfilterproxymodel_decodedata_callback = nullptr;
    QSortFilterProxyModel_BeginInsertRows_Callback qsortfilterproxymodel_begininsertrows_callback = nullptr;
    QSortFilterProxyModel_EndInsertRows_Callback qsortfilterproxymodel_endinsertrows_callback = nullptr;
    QSortFilterProxyModel_BeginRemoveRows_Callback qsortfilterproxymodel_beginremoverows_callback = nullptr;
    QSortFilterProxyModel_EndRemoveRows_Callback qsortfilterproxymodel_endremoverows_callback = nullptr;
    QSortFilterProxyModel_BeginMoveRows_Callback qsortfilterproxymodel_beginmoverows_callback = nullptr;
    QSortFilterProxyModel_EndMoveRows_Callback qsortfilterproxymodel_endmoverows_callback = nullptr;
    QSortFilterProxyModel_BeginInsertColumns_Callback qsortfilterproxymodel_begininsertcolumns_callback = nullptr;
    QSortFilterProxyModel_EndInsertColumns_Callback qsortfilterproxymodel_endinsertcolumns_callback = nullptr;
    QSortFilterProxyModel_BeginRemoveColumns_Callback qsortfilterproxymodel_beginremovecolumns_callback = nullptr;
    QSortFilterProxyModel_EndRemoveColumns_Callback qsortfilterproxymodel_endremovecolumns_callback = nullptr;
    QSortFilterProxyModel_BeginMoveColumns_Callback qsortfilterproxymodel_beginmovecolumns_callback = nullptr;
    QSortFilterProxyModel_EndMoveColumns_Callback qsortfilterproxymodel_endmovecolumns_callback = nullptr;
    QSortFilterProxyModel_BeginResetModel_Callback qsortfilterproxymodel_beginresetmodel_callback = nullptr;
    QSortFilterProxyModel_EndResetModel_Callback qsortfilterproxymodel_endresetmodel_callback = nullptr;
    QSortFilterProxyModel_ChangePersistentIndex_Callback qsortfilterproxymodel_changepersistentindex_callback = nullptr;
    QSortFilterProxyModel_ChangePersistentIndexList_Callback qsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
    QSortFilterProxyModel_PersistentIndexList_Callback qsortfilterproxymodel_persistentindexlist_callback = nullptr;
    QSortFilterProxyModel_Sender_Callback qsortfilterproxymodel_sender_callback = nullptr;
    QSortFilterProxyModel_SenderSignalIndex_Callback qsortfilterproxymodel_sendersignalindex_callback = nullptr;
    QSortFilterProxyModel_Receivers_Callback qsortfilterproxymodel_receivers_callback = nullptr;
    QSortFilterProxyModel_IsSignalConnected_Callback qsortfilterproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsortfilterproxymodel_metacall_isbase = false;
    mutable bool qsortfilterproxymodel_setsourcemodel_isbase = false;
    mutable bool qsortfilterproxymodel_maptosource_isbase = false;
    mutable bool qsortfilterproxymodel_mapfromsource_isbase = false;
    mutable bool qsortfilterproxymodel_mapselectiontosource_isbase = false;
    mutable bool qsortfilterproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qsortfilterproxymodel_filteracceptsrow_isbase = false;
    mutable bool qsortfilterproxymodel_filteracceptscolumn_isbase = false;
    mutable bool qsortfilterproxymodel_lessthan_isbase = false;
    mutable bool qsortfilterproxymodel_index_isbase = false;
    mutable bool qsortfilterproxymodel_parent_isbase = false;
    mutable bool qsortfilterproxymodel_sibling_isbase = false;
    mutable bool qsortfilterproxymodel_rowcount_isbase = false;
    mutable bool qsortfilterproxymodel_columncount_isbase = false;
    mutable bool qsortfilterproxymodel_haschildren_isbase = false;
    mutable bool qsortfilterproxymodel_data_isbase = false;
    mutable bool qsortfilterproxymodel_setdata_isbase = false;
    mutable bool qsortfilterproxymodel_headerdata_isbase = false;
    mutable bool qsortfilterproxymodel_setheaderdata_isbase = false;
    mutable bool qsortfilterproxymodel_mimedata_isbase = false;
    mutable bool qsortfilterproxymodel_dropmimedata_isbase = false;
    mutable bool qsortfilterproxymodel_insertrows_isbase = false;
    mutable bool qsortfilterproxymodel_insertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_removerows_isbase = false;
    mutable bool qsortfilterproxymodel_removecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_fetchmore_isbase = false;
    mutable bool qsortfilterproxymodel_canfetchmore_isbase = false;
    mutable bool qsortfilterproxymodel_flags_isbase = false;
    mutable bool qsortfilterproxymodel_buddy_isbase = false;
    mutable bool qsortfilterproxymodel_match_isbase = false;
    mutable bool qsortfilterproxymodel_span_isbase = false;
    mutable bool qsortfilterproxymodel_sort_isbase = false;
    mutable bool qsortfilterproxymodel_mimetypes_isbase = false;
    mutable bool qsortfilterproxymodel_supporteddropactions_isbase = false;
    mutable bool qsortfilterproxymodel_submit_isbase = false;
    mutable bool qsortfilterproxymodel_revert_isbase = false;
    mutable bool qsortfilterproxymodel_itemdata_isbase = false;
    mutable bool qsortfilterproxymodel_setitemdata_isbase = false;
    mutable bool qsortfilterproxymodel_clearitemdata_isbase = false;
    mutable bool qsortfilterproxymodel_candropmimedata_isbase = false;
    mutable bool qsortfilterproxymodel_supporteddragactions_isbase = false;
    mutable bool qsortfilterproxymodel_rolenames_isbase = false;
    mutable bool qsortfilterproxymodel_moverows_isbase = false;
    mutable bool qsortfilterproxymodel_movecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_multidata_isbase = false;
    mutable bool qsortfilterproxymodel_resetinternaldata_isbase = false;
    mutable bool qsortfilterproxymodel_event_isbase = false;
    mutable bool qsortfilterproxymodel_eventfilter_isbase = false;
    mutable bool qsortfilterproxymodel_timerevent_isbase = false;
    mutable bool qsortfilterproxymodel_childevent_isbase = false;
    mutable bool qsortfilterproxymodel_customevent_isbase = false;
    mutable bool qsortfilterproxymodel_connectnotify_isbase = false;
    mutable bool qsortfilterproxymodel_disconnectnotify_isbase = false;
    mutable bool qsortfilterproxymodel_invalidatefilter_isbase = false;
    mutable bool qsortfilterproxymodel_invalidaterowsfilter_isbase = false;
    mutable bool qsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
    mutable bool qsortfilterproxymodel_createsourceindex_isbase = false;
    mutable bool qsortfilterproxymodel_createindex_isbase = false;
    mutable bool qsortfilterproxymodel_encodedata_isbase = false;
    mutable bool qsortfilterproxymodel_decodedata_isbase = false;
    mutable bool qsortfilterproxymodel_begininsertrows_isbase = false;
    mutable bool qsortfilterproxymodel_endinsertrows_isbase = false;
    mutable bool qsortfilterproxymodel_beginremoverows_isbase = false;
    mutable bool qsortfilterproxymodel_endremoverows_isbase = false;
    mutable bool qsortfilterproxymodel_beginmoverows_isbase = false;
    mutable bool qsortfilterproxymodel_endmoverows_isbase = false;
    mutable bool qsortfilterproxymodel_begininsertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_endinsertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_beginremovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_endremovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_beginmovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_endmovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_beginresetmodel_isbase = false;
    mutable bool qsortfilterproxymodel_endresetmodel_isbase = false;
    mutable bool qsortfilterproxymodel_changepersistentindex_isbase = false;
    mutable bool qsortfilterproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qsortfilterproxymodel_persistentindexlist_isbase = false;
    mutable bool qsortfilterproxymodel_sender_isbase = false;
    mutable bool qsortfilterproxymodel_sendersignalindex_isbase = false;
    mutable bool qsortfilterproxymodel_receivers_isbase = false;
    mutable bool qsortfilterproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQSortFilterProxyModel() : QSortFilterProxyModel() {};
    VirtualQSortFilterProxyModel(QObject* parent) : QSortFilterProxyModel(parent) {};

    ~VirtualQSortFilterProxyModel() {
        qsortfilterproxymodel_metacall_callback = nullptr;
        qsortfilterproxymodel_setsourcemodel_callback = nullptr;
        qsortfilterproxymodel_maptosource_callback = nullptr;
        qsortfilterproxymodel_mapfromsource_callback = nullptr;
        qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
        qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
        qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
        qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
        qsortfilterproxymodel_lessthan_callback = nullptr;
        qsortfilterproxymodel_index_callback = nullptr;
        qsortfilterproxymodel_parent_callback = nullptr;
        qsortfilterproxymodel_sibling_callback = nullptr;
        qsortfilterproxymodel_rowcount_callback = nullptr;
        qsortfilterproxymodel_columncount_callback = nullptr;
        qsortfilterproxymodel_haschildren_callback = nullptr;
        qsortfilterproxymodel_data_callback = nullptr;
        qsortfilterproxymodel_setdata_callback = nullptr;
        qsortfilterproxymodel_headerdata_callback = nullptr;
        qsortfilterproxymodel_setheaderdata_callback = nullptr;
        qsortfilterproxymodel_mimedata_callback = nullptr;
        qsortfilterproxymodel_dropmimedata_callback = nullptr;
        qsortfilterproxymodel_insertrows_callback = nullptr;
        qsortfilterproxymodel_insertcolumns_callback = nullptr;
        qsortfilterproxymodel_removerows_callback = nullptr;
        qsortfilterproxymodel_removecolumns_callback = nullptr;
        qsortfilterproxymodel_fetchmore_callback = nullptr;
        qsortfilterproxymodel_canfetchmore_callback = nullptr;
        qsortfilterproxymodel_flags_callback = nullptr;
        qsortfilterproxymodel_buddy_callback = nullptr;
        qsortfilterproxymodel_match_callback = nullptr;
        qsortfilterproxymodel_span_callback = nullptr;
        qsortfilterproxymodel_sort_callback = nullptr;
        qsortfilterproxymodel_mimetypes_callback = nullptr;
        qsortfilterproxymodel_supporteddropactions_callback = nullptr;
        qsortfilterproxymodel_submit_callback = nullptr;
        qsortfilterproxymodel_revert_callback = nullptr;
        qsortfilterproxymodel_itemdata_callback = nullptr;
        qsortfilterproxymodel_setitemdata_callback = nullptr;
        qsortfilterproxymodel_clearitemdata_callback = nullptr;
        qsortfilterproxymodel_candropmimedata_callback = nullptr;
        qsortfilterproxymodel_supporteddragactions_callback = nullptr;
        qsortfilterproxymodel_rolenames_callback = nullptr;
        qsortfilterproxymodel_moverows_callback = nullptr;
        qsortfilterproxymodel_movecolumns_callback = nullptr;
        qsortfilterproxymodel_multidata_callback = nullptr;
        qsortfilterproxymodel_resetinternaldata_callback = nullptr;
        qsortfilterproxymodel_event_callback = nullptr;
        qsortfilterproxymodel_eventfilter_callback = nullptr;
        qsortfilterproxymodel_timerevent_callback = nullptr;
        qsortfilterproxymodel_childevent_callback = nullptr;
        qsortfilterproxymodel_customevent_callback = nullptr;
        qsortfilterproxymodel_connectnotify_callback = nullptr;
        qsortfilterproxymodel_disconnectnotify_callback = nullptr;
        qsortfilterproxymodel_invalidatefilter_callback = nullptr;
        qsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
        qsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
        qsortfilterproxymodel_createsourceindex_callback = nullptr;
        qsortfilterproxymodel_createindex_callback = nullptr;
        qsortfilterproxymodel_encodedata_callback = nullptr;
        qsortfilterproxymodel_decodedata_callback = nullptr;
        qsortfilterproxymodel_begininsertrows_callback = nullptr;
        qsortfilterproxymodel_endinsertrows_callback = nullptr;
        qsortfilterproxymodel_beginremoverows_callback = nullptr;
        qsortfilterproxymodel_endremoverows_callback = nullptr;
        qsortfilterproxymodel_beginmoverows_callback = nullptr;
        qsortfilterproxymodel_endmoverows_callback = nullptr;
        qsortfilterproxymodel_begininsertcolumns_callback = nullptr;
        qsortfilterproxymodel_endinsertcolumns_callback = nullptr;
        qsortfilterproxymodel_beginremovecolumns_callback = nullptr;
        qsortfilterproxymodel_endremovecolumns_callback = nullptr;
        qsortfilterproxymodel_beginmovecolumns_callback = nullptr;
        qsortfilterproxymodel_endmovecolumns_callback = nullptr;
        qsortfilterproxymodel_beginresetmodel_callback = nullptr;
        qsortfilterproxymodel_endresetmodel_callback = nullptr;
        qsortfilterproxymodel_changepersistentindex_callback = nullptr;
        qsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
        qsortfilterproxymodel_persistentindexlist_callback = nullptr;
        qsortfilterproxymodel_sender_callback = nullptr;
        qsortfilterproxymodel_sendersignalindex_callback = nullptr;
        qsortfilterproxymodel_receivers_callback = nullptr;
        qsortfilterproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSortFilterProxyModel_Metacall_Callback(QSortFilterProxyModel_Metacall_Callback cb) { qsortfilterproxymodel_metacall_callback = cb; }
    inline void setQSortFilterProxyModel_SetSourceModel_Callback(QSortFilterProxyModel_SetSourceModel_Callback cb) { qsortfilterproxymodel_setsourcemodel_callback = cb; }
    inline void setQSortFilterProxyModel_MapToSource_Callback(QSortFilterProxyModel_MapToSource_Callback cb) { qsortfilterproxymodel_maptosource_callback = cb; }
    inline void setQSortFilterProxyModel_MapFromSource_Callback(QSortFilterProxyModel_MapFromSource_Callback cb) { qsortfilterproxymodel_mapfromsource_callback = cb; }
    inline void setQSortFilterProxyModel_MapSelectionToSource_Callback(QSortFilterProxyModel_MapSelectionToSource_Callback cb) { qsortfilterproxymodel_mapselectiontosource_callback = cb; }
    inline void setQSortFilterProxyModel_MapSelectionFromSource_Callback(QSortFilterProxyModel_MapSelectionFromSource_Callback cb) { qsortfilterproxymodel_mapselectionfromsource_callback = cb; }
    inline void setQSortFilterProxyModel_FilterAcceptsRow_Callback(QSortFilterProxyModel_FilterAcceptsRow_Callback cb) { qsortfilterproxymodel_filteracceptsrow_callback = cb; }
    inline void setQSortFilterProxyModel_FilterAcceptsColumn_Callback(QSortFilterProxyModel_FilterAcceptsColumn_Callback cb) { qsortfilterproxymodel_filteracceptscolumn_callback = cb; }
    inline void setQSortFilterProxyModel_LessThan_Callback(QSortFilterProxyModel_LessThan_Callback cb) { qsortfilterproxymodel_lessthan_callback = cb; }
    inline void setQSortFilterProxyModel_Index_Callback(QSortFilterProxyModel_Index_Callback cb) { qsortfilterproxymodel_index_callback = cb; }
    inline void setQSortFilterProxyModel_Parent_Callback(QSortFilterProxyModel_Parent_Callback cb) { qsortfilterproxymodel_parent_callback = cb; }
    inline void setQSortFilterProxyModel_Sibling_Callback(QSortFilterProxyModel_Sibling_Callback cb) { qsortfilterproxymodel_sibling_callback = cb; }
    inline void setQSortFilterProxyModel_RowCount_Callback(QSortFilterProxyModel_RowCount_Callback cb) { qsortfilterproxymodel_rowcount_callback = cb; }
    inline void setQSortFilterProxyModel_ColumnCount_Callback(QSortFilterProxyModel_ColumnCount_Callback cb) { qsortfilterproxymodel_columncount_callback = cb; }
    inline void setQSortFilterProxyModel_HasChildren_Callback(QSortFilterProxyModel_HasChildren_Callback cb) { qsortfilterproxymodel_haschildren_callback = cb; }
    inline void setQSortFilterProxyModel_Data_Callback(QSortFilterProxyModel_Data_Callback cb) { qsortfilterproxymodel_data_callback = cb; }
    inline void setQSortFilterProxyModel_SetData_Callback(QSortFilterProxyModel_SetData_Callback cb) { qsortfilterproxymodel_setdata_callback = cb; }
    inline void setQSortFilterProxyModel_HeaderData_Callback(QSortFilterProxyModel_HeaderData_Callback cb) { qsortfilterproxymodel_headerdata_callback = cb; }
    inline void setQSortFilterProxyModel_SetHeaderData_Callback(QSortFilterProxyModel_SetHeaderData_Callback cb) { qsortfilterproxymodel_setheaderdata_callback = cb; }
    inline void setQSortFilterProxyModel_MimeData_Callback(QSortFilterProxyModel_MimeData_Callback cb) { qsortfilterproxymodel_mimedata_callback = cb; }
    inline void setQSortFilterProxyModel_DropMimeData_Callback(QSortFilterProxyModel_DropMimeData_Callback cb) { qsortfilterproxymodel_dropmimedata_callback = cb; }
    inline void setQSortFilterProxyModel_InsertRows_Callback(QSortFilterProxyModel_InsertRows_Callback cb) { qsortfilterproxymodel_insertrows_callback = cb; }
    inline void setQSortFilterProxyModel_InsertColumns_Callback(QSortFilterProxyModel_InsertColumns_Callback cb) { qsortfilterproxymodel_insertcolumns_callback = cb; }
    inline void setQSortFilterProxyModel_RemoveRows_Callback(QSortFilterProxyModel_RemoveRows_Callback cb) { qsortfilterproxymodel_removerows_callback = cb; }
    inline void setQSortFilterProxyModel_RemoveColumns_Callback(QSortFilterProxyModel_RemoveColumns_Callback cb) { qsortfilterproxymodel_removecolumns_callback = cb; }
    inline void setQSortFilterProxyModel_FetchMore_Callback(QSortFilterProxyModel_FetchMore_Callback cb) { qsortfilterproxymodel_fetchmore_callback = cb; }
    inline void setQSortFilterProxyModel_CanFetchMore_Callback(QSortFilterProxyModel_CanFetchMore_Callback cb) { qsortfilterproxymodel_canfetchmore_callback = cb; }
    inline void setQSortFilterProxyModel_Flags_Callback(QSortFilterProxyModel_Flags_Callback cb) { qsortfilterproxymodel_flags_callback = cb; }
    inline void setQSortFilterProxyModel_Buddy_Callback(QSortFilterProxyModel_Buddy_Callback cb) { qsortfilterproxymodel_buddy_callback = cb; }
    inline void setQSortFilterProxyModel_Match_Callback(QSortFilterProxyModel_Match_Callback cb) { qsortfilterproxymodel_match_callback = cb; }
    inline void setQSortFilterProxyModel_Span_Callback(QSortFilterProxyModel_Span_Callback cb) { qsortfilterproxymodel_span_callback = cb; }
    inline void setQSortFilterProxyModel_Sort_Callback(QSortFilterProxyModel_Sort_Callback cb) { qsortfilterproxymodel_sort_callback = cb; }
    inline void setQSortFilterProxyModel_MimeTypes_Callback(QSortFilterProxyModel_MimeTypes_Callback cb) { qsortfilterproxymodel_mimetypes_callback = cb; }
    inline void setQSortFilterProxyModel_SupportedDropActions_Callback(QSortFilterProxyModel_SupportedDropActions_Callback cb) { qsortfilterproxymodel_supporteddropactions_callback = cb; }
    inline void setQSortFilterProxyModel_Submit_Callback(QSortFilterProxyModel_Submit_Callback cb) { qsortfilterproxymodel_submit_callback = cb; }
    inline void setQSortFilterProxyModel_Revert_Callback(QSortFilterProxyModel_Revert_Callback cb) { qsortfilterproxymodel_revert_callback = cb; }
    inline void setQSortFilterProxyModel_ItemData_Callback(QSortFilterProxyModel_ItemData_Callback cb) { qsortfilterproxymodel_itemdata_callback = cb; }
    inline void setQSortFilterProxyModel_SetItemData_Callback(QSortFilterProxyModel_SetItemData_Callback cb) { qsortfilterproxymodel_setitemdata_callback = cb; }
    inline void setQSortFilterProxyModel_ClearItemData_Callback(QSortFilterProxyModel_ClearItemData_Callback cb) { qsortfilterproxymodel_clearitemdata_callback = cb; }
    inline void setQSortFilterProxyModel_CanDropMimeData_Callback(QSortFilterProxyModel_CanDropMimeData_Callback cb) { qsortfilterproxymodel_candropmimedata_callback = cb; }
    inline void setQSortFilterProxyModel_SupportedDragActions_Callback(QSortFilterProxyModel_SupportedDragActions_Callback cb) { qsortfilterproxymodel_supporteddragactions_callback = cb; }
    inline void setQSortFilterProxyModel_RoleNames_Callback(QSortFilterProxyModel_RoleNames_Callback cb) { qsortfilterproxymodel_rolenames_callback = cb; }
    inline void setQSortFilterProxyModel_MoveRows_Callback(QSortFilterProxyModel_MoveRows_Callback cb) { qsortfilterproxymodel_moverows_callback = cb; }
    inline void setQSortFilterProxyModel_MoveColumns_Callback(QSortFilterProxyModel_MoveColumns_Callback cb) { qsortfilterproxymodel_movecolumns_callback = cb; }
    inline void setQSortFilterProxyModel_MultiData_Callback(QSortFilterProxyModel_MultiData_Callback cb) { qsortfilterproxymodel_multidata_callback = cb; }
    inline void setQSortFilterProxyModel_ResetInternalData_Callback(QSortFilterProxyModel_ResetInternalData_Callback cb) { qsortfilterproxymodel_resetinternaldata_callback = cb; }
    inline void setQSortFilterProxyModel_Event_Callback(QSortFilterProxyModel_Event_Callback cb) { qsortfilterproxymodel_event_callback = cb; }
    inline void setQSortFilterProxyModel_EventFilter_Callback(QSortFilterProxyModel_EventFilter_Callback cb) { qsortfilterproxymodel_eventfilter_callback = cb; }
    inline void setQSortFilterProxyModel_TimerEvent_Callback(QSortFilterProxyModel_TimerEvent_Callback cb) { qsortfilterproxymodel_timerevent_callback = cb; }
    inline void setQSortFilterProxyModel_ChildEvent_Callback(QSortFilterProxyModel_ChildEvent_Callback cb) { qsortfilterproxymodel_childevent_callback = cb; }
    inline void setQSortFilterProxyModel_CustomEvent_Callback(QSortFilterProxyModel_CustomEvent_Callback cb) { qsortfilterproxymodel_customevent_callback = cb; }
    inline void setQSortFilterProxyModel_ConnectNotify_Callback(QSortFilterProxyModel_ConnectNotify_Callback cb) { qsortfilterproxymodel_connectnotify_callback = cb; }
    inline void setQSortFilterProxyModel_DisconnectNotify_Callback(QSortFilterProxyModel_DisconnectNotify_Callback cb) { qsortfilterproxymodel_disconnectnotify_callback = cb; }
    inline void setQSortFilterProxyModel_InvalidateFilter_Callback(QSortFilterProxyModel_InvalidateFilter_Callback cb) { qsortfilterproxymodel_invalidatefilter_callback = cb; }
    inline void setQSortFilterProxyModel_InvalidateRowsFilter_Callback(QSortFilterProxyModel_InvalidateRowsFilter_Callback cb) { qsortfilterproxymodel_invalidaterowsfilter_callback = cb; }
    inline void setQSortFilterProxyModel_InvalidateColumnsFilter_Callback(QSortFilterProxyModel_InvalidateColumnsFilter_Callback cb) { qsortfilterproxymodel_invalidatecolumnsfilter_callback = cb; }
    inline void setQSortFilterProxyModel_CreateSourceIndex_Callback(QSortFilterProxyModel_CreateSourceIndex_Callback cb) { qsortfilterproxymodel_createsourceindex_callback = cb; }
    inline void setQSortFilterProxyModel_CreateIndex_Callback(QSortFilterProxyModel_CreateIndex_Callback cb) { qsortfilterproxymodel_createindex_callback = cb; }
    inline void setQSortFilterProxyModel_EncodeData_Callback(QSortFilterProxyModel_EncodeData_Callback cb) { qsortfilterproxymodel_encodedata_callback = cb; }
    inline void setQSortFilterProxyModel_DecodeData_Callback(QSortFilterProxyModel_DecodeData_Callback cb) { qsortfilterproxymodel_decodedata_callback = cb; }
    inline void setQSortFilterProxyModel_BeginInsertRows_Callback(QSortFilterProxyModel_BeginInsertRows_Callback cb) { qsortfilterproxymodel_begininsertrows_callback = cb; }
    inline void setQSortFilterProxyModel_EndInsertRows_Callback(QSortFilterProxyModel_EndInsertRows_Callback cb) { qsortfilterproxymodel_endinsertrows_callback = cb; }
    inline void setQSortFilterProxyModel_BeginRemoveRows_Callback(QSortFilterProxyModel_BeginRemoveRows_Callback cb) { qsortfilterproxymodel_beginremoverows_callback = cb; }
    inline void setQSortFilterProxyModel_EndRemoveRows_Callback(QSortFilterProxyModel_EndRemoveRows_Callback cb) { qsortfilterproxymodel_endremoverows_callback = cb; }
    inline void setQSortFilterProxyModel_BeginMoveRows_Callback(QSortFilterProxyModel_BeginMoveRows_Callback cb) { qsortfilterproxymodel_beginmoverows_callback = cb; }
    inline void setQSortFilterProxyModel_EndMoveRows_Callback(QSortFilterProxyModel_EndMoveRows_Callback cb) { qsortfilterproxymodel_endmoverows_callback = cb; }
    inline void setQSortFilterProxyModel_BeginInsertColumns_Callback(QSortFilterProxyModel_BeginInsertColumns_Callback cb) { qsortfilterproxymodel_begininsertcolumns_callback = cb; }
    inline void setQSortFilterProxyModel_EndInsertColumns_Callback(QSortFilterProxyModel_EndInsertColumns_Callback cb) { qsortfilterproxymodel_endinsertcolumns_callback = cb; }
    inline void setQSortFilterProxyModel_BeginRemoveColumns_Callback(QSortFilterProxyModel_BeginRemoveColumns_Callback cb) { qsortfilterproxymodel_beginremovecolumns_callback = cb; }
    inline void setQSortFilterProxyModel_EndRemoveColumns_Callback(QSortFilterProxyModel_EndRemoveColumns_Callback cb) { qsortfilterproxymodel_endremovecolumns_callback = cb; }
    inline void setQSortFilterProxyModel_BeginMoveColumns_Callback(QSortFilterProxyModel_BeginMoveColumns_Callback cb) { qsortfilterproxymodel_beginmovecolumns_callback = cb; }
    inline void setQSortFilterProxyModel_EndMoveColumns_Callback(QSortFilterProxyModel_EndMoveColumns_Callback cb) { qsortfilterproxymodel_endmovecolumns_callback = cb; }
    inline void setQSortFilterProxyModel_BeginResetModel_Callback(QSortFilterProxyModel_BeginResetModel_Callback cb) { qsortfilterproxymodel_beginresetmodel_callback = cb; }
    inline void setQSortFilterProxyModel_EndResetModel_Callback(QSortFilterProxyModel_EndResetModel_Callback cb) { qsortfilterproxymodel_endresetmodel_callback = cb; }
    inline void setQSortFilterProxyModel_ChangePersistentIndex_Callback(QSortFilterProxyModel_ChangePersistentIndex_Callback cb) { qsortfilterproxymodel_changepersistentindex_callback = cb; }
    inline void setQSortFilterProxyModel_ChangePersistentIndexList_Callback(QSortFilterProxyModel_ChangePersistentIndexList_Callback cb) { qsortfilterproxymodel_changepersistentindexlist_callback = cb; }
    inline void setQSortFilterProxyModel_PersistentIndexList_Callback(QSortFilterProxyModel_PersistentIndexList_Callback cb) { qsortfilterproxymodel_persistentindexlist_callback = cb; }
    inline void setQSortFilterProxyModel_Sender_Callback(QSortFilterProxyModel_Sender_Callback cb) { qsortfilterproxymodel_sender_callback = cb; }
    inline void setQSortFilterProxyModel_SenderSignalIndex_Callback(QSortFilterProxyModel_SenderSignalIndex_Callback cb) { qsortfilterproxymodel_sendersignalindex_callback = cb; }
    inline void setQSortFilterProxyModel_Receivers_Callback(QSortFilterProxyModel_Receivers_Callback cb) { qsortfilterproxymodel_receivers_callback = cb; }
    inline void setQSortFilterProxyModel_IsSignalConnected_Callback(QSortFilterProxyModel_IsSignalConnected_Callback cb) { qsortfilterproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSortFilterProxyModel_Metacall_IsBase(bool value) const { qsortfilterproxymodel_metacall_isbase = value; }
    inline void setQSortFilterProxyModel_SetSourceModel_IsBase(bool value) const { qsortfilterproxymodel_setsourcemodel_isbase = value; }
    inline void setQSortFilterProxyModel_MapToSource_IsBase(bool value) const { qsortfilterproxymodel_maptosource_isbase = value; }
    inline void setQSortFilterProxyModel_MapFromSource_IsBase(bool value) const { qsortfilterproxymodel_mapfromsource_isbase = value; }
    inline void setQSortFilterProxyModel_MapSelectionToSource_IsBase(bool value) const { qsortfilterproxymodel_mapselectiontosource_isbase = value; }
    inline void setQSortFilterProxyModel_MapSelectionFromSource_IsBase(bool value) const { qsortfilterproxymodel_mapselectionfromsource_isbase = value; }
    inline void setQSortFilterProxyModel_FilterAcceptsRow_IsBase(bool value) const { qsortfilterproxymodel_filteracceptsrow_isbase = value; }
    inline void setQSortFilterProxyModel_FilterAcceptsColumn_IsBase(bool value) const { qsortfilterproxymodel_filteracceptscolumn_isbase = value; }
    inline void setQSortFilterProxyModel_LessThan_IsBase(bool value) const { qsortfilterproxymodel_lessthan_isbase = value; }
    inline void setQSortFilterProxyModel_Index_IsBase(bool value) const { qsortfilterproxymodel_index_isbase = value; }
    inline void setQSortFilterProxyModel_Parent_IsBase(bool value) const { qsortfilterproxymodel_parent_isbase = value; }
    inline void setQSortFilterProxyModel_Sibling_IsBase(bool value) const { qsortfilterproxymodel_sibling_isbase = value; }
    inline void setQSortFilterProxyModel_RowCount_IsBase(bool value) const { qsortfilterproxymodel_rowcount_isbase = value; }
    inline void setQSortFilterProxyModel_ColumnCount_IsBase(bool value) const { qsortfilterproxymodel_columncount_isbase = value; }
    inline void setQSortFilterProxyModel_HasChildren_IsBase(bool value) const { qsortfilterproxymodel_haschildren_isbase = value; }
    inline void setQSortFilterProxyModel_Data_IsBase(bool value) const { qsortfilterproxymodel_data_isbase = value; }
    inline void setQSortFilterProxyModel_SetData_IsBase(bool value) const { qsortfilterproxymodel_setdata_isbase = value; }
    inline void setQSortFilterProxyModel_HeaderData_IsBase(bool value) const { qsortfilterproxymodel_headerdata_isbase = value; }
    inline void setQSortFilterProxyModel_SetHeaderData_IsBase(bool value) const { qsortfilterproxymodel_setheaderdata_isbase = value; }
    inline void setQSortFilterProxyModel_MimeData_IsBase(bool value) const { qsortfilterproxymodel_mimedata_isbase = value; }
    inline void setQSortFilterProxyModel_DropMimeData_IsBase(bool value) const { qsortfilterproxymodel_dropmimedata_isbase = value; }
    inline void setQSortFilterProxyModel_InsertRows_IsBase(bool value) const { qsortfilterproxymodel_insertrows_isbase = value; }
    inline void setQSortFilterProxyModel_InsertColumns_IsBase(bool value) const { qsortfilterproxymodel_insertcolumns_isbase = value; }
    inline void setQSortFilterProxyModel_RemoveRows_IsBase(bool value) const { qsortfilterproxymodel_removerows_isbase = value; }
    inline void setQSortFilterProxyModel_RemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_removecolumns_isbase = value; }
    inline void setQSortFilterProxyModel_FetchMore_IsBase(bool value) const { qsortfilterproxymodel_fetchmore_isbase = value; }
    inline void setQSortFilterProxyModel_CanFetchMore_IsBase(bool value) const { qsortfilterproxymodel_canfetchmore_isbase = value; }
    inline void setQSortFilterProxyModel_Flags_IsBase(bool value) const { qsortfilterproxymodel_flags_isbase = value; }
    inline void setQSortFilterProxyModel_Buddy_IsBase(bool value) const { qsortfilterproxymodel_buddy_isbase = value; }
    inline void setQSortFilterProxyModel_Match_IsBase(bool value) const { qsortfilterproxymodel_match_isbase = value; }
    inline void setQSortFilterProxyModel_Span_IsBase(bool value) const { qsortfilterproxymodel_span_isbase = value; }
    inline void setQSortFilterProxyModel_Sort_IsBase(bool value) const { qsortfilterproxymodel_sort_isbase = value; }
    inline void setQSortFilterProxyModel_MimeTypes_IsBase(bool value) const { qsortfilterproxymodel_mimetypes_isbase = value; }
    inline void setQSortFilterProxyModel_SupportedDropActions_IsBase(bool value) const { qsortfilterproxymodel_supporteddropactions_isbase = value; }
    inline void setQSortFilterProxyModel_Submit_IsBase(bool value) const { qsortfilterproxymodel_submit_isbase = value; }
    inline void setQSortFilterProxyModel_Revert_IsBase(bool value) const { qsortfilterproxymodel_revert_isbase = value; }
    inline void setQSortFilterProxyModel_ItemData_IsBase(bool value) const { qsortfilterproxymodel_itemdata_isbase = value; }
    inline void setQSortFilterProxyModel_SetItemData_IsBase(bool value) const { qsortfilterproxymodel_setitemdata_isbase = value; }
    inline void setQSortFilterProxyModel_ClearItemData_IsBase(bool value) const { qsortfilterproxymodel_clearitemdata_isbase = value; }
    inline void setQSortFilterProxyModel_CanDropMimeData_IsBase(bool value) const { qsortfilterproxymodel_candropmimedata_isbase = value; }
    inline void setQSortFilterProxyModel_SupportedDragActions_IsBase(bool value) const { qsortfilterproxymodel_supporteddragactions_isbase = value; }
    inline void setQSortFilterProxyModel_RoleNames_IsBase(bool value) const { qsortfilterproxymodel_rolenames_isbase = value; }
    inline void setQSortFilterProxyModel_MoveRows_IsBase(bool value) const { qsortfilterproxymodel_moverows_isbase = value; }
    inline void setQSortFilterProxyModel_MoveColumns_IsBase(bool value) const { qsortfilterproxymodel_movecolumns_isbase = value; }
    inline void setQSortFilterProxyModel_MultiData_IsBase(bool value) const { qsortfilterproxymodel_multidata_isbase = value; }
    inline void setQSortFilterProxyModel_ResetInternalData_IsBase(bool value) const { qsortfilterproxymodel_resetinternaldata_isbase = value; }
    inline void setQSortFilterProxyModel_Event_IsBase(bool value) const { qsortfilterproxymodel_event_isbase = value; }
    inline void setQSortFilterProxyModel_EventFilter_IsBase(bool value) const { qsortfilterproxymodel_eventfilter_isbase = value; }
    inline void setQSortFilterProxyModel_TimerEvent_IsBase(bool value) const { qsortfilterproxymodel_timerevent_isbase = value; }
    inline void setQSortFilterProxyModel_ChildEvent_IsBase(bool value) const { qsortfilterproxymodel_childevent_isbase = value; }
    inline void setQSortFilterProxyModel_CustomEvent_IsBase(bool value) const { qsortfilterproxymodel_customevent_isbase = value; }
    inline void setQSortFilterProxyModel_ConnectNotify_IsBase(bool value) const { qsortfilterproxymodel_connectnotify_isbase = value; }
    inline void setQSortFilterProxyModel_DisconnectNotify_IsBase(bool value) const { qsortfilterproxymodel_disconnectnotify_isbase = value; }
    inline void setQSortFilterProxyModel_InvalidateFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidatefilter_isbase = value; }
    inline void setQSortFilterProxyModel_InvalidateRowsFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidaterowsfilter_isbase = value; }
    inline void setQSortFilterProxyModel_InvalidateColumnsFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidatecolumnsfilter_isbase = value; }
    inline void setQSortFilterProxyModel_CreateSourceIndex_IsBase(bool value) const { qsortfilterproxymodel_createsourceindex_isbase = value; }
    inline void setQSortFilterProxyModel_CreateIndex_IsBase(bool value) const { qsortfilterproxymodel_createindex_isbase = value; }
    inline void setQSortFilterProxyModel_EncodeData_IsBase(bool value) const { qsortfilterproxymodel_encodedata_isbase = value; }
    inline void setQSortFilterProxyModel_DecodeData_IsBase(bool value) const { qsortfilterproxymodel_decodedata_isbase = value; }
    inline void setQSortFilterProxyModel_BeginInsertRows_IsBase(bool value) const { qsortfilterproxymodel_begininsertrows_isbase = value; }
    inline void setQSortFilterProxyModel_EndInsertRows_IsBase(bool value) const { qsortfilterproxymodel_endinsertrows_isbase = value; }
    inline void setQSortFilterProxyModel_BeginRemoveRows_IsBase(bool value) const { qsortfilterproxymodel_beginremoverows_isbase = value; }
    inline void setQSortFilterProxyModel_EndRemoveRows_IsBase(bool value) const { qsortfilterproxymodel_endremoverows_isbase = value; }
    inline void setQSortFilterProxyModel_BeginMoveRows_IsBase(bool value) const { qsortfilterproxymodel_beginmoverows_isbase = value; }
    inline void setQSortFilterProxyModel_EndMoveRows_IsBase(bool value) const { qsortfilterproxymodel_endmoverows_isbase = value; }
    inline void setQSortFilterProxyModel_BeginInsertColumns_IsBase(bool value) const { qsortfilterproxymodel_begininsertcolumns_isbase = value; }
    inline void setQSortFilterProxyModel_EndInsertColumns_IsBase(bool value) const { qsortfilterproxymodel_endinsertcolumns_isbase = value; }
    inline void setQSortFilterProxyModel_BeginRemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_beginremovecolumns_isbase = value; }
    inline void setQSortFilterProxyModel_EndRemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_endremovecolumns_isbase = value; }
    inline void setQSortFilterProxyModel_BeginMoveColumns_IsBase(bool value) const { qsortfilterproxymodel_beginmovecolumns_isbase = value; }
    inline void setQSortFilterProxyModel_EndMoveColumns_IsBase(bool value) const { qsortfilterproxymodel_endmovecolumns_isbase = value; }
    inline void setQSortFilterProxyModel_BeginResetModel_IsBase(bool value) const { qsortfilterproxymodel_beginresetmodel_isbase = value; }
    inline void setQSortFilterProxyModel_EndResetModel_IsBase(bool value) const { qsortfilterproxymodel_endresetmodel_isbase = value; }
    inline void setQSortFilterProxyModel_ChangePersistentIndex_IsBase(bool value) const { qsortfilterproxymodel_changepersistentindex_isbase = value; }
    inline void setQSortFilterProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qsortfilterproxymodel_changepersistentindexlist_isbase = value; }
    inline void setQSortFilterProxyModel_PersistentIndexList_IsBase(bool value) const { qsortfilterproxymodel_persistentindexlist_isbase = value; }
    inline void setQSortFilterProxyModel_Sender_IsBase(bool value) const { qsortfilterproxymodel_sender_isbase = value; }
    inline void setQSortFilterProxyModel_SenderSignalIndex_IsBase(bool value) const { qsortfilterproxymodel_sendersignalindex_isbase = value; }
    inline void setQSortFilterProxyModel_Receivers_IsBase(bool value) const { qsortfilterproxymodel_receivers_isbase = value; }
    inline void setQSortFilterProxyModel_IsSignalConnected_IsBase(bool value) const { qsortfilterproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsortfilterproxymodel_metacall_isbase) {
            qsortfilterproxymodel_metacall_isbase = false;
            return QSortFilterProxyModel::qt_metacall(param1, param2, param3);
        } else if (qsortfilterproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsortfilterproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSortFilterProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qsortfilterproxymodel_setsourcemodel_isbase) {
            qsortfilterproxymodel_setsourcemodel_isbase = false;
            QSortFilterProxyModel::setSourceModel(sourceModel);
        } else if (qsortfilterproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            qsortfilterproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qsortfilterproxymodel_maptosource_isbase) {
            qsortfilterproxymodel_maptosource_isbase = false;
            return QSortFilterProxyModel::mapToSource(proxyIndex);
        } else if (qsortfilterproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = qsortfilterproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qsortfilterproxymodel_mapfromsource_isbase) {
            qsortfilterproxymodel_mapfromsource_isbase = false;
            return QSortFilterProxyModel::mapFromSource(sourceIndex);
        } else if (qsortfilterproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = qsortfilterproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (qsortfilterproxymodel_mapselectiontosource_isbase) {
            qsortfilterproxymodel_mapselectiontosource_isbase = false;
            return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
        } else if (qsortfilterproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);

            QItemSelection* callback_ret = qsortfilterproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (qsortfilterproxymodel_mapselectionfromsource_isbase) {
            qsortfilterproxymodel_mapselectionfromsource_isbase = false;
            return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        } else if (qsortfilterproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);

            QItemSelection* callback_ret = qsortfilterproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (qsortfilterproxymodel_filteracceptsrow_isbase) {
            qsortfilterproxymodel_filteracceptsrow_isbase = false;
            return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        } else if (qsortfilterproxymodel_filteracceptsrow_callback != nullptr) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);

            bool callback_ret = qsortfilterproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (qsortfilterproxymodel_filteracceptscolumn_isbase) {
            qsortfilterproxymodel_filteracceptscolumn_isbase = false;
            return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        } else if (qsortfilterproxymodel_filteracceptscolumn_callback != nullptr) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);

            bool callback_ret = qsortfilterproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override {
        if (qsortfilterproxymodel_lessthan_isbase) {
            qsortfilterproxymodel_lessthan_isbase = false;
            return QSortFilterProxyModel::lessThan(source_left, source_right);
        } else if (qsortfilterproxymodel_lessthan_callback != nullptr) {
            const QModelIndex& source_left_ret = source_left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&source_left_ret);
            const QModelIndex& source_right_ret = source_right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_right_ret);

            bool callback_ret = qsortfilterproxymodel_lessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::lessThan(source_left, source_right);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_index_isbase) {
            qsortfilterproxymodel_index_isbase = false;
            return QSortFilterProxyModel::index(row, column, parent);
        } else if (qsortfilterproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qsortfilterproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qsortfilterproxymodel_parent_isbase) {
            qsortfilterproxymodel_parent_isbase = false;
            return QSortFilterProxyModel::parent(child);
        } else if (qsortfilterproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = qsortfilterproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsortfilterproxymodel_sibling_isbase) {
            qsortfilterproxymodel_sibling_isbase = false;
            return QSortFilterProxyModel::sibling(row, column, idx);
        } else if (qsortfilterproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qsortfilterproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_rowcount_isbase) {
            qsortfilterproxymodel_rowcount_isbase = false;
            return QSortFilterProxyModel::rowCount(parent);
        } else if (qsortfilterproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsortfilterproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSortFilterProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_columncount_isbase) {
            qsortfilterproxymodel_columncount_isbase = false;
            return QSortFilterProxyModel::columnCount(parent);
        } else if (qsortfilterproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qsortfilterproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSortFilterProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_haschildren_isbase) {
            qsortfilterproxymodel_haschildren_isbase = false;
            return QSortFilterProxyModel::hasChildren(parent);
        } else if (qsortfilterproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qsortfilterproxymodel_data_isbase) {
            qsortfilterproxymodel_data_isbase = false;
            return QSortFilterProxyModel::data(index, role);
        } else if (qsortfilterproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = qsortfilterproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsortfilterproxymodel_setdata_isbase) {
            qsortfilterproxymodel_setdata_isbase = false;
            return QSortFilterProxyModel::setData(index, value, role);
        } else if (qsortfilterproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qsortfilterproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsortfilterproxymodel_headerdata_isbase) {
            qsortfilterproxymodel_headerdata_isbase = false;
            return QSortFilterProxyModel::headerData(section, orientation, role);
        } else if (qsortfilterproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qsortfilterproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsortfilterproxymodel_setheaderdata_isbase) {
            qsortfilterproxymodel_setheaderdata_isbase = false;
            return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qsortfilterproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qsortfilterproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsortfilterproxymodel_mimedata_isbase) {
            qsortfilterproxymodel_mimedata_isbase = false;
            return QSortFilterProxyModel::mimeData(indexes);
        } else if (qsortfilterproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qsortfilterproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_dropmimedata_isbase) {
            qsortfilterproxymodel_dropmimedata_isbase = false;
            return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qsortfilterproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_insertrows_isbase) {
            qsortfilterproxymodel_insertrows_isbase = false;
            return QSortFilterProxyModel::insertRows(row, count, parent);
        } else if (qsortfilterproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_insertcolumns_isbase) {
            qsortfilterproxymodel_insertcolumns_isbase = false;
            return QSortFilterProxyModel::insertColumns(column, count, parent);
        } else if (qsortfilterproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_removerows_isbase) {
            qsortfilterproxymodel_removerows_isbase = false;
            return QSortFilterProxyModel::removeRows(row, count, parent);
        } else if (qsortfilterproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_removecolumns_isbase) {
            qsortfilterproxymodel_removecolumns_isbase = false;
            return QSortFilterProxyModel::removeColumns(column, count, parent);
        } else if (qsortfilterproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsortfilterproxymodel_fetchmore_isbase) {
            qsortfilterproxymodel_fetchmore_isbase = false;
            QSortFilterProxyModel::fetchMore(parent);
        } else if (qsortfilterproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qsortfilterproxymodel_fetchmore_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_canfetchmore_isbase) {
            qsortfilterproxymodel_canfetchmore_isbase = false;
            return QSortFilterProxyModel::canFetchMore(parent);
        } else if (qsortfilterproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_flags_isbase) {
            qsortfilterproxymodel_flags_isbase = false;
            return QSortFilterProxyModel::flags(index);
        } else if (qsortfilterproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qsortfilterproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QSortFilterProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_buddy_isbase) {
            qsortfilterproxymodel_buddy_isbase = false;
            return QSortFilterProxyModel::buddy(index);
        } else if (qsortfilterproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qsortfilterproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsortfilterproxymodel_match_isbase) {
            qsortfilterproxymodel_match_isbase = false;
            return QSortFilterProxyModel::match(start, role, value, hits, flags);
        } else if (qsortfilterproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = qsortfilterproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QSortFilterProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_span_isbase) {
            qsortfilterproxymodel_span_isbase = false;
            return QSortFilterProxyModel::span(index);
        } else if (qsortfilterproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qsortfilterproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsortfilterproxymodel_sort_isbase) {
            qsortfilterproxymodel_sort_isbase = false;
            QSortFilterProxyModel::sort(column, order);
        } else if (qsortfilterproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qsortfilterproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            QSortFilterProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsortfilterproxymodel_mimetypes_isbase) {
            qsortfilterproxymodel_mimetypes_isbase = false;
            return QSortFilterProxyModel::mimeTypes();
        } else if (qsortfilterproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = qsortfilterproxymodel_mimetypes_callback();
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
            return QSortFilterProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsortfilterproxymodel_supporteddropactions_isbase) {
            qsortfilterproxymodel_supporteddropactions_isbase = false;
            return QSortFilterProxyModel::supportedDropActions();
        } else if (qsortfilterproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qsortfilterproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSortFilterProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsortfilterproxymodel_submit_isbase) {
            qsortfilterproxymodel_submit_isbase = false;
            return QSortFilterProxyModel::submit();
        } else if (qsortfilterproxymodel_submit_callback != nullptr) {
            bool callback_ret = qsortfilterproxymodel_submit_callback();
            return callback_ret;
        } else {
            return QSortFilterProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsortfilterproxymodel_revert_isbase) {
            qsortfilterproxymodel_revert_isbase = false;
            QSortFilterProxyModel::revert();
        } else if (qsortfilterproxymodel_revert_callback != nullptr) {
            qsortfilterproxymodel_revert_callback();
        } else {
            QSortFilterProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_itemdata_isbase) {
            qsortfilterproxymodel_itemdata_isbase = false;
            return QSortFilterProxyModel::itemData(index);
        } else if (qsortfilterproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qsortfilterproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QSortFilterProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsortfilterproxymodel_setitemdata_isbase) {
            qsortfilterproxymodel_setitemdata_isbase = false;
            return QSortFilterProxyModel::setItemData(index, roles);
        } else if (qsortfilterproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qsortfilterproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsortfilterproxymodel_clearitemdata_isbase) {
            qsortfilterproxymodel_clearitemdata_isbase = false;
            return QSortFilterProxyModel::clearItemData(index);
        } else if (qsortfilterproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qsortfilterproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_candropmimedata_isbase) {
            qsortfilterproxymodel_candropmimedata_isbase = false;
            return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qsortfilterproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qsortfilterproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsortfilterproxymodel_supporteddragactions_isbase) {
            qsortfilterproxymodel_supporteddragactions_isbase = false;
            return QSortFilterProxyModel::supportedDragActions();
        } else if (qsortfilterproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qsortfilterproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QSortFilterProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsortfilterproxymodel_rolenames_isbase) {
            qsortfilterproxymodel_rolenames_isbase = false;
            return QSortFilterProxyModel::roleNames();
        } else if (qsortfilterproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qsortfilterproxymodel_rolenames_callback();
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
            return QSortFilterProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsortfilterproxymodel_moverows_isbase) {
            qsortfilterproxymodel_moverows_isbase = false;
            return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qsortfilterproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsortfilterproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsortfilterproxymodel_movecolumns_isbase) {
            qsortfilterproxymodel_movecolumns_isbase = false;
            return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qsortfilterproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qsortfilterproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsortfilterproxymodel_multidata_isbase) {
            qsortfilterproxymodel_multidata_isbase = false;
            QSortFilterProxyModel::multiData(index, roleDataSpan);
        } else if (qsortfilterproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qsortfilterproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QSortFilterProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsortfilterproxymodel_resetinternaldata_isbase) {
            qsortfilterproxymodel_resetinternaldata_isbase = false;
            QSortFilterProxyModel::resetInternalData();
        } else if (qsortfilterproxymodel_resetinternaldata_callback != nullptr) {
            qsortfilterproxymodel_resetinternaldata_callback();
        } else {
            QSortFilterProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsortfilterproxymodel_event_isbase) {
            qsortfilterproxymodel_event_isbase = false;
            return QSortFilterProxyModel::event(event);
        } else if (qsortfilterproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsortfilterproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsortfilterproxymodel_eventfilter_isbase) {
            qsortfilterproxymodel_eventfilter_isbase = false;
            return QSortFilterProxyModel::eventFilter(watched, event);
        } else if (qsortfilterproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsortfilterproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsortfilterproxymodel_timerevent_isbase) {
            qsortfilterproxymodel_timerevent_isbase = false;
            QSortFilterProxyModel::timerEvent(event);
        } else if (qsortfilterproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsortfilterproxymodel_timerevent_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsortfilterproxymodel_childevent_isbase) {
            qsortfilterproxymodel_childevent_isbase = false;
            QSortFilterProxyModel::childEvent(event);
        } else if (qsortfilterproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsortfilterproxymodel_childevent_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsortfilterproxymodel_customevent_isbase) {
            qsortfilterproxymodel_customevent_isbase = false;
            QSortFilterProxyModel::customEvent(event);
        } else if (qsortfilterproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsortfilterproxymodel_customevent_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsortfilterproxymodel_connectnotify_isbase) {
            qsortfilterproxymodel_connectnotify_isbase = false;
            QSortFilterProxyModel::connectNotify(signal);
        } else if (qsortfilterproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsortfilterproxymodel_connectnotify_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsortfilterproxymodel_disconnectnotify_isbase) {
            qsortfilterproxymodel_disconnectnotify_isbase = false;
            QSortFilterProxyModel::disconnectNotify(signal);
        } else if (qsortfilterproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsortfilterproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            QSortFilterProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateFilter() {
        if (qsortfilterproxymodel_invalidatefilter_isbase) {
            qsortfilterproxymodel_invalidatefilter_isbase = false;
            QSortFilterProxyModel::invalidateFilter();
        } else if (qsortfilterproxymodel_invalidatefilter_callback != nullptr) {
            qsortfilterproxymodel_invalidatefilter_callback();
        } else {
            QSortFilterProxyModel::invalidateFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateRowsFilter() {
        if (qsortfilterproxymodel_invalidaterowsfilter_isbase) {
            qsortfilterproxymodel_invalidaterowsfilter_isbase = false;
            QSortFilterProxyModel::invalidateRowsFilter();
        } else if (qsortfilterproxymodel_invalidaterowsfilter_callback != nullptr) {
            qsortfilterproxymodel_invalidaterowsfilter_callback();
        } else {
            QSortFilterProxyModel::invalidateRowsFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateColumnsFilter() {
        if (qsortfilterproxymodel_invalidatecolumnsfilter_isbase) {
            qsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
            QSortFilterProxyModel::invalidateColumnsFilter();
        } else if (qsortfilterproxymodel_invalidatecolumnsfilter_callback != nullptr) {
            qsortfilterproxymodel_invalidatecolumnsfilter_callback();
        } else {
            QSortFilterProxyModel::invalidateColumnsFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qsortfilterproxymodel_createsourceindex_isbase) {
            qsortfilterproxymodel_createsourceindex_isbase = false;
            return QSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qsortfilterproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = qsortfilterproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qsortfilterproxymodel_createindex_isbase) {
            qsortfilterproxymodel_createindex_isbase = false;
            return QSortFilterProxyModel::createIndex(row, column);
        } else if (qsortfilterproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qsortfilterproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QSortFilterProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qsortfilterproxymodel_encodedata_isbase) {
            qsortfilterproxymodel_encodedata_isbase = false;
            QSortFilterProxyModel::encodeData(indexes, stream);
        } else if (qsortfilterproxymodel_encodedata_callback != nullptr) {
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

            qsortfilterproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QSortFilterProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qsortfilterproxymodel_decodedata_isbase) {
            qsortfilterproxymodel_decodedata_isbase = false;
            return QSortFilterProxyModel::decodeData(row, column, parent, stream);
        } else if (qsortfilterproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qsortfilterproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_begininsertrows_isbase) {
            qsortfilterproxymodel_begininsertrows_isbase = false;
            QSortFilterProxyModel::beginInsertRows(parent, first, last);
        } else if (qsortfilterproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsortfilterproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSortFilterProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qsortfilterproxymodel_endinsertrows_isbase) {
            qsortfilterproxymodel_endinsertrows_isbase = false;
            QSortFilterProxyModel::endInsertRows();
        } else if (qsortfilterproxymodel_endinsertrows_callback != nullptr) {
            qsortfilterproxymodel_endinsertrows_callback();
        } else {
            QSortFilterProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_beginremoverows_isbase) {
            qsortfilterproxymodel_beginremoverows_isbase = false;
            QSortFilterProxyModel::beginRemoveRows(parent, first, last);
        } else if (qsortfilterproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsortfilterproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSortFilterProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qsortfilterproxymodel_endremoverows_isbase) {
            qsortfilterproxymodel_endremoverows_isbase = false;
            QSortFilterProxyModel::endRemoveRows();
        } else if (qsortfilterproxymodel_endremoverows_callback != nullptr) {
            qsortfilterproxymodel_endremoverows_callback();
        } else {
            QSortFilterProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qsortfilterproxymodel_beginmoverows_isbase) {
            qsortfilterproxymodel_beginmoverows_isbase = false;
            return QSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qsortfilterproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qsortfilterproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qsortfilterproxymodel_endmoverows_isbase) {
            qsortfilterproxymodel_endmoverows_isbase = false;
            QSortFilterProxyModel::endMoveRows();
        } else if (qsortfilterproxymodel_endmoverows_callback != nullptr) {
            qsortfilterproxymodel_endmoverows_callback();
        } else {
            QSortFilterProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_begininsertcolumns_isbase) {
            qsortfilterproxymodel_begininsertcolumns_isbase = false;
            QSortFilterProxyModel::beginInsertColumns(parent, first, last);
        } else if (qsortfilterproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsortfilterproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSortFilterProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qsortfilterproxymodel_endinsertcolumns_isbase) {
            qsortfilterproxymodel_endinsertcolumns_isbase = false;
            QSortFilterProxyModel::endInsertColumns();
        } else if (qsortfilterproxymodel_endinsertcolumns_callback != nullptr) {
            qsortfilterproxymodel_endinsertcolumns_callback();
        } else {
            QSortFilterProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_beginremovecolumns_isbase) {
            qsortfilterproxymodel_beginremovecolumns_isbase = false;
            QSortFilterProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qsortfilterproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qsortfilterproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSortFilterProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qsortfilterproxymodel_endremovecolumns_isbase) {
            qsortfilterproxymodel_endremovecolumns_isbase = false;
            QSortFilterProxyModel::endRemoveColumns();
        } else if (qsortfilterproxymodel_endremovecolumns_callback != nullptr) {
            qsortfilterproxymodel_endremovecolumns_callback();
        } else {
            QSortFilterProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qsortfilterproxymodel_beginmovecolumns_isbase) {
            qsortfilterproxymodel_beginmovecolumns_isbase = false;
            return QSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qsortfilterproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qsortfilterproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qsortfilterproxymodel_endmovecolumns_isbase) {
            qsortfilterproxymodel_endmovecolumns_isbase = false;
            QSortFilterProxyModel::endMoveColumns();
        } else if (qsortfilterproxymodel_endmovecolumns_callback != nullptr) {
            qsortfilterproxymodel_endmovecolumns_callback();
        } else {
            QSortFilterProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qsortfilterproxymodel_beginresetmodel_isbase) {
            qsortfilterproxymodel_beginresetmodel_isbase = false;
            QSortFilterProxyModel::beginResetModel();
        } else if (qsortfilterproxymodel_beginresetmodel_callback != nullptr) {
            qsortfilterproxymodel_beginresetmodel_callback();
        } else {
            QSortFilterProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qsortfilterproxymodel_endresetmodel_isbase) {
            qsortfilterproxymodel_endresetmodel_isbase = false;
            QSortFilterProxyModel::endResetModel();
        } else if (qsortfilterproxymodel_endresetmodel_callback != nullptr) {
            qsortfilterproxymodel_endresetmodel_callback();
        } else {
            QSortFilterProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qsortfilterproxymodel_changepersistentindex_isbase) {
            qsortfilterproxymodel_changepersistentindex_isbase = false;
            QSortFilterProxyModel::changePersistentIndex(from, to);
        } else if (qsortfilterproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qsortfilterproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QSortFilterProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qsortfilterproxymodel_changepersistentindexlist_isbase) {
            qsortfilterproxymodel_changepersistentindexlist_isbase = false;
            QSortFilterProxyModel::changePersistentIndexList(from, to);
        } else if (qsortfilterproxymodel_changepersistentindexlist_callback != nullptr) {
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

            qsortfilterproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QSortFilterProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qsortfilterproxymodel_persistentindexlist_isbase) {
            qsortfilterproxymodel_persistentindexlist_isbase = false;
            return QSortFilterProxyModel::persistentIndexList();
        } else if (qsortfilterproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = qsortfilterproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QSortFilterProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsortfilterproxymodel_sender_isbase) {
            qsortfilterproxymodel_sender_isbase = false;
            return QSortFilterProxyModel::sender();
        } else if (qsortfilterproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = qsortfilterproxymodel_sender_callback();
            return callback_ret;
        } else {
            return QSortFilterProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsortfilterproxymodel_sendersignalindex_isbase) {
            qsortfilterproxymodel_sendersignalindex_isbase = false;
            return QSortFilterProxyModel::senderSignalIndex();
        } else if (qsortfilterproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qsortfilterproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSortFilterProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsortfilterproxymodel_receivers_isbase) {
            qsortfilterproxymodel_receivers_isbase = false;
            return QSortFilterProxyModel::receivers(signal);
        } else if (qsortfilterproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsortfilterproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSortFilterProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsortfilterproxymodel_issignalconnected_isbase) {
            qsortfilterproxymodel_issignalconnected_isbase = false;
            return QSortFilterProxyModel::isSignalConnected(signal);
        } else if (qsortfilterproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsortfilterproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSortFilterProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool QSortFilterProxyModel_QBaseFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend bool QSortFilterProxyModel_QBaseFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
    friend bool QSortFilterProxyModel_QBaseLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
    friend void QSortFilterProxyModel_ResetInternalData(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseResetInternalData(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_TimerEvent(QSortFilterProxyModel* self, QTimerEvent* event);
    friend void QSortFilterProxyModel_QBaseTimerEvent(QSortFilterProxyModel* self, QTimerEvent* event);
    friend void QSortFilterProxyModel_ChildEvent(QSortFilterProxyModel* self, QChildEvent* event);
    friend void QSortFilterProxyModel_QBaseChildEvent(QSortFilterProxyModel* self, QChildEvent* event);
    friend void QSortFilterProxyModel_CustomEvent(QSortFilterProxyModel* self, QEvent* event);
    friend void QSortFilterProxyModel_QBaseCustomEvent(QSortFilterProxyModel* self, QEvent* event);
    friend void QSortFilterProxyModel_ConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void QSortFilterProxyModel_QBaseConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void QSortFilterProxyModel_DisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void QSortFilterProxyModel_QBaseDisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void QSortFilterProxyModel_InvalidateFilter(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseInvalidateFilter(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_InvalidateRowsFilter(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseInvalidateRowsFilter(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_InvalidateColumnsFilter(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseInvalidateColumnsFilter(QSortFilterProxyModel* self);
    friend QModelIndex* QSortFilterProxyModel_CreateSourceIndex(const QSortFilterProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QSortFilterProxyModel_QBaseCreateSourceIndex(const QSortFilterProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QSortFilterProxyModel_CreateIndex(const QSortFilterProxyModel* self, int row, int column);
    friend QModelIndex* QSortFilterProxyModel_QBaseCreateIndex(const QSortFilterProxyModel* self, int row, int column);
    friend void QSortFilterProxyModel_EncodeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QSortFilterProxyModel_QBaseEncodeData(const QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QSortFilterProxyModel_DecodeData(QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QSortFilterProxyModel_QBaseDecodeData(QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QSortFilterProxyModel_BeginInsertRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_QBaseBeginInsertRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_EndInsertRows(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndInsertRows(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_BeginRemoveRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_QBaseBeginRemoveRows(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_EndRemoveRows(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndRemoveRows(QSortFilterProxyModel* self);
    friend bool QSortFilterProxyModel_BeginMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QSortFilterProxyModel_QBaseBeginMoveRows(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QSortFilterProxyModel_EndMoveRows(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndMoveRows(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_BeginInsertColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_QBaseBeginInsertColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_EndInsertColumns(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndInsertColumns(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_BeginRemoveColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_QBaseBeginRemoveColumns(QSortFilterProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QSortFilterProxyModel_EndRemoveColumns(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndRemoveColumns(QSortFilterProxyModel* self);
    friend bool QSortFilterProxyModel_BeginMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QSortFilterProxyModel_QBaseBeginMoveColumns(QSortFilterProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QSortFilterProxyModel_EndMoveColumns(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndMoveColumns(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_BeginResetModel(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseBeginResetModel(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_EndResetModel(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_QBaseEndResetModel(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_ChangePersistentIndex(QSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSortFilterProxyModel_QBaseChangePersistentIndex(QSortFilterProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QSortFilterProxyModel_ChangePersistentIndexList(QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QSortFilterProxyModel_QBaseChangePersistentIndexList(QSortFilterProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QSortFilterProxyModel_PersistentIndexList(const QSortFilterProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QSortFilterProxyModel_QBasePersistentIndexList(const QSortFilterProxyModel* self);
    friend QObject* QSortFilterProxyModel_Sender(const QSortFilterProxyModel* self);
    friend QObject* QSortFilterProxyModel_QBaseSender(const QSortFilterProxyModel* self);
    friend int QSortFilterProxyModel_SenderSignalIndex(const QSortFilterProxyModel* self);
    friend int QSortFilterProxyModel_QBaseSenderSignalIndex(const QSortFilterProxyModel* self);
    friend int QSortFilterProxyModel_Receivers(const QSortFilterProxyModel* self, const char* signal);
    friend int QSortFilterProxyModel_QBaseReceivers(const QSortFilterProxyModel* self, const char* signal);
    friend bool QSortFilterProxyModel_IsSignalConnected(const QSortFilterProxyModel* self, const QMetaMethod* signal);
    friend bool QSortFilterProxyModel_QBaseIsSignalConnected(const QSortFilterProxyModel* self, const QMetaMethod* signal);
};

#endif
