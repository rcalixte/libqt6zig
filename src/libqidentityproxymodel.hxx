#pragma once
#ifndef SRCC_LIBVIRTUALQIDENTITYPROXYMODEL_H
#define SRCC_LIBVIRTUALQIDENTITYPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIdentityProxyModel so that we can call protected methods
class VirtualQIdentityProxyModel final : public QIdentityProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQIdentityProxyModel = true;

    // Virtual class public types (including callbacks)
    using QIdentityProxyModel_Metacall_Callback = int (*)(QIdentityProxyModel*, int, int, void**);
    using QIdentityProxyModel_ColumnCount_Callback = int (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Index_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_MapToSource_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Parent_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_RowCount_Callback = int (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_HeaderData_Callback = QVariant* (*)(const QIdentityProxyModel*, int, int, int);
    using QIdentityProxyModel_DropMimeData_Callback = bool (*)(QIdentityProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QIdentityProxyModel_Sibling_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QIdentityProxyModel*, QItemSelection*);
    using QIdentityProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QIdentityProxyModel*, QItemSelection*);
    using QIdentityProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QIdentityProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QIdentityProxyModel_SetSourceModel_Callback = void (*)(QIdentityProxyModel*, QAbstractItemModel*);
    using QIdentityProxyModel_InsertColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_InsertRows_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_RemoveColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_RemoveRows_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_MoveRows_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QIdentityProxyModel_MoveColumns_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QIdentityProxyModel_Submit_Callback = bool (*)();
    using QIdentityProxyModel_Revert_Callback = void (*)();
    using QIdentityProxyModel_Data_Callback = QVariant* (*)(const QIdentityProxyModel*, QModelIndex*, int);
    using QIdentityProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Flags_Callback = int (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_SetData_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, QVariant*, int);
    using QIdentityProxyModel_SetItemData_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QIdentityProxyModel_SetHeaderData_Callback = bool (*)(QIdentityProxyModel*, int, int, QVariant*, int);
    using QIdentityProxyModel_ClearItemData_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Buddy_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_CanFetchMore_Callback = bool (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_FetchMore_Callback = void (*)(QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Sort_Callback = void (*)(QIdentityProxyModel*, int, int);
    using QIdentityProxyModel_Span_Callback = QSize* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_HasChildren_Callback = bool (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_MimeData_Callback = QMimeData* (*)(const QIdentityProxyModel*, libqt_list /* of QModelIndex* */);
    using QIdentityProxyModel_CanDropMimeData_Callback = bool (*)(const QIdentityProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QIdentityProxyModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QIdentityProxyModel_SupportedDragActions_Callback = int (*)();
    using QIdentityProxyModel_SupportedDropActions_Callback = int (*)();
    using QIdentityProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QIdentityProxyModel_MultiData_Callback = void (*)(const QIdentityProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QIdentityProxyModel_ResetInternalData_Callback = void (*)();
    using QIdentityProxyModel_Event_Callback = bool (*)(QIdentityProxyModel*, QEvent*);
    using QIdentityProxyModel_EventFilter_Callback = bool (*)(QIdentityProxyModel*, QObject*, QEvent*);
    using QIdentityProxyModel_TimerEvent_Callback = void (*)(QIdentityProxyModel*, QTimerEvent*);
    using QIdentityProxyModel_ChildEvent_Callback = void (*)(QIdentityProxyModel*, QChildEvent*);
    using QIdentityProxyModel_CustomEvent_Callback = void (*)(QIdentityProxyModel*, QEvent*);
    using QIdentityProxyModel_ConnectNotify_Callback = void (*)(QIdentityProxyModel*, QMetaMethod*);
    using QIdentityProxyModel_DisconnectNotify_Callback = void (*)(QIdentityProxyModel*, QMetaMethod*);
    using QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback = void (*)(QIdentityProxyModel*, bool);
    using QIdentityProxyModel_SetHandleSourceDataChanges_Callback = void (*)(QIdentityProxyModel*, bool);
    using QIdentityProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, void*);
    using QIdentityProxyModel_CreateIndex_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int);
    using QIdentityProxyModel_EncodeData_Callback = void (*)(const QIdentityProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QIdentityProxyModel_DecodeData_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*, QDataStream*);
    using QIdentityProxyModel_BeginInsertRows_Callback = void (*)(QIdentityProxyModel*, QModelIndex*, int, int);
    using QIdentityProxyModel_EndInsertRows_Callback = void (*)();
    using QIdentityProxyModel_BeginRemoveRows_Callback = void (*)(QIdentityProxyModel*, QModelIndex*, int, int);
    using QIdentityProxyModel_EndRemoveRows_Callback = void (*)();
    using QIdentityProxyModel_BeginMoveRows_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QIdentityProxyModel_EndMoveRows_Callback = void (*)();
    using QIdentityProxyModel_BeginInsertColumns_Callback = void (*)(QIdentityProxyModel*, QModelIndex*, int, int);
    using QIdentityProxyModel_EndInsertColumns_Callback = void (*)();
    using QIdentityProxyModel_BeginRemoveColumns_Callback = void (*)(QIdentityProxyModel*, QModelIndex*, int, int);
    using QIdentityProxyModel_EndRemoveColumns_Callback = void (*)();
    using QIdentityProxyModel_BeginMoveColumns_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QIdentityProxyModel_EndMoveColumns_Callback = void (*)();
    using QIdentityProxyModel_BeginResetModel_Callback = void (*)();
    using QIdentityProxyModel_EndResetModel_Callback = void (*)();
    using QIdentityProxyModel_ChangePersistentIndex_Callback = void (*)(QIdentityProxyModel*, QModelIndex*, QModelIndex*);
    using QIdentityProxyModel_ChangePersistentIndexList_Callback = void (*)(QIdentityProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QIdentityProxyModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QIdentityProxyModel_Sender_Callback = QObject* (*)();
    using QIdentityProxyModel_SenderSignalIndex_Callback = int (*)();
    using QIdentityProxyModel_Receivers_Callback = int (*)(const QIdentityProxyModel*, const char*);
    using QIdentityProxyModel_IsSignalConnected_Callback = bool (*)(const QIdentityProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QIdentityProxyModel_Metacall_Callback qidentityproxymodel_metacall_callback = nullptr;
    QIdentityProxyModel_ColumnCount_Callback qidentityproxymodel_columncount_callback = nullptr;
    QIdentityProxyModel_Index_Callback qidentityproxymodel_index_callback = nullptr;
    QIdentityProxyModel_MapFromSource_Callback qidentityproxymodel_mapfromsource_callback = nullptr;
    QIdentityProxyModel_MapToSource_Callback qidentityproxymodel_maptosource_callback = nullptr;
    QIdentityProxyModel_Parent_Callback qidentityproxymodel_parent_callback = nullptr;
    QIdentityProxyModel_RowCount_Callback qidentityproxymodel_rowcount_callback = nullptr;
    QIdentityProxyModel_HeaderData_Callback qidentityproxymodel_headerdata_callback = nullptr;
    QIdentityProxyModel_DropMimeData_Callback qidentityproxymodel_dropmimedata_callback = nullptr;
    QIdentityProxyModel_Sibling_Callback qidentityproxymodel_sibling_callback = nullptr;
    QIdentityProxyModel_MapSelectionFromSource_Callback qidentityproxymodel_mapselectionfromsource_callback = nullptr;
    QIdentityProxyModel_MapSelectionToSource_Callback qidentityproxymodel_mapselectiontosource_callback = nullptr;
    QIdentityProxyModel_Match_Callback qidentityproxymodel_match_callback = nullptr;
    QIdentityProxyModel_SetSourceModel_Callback qidentityproxymodel_setsourcemodel_callback = nullptr;
    QIdentityProxyModel_InsertColumns_Callback qidentityproxymodel_insertcolumns_callback = nullptr;
    QIdentityProxyModel_InsertRows_Callback qidentityproxymodel_insertrows_callback = nullptr;
    QIdentityProxyModel_RemoveColumns_Callback qidentityproxymodel_removecolumns_callback = nullptr;
    QIdentityProxyModel_RemoveRows_Callback qidentityproxymodel_removerows_callback = nullptr;
    QIdentityProxyModel_MoveRows_Callback qidentityproxymodel_moverows_callback = nullptr;
    QIdentityProxyModel_MoveColumns_Callback qidentityproxymodel_movecolumns_callback = nullptr;
    QIdentityProxyModel_Submit_Callback qidentityproxymodel_submit_callback = nullptr;
    QIdentityProxyModel_Revert_Callback qidentityproxymodel_revert_callback = nullptr;
    QIdentityProxyModel_Data_Callback qidentityproxymodel_data_callback = nullptr;
    QIdentityProxyModel_ItemData_Callback qidentityproxymodel_itemdata_callback = nullptr;
    QIdentityProxyModel_Flags_Callback qidentityproxymodel_flags_callback = nullptr;
    QIdentityProxyModel_SetData_Callback qidentityproxymodel_setdata_callback = nullptr;
    QIdentityProxyModel_SetItemData_Callback qidentityproxymodel_setitemdata_callback = nullptr;
    QIdentityProxyModel_SetHeaderData_Callback qidentityproxymodel_setheaderdata_callback = nullptr;
    QIdentityProxyModel_ClearItemData_Callback qidentityproxymodel_clearitemdata_callback = nullptr;
    QIdentityProxyModel_Buddy_Callback qidentityproxymodel_buddy_callback = nullptr;
    QIdentityProxyModel_CanFetchMore_Callback qidentityproxymodel_canfetchmore_callback = nullptr;
    QIdentityProxyModel_FetchMore_Callback qidentityproxymodel_fetchmore_callback = nullptr;
    QIdentityProxyModel_Sort_Callback qidentityproxymodel_sort_callback = nullptr;
    QIdentityProxyModel_Span_Callback qidentityproxymodel_span_callback = nullptr;
    QIdentityProxyModel_HasChildren_Callback qidentityproxymodel_haschildren_callback = nullptr;
    QIdentityProxyModel_MimeData_Callback qidentityproxymodel_mimedata_callback = nullptr;
    QIdentityProxyModel_CanDropMimeData_Callback qidentityproxymodel_candropmimedata_callback = nullptr;
    QIdentityProxyModel_MimeTypes_Callback qidentityproxymodel_mimetypes_callback = nullptr;
    QIdentityProxyModel_SupportedDragActions_Callback qidentityproxymodel_supporteddragactions_callback = nullptr;
    QIdentityProxyModel_SupportedDropActions_Callback qidentityproxymodel_supporteddropactions_callback = nullptr;
    QIdentityProxyModel_RoleNames_Callback qidentityproxymodel_rolenames_callback = nullptr;
    QIdentityProxyModel_MultiData_Callback qidentityproxymodel_multidata_callback = nullptr;
    QIdentityProxyModel_ResetInternalData_Callback qidentityproxymodel_resetinternaldata_callback = nullptr;
    QIdentityProxyModel_Event_Callback qidentityproxymodel_event_callback = nullptr;
    QIdentityProxyModel_EventFilter_Callback qidentityproxymodel_eventfilter_callback = nullptr;
    QIdentityProxyModel_TimerEvent_Callback qidentityproxymodel_timerevent_callback = nullptr;
    QIdentityProxyModel_ChildEvent_Callback qidentityproxymodel_childevent_callback = nullptr;
    QIdentityProxyModel_CustomEvent_Callback qidentityproxymodel_customevent_callback = nullptr;
    QIdentityProxyModel_ConnectNotify_Callback qidentityproxymodel_connectnotify_callback = nullptr;
    QIdentityProxyModel_DisconnectNotify_Callback qidentityproxymodel_disconnectnotify_callback = nullptr;
    QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback qidentityproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
    QIdentityProxyModel_SetHandleSourceDataChanges_Callback qidentityproxymodel_sethandlesourcedatachanges_callback = nullptr;
    QIdentityProxyModel_CreateSourceIndex_Callback qidentityproxymodel_createsourceindex_callback = nullptr;
    QIdentityProxyModel_CreateIndex_Callback qidentityproxymodel_createindex_callback = nullptr;
    QIdentityProxyModel_EncodeData_Callback qidentityproxymodel_encodedata_callback = nullptr;
    QIdentityProxyModel_DecodeData_Callback qidentityproxymodel_decodedata_callback = nullptr;
    QIdentityProxyModel_BeginInsertRows_Callback qidentityproxymodel_begininsertrows_callback = nullptr;
    QIdentityProxyModel_EndInsertRows_Callback qidentityproxymodel_endinsertrows_callback = nullptr;
    QIdentityProxyModel_BeginRemoveRows_Callback qidentityproxymodel_beginremoverows_callback = nullptr;
    QIdentityProxyModel_EndRemoveRows_Callback qidentityproxymodel_endremoverows_callback = nullptr;
    QIdentityProxyModel_BeginMoveRows_Callback qidentityproxymodel_beginmoverows_callback = nullptr;
    QIdentityProxyModel_EndMoveRows_Callback qidentityproxymodel_endmoverows_callback = nullptr;
    QIdentityProxyModel_BeginInsertColumns_Callback qidentityproxymodel_begininsertcolumns_callback = nullptr;
    QIdentityProxyModel_EndInsertColumns_Callback qidentityproxymodel_endinsertcolumns_callback = nullptr;
    QIdentityProxyModel_BeginRemoveColumns_Callback qidentityproxymodel_beginremovecolumns_callback = nullptr;
    QIdentityProxyModel_EndRemoveColumns_Callback qidentityproxymodel_endremovecolumns_callback = nullptr;
    QIdentityProxyModel_BeginMoveColumns_Callback qidentityproxymodel_beginmovecolumns_callback = nullptr;
    QIdentityProxyModel_EndMoveColumns_Callback qidentityproxymodel_endmovecolumns_callback = nullptr;
    QIdentityProxyModel_BeginResetModel_Callback qidentityproxymodel_beginresetmodel_callback = nullptr;
    QIdentityProxyModel_EndResetModel_Callback qidentityproxymodel_endresetmodel_callback = nullptr;
    QIdentityProxyModel_ChangePersistentIndex_Callback qidentityproxymodel_changepersistentindex_callback = nullptr;
    QIdentityProxyModel_ChangePersistentIndexList_Callback qidentityproxymodel_changepersistentindexlist_callback = nullptr;
    QIdentityProxyModel_PersistentIndexList_Callback qidentityproxymodel_persistentindexlist_callback = nullptr;
    QIdentityProxyModel_Sender_Callback qidentityproxymodel_sender_callback = nullptr;
    QIdentityProxyModel_SenderSignalIndex_Callback qidentityproxymodel_sendersignalindex_callback = nullptr;
    QIdentityProxyModel_Receivers_Callback qidentityproxymodel_receivers_callback = nullptr;
    QIdentityProxyModel_IsSignalConnected_Callback qidentityproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qidentityproxymodel_metacall_isbase = false;
    mutable bool qidentityproxymodel_columncount_isbase = false;
    mutable bool qidentityproxymodel_index_isbase = false;
    mutable bool qidentityproxymodel_mapfromsource_isbase = false;
    mutable bool qidentityproxymodel_maptosource_isbase = false;
    mutable bool qidentityproxymodel_parent_isbase = false;
    mutable bool qidentityproxymodel_rowcount_isbase = false;
    mutable bool qidentityproxymodel_headerdata_isbase = false;
    mutable bool qidentityproxymodel_dropmimedata_isbase = false;
    mutable bool qidentityproxymodel_sibling_isbase = false;
    mutable bool qidentityproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qidentityproxymodel_mapselectiontosource_isbase = false;
    mutable bool qidentityproxymodel_match_isbase = false;
    mutable bool qidentityproxymodel_setsourcemodel_isbase = false;
    mutable bool qidentityproxymodel_insertcolumns_isbase = false;
    mutable bool qidentityproxymodel_insertrows_isbase = false;
    mutable bool qidentityproxymodel_removecolumns_isbase = false;
    mutable bool qidentityproxymodel_removerows_isbase = false;
    mutable bool qidentityproxymodel_moverows_isbase = false;
    mutable bool qidentityproxymodel_movecolumns_isbase = false;
    mutable bool qidentityproxymodel_submit_isbase = false;
    mutable bool qidentityproxymodel_revert_isbase = false;
    mutable bool qidentityproxymodel_data_isbase = false;
    mutable bool qidentityproxymodel_itemdata_isbase = false;
    mutable bool qidentityproxymodel_flags_isbase = false;
    mutable bool qidentityproxymodel_setdata_isbase = false;
    mutable bool qidentityproxymodel_setitemdata_isbase = false;
    mutable bool qidentityproxymodel_setheaderdata_isbase = false;
    mutable bool qidentityproxymodel_clearitemdata_isbase = false;
    mutable bool qidentityproxymodel_buddy_isbase = false;
    mutable bool qidentityproxymodel_canfetchmore_isbase = false;
    mutable bool qidentityproxymodel_fetchmore_isbase = false;
    mutable bool qidentityproxymodel_sort_isbase = false;
    mutable bool qidentityproxymodel_span_isbase = false;
    mutable bool qidentityproxymodel_haschildren_isbase = false;
    mutable bool qidentityproxymodel_mimedata_isbase = false;
    mutable bool qidentityproxymodel_candropmimedata_isbase = false;
    mutable bool qidentityproxymodel_mimetypes_isbase = false;
    mutable bool qidentityproxymodel_supporteddragactions_isbase = false;
    mutable bool qidentityproxymodel_supporteddropactions_isbase = false;
    mutable bool qidentityproxymodel_rolenames_isbase = false;
    mutable bool qidentityproxymodel_multidata_isbase = false;
    mutable bool qidentityproxymodel_resetinternaldata_isbase = false;
    mutable bool qidentityproxymodel_event_isbase = false;
    mutable bool qidentityproxymodel_eventfilter_isbase = false;
    mutable bool qidentityproxymodel_timerevent_isbase = false;
    mutable bool qidentityproxymodel_childevent_isbase = false;
    mutable bool qidentityproxymodel_customevent_isbase = false;
    mutable bool qidentityproxymodel_connectnotify_isbase = false;
    mutable bool qidentityproxymodel_disconnectnotify_isbase = false;
    mutable bool qidentityproxymodel_sethandlesourcelayoutchanges_isbase = false;
    mutable bool qidentityproxymodel_sethandlesourcedatachanges_isbase = false;
    mutable bool qidentityproxymodel_createsourceindex_isbase = false;
    mutable bool qidentityproxymodel_createindex_isbase = false;
    mutable bool qidentityproxymodel_encodedata_isbase = false;
    mutable bool qidentityproxymodel_decodedata_isbase = false;
    mutable bool qidentityproxymodel_begininsertrows_isbase = false;
    mutable bool qidentityproxymodel_endinsertrows_isbase = false;
    mutable bool qidentityproxymodel_beginremoverows_isbase = false;
    mutable bool qidentityproxymodel_endremoverows_isbase = false;
    mutable bool qidentityproxymodel_beginmoverows_isbase = false;
    mutable bool qidentityproxymodel_endmoverows_isbase = false;
    mutable bool qidentityproxymodel_begininsertcolumns_isbase = false;
    mutable bool qidentityproxymodel_endinsertcolumns_isbase = false;
    mutable bool qidentityproxymodel_beginremovecolumns_isbase = false;
    mutable bool qidentityproxymodel_endremovecolumns_isbase = false;
    mutable bool qidentityproxymodel_beginmovecolumns_isbase = false;
    mutable bool qidentityproxymodel_endmovecolumns_isbase = false;
    mutable bool qidentityproxymodel_beginresetmodel_isbase = false;
    mutable bool qidentityproxymodel_endresetmodel_isbase = false;
    mutable bool qidentityproxymodel_changepersistentindex_isbase = false;
    mutable bool qidentityproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qidentityproxymodel_persistentindexlist_isbase = false;
    mutable bool qidentityproxymodel_sender_isbase = false;
    mutable bool qidentityproxymodel_sendersignalindex_isbase = false;
    mutable bool qidentityproxymodel_receivers_isbase = false;
    mutable bool qidentityproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQIdentityProxyModel() : QIdentityProxyModel() {};
    VirtualQIdentityProxyModel(QObject* parent) : QIdentityProxyModel(parent) {};

    ~VirtualQIdentityProxyModel() {
        qidentityproxymodel_metacall_callback = nullptr;
        qidentityproxymodel_columncount_callback = nullptr;
        qidentityproxymodel_index_callback = nullptr;
        qidentityproxymodel_mapfromsource_callback = nullptr;
        qidentityproxymodel_maptosource_callback = nullptr;
        qidentityproxymodel_parent_callback = nullptr;
        qidentityproxymodel_rowcount_callback = nullptr;
        qidentityproxymodel_headerdata_callback = nullptr;
        qidentityproxymodel_dropmimedata_callback = nullptr;
        qidentityproxymodel_sibling_callback = nullptr;
        qidentityproxymodel_mapselectionfromsource_callback = nullptr;
        qidentityproxymodel_mapselectiontosource_callback = nullptr;
        qidentityproxymodel_match_callback = nullptr;
        qidentityproxymodel_setsourcemodel_callback = nullptr;
        qidentityproxymodel_insertcolumns_callback = nullptr;
        qidentityproxymodel_insertrows_callback = nullptr;
        qidentityproxymodel_removecolumns_callback = nullptr;
        qidentityproxymodel_removerows_callback = nullptr;
        qidentityproxymodel_moverows_callback = nullptr;
        qidentityproxymodel_movecolumns_callback = nullptr;
        qidentityproxymodel_submit_callback = nullptr;
        qidentityproxymodel_revert_callback = nullptr;
        qidentityproxymodel_data_callback = nullptr;
        qidentityproxymodel_itemdata_callback = nullptr;
        qidentityproxymodel_flags_callback = nullptr;
        qidentityproxymodel_setdata_callback = nullptr;
        qidentityproxymodel_setitemdata_callback = nullptr;
        qidentityproxymodel_setheaderdata_callback = nullptr;
        qidentityproxymodel_clearitemdata_callback = nullptr;
        qidentityproxymodel_buddy_callback = nullptr;
        qidentityproxymodel_canfetchmore_callback = nullptr;
        qidentityproxymodel_fetchmore_callback = nullptr;
        qidentityproxymodel_sort_callback = nullptr;
        qidentityproxymodel_span_callback = nullptr;
        qidentityproxymodel_haschildren_callback = nullptr;
        qidentityproxymodel_mimedata_callback = nullptr;
        qidentityproxymodel_candropmimedata_callback = nullptr;
        qidentityproxymodel_mimetypes_callback = nullptr;
        qidentityproxymodel_supporteddragactions_callback = nullptr;
        qidentityproxymodel_supporteddropactions_callback = nullptr;
        qidentityproxymodel_rolenames_callback = nullptr;
        qidentityproxymodel_multidata_callback = nullptr;
        qidentityproxymodel_resetinternaldata_callback = nullptr;
        qidentityproxymodel_event_callback = nullptr;
        qidentityproxymodel_eventfilter_callback = nullptr;
        qidentityproxymodel_timerevent_callback = nullptr;
        qidentityproxymodel_childevent_callback = nullptr;
        qidentityproxymodel_customevent_callback = nullptr;
        qidentityproxymodel_connectnotify_callback = nullptr;
        qidentityproxymodel_disconnectnotify_callback = nullptr;
        qidentityproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
        qidentityproxymodel_sethandlesourcedatachanges_callback = nullptr;
        qidentityproxymodel_createsourceindex_callback = nullptr;
        qidentityproxymodel_createindex_callback = nullptr;
        qidentityproxymodel_encodedata_callback = nullptr;
        qidentityproxymodel_decodedata_callback = nullptr;
        qidentityproxymodel_begininsertrows_callback = nullptr;
        qidentityproxymodel_endinsertrows_callback = nullptr;
        qidentityproxymodel_beginremoverows_callback = nullptr;
        qidentityproxymodel_endremoverows_callback = nullptr;
        qidentityproxymodel_beginmoverows_callback = nullptr;
        qidentityproxymodel_endmoverows_callback = nullptr;
        qidentityproxymodel_begininsertcolumns_callback = nullptr;
        qidentityproxymodel_endinsertcolumns_callback = nullptr;
        qidentityproxymodel_beginremovecolumns_callback = nullptr;
        qidentityproxymodel_endremovecolumns_callback = nullptr;
        qidentityproxymodel_beginmovecolumns_callback = nullptr;
        qidentityproxymodel_endmovecolumns_callback = nullptr;
        qidentityproxymodel_beginresetmodel_callback = nullptr;
        qidentityproxymodel_endresetmodel_callback = nullptr;
        qidentityproxymodel_changepersistentindex_callback = nullptr;
        qidentityproxymodel_changepersistentindexlist_callback = nullptr;
        qidentityproxymodel_persistentindexlist_callback = nullptr;
        qidentityproxymodel_sender_callback = nullptr;
        qidentityproxymodel_sendersignalindex_callback = nullptr;
        qidentityproxymodel_receivers_callback = nullptr;
        qidentityproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQIdentityProxyModel_Metacall_Callback(QIdentityProxyModel_Metacall_Callback cb) { qidentityproxymodel_metacall_callback = cb; }
    inline void setQIdentityProxyModel_ColumnCount_Callback(QIdentityProxyModel_ColumnCount_Callback cb) { qidentityproxymodel_columncount_callback = cb; }
    inline void setQIdentityProxyModel_Index_Callback(QIdentityProxyModel_Index_Callback cb) { qidentityproxymodel_index_callback = cb; }
    inline void setQIdentityProxyModel_MapFromSource_Callback(QIdentityProxyModel_MapFromSource_Callback cb) { qidentityproxymodel_mapfromsource_callback = cb; }
    inline void setQIdentityProxyModel_MapToSource_Callback(QIdentityProxyModel_MapToSource_Callback cb) { qidentityproxymodel_maptosource_callback = cb; }
    inline void setQIdentityProxyModel_Parent_Callback(QIdentityProxyModel_Parent_Callback cb) { qidentityproxymodel_parent_callback = cb; }
    inline void setQIdentityProxyModel_RowCount_Callback(QIdentityProxyModel_RowCount_Callback cb) { qidentityproxymodel_rowcount_callback = cb; }
    inline void setQIdentityProxyModel_HeaderData_Callback(QIdentityProxyModel_HeaderData_Callback cb) { qidentityproxymodel_headerdata_callback = cb; }
    inline void setQIdentityProxyModel_DropMimeData_Callback(QIdentityProxyModel_DropMimeData_Callback cb) { qidentityproxymodel_dropmimedata_callback = cb; }
    inline void setQIdentityProxyModel_Sibling_Callback(QIdentityProxyModel_Sibling_Callback cb) { qidentityproxymodel_sibling_callback = cb; }
    inline void setQIdentityProxyModel_MapSelectionFromSource_Callback(QIdentityProxyModel_MapSelectionFromSource_Callback cb) { qidentityproxymodel_mapselectionfromsource_callback = cb; }
    inline void setQIdentityProxyModel_MapSelectionToSource_Callback(QIdentityProxyModel_MapSelectionToSource_Callback cb) { qidentityproxymodel_mapselectiontosource_callback = cb; }
    inline void setQIdentityProxyModel_Match_Callback(QIdentityProxyModel_Match_Callback cb) { qidentityproxymodel_match_callback = cb; }
    inline void setQIdentityProxyModel_SetSourceModel_Callback(QIdentityProxyModel_SetSourceModel_Callback cb) { qidentityproxymodel_setsourcemodel_callback = cb; }
    inline void setQIdentityProxyModel_InsertColumns_Callback(QIdentityProxyModel_InsertColumns_Callback cb) { qidentityproxymodel_insertcolumns_callback = cb; }
    inline void setQIdentityProxyModel_InsertRows_Callback(QIdentityProxyModel_InsertRows_Callback cb) { qidentityproxymodel_insertrows_callback = cb; }
    inline void setQIdentityProxyModel_RemoveColumns_Callback(QIdentityProxyModel_RemoveColumns_Callback cb) { qidentityproxymodel_removecolumns_callback = cb; }
    inline void setQIdentityProxyModel_RemoveRows_Callback(QIdentityProxyModel_RemoveRows_Callback cb) { qidentityproxymodel_removerows_callback = cb; }
    inline void setQIdentityProxyModel_MoveRows_Callback(QIdentityProxyModel_MoveRows_Callback cb) { qidentityproxymodel_moverows_callback = cb; }
    inline void setQIdentityProxyModel_MoveColumns_Callback(QIdentityProxyModel_MoveColumns_Callback cb) { qidentityproxymodel_movecolumns_callback = cb; }
    inline void setQIdentityProxyModel_Submit_Callback(QIdentityProxyModel_Submit_Callback cb) { qidentityproxymodel_submit_callback = cb; }
    inline void setQIdentityProxyModel_Revert_Callback(QIdentityProxyModel_Revert_Callback cb) { qidentityproxymodel_revert_callback = cb; }
    inline void setQIdentityProxyModel_Data_Callback(QIdentityProxyModel_Data_Callback cb) { qidentityproxymodel_data_callback = cb; }
    inline void setQIdentityProxyModel_ItemData_Callback(QIdentityProxyModel_ItemData_Callback cb) { qidentityproxymodel_itemdata_callback = cb; }
    inline void setQIdentityProxyModel_Flags_Callback(QIdentityProxyModel_Flags_Callback cb) { qidentityproxymodel_flags_callback = cb; }
    inline void setQIdentityProxyModel_SetData_Callback(QIdentityProxyModel_SetData_Callback cb) { qidentityproxymodel_setdata_callback = cb; }
    inline void setQIdentityProxyModel_SetItemData_Callback(QIdentityProxyModel_SetItemData_Callback cb) { qidentityproxymodel_setitemdata_callback = cb; }
    inline void setQIdentityProxyModel_SetHeaderData_Callback(QIdentityProxyModel_SetHeaderData_Callback cb) { qidentityproxymodel_setheaderdata_callback = cb; }
    inline void setQIdentityProxyModel_ClearItemData_Callback(QIdentityProxyModel_ClearItemData_Callback cb) { qidentityproxymodel_clearitemdata_callback = cb; }
    inline void setQIdentityProxyModel_Buddy_Callback(QIdentityProxyModel_Buddy_Callback cb) { qidentityproxymodel_buddy_callback = cb; }
    inline void setQIdentityProxyModel_CanFetchMore_Callback(QIdentityProxyModel_CanFetchMore_Callback cb) { qidentityproxymodel_canfetchmore_callback = cb; }
    inline void setQIdentityProxyModel_FetchMore_Callback(QIdentityProxyModel_FetchMore_Callback cb) { qidentityproxymodel_fetchmore_callback = cb; }
    inline void setQIdentityProxyModel_Sort_Callback(QIdentityProxyModel_Sort_Callback cb) { qidentityproxymodel_sort_callback = cb; }
    inline void setQIdentityProxyModel_Span_Callback(QIdentityProxyModel_Span_Callback cb) { qidentityproxymodel_span_callback = cb; }
    inline void setQIdentityProxyModel_HasChildren_Callback(QIdentityProxyModel_HasChildren_Callback cb) { qidentityproxymodel_haschildren_callback = cb; }
    inline void setQIdentityProxyModel_MimeData_Callback(QIdentityProxyModel_MimeData_Callback cb) { qidentityproxymodel_mimedata_callback = cb; }
    inline void setQIdentityProxyModel_CanDropMimeData_Callback(QIdentityProxyModel_CanDropMimeData_Callback cb) { qidentityproxymodel_candropmimedata_callback = cb; }
    inline void setQIdentityProxyModel_MimeTypes_Callback(QIdentityProxyModel_MimeTypes_Callback cb) { qidentityproxymodel_mimetypes_callback = cb; }
    inline void setQIdentityProxyModel_SupportedDragActions_Callback(QIdentityProxyModel_SupportedDragActions_Callback cb) { qidentityproxymodel_supporteddragactions_callback = cb; }
    inline void setQIdentityProxyModel_SupportedDropActions_Callback(QIdentityProxyModel_SupportedDropActions_Callback cb) { qidentityproxymodel_supporteddropactions_callback = cb; }
    inline void setQIdentityProxyModel_RoleNames_Callback(QIdentityProxyModel_RoleNames_Callback cb) { qidentityproxymodel_rolenames_callback = cb; }
    inline void setQIdentityProxyModel_MultiData_Callback(QIdentityProxyModel_MultiData_Callback cb) { qidentityproxymodel_multidata_callback = cb; }
    inline void setQIdentityProxyModel_ResetInternalData_Callback(QIdentityProxyModel_ResetInternalData_Callback cb) { qidentityproxymodel_resetinternaldata_callback = cb; }
    inline void setQIdentityProxyModel_Event_Callback(QIdentityProxyModel_Event_Callback cb) { qidentityproxymodel_event_callback = cb; }
    inline void setQIdentityProxyModel_EventFilter_Callback(QIdentityProxyModel_EventFilter_Callback cb) { qidentityproxymodel_eventfilter_callback = cb; }
    inline void setQIdentityProxyModel_TimerEvent_Callback(QIdentityProxyModel_TimerEvent_Callback cb) { qidentityproxymodel_timerevent_callback = cb; }
    inline void setQIdentityProxyModel_ChildEvent_Callback(QIdentityProxyModel_ChildEvent_Callback cb) { qidentityproxymodel_childevent_callback = cb; }
    inline void setQIdentityProxyModel_CustomEvent_Callback(QIdentityProxyModel_CustomEvent_Callback cb) { qidentityproxymodel_customevent_callback = cb; }
    inline void setQIdentityProxyModel_ConnectNotify_Callback(QIdentityProxyModel_ConnectNotify_Callback cb) { qidentityproxymodel_connectnotify_callback = cb; }
    inline void setQIdentityProxyModel_DisconnectNotify_Callback(QIdentityProxyModel_DisconnectNotify_Callback cb) { qidentityproxymodel_disconnectnotify_callback = cb; }
    inline void setQIdentityProxyModel_SetHandleSourceLayoutChanges_Callback(QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback cb) { qidentityproxymodel_sethandlesourcelayoutchanges_callback = cb; }
    inline void setQIdentityProxyModel_SetHandleSourceDataChanges_Callback(QIdentityProxyModel_SetHandleSourceDataChanges_Callback cb) { qidentityproxymodel_sethandlesourcedatachanges_callback = cb; }
    inline void setQIdentityProxyModel_CreateSourceIndex_Callback(QIdentityProxyModel_CreateSourceIndex_Callback cb) { qidentityproxymodel_createsourceindex_callback = cb; }
    inline void setQIdentityProxyModel_CreateIndex_Callback(QIdentityProxyModel_CreateIndex_Callback cb) { qidentityproxymodel_createindex_callback = cb; }
    inline void setQIdentityProxyModel_EncodeData_Callback(QIdentityProxyModel_EncodeData_Callback cb) { qidentityproxymodel_encodedata_callback = cb; }
    inline void setQIdentityProxyModel_DecodeData_Callback(QIdentityProxyModel_DecodeData_Callback cb) { qidentityproxymodel_decodedata_callback = cb; }
    inline void setQIdentityProxyModel_BeginInsertRows_Callback(QIdentityProxyModel_BeginInsertRows_Callback cb) { qidentityproxymodel_begininsertrows_callback = cb; }
    inline void setQIdentityProxyModel_EndInsertRows_Callback(QIdentityProxyModel_EndInsertRows_Callback cb) { qidentityproxymodel_endinsertrows_callback = cb; }
    inline void setQIdentityProxyModel_BeginRemoveRows_Callback(QIdentityProxyModel_BeginRemoveRows_Callback cb) { qidentityproxymodel_beginremoverows_callback = cb; }
    inline void setQIdentityProxyModel_EndRemoveRows_Callback(QIdentityProxyModel_EndRemoveRows_Callback cb) { qidentityproxymodel_endremoverows_callback = cb; }
    inline void setQIdentityProxyModel_BeginMoveRows_Callback(QIdentityProxyModel_BeginMoveRows_Callback cb) { qidentityproxymodel_beginmoverows_callback = cb; }
    inline void setQIdentityProxyModel_EndMoveRows_Callback(QIdentityProxyModel_EndMoveRows_Callback cb) { qidentityproxymodel_endmoverows_callback = cb; }
    inline void setQIdentityProxyModel_BeginInsertColumns_Callback(QIdentityProxyModel_BeginInsertColumns_Callback cb) { qidentityproxymodel_begininsertcolumns_callback = cb; }
    inline void setQIdentityProxyModel_EndInsertColumns_Callback(QIdentityProxyModel_EndInsertColumns_Callback cb) { qidentityproxymodel_endinsertcolumns_callback = cb; }
    inline void setQIdentityProxyModel_BeginRemoveColumns_Callback(QIdentityProxyModel_BeginRemoveColumns_Callback cb) { qidentityproxymodel_beginremovecolumns_callback = cb; }
    inline void setQIdentityProxyModel_EndRemoveColumns_Callback(QIdentityProxyModel_EndRemoveColumns_Callback cb) { qidentityproxymodel_endremovecolumns_callback = cb; }
    inline void setQIdentityProxyModel_BeginMoveColumns_Callback(QIdentityProxyModel_BeginMoveColumns_Callback cb) { qidentityproxymodel_beginmovecolumns_callback = cb; }
    inline void setQIdentityProxyModel_EndMoveColumns_Callback(QIdentityProxyModel_EndMoveColumns_Callback cb) { qidentityproxymodel_endmovecolumns_callback = cb; }
    inline void setQIdentityProxyModel_BeginResetModel_Callback(QIdentityProxyModel_BeginResetModel_Callback cb) { qidentityproxymodel_beginresetmodel_callback = cb; }
    inline void setQIdentityProxyModel_EndResetModel_Callback(QIdentityProxyModel_EndResetModel_Callback cb) { qidentityproxymodel_endresetmodel_callback = cb; }
    inline void setQIdentityProxyModel_ChangePersistentIndex_Callback(QIdentityProxyModel_ChangePersistentIndex_Callback cb) { qidentityproxymodel_changepersistentindex_callback = cb; }
    inline void setQIdentityProxyModel_ChangePersistentIndexList_Callback(QIdentityProxyModel_ChangePersistentIndexList_Callback cb) { qidentityproxymodel_changepersistentindexlist_callback = cb; }
    inline void setQIdentityProxyModel_PersistentIndexList_Callback(QIdentityProxyModel_PersistentIndexList_Callback cb) { qidentityproxymodel_persistentindexlist_callback = cb; }
    inline void setQIdentityProxyModel_Sender_Callback(QIdentityProxyModel_Sender_Callback cb) { qidentityproxymodel_sender_callback = cb; }
    inline void setQIdentityProxyModel_SenderSignalIndex_Callback(QIdentityProxyModel_SenderSignalIndex_Callback cb) { qidentityproxymodel_sendersignalindex_callback = cb; }
    inline void setQIdentityProxyModel_Receivers_Callback(QIdentityProxyModel_Receivers_Callback cb) { qidentityproxymodel_receivers_callback = cb; }
    inline void setQIdentityProxyModel_IsSignalConnected_Callback(QIdentityProxyModel_IsSignalConnected_Callback cb) { qidentityproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQIdentityProxyModel_Metacall_IsBase(bool value) const { qidentityproxymodel_metacall_isbase = value; }
    inline void setQIdentityProxyModel_ColumnCount_IsBase(bool value) const { qidentityproxymodel_columncount_isbase = value; }
    inline void setQIdentityProxyModel_Index_IsBase(bool value) const { qidentityproxymodel_index_isbase = value; }
    inline void setQIdentityProxyModel_MapFromSource_IsBase(bool value) const { qidentityproxymodel_mapfromsource_isbase = value; }
    inline void setQIdentityProxyModel_MapToSource_IsBase(bool value) const { qidentityproxymodel_maptosource_isbase = value; }
    inline void setQIdentityProxyModel_Parent_IsBase(bool value) const { qidentityproxymodel_parent_isbase = value; }
    inline void setQIdentityProxyModel_RowCount_IsBase(bool value) const { qidentityproxymodel_rowcount_isbase = value; }
    inline void setQIdentityProxyModel_HeaderData_IsBase(bool value) const { qidentityproxymodel_headerdata_isbase = value; }
    inline void setQIdentityProxyModel_DropMimeData_IsBase(bool value) const { qidentityproxymodel_dropmimedata_isbase = value; }
    inline void setQIdentityProxyModel_Sibling_IsBase(bool value) const { qidentityproxymodel_sibling_isbase = value; }
    inline void setQIdentityProxyModel_MapSelectionFromSource_IsBase(bool value) const { qidentityproxymodel_mapselectionfromsource_isbase = value; }
    inline void setQIdentityProxyModel_MapSelectionToSource_IsBase(bool value) const { qidentityproxymodel_mapselectiontosource_isbase = value; }
    inline void setQIdentityProxyModel_Match_IsBase(bool value) const { qidentityproxymodel_match_isbase = value; }
    inline void setQIdentityProxyModel_SetSourceModel_IsBase(bool value) const { qidentityproxymodel_setsourcemodel_isbase = value; }
    inline void setQIdentityProxyModel_InsertColumns_IsBase(bool value) const { qidentityproxymodel_insertcolumns_isbase = value; }
    inline void setQIdentityProxyModel_InsertRows_IsBase(bool value) const { qidentityproxymodel_insertrows_isbase = value; }
    inline void setQIdentityProxyModel_RemoveColumns_IsBase(bool value) const { qidentityproxymodel_removecolumns_isbase = value; }
    inline void setQIdentityProxyModel_RemoveRows_IsBase(bool value) const { qidentityproxymodel_removerows_isbase = value; }
    inline void setQIdentityProxyModel_MoveRows_IsBase(bool value) const { qidentityproxymodel_moverows_isbase = value; }
    inline void setQIdentityProxyModel_MoveColumns_IsBase(bool value) const { qidentityproxymodel_movecolumns_isbase = value; }
    inline void setQIdentityProxyModel_Submit_IsBase(bool value) const { qidentityproxymodel_submit_isbase = value; }
    inline void setQIdentityProxyModel_Revert_IsBase(bool value) const { qidentityproxymodel_revert_isbase = value; }
    inline void setQIdentityProxyModel_Data_IsBase(bool value) const { qidentityproxymodel_data_isbase = value; }
    inline void setQIdentityProxyModel_ItemData_IsBase(bool value) const { qidentityproxymodel_itemdata_isbase = value; }
    inline void setQIdentityProxyModel_Flags_IsBase(bool value) const { qidentityproxymodel_flags_isbase = value; }
    inline void setQIdentityProxyModel_SetData_IsBase(bool value) const { qidentityproxymodel_setdata_isbase = value; }
    inline void setQIdentityProxyModel_SetItemData_IsBase(bool value) const { qidentityproxymodel_setitemdata_isbase = value; }
    inline void setQIdentityProxyModel_SetHeaderData_IsBase(bool value) const { qidentityproxymodel_setheaderdata_isbase = value; }
    inline void setQIdentityProxyModel_ClearItemData_IsBase(bool value) const { qidentityproxymodel_clearitemdata_isbase = value; }
    inline void setQIdentityProxyModel_Buddy_IsBase(bool value) const { qidentityproxymodel_buddy_isbase = value; }
    inline void setQIdentityProxyModel_CanFetchMore_IsBase(bool value) const { qidentityproxymodel_canfetchmore_isbase = value; }
    inline void setQIdentityProxyModel_FetchMore_IsBase(bool value) const { qidentityproxymodel_fetchmore_isbase = value; }
    inline void setQIdentityProxyModel_Sort_IsBase(bool value) const { qidentityproxymodel_sort_isbase = value; }
    inline void setQIdentityProxyModel_Span_IsBase(bool value) const { qidentityproxymodel_span_isbase = value; }
    inline void setQIdentityProxyModel_HasChildren_IsBase(bool value) const { qidentityproxymodel_haschildren_isbase = value; }
    inline void setQIdentityProxyModel_MimeData_IsBase(bool value) const { qidentityproxymodel_mimedata_isbase = value; }
    inline void setQIdentityProxyModel_CanDropMimeData_IsBase(bool value) const { qidentityproxymodel_candropmimedata_isbase = value; }
    inline void setQIdentityProxyModel_MimeTypes_IsBase(bool value) const { qidentityproxymodel_mimetypes_isbase = value; }
    inline void setQIdentityProxyModel_SupportedDragActions_IsBase(bool value) const { qidentityproxymodel_supporteddragactions_isbase = value; }
    inline void setQIdentityProxyModel_SupportedDropActions_IsBase(bool value) const { qidentityproxymodel_supporteddropactions_isbase = value; }
    inline void setQIdentityProxyModel_RoleNames_IsBase(bool value) const { qidentityproxymodel_rolenames_isbase = value; }
    inline void setQIdentityProxyModel_MultiData_IsBase(bool value) const { qidentityproxymodel_multidata_isbase = value; }
    inline void setQIdentityProxyModel_ResetInternalData_IsBase(bool value) const { qidentityproxymodel_resetinternaldata_isbase = value; }
    inline void setQIdentityProxyModel_Event_IsBase(bool value) const { qidentityproxymodel_event_isbase = value; }
    inline void setQIdentityProxyModel_EventFilter_IsBase(bool value) const { qidentityproxymodel_eventfilter_isbase = value; }
    inline void setQIdentityProxyModel_TimerEvent_IsBase(bool value) const { qidentityproxymodel_timerevent_isbase = value; }
    inline void setQIdentityProxyModel_ChildEvent_IsBase(bool value) const { qidentityproxymodel_childevent_isbase = value; }
    inline void setQIdentityProxyModel_CustomEvent_IsBase(bool value) const { qidentityproxymodel_customevent_isbase = value; }
    inline void setQIdentityProxyModel_ConnectNotify_IsBase(bool value) const { qidentityproxymodel_connectnotify_isbase = value; }
    inline void setQIdentityProxyModel_DisconnectNotify_IsBase(bool value) const { qidentityproxymodel_disconnectnotify_isbase = value; }
    inline void setQIdentityProxyModel_SetHandleSourceLayoutChanges_IsBase(bool value) const { qidentityproxymodel_sethandlesourcelayoutchanges_isbase = value; }
    inline void setQIdentityProxyModel_SetHandleSourceDataChanges_IsBase(bool value) const { qidentityproxymodel_sethandlesourcedatachanges_isbase = value; }
    inline void setQIdentityProxyModel_CreateSourceIndex_IsBase(bool value) const { qidentityproxymodel_createsourceindex_isbase = value; }
    inline void setQIdentityProxyModel_CreateIndex_IsBase(bool value) const { qidentityproxymodel_createindex_isbase = value; }
    inline void setQIdentityProxyModel_EncodeData_IsBase(bool value) const { qidentityproxymodel_encodedata_isbase = value; }
    inline void setQIdentityProxyModel_DecodeData_IsBase(bool value) const { qidentityproxymodel_decodedata_isbase = value; }
    inline void setQIdentityProxyModel_BeginInsertRows_IsBase(bool value) const { qidentityproxymodel_begininsertrows_isbase = value; }
    inline void setQIdentityProxyModel_EndInsertRows_IsBase(bool value) const { qidentityproxymodel_endinsertrows_isbase = value; }
    inline void setQIdentityProxyModel_BeginRemoveRows_IsBase(bool value) const { qidentityproxymodel_beginremoverows_isbase = value; }
    inline void setQIdentityProxyModel_EndRemoveRows_IsBase(bool value) const { qidentityproxymodel_endremoverows_isbase = value; }
    inline void setQIdentityProxyModel_BeginMoveRows_IsBase(bool value) const { qidentityproxymodel_beginmoverows_isbase = value; }
    inline void setQIdentityProxyModel_EndMoveRows_IsBase(bool value) const { qidentityproxymodel_endmoverows_isbase = value; }
    inline void setQIdentityProxyModel_BeginInsertColumns_IsBase(bool value) const { qidentityproxymodel_begininsertcolumns_isbase = value; }
    inline void setQIdentityProxyModel_EndInsertColumns_IsBase(bool value) const { qidentityproxymodel_endinsertcolumns_isbase = value; }
    inline void setQIdentityProxyModel_BeginRemoveColumns_IsBase(bool value) const { qidentityproxymodel_beginremovecolumns_isbase = value; }
    inline void setQIdentityProxyModel_EndRemoveColumns_IsBase(bool value) const { qidentityproxymodel_endremovecolumns_isbase = value; }
    inline void setQIdentityProxyModel_BeginMoveColumns_IsBase(bool value) const { qidentityproxymodel_beginmovecolumns_isbase = value; }
    inline void setQIdentityProxyModel_EndMoveColumns_IsBase(bool value) const { qidentityproxymodel_endmovecolumns_isbase = value; }
    inline void setQIdentityProxyModel_BeginResetModel_IsBase(bool value) const { qidentityproxymodel_beginresetmodel_isbase = value; }
    inline void setQIdentityProxyModel_EndResetModel_IsBase(bool value) const { qidentityproxymodel_endresetmodel_isbase = value; }
    inline void setQIdentityProxyModel_ChangePersistentIndex_IsBase(bool value) const { qidentityproxymodel_changepersistentindex_isbase = value; }
    inline void setQIdentityProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qidentityproxymodel_changepersistentindexlist_isbase = value; }
    inline void setQIdentityProxyModel_PersistentIndexList_IsBase(bool value) const { qidentityproxymodel_persistentindexlist_isbase = value; }
    inline void setQIdentityProxyModel_Sender_IsBase(bool value) const { qidentityproxymodel_sender_isbase = value; }
    inline void setQIdentityProxyModel_SenderSignalIndex_IsBase(bool value) const { qidentityproxymodel_sendersignalindex_isbase = value; }
    inline void setQIdentityProxyModel_Receivers_IsBase(bool value) const { qidentityproxymodel_receivers_isbase = value; }
    inline void setQIdentityProxyModel_IsSignalConnected_IsBase(bool value) const { qidentityproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qidentityproxymodel_metacall_isbase) {
            qidentityproxymodel_metacall_isbase = false;
            return QIdentityProxyModel::qt_metacall(param1, param2, param3);
        } else if (qidentityproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qidentityproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QIdentityProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_columncount_isbase) {
            qidentityproxymodel_columncount_isbase = false;
            return QIdentityProxyModel::columnCount(parent);
        } else if (qidentityproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qidentityproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QIdentityProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_index_isbase) {
            qidentityproxymodel_index_isbase = false;
            return QIdentityProxyModel::index(row, column, parent);
        } else if (qidentityproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qidentityproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qidentityproxymodel_mapfromsource_isbase) {
            qidentityproxymodel_mapfromsource_isbase = false;
            return QIdentityProxyModel::mapFromSource(sourceIndex);
        } else if (qidentityproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = qidentityproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qidentityproxymodel_maptosource_isbase) {
            qidentityproxymodel_maptosource_isbase = false;
            return QIdentityProxyModel::mapToSource(proxyIndex);
        } else if (qidentityproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = qidentityproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qidentityproxymodel_parent_isbase) {
            qidentityproxymodel_parent_isbase = false;
            return QIdentityProxyModel::parent(child);
        } else if (qidentityproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = qidentityproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_rowcount_isbase) {
            qidentityproxymodel_rowcount_isbase = false;
            return QIdentityProxyModel::rowCount(parent);
        } else if (qidentityproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qidentityproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QIdentityProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qidentityproxymodel_headerdata_isbase) {
            qidentityproxymodel_headerdata_isbase = false;
            return QIdentityProxyModel::headerData(section, orientation, role);
        } else if (qidentityproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qidentityproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qidentityproxymodel_dropmimedata_isbase) {
            qidentityproxymodel_dropmimedata_isbase = false;
            return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qidentityproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qidentityproxymodel_sibling_isbase) {
            qidentityproxymodel_sibling_isbase = false;
            return QIdentityProxyModel::sibling(row, column, idx);
        } else if (qidentityproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qidentityproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectionfromsource_isbase) {
            qidentityproxymodel_mapselectionfromsource_isbase = false;
            return QIdentityProxyModel::mapSelectionFromSource(selection);
        } else if (qidentityproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = qidentityproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectiontosource_isbase) {
            qidentityproxymodel_mapselectiontosource_isbase = false;
            return QIdentityProxyModel::mapSelectionToSource(selection);
        } else if (qidentityproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = qidentityproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qidentityproxymodel_match_isbase) {
            qidentityproxymodel_match_isbase = false;
            return QIdentityProxyModel::match(start, role, value, hits, flags);
        } else if (qidentityproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qidentityproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QIdentityProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qidentityproxymodel_setsourcemodel_isbase) {
            qidentityproxymodel_setsourcemodel_isbase = false;
            QIdentityProxyModel::setSourceModel(sourceModel);
        } else if (qidentityproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            qidentityproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            QIdentityProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertcolumns_isbase) {
            qidentityproxymodel_insertcolumns_isbase = false;
            return QIdentityProxyModel::insertColumns(column, count, parent);
        } else if (qidentityproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QIdentityProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertrows_isbase) {
            qidentityproxymodel_insertrows_isbase = false;
            return QIdentityProxyModel::insertRows(row, count, parent);
        } else if (qidentityproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QIdentityProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removecolumns_isbase) {
            qidentityproxymodel_removecolumns_isbase = false;
            return QIdentityProxyModel::removeColumns(column, count, parent);
        } else if (qidentityproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QIdentityProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removerows_isbase) {
            qidentityproxymodel_removerows_isbase = false;
            return QIdentityProxyModel::removeRows(row, count, parent);
        } else if (qidentityproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QIdentityProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_moverows_isbase) {
            qidentityproxymodel_moverows_isbase = false;
            return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qidentityproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qidentityproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_movecolumns_isbase) {
            qidentityproxymodel_movecolumns_isbase = false;
            return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qidentityproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qidentityproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qidentityproxymodel_submit_isbase) {
            qidentityproxymodel_submit_isbase = false;
            return QIdentityProxyModel::submit();
        } else if (qidentityproxymodel_submit_callback != nullptr) {
            bool callback_ret = qidentityproxymodel_submit_callback();
            return callback_ret;
        } else {
            return QIdentityProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qidentityproxymodel_revert_isbase) {
            qidentityproxymodel_revert_isbase = false;
            QIdentityProxyModel::revert();
        } else if (qidentityproxymodel_revert_callback != nullptr) {
            qidentityproxymodel_revert_callback();
        } else {
            QIdentityProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qidentityproxymodel_data_isbase) {
            qidentityproxymodel_data_isbase = false;
            return QIdentityProxyModel::data(proxyIndex, role);
        } else if (qidentityproxymodel_data_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;

            QVariant* callback_ret = qidentityproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::data(proxyIndex, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qidentityproxymodel_itemdata_isbase) {
            qidentityproxymodel_itemdata_isbase = false;
            return QIdentityProxyModel::itemData(index);
        } else if (qidentityproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qidentityproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QIdentityProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qidentityproxymodel_flags_isbase) {
            qidentityproxymodel_flags_isbase = false;
            return QIdentityProxyModel::flags(index);
        } else if (qidentityproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qidentityproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QIdentityProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qidentityproxymodel_setdata_isbase) {
            qidentityproxymodel_setdata_isbase = false;
            return QIdentityProxyModel::setData(index, value, role);
        } else if (qidentityproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qidentityproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QIdentityProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qidentityproxymodel_setitemdata_isbase) {
            qidentityproxymodel_setitemdata_isbase = false;
            return QIdentityProxyModel::setItemData(index, roles);
        } else if (qidentityproxymodel_setitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QMap<int, QVariant>& roles_ret = roles;
            // Convert const QMap<> from C++ memory to manually-managed C memory
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

            bool callback_ret = qidentityproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QIdentityProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qidentityproxymodel_setheaderdata_isbase) {
            qidentityproxymodel_setheaderdata_isbase = false;
            return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qidentityproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qidentityproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qidentityproxymodel_clearitemdata_isbase) {
            qidentityproxymodel_clearitemdata_isbase = false;
            return QIdentityProxyModel::clearItemData(index);
        } else if (qidentityproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qidentityproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIdentityProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qidentityproxymodel_buddy_isbase) {
            qidentityproxymodel_buddy_isbase = false;
            return QIdentityProxyModel::buddy(index);
        } else if (qidentityproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qidentityproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qidentityproxymodel_canfetchmore_isbase) {
            qidentityproxymodel_canfetchmore_isbase = false;
            return QIdentityProxyModel::canFetchMore(parent);
        } else if (qidentityproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIdentityProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qidentityproxymodel_fetchmore_isbase) {
            qidentityproxymodel_fetchmore_isbase = false;
            QIdentityProxyModel::fetchMore(parent);
        } else if (qidentityproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qidentityproxymodel_fetchmore_callback(this, cbval1);
        } else {
            QIdentityProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qidentityproxymodel_sort_isbase) {
            qidentityproxymodel_sort_isbase = false;
            QIdentityProxyModel::sort(column, order);
        } else if (qidentityproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qidentityproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            QIdentityProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qidentityproxymodel_span_isbase) {
            qidentityproxymodel_span_isbase = false;
            return QIdentityProxyModel::span(index);
        } else if (qidentityproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qidentityproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qidentityproxymodel_haschildren_isbase) {
            qidentityproxymodel_haschildren_isbase = false;
            return QIdentityProxyModel::hasChildren(parent);
        } else if (qidentityproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIdentityProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qidentityproxymodel_mimedata_isbase) {
            qidentityproxymodel_mimedata_isbase = false;
            return QIdentityProxyModel::mimeData(indexes);
        } else if (qidentityproxymodel_mimedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert const QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
            for (size_t i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = qidentityproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIdentityProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_candropmimedata_isbase) {
            qidentityproxymodel_candropmimedata_isbase = false;
            return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qidentityproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qidentityproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qidentityproxymodel_mimetypes_isbase) {
            qidentityproxymodel_mimetypes_isbase = false;
            return QIdentityProxyModel::mimeTypes();
        } else if (qidentityproxymodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qidentityproxymodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QIdentityProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qidentityproxymodel_supporteddragactions_isbase) {
            qidentityproxymodel_supporteddragactions_isbase = false;
            return QIdentityProxyModel::supportedDragActions();
        } else if (qidentityproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qidentityproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QIdentityProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qidentityproxymodel_supporteddropactions_isbase) {
            qidentityproxymodel_supporteddropactions_isbase = false;
            return QIdentityProxyModel::supportedDropActions();
        } else if (qidentityproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qidentityproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QIdentityProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qidentityproxymodel_rolenames_isbase) {
            qidentityproxymodel_rolenames_isbase = false;
            return QIdentityProxyModel::roleNames();
        } else if (qidentityproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qidentityproxymodel_rolenames_callback();
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
            return QIdentityProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qidentityproxymodel_multidata_isbase) {
            qidentityproxymodel_multidata_isbase = false;
            QIdentityProxyModel::multiData(index, roleDataSpan);
        } else if (qidentityproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qidentityproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QIdentityProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qidentityproxymodel_resetinternaldata_isbase) {
            qidentityproxymodel_resetinternaldata_isbase = false;
            QIdentityProxyModel::resetInternalData();
        } else if (qidentityproxymodel_resetinternaldata_callback != nullptr) {
            qidentityproxymodel_resetinternaldata_callback();
        } else {
            QIdentityProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qidentityproxymodel_event_isbase) {
            qidentityproxymodel_event_isbase = false;
            return QIdentityProxyModel::event(event);
        } else if (qidentityproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qidentityproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIdentityProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qidentityproxymodel_eventfilter_isbase) {
            qidentityproxymodel_eventfilter_isbase = false;
            return QIdentityProxyModel::eventFilter(watched, event);
        } else if (qidentityproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qidentityproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QIdentityProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qidentityproxymodel_timerevent_isbase) {
            qidentityproxymodel_timerevent_isbase = false;
            QIdentityProxyModel::timerEvent(event);
        } else if (qidentityproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qidentityproxymodel_timerevent_callback(this, cbval1);
        } else {
            QIdentityProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qidentityproxymodel_childevent_isbase) {
            qidentityproxymodel_childevent_isbase = false;
            QIdentityProxyModel::childEvent(event);
        } else if (qidentityproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qidentityproxymodel_childevent_callback(this, cbval1);
        } else {
            QIdentityProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qidentityproxymodel_customevent_isbase) {
            qidentityproxymodel_customevent_isbase = false;
            QIdentityProxyModel::customEvent(event);
        } else if (qidentityproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qidentityproxymodel_customevent_callback(this, cbval1);
        } else {
            QIdentityProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_connectnotify_isbase) {
            qidentityproxymodel_connectnotify_isbase = false;
            QIdentityProxyModel::connectNotify(signal);
        } else if (qidentityproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qidentityproxymodel_connectnotify_callback(this, cbval1);
        } else {
            QIdentityProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_disconnectnotify_isbase) {
            qidentityproxymodel_disconnectnotify_isbase = false;
            QIdentityProxyModel::disconnectNotify(signal);
        } else if (qidentityproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qidentityproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            QIdentityProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceLayoutChanges(bool handleSourceLayoutChanges) {
        if (qidentityproxymodel_sethandlesourcelayoutchanges_isbase) {
            qidentityproxymodel_sethandlesourcelayoutchanges_isbase = false;
            QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        } else if (qidentityproxymodel_sethandlesourcelayoutchanges_callback != nullptr) {
            bool cbval1 = handleSourceLayoutChanges;

            qidentityproxymodel_sethandlesourcelayoutchanges_callback(this, cbval1);
        } else {
            QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceDataChanges(bool handleSourceDataChanges) {
        if (qidentityproxymodel_sethandlesourcedatachanges_isbase) {
            qidentityproxymodel_sethandlesourcedatachanges_isbase = false;
            QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        } else if (qidentityproxymodel_sethandlesourcedatachanges_callback != nullptr) {
            bool cbval1 = handleSourceDataChanges;

            qidentityproxymodel_sethandlesourcedatachanges_callback(this, cbval1);
        } else {
            QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qidentityproxymodel_createsourceindex_isbase) {
            qidentityproxymodel_createsourceindex_isbase = false;
            return QIdentityProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qidentityproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = qidentityproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qidentityproxymodel_createindex_isbase) {
            qidentityproxymodel_createindex_isbase = false;
            return QIdentityProxyModel::createIndex(row, column);
        } else if (qidentityproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qidentityproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QIdentityProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qidentityproxymodel_encodedata_isbase) {
            qidentityproxymodel_encodedata_isbase = false;
            QIdentityProxyModel::encodeData(indexes, stream);
        } else if (qidentityproxymodel_encodedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert const QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
            for (size_t i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval2 = &stream_ret;

            qidentityproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QIdentityProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qidentityproxymodel_decodedata_isbase) {
            qidentityproxymodel_decodedata_isbase = false;
            return QIdentityProxyModel::decodeData(row, column, parent, stream);
        } else if (qidentityproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qidentityproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QIdentityProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_begininsertrows_isbase) {
            qidentityproxymodel_begininsertrows_isbase = false;
            QIdentityProxyModel::beginInsertRows(parent, first, last);
        } else if (qidentityproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qidentityproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QIdentityProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qidentityproxymodel_endinsertrows_isbase) {
            qidentityproxymodel_endinsertrows_isbase = false;
            QIdentityProxyModel::endInsertRows();
        } else if (qidentityproxymodel_endinsertrows_callback != nullptr) {
            qidentityproxymodel_endinsertrows_callback();
        } else {
            QIdentityProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_beginremoverows_isbase) {
            qidentityproxymodel_beginremoverows_isbase = false;
            QIdentityProxyModel::beginRemoveRows(parent, first, last);
        } else if (qidentityproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qidentityproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QIdentityProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qidentityproxymodel_endremoverows_isbase) {
            qidentityproxymodel_endremoverows_isbase = false;
            QIdentityProxyModel::endRemoveRows();
        } else if (qidentityproxymodel_endremoverows_callback != nullptr) {
            qidentityproxymodel_endremoverows_callback();
        } else {
            QIdentityProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qidentityproxymodel_beginmoverows_isbase) {
            qidentityproxymodel_beginmoverows_isbase = false;
            return QIdentityProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qidentityproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qidentityproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QIdentityProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qidentityproxymodel_endmoverows_isbase) {
            qidentityproxymodel_endmoverows_isbase = false;
            QIdentityProxyModel::endMoveRows();
        } else if (qidentityproxymodel_endmoverows_callback != nullptr) {
            qidentityproxymodel_endmoverows_callback();
        } else {
            QIdentityProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_begininsertcolumns_isbase) {
            qidentityproxymodel_begininsertcolumns_isbase = false;
            QIdentityProxyModel::beginInsertColumns(parent, first, last);
        } else if (qidentityproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qidentityproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QIdentityProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qidentityproxymodel_endinsertcolumns_isbase) {
            qidentityproxymodel_endinsertcolumns_isbase = false;
            QIdentityProxyModel::endInsertColumns();
        } else if (qidentityproxymodel_endinsertcolumns_callback != nullptr) {
            qidentityproxymodel_endinsertcolumns_callback();
        } else {
            QIdentityProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_beginremovecolumns_isbase) {
            qidentityproxymodel_beginremovecolumns_isbase = false;
            QIdentityProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qidentityproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qidentityproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QIdentityProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qidentityproxymodel_endremovecolumns_isbase) {
            qidentityproxymodel_endremovecolumns_isbase = false;
            QIdentityProxyModel::endRemoveColumns();
        } else if (qidentityproxymodel_endremovecolumns_callback != nullptr) {
            qidentityproxymodel_endremovecolumns_callback();
        } else {
            QIdentityProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qidentityproxymodel_beginmovecolumns_isbase) {
            qidentityproxymodel_beginmovecolumns_isbase = false;
            return QIdentityProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qidentityproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qidentityproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QIdentityProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qidentityproxymodel_endmovecolumns_isbase) {
            qidentityproxymodel_endmovecolumns_isbase = false;
            QIdentityProxyModel::endMoveColumns();
        } else if (qidentityproxymodel_endmovecolumns_callback != nullptr) {
            qidentityproxymodel_endmovecolumns_callback();
        } else {
            QIdentityProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qidentityproxymodel_beginresetmodel_isbase) {
            qidentityproxymodel_beginresetmodel_isbase = false;
            QIdentityProxyModel::beginResetModel();
        } else if (qidentityproxymodel_beginresetmodel_callback != nullptr) {
            qidentityproxymodel_beginresetmodel_callback();
        } else {
            QIdentityProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qidentityproxymodel_endresetmodel_isbase) {
            qidentityproxymodel_endresetmodel_isbase = false;
            QIdentityProxyModel::endResetModel();
        } else if (qidentityproxymodel_endresetmodel_callback != nullptr) {
            qidentityproxymodel_endresetmodel_callback();
        } else {
            QIdentityProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qidentityproxymodel_changepersistentindex_isbase) {
            qidentityproxymodel_changepersistentindex_isbase = false;
            QIdentityProxyModel::changePersistentIndex(from, to);
        } else if (qidentityproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qidentityproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QIdentityProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qidentityproxymodel_changepersistentindexlist_isbase) {
            qidentityproxymodel_changepersistentindexlist_isbase = false;
            QIdentityProxyModel::changePersistentIndexList(from, to);
        } else if (qidentityproxymodel_changepersistentindexlist_callback != nullptr) {
            const QList<QModelIndex>& from_ret = from;
            // Convert const QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * from_ret.size()));
            for (size_t i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert const QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * to_ret.size()));
            for (size_t i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            qidentityproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QIdentityProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qidentityproxymodel_persistentindexlist_isbase) {
            qidentityproxymodel_persistentindexlist_isbase = false;
            return QIdentityProxyModel::persistentIndexList();
        } else if (qidentityproxymodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qidentityproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QIdentityProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qidentityproxymodel_sender_isbase) {
            qidentityproxymodel_sender_isbase = false;
            return QIdentityProxyModel::sender();
        } else if (qidentityproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = qidentityproxymodel_sender_callback();
            return callback_ret;
        } else {
            return QIdentityProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qidentityproxymodel_sendersignalindex_isbase) {
            qidentityproxymodel_sendersignalindex_isbase = false;
            return QIdentityProxyModel::senderSignalIndex();
        } else if (qidentityproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qidentityproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QIdentityProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qidentityproxymodel_receivers_isbase) {
            qidentityproxymodel_receivers_isbase = false;
            return QIdentityProxyModel::receivers(signal);
        } else if (qidentityproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qidentityproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QIdentityProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qidentityproxymodel_issignalconnected_isbase) {
            qidentityproxymodel_issignalconnected_isbase = false;
            return QIdentityProxyModel::isSignalConnected(signal);
        } else if (qidentityproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qidentityproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIdentityProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QIdentityProxyModel_ResetInternalData(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseResetInternalData(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_TimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
    friend void QIdentityProxyModel_QBaseTimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
    friend void QIdentityProxyModel_ChildEvent(QIdentityProxyModel* self, QChildEvent* event);
    friend void QIdentityProxyModel_QBaseChildEvent(QIdentityProxyModel* self, QChildEvent* event);
    friend void QIdentityProxyModel_CustomEvent(QIdentityProxyModel* self, QEvent* event);
    friend void QIdentityProxyModel_QBaseCustomEvent(QIdentityProxyModel* self, QEvent* event);
    friend void QIdentityProxyModel_ConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_QBaseConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_DisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_QBaseDisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_SetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
    friend void QIdentityProxyModel_QBaseSetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
    friend void QIdentityProxyModel_SetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
    friend void QIdentityProxyModel_QBaseSetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
    friend QModelIndex* QIdentityProxyModel_CreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QIdentityProxyModel_QBaseCreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QIdentityProxyModel_CreateIndex(const QIdentityProxyModel* self, int row, int column);
    friend QModelIndex* QIdentityProxyModel_QBaseCreateIndex(const QIdentityProxyModel* self, int row, int column);
    friend void QIdentityProxyModel_EncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QIdentityProxyModel_QBaseEncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QIdentityProxyModel_DecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QIdentityProxyModel_QBaseDecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QIdentityProxyModel_BeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_QBaseBeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndInsertRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndInsertRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_QBaseBeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndRemoveRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndRemoveRows(QIdentityProxyModel* self);
    friend bool QIdentityProxyModel_BeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QIdentityProxyModel_QBaseBeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QIdentityProxyModel_EndMoveRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndMoveRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_QBaseBeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndInsertColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndInsertColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_QBaseBeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndRemoveColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndRemoveColumns(QIdentityProxyModel* self);
    friend bool QIdentityProxyModel_BeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QIdentityProxyModel_QBaseBeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QIdentityProxyModel_EndMoveColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndMoveColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseBeginResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_EndResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_QBaseEndResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_ChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QIdentityProxyModel_QBaseChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QIdentityProxyModel_ChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QIdentityProxyModel_QBaseChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QIdentityProxyModel_PersistentIndexList(const QIdentityProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBasePersistentIndexList(const QIdentityProxyModel* self);
    friend QObject* QIdentityProxyModel_Sender(const QIdentityProxyModel* self);
    friend QObject* QIdentityProxyModel_QBaseSender(const QIdentityProxyModel* self);
    friend int QIdentityProxyModel_SenderSignalIndex(const QIdentityProxyModel* self);
    friend int QIdentityProxyModel_QBaseSenderSignalIndex(const QIdentityProxyModel* self);
    friend int QIdentityProxyModel_Receivers(const QIdentityProxyModel* self, const char* signal);
    friend int QIdentityProxyModel_QBaseReceivers(const QIdentityProxyModel* self, const char* signal);
    friend bool QIdentityProxyModel_IsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal);
    friend bool QIdentityProxyModel_QBaseIsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal);
};

#endif
