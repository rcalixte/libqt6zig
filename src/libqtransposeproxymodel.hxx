#pragma once
#ifndef SRCC_LIBVIRTUALQTRANSPOSEPROXYMODEL_H
#define SRCC_LIBVIRTUALQTRANSPOSEPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTransposeProxyModel so that we can call protected methods
class VirtualQTransposeProxyModel final : public QTransposeProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQTransposeProxyModel = true;

    // Virtual class public types (including callbacks)
    using QTransposeProxyModel_Metacall_Callback = int (*)(QTransposeProxyModel*, int, int, void**);
    using QTransposeProxyModel_SetSourceModel_Callback = void (*)(QTransposeProxyModel*, QAbstractItemModel*);
    using QTransposeProxyModel_RowCount_Callback = int (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_ColumnCount_Callback = int (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_HeaderData_Callback = QVariant* (*)(const QTransposeProxyModel*, int, int, int);
    using QTransposeProxyModel_SetHeaderData_Callback = bool (*)(QTransposeProxyModel*, int, int, QVariant*, int);
    using QTransposeProxyModel_SetItemData_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QTransposeProxyModel_Span_Callback = QSize* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_MapToSource_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Parent_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Index_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_InsertRows_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_RemoveRows_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_MoveRows_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QTransposeProxyModel_InsertColumns_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_RemoveColumns_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_MoveColumns_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QTransposeProxyModel_Sort_Callback = void (*)(QTransposeProxyModel*, int, int);
    using QTransposeProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QTransposeProxyModel*, QItemSelection*);
    using QTransposeProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QTransposeProxyModel*, QItemSelection*);
    using QTransposeProxyModel_Submit_Callback = bool (*)();
    using QTransposeProxyModel_Revert_Callback = void (*)();
    using QTransposeProxyModel_Data_Callback = QVariant* (*)(const QTransposeProxyModel*, QModelIndex*, int);
    using QTransposeProxyModel_Flags_Callback = int (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_SetData_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, QVariant*, int);
    using QTransposeProxyModel_ClearItemData_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Buddy_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_CanFetchMore_Callback = bool (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_FetchMore_Callback = void (*)(QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_HasChildren_Callback = bool (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Sibling_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_MimeData_Callback = QMimeData* (*)(const QTransposeProxyModel*, libqt_list /* of QModelIndex* */);
    using QTransposeProxyModel_CanDropMimeData_Callback = bool (*)(const QTransposeProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QTransposeProxyModel_DropMimeData_Callback = bool (*)(QTransposeProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QTransposeProxyModel_MimeTypes_Callback = const char** (*)();
    using QTransposeProxyModel_SupportedDragActions_Callback = int (*)();
    using QTransposeProxyModel_SupportedDropActions_Callback = int (*)();
    using QTransposeProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QTransposeProxyModel_Match_Callback = QModelIndex** (*)(const QTransposeProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QTransposeProxyModel_MultiData_Callback = void (*)(const QTransposeProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QTransposeProxyModel_ResetInternalData_Callback = void (*)();
    using QTransposeProxyModel_Event_Callback = bool (*)(QTransposeProxyModel*, QEvent*);
    using QTransposeProxyModel_EventFilter_Callback = bool (*)(QTransposeProxyModel*, QObject*, QEvent*);
    using QTransposeProxyModel_TimerEvent_Callback = void (*)(QTransposeProxyModel*, QTimerEvent*);
    using QTransposeProxyModel_ChildEvent_Callback = void (*)(QTransposeProxyModel*, QChildEvent*);
    using QTransposeProxyModel_CustomEvent_Callback = void (*)(QTransposeProxyModel*, QEvent*);
    using QTransposeProxyModel_ConnectNotify_Callback = void (*)(QTransposeProxyModel*, QMetaMethod*);
    using QTransposeProxyModel_DisconnectNotify_Callback = void (*)(QTransposeProxyModel*, QMetaMethod*);
    using QTransposeProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int, void*);
    using QTransposeProxyModel_CreateIndex_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int);
    using QTransposeProxyModel_EncodeData_Callback = void (*)(const QTransposeProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QTransposeProxyModel_DecodeData_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*, QDataStream*);
    using QTransposeProxyModel_BeginInsertRows_Callback = void (*)(QTransposeProxyModel*, QModelIndex*, int, int);
    using QTransposeProxyModel_EndInsertRows_Callback = void (*)();
    using QTransposeProxyModel_BeginRemoveRows_Callback = void (*)(QTransposeProxyModel*, QModelIndex*, int, int);
    using QTransposeProxyModel_EndRemoveRows_Callback = void (*)();
    using QTransposeProxyModel_BeginMoveRows_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QTransposeProxyModel_EndMoveRows_Callback = void (*)();
    using QTransposeProxyModel_BeginInsertColumns_Callback = void (*)(QTransposeProxyModel*, QModelIndex*, int, int);
    using QTransposeProxyModel_EndInsertColumns_Callback = void (*)();
    using QTransposeProxyModel_BeginRemoveColumns_Callback = void (*)(QTransposeProxyModel*, QModelIndex*, int, int);
    using QTransposeProxyModel_EndRemoveColumns_Callback = void (*)();
    using QTransposeProxyModel_BeginMoveColumns_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QTransposeProxyModel_EndMoveColumns_Callback = void (*)();
    using QTransposeProxyModel_BeginResetModel_Callback = void (*)();
    using QTransposeProxyModel_EndResetModel_Callback = void (*)();
    using QTransposeProxyModel_ChangePersistentIndex_Callback = void (*)(QTransposeProxyModel*, QModelIndex*, QModelIndex*);
    using QTransposeProxyModel_ChangePersistentIndexList_Callback = void (*)(QTransposeProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QTransposeProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using QTransposeProxyModel_Sender_Callback = QObject* (*)();
    using QTransposeProxyModel_SenderSignalIndex_Callback = int (*)();
    using QTransposeProxyModel_Receivers_Callback = int (*)(const QTransposeProxyModel*, const char*);
    using QTransposeProxyModel_IsSignalConnected_Callback = bool (*)(const QTransposeProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTransposeProxyModel_Metacall_Callback qtransposeproxymodel_metacall_callback = nullptr;
    QTransposeProxyModel_SetSourceModel_Callback qtransposeproxymodel_setsourcemodel_callback = nullptr;
    QTransposeProxyModel_RowCount_Callback qtransposeproxymodel_rowcount_callback = nullptr;
    QTransposeProxyModel_ColumnCount_Callback qtransposeproxymodel_columncount_callback = nullptr;
    QTransposeProxyModel_HeaderData_Callback qtransposeproxymodel_headerdata_callback = nullptr;
    QTransposeProxyModel_SetHeaderData_Callback qtransposeproxymodel_setheaderdata_callback = nullptr;
    QTransposeProxyModel_SetItemData_Callback qtransposeproxymodel_setitemdata_callback = nullptr;
    QTransposeProxyModel_Span_Callback qtransposeproxymodel_span_callback = nullptr;
    QTransposeProxyModel_ItemData_Callback qtransposeproxymodel_itemdata_callback = nullptr;
    QTransposeProxyModel_MapFromSource_Callback qtransposeproxymodel_mapfromsource_callback = nullptr;
    QTransposeProxyModel_MapToSource_Callback qtransposeproxymodel_maptosource_callback = nullptr;
    QTransposeProxyModel_Parent_Callback qtransposeproxymodel_parent_callback = nullptr;
    QTransposeProxyModel_Index_Callback qtransposeproxymodel_index_callback = nullptr;
    QTransposeProxyModel_InsertRows_Callback qtransposeproxymodel_insertrows_callback = nullptr;
    QTransposeProxyModel_RemoveRows_Callback qtransposeproxymodel_removerows_callback = nullptr;
    QTransposeProxyModel_MoveRows_Callback qtransposeproxymodel_moverows_callback = nullptr;
    QTransposeProxyModel_InsertColumns_Callback qtransposeproxymodel_insertcolumns_callback = nullptr;
    QTransposeProxyModel_RemoveColumns_Callback qtransposeproxymodel_removecolumns_callback = nullptr;
    QTransposeProxyModel_MoveColumns_Callback qtransposeproxymodel_movecolumns_callback = nullptr;
    QTransposeProxyModel_Sort_Callback qtransposeproxymodel_sort_callback = nullptr;
    QTransposeProxyModel_MapSelectionToSource_Callback qtransposeproxymodel_mapselectiontosource_callback = nullptr;
    QTransposeProxyModel_MapSelectionFromSource_Callback qtransposeproxymodel_mapselectionfromsource_callback = nullptr;
    QTransposeProxyModel_Submit_Callback qtransposeproxymodel_submit_callback = nullptr;
    QTransposeProxyModel_Revert_Callback qtransposeproxymodel_revert_callback = nullptr;
    QTransposeProxyModel_Data_Callback qtransposeproxymodel_data_callback = nullptr;
    QTransposeProxyModel_Flags_Callback qtransposeproxymodel_flags_callback = nullptr;
    QTransposeProxyModel_SetData_Callback qtransposeproxymodel_setdata_callback = nullptr;
    QTransposeProxyModel_ClearItemData_Callback qtransposeproxymodel_clearitemdata_callback = nullptr;
    QTransposeProxyModel_Buddy_Callback qtransposeproxymodel_buddy_callback = nullptr;
    QTransposeProxyModel_CanFetchMore_Callback qtransposeproxymodel_canfetchmore_callback = nullptr;
    QTransposeProxyModel_FetchMore_Callback qtransposeproxymodel_fetchmore_callback = nullptr;
    QTransposeProxyModel_HasChildren_Callback qtransposeproxymodel_haschildren_callback = nullptr;
    QTransposeProxyModel_Sibling_Callback qtransposeproxymodel_sibling_callback = nullptr;
    QTransposeProxyModel_MimeData_Callback qtransposeproxymodel_mimedata_callback = nullptr;
    QTransposeProxyModel_CanDropMimeData_Callback qtransposeproxymodel_candropmimedata_callback = nullptr;
    QTransposeProxyModel_DropMimeData_Callback qtransposeproxymodel_dropmimedata_callback = nullptr;
    QTransposeProxyModel_MimeTypes_Callback qtransposeproxymodel_mimetypes_callback = nullptr;
    QTransposeProxyModel_SupportedDragActions_Callback qtransposeproxymodel_supporteddragactions_callback = nullptr;
    QTransposeProxyModel_SupportedDropActions_Callback qtransposeproxymodel_supporteddropactions_callback = nullptr;
    QTransposeProxyModel_RoleNames_Callback qtransposeproxymodel_rolenames_callback = nullptr;
    QTransposeProxyModel_Match_Callback qtransposeproxymodel_match_callback = nullptr;
    QTransposeProxyModel_MultiData_Callback qtransposeproxymodel_multidata_callback = nullptr;
    QTransposeProxyModel_ResetInternalData_Callback qtransposeproxymodel_resetinternaldata_callback = nullptr;
    QTransposeProxyModel_Event_Callback qtransposeproxymodel_event_callback = nullptr;
    QTransposeProxyModel_EventFilter_Callback qtransposeproxymodel_eventfilter_callback = nullptr;
    QTransposeProxyModel_TimerEvent_Callback qtransposeproxymodel_timerevent_callback = nullptr;
    QTransposeProxyModel_ChildEvent_Callback qtransposeproxymodel_childevent_callback = nullptr;
    QTransposeProxyModel_CustomEvent_Callback qtransposeproxymodel_customevent_callback = nullptr;
    QTransposeProxyModel_ConnectNotify_Callback qtransposeproxymodel_connectnotify_callback = nullptr;
    QTransposeProxyModel_DisconnectNotify_Callback qtransposeproxymodel_disconnectnotify_callback = nullptr;
    QTransposeProxyModel_CreateSourceIndex_Callback qtransposeproxymodel_createsourceindex_callback = nullptr;
    QTransposeProxyModel_CreateIndex_Callback qtransposeproxymodel_createindex_callback = nullptr;
    QTransposeProxyModel_EncodeData_Callback qtransposeproxymodel_encodedata_callback = nullptr;
    QTransposeProxyModel_DecodeData_Callback qtransposeproxymodel_decodedata_callback = nullptr;
    QTransposeProxyModel_BeginInsertRows_Callback qtransposeproxymodel_begininsertrows_callback = nullptr;
    QTransposeProxyModel_EndInsertRows_Callback qtransposeproxymodel_endinsertrows_callback = nullptr;
    QTransposeProxyModel_BeginRemoveRows_Callback qtransposeproxymodel_beginremoverows_callback = nullptr;
    QTransposeProxyModel_EndRemoveRows_Callback qtransposeproxymodel_endremoverows_callback = nullptr;
    QTransposeProxyModel_BeginMoveRows_Callback qtransposeproxymodel_beginmoverows_callback = nullptr;
    QTransposeProxyModel_EndMoveRows_Callback qtransposeproxymodel_endmoverows_callback = nullptr;
    QTransposeProxyModel_BeginInsertColumns_Callback qtransposeproxymodel_begininsertcolumns_callback = nullptr;
    QTransposeProxyModel_EndInsertColumns_Callback qtransposeproxymodel_endinsertcolumns_callback = nullptr;
    QTransposeProxyModel_BeginRemoveColumns_Callback qtransposeproxymodel_beginremovecolumns_callback = nullptr;
    QTransposeProxyModel_EndRemoveColumns_Callback qtransposeproxymodel_endremovecolumns_callback = nullptr;
    QTransposeProxyModel_BeginMoveColumns_Callback qtransposeproxymodel_beginmovecolumns_callback = nullptr;
    QTransposeProxyModel_EndMoveColumns_Callback qtransposeproxymodel_endmovecolumns_callback = nullptr;
    QTransposeProxyModel_BeginResetModel_Callback qtransposeproxymodel_beginresetmodel_callback = nullptr;
    QTransposeProxyModel_EndResetModel_Callback qtransposeproxymodel_endresetmodel_callback = nullptr;
    QTransposeProxyModel_ChangePersistentIndex_Callback qtransposeproxymodel_changepersistentindex_callback = nullptr;
    QTransposeProxyModel_ChangePersistentIndexList_Callback qtransposeproxymodel_changepersistentindexlist_callback = nullptr;
    QTransposeProxyModel_PersistentIndexList_Callback qtransposeproxymodel_persistentindexlist_callback = nullptr;
    QTransposeProxyModel_Sender_Callback qtransposeproxymodel_sender_callback = nullptr;
    QTransposeProxyModel_SenderSignalIndex_Callback qtransposeproxymodel_sendersignalindex_callback = nullptr;
    QTransposeProxyModel_Receivers_Callback qtransposeproxymodel_receivers_callback = nullptr;
    QTransposeProxyModel_IsSignalConnected_Callback qtransposeproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtransposeproxymodel_metacall_isbase = false;
    mutable bool qtransposeproxymodel_setsourcemodel_isbase = false;
    mutable bool qtransposeproxymodel_rowcount_isbase = false;
    mutable bool qtransposeproxymodel_columncount_isbase = false;
    mutable bool qtransposeproxymodel_headerdata_isbase = false;
    mutable bool qtransposeproxymodel_setheaderdata_isbase = false;
    mutable bool qtransposeproxymodel_setitemdata_isbase = false;
    mutable bool qtransposeproxymodel_span_isbase = false;
    mutable bool qtransposeproxymodel_itemdata_isbase = false;
    mutable bool qtransposeproxymodel_mapfromsource_isbase = false;
    mutable bool qtransposeproxymodel_maptosource_isbase = false;
    mutable bool qtransposeproxymodel_parent_isbase = false;
    mutable bool qtransposeproxymodel_index_isbase = false;
    mutable bool qtransposeproxymodel_insertrows_isbase = false;
    mutable bool qtransposeproxymodel_removerows_isbase = false;
    mutable bool qtransposeproxymodel_moverows_isbase = false;
    mutable bool qtransposeproxymodel_insertcolumns_isbase = false;
    mutable bool qtransposeproxymodel_removecolumns_isbase = false;
    mutable bool qtransposeproxymodel_movecolumns_isbase = false;
    mutable bool qtransposeproxymodel_sort_isbase = false;
    mutable bool qtransposeproxymodel_mapselectiontosource_isbase = false;
    mutable bool qtransposeproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qtransposeproxymodel_submit_isbase = false;
    mutable bool qtransposeproxymodel_revert_isbase = false;
    mutable bool qtransposeproxymodel_data_isbase = false;
    mutable bool qtransposeproxymodel_flags_isbase = false;
    mutable bool qtransposeproxymodel_setdata_isbase = false;
    mutable bool qtransposeproxymodel_clearitemdata_isbase = false;
    mutable bool qtransposeproxymodel_buddy_isbase = false;
    mutable bool qtransposeproxymodel_canfetchmore_isbase = false;
    mutable bool qtransposeproxymodel_fetchmore_isbase = false;
    mutable bool qtransposeproxymodel_haschildren_isbase = false;
    mutable bool qtransposeproxymodel_sibling_isbase = false;
    mutable bool qtransposeproxymodel_mimedata_isbase = false;
    mutable bool qtransposeproxymodel_candropmimedata_isbase = false;
    mutable bool qtransposeproxymodel_dropmimedata_isbase = false;
    mutable bool qtransposeproxymodel_mimetypes_isbase = false;
    mutable bool qtransposeproxymodel_supporteddragactions_isbase = false;
    mutable bool qtransposeproxymodel_supporteddropactions_isbase = false;
    mutable bool qtransposeproxymodel_rolenames_isbase = false;
    mutable bool qtransposeproxymodel_match_isbase = false;
    mutable bool qtransposeproxymodel_multidata_isbase = false;
    mutable bool qtransposeproxymodel_resetinternaldata_isbase = false;
    mutable bool qtransposeproxymodel_event_isbase = false;
    mutable bool qtransposeproxymodel_eventfilter_isbase = false;
    mutable bool qtransposeproxymodel_timerevent_isbase = false;
    mutable bool qtransposeproxymodel_childevent_isbase = false;
    mutable bool qtransposeproxymodel_customevent_isbase = false;
    mutable bool qtransposeproxymodel_connectnotify_isbase = false;
    mutable bool qtransposeproxymodel_disconnectnotify_isbase = false;
    mutable bool qtransposeproxymodel_createsourceindex_isbase = false;
    mutable bool qtransposeproxymodel_createindex_isbase = false;
    mutable bool qtransposeproxymodel_encodedata_isbase = false;
    mutable bool qtransposeproxymodel_decodedata_isbase = false;
    mutable bool qtransposeproxymodel_begininsertrows_isbase = false;
    mutable bool qtransposeproxymodel_endinsertrows_isbase = false;
    mutable bool qtransposeproxymodel_beginremoverows_isbase = false;
    mutable bool qtransposeproxymodel_endremoverows_isbase = false;
    mutable bool qtransposeproxymodel_beginmoverows_isbase = false;
    mutable bool qtransposeproxymodel_endmoverows_isbase = false;
    mutable bool qtransposeproxymodel_begininsertcolumns_isbase = false;
    mutable bool qtransposeproxymodel_endinsertcolumns_isbase = false;
    mutable bool qtransposeproxymodel_beginremovecolumns_isbase = false;
    mutable bool qtransposeproxymodel_endremovecolumns_isbase = false;
    mutable bool qtransposeproxymodel_beginmovecolumns_isbase = false;
    mutable bool qtransposeproxymodel_endmovecolumns_isbase = false;
    mutable bool qtransposeproxymodel_beginresetmodel_isbase = false;
    mutable bool qtransposeproxymodel_endresetmodel_isbase = false;
    mutable bool qtransposeproxymodel_changepersistentindex_isbase = false;
    mutable bool qtransposeproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qtransposeproxymodel_persistentindexlist_isbase = false;
    mutable bool qtransposeproxymodel_sender_isbase = false;
    mutable bool qtransposeproxymodel_sendersignalindex_isbase = false;
    mutable bool qtransposeproxymodel_receivers_isbase = false;
    mutable bool qtransposeproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQTransposeProxyModel() : QTransposeProxyModel() {};
    VirtualQTransposeProxyModel(QObject* parent) : QTransposeProxyModel(parent) {};

    ~VirtualQTransposeProxyModel() {
        qtransposeproxymodel_metacall_callback = nullptr;
        qtransposeproxymodel_setsourcemodel_callback = nullptr;
        qtransposeproxymodel_rowcount_callback = nullptr;
        qtransposeproxymodel_columncount_callback = nullptr;
        qtransposeproxymodel_headerdata_callback = nullptr;
        qtransposeproxymodel_setheaderdata_callback = nullptr;
        qtransposeproxymodel_setitemdata_callback = nullptr;
        qtransposeproxymodel_span_callback = nullptr;
        qtransposeproxymodel_itemdata_callback = nullptr;
        qtransposeproxymodel_mapfromsource_callback = nullptr;
        qtransposeproxymodel_maptosource_callback = nullptr;
        qtransposeproxymodel_parent_callback = nullptr;
        qtransposeproxymodel_index_callback = nullptr;
        qtransposeproxymodel_insertrows_callback = nullptr;
        qtransposeproxymodel_removerows_callback = nullptr;
        qtransposeproxymodel_moverows_callback = nullptr;
        qtransposeproxymodel_insertcolumns_callback = nullptr;
        qtransposeproxymodel_removecolumns_callback = nullptr;
        qtransposeproxymodel_movecolumns_callback = nullptr;
        qtransposeproxymodel_sort_callback = nullptr;
        qtransposeproxymodel_mapselectiontosource_callback = nullptr;
        qtransposeproxymodel_mapselectionfromsource_callback = nullptr;
        qtransposeproxymodel_submit_callback = nullptr;
        qtransposeproxymodel_revert_callback = nullptr;
        qtransposeproxymodel_data_callback = nullptr;
        qtransposeproxymodel_flags_callback = nullptr;
        qtransposeproxymodel_setdata_callback = nullptr;
        qtransposeproxymodel_clearitemdata_callback = nullptr;
        qtransposeproxymodel_buddy_callback = nullptr;
        qtransposeproxymodel_canfetchmore_callback = nullptr;
        qtransposeproxymodel_fetchmore_callback = nullptr;
        qtransposeproxymodel_haschildren_callback = nullptr;
        qtransposeproxymodel_sibling_callback = nullptr;
        qtransposeproxymodel_mimedata_callback = nullptr;
        qtransposeproxymodel_candropmimedata_callback = nullptr;
        qtransposeproxymodel_dropmimedata_callback = nullptr;
        qtransposeproxymodel_mimetypes_callback = nullptr;
        qtransposeproxymodel_supporteddragactions_callback = nullptr;
        qtransposeproxymodel_supporteddropactions_callback = nullptr;
        qtransposeproxymodel_rolenames_callback = nullptr;
        qtransposeproxymodel_match_callback = nullptr;
        qtransposeproxymodel_multidata_callback = nullptr;
        qtransposeproxymodel_resetinternaldata_callback = nullptr;
        qtransposeproxymodel_event_callback = nullptr;
        qtransposeproxymodel_eventfilter_callback = nullptr;
        qtransposeproxymodel_timerevent_callback = nullptr;
        qtransposeproxymodel_childevent_callback = nullptr;
        qtransposeproxymodel_customevent_callback = nullptr;
        qtransposeproxymodel_connectnotify_callback = nullptr;
        qtransposeproxymodel_disconnectnotify_callback = nullptr;
        qtransposeproxymodel_createsourceindex_callback = nullptr;
        qtransposeproxymodel_createindex_callback = nullptr;
        qtransposeproxymodel_encodedata_callback = nullptr;
        qtransposeproxymodel_decodedata_callback = nullptr;
        qtransposeproxymodel_begininsertrows_callback = nullptr;
        qtransposeproxymodel_endinsertrows_callback = nullptr;
        qtransposeproxymodel_beginremoverows_callback = nullptr;
        qtransposeproxymodel_endremoverows_callback = nullptr;
        qtransposeproxymodel_beginmoverows_callback = nullptr;
        qtransposeproxymodel_endmoverows_callback = nullptr;
        qtransposeproxymodel_begininsertcolumns_callback = nullptr;
        qtransposeproxymodel_endinsertcolumns_callback = nullptr;
        qtransposeproxymodel_beginremovecolumns_callback = nullptr;
        qtransposeproxymodel_endremovecolumns_callback = nullptr;
        qtransposeproxymodel_beginmovecolumns_callback = nullptr;
        qtransposeproxymodel_endmovecolumns_callback = nullptr;
        qtransposeproxymodel_beginresetmodel_callback = nullptr;
        qtransposeproxymodel_endresetmodel_callback = nullptr;
        qtransposeproxymodel_changepersistentindex_callback = nullptr;
        qtransposeproxymodel_changepersistentindexlist_callback = nullptr;
        qtransposeproxymodel_persistentindexlist_callback = nullptr;
        qtransposeproxymodel_sender_callback = nullptr;
        qtransposeproxymodel_sendersignalindex_callback = nullptr;
        qtransposeproxymodel_receivers_callback = nullptr;
        qtransposeproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTransposeProxyModel_Metacall_Callback(QTransposeProxyModel_Metacall_Callback cb) { qtransposeproxymodel_metacall_callback = cb; }
    inline void setQTransposeProxyModel_SetSourceModel_Callback(QTransposeProxyModel_SetSourceModel_Callback cb) { qtransposeproxymodel_setsourcemodel_callback = cb; }
    inline void setQTransposeProxyModel_RowCount_Callback(QTransposeProxyModel_RowCount_Callback cb) { qtransposeproxymodel_rowcount_callback = cb; }
    inline void setQTransposeProxyModel_ColumnCount_Callback(QTransposeProxyModel_ColumnCount_Callback cb) { qtransposeproxymodel_columncount_callback = cb; }
    inline void setQTransposeProxyModel_HeaderData_Callback(QTransposeProxyModel_HeaderData_Callback cb) { qtransposeproxymodel_headerdata_callback = cb; }
    inline void setQTransposeProxyModel_SetHeaderData_Callback(QTransposeProxyModel_SetHeaderData_Callback cb) { qtransposeproxymodel_setheaderdata_callback = cb; }
    inline void setQTransposeProxyModel_SetItemData_Callback(QTransposeProxyModel_SetItemData_Callback cb) { qtransposeproxymodel_setitemdata_callback = cb; }
    inline void setQTransposeProxyModel_Span_Callback(QTransposeProxyModel_Span_Callback cb) { qtransposeproxymodel_span_callback = cb; }
    inline void setQTransposeProxyModel_ItemData_Callback(QTransposeProxyModel_ItemData_Callback cb) { qtransposeproxymodel_itemdata_callback = cb; }
    inline void setQTransposeProxyModel_MapFromSource_Callback(QTransposeProxyModel_MapFromSource_Callback cb) { qtransposeproxymodel_mapfromsource_callback = cb; }
    inline void setQTransposeProxyModel_MapToSource_Callback(QTransposeProxyModel_MapToSource_Callback cb) { qtransposeproxymodel_maptosource_callback = cb; }
    inline void setQTransposeProxyModel_Parent_Callback(QTransposeProxyModel_Parent_Callback cb) { qtransposeproxymodel_parent_callback = cb; }
    inline void setQTransposeProxyModel_Index_Callback(QTransposeProxyModel_Index_Callback cb) { qtransposeproxymodel_index_callback = cb; }
    inline void setQTransposeProxyModel_InsertRows_Callback(QTransposeProxyModel_InsertRows_Callback cb) { qtransposeproxymodel_insertrows_callback = cb; }
    inline void setQTransposeProxyModel_RemoveRows_Callback(QTransposeProxyModel_RemoveRows_Callback cb) { qtransposeproxymodel_removerows_callback = cb; }
    inline void setQTransposeProxyModel_MoveRows_Callback(QTransposeProxyModel_MoveRows_Callback cb) { qtransposeproxymodel_moverows_callback = cb; }
    inline void setQTransposeProxyModel_InsertColumns_Callback(QTransposeProxyModel_InsertColumns_Callback cb) { qtransposeproxymodel_insertcolumns_callback = cb; }
    inline void setQTransposeProxyModel_RemoveColumns_Callback(QTransposeProxyModel_RemoveColumns_Callback cb) { qtransposeproxymodel_removecolumns_callback = cb; }
    inline void setQTransposeProxyModel_MoveColumns_Callback(QTransposeProxyModel_MoveColumns_Callback cb) { qtransposeproxymodel_movecolumns_callback = cb; }
    inline void setQTransposeProxyModel_Sort_Callback(QTransposeProxyModel_Sort_Callback cb) { qtransposeproxymodel_sort_callback = cb; }
    inline void setQTransposeProxyModel_MapSelectionToSource_Callback(QTransposeProxyModel_MapSelectionToSource_Callback cb) { qtransposeproxymodel_mapselectiontosource_callback = cb; }
    inline void setQTransposeProxyModel_MapSelectionFromSource_Callback(QTransposeProxyModel_MapSelectionFromSource_Callback cb) { qtransposeproxymodel_mapselectionfromsource_callback = cb; }
    inline void setQTransposeProxyModel_Submit_Callback(QTransposeProxyModel_Submit_Callback cb) { qtransposeproxymodel_submit_callback = cb; }
    inline void setQTransposeProxyModel_Revert_Callback(QTransposeProxyModel_Revert_Callback cb) { qtransposeproxymodel_revert_callback = cb; }
    inline void setQTransposeProxyModel_Data_Callback(QTransposeProxyModel_Data_Callback cb) { qtransposeproxymodel_data_callback = cb; }
    inline void setQTransposeProxyModel_Flags_Callback(QTransposeProxyModel_Flags_Callback cb) { qtransposeproxymodel_flags_callback = cb; }
    inline void setQTransposeProxyModel_SetData_Callback(QTransposeProxyModel_SetData_Callback cb) { qtransposeproxymodel_setdata_callback = cb; }
    inline void setQTransposeProxyModel_ClearItemData_Callback(QTransposeProxyModel_ClearItemData_Callback cb) { qtransposeproxymodel_clearitemdata_callback = cb; }
    inline void setQTransposeProxyModel_Buddy_Callback(QTransposeProxyModel_Buddy_Callback cb) { qtransposeproxymodel_buddy_callback = cb; }
    inline void setQTransposeProxyModel_CanFetchMore_Callback(QTransposeProxyModel_CanFetchMore_Callback cb) { qtransposeproxymodel_canfetchmore_callback = cb; }
    inline void setQTransposeProxyModel_FetchMore_Callback(QTransposeProxyModel_FetchMore_Callback cb) { qtransposeproxymodel_fetchmore_callback = cb; }
    inline void setQTransposeProxyModel_HasChildren_Callback(QTransposeProxyModel_HasChildren_Callback cb) { qtransposeproxymodel_haschildren_callback = cb; }
    inline void setQTransposeProxyModel_Sibling_Callback(QTransposeProxyModel_Sibling_Callback cb) { qtransposeproxymodel_sibling_callback = cb; }
    inline void setQTransposeProxyModel_MimeData_Callback(QTransposeProxyModel_MimeData_Callback cb) { qtransposeproxymodel_mimedata_callback = cb; }
    inline void setQTransposeProxyModel_CanDropMimeData_Callback(QTransposeProxyModel_CanDropMimeData_Callback cb) { qtransposeproxymodel_candropmimedata_callback = cb; }
    inline void setQTransposeProxyModel_DropMimeData_Callback(QTransposeProxyModel_DropMimeData_Callback cb) { qtransposeproxymodel_dropmimedata_callback = cb; }
    inline void setQTransposeProxyModel_MimeTypes_Callback(QTransposeProxyModel_MimeTypes_Callback cb) { qtransposeproxymodel_mimetypes_callback = cb; }
    inline void setQTransposeProxyModel_SupportedDragActions_Callback(QTransposeProxyModel_SupportedDragActions_Callback cb) { qtransposeproxymodel_supporteddragactions_callback = cb; }
    inline void setQTransposeProxyModel_SupportedDropActions_Callback(QTransposeProxyModel_SupportedDropActions_Callback cb) { qtransposeproxymodel_supporteddropactions_callback = cb; }
    inline void setQTransposeProxyModel_RoleNames_Callback(QTransposeProxyModel_RoleNames_Callback cb) { qtransposeproxymodel_rolenames_callback = cb; }
    inline void setQTransposeProxyModel_Match_Callback(QTransposeProxyModel_Match_Callback cb) { qtransposeproxymodel_match_callback = cb; }
    inline void setQTransposeProxyModel_MultiData_Callback(QTransposeProxyModel_MultiData_Callback cb) { qtransposeproxymodel_multidata_callback = cb; }
    inline void setQTransposeProxyModel_ResetInternalData_Callback(QTransposeProxyModel_ResetInternalData_Callback cb) { qtransposeproxymodel_resetinternaldata_callback = cb; }
    inline void setQTransposeProxyModel_Event_Callback(QTransposeProxyModel_Event_Callback cb) { qtransposeproxymodel_event_callback = cb; }
    inline void setQTransposeProxyModel_EventFilter_Callback(QTransposeProxyModel_EventFilter_Callback cb) { qtransposeproxymodel_eventfilter_callback = cb; }
    inline void setQTransposeProxyModel_TimerEvent_Callback(QTransposeProxyModel_TimerEvent_Callback cb) { qtransposeproxymodel_timerevent_callback = cb; }
    inline void setQTransposeProxyModel_ChildEvent_Callback(QTransposeProxyModel_ChildEvent_Callback cb) { qtransposeproxymodel_childevent_callback = cb; }
    inline void setQTransposeProxyModel_CustomEvent_Callback(QTransposeProxyModel_CustomEvent_Callback cb) { qtransposeproxymodel_customevent_callback = cb; }
    inline void setQTransposeProxyModel_ConnectNotify_Callback(QTransposeProxyModel_ConnectNotify_Callback cb) { qtransposeproxymodel_connectnotify_callback = cb; }
    inline void setQTransposeProxyModel_DisconnectNotify_Callback(QTransposeProxyModel_DisconnectNotify_Callback cb) { qtransposeproxymodel_disconnectnotify_callback = cb; }
    inline void setQTransposeProxyModel_CreateSourceIndex_Callback(QTransposeProxyModel_CreateSourceIndex_Callback cb) { qtransposeproxymodel_createsourceindex_callback = cb; }
    inline void setQTransposeProxyModel_CreateIndex_Callback(QTransposeProxyModel_CreateIndex_Callback cb) { qtransposeproxymodel_createindex_callback = cb; }
    inline void setQTransposeProxyModel_EncodeData_Callback(QTransposeProxyModel_EncodeData_Callback cb) { qtransposeproxymodel_encodedata_callback = cb; }
    inline void setQTransposeProxyModel_DecodeData_Callback(QTransposeProxyModel_DecodeData_Callback cb) { qtransposeproxymodel_decodedata_callback = cb; }
    inline void setQTransposeProxyModel_BeginInsertRows_Callback(QTransposeProxyModel_BeginInsertRows_Callback cb) { qtransposeproxymodel_begininsertrows_callback = cb; }
    inline void setQTransposeProxyModel_EndInsertRows_Callback(QTransposeProxyModel_EndInsertRows_Callback cb) { qtransposeproxymodel_endinsertrows_callback = cb; }
    inline void setQTransposeProxyModel_BeginRemoveRows_Callback(QTransposeProxyModel_BeginRemoveRows_Callback cb) { qtransposeproxymodel_beginremoverows_callback = cb; }
    inline void setQTransposeProxyModel_EndRemoveRows_Callback(QTransposeProxyModel_EndRemoveRows_Callback cb) { qtransposeproxymodel_endremoverows_callback = cb; }
    inline void setQTransposeProxyModel_BeginMoveRows_Callback(QTransposeProxyModel_BeginMoveRows_Callback cb) { qtransposeproxymodel_beginmoverows_callback = cb; }
    inline void setQTransposeProxyModel_EndMoveRows_Callback(QTransposeProxyModel_EndMoveRows_Callback cb) { qtransposeproxymodel_endmoverows_callback = cb; }
    inline void setQTransposeProxyModel_BeginInsertColumns_Callback(QTransposeProxyModel_BeginInsertColumns_Callback cb) { qtransposeproxymodel_begininsertcolumns_callback = cb; }
    inline void setQTransposeProxyModel_EndInsertColumns_Callback(QTransposeProxyModel_EndInsertColumns_Callback cb) { qtransposeproxymodel_endinsertcolumns_callback = cb; }
    inline void setQTransposeProxyModel_BeginRemoveColumns_Callback(QTransposeProxyModel_BeginRemoveColumns_Callback cb) { qtransposeproxymodel_beginremovecolumns_callback = cb; }
    inline void setQTransposeProxyModel_EndRemoveColumns_Callback(QTransposeProxyModel_EndRemoveColumns_Callback cb) { qtransposeproxymodel_endremovecolumns_callback = cb; }
    inline void setQTransposeProxyModel_BeginMoveColumns_Callback(QTransposeProxyModel_BeginMoveColumns_Callback cb) { qtransposeproxymodel_beginmovecolumns_callback = cb; }
    inline void setQTransposeProxyModel_EndMoveColumns_Callback(QTransposeProxyModel_EndMoveColumns_Callback cb) { qtransposeproxymodel_endmovecolumns_callback = cb; }
    inline void setQTransposeProxyModel_BeginResetModel_Callback(QTransposeProxyModel_BeginResetModel_Callback cb) { qtransposeproxymodel_beginresetmodel_callback = cb; }
    inline void setQTransposeProxyModel_EndResetModel_Callback(QTransposeProxyModel_EndResetModel_Callback cb) { qtransposeproxymodel_endresetmodel_callback = cb; }
    inline void setQTransposeProxyModel_ChangePersistentIndex_Callback(QTransposeProxyModel_ChangePersistentIndex_Callback cb) { qtransposeproxymodel_changepersistentindex_callback = cb; }
    inline void setQTransposeProxyModel_ChangePersistentIndexList_Callback(QTransposeProxyModel_ChangePersistentIndexList_Callback cb) { qtransposeproxymodel_changepersistentindexlist_callback = cb; }
    inline void setQTransposeProxyModel_PersistentIndexList_Callback(QTransposeProxyModel_PersistentIndexList_Callback cb) { qtransposeproxymodel_persistentindexlist_callback = cb; }
    inline void setQTransposeProxyModel_Sender_Callback(QTransposeProxyModel_Sender_Callback cb) { qtransposeproxymodel_sender_callback = cb; }
    inline void setQTransposeProxyModel_SenderSignalIndex_Callback(QTransposeProxyModel_SenderSignalIndex_Callback cb) { qtransposeproxymodel_sendersignalindex_callback = cb; }
    inline void setQTransposeProxyModel_Receivers_Callback(QTransposeProxyModel_Receivers_Callback cb) { qtransposeproxymodel_receivers_callback = cb; }
    inline void setQTransposeProxyModel_IsSignalConnected_Callback(QTransposeProxyModel_IsSignalConnected_Callback cb) { qtransposeproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTransposeProxyModel_Metacall_IsBase(bool value) const { qtransposeproxymodel_metacall_isbase = value; }
    inline void setQTransposeProxyModel_SetSourceModel_IsBase(bool value) const { qtransposeproxymodel_setsourcemodel_isbase = value; }
    inline void setQTransposeProxyModel_RowCount_IsBase(bool value) const { qtransposeproxymodel_rowcount_isbase = value; }
    inline void setQTransposeProxyModel_ColumnCount_IsBase(bool value) const { qtransposeproxymodel_columncount_isbase = value; }
    inline void setQTransposeProxyModel_HeaderData_IsBase(bool value) const { qtransposeproxymodel_headerdata_isbase = value; }
    inline void setQTransposeProxyModel_SetHeaderData_IsBase(bool value) const { qtransposeproxymodel_setheaderdata_isbase = value; }
    inline void setQTransposeProxyModel_SetItemData_IsBase(bool value) const { qtransposeproxymodel_setitemdata_isbase = value; }
    inline void setQTransposeProxyModel_Span_IsBase(bool value) const { qtransposeproxymodel_span_isbase = value; }
    inline void setQTransposeProxyModel_ItemData_IsBase(bool value) const { qtransposeproxymodel_itemdata_isbase = value; }
    inline void setQTransposeProxyModel_MapFromSource_IsBase(bool value) const { qtransposeproxymodel_mapfromsource_isbase = value; }
    inline void setQTransposeProxyModel_MapToSource_IsBase(bool value) const { qtransposeproxymodel_maptosource_isbase = value; }
    inline void setQTransposeProxyModel_Parent_IsBase(bool value) const { qtransposeproxymodel_parent_isbase = value; }
    inline void setQTransposeProxyModel_Index_IsBase(bool value) const { qtransposeproxymodel_index_isbase = value; }
    inline void setQTransposeProxyModel_InsertRows_IsBase(bool value) const { qtransposeproxymodel_insertrows_isbase = value; }
    inline void setQTransposeProxyModel_RemoveRows_IsBase(bool value) const { qtransposeproxymodel_removerows_isbase = value; }
    inline void setQTransposeProxyModel_MoveRows_IsBase(bool value) const { qtransposeproxymodel_moverows_isbase = value; }
    inline void setQTransposeProxyModel_InsertColumns_IsBase(bool value) const { qtransposeproxymodel_insertcolumns_isbase = value; }
    inline void setQTransposeProxyModel_RemoveColumns_IsBase(bool value) const { qtransposeproxymodel_removecolumns_isbase = value; }
    inline void setQTransposeProxyModel_MoveColumns_IsBase(bool value) const { qtransposeproxymodel_movecolumns_isbase = value; }
    inline void setQTransposeProxyModel_Sort_IsBase(bool value) const { qtransposeproxymodel_sort_isbase = value; }
    inline void setQTransposeProxyModel_MapSelectionToSource_IsBase(bool value) const { qtransposeproxymodel_mapselectiontosource_isbase = value; }
    inline void setQTransposeProxyModel_MapSelectionFromSource_IsBase(bool value) const { qtransposeproxymodel_mapselectionfromsource_isbase = value; }
    inline void setQTransposeProxyModel_Submit_IsBase(bool value) const { qtransposeproxymodel_submit_isbase = value; }
    inline void setQTransposeProxyModel_Revert_IsBase(bool value) const { qtransposeproxymodel_revert_isbase = value; }
    inline void setQTransposeProxyModel_Data_IsBase(bool value) const { qtransposeproxymodel_data_isbase = value; }
    inline void setQTransposeProxyModel_Flags_IsBase(bool value) const { qtransposeproxymodel_flags_isbase = value; }
    inline void setQTransposeProxyModel_SetData_IsBase(bool value) const { qtransposeproxymodel_setdata_isbase = value; }
    inline void setQTransposeProxyModel_ClearItemData_IsBase(bool value) const { qtransposeproxymodel_clearitemdata_isbase = value; }
    inline void setQTransposeProxyModel_Buddy_IsBase(bool value) const { qtransposeproxymodel_buddy_isbase = value; }
    inline void setQTransposeProxyModel_CanFetchMore_IsBase(bool value) const { qtransposeproxymodel_canfetchmore_isbase = value; }
    inline void setQTransposeProxyModel_FetchMore_IsBase(bool value) const { qtransposeproxymodel_fetchmore_isbase = value; }
    inline void setQTransposeProxyModel_HasChildren_IsBase(bool value) const { qtransposeproxymodel_haschildren_isbase = value; }
    inline void setQTransposeProxyModel_Sibling_IsBase(bool value) const { qtransposeproxymodel_sibling_isbase = value; }
    inline void setQTransposeProxyModel_MimeData_IsBase(bool value) const { qtransposeproxymodel_mimedata_isbase = value; }
    inline void setQTransposeProxyModel_CanDropMimeData_IsBase(bool value) const { qtransposeproxymodel_candropmimedata_isbase = value; }
    inline void setQTransposeProxyModel_DropMimeData_IsBase(bool value) const { qtransposeproxymodel_dropmimedata_isbase = value; }
    inline void setQTransposeProxyModel_MimeTypes_IsBase(bool value) const { qtransposeproxymodel_mimetypes_isbase = value; }
    inline void setQTransposeProxyModel_SupportedDragActions_IsBase(bool value) const { qtransposeproxymodel_supporteddragactions_isbase = value; }
    inline void setQTransposeProxyModel_SupportedDropActions_IsBase(bool value) const { qtransposeproxymodel_supporteddropactions_isbase = value; }
    inline void setQTransposeProxyModel_RoleNames_IsBase(bool value) const { qtransposeproxymodel_rolenames_isbase = value; }
    inline void setQTransposeProxyModel_Match_IsBase(bool value) const { qtransposeproxymodel_match_isbase = value; }
    inline void setQTransposeProxyModel_MultiData_IsBase(bool value) const { qtransposeproxymodel_multidata_isbase = value; }
    inline void setQTransposeProxyModel_ResetInternalData_IsBase(bool value) const { qtransposeproxymodel_resetinternaldata_isbase = value; }
    inline void setQTransposeProxyModel_Event_IsBase(bool value) const { qtransposeproxymodel_event_isbase = value; }
    inline void setQTransposeProxyModel_EventFilter_IsBase(bool value) const { qtransposeproxymodel_eventfilter_isbase = value; }
    inline void setQTransposeProxyModel_TimerEvent_IsBase(bool value) const { qtransposeproxymodel_timerevent_isbase = value; }
    inline void setQTransposeProxyModel_ChildEvent_IsBase(bool value) const { qtransposeproxymodel_childevent_isbase = value; }
    inline void setQTransposeProxyModel_CustomEvent_IsBase(bool value) const { qtransposeproxymodel_customevent_isbase = value; }
    inline void setQTransposeProxyModel_ConnectNotify_IsBase(bool value) const { qtransposeproxymodel_connectnotify_isbase = value; }
    inline void setQTransposeProxyModel_DisconnectNotify_IsBase(bool value) const { qtransposeproxymodel_disconnectnotify_isbase = value; }
    inline void setQTransposeProxyModel_CreateSourceIndex_IsBase(bool value) const { qtransposeproxymodel_createsourceindex_isbase = value; }
    inline void setQTransposeProxyModel_CreateIndex_IsBase(bool value) const { qtransposeproxymodel_createindex_isbase = value; }
    inline void setQTransposeProxyModel_EncodeData_IsBase(bool value) const { qtransposeproxymodel_encodedata_isbase = value; }
    inline void setQTransposeProxyModel_DecodeData_IsBase(bool value) const { qtransposeproxymodel_decodedata_isbase = value; }
    inline void setQTransposeProxyModel_BeginInsertRows_IsBase(bool value) const { qtransposeproxymodel_begininsertrows_isbase = value; }
    inline void setQTransposeProxyModel_EndInsertRows_IsBase(bool value) const { qtransposeproxymodel_endinsertrows_isbase = value; }
    inline void setQTransposeProxyModel_BeginRemoveRows_IsBase(bool value) const { qtransposeproxymodel_beginremoverows_isbase = value; }
    inline void setQTransposeProxyModel_EndRemoveRows_IsBase(bool value) const { qtransposeproxymodel_endremoverows_isbase = value; }
    inline void setQTransposeProxyModel_BeginMoveRows_IsBase(bool value) const { qtransposeproxymodel_beginmoverows_isbase = value; }
    inline void setQTransposeProxyModel_EndMoveRows_IsBase(bool value) const { qtransposeproxymodel_endmoverows_isbase = value; }
    inline void setQTransposeProxyModel_BeginInsertColumns_IsBase(bool value) const { qtransposeproxymodel_begininsertcolumns_isbase = value; }
    inline void setQTransposeProxyModel_EndInsertColumns_IsBase(bool value) const { qtransposeproxymodel_endinsertcolumns_isbase = value; }
    inline void setQTransposeProxyModel_BeginRemoveColumns_IsBase(bool value) const { qtransposeproxymodel_beginremovecolumns_isbase = value; }
    inline void setQTransposeProxyModel_EndRemoveColumns_IsBase(bool value) const { qtransposeproxymodel_endremovecolumns_isbase = value; }
    inline void setQTransposeProxyModel_BeginMoveColumns_IsBase(bool value) const { qtransposeproxymodel_beginmovecolumns_isbase = value; }
    inline void setQTransposeProxyModel_EndMoveColumns_IsBase(bool value) const { qtransposeproxymodel_endmovecolumns_isbase = value; }
    inline void setQTransposeProxyModel_BeginResetModel_IsBase(bool value) const { qtransposeproxymodel_beginresetmodel_isbase = value; }
    inline void setQTransposeProxyModel_EndResetModel_IsBase(bool value) const { qtransposeproxymodel_endresetmodel_isbase = value; }
    inline void setQTransposeProxyModel_ChangePersistentIndex_IsBase(bool value) const { qtransposeproxymodel_changepersistentindex_isbase = value; }
    inline void setQTransposeProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qtransposeproxymodel_changepersistentindexlist_isbase = value; }
    inline void setQTransposeProxyModel_PersistentIndexList_IsBase(bool value) const { qtransposeproxymodel_persistentindexlist_isbase = value; }
    inline void setQTransposeProxyModel_Sender_IsBase(bool value) const { qtransposeproxymodel_sender_isbase = value; }
    inline void setQTransposeProxyModel_SenderSignalIndex_IsBase(bool value) const { qtransposeproxymodel_sendersignalindex_isbase = value; }
    inline void setQTransposeProxyModel_Receivers_IsBase(bool value) const { qtransposeproxymodel_receivers_isbase = value; }
    inline void setQTransposeProxyModel_IsSignalConnected_IsBase(bool value) const { qtransposeproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtransposeproxymodel_metacall_isbase) {
            qtransposeproxymodel_metacall_isbase = false;
            return QTransposeProxyModel::qt_metacall(param1, param2, param3);
        } else if (qtransposeproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtransposeproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTransposeProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* newSourceModel) override {
        if (qtransposeproxymodel_setsourcemodel_isbase) {
            qtransposeproxymodel_setsourcemodel_isbase = false;
            QTransposeProxyModel::setSourceModel(newSourceModel);
        } else if (qtransposeproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = newSourceModel;

            qtransposeproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            QTransposeProxyModel::setSourceModel(newSourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_rowcount_isbase) {
            qtransposeproxymodel_rowcount_isbase = false;
            return QTransposeProxyModel::rowCount(parent);
        } else if (qtransposeproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qtransposeproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTransposeProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_columncount_isbase) {
            qtransposeproxymodel_columncount_isbase = false;
            return QTransposeProxyModel::columnCount(parent);
        } else if (qtransposeproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qtransposeproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTransposeProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qtransposeproxymodel_headerdata_isbase) {
            qtransposeproxymodel_headerdata_isbase = false;
            return QTransposeProxyModel::headerData(section, orientation, role);
        } else if (qtransposeproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qtransposeproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qtransposeproxymodel_setheaderdata_isbase) {
            qtransposeproxymodel_setheaderdata_isbase = false;
            return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qtransposeproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qtransposeproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qtransposeproxymodel_setitemdata_isbase) {
            qtransposeproxymodel_setitemdata_isbase = false;
            return QTransposeProxyModel::setItemData(index, roles);
        } else if (qtransposeproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qtransposeproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTransposeProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qtransposeproxymodel_span_isbase) {
            qtransposeproxymodel_span_isbase = false;
            return QTransposeProxyModel::span(index);
        } else if (qtransposeproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qtransposeproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qtransposeproxymodel_itemdata_isbase) {
            qtransposeproxymodel_itemdata_isbase = false;
            return QTransposeProxyModel::itemData(index);
        } else if (qtransposeproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qtransposeproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QTransposeProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qtransposeproxymodel_mapfromsource_isbase) {
            qtransposeproxymodel_mapfromsource_isbase = false;
            return QTransposeProxyModel::mapFromSource(sourceIndex);
        } else if (qtransposeproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = qtransposeproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qtransposeproxymodel_maptosource_isbase) {
            qtransposeproxymodel_maptosource_isbase = false;
            return QTransposeProxyModel::mapToSource(proxyIndex);
        } else if (qtransposeproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = qtransposeproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qtransposeproxymodel_parent_isbase) {
            qtransposeproxymodel_parent_isbase = false;
            return QTransposeProxyModel::parent(index);
        } else if (qtransposeproxymodel_parent_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qtransposeproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qtransposeproxymodel_index_isbase) {
            qtransposeproxymodel_index_isbase = false;
            return QTransposeProxyModel::index(row, column, parent);
        } else if (qtransposeproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qtransposeproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_insertrows_isbase) {
            qtransposeproxymodel_insertrows_isbase = false;
            return QTransposeProxyModel::insertRows(row, count, parent);
        } else if (qtransposeproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTransposeProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_removerows_isbase) {
            qtransposeproxymodel_removerows_isbase = false;
            return QTransposeProxyModel::removeRows(row, count, parent);
        } else if (qtransposeproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTransposeProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qtransposeproxymodel_moverows_isbase) {
            qtransposeproxymodel_moverows_isbase = false;
            return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qtransposeproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qtransposeproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_insertcolumns_isbase) {
            qtransposeproxymodel_insertcolumns_isbase = false;
            return QTransposeProxyModel::insertColumns(column, count, parent);
        } else if (qtransposeproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTransposeProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_removecolumns_isbase) {
            qtransposeproxymodel_removecolumns_isbase = false;
            return QTransposeProxyModel::removeColumns(column, count, parent);
        } else if (qtransposeproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTransposeProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qtransposeproxymodel_movecolumns_isbase) {
            qtransposeproxymodel_movecolumns_isbase = false;
            return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qtransposeproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qtransposeproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qtransposeproxymodel_sort_isbase) {
            qtransposeproxymodel_sort_isbase = false;
            QTransposeProxyModel::sort(column, order);
        } else if (qtransposeproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qtransposeproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            QTransposeProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qtransposeproxymodel_mapselectiontosource_isbase) {
            qtransposeproxymodel_mapselectiontosource_isbase = false;
            return QTransposeProxyModel::mapSelectionToSource(selection);
        } else if (qtransposeproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = qtransposeproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qtransposeproxymodel_mapselectionfromsource_isbase) {
            qtransposeproxymodel_mapselectionfromsource_isbase = false;
            return QTransposeProxyModel::mapSelectionFromSource(selection);
        } else if (qtransposeproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = qtransposeproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qtransposeproxymodel_submit_isbase) {
            qtransposeproxymodel_submit_isbase = false;
            return QTransposeProxyModel::submit();
        } else if (qtransposeproxymodel_submit_callback != nullptr) {
            bool callback_ret = qtransposeproxymodel_submit_callback();
            return callback_ret;
        } else {
            return QTransposeProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qtransposeproxymodel_revert_isbase) {
            qtransposeproxymodel_revert_isbase = false;
            QTransposeProxyModel::revert();
        } else if (qtransposeproxymodel_revert_callback != nullptr) {
            qtransposeproxymodel_revert_callback();
        } else {
            QTransposeProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qtransposeproxymodel_data_isbase) {
            qtransposeproxymodel_data_isbase = false;
            return QTransposeProxyModel::data(proxyIndex, role);
        } else if (qtransposeproxymodel_data_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;

            QVariant* callback_ret = qtransposeproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::data(proxyIndex, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qtransposeproxymodel_flags_isbase) {
            qtransposeproxymodel_flags_isbase = false;
            return QTransposeProxyModel::flags(index);
        } else if (qtransposeproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qtransposeproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QTransposeProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qtransposeproxymodel_setdata_isbase) {
            qtransposeproxymodel_setdata_isbase = false;
            return QTransposeProxyModel::setData(index, value, role);
        } else if (qtransposeproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qtransposeproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTransposeProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qtransposeproxymodel_clearitemdata_isbase) {
            qtransposeproxymodel_clearitemdata_isbase = false;
            return QTransposeProxyModel::clearItemData(index);
        } else if (qtransposeproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qtransposeproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTransposeProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qtransposeproxymodel_buddy_isbase) {
            qtransposeproxymodel_buddy_isbase = false;
            return QTransposeProxyModel::buddy(index);
        } else if (qtransposeproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qtransposeproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_canfetchmore_isbase) {
            qtransposeproxymodel_canfetchmore_isbase = false;
            return QTransposeProxyModel::canFetchMore(parent);
        } else if (qtransposeproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTransposeProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qtransposeproxymodel_fetchmore_isbase) {
            qtransposeproxymodel_fetchmore_isbase = false;
            QTransposeProxyModel::fetchMore(parent);
        } else if (qtransposeproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qtransposeproxymodel_fetchmore_callback(this, cbval1);
        } else {
            QTransposeProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_haschildren_isbase) {
            qtransposeproxymodel_haschildren_isbase = false;
            return QTransposeProxyModel::hasChildren(parent);
        } else if (qtransposeproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTransposeProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qtransposeproxymodel_sibling_isbase) {
            qtransposeproxymodel_sibling_isbase = false;
            return QTransposeProxyModel::sibling(row, column, idx);
        } else if (qtransposeproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qtransposeproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qtransposeproxymodel_mimedata_isbase) {
            qtransposeproxymodel_mimedata_isbase = false;
            return QTransposeProxyModel::mimeData(indexes);
        } else if (qtransposeproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qtransposeproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTransposeProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qtransposeproxymodel_candropmimedata_isbase) {
            qtransposeproxymodel_candropmimedata_isbase = false;
            return QTransposeProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qtransposeproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QTransposeProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qtransposeproxymodel_dropmimedata_isbase) {
            qtransposeproxymodel_dropmimedata_isbase = false;
            return QTransposeProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qtransposeproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qtransposeproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QTransposeProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qtransposeproxymodel_mimetypes_isbase) {
            qtransposeproxymodel_mimetypes_isbase = false;
            return QTransposeProxyModel::mimeTypes();
        } else if (qtransposeproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = qtransposeproxymodel_mimetypes_callback();
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
            return QTransposeProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qtransposeproxymodel_supporteddragactions_isbase) {
            qtransposeproxymodel_supporteddragactions_isbase = false;
            return QTransposeProxyModel::supportedDragActions();
        } else if (qtransposeproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qtransposeproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QTransposeProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtransposeproxymodel_supporteddropactions_isbase) {
            qtransposeproxymodel_supporteddropactions_isbase = false;
            return QTransposeProxyModel::supportedDropActions();
        } else if (qtransposeproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qtransposeproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QTransposeProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qtransposeproxymodel_rolenames_isbase) {
            qtransposeproxymodel_rolenames_isbase = false;
            return QTransposeProxyModel::roleNames();
        } else if (qtransposeproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qtransposeproxymodel_rolenames_callback();
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
            return QTransposeProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qtransposeproxymodel_match_isbase) {
            qtransposeproxymodel_match_isbase = false;
            return QTransposeProxyModel::match(start, role, value, hits, flags);
        } else if (qtransposeproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = qtransposeproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QTransposeProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qtransposeproxymodel_multidata_isbase) {
            qtransposeproxymodel_multidata_isbase = false;
            QTransposeProxyModel::multiData(index, roleDataSpan);
        } else if (qtransposeproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qtransposeproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QTransposeProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qtransposeproxymodel_resetinternaldata_isbase) {
            qtransposeproxymodel_resetinternaldata_isbase = false;
            QTransposeProxyModel::resetInternalData();
        } else if (qtransposeproxymodel_resetinternaldata_callback != nullptr) {
            qtransposeproxymodel_resetinternaldata_callback();
        } else {
            QTransposeProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtransposeproxymodel_event_isbase) {
            qtransposeproxymodel_event_isbase = false;
            return QTransposeProxyModel::event(event);
        } else if (qtransposeproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtransposeproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTransposeProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtransposeproxymodel_eventfilter_isbase) {
            qtransposeproxymodel_eventfilter_isbase = false;
            return QTransposeProxyModel::eventFilter(watched, event);
        } else if (qtransposeproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtransposeproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTransposeProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtransposeproxymodel_timerevent_isbase) {
            qtransposeproxymodel_timerevent_isbase = false;
            QTransposeProxyModel::timerEvent(event);
        } else if (qtransposeproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtransposeproxymodel_timerevent_callback(this, cbval1);
        } else {
            QTransposeProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtransposeproxymodel_childevent_isbase) {
            qtransposeproxymodel_childevent_isbase = false;
            QTransposeProxyModel::childEvent(event);
        } else if (qtransposeproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtransposeproxymodel_childevent_callback(this, cbval1);
        } else {
            QTransposeProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtransposeproxymodel_customevent_isbase) {
            qtransposeproxymodel_customevent_isbase = false;
            QTransposeProxyModel::customEvent(event);
        } else if (qtransposeproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtransposeproxymodel_customevent_callback(this, cbval1);
        } else {
            QTransposeProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtransposeproxymodel_connectnotify_isbase) {
            qtransposeproxymodel_connectnotify_isbase = false;
            QTransposeProxyModel::connectNotify(signal);
        } else if (qtransposeproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtransposeproxymodel_connectnotify_callback(this, cbval1);
        } else {
            QTransposeProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtransposeproxymodel_disconnectnotify_isbase) {
            qtransposeproxymodel_disconnectnotify_isbase = false;
            QTransposeProxyModel::disconnectNotify(signal);
        } else if (qtransposeproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtransposeproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            QTransposeProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qtransposeproxymodel_createsourceindex_isbase) {
            qtransposeproxymodel_createsourceindex_isbase = false;
            return QTransposeProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qtransposeproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = qtransposeproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qtransposeproxymodel_createindex_isbase) {
            qtransposeproxymodel_createindex_isbase = false;
            return QTransposeProxyModel::createIndex(row, column);
        } else if (qtransposeproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qtransposeproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QTransposeProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qtransposeproxymodel_encodedata_isbase) {
            qtransposeproxymodel_encodedata_isbase = false;
            QTransposeProxyModel::encodeData(indexes, stream);
        } else if (qtransposeproxymodel_encodedata_callback != nullptr) {
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

            qtransposeproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QTransposeProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qtransposeproxymodel_decodedata_isbase) {
            qtransposeproxymodel_decodedata_isbase = false;
            return QTransposeProxyModel::decodeData(row, column, parent, stream);
        } else if (qtransposeproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qtransposeproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QTransposeProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_begininsertrows_isbase) {
            qtransposeproxymodel_begininsertrows_isbase = false;
            QTransposeProxyModel::beginInsertRows(parent, first, last);
        } else if (qtransposeproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qtransposeproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTransposeProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qtransposeproxymodel_endinsertrows_isbase) {
            qtransposeproxymodel_endinsertrows_isbase = false;
            QTransposeProxyModel::endInsertRows();
        } else if (qtransposeproxymodel_endinsertrows_callback != nullptr) {
            qtransposeproxymodel_endinsertrows_callback();
        } else {
            QTransposeProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_beginremoverows_isbase) {
            qtransposeproxymodel_beginremoverows_isbase = false;
            QTransposeProxyModel::beginRemoveRows(parent, first, last);
        } else if (qtransposeproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qtransposeproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTransposeProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qtransposeproxymodel_endremoverows_isbase) {
            qtransposeproxymodel_endremoverows_isbase = false;
            QTransposeProxyModel::endRemoveRows();
        } else if (qtransposeproxymodel_endremoverows_callback != nullptr) {
            qtransposeproxymodel_endremoverows_callback();
        } else {
            QTransposeProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qtransposeproxymodel_beginmoverows_isbase) {
            qtransposeproxymodel_beginmoverows_isbase = false;
            return QTransposeProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qtransposeproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qtransposeproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QTransposeProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qtransposeproxymodel_endmoverows_isbase) {
            qtransposeproxymodel_endmoverows_isbase = false;
            QTransposeProxyModel::endMoveRows();
        } else if (qtransposeproxymodel_endmoverows_callback != nullptr) {
            qtransposeproxymodel_endmoverows_callback();
        } else {
            QTransposeProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_begininsertcolumns_isbase) {
            qtransposeproxymodel_begininsertcolumns_isbase = false;
            QTransposeProxyModel::beginInsertColumns(parent, first, last);
        } else if (qtransposeproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qtransposeproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTransposeProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qtransposeproxymodel_endinsertcolumns_isbase) {
            qtransposeproxymodel_endinsertcolumns_isbase = false;
            QTransposeProxyModel::endInsertColumns();
        } else if (qtransposeproxymodel_endinsertcolumns_callback != nullptr) {
            qtransposeproxymodel_endinsertcolumns_callback();
        } else {
            QTransposeProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_beginremovecolumns_isbase) {
            qtransposeproxymodel_beginremovecolumns_isbase = false;
            QTransposeProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qtransposeproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qtransposeproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QTransposeProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qtransposeproxymodel_endremovecolumns_isbase) {
            qtransposeproxymodel_endremovecolumns_isbase = false;
            QTransposeProxyModel::endRemoveColumns();
        } else if (qtransposeproxymodel_endremovecolumns_callback != nullptr) {
            qtransposeproxymodel_endremovecolumns_callback();
        } else {
            QTransposeProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qtransposeproxymodel_beginmovecolumns_isbase) {
            qtransposeproxymodel_beginmovecolumns_isbase = false;
            return QTransposeProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qtransposeproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qtransposeproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QTransposeProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qtransposeproxymodel_endmovecolumns_isbase) {
            qtransposeproxymodel_endmovecolumns_isbase = false;
            QTransposeProxyModel::endMoveColumns();
        } else if (qtransposeproxymodel_endmovecolumns_callback != nullptr) {
            qtransposeproxymodel_endmovecolumns_callback();
        } else {
            QTransposeProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qtransposeproxymodel_beginresetmodel_isbase) {
            qtransposeproxymodel_beginresetmodel_isbase = false;
            QTransposeProxyModel::beginResetModel();
        } else if (qtransposeproxymodel_beginresetmodel_callback != nullptr) {
            qtransposeproxymodel_beginresetmodel_callback();
        } else {
            QTransposeProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qtransposeproxymodel_endresetmodel_isbase) {
            qtransposeproxymodel_endresetmodel_isbase = false;
            QTransposeProxyModel::endResetModel();
        } else if (qtransposeproxymodel_endresetmodel_callback != nullptr) {
            qtransposeproxymodel_endresetmodel_callback();
        } else {
            QTransposeProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qtransposeproxymodel_changepersistentindex_isbase) {
            qtransposeproxymodel_changepersistentindex_isbase = false;
            QTransposeProxyModel::changePersistentIndex(from, to);
        } else if (qtransposeproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qtransposeproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QTransposeProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qtransposeproxymodel_changepersistentindexlist_isbase) {
            qtransposeproxymodel_changepersistentindexlist_isbase = false;
            QTransposeProxyModel::changePersistentIndexList(from, to);
        } else if (qtransposeproxymodel_changepersistentindexlist_callback != nullptr) {
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

            qtransposeproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QTransposeProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qtransposeproxymodel_persistentindexlist_isbase) {
            qtransposeproxymodel_persistentindexlist_isbase = false;
            return QTransposeProxyModel::persistentIndexList();
        } else if (qtransposeproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = qtransposeproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QTransposeProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtransposeproxymodel_sender_isbase) {
            qtransposeproxymodel_sender_isbase = false;
            return QTransposeProxyModel::sender();
        } else if (qtransposeproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = qtransposeproxymodel_sender_callback();
            return callback_ret;
        } else {
            return QTransposeProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtransposeproxymodel_sendersignalindex_isbase) {
            qtransposeproxymodel_sendersignalindex_isbase = false;
            return QTransposeProxyModel::senderSignalIndex();
        } else if (qtransposeproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qtransposeproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTransposeProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtransposeproxymodel_receivers_isbase) {
            qtransposeproxymodel_receivers_isbase = false;
            return QTransposeProxyModel::receivers(signal);
        } else if (qtransposeproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtransposeproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTransposeProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtransposeproxymodel_issignalconnected_isbase) {
            qtransposeproxymodel_issignalconnected_isbase = false;
            return QTransposeProxyModel::isSignalConnected(signal);
        } else if (qtransposeproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtransposeproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTransposeProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTransposeProxyModel_ResetInternalData(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseResetInternalData(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_TimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
    friend void QTransposeProxyModel_QBaseTimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
    friend void QTransposeProxyModel_ChildEvent(QTransposeProxyModel* self, QChildEvent* event);
    friend void QTransposeProxyModel_QBaseChildEvent(QTransposeProxyModel* self, QChildEvent* event);
    friend void QTransposeProxyModel_CustomEvent(QTransposeProxyModel* self, QEvent* event);
    friend void QTransposeProxyModel_QBaseCustomEvent(QTransposeProxyModel* self, QEvent* event);
    friend void QTransposeProxyModel_ConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_QBaseConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_DisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_QBaseDisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend QModelIndex* QTransposeProxyModel_CreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QTransposeProxyModel_QBaseCreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QTransposeProxyModel_CreateIndex(const QTransposeProxyModel* self, int row, int column);
    friend QModelIndex* QTransposeProxyModel_QBaseCreateIndex(const QTransposeProxyModel* self, int row, int column);
    friend void QTransposeProxyModel_EncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QTransposeProxyModel_QBaseEncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QTransposeProxyModel_DecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QTransposeProxyModel_QBaseDecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QTransposeProxyModel_BeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_QBaseBeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndInsertRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndInsertRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_QBaseBeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndRemoveRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndRemoveRows(QTransposeProxyModel* self);
    friend bool QTransposeProxyModel_BeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QTransposeProxyModel_QBaseBeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QTransposeProxyModel_EndMoveRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndMoveRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_QBaseBeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndInsertColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndInsertColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_QBaseBeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndRemoveColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndRemoveColumns(QTransposeProxyModel* self);
    friend bool QTransposeProxyModel_BeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QTransposeProxyModel_QBaseBeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QTransposeProxyModel_EndMoveColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndMoveColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseBeginResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_EndResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_QBaseEndResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_ChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QTransposeProxyModel_QBaseChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QTransposeProxyModel_ChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QTransposeProxyModel_QBaseChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QTransposeProxyModel_PersistentIndexList(const QTransposeProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QTransposeProxyModel_QBasePersistentIndexList(const QTransposeProxyModel* self);
    friend QObject* QTransposeProxyModel_Sender(const QTransposeProxyModel* self);
    friend QObject* QTransposeProxyModel_QBaseSender(const QTransposeProxyModel* self);
    friend int QTransposeProxyModel_SenderSignalIndex(const QTransposeProxyModel* self);
    friend int QTransposeProxyModel_QBaseSenderSignalIndex(const QTransposeProxyModel* self);
    friend int QTransposeProxyModel_Receivers(const QTransposeProxyModel* self, const char* signal);
    friend int QTransposeProxyModel_QBaseReceivers(const QTransposeProxyModel* self, const char* signal);
    friend bool QTransposeProxyModel_IsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal);
    friend bool QTransposeProxyModel_QBaseIsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal);
};

#endif
